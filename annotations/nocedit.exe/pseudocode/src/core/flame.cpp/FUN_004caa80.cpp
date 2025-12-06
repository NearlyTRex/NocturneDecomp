// Name: core_flame.cpp_FUN_004caa80
// Address: 004caa80
// Address Range: [[004caa80, 004cabf2]]
// Convention: unknown
// Signature: undefined core_flame.cpp_FUN_004caa80()

#include "nocturne.h"

/* Signature: byte actors_other_flame.cpp_FUN_004caa80(uint param_1, uint param_2)
    */

void core_flame_cpp_FUN_004caa80(void)

{
  float fVar1;
  CDemonRenderer *this_ptr;
  int iVar2;
  CBoundingBox3D *this_ptr_00;
  float fVar3;
  CDemonActor *pCVar4;
  BADSPACEBASE *in_ESP;
  int iVar5;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  float fStack00000010;
  float fStack_24;
  
  this_ptr = g_CDemonRendererPtr;
  in_stack_00000004[1].field26_0x148 = 0;
  in_stack_00000004[1].previous_transform_state.dirty_flags = 0;
  iVar2 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if ((iVar2 == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr_00 = (*in_stack_00000004->vtable->getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffd0);
    fStack_24 = 7.040803e-39;
    fVar3 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    in_stack_00000004[1].previous_transform_state.orientation.y = fVar3;
    core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000004);
    if ((in_stack_00000004[1].previous_transform_state.orientation.y != 0.0) &&
       (((1.0 < SQRT(*(float *)(in_stack_00000004[1].actor_name + 8) *
                     *(float *)(in_stack_00000004[1].actor_name + 8) +
                     *(float *)in_stack_00000004[1].actor_name *
                     *(float *)in_stack_00000004[1].actor_name +
                     *(float *)(in_stack_00000004[1].actor_name + 4) *
                     *(float *)(in_stack_00000004[1].actor_name + 4)) &&
         (0.0 < in_stack_00000004[1].orient_matrix.m[2].x)) &&
        (in_stack_00000004[1].orient_matrix.m[1].z == 0.0)))) {
      iVar2 = 0;
      fStack00000010 = 0.0;
      for (iVar5 = 0; iVar5 < (int)g_CDemonSetPtr->actor_list_ptr; iVar5 = iVar5 + 1) {
        pCVar4 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar2),
                            g_CFlameClassInfo.name_hash);
        if (pCVar4 != (CDemonActor *)0x0) {
          fVar3 = (in_stack_00000004->location).position.x - (pCVar4->location).position.x;
          fVar1 = (in_stack_00000004->location).position.y - (pCVar4->location).position.y;
          fStack00000010 = (in_stack_00000004->location).position.z - (pCVar4->location).position.z;
          if ((SQRT(fStack00000010 * fStack00000010 + fVar3 * fVar3 + fVar1 * fVar1) <
               (float)5) && (pCVar4[1].field26_0x148 == 1)) {
            return;
          }
        }
        iVar2 = iVar2 + 4;
      }
      if (fStack00000010 == 0.0) {
        in_stack_00000004[1].field26_0x148 = 1;
        return;
      }
    }
  }
  return;
}
