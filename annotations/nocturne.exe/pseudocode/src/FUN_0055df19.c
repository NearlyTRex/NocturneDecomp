// Name: FUN_0055df19
// Address: 0055df19
// Address Range: [[0055df19, 0055df83]]
// Convention: unknown
// Signature: void FUN_0055df19(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0055df1a) overlaps instruction at (ram,0x0055df19)
void FUN_0055df19(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int iVar5;
  int in_ECX;
  longlong *in_EDX;
  longlong *unaff_EBX;
  byte *unaff_EBP;
  longlong *plVar6;
  longlong *plVar7;
  int unaff_EDI;
  longlong *plVar8;
  longlong *plVar9;
  byte bVar10;
  int unaff_retaddr;
  
  bVar10 = 0;
code_r0x0055df19:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar8 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar4 = in_ECX;
  plVar6 = in_EDX;
  plVar9 = plVar8;
  if (((uint)plVar8 & 7) != 0) {
    plVar9 = (longlong *)((int)&DAT_00766c78 + (uint)bVar10 * -8 + unaff_EDI);
    plVar6 = (longlong *)((int)in_EDX + (uint)bVar10 * -8 + 4);
    *(int *)plVar8 = (int)*in_EDX;
    iVar4 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_0055df52;
  }
  while (7 < iVar4) {
    lVar1 = *plVar6;
    plVar6 = plVar6 + 1;
    *plVar9 = (longlong)ROUND((float10)lVar1);
    plVar9 = plVar9 + 1;
    iVar4 = iVar4 + -8;
  }
  if (iVar4 != 0 && -9 < iVar4 + -8) {
    *(int *)plVar9 = (int)*plVar6;
    if (4 < iVar4) {
      *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4) =
           *(uint *)((int)plVar6 + (uint)bVar10 * -8 + 4);
    }
  }
LAB_0055df52:
  DAT_00766c70 = DAT_00766c70 + 1;
  core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
            (in_EDX,unaff_EBP,&DAT_00766c74 + DAT_00766c70 * 0xc);
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar4 = unaff_retaddr;
  do {
    plVar6 = unaff_EBX;
    unaff_retaddr = iVar4 + 1;
    in_EDX = plVar6 + 6;
    if ((int)_DAT_02de313c <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar4 + 2;
    if (uVar3 == _DAT_02de313c) {
      uVar3 = uVar3 ^ _DAT_02de313c;
    }
    iVar4 = uVar3 * 0x30;
    unaff_EBP = &DAT_02de4340 + iVar4;
    bVar2 = *(int *)((int)plVar6 + 0x34) <= -(int)plVar6[7];
    if (*(int *)(&DAT_02de4344 + iVar4) <= -*(int *)(&DAT_02de4348 + iVar4)) {
      bVar2 = bVar2 | 2;
    }
    unaff_EBX = in_EDX;
    iVar4 = unaff_retaddr;
    switch(bVar2) {
    case 0:
      plVar7 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar5 = 0x30;
      plVar9 = in_EDX;
      plVar8 = plVar7;
      if (((uint)plVar7 & 7) != 0) {
        plVar8 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar10 * -2);
        plVar9 = (longlong *)((int)plVar6 + (uint)bVar10 * -8 + 0x34);
        *(int *)plVar7 = (int)*in_EDX;
        iVar5 = 0x2c;
      }
      while (7 < iVar5) {
        lVar1 = *plVar9;
        plVar9 = plVar9 + 1;
        *plVar8 = (longlong)ROUND((float10)lVar1);
        plVar8 = plVar8 + 1;
        iVar5 = iVar5 + -8;
      }
      if (iVar5 != 0 && -9 < iVar5 + -8) {
        *(int *)plVar8 = (int)*plVar9;
        if (4 < iVar5) {
          *(uint *)((int)plVar8 + (uint)bVar10 * -8 + 4) =
               *(uint *)((int)plVar9 + (uint)bVar10 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                (unaff_EBP,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_0055de81_caseD_2;
    }
  } while( true );
switchD_0055de81_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0055df19;
}
