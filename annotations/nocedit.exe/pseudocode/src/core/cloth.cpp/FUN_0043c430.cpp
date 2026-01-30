// Name: core_cloth.cpp_FUN_0043c430
// Address: 0043c430
// Address Range: [[0043c430, 0043c6a3]]
// Convention: __cdecl
// Signature: void __cdecl core_cloth_cpp_FUN_0043c430(void)

#include "nocturne.h"

void __cdecl core_cloth_cpp_FUN_0043c430(void)

{
  char cVar1;
  CSkeleton *pCVar2;
  CSkeleton *pCVar3;
  char *pcVar4;
  int iVar5;
  SBone *string_data;
  int iVar6;
  char *pcVar7;
  int in_stack_00000004;
  char *in_stack_fffffb34;
  uint in_stack_fffffb38;
  char **in_stack_fffffb3c;
  CStrList_vtable *in_stack_fffffb40;
  uint in_stack_fffffb44;
  char local_124 [256];
  double local_24;
  float local_1c;
  float local_18;
  int local_14;
  
  local_14 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar6 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb34);
  if (0 < pCVar2->bone_count) {
    string_data = pCVar2->bone_list;
    do {
      iVar5 = 0;
      pCVar3 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if (iVar6 == pCVar3->bone_list[0].parent_index) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffffb34,string_data->bone_name);
            break;
          }
          iVar5 = iVar5 + 1;
          pCVar3 = (CSkeleton *)((pCVar3->motion_list).state_names[1] + 2);
        } while (iVar5 < pCVar2->bone_count);
      }
      iVar6 = iVar6 + 1;
      string_data = string_data + 1;
    } while (iVar6 < pCVar2->bone_count);
  }
  iVar6 = shape_edittool_cpp_CPickList_displayChoicesAndWaitForInput_FUN_004a3e20
                    ((CPickList *)&stack0xfffffb34,"Select bone to add",-1,0);
  if (-1 < iVar6) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffb34,iVar6);
    iVar6 = local_14;
    pcVar7 = (char *)(*(int *)(in_stack_00000004 + 0x3ce8c) * 0xac + in_stack_00000004 + 0x3ce90);
    do {
      cVar1 = *pcVar4;
      *pcVar7 = cVar1;
      if (cVar1 == '\0') break;
      cVar1 = pcVar4[1];
      pcVar4 = pcVar4 + 2;
      pcVar7[1] = cVar1;
      pcVar7 = pcVar7 + 2;
    } while (cVar1 != '\0');
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (local_124,10,0,local_14,"Enter in X radius : ");
    local_24 = _strtod(in_stack_fffffb34);
    local_1c = (float)local_24;
    local_14 = iVar6 + 0xb;
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (local_124,10,0,local_14,"Enter in Y radius : ");
    local_24 = _strtod(in_stack_fffffb34);
    local_18 = (float)local_24;
    *(float *)(*(int *)(in_stack_00000004 + 0x3ce8c) * 0xac + in_stack_00000004 + 0x3cea4) =
         local_1c;
    *(float *)(*(int *)(in_stack_00000004 + 0x3ce8c) * 0xac + in_stack_00000004 + 0x3cea8) =
         local_18;
    iVar6 = *(int *)(in_stack_00000004 + 0x3ce8c) * 0xac;
    *(uint *)(in_stack_00000004 + 0x3ceb4 + iVar6) = 0;
    *(uint *)(in_stack_00000004 + 0x3ceb0 + iVar6) =
         *(uint *)(in_stack_00000004 + 0x3ceb4 + iVar6);
    *(uint *)(in_stack_00000004 + 0x3ceac + iVar6) =
         *(uint *)(in_stack_00000004 + 0x3ceb0 + iVar6);
    iVar6 = *(int *)(in_stack_00000004 + 0x3ce8c) * 0xac;
    *(uint *)(in_stack_00000004 + 0x3cec0 + iVar6) = 0;
    *(uint *)(in_stack_00000004 + 0x3cebc + iVar6) =
         *(uint *)(in_stack_00000004 + 0x3cec0 + iVar6);
    *(uint *)(in_stack_00000004 + 0x3ceb8 + iVar6) =
         *(uint *)(in_stack_00000004 + 0x3cebc + iVar6);
    *(uint *)(*(int *)(in_stack_00000004 + 0x3ce8c) * 0xac + in_stack_00000004 + 0x3cec4) = 0;
    *(int *)(in_stack_00000004 + 0x3ce8c) = *(int *)(in_stack_00000004 + 0x3ce8c) + 1;
  }
  core_cloth_cpp_FUN_00439710();
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb34,0,(uint)in_stack_fffffb34,in_stack_fffffb38,
             (uint)in_stack_fffffb3c,(uint)in_stack_fffffb40,in_stack_fffffb44);
  return;
}
