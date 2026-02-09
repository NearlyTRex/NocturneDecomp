// Name: core_skeledit.cpp_FUN_005925c0
// Address: 005925c0
// Address Range: [[005925c0, 00592668]]
// Convention: __cdecl
// Signature: int __cdecl core_skeledit_cpp_FUN_005925c0(void *ptr)

#include "nocturne.h"

int __cdecl core_skeledit_cpp_FUN_005925c0(void *ptr)

{
  int iVar1;
  
  __STK();
  iVar1 = stricmp(ptr,"skipTo");
  if (iVar1 == 0) {
    return 1;
  }
  iVar1 = stricmp(ptr,"flowTo");
  if (iVar1 == 0) {
    return 2;
  }
  iVar1 = stricmp(ptr,"tweenPoseToPose");
  if (iVar1 == 0) {
    return 3;
  }
  iVar1 = stricmp(ptr,"tweenPoseToMotion");
  if (iVar1 == 0) {
    return 4;
  }
  iVar1 = stricmp(ptr,"tweenMotionToPose");
  if (iVar1 == 0) {
    return 5;
  }
  iVar1 = stricmp(ptr,"tweenMotionToMotion");
  if (iVar1 == 0) {
    return 6;
  }
  return 0;
}
