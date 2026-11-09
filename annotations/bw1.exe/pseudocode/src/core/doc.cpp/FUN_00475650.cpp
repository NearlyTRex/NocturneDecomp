// Name: core_doc.cpp_FUN_00475650
// Address: 00475650
// Address Range: [[00475650, 0047588c]]
// Convention: unknown
// Signature: undefined4 core_doc_cpp_FUN_00475650(int param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

uint core_doc_cpp_FUN_00475650(int param_1,uint param_2)

{
  int iVar1;
  float fVar2;
  float fVar3;
  float fVar4;
  float fVar5;
  float fVar6;
  float fVar7;
  float fVar8;
  float fVar9;
  float fVar10;
  float fVar11;
  float fVar12;
  float fVar13;
  float fVar14;
  float fVar15;
  float fVar16;
  uint uVar17;
  float fVar18;
  float fVar19;
  
  if ((*(int *)(param_1 + 0x1ff5c) == 0) && (*(int *)(param_1 + 0x1ffac) == 0)) {
    iVar1 = param_1 + 0x158;
    fVar2 = (float)core_motion_cpp_FUN_00524a40(iVar1,0);
    fVar3 = (float)core_motion_cpp_FUN_00524a40(iVar1,1);
    fVar4 = (float)core_motion_cpp_FUN_00524a40(iVar1,4);
    fVar5 = (float)core_motion_cpp_FUN_00524a40(iVar1,7);
    fVar6 = (float)core_motion_cpp_FUN_00524a40(iVar1,8);
    fVar7 = (float)core_motion_cpp_FUN_00524a40(iVar1,9);
    fVar8 = (float)core_motion_cpp_FUN_00524a40(iVar1,10);
    fVar9 = (float)core_motion_cpp_FUN_00524a40(iVar1,0xb);
    fVar10 = (float)core_motion_cpp_FUN_00524a40(iVar1,0xc);
    fVar11 = (float)core_motion_cpp_FUN_00524a40(iVar1,0xd);
    fVar12 = (float)core_motion_cpp_FUN_00524a40(iVar1,0xe);
    fVar13 = (float)core_motion_cpp_FUN_00524a40(iVar1,0xf);
    fVar14 = (float)core_motion_cpp_FUN_00524a40(iVar1,0x10);
    fVar15 = (float)core_motion_cpp_FUN_00524a40(iVar1,5);
    fVar16 = (float)core_motion_cpp_FUN_00524a40(iVar1,6);
    fVar18 = (float)_DAT_005da5b4;
    switch(param_2) {
    case 4:
      fVar19 = (float)core_charactr_cpp_FUN_00434590(param_1,0);
      if (fVar19 < (float)_DAT_005da5bc) {
        return 0;
      }
    case 3:
      if (fVar16 + fVar15 + fVar14 + fVar13 + fVar12 + fVar11 + fVar10 + fVar9 + fVar8 + fVar7 + 
                                                  fVar6 + fVar5 + fVar4 + fVar3 + fVar2 <= fVar18) {
        return 0;
      }
      break;
    case 5:
    case 7:
    case 8:
    case 9:
    case 10:
    case 0xb:
      fVar18 = (float)core_charactr_cpp_FUN_00434590(param_1,0);
      if (fVar18 < (float)_DAT_005da5bc) {
        return 0;
      }
    }
    uVar17 = core_hero_cpp_FUN_004ec950(param_1,param_2);
    return uVar17;
  }
  return 0;
}
