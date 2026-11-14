// Name: core_script.cpp_CScript_loadState_FUN_0054b3e0
// Address: 0054b3e0
// Address Range: [[0054b3e0, 0054b706]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadState_FUN_0054b3e0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_script_cpp_CScript_loadState_FUN_0054b3e0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  char local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f0062);
  if (6 < local_18) {
    _DAT_01d1d400 = "..\\core\\script.cpp";
    _DAT_01d1d404 = 0x10e6;
    core_main_c_FUN_005030e0("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f00ae);
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f00b2);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f00b6);
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f00ba);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f00be);
  _fgets(local_118,0xff,file_handle);
  this_ptr->current_message[0] = '\0';
  _fscanf(file_handle,"\"%[^\"]");
  _fscanf(file_handle,&DAT_005f00c9);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f00cc);
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,&DAT_005f00d0);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_0054b320
            (file_handle,(CDemonActor *)&this_ptr->who_is_speaking);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_0054b320(file_handle,(CDemonActor *)&this_ptr->focus_actor)
  ;
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f00d4);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar2 = 0;
    _fscanf(file_handle,&DAT_005f00d8);
    if (0 < this_ptr->call_stack_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,&DAT_005f00dc);
      } while (iVar2 < this_ptr->call_stack_count);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,&DAT_005f00e0);
    uVar1 = core_script_cpp_CScript_computeChecksum_FUN_0054b940(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_00494340(g_CEditorToolsPtr,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
