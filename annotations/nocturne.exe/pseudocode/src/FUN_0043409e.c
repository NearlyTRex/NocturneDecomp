// Name: FUN_0043409e
// Address: 0043409e
// Address Range: [[0043409e, 00434107]]
// Convention: unknown
// Signature: void FUN_0043409e(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0043409f) overlaps instruction at (ram,0x0043409e)
void FUN_0043409e(void)

{
  byte bVar1;
  uint in_ECX;
  uint uVar2;
  int iVar3;
  uint *in_EDX;
  uint *unaff_EBX;
  uint *puVar4;
  int unaff_EDI;
  uint *puVar5;
  byte bVar6;
  int unaff_retaddr;
  int iVar7;
  
  bVar6 = 0;
code_r0x0043409e:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  puVar4 = (uint *)((int)&DAT_00766c74 + unaff_EDI);
  for (uVar2 = in_ECX >> 2; uVar2 != 0; uVar2 = uVar2 - 1) {
    *puVar4 = *in_EDX;
    in_EDX = in_EDX + (uint)bVar6 * -2 + 1;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
  }
  for (uVar2 = in_ECX & 3; uVar2 != 0; uVar2 = uVar2 - 1) {
    *(byte *)puVar4 = *(byte *)in_EDX;
    in_EDX = (uint *)((int)in_EDX + (uint)bVar6 * -2 + 1);
    puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
  }
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b48 <= unaff_retaddr) {
      return;
    }
    uVar2 = iVar7 + 2;
    if (uVar2 == DAT_00767b48) {
      uVar2 = uVar2 ^ DAT_00767b48;
    }
    bVar1 = (int)unaff_EBX[0xd] <= (int)-unaff_EBX[0xe];
    if ((int)(&DAT_00768d50)[uVar2 * 0xc] <= (int)-(&DAT_00768d54)[uVar2 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      goto switchD_00434091_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                (&DAT_00768d4c + uVar2 * 0xc,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      puVar4 = in_EDX;
      puVar5 = &DAT_00766c74 + DAT_00766c70 * 0xc;
      for (iVar3 = 0xc; iVar3 != 0; iVar3 = iVar3 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar3 = 0; iVar3 != 0; iVar3 = iVar3 + -1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                (in_EDX,&DAT_00768d4c + uVar2 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
switchD_00434091_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0043409e;
}
