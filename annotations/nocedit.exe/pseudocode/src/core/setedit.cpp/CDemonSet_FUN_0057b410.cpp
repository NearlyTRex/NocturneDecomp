// Name: core_setedit.cpp_CDemonSet_FUN_0057b410
// Address: 0057b410
// Address Range: [[0057b410, 0057b4fd]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b410(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_FUN_0057b410(CDemonSet *this_ptr)

{
  int iVar1;
  C3DSLight *this_ptr_00;
  
  if (199 < this_ptr->light_count) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
    return;
  }
  this_ptr_00 = this_ptr->lights + this_ptr->light_count;
  memset(this_ptr_00,0,0x1898);
  core_setutil_cpp_C3DSLight_reset_FUN_005879b0(this_ptr_00);
  this_ptr_00->light_type = 0;
  this_ptr->light_count = this_ptr->light_count + 1;
  iVar1 = core_setedit_cpp_CDemonSet_FUN_0057ae50(this_ptr);
  if (iVar1 != 0) {
    if (this_ptr_00->name[0] == '\0') {
      do {
        iVar1 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                          (g_CEditorToolsPtr,"Enter new spot light name",this_ptr_00->name,
                           0x100,0);
        if (iVar1 == 0) goto LAB_0057b4f4;
      } while (this_ptr_00->name[0] == '\0');
    }
    core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
    iVar1 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                      (g_CEditorToolsPtr,"Precompute light visibility?");
    if (iVar1 != 0) {
      core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr,-1);
    }
    core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
    return;
  }
LAB_0057b4f4:
  this_ptr->light_count = this_ptr->light_count + -1;
  return;
}
