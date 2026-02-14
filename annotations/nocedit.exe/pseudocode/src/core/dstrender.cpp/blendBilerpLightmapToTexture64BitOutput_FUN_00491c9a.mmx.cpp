// Name: core_dstrender.cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a
// Address: 00491c9a
// Address Range: [[00491c9a, 00491ed0] [00491ee0, 00491f8f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendBilerpLightmapToTexture64BitOutput_FUN_00491c9a(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
{
__asm {
        mov ECX,dword ptr [EBP + 0x18]
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [g_SolidColorMode]
        punpcklbw MM5,MM7
        psllw MM5,0x6
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
        mov EAX,dword ptr [EBX + 0x140]
        mov EAX,dword ptr [EBX + 0x160]
        mov EAX,dword ptr [EBX + 0x180]
        mov EAX,dword ptr [EBX + 0x1a0]
        mov EAX,dword ptr [EBX + 0x1c0]
        mov EAX,dword ptr [EBX + 0x1e0]
        mov EAX,dword ptr [EBX + 0x200]
        mov EAX,dword ptr [EBX + 0x220]
        mov EAX,dword ptr [EBX + 0x240]
        mov EAX,dword ptr [EBX + 0x260]
        jmp LAB_00491ee0
    LAB_00491ee0:
        movzx EDX,byte ptr [EBX]
        movzx EAX,byte ptr [EBX + 0x140]
        add EDX,EAX
        movq MM0,qword ptr [ESI]
        shr EDX,0x1
        movzx EAX,byte ptr [EBX + 0x141]
        movd MM2,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movzx EDX,byte ptr [EBX + 0x1]
        movq MM1,MM0
        add EDX,EAX
        movzx EAX,byte ptr [EBP]
        shr EDX,0x1
        punpcklbw MM0,MM7
        movd MM6,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        psrlq MM1,0x20
        shr EDX,0x1
        punpcklbw MM6,MM7
        punpcklbw MM2,MM7
        add EAX,EDX
        paddw MM6,MM2
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        psrlw MM6,0x1
        movq MM3,qword ptr [g_LightmapData + EAX*0x8]
        pmullw MM1,MM6
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [g_LightmapXorMask]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [g_AmbientLightMMX1]
        paddw MM1,qword ptr [g_AmbientLightMMX2]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        inc EBX
        inc EBP
        movq qword ptr [EDI],MM0
        add EDI,0x8
        sub ECX,0x2
        jg LAB_00491ee0
        pop EBP
        emms
}
}
