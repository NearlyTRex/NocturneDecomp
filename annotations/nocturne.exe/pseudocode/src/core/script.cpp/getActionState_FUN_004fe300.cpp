// Name: core_script.cpp_getActionState_FUN_004fe300
// Address: 004fe300
// Address Range: [[004fe300, 004fe3cd]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_getActionState_FUN_004fe300(SPlayerActionState *action_state,char *action_name)

#include "nocturne.h"

int * __cdecl core_script_cpp_getActionState_FUN_004fe300(SPlayerActionState *action_state,char *action_name)

{
  int iVar1;
  
  iVar1 = _stricmp(action_name,"walk");
  if (iVar1 == 0) {
    return &action_state->walk;
  }
  iVar1 = _stricmp(action_name,"backup");
  if (iVar1 == 0) {
    return &action_state->backup;
  }
  iVar1 = _stricmp(action_name,"run");
  if (iVar1 == 0) {
    return &action_state->run;
  }
  iVar1 = _stricmp(action_name,"fire");
  if (iVar1 == 0) {
    return &action_state->fire;
  }
  iVar1 = _stricmp(action_name,"useItem");
  if (iVar1 == 0) {
    return &action_state->use_item;
  }
  iVar1 = _stricmp(action_name,"light");
  if (iVar1 == 0) {
    return &action_state->light;
  }
  iVar1 = _stricmp(action_name,"draw");
  if (iVar1 == 0) {
    return &action_state->draw;
  }
  iVar1 = _stricmp(action_name,"jump");
  if (iVar1 == 0) {
    return &action_state->jump;
  }
  return (int *)0x0;
}
