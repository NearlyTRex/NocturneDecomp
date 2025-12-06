// Name: core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
// Address: 0044d310
// Address Range: [[0044d310, 0044d36b]]
// Convention: __cdecl
// Signature: void core_dcamera.cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310(CDemonCamera * this_ptr, CVector3i * output_ptr, CVector3i * input_ptr)

#include "nocturne.h"

void __cdecl
core_dcamera_cpp_CDemonCamera_worldToScreenCoord_FUN_0044d310
          (CDemonCamera *this_ptr,CVector3i *output_ptr,CVector3i *input_ptr)

{
  int iVar1;
  int iVar2;
  int iVar3;
  int iVar4;
  int iVar5;
  uint *unaff_ESI;
  
  iVar1 = output_ptr->z;
  iVar2 = (this_ptr->saved_viewport_rect).top;
  iVar3 = output_ptr->z;
  iVar4 = output_ptr->y;
  iVar5 = (this_ptr->saved_viewport_rect).bottom;
  *unaff_ESI = (int)(((longlong)(output_ptr->x - (this_ptr->saved_viewport_rect).right) *
                     (longlong)iVar1) / (longlong)(this_ptr->saved_viewport_rect).left);
  unaff_ESI[1] = (int)(((longlong)(iVar4 - iVar5) * (longlong)iVar3) / (longlong)iVar2);
  unaff_ESI[2] = iVar1;
  return;
}
