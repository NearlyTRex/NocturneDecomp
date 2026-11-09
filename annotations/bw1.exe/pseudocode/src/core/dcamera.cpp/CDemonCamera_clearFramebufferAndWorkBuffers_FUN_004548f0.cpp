// Name: core_dcamera.cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0
// Address: 004548f0
// Address Range: [[004548f0, 0045496f]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0(CDemonCamera *this_ptr,int clear_color)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_clearFramebufferAndWorkBuffers_FUN_004548f0(CDemonCamera *this_ptr,int clear_color)

{
  int iVar1;
  int iVar2;
  int iVar4;
  int iVar3;
  
  iVar4 = 0;
  if (0 < *(int *)&this_ptr->field_0x148) {
    do {
      iVar1 = 0;
      if (0 < *(int *)&this_ptr->field_0x144) {
        do {
          *(int *)(*(int *)&this_ptr->field_0x158 +
                  (*(int *)&this_ptr->field_0x144 * iVar4 + iVar1) * 4) = clear_color;
          iVar1 = iVar1 + 1;
        } while (iVar1 < *(int *)&this_ptr->field_0x144);
      }
      iVar4 = iVar4 + 1;
    } while (iVar4 < *(int *)&this_ptr->field_0x148);
  }
  iVar1 = 0x140;
  iVar4 = 0;
  do {
    iVar3 = iVar4 * 0x140;
    do {
      iVar2 = iVar3 + 1;
      *(byte *)(iVar3 + 0x1354e20) = 0;
      (&DAT_01342220)[iVar3] = 0;
      iVar3 = iVar2;
    } while (iVar2 != iVar1);
    iVar4 = iVar4 + 1;
    iVar1 = iVar1 + 0x140;
  } while (iVar4 < 0xf0);
  return;
}
