// Name: core_script.cpp_CScript_FUN_00567510
// Address: 00567510
// Address Range: [[00567510, 00567595]]
// Convention: __cdecl
// Signature: void __cdecl core_script_cpp_CScript_FUN_00567510(CScript *this_ptr,int *param_2)

#include "nocturne.h"

void __cdecl core_script_cpp_CScript_FUN_00567510(CScript *this_ptr,int *param_2)

{
  void *pvVar1;
  int iVar2;
  int *piVar3;
  byte bVar4;
  
  bVar4 = 0;
  pvVar1 = shape_memdbg_cpp_debugRealloc_FUN_0050f540
                     (*(void **)(this_ptr->unk4 + 0x14),
                      (*(int *)(this_ptr->unk4 + 0x10) + 1) * 0x114,"..\\core\\script.cpp",
                      0x1d37);
  *(void **)(this_ptr->unk4 + 0x14) = pvVar1;
  if (pvVar1 == (void *)0x0) {
    g_CurrentFilename = "..\\core\\script.cpp";
    g_CurrentLineNumber = 0x1d38;
    core_main_c_displayErrorAndQuit_FUN_00506f10("Out of memory");
  }
  piVar3 = (int *)(*(int *)(this_ptr->unk4 + 0x14) + *(int *)(this_ptr->unk4 + 0x10) * 0x114);
  for (iVar2 = 0x45; iVar2 != 0; iVar2 = iVar2 + -1) {
    *piVar3 = *param_2;
    param_2 = param_2 + (uint)bVar4 * -2 + 1;
    piVar3 = piVar3 + (uint)bVar4 * -2 + 1;
  }
  *(int *)(this_ptr->unk4 + 0x10) = *(int *)(this_ptr->unk4 + 0x10) + 1;
  return;
}
