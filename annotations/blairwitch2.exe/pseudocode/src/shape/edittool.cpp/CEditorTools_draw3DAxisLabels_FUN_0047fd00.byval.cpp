// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00
// Address: 0047fd00
// Address Range: [[0047fd00, 0047ff4a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_0047fd00(CEditorTools *this_ptr,float scale_factor,int text_color)
{
__asm {
        mov ESI,dword ptr [ESP + 0x40]
        cmp dword ptr [g_EditorFont],0x0
        jz LAB_0047feb3
    LAB_0047fd18:
        mov EAX,[g_EditorFont]
        push 0x6a
        mov EBX,dword ptr [EAX + 0x41e8]
        push EAX
        mov dword ptr [g_EditorFontMaxCharWidth],EBX
        call engine_font_cpp_CBitFont_getCharHeight_FUN_004ab560
        add ESP,0x8
        fld float ptr [ESP + 0x3c]
        fmul double ptr [g_DOUBLE_005d24df]
        mov EDI,dword ptr [g_INT_01c25f84]
        mov [g_INT_01c25f7c],EAX
        call crt_math_c_round_FUN_005b7ff0
        fistp dword ptr [ESP + 0x20]
        test EDI,EDI
        jz LAB_0047fedb
        mov EBX,ESI
        and EBX,0xff
        lea EAX,[EBX*0x4 + 0x0]
        sub EAX,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c35839]
        mov ESI,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c35838]
        shl ESI,0x8
        shl EBX,0x10
        mov AL,byte ptr [EAX + 0x1c3583a]
        or EBX,ESI
        and EAX,0xff
        or EBX,EAX
        push EBX
        call engine_mini3d_cpp_setColor_FUN_004f8e20
        add ESP,0x4
    LAB_0047fd9b:
        lea EAX,[ESP + 0x14]
        xor EBP,EBP
        push EAX
        mov dword ptr [ESP + 0x18],EBP
        push EBP
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e8e60
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x14],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x1
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e8e60
        add ESP,0x8
        mov ESI,0x622044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x622014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407cc0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x18],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x2
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e8e60
        add ESP,0x8
        mov ESI,0x622074
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x622014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407cc0
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x1c],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x3
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x20],EBP
        call engine_matrix_c_transformToCache_FUN_004e8e60
        add ESP,0x8
        mov ESI,0x6220a4
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov EBX,0x622014
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x622014
        mov EDI,ESP
        add EBX,0x30
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407cc0
        add ESP,0x60
        xor ESI,ESI
    LAB_0047fe9c:
        test byte ptr [EBX + 0x13],0x80
        jz LAB_0047fee6
    LAB_0047fea2:
        inc ESI
        add EBX,0x30
        cmp ESI,0x3
        jl LAB_0047fe9c
        add ESP,0x24
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0047feb3:
        mov ECX,0x5d1e6f
        mov EBX,0xa0
        push 0x5d1e85
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4500
        add ESP,0x4
        jmp LAB_0047fd18
    LAB_0047fedb:
        mov dword ptr [g_INT_01c35e60],ESI
        jmp LAB_0047fd9b
    LAB_0047fee6:
        xor EAX,EAX
        mov AL,byte ptr [ESI + 0x5d24d1]
        push EAX
        push 0x5d24d5
        lea EAX,[ESP + 0x8]
        push EAX
        mov EDI,dword ptr [EBX + 0x10]
        mov EBP,dword ptr [EBX + 0x14]
        call crt_unknown_c_sprintf_FUN_005b7790
        add ESP,0xc
        push 0xffff
        call engine_3d_c_setRenderAlpha_FUN_00406da0
        add ESP,0x4
        push 0x3f800000
        call engine_mini3d_cpp_setAlpha_FUN_004f3570
        add ESP,0x4
        push -0x1
        mov EDX,dword ptr [g_AxisLabelTextColor]
        push EDX
        sar EBP,0x10
        push EBP
        sar EDI,0x10
        push EDI
        lea EAX,[ESP + 0x10]
        push EAX
        mov ECX,dword ptr [g_EditorFont]
        push ECX
        call engine_font_cpp_CBitFont_drawText_FUN_004a8df0
        add ESP,0x18
        jmp LAB_0047fea2
}
}
