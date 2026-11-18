// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_004e8180
// Address: 004e8180
// Address Range: [[004e8180, 004e849a]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_004e8180(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_004e8180(CMarquee *this_ptr)

{
  uint uVar1;
  CCourse *pCVar2;
  int iVar3;
  byte bVar4;
  double dVar5;
  float afStackY_10b4 [1010];
  CVector3f CStack_c8;
  CVector3f CStack_bc;
  CVector3f CStack_b0;
  byte auStack_9c [8];
  float afStack_94 [4];
  CVector3f CStack_84;
  float fStack_78;
  CVector3f CStack_74;
  CVector3f CStack_68;
  byte auStack_54 [16];
  float fStack_44;
  float fStack_3c;
  float fStack_38;
  int iStack_30;
  CCourse *pCStack_2c;
  CCourse *pCStack_28;
  CCourse *pCStack_24;
  CCourse *pCStack_1c;
  int iStack_18;
  int iStack_14;
  int iStack_10;
  
  bVar4 = 0;
  if (this_ptr->is_visible != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0046b8e0
              (g_CDemonRenderer_PTR_0060b280,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0046ca00
              (g_CDemonRenderer_PTR_0060b280,&g_MarqueeSparkTexture);
    pCVar2 = &this_ptr->course;
    if (g_CDemonMission_PTR_00618170->is_in_editor == 0) {
      if (this_ptr->type == MARQUEE_DISPLAY_CURSIVE) {
        dVar5 = round((double)this_ptr->param);
        iStack_18 = (int)ROUND(dVar5);
        if (0 < iStack_18) {
          iVar3 = 0;
          pCStack_24 = pCVar2;
          do {
            fStack_3c = (float)iVar3;
            iStack_18 = iVar3;
            core_course_cpp_CCourse_evaluate_FUN_00438c40
                      (pCStack_2c,fStack_3c,(CVector3f *)(auStack_9c + 4),
                       (CVector3f *)(auStack_54 + 4));
            core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                      (&this_ptr->base,(CVector3f *)(auStack_9c + 4),&CStack_bc);
            CStack_84.y = CStack_bc.x;
            *(uint *)((int)&CStack_84 + (uint)bVar4 * -8 + 8) =
                 *(uint *)((int)&CStack_bc + (uint)bVar4 * -8 + 4);
            (&fStack_78)[(uint)bVar4 * -2 + (uint)bVar4 * -2] =
                 *(float *)((int)&CStack_bc + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
            if ((float *)(auStack_9c + 4) != &CStack_84.y) {
              auStack_9c._4_4_ = CStack_84.y;
              afStack_94[0] = CStack_84.z;
              afStack_94[1] = fStack_78;
            }
            core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0
                      (this_ptr,(CVector3f *)(auStack_9c + 4));
            iVar3 = iVar3 + 1;
          } while (iVar3 < iStack_18);
        }
      }
      else if (this_ptr->type == MARQUEE_DISPLAY_RING) {
        dVar5 = round((double)this_ptr->param);
        pCStack_2c = (CCourse *)pCVar2->len;
        iVar3 = (int)ROUND(dVar5);
        iStack_14 = 0;
        iStack_30 = iVar3;
        if (0 < (int)pCStack_2c) {
          iStack_14 = 0;
          pCStack_1c = pCVar2;
          do {
            if (iVar3 % this_ptr->phase != 0) {
              iStack_10 = iStack_14;
              fStack_38 = (float)iStack_14;
              core_course_cpp_CCourse_evaluate_FUN_00438c40
                        (pCStack_1c,fStack_38,&CStack_84,(CVector3f *)auStack_54);
              core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                        (&this_ptr->base,&CStack_84,(CVector3f *)auStack_9c);
              uVar1 = auStack_9c._0_4_;
              *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8) =
                   *(uint *)(auStack_9c + (uint)bVar4 * -8 + 4);
              *(float *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 4) =
                   afStack_94[(uint)bVar4 * -2 + (uint)bVar4 * -2];
              if (&CStack_84 != (CVector3f *)&stack0xffffff34) {
                CStack_84.x = (float)uVar1;
                CStack_84.y = CStack_c8.x;
                CStack_84.z = CStack_c8.y;
              }
              core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(this_ptr,&CStack_84);
            }
            iStack_14 = iStack_14 + 1;
            iVar3 = iVar3 + 1;
          } while (iStack_14 < (int)pCStack_2c);
        }
      }
    }
    else {
      pCStack_24 = (CCourse *)pCVar2->len;
      iVar3 = 0;
      if (0 < (int)pCStack_24) {
        do {
          pCStack_1c = pCVar2;
          fStack_44 = (float)iVar3;
          iStack_18 = iVar3;
          core_course_cpp_CCourse_evaluate_FUN_00438c40(pCStack_28,fStack_44,&CStack_74,&CStack_68);
          core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408d70
                    (&this_ptr->base,&CStack_74,&CStack_b0);
          CStack_c8.x = CStack_b0.x;
          *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + 4) =
               *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + 4);
          *(uint *)((int)&CStack_c8 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8) =
               *(uint *)((int)&CStack_b0 + (uint)bVar4 * -8 + (uint)bVar4 * -8 + 8);
          if (&CStack_74 != &CStack_c8) {
            CStack_74.x = CStack_c8.x;
            CStack_74.y = CStack_c8.y;
            CStack_74.z = CStack_c8.z;
          }
          core_marquee_cpp_CMarquee_renderLightBulb_FUN_004e7ff0(this_ptr,&CStack_74);
          iVar3 = iVar3 + 1;
          pCVar2 = pCStack_1c;
        } while (iVar3 < (int)pCStack_28);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0046b8d0(g_CDemonRenderer_PTR_0060b280,0);
    return 1;
  }
  return 0;
}
