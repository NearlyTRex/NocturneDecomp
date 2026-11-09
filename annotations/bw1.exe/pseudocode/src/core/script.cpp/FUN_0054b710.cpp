// Name: core_script.cpp_FUN_0054b710
// Address: 0054b710
// Address Range: [[0054b710, 0054b93a]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_FUN_0054b710(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_FUN_0054b710(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  
  FUN_005c03c0(file_handle,"// CScript version\n");
  FUN_005c03c0(file_handle,&DAT_005f0185,6);
  FUN_005c03c0(file_handle,"// gGame->letterboxMode\n");
  FUN_005c03c0(file_handle,&DAT_005f01a2,*(uint *)&g_CGamePtr->field_0x244);
  FUN_005c03c0(file_handle,"// gGame->allowDamageFlag\n");
  FUN_005c03c0(file_handle,&DAT_005f01c1,*(uint *)&g_CGamePtr->field_0x248);
  FUN_005c03c0(file_handle,"// gGame->allowEnemyAttackFlag\n");
  FUN_005c03c0(file_handle,&DAT_005f01e5,*(uint *)&g_CGamePtr->field_0x24c);
  FUN_005c03c0(file_handle,"// letterBoxBlackT\n");
  FUN_005c03c0(file_handle,&DAT_005f01fd,(double)_DAT_01e818b0);
  FUN_005c03c0(file_handle,"// nextCmd\n");
  FUN_005c03c0(file_handle,&DAT_005f020d,*(uint *)&this_ptr->field_0x44);
  FUN_005c03c0(file_handle,"// currentMessage\n");
  FUN_005c03c0(file_handle,"\"%s\"\n",&this_ptr->field_0x50);
  FUN_005c03c0(file_handle,"// cmdTimer\n");
  FUN_005c03c0(file_handle,&DAT_005f0237,(double)*(float *)&this_ptr->field_0x48);
  FUN_005c03c0(file_handle,"// dialogWavTime\n");
  FUN_005c03c0(file_handle,&DAT_005f024d,(double)*(float *)&this_ptr->field_0x4c);
  FUN_005c03c0(file_handle);
  core_script_cpp_writeActorReference_FUN_0054b3a0(file_handle);
  FUN_005c03c0(file_handle);
  core_script_cpp_writeActorReference_FUN_0054b3a0(file_handle);
  FUN_005c03c0(file_handle);
  FUN_005c03c0(file_handle,&DAT_005f0287);
  FUN_005c03c0(file_handle);
  iVar2 = 0;
  FUN_005c03c0(file_handle,&DAT_005f02a5);
  if (0 < *(int *)&this_ptr->field_0x458) {
    do {
      iVar2 = iVar2 + 1;
      FUN_005c03c0(file_handle,&DAT_005f02a9);
    } while (iVar2 < *(int *)&this_ptr->field_0x458);
  }
  FUN_005c03c0(file_handle);
  uVar1 = core_script_cpp_FUN_0054b940(this_ptr);
  FUN_005c03c0(file_handle,&DAT_005f02b5,uVar1);
  return;
}
