// Name: core_dcamera.cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20
// Address: 00451c20
// Address Range: [[00451c20, 00451ceb]]
// Convention: __cdecl
// Signature: int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20(CDemonCamera *this_ptr,CDemonLight *light_source)

#include "nocturne.h"

int __cdecl core_dcamera_cpp_CDemonCamera_isCoronaSufficientlyVisible_FUN_00451c20(CDemonCamera *this_ptr,CDemonLight *light_source)

{
  uint *puVar1;
  uint *puVar2;
  int iVar3;
  int iVar4;
  int iStack_1c;
  int iStack_18;
  int iStack_14;
  
  iVar4 = 0;
  iStack_1c = 0;
  if (0 < *(int *)&this_ptr->field_0x154) {
    iStack_18 = *(int *)&light_source->field_0x1c4c;
    iStack_14 = *(int *)&light_source->field_0x1c48;
    do {
      iVar3 = *(int *)&light_source->field_0x14c8 * 4;
      puVar1 = (uint *)(iStack_14 + iVar3);
      puVar2 = (uint *)(iVar3 + iStack_18);
      for (iVar3 = (*(int *)&light_source->field_0x1888 - *(int *)&light_source->field_0x14c8) + 1;
          0 < iVar3; iVar3 = iVar3 + -1) {
        if ((*puVar1 != 0) && (*puVar1 < (uint)*(ushort *)*puVar2)) {
          iVar4 = iVar4 + 1;
        }
        puVar1 = puVar1 + 1;
        puVar2 = puVar2 + 1;
      }
      if (0x300 < iVar4) {
        return 1;
      }
      light_source = (CDemonLight *)&light_source->field_0x4;
      iStack_18 = iStack_18 + 0x500;
      iStack_14 = iStack_14 + 0x500;
      iStack_1c = iStack_1c + 1;
    } while (iStack_1c < *(int *)&this_ptr->field_0x154);
  }
  return 0;
}
