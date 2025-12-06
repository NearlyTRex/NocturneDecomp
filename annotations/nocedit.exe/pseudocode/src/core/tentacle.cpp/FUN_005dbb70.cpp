// Name: core_tentacle.cpp_FUN_005dbb70
// Address: 005dbb70
// Address Range: [[005dbb70, 005dbc5b]]
// Convention: unknown
// Signature: undefined core_tentacle.cpp_FUN_005dbb70()

#include "nocturne.h"

/* Signature: byte actors_enemy_tentacle.cpp_FUN_005dbb70(uint param_1) */

void core_tentacle_cpp_FUN_005dbb70(void)

{
  int iVar1;
  BADSPACEBASE *in_ESP;
  uint *unaff_ESI;
  float *pfVar2;
  uint *puVar3;
  float *pfVar4;
  byte bVar5;
  int in_stack_00000004;
  float afStack_f4 [10];
  float local_cc [2];
  CMatrix3x4f CStack_c4;
  CMatrix3x4f aCStack_94 [2];
  uint auStack_30 [9];
  
  bVar5 = 0;
  in_stack_00000004 = in_stack_00000004 + 0xfd8;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd08 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd0c * 0x30 + in_stack_00000004),0.5);
  pfVar2 = &aCStack_94[0].m[2].z;
  pfVar4 = local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd10 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd14 * 0x30 + in_stack_00000004),0.5);
  pfVar2 = afStack_f4;
  pfVar4 = &CStack_c4.m[2].z;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *pfVar4 = *pfVar2;
    pfVar2 = pfVar2 + (uint)bVar5 * -2 + 1;
    pfVar4 = pfVar4 + (uint)bVar5 * -2 + 1;
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&CStack_c4,aCStack_94,0.5);
  puVar3 = auStack_30;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = *puVar3;
    puVar3 = puVar3 + (uint)bVar5 * -2 + 1;
    unaff_ESI = unaff_ESI + (uint)bVar5 * -2 + 1;
  }
  return;
}
