// Name: core_script.cpp_CScript_FUN_00566b30
// Address: 00566b30
// Address Range: [[00566b30, 00566bbe]]
// Convention: __cdecl
// Signature: uint __cdecl core_script_cpp_CScript_FUN_00566b30(CScript *this_ptr,int param_2,uint param_3)

#include "nocturne.h"

uint __cdecl core_script_cpp_CScript_FUN_00566b30(CScript *this_ptr,int param_2,uint param_3)

{
  int iVar1;
  char *pcVar2;
  uint uVar3;
  
  if (param_2 < 0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1bde;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CScript::editorIndex2X - invalid y");
  }
  iVar1 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
  if (param_2 < iVar1) {
    pcVar2 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(this_ptr->unk4 + 0x20),param_2);
    iVar1 = 0;
    uVar3 = 0;
    if (0 < (int)param_3) {
      while (*pcVar2 != '\0') {
        if (*pcVar2 == '\t') {
          uVar3 = uVar3 + 8 & 0xfffffff8;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)param_3 <= iVar1) {
            return uVar3;
          }
        }
        else {
          uVar3 = uVar3 + 1;
          iVar1 = iVar1 + 1;
          pcVar2 = pcVar2 + 1;
          if ((int)param_3 <= iVar1) {
            return uVar3;
          }
        }
      }
      uVar3 = uVar3 + (param_3 - iVar1);
    }
    return uVar3;
  }
  return param_3;
}
