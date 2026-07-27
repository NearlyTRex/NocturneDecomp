// Name: engine_clipper.c_FUN_00433fc8
// Address: 00433fc8
// Address Range: [[00433fc8, 00434017]]
// Convention: unknown
// Signature: void engine_clipper_c_FUN_00433fc8(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433fc9) overlaps instruction at (ram,0x00433fc8)
void engine_clipper_c_FUN_00433fc8(void)

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
code_r0x00433fc8:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  puVar4 = in_EDX;
  puVar5 = (uint *)((int)&DAT_00768d4c + unaff_EDI);
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
  DAT_00767b48 = DAT_00767b48 + 1;
  engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
            (in_EDX,unaff_EBP,&DAT_00768d4c + DAT_00767b48 * 0xc);
  DAT_00767b48 = DAT_00767b48 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b44 <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar7 + 2;
    if (uVar3 == DAT_00767b44) {
      uVar3 = uVar3 ^ DAT_00767b44;
    }
    unaff_EBP = &DAT_0076874c + uVar3 * 0xc;
    bVar1 = (int)unaff_EBX[0xe] <= (int)unaff_EBX[0xd];
    if ((int)(&DAT_00768754)[uVar3 * 0xc] <= (int)(&DAT_00768750)[uVar3 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      puVar4 = in_EDX;
      puVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
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
      DAT_00767b48 = DAT_00767b48 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                (unaff_EBP,in_EDX,&DAT_00768d4c + DAT_00767b48 * 0xc);
      DAT_00767b48 = DAT_00767b48 + 1;
      break;
    case 2:
      goto switchD_00433f4b_caseD_2;
    }
  } while( true );
switchD_00433f4b_caseD_2:
  unaff_EDI = DAT_00767b48 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433fc8;
}
