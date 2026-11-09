// Name: core_script.cpp_CScript_loadState_FUN_0052a0d0
// Address: 0052a0d0
// Address Range: [[0052a0d0, 0052a3f6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadState_FUN_0052a0d0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_loadState_FUN_0052a0d0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  byte *puVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e503e,&local_18);
  if (6 < local_18) {
    _DAT_01d046a0 = "..\\core\\script.cpp";
    _DAT_01d046a4 = 0x124e;
    core_main_c_FUN_004e4500("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e508a,&g_CGamePtr->field_0x244);
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e508e,&g_CGamePtr->field_0x248);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e5092,&g_CGamePtr->field_0x24c);
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e5096,&DAT_01e65900);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e509a,&this_ptr->field_0x44);
  _fgets(local_118,0xff,file_handle);
  this_ptr->field_0x50 = 0;
  _fscanf(file_handle,"\"%[^\"]",&this_ptr->field_0x50);
  _fscanf(file_handle,&DAT_005e50a5,&this_ptr->field_0x50);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e50a8,&this_ptr->field_0x48);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005e50ac,&this_ptr->field_0x4c);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_0052a010(file_handle,&this_ptr->field_0x4);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_0052a010(file_handle,&this_ptr->field_0xc);
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e50b0,&this_ptr->field_0x14);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar3 = 0;
    _fscanf(file_handle,&DAT_005e50b4,&this_ptr->field_0x458);
    if (0 < *(int *)&this_ptr->field_0x458) {
      puVar2 = &this_ptr->field_0x45c;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(file_handle,&DAT_005e50b8,puVar2);
        puVar2 = puVar2 + 4;
      } while (iVar3 < *(int *)&this_ptr->field_0x458);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005e50bc,&local_14);
    uVar1 = core_script_cpp_FUN_0052a630(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0047bdf0(g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
