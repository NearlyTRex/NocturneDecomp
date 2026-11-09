// Name: core_dcamera.cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60
// Address: 00450b60
// Address Range: [[00450b60, 00450bfa]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_CDemonCamera_blendLightmapPixel16_FUN_00450b60(CDemonCamera *this_ptr,int screen_x,int screen_y,int offset)

{
  int iVar1;
  int iVar2;
  
  iVar2 = (screen_y / *(int *)&this_ptr->field_0x14c) * 0x140;
  iVar1 = screen_x / *(int *)&this_ptr->field_0x14c;
  core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00472a26
            ((ushort *)(*(int *)(&DAT_01c5faec + screen_y * 4) + screen_x * 2),
             (uint *)(*(int *)&this_ptr->field_0x158 + *(int *)&this_ptr->field_0x144 * screen_y * 4
                     + screen_x * 4),(byte *)(iVar2 + 0xb3fd08 + iVar1 + offset),
             &DAT_0135ead0 + offset + iVar1 + iVar2);
  return;
}
