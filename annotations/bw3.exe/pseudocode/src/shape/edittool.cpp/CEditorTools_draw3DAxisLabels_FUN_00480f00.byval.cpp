// Name: shape_edittool.cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00
// Address: 00480f00
// Address Range: [[00480f00, 0048114a]]
// Convention: __cdecl
// Signature: void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00(CEditorTools *this_ptr,float scale_factor,int text_color)

#include "nocturne.h"

void __cdecl shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_00480f00(CEditorTools *this_ptr,float scale_factor,int text_color)
{
__asm {
        mov ESI,dword ptr [ESP + 0x40]
        cmp dword ptr [g_CBitFont_PTR_01c5b0e0],0x0
        jz LAB_004810b3
    LAB_00480f18:
        mov EAX,[g_CBitFont_PTR_01c5b0e0]
        push 0x6a
        mov EBX,dword ptr [EAX + 0x41e8]
        push EAX
        mov dword ptr [g_EditorFontMaxCharWidth],EBX
        call engine_font_cpp_CBitFont_getCharHeight_FUN_004b30f0
        add ESP,0x8
        fld float ptr [ESP + 0x3c]
        fmul double ptr [g_DOUBLE_005bd335]
        mov EDI,dword ptr [g_INT_01c5baec]
        mov [g_INT_01c5bae4],EAX
        call crt_math_c_round_FUN_005a3120
        fistp dword ptr [ESP + 0x20]
        test EDI,EDI
        jz LAB_004810db
        mov EBX,ESI
        and EBX,0xff
        lea EAX,[EBX*0x4 + 0x0]
        sub EAX,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c6af99]
        mov ESI,EBX
        xor EBX,EBX
        mov BL,byte ptr [EAX + 0x1c6af98]
        shl ESI,0x8
        shl EBX,0x10
        mov AL,byte ptr [EAX + 0x1c6af9a]
        or EBX,ESI
        and EAX,0xff
        or EBX,EAX
        push EBX
        call engine_mini3d_cpp_setColor_FUN_004f3520
        add ESP,0x4
    LAB_00480f9b:
        lea EAX,[ESP + 0x14]
        xor EBP,EBP
        push EAX
        mov dword ptr [ESP + 0x18],EBP
        push EBP
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e5540
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x14],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x1
        mov dword ptr [ESP + 0x20],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e5540
        add ESP,0x8
        mov ESI,0x60b044
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x60b014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407b30
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x18],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x2
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x24],EBP
        call engine_matrix_c_transformToCache_FUN_004e5540
        add ESP,0x8
        mov ESI,0x60b074
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x60b014
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407b30
        add ESP,0x60
        mov EAX,dword ptr [ESP + 0x20]
        mov dword ptr [ESP + 0x1c],EAX
        lea EAX,[ESP + 0x14]
        push EAX
        push 0x3
        mov dword ptr [ESP + 0x1c],EBP
        mov dword ptr [ESP + 0x20],EBP
        call engine_matrix_c_transformToCache_FUN_004e5540
        add ESP,0x8
        mov ESI,0x60b0a4
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov EBX,0x60b014
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov ESI,0x60b014
        mov EDI,ESP
        add EBX,0x30
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407b30
        add ESP,0x60
        xor ESI,ESI
    LAB_0048109c:
        test byte ptr [EBX + 0x13],0x80
        jz LAB_004810e6
    LAB_004810a2:
        inc ESI
        add EBX,0x30
        cmp ESI,0x3
        jl LAB_0048109c
        add ESP,0x24
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004810b3:
        mov ECX,0x5bcd25
        mov EBX,0xa7
        push 0x5bcd3b
        mov dword ptr [g_CurrentFilename],ECX
        mov dword ptr [g_CurrentLineNumber],EBX
        call core_main_c_displayErrorAndQuit_FUN_004e4330
        add ESP,0x4
        jmp LAB_00480f18
    LAB_004810db:
        mov dword ptr [g_INT_01c6b5c0],ESI
        jmp LAB_00480f9b
    LAB_004810e6:
        xor EAX,EAX
        mov AL,byte ptr [ESI + 0x5bd327]
        push EAX
        push 0x5bd32b
        lea EAX,[ESP + 0x8]
        push EAX
        mov EDI,dword ptr [EBX + 0x10]
        mov EBP,dword ptr [EBX + 0x14]
        call crt_unknown_c_sprintf_FUN_005a28c0
        add ESP,0xc
        push 0xffff
        call engine_3d_c_setRenderAlpha_FUN_00406bf0
        add ESP,0x4
        push 0x3f800000
        call engine_mini3d_cpp_setAlpha_FUN_004edaf0
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
        mov ECX,dword ptr [g_CBitFont_PTR_01c5b0e0]
        push ECX
        call engine_font_cpp_CBitFont_drawText_FUN_004b0a20
        add ESP,0x18
        jmp LAB_004810a2
}
}
