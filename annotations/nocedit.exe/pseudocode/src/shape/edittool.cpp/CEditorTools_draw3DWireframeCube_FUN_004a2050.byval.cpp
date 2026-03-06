// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
// Address: 004a2050
// Address Range: [[004a2050, 004a250a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)
{
__asm {
        mov EBX,dword ptr [ESP + 0x118]
        mov ESI,dword ptr [ESP + 0x11c]
        push 0x6598c0
        push 0x8
        lea EAX,[ESP + 0x8]
        push EAX
        call crt_memory_c___arrinit_FUN_005fe667
        add ESP,0xc
        xor EAX,EAX
    LAB_004a207e:
        mov EDX,dword ptr [ESI]
        mov dword ptr [ESP + 0xf4],EDX
        imul EDX,EAX,0xc
    LAB_004a208a:
        mov EDI,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + EDX*0x1],EDI
        test AL,0x2
        jnz LAB_004a24fb
        mov EDI,dword ptr [ESI + 0x4]
    LAB_004a209f:
        mov dword ptr [ESP + 0xfc],EDI
        mov EDI,dword ptr [ESP + 0xfc]
        mov dword ptr [ESP + EDX*0x1 + 0x4],EDI
        test AL,0x4
        jz LAB_004a2503
        mov EDI,dword ptr [EBX + 0x8]
    LAB_004a20bc:
        mov dword ptr [ESP + 0xf8],EDI
        add EDX,0xc
        mov EDI,dword ptr [ESP + 0xf8]
        inc EAX
        mov dword ptr [ESP + EDX*0x1 + -0x4],EDI
        cmp EAX,0x8
        jl LAB_004a24e5
        mov EAX,dword ptr [ESP + 0x120]
        xor EDX,EDX
        mov EBP,ESP
        mov dword ptr [ESP + 0xf0],EDX
        mov [g_ActiveRenderColor],EAX
    LAB_004a20f2:
        mov EAX,dword ptr [ESP + 0xf0]
        xor AL,0x1
        imul EAX,EAX,0xc
        mov ESI,ESP
        lea EBX,[ESP + 0x84]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x84]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_0050cd70
        fld float ptr [ESI]
        fmul float ptr [g_CubeEdgeScale1]
        add ESP,0x8
        fstp float ptr [ESP + 0xa8]
        fld float ptr [ESI + 0x4]
        fmul float ptr [g_CubeEdgeScale1]
        fstp float ptr [ESP + 0xac]
        fld float ptr [ESI + 0x8]
        fmul float ptr [g_CubeEdgeScale1]
        fstp float ptr [ESP + 0xb0]
        fld float ptr [EBP]
        fmul float ptr [g_CubeEdgeScale2]
        fstp float ptr [ESP + 0xd8]
        fld float ptr [EBP + 0x4]
        fmul float ptr [g_CubeEdgeScale2]
        fstp float ptr [ESP + 0xdc]
        fld float ptr [EBP + 0x8]
        fmul float ptr [g_CubeEdgeScale2]
        lea EBX,[ESP + 0x84]
        lea EAX,[ESP + 0xcc]
        fld float ptr [ESP + 0xd8]
        fadd float ptr [ESP + 0xa8]
        fld float ptr [ESP + 0xdc]
        fxch
        fstp float ptr [ESP + 0xcc]
        fadd float ptr [ESP + 0xac]
        fxch
        fst float ptr [ESP + 0xe0]
        fadd float ptr [ESP + 0xb0]
        fxch
        fstp float ptr [ESP + 0xd0]
        fstp float ptr [ESP + 0xd4]
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x84]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        mov ESI,0x688044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov ESI,dword ptr [ESP + 0xf0]
        xor SI,0x2
        imul ESI,ESI,0xc
        mov EAX,ESP
        lea EBX,[ESP + 0x60]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x60]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_0050cd70
        fld float ptr [ESI]
        fmul float ptr [g_CubeEdgeScale1]
        add ESP,0x8
        fstp float ptr [ESP + 0x78]
        fld float ptr [ESI + 0x4]
        fmul float ptr [g_CubeEdgeScale1]
        fstp float ptr [ESP + 0x7c]
        fld float ptr [ESI + 0x8]
        fmul float ptr [g_CubeEdgeScale1]
        fstp float ptr [ESP + 0x80]
        fld float ptr [EBP]
        fmul float ptr [g_CubeEdgeScale2]
        fstp float ptr [ESP + 0x9c]
        fld float ptr [EBP + 0x4]
        fmul float ptr [g_CubeEdgeScale2]
        fstp float ptr [ESP + 0xa0]
        fld float ptr [EBP + 0x8]
        fmul float ptr [g_CubeEdgeScale2]
        fld float ptr [ESP + 0x9c]
        fadd float ptr [ESP + 0x78]
        fld float ptr [ESP + 0xa0]
        fxch
        fstp float ptr [ESP + 0xe4]
        fadd float ptr [ESP + 0x7c]
        fxch
        fst float ptr [ESP + 0xa4]
        fadd float ptr [ESP + 0x80]
        fxch
        fstp float ptr [ESP + 0xe8]
        fstp float ptr [ESP + 0xec]
        lea EBX,[ESP + 0x60]
        lea EAX,[ESP + 0xe4]
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x60]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        mov ESI,0x688044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0xf0]
        xor AL,0x4
        imul EAX,EAX,0xc
        mov ESI,ESP
        lea EBX,[ESP + 0xc0]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xc0]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_0050cd70
        fld float ptr [g_CubeEdgeScale1]
        fld float ptr [ESI]
        fmul ST(1)
        add ESP,0x8
        fstp float ptr [ESP + 0x90]
        fld float ptr [ESI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x94]
        fmul float ptr [ESI + 0x8]
        fstp float ptr [ESP + 0x98]
        fld float ptr [g_CubeEdgeScale2]
        fld float ptr [EBP]
        fmul ST(1)
        fstp float ptr [ESP + 0x6c]
        fld float ptr [EBP + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x70]
        fmul float ptr [EBP + 0x8]
        lea EBX,[ESP + 0xc0]
        lea EAX,[ESP + 0xb4]
        fld float ptr [ESP + 0x6c]
        fadd float ptr [ESP + 0x90]
        fld float ptr [ESP + 0x70]
        fxch
        fstp float ptr [ESP + 0xb4]
        fadd float ptr [ESP + 0x94]
        fxch
        fst float ptr [ESP + 0x74]
        fadd float ptr [ESP + 0x98]
        fxch
        fstp float ptr [ESP + 0xb8]
        fstp float ptr [ESP + 0xbc]
        fld float ptr [EAX]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_WorldToScreenScale2]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xc0]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_0050cd70
        add ESP,0x8
        mov ESI,0x688044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x688014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov ECX,dword ptr [ESP + 0xf0]
        inc ECX
        add EBP,0xc
        mov dword ptr [ESP + 0xf0],ECX
        cmp ECX,0x8
        jl LAB_004a20f2
        add ESP,0x100
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004a24e5:
        test AL,0x1
        jz LAB_004a207e
        mov EDI,dword ptr [EBX]
        mov dword ptr [ESP + 0xf4],EDI
        jmp LAB_004a208a
    LAB_004a24fb:
        mov EDI,dword ptr [EBX + 0x4]
        jmp LAB_004a209f
    LAB_004a2503:
        mov EDI,dword ptr [ESI + 0x8]
        jmp LAB_004a20bc
}
}
