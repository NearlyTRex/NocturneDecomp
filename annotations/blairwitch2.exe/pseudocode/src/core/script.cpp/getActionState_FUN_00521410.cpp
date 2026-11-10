// Name: core_script.cpp_getActionState_FUN_00521410
// Address: 00521410
// Address Range: [[00521410, 005214f5]]
// Convention: __cdecl
// Signature: int * __cdecl core_script_cpp_getActionState_FUN_00521410(SPlayerActionState *action_state,char *action_name)

#include "nocturne.h"

int * __cdecl core_script_cpp_getActionState_FUN_00521410(SPlayerActionState *action_state,char *action_name)

{
  int iVar1;
  
  iVar1 = _stricmp(action_name,&DAT_005e2dce);
  if (iVar1 == 0) {
    return (int *)action_state;
  }
  iVar1 = _stricmp(action_name,"backup");
  if (iVar1 == 0) {
    return (int *)(action_state + 4);
  }
  iVar1 = _stricmp(action_name,&DAT_005e2dda);
  if (iVar1 == 0) {
    return (int *)(action_state + 8);
  }
  iVar1 = _stricmp(action_name,&DAT_005e2dde);
  if (iVar1 == 0) {
    return (int *)(action_state + 0xc);
  }
  iVar1 = _stricmp(action_name,"useItem");
  if (iVar1 == 0) {
    return (int *)(action_state + 0x10);
  }
  iVar1 = _stricmp(action_name,"light");
  if (iVar1 == 0) {
    return (int *)(action_state + 0x14);
  }
  iVar1 = _stricmp(action_name,&DAT_005e2df1);
  if (iVar1 == 0) {
    return (int *)(action_state + 0x18);
  }
  iVar1 = _stricmp(action_name,&DAT_005e2df6);
  if (iVar1 == 0) {
    return (int *)(action_state + 0x1c);
  }
  iVar1 = _stricmp(action_name,&DAT_005e2dfb);
  if (iVar1 == 0) {
    return (int *)(action_state + 0x30);
  }
  return (int *)0x0;
}
