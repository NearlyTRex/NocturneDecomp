// Name: core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370
// Address: 0055a370
// Address Range: [[0055a370, 0055a4ad]]
// Convention: unknown
// Signature: undefined core_script.cpp_CScript_LoadingScriptFile_FUN_0055a370()

#include "nocturne.h"

/* Signature: byte core_script.cpp_CScript_LoadingScriptFile(CScript* param_1) */

void core_script_cpp_CScript_LoadingScriptFile_FUN_0055a370(void)

{
  char cVar1;
  int iVar2;
  void *pvVar3;
  uint uVar4;
  int index;
  char *pcVar5;
  char *pcVar6;
  byte bVar7;
  int in_stack_00000004;
  
  bVar7 = 0;
  core_script_cpp_CScript_FreeSomething2_FUN_005598f0();
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0
                      ((CBitFont *)(in_stack_00000004 + 0x38));
    if (iVar2 <= index) {
      return;
    }
    shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
              ((CStrList *)(in_stack_00000004 + 0x38),index);
    core_script_cpp_FUN_005592c0();
    if (DAT_031091e8 != '\0') {
      pvVar3 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (*(void **)(in_stack_00000004 + 0x34),
                          (*(int *)(in_stack_00000004 + 0x30) + 1) * 8,"..\\core\\script.cpp",
                          0x397);
      *(void **)(in_stack_00000004 + 0x34) = pvVar3;
      if (pvVar3 == (void *)0x0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x398;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(*(int *)(in_stack_00000004 + 0x34) + *(int *)(in_stack_00000004 + 0x30) * 8) =
           index + 1;
      uVar4 = 0xffffffff;
      pcVar6 = &DAT_031091e8;
      do {
        if (uVar4 == 0) break;
        uVar4 = uVar4 - 1;
        cVar1 = *pcVar6;
        pcVar6 = pcVar6 + (uint)bVar7 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar3 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar4,"..\\core\\script.cpp",0x39a);
      *(void **)(*(int *)(in_stack_00000004 + 0x34) + 4 + *(int *)(in_stack_00000004 + 0x30) * 8) =
           pvVar3;
      if (*(int *)(in_stack_00000004 + 0x34) == 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x39b;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      pcVar5 = &DAT_031091e8;
      pcVar6 = *(char **)(*(int *)(in_stack_00000004 + 0x34) + 4 +
                         *(int *)(in_stack_00000004 + 0x30) * 8);
      do {
        cVar1 = *pcVar5;
        *pcVar6 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar5[1];
        pcVar5 = pcVar5 + 2;
        pcVar6[1] = cVar1;
        pcVar6 = pcVar6 + 2;
      } while (cVar1 != '\0');
      *(int *)(in_stack_00000004 + 0x30) = *(int *)(in_stack_00000004 + 0x30) + 1;
    }
    index = index + 1;
  } while( true );
}
