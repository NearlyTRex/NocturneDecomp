// Name: core_ghoul.cpp_FUN_004e84a0
// Address: 004e84a0
// Address Range: [[004e84a0, 004e8502]]
// Convention: unknown
// Signature: undefined core_ghoul.cpp_FUN_004e84a0()

#include "nocturne.h"

/* Signature: byte actors_enemy_ghoul.cpp_FUN_004e84a0(uint param_1, uint param_2)
    */

CVector3f * core_ghoul_cpp_FUN_004e84a0(void)

{
  int iVar1;
  uint *puVar2;
  uint *puVar3;
  byte bVar4;
  int in_stack_00000004;
  CVector3f *in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff84;
  uint local_4c [12];
  CVector3f local_1c;
  
  bVar4 = 0;
  core_skeleton_cpp_CDeformableModelInstance_getBoneWorldMatrix_FUN_0059f820
            ((CDeformableModelInstance *)(in_stack_00000004 + 0x158),DAT_02d832fc,in_stack_ffffff84)
  ;
  puVar2 = local_4c;
  puVar3 = (uint *)&stack0xffffff84;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *puVar3 = *puVar2;
    puVar2 = puVar2 + (uint)bVar4 * -2 + 1;
    puVar3 = puVar3 + (uint)bVar4 * -2 + 1;
  }
  local_1c.y = 0.7;
  local_1c.x = 0.0;
  local_1c.z = 0.3;
  core_xform_cpp_transformVector3x4_FUN_005f4dc0
            (in_stack_00000008,&local_1c,(CMatrix3x4f *)&stack0xffffff84);
  return in_stack_00000008;
}
