// Name: core_setedit.cpp_CDemonSet_editSpotLight_FUN_0057b500
// Address: 0057b500
// MANUAL RECONSTRUCTION
// Address Range: [[0057b500, 0057b5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(CDemonSet *this_ptr,int light_index)

{
  C3DSLight *light;
  CDemonLight *master;
  int iVar1;
  int iVar3;

  if ((-1 < light_index) && (light_index < this_ptr->light_count)) {
    light = this_ptr->lights + light_index;
    if (light->light_type == 0) {
      master = (CDemonLight *)0x0;
      for (iVar3 = 0; iVar3 < g_MasterLightCount; iVar3 = iVar3 + 1) {
        master = g_MasterLightList[iVar3];
        iVar1 = _strcmp(light->name,master->base.camera_name);
        if (iVar1 == 0) {
          master->light_enabled_flag = 0;
          break;
        }
      }
      iVar3 = core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50(this_ptr,light);
      master->light_enabled_flag = 1;
      if (iVar3 != 0) {
        core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0(this_ptr);
        iVar3 = shape_edittool_cpp_CEditorTools_showYesNoDialog_FUN_0049f0f0
                          (g_CEditorToolsPtr,"Precompute light visibility?");
        if (iVar3 != 0) {
          core_set_cpp_CDemonSet_precomputeLightVisibility_FUN_0056a470(this_ptr,light_index);
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
