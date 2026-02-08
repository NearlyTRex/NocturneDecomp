// Name: core_dstrender.cpp_verticalBlur3TapMMXStride256_FUN_00492185
// Address: 00492185
// Address Range: [[00492185, 004922c7]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_verticalBlur3TapMMXStride256_FUN_00492185 (ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_verticalBlur3TapMMXStride256_FUN_00492185
          (ulonglong *output_buffer,ulonglong *input_buffer,int pixel_count)
{
__asm {
        mov ESI,dword ptr [EBP + 0xc]
        mov EDI,dword ptr [EBP + 0x8]
        mov ECX,dword ptr [EBP + 0x10]
        movq MM0,qword ptr [ESI + 0xffffff00]
        movq MM2,qword ptr [ESI]
        movq MM3,qword ptr [ESI + 0x100]
        punpcklbw MM0,dword ptr [g_FilterBlendConstant]
        punpcklbw MM2,dword ptr [g_FilterBlendConstant]
        punpcklbw MM3,dword ptr [g_FilterBlendConstant]
        paddusw MM0,MM2
        paddusw MM2,MM3
        paddusw MM0,MM2
        movq MM1,qword ptr [ESI + 0xfffffef8]
        movq MM2,qword ptr [ESI + -0x8]
        movq MM3,qword ptr [ESI + 0xf8]
        punpckhbw MM1,qword ptr [g_FilterBlendConstant]
        punpckhbw MM2,qword ptr [g_FilterBlendConstant]
        punpckhbw MM3,qword ptr [g_FilterBlendConstant]
        paddusw MM1,MM2
        paddusw MM2,MM3
        paddusw MM1,MM2
        psrlq MM1,0x30
    LAB_004921f6:
        movq MM6,MM0
        movq MM5,MM0
        paddusw MM1,MM0
        psllq MM6,0x10
        psrlq MM5,0x10
        paddusw MM5,MM0
        paddusw MM6,MM1
        movq MM1,qword ptr [ESI + 0xffffff00]
        movq MM2,qword ptr [ESI]
        movq MM3,qword ptr [ESI + 0x100]
        punpckhbw MM1,qword ptr [g_FilterBlendConstant]
        punpckhbw MM2,qword ptr [g_FilterBlendConstant]
        punpckhbw MM3,qword ptr [g_FilterBlendConstant]
        paddusw MM1,MM2
        paddusw MM2,MM3
        paddusw MM1,MM2
        paddusw MM6,MM5
        movq MM4,MM1
        psllq MM4,0x30
        psrlq MM0,0x30
        movq MM7,MM1
        movq MM5,MM1
        paddusw MM0,MM1
        psllq MM7,0x10
        psrlq MM5,0x10
        paddusw MM6,MM4
        paddusw MM5,MM1
        paddusw MM7,MM0
        movq MM0,qword ptr [ESI + 0xffffff08]
        movq MM2,qword ptr [ESI + 0x8]
        movq MM3,qword ptr [ESI + 0x108]
        punpcklbw MM0,dword ptr [g_FilterBlendConstant]
        punpcklbw MM2,dword ptr [g_FilterBlendConstant]
        punpcklbw MM3,dword ptr [g_FilterBlendConstant]
        paddusw MM0,MM2
        paddusw MM2,MM3
        paddusw MM0,MM2
        paddusw MM7,MM5
        movq MM4,MM0
        psrlw MM6,0x4
        psllq MM4,0x30
        psrlq MM1,0x30
        paddusw MM7,MM4
        psrlw MM7,0x4
        add ESI,0x8
        packuswb MM6,MM7
        movq qword ptr [EDI],MM6
        add EDI,0x8
        sub ECX,0x8
        jg LAB_004921f6
        emms
}
}
