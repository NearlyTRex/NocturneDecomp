// Name: core_msnedit.cpp_CDemonMission_addSet_FUN_00538d60
// Address: 00538d60
// Address Range: [[00538d60, 00538de6]]
// Convention: __cdecl
// Signature: void __cdecl core_msnedit_cpp_CDemonMission_addSet_FUN_00538d60(CDemonMission *this_ptr,char *set_name)

#include "nocturne.h"

void __cdecl core_msnedit_cpp_CDemonMission_addSet_FUN_00538d60(CDemonMission *this_ptr,char *set_name)

{
  char cVar1;
  int iVar2;
  char (*pacVar3) [256];
  
  iVar2 = core_msnedit_cpp_CDemonMission_findSetByName_FUN_00538f40(this_ptr,set_name);
  if (-1 < iVar2) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"I'm not going to add %s into the set list because it's already there!",set_name);
    return;
  }
  if (3 < this_ptr->num_sets) {
    shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
              (g_CEditorToolsPtr,"Can't add %s to set list - too many sets (%d)!",set_name,4);
    return;
  }
  pacVar3 = this_ptr->set_names + this_ptr->num_sets;
  do {
    cVar1 = *set_name;
    (*pacVar3)[0] = cVar1;
    if (cVar1 == '\0') break;
    cVar1 = set_name[1];
    set_name = set_name + 2;
    (*pacVar3)[1] = cVar1;
    pacVar3 = (char (*) [256])(*pacVar3 + 2);
  } while (cVar1 != '\0');
  this_ptr->num_sets = this_ptr->num_sets + 1;
  return;
}
