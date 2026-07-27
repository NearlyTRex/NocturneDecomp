// Name: engine_clipper.c_FUN_00432b48
// Address: 00432b48
// Address Range: [[00432b48, 00432bd1]]
// Convention: unknown
// Signature: undefined4 engine_clipper_c_FUN_00432b48(void)

#include "nocturne.h"

/* WARNING: Instruction at (ram,0x00432b49) overlaps instruction at (ram,0x00432b48)
uint engine_clipper_c_FUN_00432b48(void)

{
  longlong lVar1;
  int iVar2;
  int iVar3;
  byte bVar4;
  int *piVar5;
  uint uVar6;
  int in_ECX;
  longlong *unaff_EBX;
  int iVar7;
  longlong *unaff_EBP;
  longlong *plVar8;
  int unaff_EDI;
  longlong *plVar9;
  longlong *plVar10;
  int iVar11;
  longlong *plVar12;
  byte bVar13;
  int in_stack_00000138;
  
  bVar13 = 0;
code_r0x00432b48:
  *(byte *)(in_ECX + 0x30) = *(byte *)(in_ECX + 0x30) ^ (byte)((uint)unaff_EBX >> 8);
  plVar9 = (longlong *)((int)&DAT_00766c74 + unaff_EDI);
  iVar11 = in_ECX;
  plVar8 = unaff_EBX;
  plVar10 = plVar9;
  if (((uint)plVar9 & 7) != 0) {
    plVar10 = (longlong *)((int)&DAT_00766c78 + (uint)bVar13 * -8 + unaff_EDI);
    plVar8 = (longlong *)((int)unaff_EBX + (uint)bVar13 * -8 + 4);
    *(int *)plVar9 = (int)*unaff_EBX;
    iVar11 = in_ECX + -4;
    if (in_ECX + -4 == 0 || in_ECX < 4) goto LAB_00432b81;
  }
  while (7 < iVar11) {
    lVar1 = *plVar8;
    plVar8 = plVar8 + 1;
    *plVar10 = (longlong)ROUND((float10)lVar1);
    plVar10 = plVar10 + 1;
    iVar11 = iVar11 + -8;
  }
  if (iVar11 != 0 && -9 < iVar11 + -8) {
    *(int *)plVar10 = (int)*plVar8;
    if (4 < iVar11) {
      *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4) =
           *(uint *)((int)plVar8 + (uint)bVar13 * -8 + 4);
    }
  }
LAB_00432b81:
  DAT_00766c70 = DAT_00766c70 + 1;
  do {
    plVar8 = unaff_EBP;
    iVar11 = in_stack_00000138 + 1;
    unaff_EBX = plVar8 + 6;
    if ((int)DAT_007672f4 <= iVar11) {
      if (DAT_00766c70 < 3) {
        return 1;
      }
      iVar11 = 0;
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
    bVar4 = DAT_005ad284 <= (int)plVar8[7];
    if (DAT_005ad284 <= (int)(&DAT_00767300)[uVar6 * 0xc]) {
      bVar4 = bVar4 | 2;
    }
    unaff_EBP = unaff_EBX;
    in_stack_00000138 = iVar11;
    switch(bVar4) {
    case 0:
      goto switchD_00432b3b_caseD_0;
    case 1:
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (&DAT_007672f8 + uVar6 * 0xc,unaff_EBX,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
      break;
    case 2:
      plVar12 = (longlong *)(&DAT_00766c74 + DAT_00766c70 * 0xc);
      iVar11 = 0x30;
      plVar10 = unaff_EBX;
      plVar9 = plVar12;
      if (((uint)plVar12 & 7) != 0) {
        plVar9 = (longlong *)(&DAT_00766c78 + DAT_00766c70 * 0xc + (uint)bVar13 * -2);
        plVar10 = (longlong *)((int)plVar8 + (uint)bVar13 * -8 + 0x34);
        *(int *)plVar12 = (int)*unaff_EBX;
        iVar11 = 0x2c;
      }
      while (7 < iVar11) {
        lVar1 = *plVar10;
        plVar10 = plVar10 + 1;
        *plVar9 = (longlong)ROUND((float10)lVar1);
        plVar9 = plVar9 + 1;
        iVar11 = iVar11 + -8;
      }
      if (iVar11 != 0 && -9 < iVar11 + -8) {
        *(int *)plVar9 = (int)*plVar10;
        if (4 < iVar11) {
          *(uint *)((int)plVar9 + (uint)bVar13 * -8 + 4) =
               *(uint *)((int)plVar10 + (uint)bVar13 * -8 + 4);
        }
      }
      DAT_00766c70 = DAT_00766c70 + 1;
      engine_clipper_c_interpolateVertexNearClip_FUN_00431930
                (unaff_EBX,&DAT_007672f8 + uVar6 * 0xc,&DAT_00766c74 + DAT_00766c70 * 0xc);
      DAT_00766c70 = DAT_00766c70 + 1;
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
  iVar11 = iVar11 + 1;
  piVar5 = piVar5 + 0xc;
  if (DAT_00766c70 <= iVar11) {
    return 0;
  }
  goto LAB_0043273a;
switchD_00432b3b_caseD_0:
  unaff_EDI = DAT_00766c70 * 0x30;
  in_ECX = 0x30;
  goto code_r0x00432b48;
}
