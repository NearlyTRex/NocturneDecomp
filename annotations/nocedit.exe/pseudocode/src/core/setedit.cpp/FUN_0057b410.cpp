// Name: core_setedit.cpp_FUN_0057b410
// Address: 0057b410
// Address Range: [[0057b410, 0057b4fd]]
// Convention: unknown
// Signature: void core_setedit_cpp_FUN_0057b410(void)

#include "nocturne.h"

/* Signature: byte core_setedit.cpp_FUN_0057b410(uint param_1) */

void core_setedit_cpp_FUN_0057b410(void)

{
  int iVar1;
  C3DSLight *this_ptr;
  CDemonSet *in_stack_00000004;
  
  if (199 < in_stack_00000004->light_count) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
    return;
  }
  this_ptr = in_stack_00000004->lights + in_stack_00000004->light_count;
  memset(this_ptr,0,0x1898);
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr);
  this_ptr->light_type = 0;
  in_stack_00000004->light_count = in_stack_00000004->light_count + 1;
  iVar1 = core_setedit_cpp_CDemonSet_unk201_FUN_0057ae50();
  if (iVar1 != 0) {
    if (this_ptr->name[0] == '\0') {
      do {
        iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new spot light name",this_ptr->name,
                           0x100,0);
        if (iVar1 == 0) goto LAB_0057b4f4;
      } while (this_ptr->name[0] == '\0');
    }
    core_set_cpp_CDemonSet_FUN_0056d2d0(in_stack_00000004);
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Precompute light visibility?");
    if (iVar1 != 0) {
      core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(in_stack_00000004);
    }
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(in_stack_00000004);
    return;
  }
LAB_0057b4f4:
  in_stack_00000004->light_count = in_stack_00000004->light_count + -1;
  return;
}
