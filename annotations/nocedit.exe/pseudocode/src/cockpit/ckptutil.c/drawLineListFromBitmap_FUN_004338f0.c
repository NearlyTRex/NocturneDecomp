// Name: cockpit_ckptutil.c_drawLineListFromBitmap_FUN_004338f0
// Address: 004338f0
// Address Range: [[004338f0, 004339b6]]
// Convention: __cdecl
// Signature: void __cdecl cockpit_ckptutil_c_drawLineListFromBitmap_FUN_004338f0(CPackedBitmap *bitmap,short *line_data,int line_count,int offset_x,int offset_y)

#include "nocturne.h"

void __cdecl cockpit_ckptutil_c_drawLineListFromBitmap_FUN_004338f0(CPackedBitmap *bitmap,short *line_data,int line_count,int offset_x,int offset_y)

{
  int row_index;
  int base_color;
  int iVar4;
  int iVar5;
  short sVar1;
  short sVar2;
  short sVar3;
  
  if ((bitmap->width != 0) && (iVar5 = 0, 0 < line_count)) {
    do {
      sVar1 = *line_data;
      sVar2 = line_data[1];
      sVar3 = line_data[2];
      row_index = (int)((short)(line_data[3] * 2) >> 1);
      base_color = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                             (bitmap,(int)sVar1,(int)sVar2);
      iVar4 = cockpit_pkbitmap_cpp_CPackedBitmap_getPixelValue_FUN_0054a9b0
                        (bitmap,(int)sVar3,row_index);
      cockpit_ckptutil_c_drawLineAAWithBlending_FUN_004339c0
                (sVar1 + offset_x,sVar2 + offset_y,sVar3 + offset_x,row_index + offset_y,base_color,
                 (uchar)iVar4,(uint)((ushort)line_data[3] >> 0xf));
      iVar5 = iVar5 + 1;
      line_data = line_data + 4;
    } while (iVar5 < line_count);
  }
  return;
}
