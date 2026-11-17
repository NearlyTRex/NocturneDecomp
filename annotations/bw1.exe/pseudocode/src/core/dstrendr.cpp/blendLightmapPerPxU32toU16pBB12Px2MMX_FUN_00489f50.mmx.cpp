// Name: core_dstrendr.cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50
// Address: 00489f50
// Address Range: [[00489f50, 0048a4b3]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrendr_cpp_blendLightmapPerPxU32toU16pBB12Px2MMX_FUN_00489f50(uint *output_buffer,uint *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
{
__asm {
        mov ECX,dword ptr [EBP + 0x18]
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [g_ULONG_01c51d1c]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        mov EAX,dword ptr [EBX]
        mov EAX,dword ptr [EBX + 0x20]
        mov EAX,dword ptr [EBX + 0x40]
        mov EAX,dword ptr [EBX + 0x60]
        mov EAX,dword ptr [EBX + 0x80]
        mov EAX,dword ptr [EBX + 0xa0]
        mov EAX,dword ptr [EBX + 0xc0]
        mov EAX,dword ptr [EBX + 0xe0]
        mov EAX,dword ptr [EBX + 0x100]
        mov EAX,dword ptr [EBX + 0x120]
        mov EDX,dword ptr [EBP]
        mov EDX,dword ptr [EBP + 0x20]
        mov EDX,dword ptr [EBP + 0x40]
        mov EDX,dword ptr [EBP + 0x60]
        mov EDX,dword ptr [EBP + 0x80]
        mov EDX,dword ptr [EBP + 0xa0]
        mov EDX,dword ptr [EBP + 0xc0]
        mov EDX,dword ptr [EBP + 0xe0]
        mov EDX,dword ptr [EBP + 0x100]
        mov EDX,dword ptr [EBP + 0x120]
        mov EAX,dword ptr [ESI]
        mov EAX,dword ptr [ESI + 0x20]
        mov EAX,dword ptr [ESI + 0x40]
        mov EAX,dword ptr [ESI + 0x60]
        mov EAX,dword ptr [ESI + 0x80]
        mov EAX,dword ptr [ESI + 0xa0]
        mov EAX,dword ptr [ESI + 0xc0]
        mov EAX,dword ptr [ESI + 0xe0]
        mov EAX,dword ptr [ESI + 0x100]
        mov EAX,dword ptr [ESI + 0x120]
        mov EAX,dword ptr [ESI + 0x140]
        mov EAX,dword ptr [ESI + 0x160]
        mov EAX,dword ptr [ESI + 0x180]
        mov EAX,dword ptr [ESI + 0x1a0]
        mov EAX,dword ptr [ESI + 0x1c0]
        mov EAX,dword ptr [ESI + 0x1e0]
        mov EAX,dword ptr [ESI + 0x200]
        mov EAX,dword ptr [ESI + 0x220]
        mov EAX,dword ptr [ESI + 0x240]
        mov EAX,dword ptr [ESI + 0x260]
        mov EAX,dword ptr [ESI + 0x280]
        mov EAX,dword ptr [ESI + 0x2a0]
        mov EAX,dword ptr [ESI + 0x2c0]
        mov EAX,dword ptr [ESI + 0x2e0]
        mov EAX,dword ptr [ESI + 0x300]
        mov EAX,dword ptr [ESI + 0x320]
        mov EAX,dword ptr [ESI + 0x340]
        mov EAX,dword ptr [ESI + 0x360]
        mov EAX,dword ptr [ESI + 0x380]
        mov EAX,dword ptr [ESI + 0x3a0]
        mov EAX,dword ptr [ESI + 0x3c0]
        mov EAX,dword ptr [ESI + 0x3e0]
        mov EAX,dword ptr [ESI + 0x400]
        mov EAX,dword ptr [ESI + 0x420]
        mov EAX,dword ptr [ESI + 0x440]
        mov EAX,dword ptr [ESI + 0x460]
        mov EAX,dword ptr [ESI + 0x480]
        mov EAX,dword ptr [ESI + 0x4a0]
        mov EAX,dword ptr [ESI + 0x4c0]
        mov EAX,dword ptr [ESI + 0x4e0]
        mov EAX,dword ptr [ESI + 0x500]
        mov EAX,dword ptr [ESI + 0x520]
        mov EAX,dword ptr [ESI + 0x540]
        mov EAX,dword ptr [ESI + 0x560]
        mov EAX,dword ptr [ESI + 0x580]
        mov EAX,dword ptr [ESI + 0x5a0]
        mov EAX,dword ptr [ESI + 0x5c0]
        mov EAX,dword ptr [ESI + 0x5e0]
        mov EAX,dword ptr [ESI + 0x600]
        mov EAX,dword ptr [ESI + 0x620]
        mov EAX,dword ptr [ESI + 0x640]
        mov EAX,dword ptr [ESI + 0x660]
        mov EAX,dword ptr [ESI + 0x680]
        mov EAX,dword ptr [ESI + 0x6a0]
        mov EAX,dword ptr [ESI + 0x6c0]
        mov EAX,dword ptr [ESI + 0x6e0]
        mov EAX,dword ptr [ESI + 0x700]
        mov EAX,dword ptr [ESI + 0x720]
        mov EAX,dword ptr [ESI + 0x740]
        mov EAX,dword ptr [ESI + 0x760]
        mov EAX,dword ptr [ESI + 0x780]
        mov EAX,dword ptr [ESI + 0x7a0]
        mov EAX,dword ptr [ESI + 0x7c0]
        mov EAX,dword ptr [ESI + 0x7e0]
        mov EAX,dword ptr [ESI + 0x800]
        mov EAX,dword ptr [ESI + 0x820]
        mov EAX,dword ptr [ESI + 0x840]
        mov EAX,dword ptr [ESI + 0x860]
        mov EAX,dword ptr [ESI + 0x880]
        mov EAX,dword ptr [ESI + 0x8a0]
        mov EAX,dword ptr [ESI + 0x8c0]
        mov EAX,dword ptr [ESI + 0x8e0]
        mov EAX,dword ptr [ESI + 0x900]
        mov EAX,dword ptr [ESI + 0x920]
        mov EAX,dword ptr [ESI + 0x940]
        mov EAX,dword ptr [ESI + 0x960]
        mov EAX,dword ptr [ESI + 0x980]
        mov EAX,dword ptr [ESI + 0x9a0]
        mov EAX,dword ptr [ESI + 0x9c0]
        mov EAX,dword ptr [ESI + 0x9e0]
        mov EAX,[g_UINT_ARRAY_00b8189c]
        mov EAX,[0x00b818bc]
        mov EAX,[0x00b818dc]
        mov EAX,[0x00b818fc]
        mov EAX,[0x00b8191c]
        mov EAX,[0x00b8193c]
        mov EAX,[0x00b8195c]
        mov EAX,[0x00b8197c]
        mov EAX,[0x00b8199c]
        mov EAX,[0x00b819bc]
        mov EAX,[0x00b819dc]
        mov EAX,[0x00b819fc]
        mov EAX,[0x00b81a1c]
        mov EAX,[0x00b81a3c]
        mov EAX,[0x00b81a5c]
        mov EAX,[0x00b81a7c]
        mov EAX,[0x00b81a9c]
        mov EAX,[0x00b81abc]
        mov EAX,[0x00b81adc]
        mov EAX,[0x00b81afc]
        mov EAX,[0x00b81b1c]
        mov EAX,[0x00b81b3c]
        mov EAX,[0x00b81b5c]
        mov EAX,[0x00b81b7c]
        mov EAX,[0x00b81b9c]
        mov EAX,[0x00b81bbc]
        mov EAX,[0x00b81bdc]
        mov EAX,[0x00b81bfc]
        mov EAX,[0x00b81c1c]
        mov EAX,[0x00b81c3c]
        mov EAX,[0x00b81c5c]
        mov EAX,[0x00b81c7c]
        mov EAX,[g_USHORT_ARRAY_00619b60]
        mov EAX,[0x00619b80]
        mov EAX,[0x00619ba0]
        mov EAX,[0x00619bc0]
        mov EAX,[0x00619be0]
        mov EAX,[0x00619c00]
        mov EAX,[0x00619c20]
        mov EAX,[0x00619c40]
        mov EAX,[0x00619c60]
        mov EAX,[0x00619c80]
        mov EAX,[0x00619ca0]
        mov EAX,[0x00619cc0]
        mov EAX,[0x00619ce0]
        mov EAX,[0x00619d00]
        mov EAX,[0x00619d20]
        mov EAX,[0x00619d40]
        mov EAX,[0x00619d60]
        mov EAX,[0x00619d80]
        mov EAX,[0x00619da0]
        mov EAX,[0x00619dc0]
        mov EAX,[0x00619de0]
        mov EAX,[0x00619e00]
        mov EAX,[0x00619e20]
        mov EAX,[0x00619e40]
        mov EAX,[0x00619e60]
        mov EAX,[0x00619e80]
        mov EAX,[0x00619ea0]
        mov EAX,[0x00619ec0]
        mov EAX,[0x00619ee0]
        mov EAX,[0x00619f00]
        mov EAX,[0x00619f20]
        mov EAX,[0x00619f40]
        mov EAX,[0x00619f60]
        mov EAX,[0x00619f80]
        mov EAX,[0x00619fa0]
        mov EAX,[0x00619fc0]
        mov EAX,[0x00619fe0]
        mov EAX,[0x0061a000]
        mov EAX,[0x0061a020]
        mov EAX,[0x0061a040]
        mov EAX,[0x0061a060]
        mov EAX,[0x0061a080]
        mov EAX,[0x0061a0a0]
        mov EAX,[0x0061a0c0]
        mov EAX,[0x0061a0e0]
        mov EAX,[0x0061a100]
        mov EAX,[0x0061a120]
        mov EAX,[0x0061a140]
        mov EAX,[0x0061a160]
        mov EAX,[0x0061a180]
        mov EAX,[0x0061a1a0]
        mov EAX,[0x0061a1c0]
        mov EAX,[0x0061a1e0]
        mov EAX,[0x0061a200]
        mov EAX,[0x0061a220]
        mov EAX,[0x0061a240]
        mov EAX,[0x0061a260]
        mov EAX,[0x0061a280]
        mov EAX,[0x0061a2a0]
        mov EAX,[0x0061a2c0]
        mov EAX,[0x0061a2e0]
        mov EAX,[0x0061a300]
        mov EAX,[0x0061a320]
        mov EAX,[0x0061a340]
    LAB_0048a388:
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [g_UINT_ARRAY_00b8189c + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [g_USHORT_ARRAY_00619b60 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [0x0061a358]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM0,qword ptr [g_QWORD_006185e8]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [g_QWORD_00623f78]
        pand MM2,qword ptr [g_QWORD_00623f58]
        pand MM3,qword ptr [g_QWORD_00623f38]
        psrlq MM0,qword ptr [g_QWORD_00623fc0]
        psrlq MM2,qword ptr [g_QWORD_00623fa0]
        psrlq MM3,qword ptr [g_QWORD_00623f80]
        por MM0,MM2
        por MM0,MM3
        movq MM6,MM0
        add ESI,0x4
        inc EBX
        inc EBP
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [g_UINT_ARRAY_00b8189c + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [g_USHORT_ARRAY_00619b60 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [0x0061a358]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM0,qword ptr [g_QWORD_006185f0]
        psrlw MM0,0x4
        packuswb MM0,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [g_QWORD_00623f78]
        pand MM2,qword ptr [g_QWORD_00623f58]
        pand MM3,qword ptr [g_QWORD_00623f38]
        psrlq MM0,qword ptr [g_QWORD_00623fc0]
        psrlq MM2,qword ptr [g_QWORD_00623fa0]
        psrlq MM3,qword ptr [g_QWORD_00623f80]
        por MM0,MM2
        por MM0,MM3
        psllq MM0,0x10
        por MM0,MM6
        movd dword ptr [EDI],MM0
        add ESI,0x4
        inc EBX
        inc EBP
        add EDI,0x4
        sub ECX,0x2
        jg LAB_0048a388
        pop EBP
        emms
}
}
