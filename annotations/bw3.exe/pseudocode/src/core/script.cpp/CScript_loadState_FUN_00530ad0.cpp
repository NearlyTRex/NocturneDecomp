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
  int iVar2;
  char local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfcf3);
  if (6 < local_18) {
    _DAT_01d71de0 = "..\\core\\script.cpp";
    _DAT_01d71de4 = 0x10ec;
    core_main_c_FUN_004e4330("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd3f);
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd43);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd47);
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd4b);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd4f);
  _fgets(local_118,0xff,file_handle);
  this_ptr->current_message[0] = '\0';
  _fscanf(file_handle,"\"%[^\"]");
  _fscanf(file_handle,&DAT_005cfd5a);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd5d);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005cfd61);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00530a10
            (file_handle,(CDemonActor *)&this_ptr->who_is_speaking);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00530a10(file_handle,(CDemonActor *)&this_ptr->focus_actor)
  ;
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd65);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar2 = 0;
    _fscanf(file_handle,&DAT_005cfd69);
    if (0 < this_ptr->call_stack_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,&DAT_005cfd6d);
      } while (iVar2 < this_ptr->call_stack_count);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005cfd71);
    uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00531030(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0047cee0(g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
