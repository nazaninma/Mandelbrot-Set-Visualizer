use_bpm 85


arp = (ring :c3, :e3, :g3, :b3, :c4, :b3, :g3, :e3)


live_loop :arp do
  use_synth :supersaw
  play arp.tick, cutoff: (line 40, 120, steps: 100).reflect.look, sustain: 0.05 , amp:2
  sleep 0.5
end


live_loop :heart do
  sample :drum_bass_hard, cutoff: 90 , amp:0.5
  sleep 0.25
  sample :drum_bass_hard, cutoff: 90 ,amp:0.5
  sleep 0.75
end
