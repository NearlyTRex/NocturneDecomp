// Name: core_dstrendr.cpp_alphaBlendPixelsMMX_FUN_0048957a
// Address: 0048957a
// Address Range: [[0048957a, 004895f2]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_alphaBlendPixelsMMX_FUN_0048957a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrendr_cpp_alphaBlendPixelsMMX_FUN_0048957a(uint *output_buffer,uint *source1_buffer,uint *source2_buffer,uint alpha1,uint alpha2,int pixel_count)
{
__asm {
        push ECX
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov ECX,dword ptr [EBP + 0x1c]
        pxor MM7,MM7
        movd MM3,dword ptr [EBP + 0x18]
        movd MM4,dword ptr [EBP + 0x14]
        movd MM5,dword ptr [EBP + 0x18]
        movd MM6,dword ptr [EBP + 0x14]
        psllq MM3,0x20
        psllq MM4,0x20
        por MM3,MM5
        por MM4,MM6
        psrlw MM3,0x1
        psrlw MM4,0x1
    LAB_004895b6:
        movd MM0,dword ptr [ESI]
        movd MM1,dword ptr [EBX]
        punpcklbw MM0,MM7
        punpcklbw MM1,MM7
        psllw MM0,0x7
        psllw MM1,0x7
        pmulhw MM0,MM3
        pmulhw MM1,MM4
        paddw MM0,MM1
        psrlw MM0,0x6
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        add ESI,0x4
        add EBX,0x4
        add EDI,0x4
        sub ECX,0x4
        jg LAB_004895b6
        pop ECX
        pop EBX
        emms
}
}
