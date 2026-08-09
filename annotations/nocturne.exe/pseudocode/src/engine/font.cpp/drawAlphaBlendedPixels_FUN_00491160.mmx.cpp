// Name: engine_font.cpp_drawAlphaBlendedPixels_FUN_00491160
// Address: 00491160
// Address Range: [[00491160, 004911ec]]
// Convention: __cdecl
// Signature: void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)

#include "nocturne.h"

void __cdecl engine_font_cpp_drawAlphaBlendedPixels_FUN_00491160(uint *dest_buffer,uchar *src_indices,uint *color_table,int pixel_count,uint blend_color)
{
__asm {
        mov EBP,ESP
        mov EDI,dword ptr [EBP + 0x14]
        mov ESI,dword ptr [EBP + 0x18]
        mov EDX,dword ptr [EBP + 0x1c]
        mov ECX,dword ptr [EBP + 0x20]
        pxor MM7,MM7
        movd MM4,dword ptr [INT_005acab4]
        punpcklbw MM4,MM7
        mov EAX,0xffffffff
        movd MM6,EAX
        punpcklbw MM6,MM7
    LAB_00491196:
        movzx EAX,byte ptr [ESI]
        cmp EAX,0x0
        jz LAB_004911dd
        shl EAX,0x2
        mov EAX,dword ptr [EAX + EDX*0x1]
        movd MM2,EAX
        movd MM0,dword ptr [EBP + 0x24]
        movd MM1,dword ptr [EDI]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        punpcklbw MM2,MM7
        punpcklbw MM3,MM7
        pmullw MM2,MM4
        psrlw MM2,0x8
        movq MM3,MM2
        pxor MM3,MM6
        pmullw MM0,MM2
        pmullw MM1,MM3
        paddw MM0,MM1
        psrlw MM0,0x8
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
    LAB_004911dd:
        inc ESI
        add EDI,0x4
        dec ECX
        jg LAB_00491196
        emms
        mov ESP,EBP
}
}
