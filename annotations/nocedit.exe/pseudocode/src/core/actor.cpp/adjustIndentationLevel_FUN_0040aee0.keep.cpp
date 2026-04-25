// Name: core_actor.cpp_adjustIndentationLevel_FUN_0040aee0
// Address: 0040aee0
// MANUAL RECONSTRUCTION
// Address Range: [[0040aee0, 0040af25]]
// Convention: __cdecl
// Signature: int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)

#include "nocturne.h"

int __cdecl core_actor_cpp_adjustIndentationLevel_FUN_0040aee0(int indent_delta)

{
  int iVar2;

  iVar2 = indent_delta + (int)strlen(g_PropertyNamePrefix);
  if (iVar2 < 0) {
    iVar2 = 0;
  }
  g_PropertyNamePrefix[iVar2] = '\0';
  for (; 0 < iVar2; iVar2 = iVar2 + -1) {
    g_PropertyNamePrefix[iVar2 - 1] = '\t';
  }
  return iVar2;
}
