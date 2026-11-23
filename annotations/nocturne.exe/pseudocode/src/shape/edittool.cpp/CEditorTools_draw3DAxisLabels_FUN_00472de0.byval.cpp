// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0
// Address: 00472de0
// Address Range: [[00472de0, 00472fcd]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00472de0(CEditorTools *this_ptr,float scale_factor,int text_color)
{
__asm {
        cmp dword ptr [g_CBitFont_PTR_01bcd070],0x0
        jz LAB_00472f4f
    LAB_00472df4:
        mov EAX,[g_CBitFont_PTR_01bcd070]
        push 0x6a
        mov EBX,dword ptr [EAX + 0x3168]
        push EAX
        mov dword ptr [g_EditorFontMaxCharWidth],EBX
        call engine_font_cpp_CBitFont_getCharHeight_FUN_004930e0
        add ESP,0x8
        fld float ptr [ESP + 0x3c]
        fmul double ptr [DOUBLE_0057ea9a]
        xor ESI,ESI
        mov [g_INT_01bcd9bc],EAX
        mov EAX,dword ptr [ESP + 0x40]
        mov dword ptr [ESP + 0x14],ESI
        mov dword ptr [ESP + 0x18],ESI
        mov [g_ActiveRenderColor],EAX
        lea EAX,[ESP + 0x14]
        mov dword ptr [ESP + 0x1c],ESI
        push EAX
        call crt_math_c_round_FUN_00563a30
        push ESI
        fistp dword ptr [ESP + 0x28]
        call engine_matrix_c_transformToCache_FUN_004cd210
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x14],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x1
        mov dword ptr [ESP + 0x20],ESI
        mov dword ptr [ESP + 0x24],ESI
        call engine_matrix_c_transformToCache_FUN_004cd210
        add ESP,0x8
        mov ESI,0x5c5044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x5c5014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x18],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        xor ECX,ECX
        push 0x2
        mov dword ptr [ESP + 0x1c],ECX
        mov dword ptr [ESP + 0x24],ECX
        call engine_matrix_c_transformToCache_FUN_004cd210
        add ESP,0x8
        mov ESI,0x5c5074
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x5c5014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x1c],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        xor EBX,EBX
        xor ESI,ESI
        push 0x3
        mov dword ptr [ESP + 0x1c],ESI
        mov dword ptr [ESP + 0x20],EBX
        call engine_matrix_c_transformToCache_FUN_004cd210
        add ESP,0x8
        mov ESI,0x5c50a4
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov EBX,0x5c5014
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x5c5014
        mov EDI,ESP
        add EBX,0x30
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00409290
        add ESP,0x60
        xor ESI,ESI
    LAB_00472f38:
        test byte ptr [EBX + 0x13],0x80
        jz LAB_00472f77
    LAB_00472f3e:
        inc ESI
        add EBX,0x30
        cmp ESI,0x3
        jl LAB_00472f38
        add ESP,0x24
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_00472f4f:
        mov ECX,0x57e4fa
        mov EBX,0x8b
        push 0x57e510
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_004c8440
        add ESP,0x4
        jmp LAB_00472df4
    LAB_00472f77:
        xor EAX,EAX
        mov AL,byte ptr [s_XYZ_0057ea93 + ESI]
        push EAX
        push 0x57ea97
        lea EAX,[ESP + 0x8]
        push EAX
        mov EBP,dword ptr [EBX + 0x10]
        mov EDI,dword ptr [EBX + 0x14]
        call crt_stdio_c_sprintf_FUN_00563c90
        add ESP,0xc
        push 0xffff
        call engine_3d_c_setRenderAlpha_FUN_00408370
        add ESP,0x4
        push -0x1
        mov EAX,[g_AxisLabelTextColor]
        push EAX
        sar EDI,0x10
        push EDI
        sar EBP,0x10
        push EBP
        lea EAX,[ESP + 0x10]
        push EAX
        mov EDX,dword ptr [g_CBitFont_PTR_01bcd070]
        push EDX
        call engine_font_cpp_CBitFont_drawText_FUN_00490980
        add ESP,0x18
        jmp LAB_00472f3e
}
}
