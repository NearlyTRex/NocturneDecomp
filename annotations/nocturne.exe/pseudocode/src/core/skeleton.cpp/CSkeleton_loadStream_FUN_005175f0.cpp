// Name: core_skeleton.cpp_CSkeleton_loadStream_FUN_005175f0
// Address: 005175f0
// Address Range: [[005175f0, 005179c3]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(int param_1,int param_2)

#include "nocturne.h"

void __cdecl core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(int param_1,int param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int local_24;
  uint local_20;
  uint local_1c;
  int local_18;
  int local_14;
  
  core_skeleton_cpp_FUN_005174e0(param_1);
  local_24 = -1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(param_2,"%d\n",&local_24);
  if (local_24 < 1) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x10d;
    core_main_c_FUN_004c8440("Invalid skeleton version");
  }
  if (local_24 < 2) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x10e;
    core_main_c_FUN_004c8440("Old skeleton version %d not supported",local_24);
  }
  if (0x00000003 < local_24) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x10f;
    core_main_c_FUN_004c8440("Skeleton version %d is newer than .EXE, which can only process up to version %d",local_24,0x00000003);
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(param_2,"%d,%d\n",&local_20,&local_1c);
  core_skeleton_cpp_CSkeleton_allocMemory_FUN_005173c0(param_1,local_20,local_1c);
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x28558)) {
    iVar3 = param_1 + 0x2857c;
    do {
      _fscanf(param_2,"\"%[^\"]\",%d\n",iVar1 * 0x24 + param_1 + 0x2855c,iVar3);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0x24;
    } while (iVar1 < *(int *)(param_1 + 0x28558));
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  local_18 = 0;
  iVar1 = *(int *)(param_1 + 0x29370);
  if (0 < *(int *)(param_1 + 0x2936c)) {
    do {
      iVar3 = 0;
      if (0 < *(int *)(param_1 + 0x28558)) {
        local_14 = iVar1 + 4;
        iVar4 = iVar1 + 8;
        iVar2 = iVar1 + 0xc;
        do {
          iVar3 = iVar3 + 1;
          _fscanf(param_2,"%f,%f,%f,%f\n",iVar1,local_14,iVar4,iVar2);
          iVar4 = iVar4 + 0x10;
          iVar1 = iVar1 + 0x10;
          local_14 = local_14 + 0x10;
          iVar2 = iVar2 + 0x10;
        } while (iVar3 < *(int *)(param_1 + 0x28558));
      }
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(param_1 + 0x2936c));
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2936c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x29374) + iVar3;
      _fscanf(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x2936c));
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  if (0 < *(int *)(param_1 + 0x2936c)) {
    iVar3 = 0;
    do {
      iVar4 = *(int *)(param_1 + 0x29378) + iVar3;
      _fscanf(param_2,"%f,%f,%f\n",iVar4,iVar4 + 4,iVar4 + 8);
      iVar1 = iVar1 + 1;
      iVar3 = iVar3 + 0xc;
    } while (iVar1 < *(int *)(param_1 + 0x2936c));
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x144;
    core_main_c_FUN_004c8440("CSkeleton::loadStream - error reading file.");
  }
  core_motion_cpp_CMotionList_load_FUN_004e0920(param_1,param_2);
  if (2 < local_24) {
    do {
      iVar1 = _fgetc(param_2);
      if (iVar1 < 0) break;
    } while (iVar1 != 10);
    iVar1 = 0;
    if (0 < *(int *)(param_1 + 0x28558)) {
LAB_0051793e:
      do {
        iVar3 = _fgetc(param_2);
        if (-1 < iVar3) {
          if (iVar3 != 10) goto LAB_0051793e;
        }
        iVar1 = iVar1 + 1;
      } while (iVar1 < *(int *)(param_1 + 0x28558));
    }
  }
  if ((*(byte *)(param_2 + 0xc) & 0x20) != 0) {
    PTR_01cc4800 = "..\\core\\skeleton.cpp";
    INT_01cc4804 = 0x15f;
    core_main_c_FUN_004c8440("CSkeleton::loadStream - error reading file.");
    return;
  }
  return;
}
