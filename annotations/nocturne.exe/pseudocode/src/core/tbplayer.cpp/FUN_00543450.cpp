// Name: core_tbplayer.cpp_FUN_00543450
// Address: 00543450
// Address Range: [[00543450, 005435e2]]
// Convention: unknown
// Signature: void core_tbplayer_cpp_FUN_00543450(int param_1,int param_2)

#include "nocturne.h"

void core_tbplayer_cpp_FUN_00543450(int param_1,int param_2)

{
  int iVar1;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  uint local_c0 [12];
  CMatrix3x4f local_90;
  CVector3f local_60 [2];
  CVector3f local_48;
  CVector3f local_3c;
  CVector3f local_30;
  CVector3f local_24;
  CVector3f local_18;
  
  bVar3 = 0;
  iVar1 = *(int *)(param_2 * 0x44 + param_1 + 0x24a4);
  if (param_2 == 0) {
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
    if (&local_3c == &local_30) goto LAB_0054350c;
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
    if (&local_3c == &local_48) goto LAB_0054350c;
  }
  local_3c.y = 0.0;
  local_3c.z = 0.0;
  local_3c.x = 0.0;
LAB_0054350c:
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_0055afb0(&local_90,&local_18,&local_3c);
  core_xform_cpp_multiplyMatrix3x4_FUN_0055aa00(&local_90,iVar1 * 0x30 + param_1 + 0xfd0);
  puVar2 = local_c0;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
