// Name: core_bugs.cpp_FUN_004251b0
// Address: 004251b0
// Address Range: [[004251b0, 004252f7] [00425314, 0042533d]]
// Convention: unknown
// Signature: undefined core_bugs.cpp_FUN_004251b0()

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004251b0(uint param_1) */

CDemonActor ** core_bugs_cpp_FUN_004251b0(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CVector3i *rotation;
  BADSPACEBASE *in_ESP;
  CVector3i *position;
  int in_stack_00000004;
  CDemonActor *in_stack_00000008;
  CDemonActor **in_stack_00000014;
  int in_stack_00000024;
  CDemonActor *in_stack_00000028;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  float fStack_c;
  float fStack_8;
  
  if (*(int *)(in_stack_00000004 + 0x240c) == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000008);
      this_ptr = (*in_stack_00000008->vtable->getBoundingBox)
                           (in_stack_00000008,(CBoundingBox3D *)&stack0xffffffc4);
      iVar1 = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      if (iVar1 != 0) {
        iVar1 = 0;
        if (0 < in_stack_00000008[0x8d].field26_0x148) {
          in_stack_00000014 = &in_stack_00000008[0x8d].next_actor;
          position = (CVector3i *)(in_stack_00000008[0x8e].actor_name + 8);
          rotation = (CVector3i *)&in_stack_00000008[0x8d].vtable;
          do {
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr,position,rotation);
            fStack_10 = (in_stack_00000008->location).position.x + (float)rotation->x;
            fStack_c = (in_stack_00000008->location).position.y + (float)rotation->y;
            fStack_8 = (in_stack_00000008->location).position.z + (float)rotation->z;
            if (&fStack_1c != &fStack_10) {
              fStack_1c = fStack_10;
              fStack_18 = fStack_c;
              fStack_14 = fStack_8;
            }
            core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      ((CKeyFramedModelInstance *)
                       (*(int *)(in_stack_00000008[0xd8].create_event + 0x14) * 0x17c +
                       (int)in_stack_00000008),0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
            position = (CVector3i *)&position[5].y;
            iVar1 = iVar1 + 1;
            rotation = (CVector3i *)&rotation[5].y;
          } while (iVar1 < *(int *)(in_stack_00000024 + 0xbec0));
        }
        core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_00000028);
      return in_stack_00000014;
    }
  }
  return (CDemonActor **)0x0;
}
