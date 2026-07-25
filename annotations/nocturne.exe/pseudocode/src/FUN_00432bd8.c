// Name: FUN_00432bd8
// Address: 00432bd8
// Address Range: [[00432bd8, 00432c7b]]
// Convention: unknown
// Signature: undefined4 FUN_00432bd8(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00432bd9) overlaps instruction at (ram,0x00432bd8)
uint FUN_00432bd8(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int in_ECX;
  uint *in_EDX;
  longlong *unaff_EBX;
  int iVar7;
  longlong *unaff_EBP;
  longlong *plVar8;
  longlong *plVar9;
  int iVar10;
  int unaff_EDI;
  longlong *plVar11;
  longlong *plVar12;
  byte bVar13;
  int in_stack_00000138;
  
  bVar13 = 0;
code_r0x00432bd8:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar11 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar10 = in_ECX;
  plVar8 = unaff_EBX;
  plVar12 = plVar11;
  if (((uint)plVar11 & 7) != 0) {
    plVar12 = (longlong *)((int)&DAT_00766c78 + (uint)bVar13 * -8 + unaff_EDI);
    plVar8 = (longlong *)((int)unaff_EBX + (uint)bVar13 * -8 + 4);
    *(int *)plVar11 = (int)*unaff_EBX;
    iVar10 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_00432c11;
  }
  while (7 < iVar10) {
    lVar1 = *plVar8;
    plVar8 = plVar8 + 1;
    *plVar12 = (longlong)ROUND((float10)lVar1);
    plVar12 = plVar12 + 1;
    iVar10 = iVar10 + -8;
  }
  if (iVar10 != 0 && -9 < iVar10 + -8) {
    *(int *)plVar12 = (int)*plVar8;
    if (4 < iVar10) {
      *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)plVar8 + (uint)bVar13 * -8 + 4);
    }
  }
LAB_00432c11:
  DAT_00766c70 = DAT_00766c70 + 1;
  engine_clipper_c_interpolateVertexNearClip_FUN_00431930
            (unaff_EBX,in_EDX,&DAT_00766c74 + DAT_00766c70 * 0xc);
  DAT_00766c70 = DAT_00766c70 + 1;
  do {
    plVar8 = unaff_EBP;
    iVar10 = in_stack_00000138 + 1;
    unaff_EBX = plVar8 + 6;
    if ((int)DAT_007672f4 <= iVar10) {
      if (DAT_00766c70 < 3) {
        return 1;
      }
      iVar10 = 0;
      if (DAT_00766c70 < 1) {
        return 0;
      }
      piVar5 = &DAT_00766c74;
      break;
    }
    uVar6 = in_stack_00000138 + 2;
    if (uVar6 == DAT_007672f4) {
      uVar6 = uVar6 ^ DAT_007672f4;
    }
    in_EDX = &DAT_007672f8 + uVar6 * 0xc;
    bVar4 = DAT_005ad284 <= (int)plVar8[7];
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar6 * 0xc]) {
      bVar4 = bVar4 | 2;
    }
    unaff_EBP = unaff_EBX;
    in_stack_00000138 = iVar10;
    switch(bVar4) {
    case 0:
      plVar9 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar10 = 0x30;
      plVar12 = unaff_EBX;
      plVar11 = plVar9;
      if (((uint)plVar9 & 7) != 0) {
        plVar11 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar13 * -2);
        plVar12 = (longlong *)((int)plVar8 + (uint)bVar13 * -8 + 0x34);
        *(int *)plVar9 = (int)*unaff_EBX;
        iVar10 = 0x2c;
      }
      while (7 < iVar10) {
        lVar1 = *plVar12;
        plVar12 = plVar12 + 1;
        *plVar11 = (longlong)ROUND((float10)lVar1);
        plVar11 = plVar11 + 1;
        iVar10 = iVar10 + -8;
      }
      if (iVar10 != 0 && -9 < iVar10 + -8) {
        *(int *)plVar11 = (int)*plVar12;
        if (4 < iVar10) {
          *(uint *)((int)plVar11 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)plVar12 + (uint)bVar13 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (in_EDX,unaff_EBX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      goto switchD_00432b3b_caseD_2;
    }
  } while( true );
LAB_0043273a:
  iVar2 = piVar5[2];
  if (iVar2 == 0) {
    piVar5[2] = 1;
    *piVar5 = 0;
    iVar7 = 0;
LAB_0043274e:
    piVar5[1] = iVar7;
  }
  else {
    iVar3 = *piVar5;
    if (iVar2 < iVar3) {
      *piVar5 = iVar2;
    }
    else {
      iVar7 = -iVar2;
      if (-iVar3 == iVar2 || iVar7 < iVar3) {
        iVar3 = piVar5[1];
        if (piVar5[2] < iVar3) {
          piVar5[1] = piVar5[2];
        }
        else if (-iVar3 != iVar2 && iVar3 <= iVar7) goto LAB_0043274e;
      }
      else {
        *piVar5 = iVar7;
      }
    }
  }
  iVar10 = iVar10 + 1;
  piVar5 = piVar5 + 0xc;
  if (DAT_00766c70 <= iVar10) {
    return 0;
  }
  goto LAB_0043273a;
switchD_00432b3b_caseD_2:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00432bd8;
}
