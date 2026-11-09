// Name: core_motion.cpp_FUN_004fb280
// Address: 004fb280
// Address Range: [[004fb280, 004fb6ad]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_004fb280(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  void *pvVar2;
  int iVar3;
  CMotionList *pCVar4;
  CMotionList *pCVar5;
  uint local_28;
  int local_24;
  CMotionList *local_20;
  int local_1c;
  CMotionList *local_18;
  int local_14;
  
  unkafter_box_cpp_FUN_004fb210(this_ptr);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005c974c,&local_24);
  if (local_24 < 0) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x81;
    core_main_c_FUN_004e4330("Error reading motion list.");
  }
  if (3 < local_24) {
    _DAT_01d71de0 = "..\\core\\motion.cpp";
    _DAT_01d71de4 = 0x83;
    core_main_c_FUN_004e4330("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,3);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005c9804,this_ptr);
  if (0 < *(int *)this_ptr) {
    pCVar5 = this_ptr + 4;
    do {
      _fscanf(file_handle,&DAT_005c9808,pCVar5);
      iVar1 = iVar1 + 1;
      pCVar5 = pCVar5 + 0x1e;
    } while (iVar1 < *(int *)this_ptr);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005c980c,this_ptr + 0x1c24);
  local_1c = 0;
  if (0 < *(int *)(this_ptr + 0x1c24)) {
    local_20 = this_ptr + 0x1c28;
    pCVar5 = local_20;
LAB_004fb383:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_004fb383;
      }
      _fscanf(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n",pCVar5,pCVar5 + 0x20,pCVar5 + 0x24,pCVar5 + 0x60,
                 pCVar5 + 100);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%d,%f\n",pCVar5 + 0x28,pCVar5 + 0x34,pCVar5 + 0x38);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f,%d\n",&local_28,pCVar5 + 0x3c,pCVar5 + 0x40);
      *(uint *)(pCVar5 + 0x30) = local_28;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f\n",pCVar5 + 0x50,pCVar5 + 0x54);
      if (local_24 < 3) {
        *(uint *)(pCVar5 + 0x68) = 1;
        *(uint *)(pCVar5 + 0x6c) = *(uint *)(pCVar5 + 100);
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        _fscanf(file_handle,"%d,%d\n",pCVar5 + 0x68,pCVar5 + 0x6c);
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,&DAT_005c9847,pCVar5 + 0x70);
      if (0 < *(int *)(pCVar5 + 0x70)) {
        pvVar2 = FUN_005a3650(*(int *)(pCVar5 + 0x70) * 0x18);
        *(void **)(pCVar5 + 0x74) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          _DAT_01d71de0 = "..\\core\\motion.cpp";
          _DAT_01d71de4 = 0xc0;
          core_main_c_FUN_004e4330("Out of memory");
        }
        local_14 = 0;
        if (0 < *(int *)(pCVar5 + 0x70)) {
          iVar1 = 0;
          do {
            iVar3 = *(int *)(pCVar5 + 0x74) + iVar1;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n",iVar3,&local_28,iVar3 + 8,iVar3 + 0xc,
                       iVar3 + 0x10,iVar3 + 0x14);
            *(uint *)(iVar3 + 4) = local_28;
            iVar1 = iVar1 + 0x18;
            local_14 = local_14 + 1;
          } while (local_14 < *(int *)(pCVar5 + 0x70));
        }
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,&DAT_005c987f,pCVar5 + 0x78);
      if (0 < *(int *)(pCVar5 + 0x78)) {
        local_18 = pCVar5 + 0x7c;
        pCVar4 = pCVar5 + 0x80;
        do {
          iVar3 = iVar1 * 8;
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%d,%d\n",local_18 + iVar3,pCVar4);
          pCVar4 = pCVar4 + 8;
        } while (iVar1 < *(int *)(pCVar5 + 0x78));
      }
      if (local_24 < 2) {
        *(uint *)(pCVar5 + 0xf4) = 0;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        _fscanf(file_handle,&DAT_005c988a,pCVar5 + 0xf4);
        if (0 < *(int *)(pCVar5 + 0xf4)) {
          pCVar4 = pCVar5 + 0xf8;
          do {
            iVar1 = iVar1 + 1;
            _fscanf(file_handle,&DAT_005c988d,pCVar4);
            pCVar4 = pCVar4 + 4;
          } while (iVar1 < *(int *)(pCVar5 + 0xf4));
        }
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_20 = local_20 + 0x120;
      local_1c = local_1c + 1;
      pCVar5 = local_20;
    } while (local_1c < *(int *)(this_ptr + 0x1c24));
  }
  return;
}
