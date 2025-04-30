#ifndef __MANDELBROTSET_H__
#define __MANDELBROTSET_H__

#include"defs.h"
#include<math.h>

int get_mbs_iter(double x, double y)
{
    int MAX_ITER=255;

    double re_c = x;
    double im_c = y;
    int n = 0;
    while (n < MAX_ITER) {
    double re = x * x - y* y;
    double im = 2 * x * y;
    x = re + re_c;
    y = im + im_c;
    n++;
    if (x + y > 10) break;
    }
    
    return n  ;
    

}



void hsv_to_rgb(int i, int min, int max, COLORINDEX* p)
{
   p->r=i;
   p->g=i;
   p->b=i;
}

void UpdateImageData(ImageState* state)
{
    state->bmFileData.bmHeader.colorIdx[0].r=66 ;
    state->bmFileData.bmHeader.colorIdx[0].g=30 ;
    state->bmFileData.bmHeader.colorIdx[0].b=15 ;

    state->bmFileData.bmHeader.colorIdx[1].r=25 ;
    state->bmFileData.bmHeader.colorIdx[1].g=7 ;
    state->bmFileData.bmHeader.colorIdx[1].b= 26;

    state->bmFileData.bmHeader.colorIdx[2].r=9 ;
    state->bmFileData.bmHeader.colorIdx[2].g= 1;
    state->bmFileData.bmHeader.colorIdx[2].b= 47;

    state->bmFileData.bmHeader.colorIdx[3].r= 4;
    state->bmFileData.bmHeader.colorIdx[3].g= 4;
    state->bmFileData.bmHeader.colorIdx[3].b= 73;

    state->bmFileData.bmHeader.colorIdx[4].r= 0;
    state->bmFileData.bmHeader.colorIdx[4].g= 7;
    state->bmFileData.bmHeader.colorIdx[4].b= 100;

    state->bmFileData.bmHeader.colorIdx[5].r=12 ;
    state->bmFileData.bmHeader.colorIdx[5].g=44 ;
    state->bmFileData.bmHeader.colorIdx[5].b= 138;

    state->bmFileData.bmHeader.colorIdx[6].r=24 ;
    state->bmFileData.bmHeader.colorIdx[6].g=82 ;
    state->bmFileData.bmHeader.colorIdx[6].b=177 ;

    state->bmFileData.bmHeader.colorIdx[7].r=57 ;
    state->bmFileData.bmHeader.colorIdx[7].g= 125;
    state->bmFileData.bmHeader.colorIdx[7].b=209 ;

    state->bmFileData.bmHeader.colorIdx[8].r= 134;
    state->bmFileData.bmHeader.colorIdx[8].g=181 ;
    state->bmFileData.bmHeader.colorIdx[8].b=229 ;

    state->bmFileData.bmHeader.colorIdx[9].r=211 ;
    state->bmFileData.bmHeader.colorIdx[9].g= 236;
    state->bmFileData.bmHeader.colorIdx[9].b= 248;

    state->bmFileData.bmHeader.colorIdx[10].r= 241;
    state->bmFileData.bmHeader.colorIdx[10].g= 233;
    state->bmFileData.bmHeader.colorIdx[10].b= 191;

    state->bmFileData.bmHeader.colorIdx[11].r=248 ;
    state->bmFileData.bmHeader.colorIdx[11].g=201 ;
    state->bmFileData.bmHeader.colorIdx[11].b=95 ;

    state->bmFileData.bmHeader.colorIdx[12].r=255 ;
    state->bmFileData.bmHeader.colorIdx[12].g=170 ;
    state->bmFileData.bmHeader.colorIdx[12].b= 0;

    state->bmFileData.bmHeader.colorIdx[13].r=204 ;
    state->bmFileData.bmHeader.colorIdx[13].g=128 ;
    state->bmFileData.bmHeader.colorIdx[13].b= 0;

    state->bmFileData.bmHeader.colorIdx[14].r=153 ;
    state->bmFileData.bmHeader.colorIdx[14].g=87 ;
    state->bmFileData.bmHeader.colorIdx[14].b= 0;

    state->bmFileData.bmHeader.colorIdx[15].r= 106;
    state->bmFileData.bmHeader.colorIdx[15].g=52 ;
    state->bmFileData.bmHeader.colorIdx[15].b= 3;


    double pi = 3.14/180;
    for(int x=0; x<state->width; x++)
    {
        double rad_angle;

        for(int y=0; y<state->height; y++)
        {
            rad_angle= (state->angle)*pi;
            double dx= state->minx+((double)x/state->width)*(state->maxx-state->minx);
            double dy= state->miny+((double)y/state->height)*(state->maxy- state->miny);
    

            double rx =state->cx + (dx- state->cx)*cos(rad_angle) - (dy -state->cy) * sin(rad_angle);
            double ry = state->cy + (dx- state->cx)*sin(rad_angle) + (dy -state->cy) * cos(rad_angle);

            int iter = get_mbs_iter(rx, ry);
            int u= iter%16;
            if(u==0)
            {
                state->bmFileData.bmData[x + y*state->width]=0;
            }
            if(u==1)
            {
                state->bmFileData.bmData[x +y*state->width]=1;
            }
            if(u==2)
            {
                state->bmFileData.bmData[x +y*state->width]=2;
            }
            if(u==3)
            {
                state->bmFileData.bmData[x +y*state->width]=3;
            }
            if(u==4)
            {
                state->bmFileData.bmData[x +y*state->width]=4;
            }
            if(u==5)
            {
                state->bmFileData.bmData[x +y*state->width]=5;
            }
            if(u==6)
            {
                state->bmFileData.bmData[x +y*state->width]=6;
            }
            if(u==7)
            {
                state->bmFileData.bmData[x +y*state->width]=7;
            }
            if(u==8)
            {
                state->bmFileData.bmData[x +y*state->width]=8;
            }
            if(u==9)
            {
                state->bmFileData.bmData[x +y*state->width]=9;
            }
            if(u==10)
            {
                state->bmFileData.bmData[x +y*state->width]=10;
            }
            if(u==11)
            {
                state->bmFileData.bmData[x +y*state->width]=11;
            }
            if(u==12)
            {
                state->bmFileData.bmData[x +y*state->width]=12;
            }
            if(u==13)
            {
                state->bmFileData.bmData[x +y*state->width]=13;
            }
            if(u==14)
            {
                state->bmFileData.bmData[x +y*state->width]=14;
            }
            if(u==15)
            {
                state->bmFileData.bmData[x +y*state->width]=15;
            }

            // state->bmFileData.bmData[y * state->width + x] = iter;
         }

    }
    // for(int i=0;i<256;i++)
    // {
    //     int hue=(int)(((double)i));
    //     hsv_to_rgb (hue,255,0,&(state->bmFileData.bmHeader.colorIdx[i]));
    // }
    state->bmFileData.bmHeader.bmInfoHeader.biClrUsed = 255;
    state->bmFileData.bmHeader.bmInfoHeader.biClrImportant = 255;
    
}

