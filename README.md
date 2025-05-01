# Mandelbrot-Set-Visualizer
Mandelbrot Set Visualizer &amp; Fractal Art Generator

## Overview
This project explores the infinite beauty of the Mandelbrot Set by generating visual and auditory art through algorithmic programming. The goal is to create a 1-3 minute video showcasing a journey through the Mandelbrot Set, with both images and music generated entirely from scratch using computational methods.

## Features
- **Visual Exploration**: 
  - Generate high-resolution images of the Mandelbrot Set
  - Perform zooming, rotation, and center-shifting animations
  - Customize color schemes and rendering techniques
  
- **Auditory Art**: 
  - Algorithmically generate music that complements the visual journey
  - Use tools like Sonic Pi to create dynamic soundscapes

- **Video Production**: 
  - Combine generated images and music into a seamless video using `ffmpeg`
  - Experiment with different artistic styles and transitions

## Tools and Technologies
- **Programming Languages**:
  - Python (for prototyping and idea generation)
  - C (for high-performance image generation)
  - Sonic Pi (for music synthesis)
  
- **Libraries and Tools**:
  - `ffmpeg` for video and audio processing
  - Custom scripts for Mandelbrot Set rendering and animation

## Getting Started
1. **Clone the Repository**:
   ```bash
   git clone [my-repo-URL]
   ```

2. **Generate Images**:
   - Compile and run the C program to generate Mandelbrot Set images:
     ```bash
     gcc -o main main.c
     ./main play.cfg
     ```

3. **Produce the Video**:
   - Combine images and music using `ffmpeg`:
     ```bash
     ffmpeg -r 5 -i %05d.bmp -i music.wav -c:v libx264 -vf fps=25 -pix_fmt yuv420p out.mp4
     ```

## Example Input File (`play.cfg`)
```
1800*1200
-1.5,1.5,-1,1
zoom 2:20
center -0.7746806106269039,-0.1374168856037867:20
rotate 90:10
hold 10
```

## Inspiration and Resources
- Explore the Mandelbrot Set interactively: [Mandelbrot Viewer](https://mandelbrot.surge.sh)
- Watch tutorials on Sonic Pi: [Sonic Pi Official](https://sonic-pi.net)


