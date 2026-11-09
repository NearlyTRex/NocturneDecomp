// Name: core_dstrendr.cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190
// Address: 00470190
// Address Range: [[00470190, 00470200]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dstrendr_cpp_blendLightmapSharedU32toU32NoBiasPx1MMX_FUN_00470190(uint *output_pixel,uint *texture_pixel,byte *texture_index,byte *lightmap_index)
{
__asm {
        mov EDI,dword ptr [EBP + 0x8]
        mov ESI,dword ptr [EBP + 0xc]
        mov EBX,dword ptr [EBP + 0x10]
        mov EBP,dword ptr [EBP + 0x14]
        pxor MM7,MM7
        movd MM5,dword ptr [DAT_01c38b5c]
        punpcklbw MM5,MM7
        psllw MM5,0x6
        movzx EDX,byte ptr [EBX]
        movd MM0,dword ptr [ESI]
        movd MM2,dword ptr [DAT_00b6639c + EDX*0x4]
        movzx EAX,byte ptr [EBP]
        punpcklbw MM0,MM7
        shr EDX,0x1
        punpcklbw MM2,MM7
        add EAX,EDX
        pmullw MM0,MM2
        movq MM3,qword ptr [DAT_00612880 + EAX*0x8]
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_00613078]
        pmulhw MM0,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        psrlw MM0,0x4
        packuswb MM0,MM7
        movd dword ptr [EDI],MM0
        pop EBP
        emms
}
}
