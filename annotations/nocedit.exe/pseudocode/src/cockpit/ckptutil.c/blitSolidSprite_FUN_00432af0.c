// Name: cockpit_ckptutil.c_blitSolidSprite_FUN_00432af0
// Address: 00432af0
// Address Range: [[00432af0, 00432b25]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_blitSolidSprite_FUN_00432af0 (void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height, int src_y_param)

#include "nocturne.h"

void __cdecl
cockpit_ckptutil_c_blitSolidSprite_FUN_00432af0
          (void *sprite_data,int screen_x,int screen_y,int src_x,int src_y,int width,int height,
          int src_y_param)

{
  cockpit_ckptutil_c_blitSpanBasedSpriteClipped_FUN_00431f40
            (sprite_data,(void *)screen_x,0,height,screen_y,src_x,src_y,width);
  return;
}
