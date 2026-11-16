// Name: core_set.cpp_CDemonSet_removeCoronaGlobe_FUN_005306e0
// Address: 005306e0
// Address Range: [[005306e0, 00530748]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_005306e0(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_005306e0(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < _DAT_01fc961c) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (globe == *(CDemonGlobe **)(iVar2 + 0x1fc9620)) {
        _DAT_01fc961c = _DAT_01fc961c + -1;
        memmove
                  ((void *)(iVar2 + 0x1fc9620),(void *)(iVar2 + 0x1fc9624),
                   (_DAT_01fc961c - iVar3) * 4);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < _DAT_01fc961c * 4);
  }
  return;
}
