// Name: core_setedit.cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550
// Address: 0057c550
// Address Range: [[0057c550, 0057c5cc]]
// Convention: __cdecl
// Signature: int __cdecl core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(CDemonSet *this_ptr,int master_light_index)

#include "nocturne.h"

int __cdecl core_setedit_cpp_CDemonSet_findLightByMasterIndex_FUN_0057c550(CDemonSet *this_ptr,int master_light_index)

{
  int iVar1;
  int iVar2;
  char *str2;
  
  iVar2 = 0;
  if (0 < this_ptr->light_count) {
    str2 = this_ptr->lights[0].name;
    do {
      iVar1 = _strcmp
                        ((g_MasterLightList[master_light_index]->base).camera_name,str2);
      if (iVar1 == 0) {
        return iVar2;
      }
      iVar2 = iVar2 + 1;
      str2 = str2 + 0x1898;
    } while (iVar2 < this_ptr->light_count);
  }
  g_CurrentFilename = "..\\core\\setedit.cpp";
  g_CurrentLineNumber = 0xaa8;
  core_main_c_displayErrorAndQuit_FUN_00506f10("Can't resolve master light number");
  return -1;
}
