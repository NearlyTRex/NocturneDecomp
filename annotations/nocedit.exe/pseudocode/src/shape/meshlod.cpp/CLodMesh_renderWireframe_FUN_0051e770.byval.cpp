// Name: shape_meshlod.cpp_CLodMesh_renderWireframe_FUN_0051e770
// Address: 0051e770
// Address Range: [[0051e770, 0051e826] [0060de5d, 0060df10]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderWireframe_FUN_0051e770(CLodMesh *this_ptr)
{
__asm {
        mov EAX,dword ptr [ESP + 0x20]
        xor EDX,EDX
        mov ECX,dword ptr [EAX + 0x8]
        mov dword ptr [ESP + 0x4],EDX
        test ECX,ECX
        jle LAB_0051e81f
        mov dword ptr [ESP],EDX
    LAB_0051e78f:
        mov EAX,dword ptr [ESP + 0x20]
        mov EBX,dword ptr [ESP]
        mov EAX,dword ptr [EAX + 0xc]
        add EBX,EAX
        mov EDX,dword ptr [EBX + 0x40]
        mov dword ptr [ESP + 0x8],EBX
        test EDX,EDX
        jnz LAB_0051e7fb
        mov EBP,dword ptr [ESP + 0x8]
        xor EBX,EBX
    LAB_0051e7ac:
        lea EDI,[EBX + 0x1]
        cmp EDI,0x3
        jl LAB_0051e7b6
        xor EDI,EDI
    LAB_0051e7b6:
        mov ECX,dword ptr [ESP + 0x8]
        shl EDI,0x2
        add EDI,ECX
        imul ESI,dword ptr [EDI + 0x10],0x30
        mov EAX,[g_CDemonRendererPtr2]
        jmp LAB_0060de5d
    LAB_0051e7d6:
        rep movsd
        imul ESI,dword ptr [EBP + 0x10],0x30
        jmp LAB_0060deb6
    LAB_0051e7ec:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        cmp EBX,0x3
        jl LAB_0051e7ac
    LAB_0051e7fb:
        mov EBX,dword ptr [ESP]
        add EBX,0x8c
        mov ESI,dword ptr [ESP + 0x4]
        mov dword ptr [ESP],EBX
        mov EBX,dword ptr [ESP + 0x20]
        inc ESI
        mov EDI,dword ptr [EBX + 0x8]
        mov dword ptr [ESP + 0x4],ESI
        cmp ESI,EDI
        jl LAB_0051e78f
    LAB_0051e81f:
        add ESP,0xc
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0060de5d:
        sub ESP,0x30
        mov ECX,0xc
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0051e7d6
    LAB_0060deb6:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        add ESI,EAX
        add EBP,0x4
        inc EBX
        mov ECX,dword ptr [ESI]
        mov dword ptr [EDI],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EDI + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EDI + 0x8],ECX
        mov ECX,dword ptr [ESI + 0xc]
        mov dword ptr [EDI + 0xc],ECX
        mov ECX,dword ptr [ESI + 0x10]
        mov dword ptr [EDI + 0x10],ECX
        mov ECX,dword ptr [ESI + 0x14]
        mov dword ptr [EDI + 0x14],ECX
        mov ECX,dword ptr [ESI + 0x18]
        mov dword ptr [EDI + 0x18],ECX
        mov ECX,dword ptr [ESI + 0x1c]
        mov dword ptr [EDI + 0x1c],ECX
        mov ECX,dword ptr [ESI + 0x20]
        mov dword ptr [EDI + 0x20],ECX
        mov ECX,dword ptr [ESI + 0x24]
        mov dword ptr [EDI + 0x24],ECX
        mov ECX,dword ptr [ESI + 0x28]
        mov dword ptr [EDI + 0x28],ECX
        mov ECX,dword ptr [ESI + 0x2c]
        mov dword ptr [EDI + 0x2c],ECX
        jmp LAB_0051e7ec
}
}
