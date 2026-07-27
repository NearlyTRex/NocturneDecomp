// Name: core_script.cpp_CScript_loadState_FUN_005052c0
// Address: 005052c0
// Address Range: [[005052c0, 005055e6]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(int param_1,undefined4 param_2)

#include "nocturne.h"

int __cdecl core_script_cpp_CScript_loadState_FUN_005052c0(int param_1,uint param_2)

{
  int iVar1;
  int iVar2;
  int iVar3;
  byte local_118 [256];
  int local_18;
  int local_14;
  
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",&local_18);
  if (6 < local_18) {
    PTR_01cc4800 = "..\\core\\script.cpp";
    INT_01cc4804 = 0xf56;
    core_main_c_FUN_004c8440("CScript::loadState - file version is newer than .EXE");
  }
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",0x01C775EC + 0x228);
  if (1 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%d\n",0x01C775EC + 0x22c);
  }
  if (2 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%d\n",0x01C775EC + 0x230);
  }
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",&DAT_01e56c20);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%d\n",param_1 + 0x40);
  _fgets(local_118,0xff,param_2);
  *(byte *)(param_1 + 0x4c) = 0;
  _fscanf(param_2,"\"%[^\"]",param_1 + 0x4c);
  _fscanf(param_2,"\"\n",param_1 + 0x4c);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",param_1 + 0x44);
  _fgets(local_118,0xff,param_2);
  _fscanf(param_2,"%g\n",param_1 + 0x48);
  _fgets(local_118,0xff,param_2);
  core_script_cpp_readActorReference_FUN_00505200(param_2,param_1 + 4);
  _fgets(local_118,0xff,param_2);
  iVar1 = core_script_cpp_readActorReference_FUN_00505200(param_2,param_1 + 0xc);
  if (4 < local_18) {
    _fgets(local_118,0xff,param_2);
    iVar1 = _fscanf(param_2,"%d\n",param_1 + 0x14);
  }
  if (3 < local_18) {
    _fgets(local_118,0xff,param_2);
    iVar3 = 0;
    iVar1 = _fscanf(param_2,"%d\n",param_1 + 0x454);
    if (0 < *(int *)(param_1 + 0x454)) {
      iVar2 = param_1 + 0x458;
      do {
        iVar3 = iVar3 + 1;
        _fscanf(param_2,"%d\n",iVar2);
        iVar1 = *(int *)(param_1 + 0x454);
        iVar2 = iVar2 + 4;
      } while (iVar3 < iVar1);
    }
  }
  if (5 < local_18) {
    _fgets(local_118,0xff,param_2);
    _fscanf(param_2,"%u\n",&local_14);
    iVar1 = core_script_cpp_CScript_computeChecksum_FUN_00505820(param_1);
    if (iVar1 != local_14) {
      iVar1 = shape_edittool_cpp_FUN_0046fb40(0x01BCD074,"The script you were using when this game was\nsaved is different from the script currently\nin use.  There may be problems running the script.");
      return iVar1;
    }
  }
  return iVar1;
}
