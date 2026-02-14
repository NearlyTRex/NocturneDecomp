// Name: core_dstrender.cpp_blendLightmapToTexture64BitOutput_FUN_004924a9
// Address: 004924a9
// Address Range: [[004924a9, 004925c4]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapToTexture64BitOutput_FUN_004924a9(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
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
    LAB_004924cf:
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [g_LightmapData + EAX*0x8]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [g_LightmapXorMask]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [g_LightmapBlendBias1]
        paddw MM1,qword ptr [g_LightmapBlendBias2]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [g_LightmapData + EAX*0x8]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [g_LightmapXorMask]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [g_LightmapBlendBias1]
        paddw MM1,qword ptr [g_LightmapBlendBias2]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        inc EBX
        inc EBP
        sub ECX,0x4
        jg LAB_004924cf
        pop EBP
        emms
}
}
