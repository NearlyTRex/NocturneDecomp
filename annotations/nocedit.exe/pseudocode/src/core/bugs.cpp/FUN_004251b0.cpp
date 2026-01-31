// Name: core_bugs.cpp_FUN_004251b0
// Address: 004251b0
// Address Range: [[004251b0, 004252f7] [00425314, 0042533d]]
// Convention: __cdecl
// Signature: int __cdecl core_bugs_cpp_FUN_004251b0(void)

#include "nocturne.h"

/* Signature: byte actors_enemy_bugs.cpp_FUN_004251b0(uint param_1) */

int __cdecl core_bugs_cpp_FUN_004251b0(void)

{
  int iVar1;
  CBoundingBox3D *this_ptr;
  CVector3i *rotation;
  CVector3i *position;
  CDemonActor *in_stack_00000004;
  CDemonActor *in_stack_0000000c;
  float fStack_24;
  float fStack_20;
  float fStack_1c;
  float fStack_18;
  float fStack_14;
  float fStack_10;
  int iStack_c;
  char *pcStack_8;
  
  if (*(int *)in_stack_00000004[0x1a].footstep_sound_code == 0) {
    iVar1 = engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0(g_CDemonRendererPtr2);
    if (iVar1 == 0) {
      core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00(in_stack_00000004);
      this_ptr = (*((in_stack_00000004->vtable)._ub)->getBoundingBox)
                           (in_stack_00000004,(CBoundingBox3D *)&stack0xffffffbc);
      iStack_c = core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0(this_ptr);
      if (iStack_c != 0) {
        iVar1 = 0;
        if (0 < in_stack_00000004[0x8d].unk14) {
          pcStack_8 = in_stack_00000004[0xd8].create_event + 0x10;
          position = (CVector3i *)(in_stack_00000004[0x8e].actor_name + 8);
          rotation = (CVector3i *)&in_stack_00000004[0x8d].vtable;
          do {
            engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
                      (g_CDemonRendererPtr2,position,rotation);
            fStack_18 = (in_stack_00000004->location).position.x + (float)rotation->x;
            fStack_14 = (in_stack_00000004->location).position.y + (float)rotation->y;
            fStack_10 = (in_stack_00000004->location).position.z + (float)rotation->z;
            if (&fStack_24 != &fStack_18) {
              fStack_24 = fStack_18;
              fStack_20 = fStack_14;
              fStack_1c = fStack_10;
            }
            core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
            engine_drender_cpp_CDemonRenderer_setRenderAlpha_FUN_0048ca60
                      (g_CDemonRendererPtr2,0xffff);
            core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
                      ((CKeyFramedModelInstance *)
                       (pcStack_8 +
                       *(int *)(in_stack_00000004[0x8d].footstep_sound_code + iVar1 * 0x40 + 0x34) *
                       0x17c),0.0,0x2e7);
            engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720();
            position = (CVector3i *)&position[5].y;
            iVar1 = iVar1 + 1;
            rotation = (CVector3i *)&rotation[5].y;
          } while (iVar1 < in_stack_0000000c[0x8d].unk14);
        }
        core_set_cpp_CDemonSet_FUN_00570cd0(g_CDemonSetPtr);
      }
      core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40(in_stack_0000000c);
      return iStack_c;
    }
  }
  return 0;
}
