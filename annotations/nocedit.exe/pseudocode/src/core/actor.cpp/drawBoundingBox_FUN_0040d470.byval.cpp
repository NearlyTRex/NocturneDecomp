// Name: core_actor.cpp_drawBoundingBox_FUN_0040d470
// Address: 0040d470
// Address Range: [[0040d470, 0040d936]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)

#include "nocturne.h"

void __cdecl core_actor_cpp_drawBoundingBox_FUN_0040d470(CBoundingBox3D *bbox,int line_color)
{
__asm {
        mov EAX,dword ptr [ESP + 0x138]
        xor EBP,EBP
        mov [g_ActiveRenderColor],EAX
    LAB_0040d488:
        mov EAX,EBP
        xor AL,0x1
        push EAX
        lea EAX,[ESP + 0x64]
        push EAX
        mov EDX,dword ptr [ESP + 0x13c]
        push EDX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        mov EBX,EAX
        lea EAX,[ESP + 0x58]
        push EAX
        mov ECX,dword ptr [ESP + 0x13c]
        push ECX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        mov EDX,EAX
        add ESP,0xc
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xcc],EAX
        lea EAX,[EDX + 0x4]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xd0],EAX
        lea EAX,[EDX + 0x8]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xd4],EAX
        fld float ptr [FLOAT_00614454]
        fld float ptr [EBX]
        fmul ST(1)
        fstp float ptr [ESP + 0x24]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x28]
        fmul float ptr [EBX + 0x8]
        fstp float ptr [ESP + 0x2c]
        fld float ptr [FLOAT_00614458]
        fld float ptr [EDX]
        fmul ST(1)
        fstp float ptr [ESP + 0xe4]
        fld float ptr [EDX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0xe8]
        fmul float ptr [EDX + 0x8]
        lea EAX,[ESP + 0xcc]
        lea EBX,[ESP + 0x114]
        fld float ptr [ESP + 0xe4]
        fadd float ptr [ESP + 0x24]
        fld float ptr [ESP + 0xe8]
        fxch
        fstp float ptr [ESP + 0x48]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fadd float ptr [ESP + 0x28]
        fxch
        fst float ptr [ESP + 0xec]
        fadd float ptr [ESP + 0x2c]
        fxch
        fstp float ptr [ESP + 0x4c]
        fstp float ptr [ESP + 0x50]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x114]
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x14]
        add ESP,0x8
        lea EAX,[ESP + 0x48]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xc]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,EBP
        add ESP,0x60
        xor AL,0x2
        push EAX
        lea EAX,[ESP + 0x4]
        push EAX
        mov EBX,dword ptr [ESP + 0x13c]
        push EBX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        mov EBX,EAX
        lea EAX,[ESP + 0x70]
        push EAX
        mov ESI,dword ptr [ESP + 0x13c]
        push ESI
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        mov EDX,EAX
        add ESP,0xc
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xb4],EAX
        lea EAX,[EDX + 0x4]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xb8],EAX
        lea EAX,[EDX + 0x8]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xbc],EAX
        fld float ptr [FLOAT_00614454]
        fld float ptr [EBX]
        fmul ST(1)
        fstp float ptr [ESP + 0x30]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x34]
        fmul float ptr [EBX + 0x8]
        fstp float ptr [ESP + 0x38]
        fld float ptr [FLOAT_00614458]
        fld float ptr [EDX]
        fmul ST(1)
        fstp float ptr [ESP + 0xf0]
        fld float ptr [EDX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0xf4]
        fmul float ptr [EDX + 0x8]
        lea EAX,[ESP + 0xb4]
        lea EBX,[ESP + 0x108]
        fld float ptr [ESP + 0xf0]
        fadd float ptr [ESP + 0x30]
        fld float ptr [ESP + 0xf4]
        fxch
        fstp float ptr [ESP + 0xc0]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fadd float ptr [ESP + 0x34]
        fxch
        fst float ptr [ESP + 0xf8]
        fadd float ptr [ESP + 0x38]
        fxch
        fstp float ptr [ESP + 0xc4]
        fstp float ptr [ESP + 0xc8]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x108]
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x80]
        add ESP,0x8
        lea EAX,[ESP + 0xc0]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x78]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,EBP
        add ESP,0x60
        xor AL,0x4
        push EAX
        lea EAX,[ESP + 0x94]
        push EAX
        mov EDI,dword ptr [ESP + 0x13c]
        push EDI
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        mov EBX,EAX
        lea EAX,[ESP + 0x88]
        push EAX
        push EDI
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        mov EDX,EAX
        add ESP,0xc
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xd8],EAX
        lea EAX,[EDX + 0x4]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xdc],EAX
        lea EAX,[EDX + 0x8]
        mov EAX,dword ptr [EAX]
        mov dword ptr [ESP + 0xe0],EAX
        fld float ptr [FLOAT_00614454]
        fld float ptr [EBX]
        fmul ST(1)
        fstp float ptr [ESP + 0xa8]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0xac]
        fmul float ptr [EBX + 0x8]
        fstp float ptr [ESP + 0xb0]
        fld float ptr [FLOAT_00614458]
        fld float ptr [EDX]
        fmul ST(1)
        fstp float ptr [ESP + 0xfc]
        fld float ptr [EDX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x100]
        fmul float ptr [EDX + 0x8]
        lea EAX,[ESP + 0xd8]
        lea EBX,[ESP + 0x9c]
        fld float ptr [ESP + 0xfc]
        fadd float ptr [ESP + 0xa8]
        fld float ptr [ESP + 0x100]
        fxch
        fstp float ptr [ESP + 0x3c]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fadd float ptr [ESP + 0xac]
        fxch
        fst float ptr [ESP + 0x104]
        fadd float ptr [ESP + 0xb0]
        fxch
        fstp float ptr [ESP + 0x40]
        fstp float ptr [ESP + 0x44]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x9c]
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x20]
        add ESP,0x8
        lea EAX,[ESP + 0x3c]
        mov EDX,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006597b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x18]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        inc EBP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        cmp EBP,0x8
        jl LAB_0040d488
        add ESP,0x120
}
}
