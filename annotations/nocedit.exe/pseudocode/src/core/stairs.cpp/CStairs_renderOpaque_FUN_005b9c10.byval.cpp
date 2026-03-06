// Name: core_stairs.cpp_CStairs_renderOpaque_FUN_005b9c10
// Address: 005b9c10
// Address Range: [[005b9c10, 005ba486]]
// Convention: __cdecl
// Signature: int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)

#include "nocturne.h"

int __cdecl core_stairs_cpp_CStairs_renderOpaque_FUN_005b9c10(CStairs *this_ptr)
{
__asm {
        mov EAX,[g_CDemonMissionPtr]
        cmp dword ptr [EAX + 0x4],0x0
        jnz LAB_005b9c2c
    LAB_005b9c22:
        xor EAX,EAX
        add ESP,0xe0
        pop EBP
        ret
    LAB_005b9c2c:
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
        add ESP,0x4
        test EAX,EAX
        jnz LAB_005b9c22
        push EDI
        push ESI
        push EBX
        mov EBX,dword ptr [ESP + 0xf4]
        push EBX
        call core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00
        add ESP,0x4
        lea EDX,[ESP + 0x34]
        push EDX
        mov EAX,dword ptr [EBX + 0x154]
        push EBX
        call dword ptr [EAX + 0x14]
        add ESP,0x8
        push EAX
        call core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0
        add ESP,0x4
        mov dword ptr [ESP + 0xac],EAX
        test EAX,EAX
        jz LAB_005ba465
        push 0x684178
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        xor ESI,ESI
        call engine_drender_cpp_CDemonRenderer_captureTexture_FUN_0048db80
        mov EBP,dword ptr [EBX + 0x16c]
        add ESP,0x8
        test EBP,EBP
        jl LAB_005b9ec0
        mov EBP,0x60
        mov EDI,0x90
        mov dword ptr [ESP + 0xcc],EBP
        mov dword ptr [ESP + 0xc8],EDI
        mov EBP,0x30
        xor EDI,EDI
    LAB_005b9cbf:
        mov EAX,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + 0xe8],ESI
        fld float ptr [EAX + 0x160]
        fchs
        fmul double ptr [DOUBLE_0065305a]
        fild dword ptr [ESP + 0xe8]
        fxch
        fstp float ptr [ESP + 0x58]
        fld float ptr [EAX + 0x158]
        fmul ST(1)
        fstp float ptr [ESP + 0x5c]
        fmul float ptr [EAX + 0x15c]
        lea EBX,[ESP + 0x64]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        lea EAX,[ESP + 0x58]
        fstp float ptr [ESP + 0x60]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x64]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,EDI
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x78]
        add ESP,0x8
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov EAX,dword ptr [ESP + 0xf4]
        fld float ptr [ESP + 0x60]
        fadd float ptr [EAX + 0x15c]
        lea EAX,[ESP + 0x58]
        fstp float ptr [ESP + 0x60]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x70]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,EBP
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0xa8]
        add ESP,0x8
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov EAX,dword ptr [ESP + 0xf4]
        fld float ptr [ESP + 0x60]
        fsub float ptr [EAX + 0x15c]
        fld float ptr [ESP + 0x58]
        fxch
        fstp float ptr [ESP + 0x60]
        fadd float ptr [EAX + 0x160]
        lea EAX,[ESP + 0x58]
        fstp float ptr [ESP + 0x58]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0xa0]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,dword ptr [ESP + 0xd0]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x90]
        add ESP,0x8
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov EAX,dword ptr [ESP + 0xf4]
        fld float ptr [ESP + 0x60]
        fadd float ptr [EAX + 0x15c]
        lea EAX,[ESP + 0x58]
        fstp float ptr [ESP + 0x60]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x88]
        mov ECX,dword ptr [ESP + 0xc8]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,ECX
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        inc ESI
        mov EAX,dword ptr [ESP + 0xcc]
        add EDI,0xc0
        add EAX,0xc0
        mov EBX,dword ptr [ESP + 0xc8]
        mov dword ptr [ESP + 0xcc],EAX
        mov EAX,dword ptr [ESP + 0xf4]
        add EBP,0xc0
        add EBX,0xc0
        mov EDX,dword ptr [EAX + 0x16c]
        mov dword ptr [ESP + 0xc8],EBX
        cmp ESI,EDX
        jle LAB_005b9cbf
        lea EAX,[EAX]
        lea EDX,[EDX]
    LAB_005b9ec0:
        mov EAX,dword ptr [ESP + 0xf4]
        xor EBX,EBX
        mov ECX,0x3
        mov dword ptr [ESP + 0xd4],EBX
        mov ESI,dword ptr [EAX + 0x16c]
        mov dword ptr [g_ActiveRenderColor],ECX
        test ESI,ESI
        jle LAB_005ba0e0
        mov EBX,0x120
        mov ESI,0xc0
        mov EBP,0x90
        mov EAX,0x60
        xor EDI,EDI
        mov dword ptr [ESP + 0xd0],EBX
        mov dword ptr [ESP + 0xc4],ESI
        mov dword ptr [ESP + 0xdc],EDI
        mov dword ptr [ESP + 0xd8],EAX
        mov EBX,0x30
    LAB_005b9f20:
        mov ESI,dword ptr [ESP + 0xd8]
        mov EAX,[g_CDemonRendererPtr2]
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        add ESI,EAX
        rep movsd
        mov ESI,dword ptr [ESP + 0x10c]
        mov ECX,0xc
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        lea ESI,[EAX + EBP*0x1]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        rep movsd
        mov ESI,dword ptr [ESP + 0x10c]
        mov ECX,0xc
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        lea ESI,[EAX + EBP*0x1]
        rep movsd
        mov ESI,dword ptr [ESP + 0x108]
        mov ECX,0xc
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        mov ESI,dword ptr [ESP + 0xc4]
        mov EAX,dword ptr [EAX]
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBX*0x1]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        mov ESI,dword ptr [ESP + 0xd0]
        mov EAX,dword ptr [EAX]
        sub ESP,0x30
        add ESI,EAX
        mov EDI,ESP
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + EBP*0x1]
        add EBX,0xc0
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        add EBP,0xc0
        mov EAX,dword ptr [ESP + 0xd0]
        mov EDX,dword ptr [ESP + 0xc4]
        mov ECX,dword ptr [ESP + 0xdc]
        mov ESI,dword ptr [ESP + 0xd8]
        mov EDI,dword ptr [ESP + 0xd4]
        add EAX,0xc0
        add EDX,0xc0
        add ECX,0xc0
        add ESI,0xc0
        inc EDI
        mov dword ptr [ESP + 0xd0],EAX
        mov dword ptr [ESP + 0xc4],EDX
        mov EDX,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + 0xdc],ECX
        mov dword ptr [ESP + 0xd8],ESI
        mov ECX,dword ptr [EDX + 0x16c]
        mov dword ptr [ESP + 0xd4],EDI
        cmp EDI,ECX
        jl LAB_005b9f20
        lea EAX,[EAX]
        lea EDX,[EDX]
        lea EAX,[EAX]
    LAB_005ba0e0:
        mov EAX,dword ptr [ESP + 0xf4]
        mov EAX,dword ptr [EAX + 0x16c]
        shl EAX,0x2
        mov ECX,0xc
        lea EDX,[EAX + 0x2]
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        lea EAX,[EDX*0x4 + 0x0]
        sub ESP,0x30
        sub EAX,EDX
        mov EBX,dword ptr [EBX]
        shl EAX,0x4
        mov EDI,ESP
        lea ESI,[EBX + EAX*0x1]
        mov EDX,dword ptr [ESP + 0x124]
        rep movsd
        mov EDX,dword ptr [EDX + 0x16c]
        lea EAX,[EDX*0x4 + 0x0]
        sub ESP,0x30
        sub EAX,EDX
        mov ECX,0xc
        shl EAX,0x6
        mov EDI,ESP
        lea ESI,[EBX + EAX*0x1]
        mov EBP,0x8000
        mov EBX,0x4
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov ECX,0xff00
        add ESP,0x60
        xor ESI,ESI
        xor EDI,EDI
        xor EAX,EAX
        mov dword ptr [ESP + 0x10],EBX
        mov dword ptr [ESP + 0x20],ESI
        mov dword ptr [ESP + 0x1c],ESI
        mov dword ptr [ESP + 0x18],ESI
        mov dword ptr [ESP + 0x14],ESI
        mov dword ptr [ESP + 0xb0],ESI
        mov dword ptr [ESP + 0xb4],ECX
        xor EBX,EBX
    LAB_005ba17f:
        mov EDX,dword ptr [ESP + 0xf4]
        mov EDX,dword ptr [EDX + 0x16c]
        shl EDX,0x2
        cmp EBX,EDX
        jg LAB_005ba1d9
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x20],EDI
        mov ECX,dword ptr [EDX]
        mov ESI,dword ptr [ESP + 0xb0]
        mov dword ptr [ECX + EAX*0x1 + 0x24],ESI
        mov ECX,dword ptr [EDX]
        mov ESI,dword ptr [ESP + 0xb4]
        mov dword ptr [ECX + EAX*0x1 + 0x28],ESI
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x2c],EBP
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x18],0x800000
        add EAX,0x30
        mov EDX,dword ptr [EDX]
        inc EBX
        mov dword ptr [EDX + EAX*0x1 + -0x14],0x800000
        jmp LAB_005ba17f
    LAB_005ba1d9:
        mov EAX,dword ptr [ESP + 0xf4]
        mov EDX,dword ptr [EAX + 0x16c]
        xor EDI,EDI
        test EDX,EDX
        jle LAB_005ba260
        xor ESI,ESI
    LAB_005ba1f2:
        mov dword ptr [ESP + 0x24],ESI
        lea EBP,[ESI + 0x1]
        lea EBX,[ESI + 0x3]
        lea EAX,[ESI + 0x2]
        mov dword ptr [ESP + 0x30],EAX
        lea EAX,[ESP + 0xc]
        push EAX
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        mov dword ptr [ESP + 0x30],EBP
        mov dword ptr [ESP + 0x34],EBX
        call engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
        add ESP,0x8
        lea EAX,[ESP + 0xc]
        mov dword ptr [ESP + 0x24],EBP
        mov dword ptr [ESP + 0x30],EBX
        push EAX
        lea EBP,[ESI + 0x4]
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        add ESI,0x6
        push EBX
        mov dword ptr [ESP + 0x30],EBP
        mov dword ptr [ESP + 0x34],ESI
        call engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
        add ESP,0x8
        mov EAX,dword ptr [ESP + 0xf4]
        inc EDI
        mov ESI,EBP
        cmp EDI,dword ptr [EAX + 0x16c]
        jl LAB_005ba1f2
        lea EAX,[EAX]
        mov ECX,ECX
    LAB_005ba260:
        mov EAX,0x3
        mov EBP,0x1
        mov EDI,0xff00
        xor EDX,EDX
        xor ESI,ESI
        mov dword ptr [ESP + 0x10],EAX
        mov dword ptr [ESP + 0x20],EDX
        mov dword ptr [ESP + 0x1c],EDX
        mov EAX,0x2
        mov dword ptr [ESP + 0x18],EDX
        mov dword ptr [ESP + 0x2c],EAX
        mov EAX,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + 0x14],EDX
        add EAX,0x170
        mov dword ptr [ESP + 0x24],EDX
        mov dword ptr [ESP + 0xb8],EAX
        mov EAX,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + 0x28],EBP
        add EAX,0x188
        mov dword ptr [ESP + 0xe0],EDX
        mov dword ptr [ESP + 0xc0],EAX
        mov EAX,dword ptr [ESP + 0xf4]
        mov dword ptr [ESP + 0xe4],EDX
        add EAX,0x17c
        mov EBP,0x8000
        mov dword ptr [ESP + 0xbc],EAX
    LAB_005ba2e4:
        mov EAX,dword ptr [ESP + 0xf4]
        mov EAX,dword ptr [EAX + 0x16c]
        mov EBX,dword ptr [ESP + 0xe0]
        add EAX,EAX
        cmp EAX,EBX
        jle LAB_005ba465
        imul EAX,EBX,0x38
        mov ECX,dword ptr [ESP + 0xb8]
        lea EBX,[ESP + 0x7c]
        add EAX,ECX
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x7c]
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0x4c]
        mov EAX,dword ptr [ESP + 0xbc]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x4c]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0x94]
        mov EAX,dword ptr [ESP + 0xc0]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006634b0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x94]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x60
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        xor EAX,EAX
        mov EBX,dword ptr [ESP + 0xe4]
    LAB_005ba3e5:
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x20],ESI
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x24],EDI
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x28],EBX
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x2c],EBP
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + 0x18],0x800000
        add EAX,0x30
        mov ECX,dword ptr [EDX]
        mov dword ptr [ECX + EAX*0x1 + -0x14],0x800000
        cmp EAX,0x90
        jnz LAB_005ba3e5
        lea EAX,[ESP + 0xc]
        push EAX
        push EDX
        call engine_drender_cpp_CDemonRenderer_renderMaximumQuality_FUN_0048bad0
        add ESP,0x8
        mov EBX,dword ptr [ESP + 0xc0]
        mov EAX,dword ptr [ESP + 0xbc]
        mov EDX,dword ptr [ESP + 0xe0]
        add EBX,0x38
        add EAX,0x38
        inc EDX
        mov dword ptr [ESP + 0xc0],EBX
        mov dword ptr [ESP + 0xbc],EAX
        mov dword ptr [ESP + 0xe0],EDX
        jmp LAB_005ba2e4
    LAB_005ba465:
        mov ECX,dword ptr [ESP + 0xf4]
        push ECX
        call core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40
        add ESP,0x4
        mov EAX,dword ptr [ESP + 0xac]
        pop EBX
        pop ESI
        pop EDI
        add ESP,0xe0
}
}
