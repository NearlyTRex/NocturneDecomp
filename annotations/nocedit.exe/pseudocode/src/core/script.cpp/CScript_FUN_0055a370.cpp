// Name: core_script.cpp_CScript_FUN_0055a370
// Address: 0055a370
// Address Range: [[0055a370, 0055a4ad]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_0055a370(CScript *this_ptr)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_0055a370(CScript *this_ptr)

{
  char cVar1;
  int iVar2;
  char *pcVar3;
  void *pvVar4;
  uint uVar5;
  int index;
  byte bVar6;
  char *pcVar7;
  
  bVar6 = 0;
  core_script_cpp_CScript_FUN_005598f0(this_ptr);
  index = 0;
  do {
    iVar2 = shape_edittool_cpp_getFontBitmapCount_FUN_004a6ed0((CBitFont *)(this_ptr->unk4 + 0x20));
    if (iVar2 <= index) {
      return;
    }
    pcVar7 = &DAT_031091e8;
    pcVar3 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)(this_ptr->unk4 + 0x20),index);
    core_script_cpp_FUN_005592c0(pcVar3,pcVar7);
    if (DAT_031091e8 != '\0') {
      pvVar4 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                         (*(void **)(this_ptr->unk4 + 0x1c),
                          (*(int *)(this_ptr->unk4 + 0x18) + 1) * 8,"..\\core\\script.cpp",0x397
                         );
      *(void **)(this_ptr->unk4 + 0x1c) = pvVar4;
      if (pvVar4 == (void *)0x0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x398;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      *(int *)(*(int *)(this_ptr->unk4 + 0x1c) + *(int *)(this_ptr->unk4 + 0x18) * 8) = index + 1;
      uVar5 = 0xffffffff;
      pcVar3 = &DAT_031091e8;
      do {
        if (uVar5 == 0) break;
        uVar5 = uVar5 - 1;
        cVar1 = *pcVar3;
        pcVar3 = pcVar3 + (uint)bVar6 * -2 + 1;
      } while (cVar1 != '\0');
      pvVar4 = shape_memdbg_cpp_debugMalloc_FUN_0050f250(~uVar5,"..\\core\\script.cpp",0x39a);
      *(void **)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + *(int *)(this_ptr->unk4 + 0x18) * 8) = pvVar4
      ;
      if (*(int *)(this_ptr->unk4 + 0x1c) == 0) {
        g_CurrentFilename = "..\\core\\script.cpp";
        g_CurrentLineNumber = 0x39b;
        core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory loading script at line %d",index + 1);
      }
      pcVar7 = &DAT_031091e8;
      pcVar3 = *(char **)(*(int *)(this_ptr->unk4 + 0x1c) + 4 + *(int *)(this_ptr->unk4 + 0x18) * 8)
      ;
      do {
        cVar1 = *pcVar7;
        *pcVar3 = cVar1;
        if (cVar1 == '\0') break;
        cVar1 = pcVar7[1];
        pcVar7 = pcVar7 + 2;
        pcVar3[1] = cVar1;
        pcVar3 = pcVar3 + 2;
      } while (cVar1 != '\0');
      *(int *)(this_ptr->unk4 + 0x18) = *(int *)(this_ptr->unk4 + 0x18) + 1;
    }
    index = index + 1;
  } while( true );
}
