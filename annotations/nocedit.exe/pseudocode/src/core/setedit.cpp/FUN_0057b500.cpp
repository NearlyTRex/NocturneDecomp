// Name: core_setedit.cpp_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_FUN_0057b500(void)

#include "nocturne.h"

void __cdecl core_setedit_cpp_FUN_0057b500(void)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  CDemonSet *in_stack_00000004;
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < in_stack_00000004->light_count)) {
    if (in_stack_00000004->lights[in_stack_00000008].light_type == 0) {
      iVar3 = 0;
      if (0 < g_MasterLightCount) {
        iVar2 = 0;
        do {
          unaff_EDI = *(int *)((int)g_MasterLightList + iVar2);
          iVar1 = strcmp
                            (in_stack_00000004->lights[in_stack_00000008].name,
                             (char *)(unaff_EDI + 0x40));
          if (iVar1 == 0) {
            *(uint *)(unaff_EDI + 0x1cb4) = 0;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < g_MasterLightCount);
      }
      iVar3 = core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50();
      *(uint *)(unaff_EDI + 0x1cb4) = 1;
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar3 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
        return;
      }
    }
    else {
      shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
                (g_CEditorToolsPtr,"Not a spot light!");
    }
  }
  return;
}
