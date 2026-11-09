// Name: core_marquee.cpp_FUN_004e8180
// Address: 004e8180
// Address Range: [[004e8180, 004e849a]]
// Convention: unknown
// Signature: undefined4 core_marquee_cpp_FUN_004e8180(CMarquee *param_1)

#include "nocturne.h"

uint core_marquee_cpp_FUN_004e8180(CMarquee *param_1)

{
  CCourse *pCVar1;
  int iVar2;
  byte bVar3;
  float10 fVar4;
  uint auStackY_10b0 [1012];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  CVector3f CStack_a4;
  CVector3f CStack_98;
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
  if (*(int *)&param_1->field_0x2f8 != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(DAT_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0(DAT_0060b280,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (DAT_0060b280,(SMRGLTextureBasic *)0x617f2c);
    if (*(int *)(0x01D182F0 + 0x1008) == 0) {
      if (*(int *)&param_1->field_0x2fc == 1) {
        fVar4 = (float10)*(float *)&param_1->field_0x2d8;
        pCVar1 = (CCourse *)round();
        iStack_14 = (int)ROUND(fVar4);
        if (0 < iStack_14) {
          iVar2 = 0;
          pCStack_20 = pCVar1;
          do {
            fStack_30 = (float)iVar2;
            iStack_c = iVar2;
            core_course_cpp_FUN_00438c40(pCStack_20,fStack_30,&CStack_8c,&CStack_44);
            core_actor_cpp_FUN_00408d70(param_1,&CStack_8c);
            CStack_74._0_4_ = CStack_b0._0_4_;
            *(uint *)((int)&CStack_74 + (uint)bVar3 * -8 + 4) =
                 *(uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + 4);
            *(uint *)((int)&CStack_74 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                 *(uint *)((int)&CStack_b0 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
            if (&CStack_8c != &CStack_74) {
              CStack_8c._0_4_ = CStack_74._0_4_;
              CStack_8c._4_4_ = CStack_74._4_4_;
              CStack_8c._8_4_ = CStack_74._8_4_;
            }
            core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(param_1,&CStack_8c);
            iVar2 = iVar2 + 1;
          } while (iVar2 < iStack_c);
        }
      }
      else if (*(int *)&param_1->field_0x2fc == 0) {
        fVar4 = (float10)*(float *)&param_1->field_0x2d8;
        pCVar1 = (CCourse *)round();
        iStack_28 = *(int *)pCVar1;
        iVar2 = (int)ROUND(fVar4);
        iStack_10 = 0;
        iStack_2c = iVar2;
        if (0 < iStack_28) {
          iStack_10 = 0;
          pCStack_18 = pCVar1;
          do {
            if (iVar2 % *(int *)&param_1->field_0x2dc != 0) {
              iStack_c = iStack_10;
              fStack_34 = (float)iStack_10;
              core_course_cpp_FUN_00438c40(pCStack_18,fStack_34,&CStack_80,&CStack_50);
              core_actor_cpp_FUN_00408d70(param_1,&CStack_80);
              CStack_c8._0_4_ = CStack_98._0_4_;
              *(uint *)((int)&CStack_c8 + (uint)bVar3 * -8 + 4) =
                   *(uint *)((int)&CStack_98 + (uint)bVar3 * -8 + 4);
              *(uint *)((int)&CStack_c8 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
                   *(uint *)((int)&CStack_98 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
              if (&CStack_80 != &CStack_c8) {
                CStack_80._0_4_ = CStack_c8._0_4_;
                CStack_80._4_4_ = CStack_c8._4_4_;
                CStack_80._8_4_ = CStack_c8._8_4_;
              }
              core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(param_1,&CStack_80);
            }
            iStack_10 = iStack_10 + 1;
            iVar2 = iVar2 + 1;
          } while (iStack_10 < iStack_28);
        }
      }
    }
    else {
      iStack_24 = *(int *)&param_1->field_0x300;
      iVar2 = 0;
      pCVar1 = (CCourse *)&param_1->field_0x300;
      if (0 < iStack_24) {
        do {
          pCStack_1c = pCVar1;
          fStack_38 = (float)iVar2;
          iStack_c = iVar2;
          core_course_cpp_FUN_00438c40(pCStack_1c,fStack_38,&CStack_68,&CStack_5c);
          core_actor_cpp_FUN_00408d70(param_1,&CStack_68);
          CStack_bc._0_4_ = CStack_a4._0_4_;
          *(uint *)((int)&CStack_bc + (uint)bVar3 * -8 + 4) =
               *(uint *)((int)&CStack_a4 + (uint)bVar3 * -8 + 4);
          *(uint *)((int)&CStack_bc + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8) =
               *(uint *)((int)&CStack_a4 + (uint)bVar3 * -8 + (uint)bVar3 * -8 + 8);
          if (&CStack_68 != &CStack_bc) {
            CStack_68._0_4_ = CStack_bc._0_4_;
            CStack_68._4_4_ = CStack_bc._4_4_;
            CStack_68._8_4_ = CStack_bc._8_4_;
          }
          core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(param_1,&CStack_68);
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
