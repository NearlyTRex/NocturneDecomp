// Name: core_dstrender.cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_0046556f
// Address: 0046556f
// Address Range: [[0046556f, 0046568a]]
// Convention: __cdecl
// Signature: void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_0046556f(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_dstrender_cpp_blendLightmapShared4U64toU64pBB12Px4MMX_FUN_0046556f(ulonglong *output_buffer,ulonglong *texture_buffer,byte *texture_indices,byte *lightmap_indices,int pixel_count)
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
    LAB_00465595:
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [EDX*0x4 + 0xb0e1fc]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [EAX*0x8 + 0x5b5d00]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_005b64f8]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [DAT_005b4788]
        paddw MM1,qword ptr [DAT_005b4790]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        movzx EDX,byte ptr [EBX]
        movq MM0,qword ptr [ESI]
        movd MM2,dword ptr [EDX*0x4 + 0xb0e1fc]
        movzx EAX,byte ptr [EBP]
        movq MM1,MM0
        punpcklbw MM0,MM7
        shr EDX,0x1
        psrlq MM1,0x20
        punpcklbw MM2,MM7
        add EAX,EDX
        punpcklbw MM1,MM7
        pmullw MM0,MM2
        movq MM3,qword ptr [EAX*0x8 + 0x5b5d00]
        pmullw MM1,MM2
        movq MM2,MM3
        movq MM4,MM5
        pxor MM2,qword ptr [DAT_005b64f8]
        pmulhw MM0,MM2
        pmulhw MM1,MM2
        pmulhw MM4,MM3
        paddw MM0,MM4
        paddw MM1,MM4
        paddw MM0,qword ptr [DAT_005b4788]
        paddw MM1,qword ptr [DAT_005b4790]
        psrlw MM0,0x4
        psrlw MM1,0x4
        packuswb MM0,MM1
        add ESI,0x8
        movq qword ptr [EDI],MM0
        add EDI,0x8
        inc EBX
        inc EBP
        sub ECX,0x4
        jg LAB_00465595
        pop EBP
        emms
}
}
