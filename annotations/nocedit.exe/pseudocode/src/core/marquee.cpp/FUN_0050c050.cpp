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
  CCourse *pCVar2;
  CVector3f *pCVar3;
  CCourse *this_ptr;
  CCourse *this_ptr_00;
  int iVar4;
  int iVar5;
  double dVar6;
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
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,1);
    engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60(g_CDemonRendererPtr,0xffff);
    engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80(g_CDemonRendererPtr,&DAT_0067d150)
    ;
    pCVar2 = (CCourse *)&in_stack_00000004[1].orient_matrix.m[1].y;
    if (*(int *)(g_CDemonMissionPtr->field0_0x0 + 4) == 0) {
      fVar1 = in_stack_00000004[1].orient_matrix.m[1].x;
      if (fVar1 == 1.4013e-45) {
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        iVar5 = (int)ROUND(dVar6);
        iVar4 = 0;
        local_14 = iVar5;
        if (0 < iVar5) {
          do {
            local_28 = (float)iVar4;
            local_10 = iVar4;
            core_course_cpp_CCourse_FUN_00442710(this_ptr);
            pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                               (in_stack_00000004,&CStack_74,aCStack_68);
            if (aCStack_68 != pCVar3) {
              aCStack_68[0].x = pCVar3->x;
              aCStack_68[0].y = pCVar3->y;
              aCStack_68[0].z = pCVar3->z;
            }
            iVar4 = iVar4 + 1;
            core_marquee_cpp_FUN_0050bec0();
          } while (iVar4 < iVar5);
        }
      }
      else if (fVar1 == 0.0) {
        dVar6 = crt_math_c_round_FUN_005fe6b0((double)in_stack_00000004[1].location.position.y);
        local_18 = (CCourse *)this_ptr_00->len;
        iVar4 = 0;
        iVar5 = (int)ROUND(dVar6);
        local_20 = iVar5;
        if (0 < (int)local_18) {
          do {
            if (iVar5 % (int)in_stack_00000004[1].location.position.z != 0) {
              local_24 = (float)iVar4;
              local_10 = iVar4;
              core_course_cpp_CCourse_FUN_00442710(this_ptr_00);
              pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                                 (in_stack_00000004,(CVector3f *)(local_4c + 8),aCStack_8c);
              if (aCStack_8c != pCVar3) {
                aCStack_8c[0].x = pCVar3->x;
                aCStack_8c[0].y = pCVar3->y;
                aCStack_8c[0].z = pCVar3->z;
              }
              core_marquee_cpp_FUN_0050bec0();
            }
            iVar4 = iVar4 + 1;
            iVar5 = iVar5 + 1;
          } while (iVar4 < (int)local_18);
        }
      }
    }
    else {
      fVar1 = *(float *)pCVar2;
      iVar5 = 0;
      if (0 < (int)fVar1) {
        do {
          local_18 = pCVar2;
          local_28 = (float)iVar5;
          local_c = iVar5;
          core_course_cpp_CCourse_FUN_00442710(local_18);
          pCVar3 = core_actor_cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
                             (in_stack_00000004,&local_34,(CVector3f *)local_4c);
          if ((CVector3f *)local_4c != pCVar3) {
            local_4c._0_4_ = pCVar3->x;
            local_4c._4_4_ = pCVar3->y;
            local_4c._8_4_ = pCVar3->z;
          }
          iVar5 = iVar5 + 1;
          core_marquee_cpp_FUN_0050bec0();
          pCVar2 = local_18;
        } while (iVar5 < (int)fVar1);
      }
    }
    engine_drender_cpp_CDemonRenderer_setBlendMode_FUN_0048ca50(g_CDemonRendererPtr,0);
    return 1;
  }
  return 0;
}
