// Name: core_dcamera.cpp_blendCoronaTextureSpan_FUN_004517f0
// Address: 004517f0
// Address Range: [[004517f0, 004518e3]]
// Convention: __cdecl
// Signature: void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)

#include "nocturne.h"

void __cdecl core_dcamera_cpp_blendCoronaTextureSpan_FUN_004517f0(int scanline_y,int x_start,int x_end,SCoronaLightEntry *source_entry)
{
__asm {
        mov EBP,ESP
        sub ESP,0x10
        mov ECX,dword ptr [EBP + 0x18]
        mov EDX,dword ptr [EBP + 0x14]
        lea EAX,[EDX*0x4 + 0x0]
        add EAX,EDX
        mov EDX,0xba8c78
        shl EAX,0x6
        add EDX,EAX
        add EDX,ECX
        mov dword ptr [EBP + -0x10],EDX
        mov EDX,dword ptr [EBP + 0x20]
        add EDX,0x784
        add EAX,EDX
        add EAX,ECX
        mov dword ptr [EBP + -0xc],EAX
        mov EAX,dword ptr [EBP + 0x1c]
        sub EAX,ECX
        mov dword ptr [EBP + -0x8],EAX
        mov EAX,[g_CurrentGlobe]
        mov EAX,dword ptr [EAX + 0x3c]
        mov dword ptr [EBP + -0x4],EAX
        mov ECX,dword ptr [EBP + 0xfffffff8]
        mov ESI,dword ptr [EBP + 0xfffffff4]
        mov EDI,dword ptr [EBP + 0xfffffff0]
        mov EBX,dword ptr [EBP + 0xfffffffc]
        shr EBX,0xa
        pxor MM7,MM7
        movd MM3,EBX
        movd MM4,EBX
        movd MM5,EBX
        movd MM6,EBX
        psllq MM3,0x18
        psllq MM4,0x10
        psllq MM5,0x8
        por MM6,MM3
        por MM6,MM4
        por MM6,MM5
        punpcklbw MM6,MM7
    LAB_0045187c:
        test EDI,0x3
        jz LAB_0045189b
        movzx EAX,byte ptr [ESI]
        shl EAX,0x6
        add EAX,EBX
        mov AL,byte ptr [g_CameraLookupTable + EAX]
        add byte ptr [EDI],AL
        inc ESI
        inc EDI
        dec ECX
        jg LAB_0045187c
        jmp LAB_004518db
    LAB_0045189b:
        sub ECX,0x4
        jl LAB_004518c1
        movd MM0,dword ptr [ESI]
        movd MM1,dword ptr [EDI]
        punpcklbw MM0,MM7
        pmullw MM0,MM6
        psrlw MM0,0x6
        packuswb MM0,MM7
        paddw MM0,MM1
        movd dword ptr [EDI],MM0
        add ESI,0x4
        add EDI,0x4
        jmp LAB_0045189b
    LAB_004518c1:
        add ECX,0x4
        jz LAB_004518db
    LAB_004518c6:
        movzx EAX,byte ptr [ESI]
        shl EAX,0x6
        add EAX,EBX
        mov AL,byte ptr [g_CameraLookupTable + EAX]
        add byte ptr [EDI],AL
        inc ESI
        inc EDI
        dec ECX
        jg LAB_004518c6
    LAB_004518db:
        emms
        mov ESP,EBP
}
}
