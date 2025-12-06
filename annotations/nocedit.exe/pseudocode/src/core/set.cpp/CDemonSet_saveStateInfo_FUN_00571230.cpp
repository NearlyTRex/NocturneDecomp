// Name: core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230
// Address: 00571230
// Address Range: [[00571230, 00571319]]
// Convention: __cdecl
// Signature: void core_set.cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet * this_ptr)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_saveStateInfo_FUN_00571230(CDemonSet *this_ptr)

{
  int unaff_EBX;
  int iVar1;
  BADSPACEBASE *in_ESP;
  CDemonSet *pCVar2;
  int unaff_retaddr;
  FILE *in_stack_00000008;
  int in_stack_ffffffec;
  
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n",&stack0xffffffe8);
  if (in_stack_ffffffec != 1) {
    g_CurrentFilename = "..\\core\\set.cpp";
    g_CurrentLineNumber = 0x136a;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Set saveState info is invalid version %d");
  }
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%*[^\n]\n");
  crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
  if (this_ptr->camera_count != unaff_EBX) {
    shape_edittool_cpp_CEditorTools_showWarning_FUN_0049e6f0
              (g_CEditorToolsPtr,"The set has changed since you saved you game last.\nThere might be problems with the virtual director.");
  }
  iVar1 = 0;
  pCVar2 = this_ptr;
  if (0 < unaff_retaddr) {
    do {
      crt_stdio_c_fscanf_FUN_005fe7c0(in_stack_00000008,"%d\n");
      if (iVar1 < this_ptr->camera_count) {
        pCVar2->cameras[0].field17_0x1a0 = (int)in_stack_00000008;
      }
      iVar1 = iVar1 + 1;
      pCVar2 = (CDemonSet *)&pCVar2->cameras[0].field17_0x1a0;
    } while (iVar1 < (int)this_ptr);
  }
  return;
}
