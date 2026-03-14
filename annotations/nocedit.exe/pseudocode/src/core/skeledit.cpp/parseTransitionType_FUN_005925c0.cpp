// Name: core_skeledit.cpp_parseTransitionType_FUN_005925c0
// Address: 005925c0
// Address Range: [[005925c0, 00592668]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_parseTransitionType_FUN_005925c0(char *type_name)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_parseTransitionType_FUN_005925c0(char *type_name)

{
  int iVar1;
  
  iVar1 = _stricmp(type_name,"skipTo");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = _stricmp(type_name,"flowTo");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = _stricmp(type_name,"tweenPoseToPose");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = _stricmp(type_name,"tweenPoseToMotion");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = _stricmp(type_name,"tweenMotionToPose");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = _stricmp(type_name,"tweenMotionToMotion");
  if (iVar1 == 0) {
    return 6;
  }
  return 0;
}
