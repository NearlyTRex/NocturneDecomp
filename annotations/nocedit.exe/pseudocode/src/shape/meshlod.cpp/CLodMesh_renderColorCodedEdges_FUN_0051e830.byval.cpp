// Name: shape_meshlod.cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830
// Address: 0051e830
// Address Range: [[0051e830, 0051e983]]
// Convention: __cdecl
// Signature: void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)

#include "nocturne.h"

void __cdecl shape_meshlod_cpp_CLodMesh_renderColorCodedEdges_FUN_0051e830(CLodMesh *this_ptr,int backface_culling_enabled)
{
__asm {
        mov EAX,dword ptr [ESP + 0x1c]
        xor EDX,EDX
        mov ECX,dword ptr [EAX + 0x44]
        mov dword ptr [ESP + 0x4],EDX
        test ECX,ECX
        jle LAB_0051e87d
        mov dword ptr [ESP],EDX
    LAB_0051e84b:
        mov EBP,dword ptr [ESP + 0x1c]
        mov EAX,dword ptr [ESP]
        mov EBP,dword ptr [EBP + 0x48]
        add EBP,EAX
        cmp dword ptr [EBP + 0x14],0x0
        jz LAB_0051e885
    LAB_0051e85d:
        mov EBX,dword ptr [ESP]
        mov ESI,dword ptr [ESP + 0x4]
        mov EDX,dword ptr [ESP + 0x1c]
        add EBX,0xf0
        inc ESI
        mov EDI,dword ptr [EDX + 0x44]
        mov dword ptr [ESP],EBX
        mov dword ptr [ESP + 0x4],ESI
        cmp ESI,EDI
        jl LAB_0051e84b
    LAB_0051e87d:
        add ESP,0x8
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0051e885:
        cmp dword ptr [ESP + 0x20],0x0
        jz LAB_0051e8e5
        mov ESI,dword ptr [EBP + 0x24]
        xor EBX,EBX
        test ESI,ESI
        jle LAB_0051e8dc
        mov ESI,EBP
    LAB_0051e897:
        imul EAX,dword ptr [ESI + 0x28],0x8c
        mov EDX,dword ptr [ESP + 0x1c]
        mov EDX,dword ptr [EDX + 0xc]
        add EDX,EAX
        imul ECX,dword ptr [EDX + 0x18],0x30
        mov EAX,[g_CDemonRendererPtr2]
        mov EAX,dword ptr [EAX]
        add ECX,EAX
        mov EDI,dword ptr [EDX + 0x14]
        push ECX
        imul ECX,EDI,0x30
        add ECX,EAX
        push ECX
        imul EDX,dword ptr [EDX + 0x10],0x30
        add EAX,EDX
        push EAX
        call engine_prim_c_calculateTriangleWindingOrder_FUN_00552150
        add ESP,0xc
        test EAX,EAX
        jz LAB_0051e8dc
        inc EBX
        mov EDI,dword ptr [EBP + 0x24]
        add ESI,0x4
        cmp EBX,EDI
        jl LAB_0051e897
    LAB_0051e8dc:
        cmp EBX,dword ptr [EBP + 0x24]
        jge LAB_0051e85d
    LAB_0051e8e5:
        mov EDI,dword ptr [EBP + 0x18]
        test EDI,EDI
        jnz LAB_0051e940
        cmp dword ptr [EBP + 0x1c],0x0
        jz LAB_0051e934
        mov dword ptr [g_ActiveRenderColor],0xfa
    LAB_0051e8fc:
        imul ESI,dword ptr [EBP + 0x4],0x30
        mov EAX,[g_CDemonRendererPtr2]
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        imul ESI,dword ptr [EBP],0x30
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        jmp LAB_0051e85d
    LAB_0051e934:
        mov dword ptr [g_ActiveRenderColor],0x2
        jmp LAB_0051e8fc
    LAB_0051e940:
        cmp EDI,0x1
        jnz LAB_0051e963
        cmp dword ptr [EBP + 0x1c],0x0
        jz LAB_0051e957
        mov dword ptr [g_ActiveRenderColor],0xfb
        jmp LAB_0051e8fc
    LAB_0051e957:
        mov dword ptr [g_ActiveRenderColor],0x3
        jmp LAB_0051e8fc
    LAB_0051e963:
        cmp dword ptr [EBP + 0x1c],0x0
        jz LAB_0051e975
        mov dword ptr [g_ActiveRenderColor],0xf9
        jmp LAB_0051e8fc
    LAB_0051e975:
        mov dword ptr [g_ActiveRenderColor],0x1
        jmp LAB_0051e8fc
}
}
