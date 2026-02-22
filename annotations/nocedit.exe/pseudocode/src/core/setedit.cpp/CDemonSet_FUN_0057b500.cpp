// Name: core_setedit.cpp_CDemonSet_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b500(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b500(CDemonSet *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  int in_stack_00000008;
  
  if ((-1 < in_stack_00000008) && (in_stack_00000008 < this_ptr->light_count)) {
    if (this_ptr->lights[in_stack_00000008].light_type == 0) {
      iVar3 = 0;
      if (0 < g_MasterLightCount) {
        iVar2 = 0;
        do {
          unaff_EDI = *(int *)((int)g_MasterLightList + iVar2);
          iVar1 = strcmp
                            (this_ptr->lights[in_stack_00000008].name,(char *)(unaff_EDI + 0x40));
          if (iVar1 == 0) {
            *(uint *)(unaff_EDI + 0x1cb4) = 0;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < g_MasterLightCount);
      }
      iVar3 = core_setedit_cpp_CDemonSet_FUN_0057ae50(this_ptr);
      *(uint *)(unaff_EDI + 0x1cb4) = 1;
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar3 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr,in_stack_00000008);
        }
        core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
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
