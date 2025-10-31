// Name: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
// Address: 0054afb0
// Address Range: [[0054afb0, 0054aff6]]
// Convention: __cdecl
// Signature: void cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0(CPackedBitmap * this_ptr, uchar * dest_buffer, int dest_x, int dest_y, int bits_per_pixel, int buffer_stride)
// Function calls:
//   cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70

#include "nocturne.h"

void __cdecl
cockpit_pkbitmap_cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
          (CPackedBitmap *this_ptr,uchar *dest_buffer,int dest_x,int dest_y,int bits_per_pixel,
          int buffer_stride)

{
  int iVar1;
  
  if (dest_buffer == (uchar *)0x0) {
    return;
  }
  iVar1 = dest_y * bits_per_pixel >> 0x1f;
  cockpit_pkbitmap_cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
            (this_ptr,dest_buffer +
                      ((int)((dest_y * bits_per_pixel + iVar1 * -8) - (uint)(iVar1 << 2 < 0)) >> 3)
                      + dest_x * buffer_stride,dest_x,dest_y);
  return;
}


// Assembly code:
// 0054afb0: MOV ECX,dword ptr [ESP + 0x8]
//   Label: cockpit_pkbitmap.cpp_CPackedBitmap_copyToBufferAtPosition_FUN_0054afb0
//   XREF to: Stack[0x8] (READ)
// 0054afb4: MOV EAX,dword ptr [ESP + 0xc]
//   XREF to: Stack[0xc] (READ)
// 0054afb8: MOV EDX,dword ptr [ESP + 0x10]
//   XREF to: Stack[0x10] (READ)
// 0054afbc: TEST ECX,ECX
// 0054afbe: JNZ 0x0054afc1
//   XREF to: 0054afc1 (CONDITIONAL_JUMP)
// 0054afc0: RET
// 0054afc1: PUSH EDI
//   Label: LAB_0054afc1
// 0054afc2: PUSH ESI
// 0054afc3: PUSH EBX
// 0054afc4: MOV ESI,dword ptr [ESP + 0x20]
//   XREF to: Stack[0x14] (READ)
// 0054afc8: PUSH EDX
// 0054afc9: IMUL EDX,ESI
// 0054afcc: MOV EBX,dword ptr [ESP + 0x28]
//   XREF to: Stack[0x18] (READ)
// 0054afd0: PUSH EAX
// 0054afd1: IMUL EAX,EBX
// 0054afd4: ADD ECX,EAX
// 0054afd6: MOV EAX,EDX
// 0054afd8: SAR EDX,0x1f
// 0054afdb: SHL EDX,0x3
// 0054afde: SBB EAX,EDX
// 0054afe0: SAR EAX,0x3
// 0054afe3: ADD EAX,ECX
// 0054afe5: PUSH EAX
// 0054afe6: MOV EDI,dword ptr [ESP + 0x1c]
//   XREF to: Stack[0x4] (READ)
// 0054afea: PUSH EDI
// 0054afeb: CALL cockpit_pkbitmap.cpp_CPackedBitmap_copyNoClip_FUN_0054ae70
//   XREF to: 0054ae70 (UNCONDITIONAL_CALL)
// 0054aff0: ADD ESP,0x10
// 0054aff3: POP EBX
// 0054aff4: POP ESI
// 0054aff5: POP EDI
// 0054aff6: RET
