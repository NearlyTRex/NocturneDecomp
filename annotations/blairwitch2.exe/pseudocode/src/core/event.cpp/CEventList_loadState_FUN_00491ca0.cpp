// Name: core_event.cpp_CEventList_loadState_FUN_00491ca0
// Address: 00491ca0
// Address Range: [[00491ca0, 00492057]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_loadState_FUN_00491ca0(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

int __cdecl core_event_cpp_CEventList_loadState_FUN_00491ca0(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  CEventList *pCVar3;
  CEventList *pCVar4;
  byte local_120 [256];
  int local_20;
  CEventList *local_1c;
  CEventList *local_18;
  int local_14;
  
  core_event_cpp_CEventList_reset_FUN_00489380(this_ptr);
  _fgets(local_120,0xff,file_handle);
  _fscanf(file_handle,&DAT_005d4f93,&local_20);
  if (5 < local_20) {
    _DAT_01d046a0 = "..\\core\\event.cpp";
    _DAT_01d046a4 = 0xf3e;
    core_main_c_FUN_004e4500("CEventList::loadState - file version %d is newer than .EXE, which can only handle up to version %d",local_20,5);
  }
  _fgets(local_120,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005d500c,this_ptr);
  if (0 < *(int *)this_ptr) {
    pCVar4 = this_ptr + 4;
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file_handle,"%[^\n]\n",pCVar4);
      pCVar4 = pCVar4 + 0x20;
    } while (iVar1 < *(int *)this_ptr);
  }
  _fgets(local_120,0xff,file_handle);
  iVar1 = 0;
  _fscanf(file_handle,&DAT_005d5017,this_ptr + 0xc84);
  if (0 < *(int *)(this_ptr + 0xc84)) {
    pCVar4 = this_ptr + 0xc88;
    do {
      iVar1 = iVar1 + 1;
      _fscanf(file_handle,"%[^\n]\n",pCVar4);
      pCVar4 = pCVar4 + 0x20;
    } while (iVar1 < *(int *)(this_ptr + 0xc84));
  }
  _fgets(local_120,0xff,file_handle);
  iVar2 = 0;
  iVar1 = _fscanf(file_handle,&DAT_005d5022,this_ptr + 0x258c);
  if (0 < *(int *)(this_ptr + 0x258c)) {
    pCVar4 = this_ptr + 0x2590;
    do {
      iVar2 = iVar2 + 1;
      iVar1 = _fscanf(file_handle,"%[^\n]\n",pCVar4);
      pCVar4 = pCVar4 + 0x20;
    } while (iVar2 < *(int *)(this_ptr + 0x258c));
  }
  if (1 < local_20) {
    _fgets(local_120,0xff,file_handle);
    _fscanf(file_handle,&DAT_005d502d,this_ptr + 0x3210);
    iVar1 = *(int *)(this_ptr + 0x3210);
    local_14 = 0;
    if (0 < iVar1) {
      pCVar4 = this_ptr + 0x3214;
      pCVar3 = this_ptr + 0x3354;
      do {
        iVar1 = _fscanf(file_handle,"%f, %[^\n]\n",pCVar3,pCVar4);
        pCVar4 = pCVar4 + 0x20;
        pCVar3 = pCVar3 + 4;
        local_14 = local_14 + 1;
      } while (local_14 < *(int *)(this_ptr + 0x3210));
    }
  }
  if (2 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    _fscanf(file_handle,&DAT_005d503c,this_ptr + 0x337c);
    iVar1 = *(int *)(this_ptr + 0x337c);
    if (0 < iVar1) {
      local_18 = this_ptr + 0x3380;
      pCVar4 = this_ptr + 0x34c0;
      do {
        _fscanf(file_handle,"%d, %[^\n]\n",pCVar4,local_18);
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 4;
        local_18 = local_18 + 0x20;
        iVar1 = *(int *)(this_ptr + 0x337c);
      } while (iVar2 < iVar1);
    }
  }
  if (3 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    iVar1 = _fscanf(file_handle,&DAT_005d504b,this_ptr + 0x34e8);
    if (0 < *(int *)(this_ptr + 0x34e8)) {
      local_1c = this_ptr + 0x37da;
      pCVar4 = this_ptr + 0x34ec;
      do {
        iVar1 = _fscanf(file_handle,"\"%[^\"]\" , \"%[^\"]\"\n",pCVar4,local_1c);
        iVar2 = iVar2 + 1;
        pCVar4 = pCVar4 + 0x1e;
        local_1c = local_1c + 0x1e;
      } while (iVar2 < *(int *)(this_ptr + 0x34e8));
    }
  }
  if (4 < local_20) {
    _fgets(local_120,0xff,file_handle);
    iVar2 = 0;
    iVar1 = _fscanf(file_handle,&DAT_005d5062,this_ptr + 0x1908);
    if (0 < *(int *)(this_ptr + 0x1908)) {
      pCVar4 = this_ptr + 0x190c;
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,"%[^\n]\n",pCVar4);
        pCVar4 = pCVar4 + 0x20;
      } while (iVar2 < *(int *)(this_ptr + 0x1908));
      return *(int *)(this_ptr + 0x1908);
    }
  }
  return iVar1;
}
