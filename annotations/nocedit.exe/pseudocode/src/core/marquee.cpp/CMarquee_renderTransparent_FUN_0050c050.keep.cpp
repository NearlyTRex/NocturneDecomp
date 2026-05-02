// Name: core_marquee.cpp_CMarquee_renderTransparent_FUN_0050c050
// Address: 0050c050
// MANUAL RECONSTRUCTION
// Address Range: [[0050c050, 0050c2ed]]
// Convention: __cdecl
// Signature: int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_0050c050(CMarquee *this_ptr)

#include "nocturne.h"

int __cdecl core_marquee_cpp_CMarquee_renderTransparent_FUN_0050c050(CMarquee *this_ptr)

{
  CCourse *this_ptr_01;
  float fVar1;
  CVector3f *pCVar1;
  CVector3f *pCVar2;
  int iVar4;
  int iVar2;
  int iVar3;
  int iVar5;
  CVector3f local_94;
  CVector3f local_88;
  CVector3f local_7c;
  CVector3f local_70;
  CVector3f local_64;
  CVector3f local_58;
  CVector3f local_4c;
  CVector3f local_40;
  CVector3f local_34;
  
  if (this_ptr->is_visible != 0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&SMRGLTextureBasic_0067d150);
    this_ptr_01 = &this_ptr->course;
    if (g_CDemonMissionPtr->is_in_editor == 0) {
      if (this_ptr->type == 1) {
        fVar1 = this_ptr->param;
        iVar4 = 0;
        if (0 < (int)ROUND(ROUND(fVar1))) {
          do {
            core_course_cpp_CCourse_evaluate_FUN_00442710
                      (this_ptr_01,(float)iVar4,&local_64,&local_7c);
            pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (&this_ptr->base,&local_70,&local_64);
            if (&local_64 != pCVar2) {
              local_64.x = pCVar2->x;
              local_64.y = pCVar2->y;
              local_64.z = pCVar2->z;
            }
            iVar4 = iVar4 + 1;
            core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(this_ptr,&local_64);
          } while (iVar4 < (int)ROUND(ROUND(fVar1)));
        }
      }
      else if (this_ptr->type == 0) {
        iVar4 = this_ptr_01->len;
        iVar5 = 0;
        iVar2 = (int)ROUND(ROUND(this_ptr->param));
        if (0 < iVar4) {
          do {
            if (iVar2 % this_ptr->phase != 0) {
              core_course_cpp_CCourse_evaluate_FUN_00442710
                        (this_ptr_01,(float)iVar5,&local_88,&local_58);
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (&this_ptr->base,&local_40,&local_88);
              if (&local_88 != pCVar2) {
                local_88.x = pCVar2->x;
                local_88.y = pCVar2->y;
                local_88.z = pCVar2->z;
              }
              core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(this_ptr,&local_88);
            }
            iVar5 = iVar5 + 1;
            iVar2 = iVar2 + 1;
          } while (iVar5 < iVar4);
        }
      }
    }
    else {
      iVar4 = this_ptr_01->len;
      iVar3 = 0;
      if (0 < iVar4) {
        do {
          core_course_cpp_CCourse_evaluate_FUN_00442710
                    (this_ptr_01,(float)iVar3,&local_4c,&local_94);
          pCVar1 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (&this_ptr->base,&local_34,&local_4c);
          if (&local_4c != pCVar1) {
            local_4c.x = pCVar1->x;
            local_4c.y = pCVar1->y;
            local_4c.z = pCVar1->z;
          }
          iVar3 = iVar3 + 1;
          core_marquee_cpp_CMarquee_renderLightBulb_FUN_0050bec0(this_ptr,&local_4c);
        } while (iVar3 < iVar4);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    return 1;
  }
  return 0;
}
