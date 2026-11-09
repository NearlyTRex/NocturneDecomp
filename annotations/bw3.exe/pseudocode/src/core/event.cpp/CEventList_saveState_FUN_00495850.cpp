// Name: core_event.cpp_CEventList_saveState_FUN_00495850
// Address: 00495850
// Address Range: [[00495850, 00495b37]]
// Convention: __cdecl
// Signature: int __cdecl core_event_cpp_CEventList_saveState_FUN_00495850(CEventList *this_ptr,_FILE *file_handle)

#include "nocturne.h"

int __cdecl core_event_cpp_CEventList_saveState_FUN_00495850(CEventList *this_ptr,_FILE *file_handle)

{
  int iVar1;
  CEventList *pCVar2;
  int iVar3;
  CEventList *pCVar4;
  CEventList *local_1c;
  int local_18;
  int local_14;
  
  FUN_005a3140();
  FUN_005a3140(file_handle,&DAT_005c0202,5);
  FUN_005a3140();
  iVar1 = 0;
  FUN_005a3140(file_handle,&DAT_005c021b,*(uint *)this_ptr);
  if (0 < *(int *)this_ptr) {
    pCVar2 = this_ptr + 4;
    do {
      iVar1 = iVar1 + 1;
      FUN_005a3140(file_handle,&DAT_005c021f,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)this_ptr);
  }
  FUN_005a3140();
  iVar1 = 0;
  FUN_005a3140(file_handle,&DAT_005c023f,*(uint *)(this_ptr + 0xc84));
  if (0 < *(int *)(this_ptr + 0xc84)) {
    pCVar2 = this_ptr + 0xc88;
    do {
      iVar1 = iVar1 + 1;
      FUN_005a3140(file_handle,&DAT_005c0243,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)(this_ptr + 0xc84));
  }
  FUN_005a3140();
  iVar1 = 0;
  FUN_005a3140(file_handle,&DAT_005c0266,*(uint *)(this_ptr + 0x258c));
  if (0 < *(int *)(this_ptr + 0x258c)) {
    pCVar2 = this_ptr + 0x2590;
    do {
      iVar1 = iVar1 + 1;
      FUN_005a3140(file_handle,&DAT_005c026a,pCVar2);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar1 < *(int *)(this_ptr + 0x258c));
  }
  FUN_005a3140();
  FUN_005a3140(file_handle,&DAT_005c0293,*(uint *)(this_ptr + 0x3210));
  local_18 = 0;
  if (0 < *(int *)(this_ptr + 0x3210)) {
    pCVar2 = this_ptr + 0x3214;
    pCVar4 = this_ptr;
    do {
      FUN_005a3140
                (file_handle,"%f, %s\n",(double)*(float *)(pCVar4 + 0x3354),pCVar2);
      pCVar4 = pCVar4 + 4;
      pCVar2 = pCVar2 + 0x20;
      local_18 = local_18 + 1;
    } while (local_18 < *(int *)(this_ptr + 0x3210));
  }
  FUN_005a3140();
  FUN_005a3140(file_handle,&DAT_005c02c3,*(uint *)(this_ptr + 0x337c));
  local_14 = 0;
  if (0 < *(int *)(this_ptr + 0x337c)) {
    pCVar2 = this_ptr + 0x3380;
    pCVar4 = this_ptr;
    do {
      FUN_005a3140(file_handle,"%d, %s\n",*(uint *)(pCVar4 + 0x34c0),pCVar2)
      ;
      pCVar4 = pCVar4 + 4;
      pCVar2 = pCVar2 + 0x20;
      local_14 = local_14 + 1;
    } while (local_14 < *(int *)(this_ptr + 0x337c));
  }
  FUN_005a3140();
  iVar1 = 0;
  FUN_005a3140(file_handle,&DAT_005c02fb,*(uint *)(this_ptr + 0x34e8));
  if (0 < *(int *)(this_ptr + 0x34e8)) {
    local_1c = this_ptr + 0x37da;
    pCVar2 = this_ptr + 0x34ec;
    do {
      FUN_005a3140(file_handle,"\"%s\", \"%s\"\n",pCVar2,local_1c);
      iVar1 = iVar1 + 1;
      pCVar2 = pCVar2 + 0x1e;
      local_1c = local_1c + 0x1e;
    } while (iVar1 < *(int *)(this_ptr + 0x34e8));
  }
  FUN_005a3140();
  iVar3 = 0;
  iVar1 = FUN_005a3140(file_handle,&DAT_005c0323,*(uint *)(this_ptr + 0x1908));
  if (0 < *(int *)(this_ptr + 0x1908)) {
    pCVar2 = this_ptr + 0x190c;
    do {
      iVar3 = iVar3 + 1;
      FUN_005a3140(file_handle,&DAT_005c0327,pCVar2);
      iVar1 = *(int *)(this_ptr + 0x1908);
      pCVar2 = pCVar2 + 0x20;
    } while (iVar3 < iVar1);
  }
  return iVar1;
}
