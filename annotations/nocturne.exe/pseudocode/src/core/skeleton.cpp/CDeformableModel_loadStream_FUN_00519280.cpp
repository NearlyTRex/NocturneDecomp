// Name: core_skeleton.cpp_CDeformableModel_loadStream_FUN_00519280
// Address: 00519280
// Address Range: [[00519280, 00519adb]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(int *param_1,int param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CDeformableModel_loadStream_FUN_00519280(int *param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int *piVar3;
  byte *pbVar4;
  int iVar5;
  byte *pbVar6;
  ushort *puVar7;
  uint local_8c;
  byte local_88 [4];
  byte local_84 [4];
  int local_80;
  byte local_7c [4];
  byte local_78 [4];
  ushort local_74 [2];
  byte local_70 [4];
  byte local_6c [4];
  uint local_68;
  int local_64;
  int local_60;
  uint local_5c;
  uint local_58;
  uint local_54;
  uint local_50;
  uint local_4c;
  uint local_48;
  uint local_44;
  uint local_40;
  uint local_3c;
  uint local_38;
  uint local_34;
  byte local_30 [4];
  byte local_2c [4];
  uint local_28;
  int local_24;
  int local_20;
  int local_1c;
  int local_18;
  int local_14;
  
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = _fscanf(param_2,"%d\n",&local_64);
  if (iVar1 == 1) goto LAB_005192e4;
