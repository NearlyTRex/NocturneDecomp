// Name: unkaddr_004b9ab0.cpp_FUN_004ba6ae
// Address: 004ba6ae
// Address Range: [[004ba6ae, 004ba72f]]
// Convention: unknown
// Signature: void unkaddr_004b9ab0_cpp_FUN_004ba6ae(void)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void unkaddr_004b9ab0_cpp_FUN_004ba6ae(void)

{
  int iVar1;
  SNotesSection *pSVar2;
  int iVar3;
  
  if (DAT_0061d2e4 != 0) {
    core_fldnotes_cpp_FUN_004bb270(&g_STextViewInstance,0x60,0x40,0x1eb,0x1b8);
    iVar3 = 0;
    core_fldnotes_cpp_FUN_004bb1c0(&g_STextViewInstance);
    DAT_0061d2e4 = 0;
    DAT_01cc4270 = 0;
    if (0 < _DAT_01cc4470) {
      pSVar2 = SNotesSection_ARRAY_01cc4474;
      while( true ) {
        iVar1 = core_fldnotes_cpp_FUN_004bc130(pSVar2,&g_STextViewInstance);
        if (iVar1 == 0) break;
        iVar3 = iVar3 + 1;
        pSVar2 = pSVar2 + 1;
        if (_DAT_01cc4470 <= iVar3) {
          return;
        }
      }
    }
  }
  return;
}
