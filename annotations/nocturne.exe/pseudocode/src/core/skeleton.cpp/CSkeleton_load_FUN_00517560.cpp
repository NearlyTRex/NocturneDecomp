// Name: core_skeleton.cpp_CSkeleton_load_FUN_00517560
// Address: 00517560
// Address Range: [[00517560, 005175e6]]
// Convention: __cdecl
// Signature: void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(int param_1,char *param_2)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_skeleton_cpp_CSkeleton_load_FUN_00517560(int param_1,char *param_2)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  char *pcVar4;
  
  pcVar4 = (char *)(param_1 + 0x28508);
  pcVar3 = param_2;
  do {
    cVar1 = *pcVar3;
    *pcVar4 = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = pcVar3[1];
    pcVar3 = pcVar3 + 2;
    pcVar4[1] = cVar1;
    pcVar4 = pcVar4 + 2;
  } while (cVar1 != '\0');
  iVar2 = engine_dosio_cpp_getFile_FUN_00456a60(&DAT_005911ee,param_2,&DAT_005911eb);
  if (iVar2 == 0) {
    _DAT_01cc4800 = "..\\core\\skeleton.cpp";
    _DAT_01cc4804 = 0xf6;
    FUN_004c8440("CSkeleton::load - Can't open %s",param_2);
  }
  core_skeleton_cpp_CSkeleton_loadStream_FUN_005175f0(param_1,iVar2);
  _fclose(iVar2);
  return;
}
