// Name: core_icepick.cpp_FUN_004f8b20
// Address: 004f8b20
// Address Range: [[004f8b20, 004f8c6f]]
// Convention: unknown
// Signature: undefined core_icepick.cpp_FUN_004f8b20()

#include "nocturne.h"

/* Signature: byte actors_hero_icepick.cpp_FUN_004f8b20(CIcePick* param_1, uint param_2)
    */

void core_icepick_cpp_FUN_004f8b20(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  uint *puVar2;
  byte bVar3;
  int in_stack_00000004;
  int in_stack_00000008;
  int in_stack_0000000c;
  CMatrix3x4f *in_stack_ffffff60;
  uint auStack_9c [10];
  byte auStack_74 [56];
  uint local_3c;
  CVector3f local_38;
  uint local_2c;
  uint local_28;
  uint local_24;
  CVector3f local_20;
  uint local_14;
  uint local_10;
  
  bVar3 = 0;
  iVar1 = *(int *)(in_stack_00000008 * 0x44 + in_stack_00000004 + 0x24ac);
  if (in_stack_00000008 == 1) {
    local_20.z = 0.45;
    local_14 = 0xbe6a7efa;
    local_10 = 0xbca3d70a;
    if ((float *)&local_3c != &local_20.z) {
      local_38.x = -0.229;
      local_38.y = -0.02;
      local_3c = 0x3ee66666;
    }
    local_28 = 0x3fb76c8b;
    local_2c = 0x3f96872b;
    local_38.z = -0.39;
    if ((float *)&local_24 != &local_38.z) {
      local_20.y = 1.433;
      local_24 = 0xbec7ae14;
      local_20.x = 1.176;
    }
  }
  else {
    g_CurrentFilename = "..\\core\\icepick.cpp";
    g_CurrentLineNumber = 0x28a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CIcePick::getCarryObjToBodyXForm - wrong hand");
  }
  core_xform_cpp_buildMatrixFromEulerAndPositionDirect_FUN_005f54c0
            ((CMatrix3x4f *)auStack_74,&local_38,&local_20);
  core_xform_cpp_multiplyMatrix3x4_FUN_005f4f10
            ((CMatrix3x4f *)(auStack_74 + 4),
             (CMatrix3x4f *)(iVar1 * 0x30 + in_stack_0000000c + 0xfd8),in_stack_ffffff60);
  puVar2 = auStack_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar2;
    puVar2 = puVar2 + (uint)bVar3 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar3 * -2 + 1;
  }
  return;
}