LAB_005192c1:
  do {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x4c7;
    FUN_004c8440("Deformable model file is corrupt");
LAB_005192e4:
    if (0x00000007 < local_64) {
      _DAT_01cc4800 = "..\\core\\skeleton.cpp";
      _DAT_01cc4804 = 0x4ca;
      FUN_004c8440("Can't load model of version %d, this .exe can only handle up to version %d",local_64,0x00000007);
    }
    if (local_64 < 3) {
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = _fscanf(param_2,"%d,%d,%d,%d,%d,%d\n",&local_50,&local_4c,&local_48,
                         &local_44,&local_60,&local_40);
      if (iVar1 != 6) goto LAB_005192c1;
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0(param_1,1,1,local_44,local_40);
      core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0(param_1,0,local_50,local_4c,local_48)
      ;
    }
    else {
      if (local_64 < 5) {
        do {
          iVar1 = _fgetc(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(param_2,"%d,%d,%d,%d\n",&local_5c,&local_54,&local_60,&local_68);
        if (iVar1 != 4) goto LAB_005192c1;
        local_58 = 1;
      }
      else {
        do {
          iVar1 = _fgetc(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = _fscanf(param_2,"%d,%d,%d,%d,%d\n",&local_5c,&local_58,&local_54,&local_60
                           ,&local_68);
        if (iVar1 != 5) goto LAB_005192c1;
      }
      core_skeleton_cpp_CDeformableModel_allocMemory_FUN_00517da0
                (param_1,local_5c,local_58,local_54,local_68);
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
        iVar2 = _fscanf(param_2,"%d,%d,%d,%d,%d\n",&local_3c,&local_38,&local_34,
                           param_1 + iVar1 * 2 + 1,param_1 + iVar1 * 2 + 1 + 1);
        if (iVar2 != 5) goto LAB_005192c1;
        core_skeleton_cpp_CDeformableModel_allocLOD_FUN_00517ec0
                  (param_1,iVar1,local_3c,local_38,local_34);
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(param_2,"%[^\n]\n",param_1 + 0xa87);
    if (iVar1 != 1) goto LAB_005192c1;
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    if (local_64 < 3) {
      for (iVar1 = 0; iVar1 < param_1[0x300]; iVar1 = iVar1 + 1) {
        piVar3 = param_1 + iVar1 * 0x18 + 0x301;
        iVar2 = _fscanf(param_2,"\"%[^\"]\",%d,%d,%d\n",piVar3,piVar3 + 8,piVar3 + 0xd,
                           piVar3 + 0x12);
        if (iVar2 != 4) goto LAB_005192c1;
        for (iVar2 = 0; iVar2 < param_1[iVar1 * 0x18 + 0x313]; iVar2 = iVar2 + 1) {
          iVar5 = _fscanf(param_2,"%d\n",param_1 + iVar1 * 0x18 + iVar2 + 0x314);
          if (iVar5 != 1) goto LAB_005192c1;
        }
      }
    }
    else {
      for (iVar1 = 0; iVar1 < param_1[0x300]; iVar1 = iVar1 + 1) {
        piVar3 = param_1 + iVar1 * 0x18 + 0x301;
        if (local_64 < 6) {
          _fscanf(param_2,"\"%[^\"]\", %d\n",piVar3,piVar3 + 0x12);
        }
        else {
          _fscanf(param_2,"\"%[^\"]\", %d, %d\n",piVar3,piVar3 + 0x17,piVar3 + 0x12);
        }
        for (iVar2 = 0; iVar2 < param_1[iVar1 * 0x18 + 0x313]; iVar2 = iVar2 + 1) {
          _fscanf(param_2,"%d\n",param_1 + iVar1 * 0x18 + iVar2 + 0x314);
        }
        for (iVar2 = 0; iVar2 < *param_1; iVar2 = iVar2 + 1) {
          _fscanf(param_2,"%d,%d\n",param_1 + iVar1 * 0x18 + iVar2 + 0x309,
                     param_1 + iVar1 * 0x18 + iVar2 + 0x30e);
        }
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_20 = 0; local_20 < *param_1; local_20 = local_20 + 1) {
      for (local_18 = 0; local_18 < param_1[local_20 + 0xb]; local_18 = local_18 + 1) {
        pbVar6 = (byte *)(param_1[local_20 + 0x10] + local_18 * 0x34);
        iVar1 = _fscanf(param_2,"%d\n",local_30);
        if (iVar1 != 1) goto LAB_005192c1;
        *pbVar6 = local_30[0];
        for (iVar1 = 0; iVar1 < (int)(uint)*pbVar6; iVar1 = iVar1 + 1) {
          pbVar4 = pbVar6 + iVar1 * 0xc + 0x10;
          iVar2 = _fscanf(param_2,"%d,%f,%f,%f,%f\n",local_2c,pbVar6 + iVar1 * 4 + 4,
                             pbVar4,pbVar4 + 4,pbVar4 + 8);
          if (iVar2 != 5) goto LAB_005192c1;
          pbVar6[iVar1 + 1] = local_2c[0];
        }
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (local_14 = 0; local_14 < *param_1; local_14 = local_14 + 1) {
      for (iVar1 = 0; iVar2 = local_14, iVar1 < param_1[local_14 + 0x15] + param_1[local_14 + 0x1a];
          iVar1 = iVar1 + 1) {
        local_1c = param_1[local_14 + 0x1f] + iVar1 * 0x12;
        iVar5 = _fscanf(param_2,"%d,%d,%d,%d,%d,%d,%d,%d,%d,%d\n",&local_28,local_74,
                           &local_80,&local_8c,local_70,local_7c,local_88,local_6c,local_78,local_84
                          );
        if (iVar5 != 10) goto LAB_005192c1;
        *(uint *)(param_1[iVar2 + 0x24] + iVar1 * 4) = local_28;
        iVar2 = 0;
        do {
          puVar7 = (ushort *)(iVar2 * 2 + local_1c);
          *puVar7 = local_74[iVar2 * 2];
          local_24 = *(int *)(local_7c + iVar2 * 4 + -4) >> 8;
          puVar7[3] = (short)((uint)*(int *)(local_7c + iVar2 * 4 + -4) >> 8);
          iVar5 = iVar2 * 4;
          iVar2 = iVar2 + 1;
          puVar7[6] = (short)((uint)*(uint *)(local_88 + iVar5 + -4) >> 8);
        } while (iVar2 < 3);
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < *param_1; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < param_1[iVar1 + 0x1a]; iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(param_2,"%d\n",param_1[iVar1 + 0x29] + iVar2 * 4);
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < param_1[0x2e]; iVar1 = iVar1 + 1) {
      for (iVar2 = 0; iVar2 < param_1[0x2f]; iVar2 = iVar2 + 1) {
        iVar5 = _fscanf(param_2,"%[^\n]\n",param_1 + iVar1 * 0x90 + iVar2 * 0x12 + 0x32);
        if (iVar5 != 1) goto LAB_005192c1;
      }
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      piVar3 = param_1 + iVar1 * 3 + 0x5d4;
      iVar2 = _fscanf(param_2,"%f,%f,%f\n",piVar3,piVar3 + 1,piVar3 + 2);
      if (iVar2 != 3) goto LAB_005192c1;
    }
    if (local_64 < 2) {
      param_1[0x5d3] = 0x3f800000;
      param_1[0x5d2] = param_1[0x5d3];
      param_1[0x5d1] = param_1[0x5d2];
      break;
    }
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x5d1,param_1 + 0x5d2,param_1 + 0x5d3);
  } while (iVar1 != 3);
  if (local_64 < 4) {
    param_1[0x702] = 0;
    param_1[0x701] = param_1[0x702];
    param_1[0x700] = param_1[0x701];
  }
  else {
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    _fscanf(param_2,"%f,%f,%f\n",param_1 + 0x700,param_1 + 0x701,param_1 + 0x702);
  }
  if (6 < local_64) {
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    for (iVar1 = 0; iVar1 < local_60; iVar1 = iVar1 + 1) {
      _fscanf(param_2,"%d\n",param_1 + iVar1 + 0x9bf);
    }
  }
  if (local_64 < 7) {
    core_skeleton_cpp_CDeformableModel_computePartDominantBones_FUN_0051ad20(param_1);
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0x596;
    FUN_004c8440("CDeformableModel::loadStream - error reading file!");
    return;
  }
  return;
}
