// Name: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
// Address: 0058abb0
// Address Range: [[0058abb0, 0058ac24]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int *in_stack_00000004;
  
  __STK(0x18);
  iVar3 = 0;
  do {
    if (*in_stack_00000004 * 4 <= iVar3) {
      if ((this_ptr->bones[0].name[8] & 0x20U) == 0) {
        return;
      }
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x34a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::skipBONframe - error reading file!");
      return;
    }
    iVar2 = 1;
    do {
      iVar1 = _fgetc((_FILE *)this_ptr);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    iVar3 = iVar3 + 1;
  } while( true );
}
