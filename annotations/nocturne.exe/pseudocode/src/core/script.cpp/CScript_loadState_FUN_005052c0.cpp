// Name: core_script.cpp_CScript_loadState_FUN_005052c0
// Address: 005052c0
// Address Range: [[005052c0, 005055e6]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(CScript *this_ptr,_FILE *file_handle)

{
  uint uVar1;
  int iVar2;
  char local_118 [256];
  int local_18;
  uint local_14;
  
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  if (6 < local_18) {
    g_CHAR_PTR_01cc4800 = "..\\core\\script.cpp";
    g_INT_01cc4804 = 0xf56;
    core_main_c_FUN_004c8440("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  if (1 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n");
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n");
  }
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n");
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%d\n");
  _fgets(local_118,0xff,file_handle);
  this_ptr->current_message[0] = '\0';
  _fscanf(file_handle,"\"%[^\"]");
  _fscanf(file_handle,"\"\n");
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n");
  _fgets(local_118,0xff,file_handle);
  _fscanf(file_handle,"%g\n");
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00505200
            (file_handle,(CDemonActor *)&this_ptr->who_is_speaking);
  _fgets(local_118,0xff,file_handle);
  core_script_cpp_readActorReference_FUN_00505200(file_handle,(CDemonActor *)&this_ptr->focus_actor)
  ;
  if (4 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%d\n");
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,file_handle);
    iVar2 = 0;
    _fscanf(file_handle,"%d\n");
    if (0 < this_ptr->call_stack_count) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,"%d\n");
      } while (iVar2 < this_ptr->call_stack_count);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%u\n");
    uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0046fb40
                (g_CEditorTools_PTR_005b6d50,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
