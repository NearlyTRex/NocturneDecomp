// Name: core_skeledit.cpp_CBoneStructure_skipBONframe_FUN_0058abb0
// Address: 0058abb0
// Address Range: [[0058abb0, 0058ac24]]
// Convention: __cdecl
// Signature: void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr,_FILE *file_handle)

#include "nocturne.h"

void __cdecl core_skeledit_cpp_CBoneStructure_skipBONframe_FUN_0058abb0(CBoneStructure *this_ptr,_FILE *file_handle)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  __STK();
  iVar3 = 0;
  do {
    if (this_ptr->bone_count * 4 <= iVar3) {
      if ((file_handle->_flag & 0x20) == 0) {
        return;
      }
      g_CurrentFilename = "..\\core\\skeledit.cpp";
      g_CurrentLineNumber = 0x34a;
      core_main_c_displayErrorAndQuit_FUN_00506f10("CBoneStructure::skipBONframe - error reading file!");
      return;
    }
    iVar2 = 1;
    do {
      iVar1 = _fgetc(file_handle);
      if (iVar1 < 0) break;
    } while ((iVar1 != 10) || (iVar2 = iVar2 + -1, 0 < iVar2));
    iVar3 = iVar3 + 1;
  } while( true );
}
