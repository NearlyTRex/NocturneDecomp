// Name: FUN_00433f58
// Address: 00433f58
// Address Range: [[00433f58, 00433fc1]]
// Convention: unknown
// Signature: void FUN_00433f58(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00433f59) overlaps instruction at (ram,0x00433f58)
void FUN_00433f58(void)

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
code_r0x00433f58:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  puVar4 = (uint *)((int)&DAT_00768d4c + unaff_EDI);
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
  DAT_00767b48 = DAT_00767b48 + 1;
  iVar7 = unaff_retaddr;
  do {
    unaff_retaddr = iVar7 + 1;
    in_EDX = unaff_EBX + 0xc;
    if ((int)DAT_00767b44 <= unaff_retaddr) {
      return;
    }
    uVar2 = iVar7 + 2;
    if (uVar2 == DAT_00767b44) {
      uVar2 = uVar2 ^ DAT_00767b44;
    }
    bVar1 = (int)unaff_EBX[0xe] <= (int)unaff_EBX[0xd];
    if ((int)(&DAT_00768754)[uVar2 * 0xc] <= (int)(&DAT_00768750)[uVar2 * 0xc]) {
      bVar1 = bVar1 | 2;
    }
    unaff_EBX = in_EDX;
    iVar7 = unaff_retaddr;
    switch(bVar1) {
    case 0:
      goto switchD_00433f4b_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                (&DAT_0076874c + uVar2 * 0xc,in_EDX,&DAT_00768d4c + DAT_00767b48 * 0xc);
      DAT_00767b48 = DAT_00767b48 + 1;
      break;
    case 2:
      puVar4 = in_EDX;
      puVar5 = &DAT_00768d4c + DAT_00767b48 * 0xc;
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
      DAT_00767b48 = DAT_00767b48 + 1;
      engine_clipper_c_interpolateVertexBottomClipAdvanced_FUN_00433a00
                (in_EDX,&DAT_0076874c + uVar2 * 0xc,&DAT_00768d4c + DAT_00767b48 * 0xc);
      DAT_00767b48 = DAT_00767b48 + 1;
    }
  } while( true );
switchD_00433f4b_caseD_0:
  unaff_EDI = DAT_00767b48 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00433f58;
}
