// Name: core_script.cpp_CScript_loadState_FUN_00530ad0
// Address: 00530ad0
// Address Range: [[00530ad0, 00530df6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadState_FUN_00530ad0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_loadState_FUN_00530ad0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfcf3,&local_18);
  if (6 < local_18) {
    _DAT_01d71de0 = "..\\core\\script.cpp";
    _DAT_01d71de4 = 0x10ec;
    core_main_c_FUN_004e4330("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd3f,&g_CGamePtr->field_0x24c);
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd43,&g_CGamePtr->field_0x250);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd47,&g_CGamePtr->field_0x254);
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd4b,&DAT_01ed7010);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd4f,&this_ptr->field_0x44);
  _fgets(local_118,0xff,file_handle);
  this_ptr->field_0x50 = 0;
  _fscanf(file_handle,"\"%[^\"]",&this_ptr->field_0x50);
  _fscanf(file_handle,&DAT_005cfd5a,&this_ptr->field_0x50);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd5d,&this_ptr->field_0x48);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd61,&this_ptr->field_0x4c);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00530a10(file_handle,&this_ptr->field_0x4);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00530a10(file_handle,&this_ptr->field_0xc);
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd65,&this_ptr->field_0x14);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar3 = 0;
    _fscanf(file_handle,&DAT_005cfd69,&this_ptr->field_0x458);
    if (0 < *(int *)&this_ptr->field_0x458) {
      puVar2 = &this_ptr->field_0x45c;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(file_handle,&DAT_005cfd6d,puVar2);
        puVar2 = puVar2 + 4;
      } while (iVar3 < *(int *)&this_ptr->field_0x458);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd71,&local_14);
    uVar1 = core_script_cpp_FUN_00531030(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0047cee0(g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
