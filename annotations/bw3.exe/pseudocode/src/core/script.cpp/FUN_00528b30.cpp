// Name: core_script.cpp_FUN_00528b30
// Address: 00528b30
// Address Range: [[00528b30, 00528c15]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_FUN_00528b30(SPlayerActionState *action_state,char *action_name)

#include "nocturne.h"

int * __cdecl core_script_cpp_FUN_00528b30(SPlayerActionState *action_state,char *action_name)

{
  int iVar1;
  
  iVar1 = _stricmp(action_name,&DAT_005cdd33);
  if (iVar1 == 0) {
    return (int *)action_state;
  }
  iVar1 = _stricmp(action_name,"backup");
  if (iVar1 == 0) {
    return (int *)(action_state + 4);
  }
  iVar1 = _stricmp(action_name,&DAT_005cdd3f);
  if (iVar1 == 0) {
    return (int *)(action_state + 8);
  }
  iVar1 = _stricmp(action_name,&DAT_005cdd43);
  if (iVar1 == 0) {
    return (int *)(action_state + 0xc);
  }
  iVar1 = _stricmp(action_name,"action");
  if (iVar1 == 0) {
    return (int *)(action_state + 0x10);
  }
  iVar1 = _stricmp(action_name,"useItem");
  if (iVar1 == 0) {
    return (int *)(action_state + 0x14);
  }
  iVar1 = _stricmp(action_name,"light");
  if (iVar1 == 0) {
    return (int *)(action_state + 0x18);
  }
  iVar1 = _stricmp(action_name,&DAT_005cdd5d);
  if (iVar1 == 0) {
    return (int *)(action_state + 0x1c);
  }
  iVar1 = _stricmp(action_name,&DAT_005cdd62);
  if (iVar1 == 0) {
    return (int *)(action_state + 0x20);
  }
  return (int *)0x0;
}
