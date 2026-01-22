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
  float *unaff_ESI;
  CMatrix3x4f *pCVar2;
  CMatrix3x4f *pCVar3;
  byte bVar4;
  int in_stack_00000004;
  CMatrix3x4f local_fc;
  CMatrix3x4f local_cc;
  CMatrix3x4f local_9c;
  CMatrix3x4f local_6c;
  CMatrix3x4f local_3c;
  
  bVar4 = 0;
  in_stack_00000004 = in_stack_00000004 + 0xfd8;
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd08 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd0c * 0x30 + in_stack_00000004),0.5,&local_6c);
  pCVar2 = &local_6c;
  pCVar3 = &local_cc;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140
            ((CMatrix3x4f *)(DAT_03f6cd10 * 0x30 + in_stack_00000004),
             (CMatrix3x4f *)(DAT_03f6cd14 * 0x30 + in_stack_00000004),0.5,&local_fc);
  pCVar2 = &local_fc;
  pCVar3 = &local_9c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    pCVar3->m[0].w = *(float *)pCVar2;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    pCVar3 = (CMatrix3x4f *)((int)pCVar3 + ((uint)bVar4 * -2 + 1) * 4);
  }
  core_xform_cpp_lerpMatrix3x4_FUN_005f7140(&local_cc,&local_9c,0.5,&local_3c);
  pCVar2 = &local_3c;
  for (iVar1 = 0xc; iVar1 != 0; iVar1 = iVar1 + -1) {
    *unaff_ESI = pCVar2->m[0].w;
    pCVar2 = (CMatrix3x4f *)((int)pCVar2 + ((uint)bVar4 * -2 + 1) * 4);
    unaff_ESI = unaff_ESI + (uint)bVar4 * -2 + 1;
  }
  return;
}
