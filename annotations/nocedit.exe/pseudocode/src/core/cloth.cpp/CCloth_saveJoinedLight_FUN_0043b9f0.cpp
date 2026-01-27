// Name: core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0
// Address: 0043b9f0
// Address Range: [[0043b9f0, 0043bad4]]
// Convention: __cdecl
// Signature: int core_cloth.cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth * this_ptr)

#include "nocturne.h"

int __cdecl core_cloth_cpp_CCloth_saveJoinedLight_FUN_0043b9f0(CCloth *this_ptr)

{
  int iVar1;
  CDemonRenderer *pCVar2;
  CCloth *pCVar3;
  CCloth *pCVar4;
  char *pcVar5;
  int iVar6;
  int in_stack_00000008;
  
  if (in_stack_00000008 == 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x4e3;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Can't save light with no model!");
  }
  iVar1 = *(int *)(in_stack_00000008 + 0x2230);
  if (iVar1 < 0) {
    g_CurrentFilename = "..\\core\\cloth.cpp";
    g_CurrentLineNumber = 0x4e8;
    core_main_c_displayErrorAndQuit_FUN_00506f10("CCloth::saveJoinedLight - Model wasn't drawn");
  }
  pCVar4 = *(CCloth **)(this_ptr->unk + 0x3f028);
  iVar6 = 0;
  if (0 < (int)pCVar4) {
    pcVar5 = this_ptr->unk + iVar1 * 400;
    pCVar3 = this_ptr;
    do {
      pCVar2 = g_CDemonRendererPtr2;
      iVar1 = *(int *)(pcVar5 + 0x3f1bc);
      *(float *)(pCVar3->unk + 0x3f98c) = g_CDemonRendererPtr2->vertex_buffer_ptr[iVar1].light;
      *(int *)(pCVar3->unk + 0x3fb1c) = pCVar2->vertex_buffer_ptr[iVar1].color;
      pCVar4 = (CCloth *)(pCVar3->unk + 4);
      *(float *)(pCVar3->unk + 0x3fcac) = pCVar2->vertex_buffer_ptr[iVar1].fog;
      iVar6 = iVar6 + 1;
      pcVar5 = pcVar5 + 4;
      pCVar3 = pCVar4;
    } while (iVar6 < *(int *)(this_ptr->unk + 0x3f028));
  }
  return (int)pCVar4;
}
