// Name: core_dstrender.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6
// Address: 004937b6
// Address Range: [[004937b6, 0049385f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

#include "nocturne.h"

void __cdecl core_dstrender_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_004937b6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
{
__asm {
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [g_SolidColorMode]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [g_LightmapTexturePalette + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [g_LightmapData + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [0x006781e8]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        psrlw MM0,0x4
        packuswb MM0,MM7
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
        movd EAX,MM0
        mov word ptr [EDI],AX
        pop EBP
        emms
}
}
