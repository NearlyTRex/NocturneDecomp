// Name: core_dstrendr.cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6
// Address: 00489ea6
// Address Range: [[00489ea6, 00489f4f]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU16pNoBiasPx1MMX_FUN_00489ea6(ushort *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
{
__asm {
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c51d1c]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [DAT_00b8189c + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [DAT_00619b60 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_0061a358]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        psrlw MM0,0x4
        packuswb MM0,MM7
        movq MM2,MM0
        movq MM3,MM0
        pand MM0,qword ptr [DAT_00623f78]
        pand MM2,qword ptr [DAT_00623f58]
        pand MM3,qword ptr [DAT_00623f38]
        psrlq MM0,qword ptr [DAT_00623fc0]
        psrlq MM2,qword ptr [DAT_00623fa0]
        psrlq MM3,qword ptr [DAT_00623f80]
        por MM0,MM2
        por MM0,MM3
        movd EAX,MM0
        mov word ptr [EDI],AX
        pop EBP
        emms
}
}
