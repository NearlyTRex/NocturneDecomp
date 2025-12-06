// Name: core_cloth.cpp_FUN_0043c430
// Address: 0043c430
// Address Range: [[0043c430, 0043c6a3]]
// Convention: unknown
// Signature: undefined core_cloth.cpp_FUN_0043c430()

#include "nocturne.h"

void core_cloth_cpp_FUN_0043c430(void)

{
  char cVar1;
  CSkeleton *pCVar2;
  CSkeleton *pCVar3;
  char *pcVar4;
  int iVar5;
  SBone *string_data;
  BADSPACEBASE *in_ESP;
  int iVar6;
  char *pcVar7;
  double dVar8;
  int unaff_retaddr;
  int in_stack_00000018;
  int in_stack_00000028;
  CStrList_vtable *in_stack_fffffb4c;
  char *in_stack_fffffb54;
  uint in_stack_fffffb5c;
  uint in_stack_fffffb60;
  char **in_stack_fffffb64;
  CStrList_vtable *in_stack_fffffb68;
  uint in_stack_fffffb6c;
  char acStack_110 [8];
  char acStack_108 [244];
  uint local_14;
  
  local_14 = 0;
  pCVar2 = core_skeleton_cpp_CDeformableModelInstance_getSkeletonPtr_FUN_005a0820
                     (&g_CDeformableModelInstanceInstance);
  wincore_windll_cpp_clearScreen_FUN_005b3e70();
  iVar6 = 0;
  shape_edittool_cpp_CPickList_ctor_FUN_004a3b90((CPickList *)&stack0xfffffb3c);
  if (0 < pCVar2->bone_count) {
    string_data = pCVar2->bone_list;
    do {
      iVar5 = 0;
      pCVar3 = pCVar2;
      if (0 < pCVar2->bone_count) {
        do {
          if (iVar6 == pCVar3->bone_list[0].parent_index) {
            shape_edittool_cpp_CStrList_add_FUN_004a2b80
                      ((CStrList *)&stack0xfffffb40,string_data->bone_name);
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
                    ((CPickList *)&stack0xfffffb40,"Select bone to add",-1,0);
  if (-1 < iVar6) {
    pcVar4 = shape_edittool_cpp_CStrList_getStringAt_FUN_004a2f70
                       ((CStrList *)&stack0xfffffb44,iVar6);
    pcVar7 = (char *)(*(int *)(in_stack_00000018 + 0x3ce8c) * 0xac + in_stack_00000018 + 0x3ce90);
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
              (acStack_110,10,0,unaff_retaddr,"Enter in X radius : ");
    crt_string_c_strtod_FUN_005ff0f3((char *)in_stack_fffffb4c);
    engine_2d_c_getInputWithPrompt_FUN_004032c0
              (acStack_108,10,0,unaff_retaddr + 0xb,"Enter in Y radius : ");
    dVar8 = crt_string_c_strtod_FUN_005ff0f3(in_stack_fffffb54);
    *(int *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cea4) =
         unaff_retaddr + 0xb;
    *(float *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cea8) =
         (float)dVar8;
    iVar6 = *(int *)(in_stack_00000028 + 0x3ce8c) * 0xac;
    *(uint *)(in_stack_00000018 + 0x3ceb4 + iVar6) = 0;
    *(uint *)(in_stack_00000018 + 0x3ceb0 + iVar6) =
         *(uint *)(in_stack_00000018 + 0x3ceb4 + iVar6);
    *(uint *)(in_stack_00000018 + 0x3ceac + iVar6) =
         *(uint *)(in_stack_00000018 + 0x3ceb0 + iVar6);
    iVar6 = *(int *)(in_stack_00000028 + 0x3ce8c) * 0xac;
    *(uint *)(in_stack_00000018 + 0x3cec0 + iVar6) = 0;
    *(uint *)(in_stack_00000018 + 0x3cebc + iVar6) =
         *(uint *)(in_stack_00000018 + 0x3cec0 + iVar6);
    *(uint *)(in_stack_00000018 + 0x3ceb8 + iVar6) =
         *(uint *)(in_stack_00000018 + 0x3cebc + iVar6);
    *(uint *)(*(int *)(in_stack_00000028 + 0x3ce8c) * 0xac + in_stack_00000028 + 0x3cec4) = 0;
    *(int *)(in_stack_00000028 + 0x3ce8c) = *(int *)(in_stack_00000028 + 0x3ce8c) + 1;
  }
  core_cloth_cpp_FUN_00439710();
  shape_edittool_cpp_CPickList_dtor_FUN_004a3c80
            ((CPickList *)&stack0xfffffb5c,0,in_stack_fffffb5c,in_stack_fffffb60,
             (uint)in_stack_fffffb64,(uint)in_stack_fffffb68,in_stack_fffffb6c);
  return;
}
