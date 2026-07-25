// Name: FUN_004320dc
// Address: 004320dc
// Address Range: [[004320dc, 00432148]]
// Convention: unknown
// Signature: void FUN_004320dc(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x004320dd) overlaps instruction at (ram,0x004320dc)
void FUN_004320dc(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  longlong *in_EDX;
  int unaff_EBX;
  longlong *unaff_EBP;
  longlong *plVar6;
  longlong *plVar7;
  int unaff_EDI;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  uint *unaff_retaddr;
  
  bVar10 = 0;
code_r0x004320dc:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar8 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar5 = in_ECX;
  plVar6 = in_EDX;
  plVar9 = plVar8;
  if (((uint)plVar8 & 7) != 0) {
    plVar9 = (longlong *)((int)&DAT_00766c78 + (uint)bVar10 * -8 + unaff_EDI);
    plVar6 = (longlong *)((int)in_EDX + (uint)bVar10 * -8 + 4);
    *(int *)plVar8 = (int)*in_EDX;
    iVar5 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_00432115;
  }
  while (7 < iVar5) {
    lVar1 = *plVar6;
    plVar6 = plVar6 + 1;
    *plVar9 = (longlong)ROUND((float10)lVar1);
    plVar9 = plVar9 + 1;
    iVar5 = iVar5 + -8;
  }
  if (iVar5 != 0 && -9 < iVar5 + -8) {
    *(int *)plVar9 = (int)*plVar6;
    if (4 < iVar5) {
      *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)plVar6 + (uint)bVar10 * -8 + 4);
    }
  }
LAB_00432115:
  DAT_00766c70 = DAT_00766c70 + 1;
  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
            (in_EDX,unaff_retaddr,&DAT_00766c74 + DAT_00766c70 * 0xc);
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar5 = unaff_EBX;
  do {
    plVar6 = unaff_EBP;
    unaff_EBX = iVar5 + 1;
    in_EDX = plVar6 + 6;
    if ((int)DAT_007672f4 <= unaff_EBX) {
      return;
    }
    uVar3 = iVar5 + 2;
    if (uVar3 == DAT_007672f4) {
      uVar3 = uVar3 ^ DAT_007672f4;
    }
    unaff_retaddr = &DAT_007672f8 + uVar3 * 0xc;
    bVar2 = DAT_005ad284 <= (int)plVar6[7];
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar3 * 0xc]) {
      bVar2 = bVar2 | 2;
    }
    iVar5 = unaff_EBX;
    unaff_EBP = in_EDX;
    switch(bVar2) {
    case 0:
      plVar7 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar4 = 0x30;
      plVar9 = in_EDX;
      plVar8 = plVar7;
      if (((uint)plVar7 & 7) != 0) {
        plVar8 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
        plVar9 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 0x34);
        *(int *)plVar7 = (int)*in_EDX;
        iVar4 = 0x2c;
      }
      while (7 < iVar4) {
        lVar1 = *plVar9;
        plVar9 = plVar9 + 1;
        *plVar8 = (longlong)ROUND((float10)lVar1);
        plVar8 = plVar8 + 1;
        iVar4 = iVar4 + -8;
      }
      if (iVar4 != 0 && -9 < iVar4 + -8) {
        *(int *)plVar8 = (int)*plVar9;
        if (4 < iVar4) {
          *(uint *)((int)plVar8 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (unaff_retaddr,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_00432049_caseD_2;
    }
  } while( true );
switchD_00432049_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x004320dc;
}
