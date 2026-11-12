// Name: core_script.cpp_getActionState_FUN_00543540
// Address: 00543540
// Address Range: [[00543540, 0054360d]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_getActionState_FUN_00543540(SPlayerActionState *action_state,char *action_name)

#include "nocturne.h"

int * __cdecl core_script_cpp_getActionState_FUN_00543540(SPlayerActionState *action_state,char *action_name)

{
  int iVar1;
  
  iVar1 = _stricmp(action_name,&DAT_005ee0da);
  if (iVar1 == 0) {
    return &action_state->walk;
  }
  iVar1 = _stricmp(action_name,"backup");
  if (iVar1 == 0) {
    return &action_state->backup;
  }
  iVar1 = _stricmp(action_name,&DAT_005ee0e6);
  if (iVar1 == 0) {
    return &action_state->run;
  }
  iVar1 = _stricmp(action_name,&DAT_005ee0ea);
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
  iVar1 = _stricmp(action_name,&DAT_005ee0fd);
  if (iVar1 == 0) {
    return &action_state->draw;
  }
  iVar1 = _stricmp(action_name,&DAT_005ee102);
  if (iVar1 == 0) {
    return &action_state->jump;
  }
  return (int *)0x0;
}
