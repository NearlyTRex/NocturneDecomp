// Name: FUN_0055de8e
// Address: 0055de8e
// Address Range: [[0055de8e, 0055df12]]
// Convention: unknown
// Signature: void FUN_0055de8e(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x0055de8f) overlaps instruction at (ram,0x0055de8e)
void FUN_0055de8e(void)

{
  longlong lVar1;
  byte bVar2;
  uint uVar3;
  int iVar4;
  int in_ECX;
  int iVar5;
  int iVar6;
  longlong *in_EDX;
  longlong *unaff_EBX;
  longlong *plVar7;
  int unaff_EDI;
  longlong *plVar8;
  longlong *plVar9;
  longlong *plVar10;
  byte bVar11;
  int unaff_retaddr;
  
  bVar11 = 0;
code_r0x0055de8e:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar8 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar5 = in_ECX;
  plVar7 = in_EDX;
  plVar9 = plVar8;
  if (((uint)plVar8 & 7) != 0) {
    plVar9 = (longlong *)((int)&DAT_00766c78 + (uint)bVar11 * -8 + unaff_EDI);
    plVar7 = (longlong *)((int)in_EDX + (uint)bVar11 * -8 + 4);
    *(int *)plVar8 = (int)*in_EDX;
    iVar5 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_0055dec7;
  }
  while (7 < iVar5) {
    lVar1 = *plVar7;
    plVar7 = plVar7 + 1;
    *plVar9 = (longlong)ROUND((float10)lVar1);
    plVar9 = plVar9 + 1;
    iVar5 = iVar5 + -8;
  }
  if (iVar5 != 0 && -9 < iVar5 + -8) {
    *(int *)plVar9 = (int)*plVar7;
    if (4 < iVar5) {
      *(uint *)((int)plVar9 + (uint)bVar11 * -8 + 4) =
           *(uint *)((int)plVar7 + (uint)bVar11 * -8 + 4);
    }
  }
LAB_0055dec7:
  DAT_00766c70 = DAT_00766c70 + 1;
  iVar5 = unaff_retaddr;
  do {
    plVar7 = unaff_EBX;
    unaff_retaddr = iVar5 + 1;
    in_EDX = plVar7 + 6;
    if ((int)_DAT_02de313c <= unaff_retaddr) {
      return;
    }
    uVar3 = iVar5 + 2;
    if (uVar3 == _DAT_02de313c) {
      uVar3 = uVar3 ^ _DAT_02de313c;
    }
    iVar4 = uVar3 * 0x30;
    bVar2 = *(int *)((int)plVar7 + 0x34) <= -(int)plVar7[7];
    if (*(int *)(&DAT_02de4344 + iVar4) <= -*(int *)(&DAT_02de4348 + iVar4)) {
      bVar2 = bVar2 | 2;
    }
    unaff_EBX = in_EDX;
    iVar5 = unaff_retaddr;
    switch(bVar2) {
    case 0:
      goto switchD_0055de81_caseD_0;
    case 1:
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                (&DAT_02de4340 + iVar4,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      plVar10 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar6 = 0x30;
      plVar9 = in_EDX;
      plVar8 = plVar10;
      if (((uint)plVar10 & 7) != 0) {
        plVar8 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar11 * -2);
        plVar9 = (longlong *)((int)plVar7 + (uint)bVar11 * -8 + 0x34);
        *(int *)plVar10 = (int)*in_EDX;
        iVar6 = 0x2c;
      }
      while (7 < iVar6) {
        lVar1 = *plVar9;
        plVar9 = plVar9 + 1;
        *plVar8 = (longlong)ROUND((float10)lVar1);
        plVar8 = plVar8 + 1;
        iVar6 = iVar6 + -8;
      }
      if (iVar6 != 0 && -9 < iVar6 + -8) {
        *(int *)plVar8 = (int)*plVar9;
        if (4 < iVar6) {
          *(uint *)((int)plVar8 + (uint)bVar11 * -8 + 4) =
               *(uint *)((int)plVar9 + (uint)bVar11 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      core_xform_cpp_clipInterpolateBottomPlane_FUN_0055d8f0
                (in_EDX,&DAT_02de4340 + iVar4,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
    }
  } while( true );
switchD_0055de81_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x0055de8e;
}
