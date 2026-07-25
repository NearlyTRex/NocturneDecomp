// Name: FUN_0043410e
// Address: 0043410e
// Address Range: [[0043410e, 0043415d]]
// Convention: unknown
// Signature: void FUN_0043410e(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0043410f) overlaps instruction at (ram,0x0043410e)
void FUN_0043410e(void)

{
  byte bVar1;
  int iVar2;
  uint in_ECX;
  uint uVar3;
  uint *in_EDX;
  uint *unaff_EBX;
  uint *unaff_EBP;
  uint *puVar4;
  uint *puVar5;
  int unaff_EDI;
  byte bVar6;
  int iVar7;
  int unaff_retaddr;
  
  bVar6 = 0;
code_r0x0043410e:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  puVar4 = in_EDX;
  puVar5 = (uint *)((int)&DAT_00766c74 + unaff_EDI);
  for (uVar3 = in_ECX >> 2; uVar3 != 0; uVar3 = uVar3 - 1) {
    *puVar5 = *puVar4;
    puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
    puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
  }
  for (uVar3 = in_ECX & 3; uVar3 != 0; uVar3 = uVar3 - 1) {
    *(byte *)puVar5 = *(byte *)puVar4;
    puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
    puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
  }
  DAT_00766c70 = DAT_00766c70 + 1;
  engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
            (in_EDX,unaff_EBP,&DAT_00766c74 + DAT_00766c70 * 0xc);
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b48 <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar7 + 2;
    if (uVar3 == DAT_00767b48) {
      uVar3 = uVar3 ^ DAT_00767b48;
    }
    unaff_EBP = &DAT_00768d4c + uVar3 * 0xc;
    bVar1 = (int)unaff_EBX[0xd] <= (int)-unaff_EBX[0xe];
    if ((int)(&DAT_00768d50)[uVar3 * 0xc] <= (int)-(&DAT_00768d54)[uVar3 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      puVar4 = in_EDX;
      puVar5 = &DAT_00766c74 + DAT_00766c70 * 0xc;
      for (iVar2 = 0xc; iVar2 != 0; iVar2 = iVar2 + -1) {
        *puVar5 = *puVar4;
        puVar4 = puVar4 + (uint)bVar6 * -2 + 1;
        puVar5 = puVar5 + (uint)bVar6 * -2 + 1;
      }
      for (iVar2 = 0; iVar2 != 0; iVar2 = iVar2 + -1) {
        *(byte *)puVar5 = *(byte *)puVar4;
        puVar4 = (uint *)((int)puVar4 + (uint)bVar6 * -2 + 1);
        puVar5 = (uint *)((int)puVar5 + (uint)bVar6 * -2 + 1);
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexTopClipAdvanced_FUN_00433b30
                (unaff_EBP,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_00434091_caseD_2;
    }
  } while( true );
switchD_00434091_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0043410e;
}
