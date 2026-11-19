// Name: shape_edittool.cpp_CEditorTools_draw3DWireframeCube_FUN_004987b0
// Address: 004987b0
// Address Range: [[004987b0, 00498d76]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004987b0(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004987b0(CEditorTools *this_ptr,CVector3f *corner1,CVector3f *corner2,int color_value)
{
__asm {
        mov EBX,dword ptr [ESP + 0x184]
        mov ESI,dword ptr [ESP + 0x188]
        mov EBP,dword ptr [ESP + 0x18c]
        push 0x5fb430
        push 0x8
        lea EAX,[ESP + 0x8]
        push EAX
        call crt_memory_c___arrinit_FUN_005c0357
        add ESP,0xc
        xor EAX,EAX
    LAB_004987e5:
        mov EDX,dword ptr [ESI]
        mov dword ptr [ESP + 0x160],EDX
        imul EDX,EAX,0xc
    LAB_004987f1:
        mov EDI,dword ptr [ESP + 0x160]
        mov dword ptr [ESP + EDX*0x1],EDI
        test AL,0x2
        jnz LAB_00498845
        mov EDI,dword ptr [ESI + 0x4]
    LAB_00498802:
        mov dword ptr [ESP + 0x164],EDI
        mov EDI,dword ptr [ESP + 0x164]
        mov dword ptr [ESP + EDX*0x1 + 0x4],EDI
        test AL,0x4
        jz LAB_0049884a
        mov EDI,dword ptr [EBX + 0x8]
    LAB_0049881b:
        mov dword ptr [ESP + 0x168],EDI
        add EDX,0xc
        mov EDI,dword ptr [ESP + 0x168]
        inc EAX
        mov dword ptr [ESP + EDX*0x1 + -0x4],EDI
        cmp EAX,0x8
        jge LAB_0049884f
        test AL,0x1
        jz LAB_004987e5
        mov EDI,dword ptr [EBX]
        mov dword ptr [ESP + 0x160],EDI
        jmp LAB_004987f1
    LAB_00498845:
        mov EDI,dword ptr [EBX + 0x4]
        jmp LAB_00498802
    LAB_0049884a:
        mov EDI,dword ptr [ESI + 0x8]
        jmp LAB_0049881b
    LAB_0049884f:
        cmp dword ptr [g_INT_01c3f544],0x0
        jz LAB_00498d6c
        mov EDX,EBP
        and EDX,0xff
        lea EAX,[EDX*0x4 + 0x0]
        sub EAX,EDX
        xor EBX,EBX
        xor EDX,EDX
        mov BL,byte ptr [EAX + 0x1c4e9f9]
        mov DL,byte ptr [EAX + 0x1c4e9f8]
        shl EBX,0x8
        shl EDX,0x10
        mov AL,byte ptr [EAX + 0x1c4e9fa]
        or EDX,EBX
        and EAX,0xff
        or EAX,EDX
        push EAX
        call engine_mini3d_cpp_setColor_FUN_00517d50
        add ESP,0x4
    LAB_0049889b:
        xor ECX,ECX
        mov EBP,ESP
        mov dword ptr [ESP + 0x15c],ECX
    LAB_004988a6:
        mov ESI,dword ptr [ESP + 0x15c]
        xor SI,0x1
        imul ESI,ESI,0xc
        mov EAX,ESP
        lea EBX,[ESP + 0xe4]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xe4]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_00507b00
        fld float ptr [ESI]
        fmul float ptr [g_FLOAT_005dc288]
        fld float ptr [ESI + 0x4]
        fmul float ptr [g_FLOAT_005dc288]
        fld float ptr [ESI + 0x8]
        fmul float ptr [g_FLOAT_005dc288]
        lea EDI,[ESP + 0x11c]
        add ESP,0x8
        lea ESI,[ESP + 0xfc]
        fxch ST(2)
        fstp float ptr [ESP + 0xfc]
        fstp float ptr [ESP + 0x100]
        fstp float ptr [ESP + 0x104]
        movsd
        movsd
        movsd
        fld float ptr [EBP]
        fmul float ptr [g_FLOAT_005dc28c]
        fld float ptr [EBP + 0x4]
        fmul float ptr [g_FLOAT_005dc28c]
        fld float ptr [EBP + 0x8]
        fmul float ptr [g_FLOAT_005dc28c]
        lea EBX,[ESP + 0xe4]
        lea EDI,[ESP + 0x90]
        lea ESI,[ESP + 0x60]
        fxch ST(2)
        fstp float ptr [ESP + 0x60]
        fstp float ptr [ESP + 0x64]
        fstp float ptr [ESP + 0x68]
        movsd
        movsd
        movsd
        lea EAX,[ESP + 0xf0]
        fld float ptr [ESP + 0x90]
        fld float ptr [ESP + 0x94]
        fld float ptr [ESP + 0x98]
        lea EDI,[ESP + 0xf0]
        lea ESI,[ESP + 0x108]
        fxch ST(2)
        fadd float ptr [ESP + 0x114]
        fxch
        fadd float ptr [ESP + 0x118]
        fxch ST(2)
        fadd float ptr [ESP + 0x11c]
        fxch
        fstp float ptr [ESP + 0x108]
        fxch
        fstp float ptr [ESP + 0x10c]
        fstp float ptr [ESP + 0x110]
        movsd
        movsd
        movsd
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xe4]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x629044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x15c]
        xor AL,0x2
        imul EAX,EAX,0xc
        mov ESI,ESP
        lea EBX,[ESP + 0x144]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x144]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_00507b00
        fld float ptr [ESI]
        fmul float ptr [g_FLOAT_005dc288]
        fld float ptr [ESI + 0x4]
        fmul float ptr [g_FLOAT_005dc288]
        fld float ptr [ESI + 0x8]
        fmul float ptr [g_FLOAT_005dc288]
        lea EDI,[ESP + 0x80]
        add ESP,0x8
        lea ESI,[ESP + 0xcc]
        fxch ST(2)
        fstp float ptr [ESP + 0xcc]
        fstp float ptr [ESP + 0xd0]
        fstp float ptr [ESP + 0xd4]
        movsd
        movsd
        movsd
        fld float ptr [EBP]
        fmul float ptr [g_FLOAT_005dc28c]
        fld float ptr [EBP + 0x4]
        fmul float ptr [g_FLOAT_005dc28c]
        fld float ptr [EBP + 0x8]
        fmul float ptr [g_FLOAT_005dc28c]
        lea EDI,[ESP + 0x150]
        lea ESI,[ESP + 0x138]
        fxch ST(2)
        fstp float ptr [ESP + 0x138]
        fstp float ptr [ESP + 0x13c]
        fstp float ptr [ESP + 0x140]
        movsd
        movsd
        movsd
        fld float ptr [ESP + 0x150]
        fld float ptr [ESP + 0x154]
        fld float ptr [ESP + 0x158]
        lea EDI,[ESP + 0xb4]
        lea ESI,[ESP + 0x12c]
        fxch ST(2)
        fadd float ptr [ESP + 0x78]
        fxch
        fadd float ptr [ESP + 0x7c]
        fxch ST(2)
        fadd float ptr [ESP + 0x80]
        fxch
        fstp float ptr [ESP + 0x12c]
        fxch
        fstp float ptr [ESP + 0x130]
        fstp float ptr [ESP + 0x134]
        movsd
        movsd
        movsd
        lea EBX,[ESP + 0x144]
        lea EAX,[ESP + 0xb4]
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x144]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x629044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x15c]
        xor AL,0x4
        imul EAX,EAX,0xc
        mov ESI,ESP
        lea EBX,[ESP + 0x6c]
        add ESI,EAX
        mov EAX,EBP
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x6c]
        push EAX
        push 0x0
        call engine_matrix_c_transformToCache_FUN_00507b00
        fld float ptr [g_FLOAT_005dc288]
        fld float ptr [ESI]
        fmul ST(1)
        fld float ptr [ESI + 0x4]
        fmul ST(2)
        fld float ptr [ESI + 0x8]
        fmulp ST(3)
        lea EDI,[ESP + 0xa4]
        add ESP,0x8
        lea ESI,[ESP + 0xa8]
        fxch
        fstp float ptr [ESP + 0xa8]
        fstp float ptr [ESP + 0xac]
        fstp float ptr [ESP + 0xb0]
        movsd
        movsd
        movsd
        fld float ptr [g_FLOAT_005dc28c]
        fld float ptr [EBP]
        fmul ST(1)
        fld float ptr [EBP + 0x4]
        fmul ST(2)
        fld float ptr [EBP + 0x8]
        fmulp ST(3)
        lea EBX,[ESP + 0x6c]
        lea EDI,[ESP + 0x120]
        lea ESI,[ESP + 0xd8]
        fxch
        fstp float ptr [ESP + 0xd8]
        fstp float ptr [ESP + 0xdc]
        fstp float ptr [ESP + 0xe0]
        movsd
        movsd
        movsd
        lea EAX,[ESP + 0x84]
        fld float ptr [ESP + 0x120]
        fld float ptr [ESP + 0x124]
        fld float ptr [ESP + 0x128]
        lea EDI,[ESP + 0x84]
        lea ESI,[ESP + 0xc0]
        fxch ST(2)
        fadd float ptr [ESP + 0x9c]
        fxch
        fadd float ptr [ESP + 0xa0]
        fxch ST(2)
        fadd float ptr [ESP + 0xa4]
        fxch
        fstp float ptr [ESP + 0xc0]
        fxch
        fstp float ptr [ESP + 0xc4]
        fstp float ptr [ESP + 0xc8]
        movsd
        movsd
        movsd
        fld float ptr [EAX]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [g_FLOAT_005ff7ec]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x6c]
        push EAX
        push 0x1
        call engine_matrix_c_transformToCache_FUN_00507b00
        add ESP,0x8
        mov ESI,0x629044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x629014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407af0
        add ESP,0x60
        mov EBX,dword ptr [ESP + 0x15c]
        inc EBX
        add EBP,0xc
        mov dword ptr [ESP + 0x15c],EBX
        cmp EBX,0x8
        jl LAB_004988a6
        add ESP,0x16c
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00498d6c:
        mov dword ptr [g_INT_01c4f020],EBP
        jmp LAB_0049889b
}
}
