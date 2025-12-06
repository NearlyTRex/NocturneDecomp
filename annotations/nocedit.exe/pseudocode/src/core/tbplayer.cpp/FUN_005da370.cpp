// Name: core_tbplayer.cpp_FUN_005da370
// Address: 005da370
// Address Range: [[005da370, 005da502]]
// Convention: unknown
// Signature: undefined core_tbplayer.cpp_FUN_005da370()

#include "nocturne.h"

void core_tbplayer_cpp_FUN_005da370(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  CMatrix3x4f *in_stack_ffffff44;
  uint auStack_b8 [10];
  byte local_90 [48];
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 0) {
    local_60[0].y = -0.111;
    local_60[0].z = -0.174;
    local_60[0].x = 0.635;
    if (&local_18 != local_60) {
      local_18.x = 0.635;
      local_18.y = -0.111;
      local_18.z = -0.174;
    }
    local_30.z = 0.0;
    local_30.y = 0.0;
    local_30.x = 0.0;
    if (&local_3c == &local_30) goto LAB_005da42c;
  }
  else {
    local_24.y = -0.111;
    local_24.z = -0.174;
    local_24.x = -0.635;
    if (&local_18 != &local_24) {
      local_18.y = -0.111;
      local_18.z = -0.174;
      local_18.x = -0.635;
    }
    local_48.z = 0.0;
    local_48.y = 0.0;
    local_48.x = 0.0;
    if (&local_3c == &local_48) goto LAB_005da42c;
  }
  local_3c.y = 0.0;
  local_3c.z = 0.0;
  local_3c.x = 0.0;
LAB_005da42c:
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(local_90 + 4),(CMatrix3x4f *)(iVar1 * 0x30 + in_stack_00000008 + 0xfd8)
             ,in_stack_ffffff44);
  puVar2 = auStack_b8;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
