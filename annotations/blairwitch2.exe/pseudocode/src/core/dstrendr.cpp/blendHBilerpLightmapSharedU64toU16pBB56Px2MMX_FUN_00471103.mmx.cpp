// Name: core_dstrendr.cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103
// Address: 00471103
// Address Range: [[00471103, 0047153c] [00471540, 0047164f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrendr_cpp_blendHBilerpLightmapSharedU64toU16pBB56Px2MMX_FUN_00471103(uint *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
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
        mov EAX,[0x00b663bc]
        mov EAX,[0x00b663dc]
        mov EAX,[0x00b663fc]
        mov EAX,[0x00b6641c]
        mov EAX,[0x00b6643c]
        mov EAX,[0x00b6645c]
        mov EAX,[0x00b6647c]
        mov EAX,[0x00b6649c]
        mov EAX,[0x00b664bc]
        mov EAX,[0x00b664dc]
        mov EAX,[0x00b664fc]
        mov EAX,[0x00b6651c]
        mov EAX,[0x00b6653c]
        mov EAX,[0x00b6655c]
        mov EAX,[0x00b6657c]
        mov EAX,[0x00b6659c]
        mov EAX,[0x00b665bc]
        mov EAX,[0x00b665dc]
        mov EAX,[0x00b665fc]
        mov EAX,[0x00b6661c]
        mov EAX,[0x00b6663c]
        mov EAX,[0x00b6665c]
        mov EAX,[0x00b6667c]
        mov EAX,[0x00b6669c]
        mov EAX,[0x00b666bc]
        mov EAX,[0x00b666dc]
        mov EAX,[0x00b666fc]
        mov EAX,[0x00b6671c]
        mov EAX,[0x00b6673c]
        mov EAX,[0x00b6675c]
        mov EAX,[0x00b6677c]
        mov EAX,[g_LightmapData]
        mov EAX,[0x006128a0]
        mov EAX,[0x006128c0]
        mov EAX,[0x006128e0]
        mov EAX,[0x00612900]
        mov EAX,[0x00612920]
        mov EAX,[0x00612940]
        mov EAX,[0x00612960]
        mov EAX,[0x00612980]
        mov EAX,[0x006129a0]
        mov EAX,[0x006129c0]
        mov EAX,[0x006129e0]
        mov EAX,[0x00612a00]
        mov EAX,[0x00612a20]
        mov EAX,[0x00612a40]
        mov EAX,[0x00612a60]
        mov EAX,[0x00612a80]
        mov EAX,[0x00612aa0]
        mov EAX,[0x00612ac0]
        mov EAX,[0x00612ae0]
        mov EAX,[0x00612b00]
        mov EAX,[0x00612b20]
        mov EAX,[0x00612b40]
        mov EAX,[0x00612b60]
        mov EAX,[0x00612b80]
        mov EAX,[0x00612ba0]
        mov EAX,[0x00612bc0]
        mov EAX,[0x00612be0]
        mov EAX,[0x00612c00]
        mov EAX,[0x00612c20]
        mov EAX,[0x00612c40]
        mov EAX,[0x00612c60]
        mov EAX,[0x00612c80]
        mov EAX,[0x00612ca0]
        mov EAX,[0x00612cc0]
        mov EAX,[0x00612ce0]
        mov EAX,[0x00612d00]
        mov EAX,[0x00612d20]
        mov EAX,[0x00612d40]
        mov EAX,[0x00612d60]
        mov EAX,[0x00612d80]
        mov EAX,[0x00612da0]
        mov EAX,[0x00612dc0]
        mov EAX,[0x00612de0]
        mov EAX,[0x00612e00]
        mov EAX,[0x00612e20]
        mov EAX,[0x00612e40]
        mov EAX,[0x00612e60]
        mov EAX,[0x00612e80]
        mov EAX,[0x00612ea0]
        mov EAX,[0x00612ec0]
        mov EAX,[0x00612ee0]
        mov EAX,[0x00612f00]
        mov EAX,[0x00612f20]
        mov EAX,[0x00612f40]
        mov EAX,[0x00612f60]
        mov EAX,[0x00612f80]
        mov EAX,[0x00612fa0]
        mov EAX,[0x00612fc0]
        mov EAX,[0x00612fe0]
        mov EAX,[0x00613000]
        mov EAX,[0x00613020]
        mov EAX,[0x00613040]
        mov EAX,[0x00613060]
        jmp LAB_00471540
    LAB_00471540:
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
        pxor MM2,qword ptr [0x00613078]
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
        psrlq MM2,qword ptr [g_GreenBlueDitherShift]
        psrlq MM3,qword ptr [g_TotalDitherShift]
        por MM0,MM2
        por MM0,MM3
        movq MM2,MM1
        movq MM3,MM1
        pand MM1,qword ptr [g_BlueMask32]
        pand MM2,qword ptr [g_GreenMask32]
        pand MM3,qword ptr [g_RedMask32]
        psrlq MM1,qword ptr [g_BlueBitShift]
        psrlq MM2,qword ptr [g_GreenBlueDitherShift]
        psrlq MM3,qword ptr [g_TotalDitherShift]
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
        jg LAB_00471540
        emms
}
}
