// Name: core_marquee.cpp_FUN_0050c050
// Address: 0050c050
// Address Range: [[0050c050, 0050c2ed]]
// Convention: unknown
// Signature: undefined core_marquee.cpp_FUN_0050c050()

#include "nocturne.h"

/* Signature: byte actors_other_marquee.cpp_FUN_0050c050(uint param_1) */

uint core_marquee_cpp_FUN_0050c050(void)

{
  float fVar1;
  CCourse *this_ptr;
  CVector3f *pCVar2;
  int iVar3;
  int iVar4;
  double dVar5;
  CDemonActor *in_stack_00000004;
  CVector3f aCStack_8c [2];
  CVector3f CStack_74;
  CVector3f aCStack_68 [2];
  byte local_4c [24];
  CVector3f local_34;
  float local_28;
  float local_24;
  int local_20;
  CCourse *local_18;
  int local_14;
  int local_10;
  int local_c;
  
  if (in_stack_00000004[1].orient_matrix.m[0].z != 0.0) {
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr2,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
              (g_CDemonRendererPtr2,&DAT_0067d150);
    this_ptr = (CCourse *)&in_stack_00000004[1].orient_matrix.m[1].y;
    if (*(int *)(g_CDemonMissionPtr->unk1 + 4) == 0) {
      fVar1 = in_stack_00000004[1].orient_matrix.m[1].x;
      if (fVar1 == 1.4013e-45) {
        dVar5 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        iVar4 = (int)ROUND(dVar5);
        iVar3 = 0;
        local_14 = iVar4;
        if (0 < iVar4) {
          do {
            local_28 = (float)iVar3;
            local_10 = iVar3;
            core_course_cpp_CCourse_FUN_00442710(this_ptr);
            pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (in_stack_00000004,&CStack_74,aCStack_68);
            if (aCStack_68 != pCVar2) {
              aCStack_68[0].x = pCVar2->x;
              aCStack_68[0].y = pCVar2->y;
              aCStack_68[0].z = pCVar2->z;
            }
            iVar3 = iVar3 + 1;
            core_marquee_cpp_FUN_0050bec0();
          } while (iVar3 < iVar4);
        }
      }
      else if (fVar1 == 0.0) {
        dVar5 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        local_18 = *(CCourse **)this_ptr;
        iVar3 = 0;
        iVar4 = (int)ROUND(dVar5);
        local_20 = iVar4;
        if (0 < (int)local_18) {
          do {
            if (iVar4 % (int)in_stack_00000004[1].location.position.z != 0) {
              local_24 = (float)iVar3;
              local_10 = iVar3;
              core_course_cpp_CCourse_FUN_00442710(this_ptr);
              pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (in_stack_00000004,(CVector3f *)(local_4c + 8),aCStack_8c);
              if (aCStack_8c != pCVar2) {
                aCStack_8c[0].x = pCVar2->x;
                aCStack_8c[0].y = pCVar2->y;
                aCStack_8c[0].z = pCVar2->z;
              }
              core_marquee_cpp_FUN_0050bec0();
            }
            iVar3 = iVar3 + 1;
            iVar4 = iVar4 + 1;
          } while (iVar3 < (int)local_18);
        }
      }
    }
    else {
      fVar1 = *(float *)this_ptr;
      iVar4 = 0;
      if (0 < (int)fVar1) {
        do {
          local_18 = this_ptr;
          local_28 = (float)iVar4;
          local_c = iVar4;
          core_course_cpp_CCourse_FUN_00442710(local_18);
          pCVar2 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,&local_34,(CVector3f *)local_4c);
          if ((CVector3f *)local_4c != pCVar2) {
            local_4c._0_4_ = pCVar2->x;
            local_4c._4_4_ = pCVar2->y;
            local_4c._8_4_ = pCVar2->z;
          }
          iVar4 = iVar4 + 1;
          core_marquee_cpp_FUN_0050bec0();
          this_ptr = local_18;
        } while (iVar4 < (int)fVar1);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr2,0);
    return 1;
  }
  return 0;
}
