// Name: core_dstrender.cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
// Address: 00492f03
// Address Range: [[00492f03, 0049333c] [00493340, 0049344f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03 (uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices, byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl
core_dstrender_cpp_blendLightmapToTextureMMX_Variant2_FUN_00492f03
          (uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,
          byte *lightmap_indices,int pixel_count)
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
        mov EAX,[g_LightmapTexturePalette]
        mov EAX,[0x00c19e1c]
        mov EAX,[0x00c19e3c]
        mov EAX,[0x00c19e5c]
        mov EAX,[0x00c19e7c]
        mov EAX,[0x00c19e9c]
        mov EAX,[0x00c19ebc]
        mov EAX,[0x00c19edc]
        mov EAX,[0x00c19efc]
        mov EAX,[0x00c19f1c]
        mov EAX,[0x00c19f3c]
        mov EAX,[0x00c19f5c]
        mov EAX,[0x00c19f7c]
        mov EAX,[0x00c19f9c]
        mov EAX,[0x00c19fbc]
        mov EAX,[0x00c19fdc]
        mov EAX,[0x00c19ffc]
        mov EAX,[0x00c1a01c]
        mov EAX,[0x00c1a03c]
        mov EAX,[0x00c1a05c]
        mov EAX,[0x00c1a07c]
        mov EAX,[0x00c1a09c]
        mov EAX,[0x00c1a0bc]
        mov EAX,[0x00c1a0dc]
        mov EAX,[0x00c1a0fc]
        mov EAX,[0x00c1a11c]
        mov EAX,[0x00c1a13c]
        mov EAX,[0x00c1a15c]
        mov EAX,[0x00c1a17c]
        mov EAX,[0x00c1a19c]
        mov EAX,[0x00c1a1bc]
        mov EAX,[0x00c1a1dc]
        mov EAX,[g_LightmapData]
        mov EAX,[0x00677a10]
        mov EAX,[0x00677a30]
        mov EAX,[0x00677a50]
        mov EAX,[0x00677a70]
        mov EAX,[0x00677a90]
        mov EAX,[0x00677ab0]
        mov EAX,[0x00677ad0]
        mov EAX,[0x00677af0]
        mov EAX,[0x00677b10]
        mov EAX,[0x00677b30]
        mov EAX,[0x00677b50]
        mov EAX,[0x00677b70]
        mov EAX,[0x00677b90]
        mov EAX,[0x00677bb0]
        mov EAX,[0x00677bd0]
        mov EAX,[0x00677bf0]
        mov EAX,[0x00677c10]
        mov EAX,[0x00677c30]
        mov EAX,[0x00677c50]
        mov EAX,[0x00677c70]
        mov EAX,[0x00677c90]
        mov EAX,[0x00677cb0]
        mov EAX,[0x00677cd0]
        mov EAX,[DAT_00677cf0]
        mov EAX,[DAT_00677d10]
        mov EAX,[DAT_00677d30]
        mov EAX,[DAT_00677d50]
        mov EAX,[DAT_00677d70]
        mov EAX,[DAT_00677d90]
        mov EAX,[DAT_00677db0]
        mov EAX,[DAT_00677dd0]
        mov EAX,[DAT_00677df0]
        mov EAX,[DAT_00677e10]
        mov EAX,[DAT_00677e30]
        mov EAX,[DAT_00677e50]
        mov EAX,[DAT_00677e70]
        mov EAX,[DAT_00677e90]
        mov EAX,[DAT_00677eb0]
        mov EAX,[DAT_00677ed0]
        mov EAX,[DAT_00677ef0]
        mov EAX,[DAT_00677f10]
        mov EAX,[DAT_00677f30]
        mov EAX,[DAT_00677f50]
        mov EAX,[DAT_00677f70]
        mov EAX,[DAT_00677f90]
        mov EAX,[DAT_00677fb0]
        mov EAX,[DAT_00677fd0]
        mov EAX,[DAT_00677ff0]
        mov EAX,[DAT_00678010]
        mov EAX,[DAT_00678030]
        mov EAX,[DAT_00678050]
        mov EAX,[DAT_00678070]
        mov EAX,[DAT_00678090]
        mov EAX,[DAT_006780b0]
        mov EAX,[DAT_006780d0]
        mov EAX,[DAT_006780f0]
        mov EAX,[DAT_00678110]
        mov EAX,[DAT_00678130]
        mov EAX,[DAT_00678150]
        mov EAX,[DAT_00678170]
        mov EAX,[DAT_00678190]
        mov EAX,[DAT_006781b0]
        mov EAX,[DAT_006781d0]
        jmp LAB_00493340
    LAB_00493340:
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movzx EDX,byte ptr [EBX + 0x1]
        movzx EAX,byte ptr [EBP]
        movd MM6,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movq MM1,MM0
        punpcklbw MM6,MM7
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
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
        paddw MM0,qword ptr [g_LightmapBlendBias5]
        paddw MM1,qword ptr [g_LightmapBlendBias6]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM7
        packuswb MM1,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM3,qword ptr [g_RedMask32]
        psrlq MM0,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueBits]
        psrlq MM3,qword ptr [g_TotalColorBits]
        por MM0,MM2
        por MM0,MM3
        movq MM2,MM1
        movq MM3,MM1
        pand MM1,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM3,qword ptr [g_RedMask32]
        psrlq MM1,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueBits]
        psrlq MM3,qword ptr [g_TotalColorBits]
        por MM1,MM2
        por MM1,MM3
        psllq MM1,0x10
        por MM0,MM1
        add ESI,0x8
        inc EBX
        inc EBP
        movd dword ptr [EDI],MM0
        add EDI,0x4
        sub ECX,0x2
        jg LAB_00493340
        pop EBP
        emms
}
}
