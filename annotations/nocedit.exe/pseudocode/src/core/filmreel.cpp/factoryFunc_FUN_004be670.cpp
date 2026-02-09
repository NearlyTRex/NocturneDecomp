// Name: core_filmreel.cpp_factoryFunc_FUN_004be670
// Address: 004be670
// Address Range: [[004be670, 004be692]]
// Convention: __cdecl
// Signature: CFilmReel * __cdecl core_filmreel_cpp_factoryFunc_FUN_004be670(void)

#include "nocturne.h"

CFilmReel * __cdecl core_filmreel_cpp_factoryFunc_FUN_004be670(void)

{
  CFilmReel *pCVar1;
  
  pCVar1 = (CFilmReel *)shape_memdbg_cpp_debugAlloc_FUN_0050f1b0(0x31c,"..\\core\\filmreel.cpp",0x22);
  if (pCVar1 == (CFilmReel *)0x0) {
    return (CFilmReel *)0x0;
  }
  pCVar1 = core_filmreel_cpp_CFilmReel_ctor_FUN_004be6b0(pCVar1);
  return pCVar1;
}
