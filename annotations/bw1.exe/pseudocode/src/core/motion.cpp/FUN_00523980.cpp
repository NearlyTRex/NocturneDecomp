// Name: core_motion.cpp_FUN_00523980
// Address: 00523980
// Address Range: [[00523980, 00523dad]]
// Convention: unknown
// Signature: void core_motion_cpp_FUN_00523980(int *param_1,undefined4 param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void core_motion_cpp_FUN_00523980(int *param_1,uint param_2)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  int *piVar4;
  int *piVar5;
  int local_28;
  int local_24;
  int *local_20;
  int local_1c;
  int *local_18;
  int local_14;
  
  unkafter_morph_cpp_FUN_00523910(param_1);
  local_24 = -1;
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(param_2,&DAT_005ea93b,&local_24);
  if (local_24 < 0) {
    _DAT_01d1d400 = "..\\core\\motion.cpp";
    _DAT_01d1d404 = 0x81;
    core_main_c_FUN_005030e0("Error reading motion list.");
  }
  if (3 < local_24) {
    _DAT_01d1d400 = "..\\core\\motion.cpp";
    _DAT_01d1d404 = 0x83;
    core_main_c_FUN_005030e0("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,3);
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  _fscanf(param_2,&DAT_005ea9f3,param_1);
  if (0 < *param_1) {
    piVar5 = param_1 + 1;
    do {
      _fscanf(param_2,&DAT_005ea9f7,piVar5);
      iVar1 = iVar1 + 1;
      piVar5 = (int *)((int)piVar5 + 0x1e);
    } while (iVar1 < *param_1);
  }
  do {
    iVar1 = _fgetc(param_2);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(param_2,&DAT_005ea9fb,param_1 + 0x709);
  local_1c = 0;
  if (0 < param_1[0x709]) {
    local_20 = param_1 + 0x70a;
    piVar5 = local_20;
LAB_00523a83:
    do {
      iVar1 = _fgetc(param_2);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_00523a83;
      }
      _fscanf(param_2,"\"%[^\"]\",%f,%d,%d,%d\n",piVar5,piVar5 + 8,piVar5 + 9,piVar5 + 0x18,piVar5 + 0x19
                );
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(param_2,"%d,%d,%f\n",piVar5 + 10,piVar5 + 0xd,piVar5 + 0xe);
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(param_2,"%d,%f,%d\n",&local_28,piVar5 + 0xf,piVar5 + 0x10)
      ;
      piVar5[0xc] = local_28;
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(param_2,"%d,%f\n",piVar5 + 0x14,piVar5 + 0x15);
      if (local_24 < 3) {
        piVar5[0x1a] = 1;
        piVar5[0x1b] = piVar5[0x19];
      }
      else {
        do {
          iVar1 = _fgetc(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        _fscanf(param_2,"%d,%d\n",piVar5 + 0x1a,piVar5 + 0x1b);
      }
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(param_2,&DAT_005eaa36,piVar5 + 0x1c);
      if (0 < piVar5[0x1c]) {
        pvVar2 = malloc(piVar5[0x1c] * 0x18);
        piVar5[0x1d] = (int)pvVar2;
        if (pvVar2 == (void *)0x0) {
          _DAT_01d1d400 = "..\\core\\motion.cpp";
          _DAT_01d1d404 = 0xc0;
          core_main_c_FUN_005030e0("Out of memory");
        }
        local_14 = 0;
        if (0 < piVar5[0x1c]) {
          iVar1 = 0;
          do {
            iVar3 = piVar5[0x1d] + iVar1;
            _fscanf(param_2,"%d,%d,%d,%f,%f,%d\n",iVar3,&local_28,iVar3 + 8,iVar3 + 0xc,
                       iVar3 + 0x10,iVar3 + 0x14);
            *(int *)(iVar3 + 4) = local_28;
            iVar1 = iVar1 + 0x18;
            local_14 = local_14 + 1;
          } while (local_14 < piVar5[0x1c]);
        }
      }
      do {
        iVar1 = _fgetc(param_2);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(param_2,&DAT_005eaa6e,piVar5 + 0x1e);
      if (0 < piVar5[0x1e]) {
        local_18 = piVar5 + 0x1f;
        piVar4 = piVar5 + 0x20;
        do {
          iVar3 = iVar1 * 2;
          iVar1 = iVar1 + 1;
          _fscanf(param_2,"%d,%d\n",local_18 + iVar3,piVar4);
          piVar4 = piVar4 + 2;
        } while (iVar1 < piVar5[0x1e]);
      }
      if (local_24 < 2) {
        piVar5[0x3d] = 0;
      }
      else {
        do {
          iVar1 = _fgetc(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        _fscanf(param_2,&DAT_005eaa79,piVar5 + 0x3d);
        if (0 < piVar5[0x3d]) {
          piVar4 = piVar5 + 0x3e;
          do {
            iVar1 = iVar1 + 1;
            _fscanf(param_2,&DAT_005eaa7c,piVar4);
            piVar4 = piVar4 + 1;
          } while (iVar1 < piVar5[0x3d]);
        }
        do {
          iVar1 = _fgetc(param_2);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_20 = local_20 + 0x48;
      local_1c = local_1c + 1;
      piVar5 = local_20;
    } while (local_1c < param_1[0x709]);
  }
  return;
}
