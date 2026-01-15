// Name: core_tbplayer.cpp_FUN_005da120
// Address: 005da120
// Address Range: [[005da120, 005da238]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da120()

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da120(void)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff58;
  CMatrix3x4f local_78;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 0) {
    local_18.y = -1.866;
    local_18.z = -4.108;
    local_18.x = 2.104;
    if (&local_3c != &local_18) {
      local_3c.y = -1.866;
      local_3c.z = -4.108;
      local_3c.x = 2.104;
    }
    local_30.z = 0.101;
    local_30.y = -0.486;
    local_30.x = 1.371;
    if (&local_24 != &local_30) {
      local_24.z = 0.101;
      local_24.x = 1.371;
      local_24.y = -0.486;
    }
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0(&local_78,&local_3c,&local_24);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            (&local_78,(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000004 + 0xfd8),in_stack_ffffff58);
  puVar2 = (uint *)&stack0xffffff58;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
