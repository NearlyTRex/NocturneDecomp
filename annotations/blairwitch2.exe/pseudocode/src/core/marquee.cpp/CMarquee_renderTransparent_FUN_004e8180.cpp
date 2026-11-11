// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_004e8180
// Address: 004e8180
// Address Range: [[004e8180, 004e849a]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_004e8180(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_004e8180(CMarquee *this_ptr)

{
  CCourse *pCVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  float afStackY_10b0 [1012];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  float fStack_b0;
  float afStack_ac [5];
  float fStack_98;
  CVector3f CStack_8c;
  CVector3f CStack_80;
  CVector3f CStack_74;
  CVector3f CStack_68;
  CVector3f CStack_5c;
  CVector3f CStack_50;
  CVector3f CStack_44;
  float fStack_38;
  float fStack_34;
  float fStack_30;
  int iStack_2c;
  int iStack_28;
  int iStack_24;
  CCourse *pCStack_20;
  CCourse *pCStack_1c;
  CCourse *pCStack_18;
  int iStack_14;
  int iStack_10;
  int iStack_c;
  
  bVar3 = 0;
  if (this_ptr->is_visible != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)0x617f2c);
    if (*(int *)(0x01D182F0 + 0x1008) == 0) {
      if (this_ptr->type == MARQUEE_DISPLAY_CURSIVE) {
        fVar4 = (float10)this_ptr->param;
        pCVar1 = (CCourse *)round();
        iStack_14 = (int)ROUND(fVar4);
        if (0 < iStack_14) {
          iVar2 = 0;
          pCStack_20 = pCVar1;
          do {
            fStack_30 = (float)iVar2;
            iStack_c = iVar2;
            core_course_cpp_FUN_00438c40(pCStack_20,fStack_30,&CStack_8c,&CStack_44);
            core_actor_cpp_FUN_00408d70(this_ptr,&CStack_8c);
            CStack_74.x = fStack_b0;
            *(float *)((int)&CStack_74 + (uint)bVar3 * -8 + 4) = afStack_ac[(uint)bVar3 * -2];
            *(float *)((int)&CStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                 afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 1];
            if (&CStack_8c != &CStack_74) {
              CStack_8c.x = CStack_74.x;
              CStack_8c.y = CStack_74.y;
              CStack_8c.z = CStack_74.z;
            }
            core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(this_ptr,&CStack_8c);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iStack_c);
        }
      }
      else if (this_ptr->type == MARQUEE_DISPLAY_RING) {
        fVar4 = (float10)this_ptr->param;
        pCVar1 = (CCourse *)round();
        iStack_28 = pCVar1->len;
        iVar2 = (int)ROUND(fVar4);
        iStack_10 = 0;
        iStack_2c = iVar2;
        if (0 < iStack_28) {
          iStack_10 = 0;
          pCStack_18 = pCVar1;
          do {
            if (iVar2 % this_ptr->phase != 0) {
              iStack_c = iStack_10;
              fStack_34 = (float)iStack_10;
              core_course_cpp_FUN_00438c40(pCStack_18,fStack_34,&CStack_80,&CStack_50);
              core_actor_cpp_FUN_00408d70(this_ptr,&CStack_80);
              CStack_c8.x = fStack_98;
              *(float *)((int)&CStack_c8 + (uint)bVar3 * -8 + 4) = afStack_ac[(uint)bVar3 * -2 + 6];
              *(float *)((int)&CStack_c8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                   afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 7];
              if (&CStack_80 != &CStack_c8) {
                CStack_80.x = CStack_c8.x;
                CStack_80.y = CStack_c8.y;
                CStack_80.z = CStack_c8.z;
              }
              core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(this_ptr,&CStack_80);
            }
            iStack_10 = iStack_10 + 1;
            iVar2 = iVar2 + 1;
          } while (iStack_10 < iStack_28);
        }
      }
    }
    else {
      iStack_24 = (this_ptr->course).len;
      iVar2 = 0;
      pCVar1 = &this_ptr->course;
      if (0 < iStack_24) {
        do {
          pCStack_1c = pCVar1;
          fStack_38 = (float)iVar2;
          iStack_c = iVar2;
          core_course_cpp_FUN_00438c40(pCStack_1c,fStack_38,&CStack_68,&CStack_5c);
          core_actor_cpp_FUN_00408d70(this_ptr,&CStack_68);
          CStack_bc.x = afStack_ac[2];
          *(float *)((int)&CStack_bc + (uint)bVar3 * -8 + 4) = afStack_ac[(uint)bVar3 * -2 + 3];
          *(float *)((int)&CStack_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               afStack_ac[(uint)bVar3 * -2 + (uint)bVar3 * -2 + 4];
          if (&CStack_68 != &CStack_bc) {
            CStack_68.x = CStack_bc.x;
            CStack_68.y = CStack_bc.y;
            CStack_68.z = CStack_bc.z;
          }
          core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(this_ptr,&CStack_68);
          iVar2 = iVar2 + 1;
          pCVar1 = pCStack_1c;
        } while (iVar2 < (int)pCStack_1c);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,0);
    return 1;
  }
  return 0;
}
