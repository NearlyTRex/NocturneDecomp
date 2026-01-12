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
  CDemonRenderer *this_ptr;
  int iVar1;
  CBoundingBox3D *this_ptr_00;
  float fVar2;
  CDemonActor *pCVar3;
  BADSPACEBASE *in_ESP;
  int iVar4;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  CBoundingBox3D CStack_38;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  int iStack_14;
  
  this_ptr = g_CDemonRendererPtr;
  in_stack_00000004[1].field26_0x148 = 0;
  in_stack_00000004[1].previous_transform_state.dirty_flags = 0;
  iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if ((iVar1 == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr_00 = (*in_stack_00000004->vtable->getBoundingBox)(in_stack_00000004,&CStack_38);
    fVar2 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    in_stack_00000004[1].previous_transform_state.orientation.y = fVar2;
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
      iVar1 = 0;
      iStack_14 = 0;
      for (iVar4 = 0; iVar4 < (int)g_CDemonSetPtr->actor_list_ptr; iVar4 = iVar4 + 1) {
        pCVar3 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar1),
                            g_CFlameClassInfo.name_hash);
        if (pCVar3 != (CDemonActor *)0x0) {
          fStack_20 = (in_stack_00000004->location).position.x - (pCVar3->location).position.x;
          fStack_1c = (in_stack_00000004->location).position.y - (pCVar3->location).position.y;
          fStack_18 = (in_stack_00000004->location).position.z - (pCVar3->location).position.z;
          if ((SQRT(fStack_18 * fStack_18 + fStack_20 * fStack_20 + fStack_1c * fStack_1c) <
               (float)5) && (pCVar3[1].field26_0x148 == 1)) {
            return;
          }
        }
        iVar1 = iVar1 + 4;
      }
      if (iStack_14 == 0) {
        in_stack_00000004[1].field26_0x148 = 1;
        return;
      }
    }
  }
  return;
}
