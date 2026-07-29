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
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0xf56;
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
  *(byte *)&this_ptr->cmd_timer = 0;
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
    if (0 < (int)this_ptr->message_duration) {
      do {
        iVar2 = iVar2 + 1;
        _fscanf(file_handle,"%d\n");
      } while (iVar2 < (int)this_ptr->message_duration);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,file_handle);
    _fscanf(file_handle,"%u\n");
    uVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(this_ptr);
    if (uVar1 != local_14) {
      shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return;
    }
  }
  return;
}
