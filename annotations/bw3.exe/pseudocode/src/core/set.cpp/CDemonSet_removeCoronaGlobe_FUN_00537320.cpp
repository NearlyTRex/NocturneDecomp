// Name: core_set.cpp_CDemonSet_removeCoronaGlobe_FUN_00537320
// Address: 00537320
// Address Range: [[00537320, 00537388]]
// Convention: __cdecl
// Signature: void __cdecl core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_00537320(CDemonSet *this_ptr,CDemonGlobe *globe)

#include "nocturne.h"

void __cdecl core_set_cpp_CDemonSet_removeCoronaGlobe_FUN_00537320(CDemonSet *this_ptr,CDemonGlobe *globe)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar3 = 0;
  if (0 < g_INT_0203ad30) {
    iVar2 = 0;
    do {
      iVar1 = iVar2 + 4;
      if (globe == *(CDemonGlobe **)((int)g_CoronaGlobes + iVar2)) {
        g_INT_0203ad30 = g_INT_0203ad30 + -1;
        memmove
                  ((void *)((int)g_CoronaGlobes + iVar2),(void *)((int)g_CoronaGlobes + iVar2 + 4),
                   (g_INT_0203ad30 - iVar3) * 4);
        return;
      }
      iVar3 = iVar3 + 1;
      iVar2 = iVar1;
    } while (iVar1 < g_INT_0203ad30 * 4);
  }
  return;
}
