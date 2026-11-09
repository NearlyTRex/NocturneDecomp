// Name: core_motion.cpp_FUN_00502820
// Address: 00502820
// Address Range: [[00502820, 00502c14]]
// Convention: __cdecl
// Signature: void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_motion_cpp_FUN_00502820(CMotionList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  void *pvVar2;
  CMotionList *pCVar3;
  int iVar4;
  CMotionList *pCVar5;
  uint local_28;
  int local_24;
  CMotionList *local_20;
  int local_1c;
  CMotionList *local_18;
  int local_14;
  
  core_moon_cpp_FUN_005027b0(this_ptr);
  local_24 = -1;
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df720,&local_24);
  if (local_24 < 0) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x80;
    core_main_c_FUN_004e4500("Error reading motion list.");
  }
  if (2 < local_24) {
    _DAT_01d046a0 = "..\\core\\motion.cpp";
    _DAT_01d046a4 = 0x82;
    core_main_c_FUN_004e4500("Can't read motion list - it's version %d, and I can only handle up to version %d.  (Probably you have an old .exe)",local_24,2);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df7d8,this_ptr);
  iVar1 = 0;
  if (0 < *(int *)this_ptr) {
    pCVar3 = this_ptr + 4;
    do {
      _fscanf(file_handle,&DAT_005df7dc,pCVar3);
      iVar1 = iVar1 + 1;
      pCVar3 = pCVar3 + 0x1e;
    } while (iVar1 < *(int *)this_ptr);
  }
  do {
    iVar1 = _fgetc(file_handle);
    if (iVar1 < 0) break;
  } while (iVar1 != 10);
  _fscanf(file_handle,&DAT_005df7e0,this_ptr + 0x1c24);
  local_1c = 0;
  if (0 < *(int *)(this_ptr + 0x1c24)) {
    local_20 = this_ptr + 0x1c28;
    pCVar3 = local_20;
LAB_00502933:
    do {
      iVar1 = _fgetc(file_handle);
      if (-1 < iVar1) {
        if (iVar1 != 10) goto LAB_00502933;
      }
      _fscanf(file_handle,"\"%[^\"]\",%f,%d,%d,%d\n",pCVar3,pCVar3 + 0x20,pCVar3 + 0x24,pCVar3 + 0x60,
                 pCVar3 + 100);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%d,%f\n",pCVar3 + 0x28,pCVar3 + 0x34,pCVar3 + 0x38);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f,%d\n",&local_28,pCVar3 + 0x3c,pCVar3 + 0x40);
      *(uint *)(pCVar3 + 0x30) = local_28;
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,"%d,%f\n",pCVar3 + 0x50,pCVar3 + 0x54);
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      _fscanf(file_handle,&DAT_005df814,pCVar3 + 0x68);
      if (0 < *(int *)(pCVar3 + 0x68)) {
        pvVar2 = FUN_005b8580(*(int *)(pCVar3 + 0x68) * 0x18);
        *(void **)(pCVar3 + 0x6c) = pvVar2;
        if (pvVar2 == (void *)0x0) {
          _DAT_01d046a0 = "..\\core\\motion.cpp";
          _DAT_01d046a4 = 0xb1;
          core_main_c_FUN_004e4500("Out of memory");
        }
        iVar1 = 0;
        if (0 < *(int *)(pCVar3 + 0x68)) {
          local_14 = 0;
          do {
            iVar4 = *(int *)(pCVar3 + 0x6c) + local_14;
            _fscanf(file_handle,"%d,%d,%d,%f,%f,%d\n",iVar4,&local_28,iVar4 + 8,iVar4 + 0xc,
                       iVar4 + 0x10,iVar4 + 0x14);
            iVar1 = iVar1 + 1;
            *(uint *)(iVar4 + 4) = local_28;
            local_14 = local_14 + 0x18;
          } while (iVar1 < *(int *)(pCVar3 + 0x68));
        }
      }
      do {
        iVar1 = _fgetc(file_handle);
        if (iVar1 < 0) break;
      } while (iVar1 != 10);
      iVar1 = 0;
      _fscanf(file_handle,&DAT_005df84c,pCVar3 + 0x70);
      if (0 < *(int *)(pCVar3 + 0x70)) {
        local_18 = pCVar3 + 0x74;
        pCVar5 = pCVar3 + 0x78;
        do {
          iVar4 = iVar1 * 8;
          iVar1 = iVar1 + 1;
          _fscanf(file_handle,"%d,%d\n",local_18 + iVar4,pCVar5);
          pCVar5 = pCVar5 + 8;
        } while (iVar1 < *(int *)(pCVar3 + 0x70));
      }
      if (local_24 < 2) {
        *(uint *)(pCVar3 + 0xec) = 0;
      }
      else {
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
        iVar1 = 0;
        _fscanf(file_handle,&DAT_005df857,pCVar3 + 0xec);
        if (0 < *(int *)(pCVar3 + 0xec)) {
          pCVar5 = pCVar3 + 0xf0;
          do {
            iVar1 = iVar1 + 1;
            _fscanf(file_handle,&DAT_005df85a,pCVar5);
            pCVar5 = pCVar5 + 4;
          } while (iVar1 < *(int *)(pCVar3 + 0xec));
        }
        do {
          iVar1 = _fgetc(file_handle);
          if (iVar1 < 0) break;
        } while (iVar1 != 10);
      }
      local_20 = local_20 + 0x118;
      local_1c = local_1c + 1;
      pCVar3 = local_20;
    } while (local_1c < *(int *)(this_ptr + 0x1c24));
  }
  return;
}