void ChangeCenter(ImageState* state, double newcx, double newcy, int steps)
{
    double x_step=(  newcx -state->cx )/steps;
    double y_step=(newcy - state->cy)/steps;

    for(int i=0;i<steps; i++)
    {
        state->cx += x_step;
        state->maxx += x_step;
        state->minx += x_step;
        state->miny += y_step;
        state->cy += y_step;
        state->maxy += y_step;
        UpdateImageData(state);
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }
}

void ChangeZoom(ImageState* state, double zoom, int steps)
{
    double zoom_unit=pow (zoom, 1.0/ steps);
    for(int i=0; i<steps; i++)
    {
        state->minx= state->cx - (state->cx- state->minx)/zoom_unit;
        state->miny= state->cy - (state->cy- state->miny)/zoom_unit;
        state->maxx= state->cx + (state->maxx -state->cx )/zoom_unit;
        state->maxy= state->cy + (state->maxy -state->cy)/zoom_unit;
        UpdateImageData(state);
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }

}

void ChangeRotation(ImageState* state, double angle, int steps)
{
   
    double pi = 3.14/180;
    double rad_angle;
    rad_angle= (state->angle)*pi;
    
    angle = angle *pi;

    double angle_step =  (angle - rad_angle )/ steps;
    for(int i=0; i<steps; i++)
    {
        rad_angle += angle_step;
        state->angle= rad_angle/pi;
        UpdateImageData(state);
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }
}

void Hold(ImageState* state, int steps)
{

    for(int i=0; i<steps; i++)
    {
    
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }
}

void RotateZoom(ImageState* state, double angle,double zoom, int steps)
{
    double pi = 3.14/180;
    double rad_angle;
    rad_angle= (state->angle)*pi;
    double zoom_unit=pow (zoom, 1.0/ steps);
    angle = angle *pi;
    double angle_step =  (angle - rad_angle )/ steps;
    for(int i=0; i<steps; i++)
    {
        rad_angle += angle_step;
        state->angle= rad_angle/pi;
        state->minx= state->cx - (state->cx- state->minx)/zoom_unit;
        state->miny= state->cy - (state->cy- state->miny)/zoom_unit;
        state->maxx= state->cx + (state->maxx -state->cx )/zoom_unit;
        state->maxy= state->cy + (state->maxy -state->cy)/zoom_unit;
        UpdateImageData(state);
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }

}


void CenterZoom(ImageState* state, double newcx, double newcy, double zoom, int steps)
{
    double x_step=(  newcx -state->cx )/steps;
    double y_step=(newcy - state->cy)/steps;
    double zoom_unit=pow (zoom, 1.0/ steps);

    for(int i=0;i<steps; i++)
    {
        state->cx += x_step;
        state->maxx += x_step;
        state->minx += x_step;
        state->miny += y_step;
        state->cy += y_step;
        state->maxy += y_step;
        state->minx= state->cx - (state->cx- state->minx)/zoom_unit;
        state->miny= state->cy - (state->cy- state->miny)/zoom_unit;
        state->maxx= state->cx + (state->maxx -state->cx )/zoom_unit;
        state->maxy= state->cy + (state->maxy -state->cy)/zoom_unit;
        UpdateImageData(state);
        WriteBitmapFile(state->image_count++, & state->bmFileData);
    }


}

#endif