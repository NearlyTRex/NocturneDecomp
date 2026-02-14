// Name: core_script.cpp_getActionKeyOffset_FUN_00559660
// Address: 00559660
// Address Range: [[00559660, 0055972d]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_getActionKeyOffset_FUN_00559660(SActionKeyBindings *action_bindings,char *action_name)

#include "nocturne.h"

int * __cdecl core_script_cpp_getActionKeyOffset_FUN_00559660(SActionKeyBindings *action_bindings,char *action_name)

{
  int iVar1;
  
  iVar1 = stricmp(action_name,"walk");
  if (iVar1 == 0) {
    return &action_bindings->walk_key;
  }
  iVar1 = stricmp(action_name,"backup");
  if (iVar1 == 0) {
    return &action_bindings->backup_key;
  }
  iVar1 = stricmp(action_name,"run");
  if (iVar1 == 0) {
    return &action_bindings->run_key;
  }
  iVar1 = stricmp(action_name,"fire");
  if (iVar1 == 0) {
    return &action_bindings->fire_key;
  }
  iVar1 = stricmp(action_name,"useItem");
  if (iVar1 == 0) {
    return &action_bindings->use_item_key;
  }
  iVar1 = stricmp(action_name,"light");
  if (iVar1 == 0) {
    return &action_bindings->light_key;
  }
  iVar1 = stricmp(action_name,"draw");
  if (iVar1 == 0) {
    return &action_bindings->draw_key;
  }
  iVar1 = stricmp(action_name,"jump");
  if (iVar1 == 0) {
    return &action_bindings->jump_key;
  }
  return (int *)0x0;
}
