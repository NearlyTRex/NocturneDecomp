// Name: core_setedit.cpp_CDemonSet_cloneLight_FUN_0057b600
// Address: 0057b600
// MANUAL RECONSTRUCTION
// Address Range: [[0057b600, 0057b900] [00604a5c, 00604a82]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_cloneLight_FUN_0057b600(CDemonSet *this_ptr,int light_index)

{
  C3DSLight *pCVar2;
  int iVar3;
  C3DSLight *pCVar3;
  
  if (this_ptr->light_count < 200) {
    pCVar2 = this_ptr->lights + light_index;
    pCVar3 = this_ptr->lights + this_ptr->light_count;
    *pCVar3 = *pCVar2;
    do {
      iVar3 = shape_edittool_cpp_CEditorTools_showTextInputDialog_FUN_004a03d0
                        (g_CEditorToolsPtr,"Enter new name for cloned light",
                         this_ptr->lights[this_ptr->light_count].name,0x100,0);
      if (iVar3 == 0) {
        return;
      }
    } while (this_ptr->lights[this_ptr->light_count].name[0] == '\0');
    iVar3 = core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50
                      (this_ptr,this_ptr->lights + this_ptr->light_count);
    if (iVar3 != 0) {
      this_ptr->light_count = this_ptr->light_count + 1;
      core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
      iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                        (g_CEditorToolsPtr,"Precompute light visibility?");
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470
                  (this_ptr,this_ptr->light_count + -1);
      }
      core_set_cpp_CDemonSet_initScene_FUN_0056aa10(this_ptr);
      return;
    }
  }
  else {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Too many lights already!");
  }
  return;
}
