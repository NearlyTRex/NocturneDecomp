// Name: engine_special.cpp_CExternalRenderer_validate_FUN_00566630
// Address: 00566630
// Address Range: [[00566630, 00566766]]
// Convention: __cdecl
// Signature: int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00566630(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

#include "nocturne.h"

int __cdecl engine_special_cpp_CExternalRenderer_validate_FUN_00566630(CExternalRenderer *this_ptr,CExternalRenderer *capabilities)

{
  CExternalRenderer *pCVar1;
  CExternalRenderer *pCVar2;
  uint uVar3;
  int iVar4;
  uint uVar5;
  
  uVar5 = (uint)(capabilities == (CExternalRenderer *)0x0);
  if (capabilities != (CExternalRenderer *)0x0) {
    if ((*(short *)(this_ptr + 0x204) == *(short *)(capabilities + 0x204)) ||
       (*(short *)(this_ptr + 0x204) == -1)) {
      uVar3 = 1;
    }
    else {
      uVar3 = 0;
    }
    if ((uVar3 != 0) && ((~*(uint *)(this_ptr + 0x208) & *(uint *)(capabilities + 0x208)) != 0)) {
      return 0;
    }
    if (uVar3 != 0) {
      if (*(short *)(capabilities + 0x200) != 0) {
        uVar3 = (uint)(*(int *)(this_ptr + 0x1fe) >> 0x18 == *(int *)(capabilities + 0x1fe) >> 0x18)
        ;
      }
      if ((uVar3 != 0) && (*(short *)(capabilities + 0x202) != 0)) {
        uVar3 = (uint)(*(int *)(this_ptr + 0x200) >> 0x18 == *(int *)(capabilities + 0x200) >> 0x18)
        ;
      }
    }
    if ((uVar3 != 0) && (capabilities[0x100] != (CExternalRenderer)0x0)) {
      iVar4 = _strcmp
                        ((char *)(capabilities + 0x100),(char *)(this_ptr + 0x100));
      uVar3 = (uint)(iVar4 == 0);
    }
    uVar5 = 0;
    if (uVar3 != 0) {
      if (*(int *)(this_ptr + 0x20c) != 0x10) {
        return 0;
      }
      iVar4 = 0;
      uVar5 = uVar3;
      do {
        if (uVar5 == 0) {
          return 0;
        }
        pCVar1 = this_ptr + 0x210;
        pCVar2 = capabilities + 0x210;
        this_ptr = this_ptr + 4;
        capabilities = capabilities + 4;
        uVar5 = (uint)(*(int *)pCVar2 == *(int *)pCVar1);
        iVar4 = iVar4 + 1;
      } while (iVar4 < 0x10);
    }
  }
  return uVar5;
}
