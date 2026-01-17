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
  float fVar2;
  CDemonRenderer *this_ptr;
  int iVar3;
  CBoundingBox3D *this_ptr_00;
  float fVar4;
  CDemonActor *pCVar5;
  int iVar6;
  CDemonActor *in_stack_00000004;
  int in_stack_00000008;
  
  this_ptr = g_CDemonRendererPtr;
  in_stack_00000004[1].field26_0x148 = 0;
  in_stack_00000004[1].previous_transform_state.dirty_flags = 0;
  iVar3 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(this_ptr);
  if ((iVar3 == 0) && (in_stack_00000008 != 0)) {
    core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
    this_ptr_00 = (*in_stack_00000004->vtable->getBoundingBox)
                            (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffc8);
    fVar4 = (float)core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr_00);
    in_stack_00000004[1].previous_transform_state.orientation.y = fVar4;
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
      iVar3 = 0;
      iVar6 = 0;
      while( true ) {
        if ((int)g_CDemonSetPtr->actor_list_ptr <= iVar6) {
          in_stack_00000004[1].field26_0x148 = 1;
          return;
        }
        pCVar5 = core_actor_cpp_castToClassHash_FUN_0040c790
                           (*(CDemonActor **)(g_CDemonSetPtr->actor_list_data + iVar3),
                            g_CFlameClassInfo.name_hash);
        if (((pCVar5 != (CDemonActor *)0x0) &&
            (fVar4 = (in_stack_00000004->location).position.x - (pCVar5->location).position.x,
            fVar1 = (in_stack_00000004->location).position.y - (pCVar5->location).position.y,
            fVar2 = (in_stack_00000004->location).position.z - (pCVar5->location).position.z,
            SQRT(fVar2 * fVar2 + fVar4 * fVar4 + fVar1 * fVar1) < (float)5)) &&
           (pCVar5[1].field26_0x148 == 1)) break;
        iVar6 = iVar6 + 1;
        iVar3 = iVar3 + 4;
      }
      return;
    }
  }
  return;
}
