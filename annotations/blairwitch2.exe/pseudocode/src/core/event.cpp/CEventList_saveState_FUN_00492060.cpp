// Name: core_event.cpp_CEventList_saveState_FUN_00492060
// Address: 00492060
// Address Range: [[00492060, 00492347]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_saveState_FUN_00492060(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_00492060(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CEventList *pCVar2;
  int iVar3;
  CEventList *pCVar4;
  CEventList *local_1c;
  int local_18;
  int local_14;
  
  FUN_005b8010();
  FUN_005b8010(file_handle,&DAT_005d5084,5);
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(file_handle,&DAT_005d509d,*(uint *)this_ptr);
  if (0 < *(int *)this_ptr) {
    pCVar2 = this_ptr + 4;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(file_handle,&DAT_005d50a1,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)this_ptr);
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(file_handle,&DAT_005d50c1,*(uint *)(this_ptr + 0xc84));
  if (0 < *(int *)(this_ptr + 0xc84)) {
    pCVar2 = this_ptr + 0xc88;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(file_handle,&DAT_005d50c5,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)(this_ptr + 0xc84));
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(file_handle,&DAT_005d50e8,*(uint *)(this_ptr + 0x258c));
  if (0 < *(int *)(this_ptr + 0x258c)) {
    pCVar2 = this_ptr + 0x2590;
    do {
      iVar1 = iVar1 + 1;
      FUN_005b8010(file_handle,&DAT_005d50ec,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)(this_ptr + 0x258c));
  }
  FUN_005b8010();
  FUN_005b8010(file_handle,&DAT_005d5115,*(uint *)(this_ptr + 0x3210));
  local_18 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    pCVar2 = this_ptr + 0x3214;
    pCVar4 = this_ptr;
    do {
      FUN_005b8010
                (file_handle,"%f, %s\n",(double)*(float *)(pCVar4 + 0x3354),pCVar2);
      pCVar4 = pCVar4 + 4;
      pCVar2 = pCVar2 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(this_ptr + 0x3210));
  }
  FUN_005b8010();
  FUN_005b8010(file_handle,&DAT_005d5145,*(uint *)(this_ptr + 0x337c));
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0x337c)) {
    pCVar2 = this_ptr + 0x3380;
    pCVar4 = this_ptr;
    do {
      FUN_005b8010(file_handle,"%d, %s\n",*(uint *)(pCVar4 + 0x34c0),pCVar2)
      ;
      pCVar4 = pCVar4 + 4;
      pCVar2 = pCVar2 + 0x20;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(this_ptr + 0x337c));
  }
  FUN_005b8010();
  iVar1 = 0;
  FUN_005b8010(file_handle,&DAT_005d517d,*(uint *)(this_ptr + 0x34e8));
  if (0 < *(int *)(this_ptr + 0x34e8)) {
    local_1c = this_ptr + 0x37da;
    pCVar2 = this_ptr + 0x34ec;
    do {
      FUN_005b8010(file_handle,"\"%s\", \"%s\"\n",pCVar2,local_1c);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 0x1e;
      local_1c = local_1c + 0x1e;
    } while (iVar1 < *(int *)(this_ptr + 0x34e8));
  }
  FUN_005b8010();
  iVar3 = 0;
  iVar1 = FUN_005b8010(file_handle,&DAT_005d51a5,*(uint *)(this_ptr + 0x1908));
  if (0 < *(int *)(this_ptr + 0x1908)) {
    pCVar2 = this_ptr + 0x190c;
    do {
      iVar3 = iVar3 + 1;
      FUN_005b8010(file_handle,&DAT_005d51a9,pCVar2);
      iVar1 = *(int *)(this_ptr + 0x1908);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}
