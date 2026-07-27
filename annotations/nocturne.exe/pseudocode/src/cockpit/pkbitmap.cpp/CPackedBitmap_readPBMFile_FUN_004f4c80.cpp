// Name: cockpit_pkbitmap.cpp_CPackedBitmap_readPBMFile_FUN_004f4c80
// Address: 004f4c80
// Address Range: [[004f4c80, 004f4e36]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(int param_1,undefined4 param_2,int param_3)

#include "nocturne.h"

void __cdecl cockpit_pkbitmap_cpp_CPackedBitmap_readPBMFile_FUN_004f4c80(int param_1,uint param_2,int param_3)

{
  uint uVar1;
  int iVar2;
  int *piVar3;
  int iVar4;
  byte *pbVar5;
  byte *pbVar6;
  bool bVar7;
  bool bVar8;
  byte bVar9;
  byte abStack_2c [4];
  int iStack_28;
  int iStack_24;
  int iStack_20;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  bVar9 = 0;
  cockpit_pkbitmap_cpp_FUN_004f3f50(param_1);
  do {
    iVar2 = _fread(abStack_2c,0x1c,1,param_2);
    if (iVar2 != 1) goto LAB_004f4d0f;
    iVar4 = 4;
    bVar7 = false;
    iVar2 = 0;
    bVar8 = true;
    pbVar5 = abStack_2c;
    pbVar6 = (byte *)0x5be17c;
    do {
      if (iVar4 == 0) break;
      iVar4 = iVar4 + -1;
      bVar7 = *pbVar5 < *pbVar6;
      bVar8 = *pbVar5 == *pbVar6;
      pbVar5 = pbVar5 + (uint)bVar9 * -2 + 1;
      pbVar6 = pbVar6 + (uint)bVar9 * -2 + 1;
    } while (bVar8);
    if (!bVar8) {
      iVar2 = (1 - (uint)bVar7) - (uint)(bVar7 != 0);
    }
    if (((iVar2 == 0) && (iStack_28 != 0)) && (iStack_24 != 0)) {
      *(int *)(param_1 + 0x18) = iStack_28;
      *(int *)(param_1 + 0x1c) = iStack_24;
      if (((iStack_20 != 0) || (iStack_1c != 0)) ||
         ((*(int *)(param_1 + 0x18) + -1 != iStack_18 ||
          (*(int *)(param_1 + 0x1c) + -1 != iStack_14)))) goto LAB_004f4cca;
      iVar2 = shape_memdbg_cpp_malloc_FUN_00564c18((*(int *)(param_1 + 0x1c) + 1) * 4);
      *(int *)(param_1 + 0x20) = iVar2;
      if (iVar2 != 0) {
        iVar2 = _fread(*(uint *)(param_1 + 0x20),(*(int *)(param_1 + 0x1c) + 1) * 4,1,
                           param_2);
        if (iVar2 == 1) {
          iVar2 = 0;
          if (0 < *(int *)(param_1 + 0x1c)) {
            piVar3 = *(int **)(param_1 + 0x20);
            do {
              if (piVar3[1] < *piVar3) goto LAB_004f4cca;
              iVar2 = iVar2 + 1;
              piVar3 = piVar3 + 1;
            } while (iVar2 < *(int *)(param_1 + 0x1c));
          }
          uVar1 = *(uint *)(*(int *)(param_1 + 0x20) + *(int *)(param_1 + 0x1c) * 4);
          if (param_3 != 0) {
            _fseek(param_2,uVar1,1);
            return;
          }
          iVar2 = malloc(uVar1);
          *(int *)(param_1 + 0x14) = iVar2;
          if (iVar2 == 0) goto LAB_004f4ced;
          iVar2 = _fread(iVar2,uVar1,1,param_2);
          if (iVar2 == 1) {
            return;
          }
        }
LAB_004f4d0f:
        PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
        INT_01cc4804 = 0x4b0;
        core_main_c_FUN_004c8440("IO error reading PBM (possibly corrupt file).");
        goto LAB_004f4cca;
      }
    }
    else {
LAB_004f4cca:
      PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
      INT_01cc4804 = 0x4b1;
      core_main_c_FUN_004c8440("Corrupt data detected reading PBM.");
    }
LAB_004f4ced:
    PTR_01cc4800 = "..\\cockpit\\pkbitmap.cpp";
    INT_01cc4804 = 0x4b2;
    core_main_c_FUN_004c8440("Out of memory reading PBM");
  } while( true );
}
