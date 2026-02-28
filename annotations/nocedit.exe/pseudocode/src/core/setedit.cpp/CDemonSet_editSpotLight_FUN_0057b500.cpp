// Name: core_setedit.cpp_CDemonSet_editSpotLight_FUN_0057b500
// Address: 0057b500
// Address Range: [[0057b500, 0057b5f9]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(CDemonSet *this_ptr,int light_index)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_editSpotLight_FUN_0057b500(CDemonSet *this_ptr,int light_index)

{
  C3DSLight *light;
  int iVar1;
  int iVar2;
  int iVar3;
  int unaff_EDI;
  
  if ((-1 < light_index) && (light_index < this_ptr->light_count)) {
    light = this_ptr->lights + light_index;
    if (light->light_type == 0) {
      iVar3 = 0;
      if (0 < g_MasterLightCount) {
        iVar2 = 0;
        do {
          unaff_EDI = *(int *)((int)g_MasterLightList + iVar2);
          iVar1 = _strcmp(light->name,(char *)(unaff_EDI + 0x40));
          if (iVar1 == 0) {
            *(uint *)(unaff_EDI + 0x1cb4) = 0;
            break;
          }
          iVar3 = iVar3 + 1;
          iVar2 = iVar2 + 4;
        } while (iVar3 < g_MasterLightCount);
      }
      iVar3 = core_setedit_cpp_CDemonSet_positionLight_FUN_0057ae50(this_ptr,light);
      *(uint *)(unaff_EDI + 0x1cb4) = 1;
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
