// Name: core_script.cpp_compareEventXRefs_FUN_005675a0
// Address: 005675a0
// MANUAL RECONSTRUCTION
// Address Range: [[005675a0, 00567623]]
// Convention: __cdecl
// Signature: int __cdecl core_script_cpp_compareEventXRefs_FUN_005675a0(SScriptXRef *a,SScriptXRef *b)

#include "nocturne.h"

int __cdecl core_script_cpp_compareEventXRefs_FUN_005675a0(SScriptXRef *a,SScriptXRef *b)

{
  CDemonActor *pCVar1;
  int iVar2;
  int iVar4;

  iVar4 = _stricmp(a->name,b->name);
  if (iVar4 == 0) {
    if (a->type < b->type) {
      return -1;
    }
    if (a->type <= b->type) {
      pCVar1 = a->actor;
      if (pCVar1 < b->actor) {
        return -1;
      }
      if (pCVar1 == b->actor) {
        if (pCVar1 == (CDemonActor *)0x0) {
          iVar4 = b->line_number;
          iVar2 = a->line_number;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        else {
          iVar4 = b->property_index;
          iVar2 = a->property_index;
          if (iVar2 < iVar4) {
            return -1;
          }
        }
        if (iVar2 <= iVar4) {
          return 0;
        }
      }
    }
    iVar4 = 1;
  }
  return iVar4;
}
