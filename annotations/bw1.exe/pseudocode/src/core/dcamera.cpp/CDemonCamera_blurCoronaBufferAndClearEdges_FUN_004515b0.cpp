// Name: core_dcamera.cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0
// Address: 004515b0
// Address Range: [[004515b0, 00451685]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0(CDemonCamera *this_ptr)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blurCoronaBufferAndClearEdges_FUN_004515b0(CDemonCamera *this_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  
  iVar1 = 0xb23458;
  iVar2 = 0xb10718;
  iVar3 = 1;
  while( true ) {
    iVar1 = iVar1 + 0x140;
    iVar2 = iVar2 + 0x140;
    if (*(int *)&this_ptr->field_0x154 + -1 <= iVar3) break;
    core_dstrendr_cpp_verticalBlur3TapMMXStride320_FUN_00488732
              (iVar1,iVar2,*(uint *)&this_ptr->field_0x150);
    iVar3 = iVar3 + 1;
  }
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x154) {
    iVar2 = 0;
    do {
      *(byte *)(iVar2 + 0xb23458) = 0;
      *(byte *)(*(int *)&this_ptr->field_0x150 + 0xb23457 + iVar2) = 0;
      iVar1 = iVar1 + 1;
      iVar2 = iVar2 + 0x140;
    } while (iVar1 < *(int *)&this_ptr->field_0x154);
  }
  iVar1 = 0;
  if (0 < *(int *)&this_ptr->field_0x150) {
    do {
      *(byte *)(iVar1 + 0xb23458) = 0;
      *(byte *)((*(int *)&this_ptr->field_0x154 + -1) * 0x140 + 0xb23458 + iVar1) = 0;
      iVar1 = iVar1 + 1;
    } while (iVar1 < *(int *)&this_ptr->field_0x150);
  }
  return;
}
