// Name: core_actor.cpp_CDemonActor_renderBoundingBox_FUN_0040d940
// Address: 0040d940
// Address Range: [[0040d940, 0040deba]]
// Convention: __cdecl
// Signature: void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)

#include "nocturne.h"

/* WARNING: Variable defined which should be unmapped: local_17c */
/* WARNING: Variable defined which should be unmapped: local_14c */
/* WARNING: Variable defined which should be unmapped: local_1ac */

void __cdecl core_actor_cpp_CDemonActor_renderBoundingBox_FUN_0040d940(CDemonActor *this_ptr,uint32_t color)
{
__asm {
        mov EDX,dword ptr [ESP + 0x150]
        push EDX
        call core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00
        add ESP,0x4
        mov EBX,ESP
        push EBX
        mov ECX,dword ptr [ESP + 0x154]
        mov EAX,dword ptr [ESP + 0x154]
        push ECX
        mov EAX,dword ptr [EAX + 0x154]
        call dword ptr [EAX + 0x14]
        add ESP,0x8
        mov dword ptr [ESP + 0x138],EAX
        mov EAX,dword ptr [ESP + 0x154]
        xor EBP,EBP
        mov [g_ActiveRenderColor],EAX
    LAB_0040d98d:
        mov EBX,EBP
        xor BL,0x1
        push EBX
        lea EBX,[ESP + 0x94]
        push EBX
        mov EBX,dword ptr [ESP + 0x140]
        push EBX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        lea EBX,[ESP + 0x88]
        push EBX
        mov EDI,dword ptr [ESP + 0x140]
        push EDI
        mov ESI,EAX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EAX
        lea EDI,[ESP + 0x100]
        push EDI
        mov EBX,EAX
        call core_actor_cpp_copyFloat_FUN_004104f0
        add ESP,0x8
        lea EDI,[EBX + 0x4]
        push EDI
        lea EDI,[ESP + 0x104]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104e0
        add ESP,0x8
        lea EDI,[EBX + 0x8]
        push EDI
        lea EDI,[ESP + 0x108]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104d0
        add ESP,0x8
        lea EDI,[ESP + 0x120]
        push EDI
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_0061445c]
        fld float ptr [ESI]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0x120]
        fld float ptr [ESI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x124]
        fld float ptr [ESI + 0x8]
        lea ESI,[ESP + 0x6c]
        fmulp
        push ESI
        fstp float ptr [ESP + 0x12c]
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_00614460]
        fld float ptr [EBX]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0x6c]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x70]
        fmul float ptr [EBX + 0x8]
        fstp float ptr [ESP + 0x74]
        lea EBX,[ESP + 0x30]
        push EBX
        call core_actor_cpp_CVector_ctor_FUN_00410340
        lea EBX,[ESP + 0x10c]
        add ESP,0x4
        mov ESI,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [ESP + 0x6c]
        fld float ptr [ESP + 0x70]
        fld float ptr [ESP + 0x74]
        push EBX
        lea EBX,[ESP + 0x100]
        fxch ST(2)
        fadd float ptr [ESP + 0x124]
        fxch
        fadd float ptr [ESP + 0x128]
        fxch ST(2)
        fadd float ptr [ESP + 0x12c]
        fxch
        fstp float ptr [ESP + 0x34]
        fxch
        fstp float ptr [ESP + 0x38]
        push EBX
        fstp float ptr [ESP + 0x40]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea EBX,[ESP + 0x108]
        push EBX
        mov EBX,dword ptr [ESI]
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0xf0]
        push EBX
        lea EBX,[ESP + 0x34]
        push EBX
        mov ESI,dword ptr [g_CDemonRendererPtr1]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea EBX,[ESP + 0xf0]
        push EBX
        mov EBX,dword ptr [ESI]
        add EBX,0x30
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EBX,dword ptr [g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EBX,dword ptr [EBX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EBX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EBX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EBX,EBP
        add ESP,0x60
        xor BL,0x2
        push EBX
        lea EBX,[ESP + 0x64]
        push EBX
        mov EAX,dword ptr [ESP + 0x140]
        push EAX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        lea EBX,[ESP + 0x28]
        push EBX
        mov EDX,dword ptr [ESP + 0x140]
        push EDX
        mov ESI,EAX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        mov EBX,EAX
        add ESP,0xc
        push EAX
        lea EDI,[ESP + 0xe8]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104f0
        add ESP,0x8
        lea EDI,[EBX + 0x4]
        push EDI
        lea EDI,[ESP + 0xec]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104e0
        add ESP,0x8
        lea EDI,[EBX + 0x8]
        push EDI
        lea EDI,[ESP + 0xf0]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104d0
        add ESP,0x8
        lea EDI,[ESP + 0xd8]
        push EDI
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_0061445c]
        fld float ptr [ESI]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0xd8]
        fld float ptr [ESI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0xdc]
        fld float ptr [ESI + 0x8]
        lea ESI,[ESP + 0x9c]
        fmulp
        push ESI
        fstp float ptr [ESP + 0xe4]
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_00614460]
        fld float ptr [EBX]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0x9c]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0xa0]
        fld float ptr [EBX + 0x8]
        lea EBX,[ESP + 0xcc]
        fmulp
        push EBX
        fstp float ptr [ESP + 0xa8]
        call core_actor_cpp_CVector_ctor_FUN_00410340
        lea EBX,[ESP + 0x40]
        add ESP,0x4
        mov ESI,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [ESP + 0x9c]
        fld float ptr [ESP + 0xa0]
        fld float ptr [ESP + 0xa4]
        push EBX
        lea EBX,[ESP + 0xe8]
        fxch ST(2)
        fadd float ptr [ESP + 0xdc]
        fxch
        fadd float ptr [ESP + 0xe0]
        fxch ST(2)
        fadd float ptr [ESP + 0xe4]
        fxch
        fstp float ptr [ESP + 0xd0]
        fxch
        fstp float ptr [ESP + 0xd4]
        push EBX
        fstp float ptr [ESP + 0xdc]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea EBX,[ESP + 0x3c]
        push EBX
        mov EBX,dword ptr [ESI]
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0x54]
        push EBX
        lea EBX,[ESP + 0xd0]
        push EBX
        mov ESI,dword ptr [g_CDemonRendererPtr1]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea EBX,[ESP + 0x54]
        push EBX
        mov EBX,dword ptr [ESI]
        add EBX,0x30
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EBX,dword ptr [g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EBX,dword ptr [EBX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EBX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EBX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EBX,EBP
        add ESP,0x60
        xor BL,0x4
        push EBX
        lea EBX,[ESP + 0xc4]
        push EBX
        mov ECX,dword ptr [ESP + 0x140]
        push ECX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        add ESP,0xc
        push EBP
        lea EBX,[ESP + 0xb8]
        push EBX
        mov EBX,dword ptr [ESP + 0x140]
        push EBX
        mov ESI,EAX
        call core_box_cpp_CBoundingBox3D_getCorner_FUN_004202b0
        mov EBX,EAX
        add ESP,0xc
        push EAX
        lea EDI,[ESP + 0x118]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104f0
        add ESP,0x8
        lea EDI,[EBX + 0x4]
        push EDI
        lea EDI,[ESP + 0x11c]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104e0
        add ESP,0x8
        lea EDI,[EBX + 0x8]
        push EDI
        lea EDI,[ESP + 0x120]
        push EDI
        call core_actor_cpp_copyFloat_FUN_004104d0
        add ESP,0x8
        lea EDI,[ESP + 0x48]
        push EDI
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_0061445c]
        fld float ptr [ESI]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0x48]
        fld float ptr [ESI + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x4c]
        fld float ptr [ESI + 0x8]
        lea ESI,[ESP + 0x18]
        fmulp
        push ESI
        fstp float ptr [ESP + 0x54]
        call core_actor_cpp_CVector_ctor_FUN_00410340
        fld float ptr [FLOAT_00614460]
        fld float ptr [EBX]
        fmul ST(1)
        add ESP,0x4
        fstp float ptr [ESP + 0x18]
        fld float ptr [EBX + 0x4]
        fmul ST(1)
        fstp float ptr [ESP + 0x1c]
        fmul float ptr [EBX + 0x8]
        lea EBX,[ESP + 0xa8]
        lea ESI,[ESP + 0x78]
        push EBX
        fstp float ptr [ESP + 0x24]
        call core_actor_cpp_CVector_ctor_FUN_00410340
        add ESP,0x4
        mov EBX,dword ptr [g_CDemonRendererPtr1]
        fld float ptr [ESP + 0x18]
        fld float ptr [ESP + 0x1c]
        fld float ptr [ESP + 0x20]
        push ESI
        lea ESI,[ESP + 0x118]
        fxch ST(2)
        fadd float ptr [ESP + 0x4c]
        fxch
        fadd float ptr [ESP + 0x50]
        fxch ST(2)
        fadd float ptr [ESP + 0x54]
        fxch
        fstp float ptr [ESP + 0xac]
        fxch
        fstp float ptr [ESP + 0xb0]
        push ESI
        fstp float ptr [ESP + 0xb8]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea ESI,[ESP + 0x78]
        push ESI
        mov EBX,dword ptr [EBX]
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        lea EBX,[ESP + 0x12c]
        push EBX
        lea EBX,[ESP + 0xac]
        push EBX
        mov ESI,dword ptr [g_CDemonRendererPtr1]
        call core_actor_cpp_CVector3f_toFixed8_FUN_004103d0
        add ESP,0x8
        lea EBX,[ESP + 0x12c]
        push EBX
        mov EBX,dword ptr [ESI]
        add EBX,0x30
        push EBX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EBX,dword ptr [g_CDemonRendererPtr1]
        sub ESP,0x30
        mov EBX,dword ptr [EBX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EBX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EBX
        inc EBP
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        cmp EBP,0x8
        jl LAB_0040d98d
        mov ESI,dword ptr [ESP + 0x150]
        push ESI
        call core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40
        add ESP,0x4
        add ESP,0x13c
}
}
