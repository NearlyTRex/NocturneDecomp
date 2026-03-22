// Name: core_ladder.cpp_CLadder_renderOpaque_FUN_00502620
// Address: 00502620
// Address Range: [[00502620, 005028b3] [00602e34, 00603047]]
// Convention: __cdecl
// Signature: int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)

#include "nocturne.h"

int __cdecl core_ladder_cpp_CLadder_renderOpaque_FUN_00502620(CLadder *this_ptr)
{
__asm {
        mov EBP,ESP
        sub ESP,0x70
        and ESP,0xfffffff8
        mov EDX,dword ptr [EBP + 0x14]
        push EDX
        call core_actor_cpp_CDemonActor_setupRenderState_FUN_00408b00
        add ESP,0x4
        lea EBX,[ESP + 0xc]
        push EBX
        mov ECX,dword ptr [EBP + 0x14]
        mov EAX,dword ptr [EBP + 0x14]
        push ECX
        mov EAX,dword ptr [EAX + 0x154]
        call dword ptr [EAX + 0x14]
        add ESP,0x8
        push EAX
        call core_box_cpp_CBoundingBox3D_isVisible_FUN_004204f0
        add ESP,0x4
        mov dword ptr [ESP + 0x6c],EAX
        test EAX,EAX
        jz LAB_0050287f
        mov EAX,[g_CDemonMissionPtr]
        cmp dword ptr [EAX + 0x4],0x0
        jz LAB_0050287f
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_getFaceCount_FUN_0048cae0
        add ESP,0x4
        test EAX,EAX
        jnz LAB_0050287f
        mov EDI,0xfb
        mov dword ptr [ESP + 0x8],EAX
        mov dword ptr [g_ActiveRenderColor],EDI
    LAB_0050269a:
        mov EAX,dword ptr [EBP + 0x14]
        fld float ptr [EAX + 0x2d8]
        fadd double ptr [DOUBLE_00630e20]
        fld float ptr [ESP + 0x8]
        fstp double ptr [ESP]
        fcomp double ptr [ESP]
        fnstsw AX
        sahf
        jbe LAB_0050287f
        fldz
        fcomp double ptr [ESP]
        fnstsw AX
        sahf
        jc LAB_005027cc
    LAB_005026ca:
        mov EAX,dword ptr [EBP + 0x14]
        fld float ptr [EAX + 0x2d4]
        fchs
        fld double ptr [DOUBLE_00630e18]
        fxch
        fmul ST(1)
        xor EBX,EBX
        mov EAX,dword ptr [ESP + 0x8]
        mov dword ptr [ESP + 0x44],EBX
        mov dword ptr [ESP + 0x40],EAX
        mov EAX,dword ptr [EBP + 0x14]
        fstp float ptr [ESP + 0x3c]
        fmul float ptr [EAX + 0x2d4]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov EAX,dword ptr [ESP + 0x8]
        mov dword ptr [ESP + 0x5c],EBX
        lea EBX,[ESP + 0x48]
        mov dword ptr [ESP + 0x58],EAX
        lea EAX,[ESP + 0x3c]
        fstp float ptr [ESP + 0x54]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x48]
        push EAX
        mov EAX,dword ptr [EDI]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[ESP + 0x2c]
        add ESP,0x8
        lea EAX,[ESP + 0x54]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x24]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr2]
        jmp LAB_00602e34
    LAB_005027a1:
        rep movsd
        jmp LAB_00602e8e
    LAB_005027af:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        fld float ptr [ESP + 0x8]
        fadd float ptr [FLOAT_006605e8]
        fstp float ptr [ESP + 0x8]
        jmp LAB_0050269a
    LAB_005027cc:
        mov EAX,dword ptr [ESP + 0x8]
        lea EBX,[ESP + 0x30]
        xor EDX,EDX
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        mov dword ptr [ESP + 0x60],EDX
        mov dword ptr [ESP + 0x64],EAX
        lea EAX,[ESP + 0x60]
        mov dword ptr [ESP + 0x68],EDX
        fld float ptr [EAX]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_006605d0]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[ESP + 0x30]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x60
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr2]
        jmp LAB_00602ee5
    LAB_00502835:
        rep movsd
        jmp LAB_00602f3f
    LAB_00502843:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        jmp LAB_00602f96
    LAB_00502861:
        rep movsd
        jmp LAB_00602ff0
    LAB_00502870:
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        jmp LAB_005026ca
    LAB_0050287f:
        cmp dword ptr [ESP + 0x6c],0x0
        jnz LAB_0050289d
    LAB_00502886:
        mov EAX,dword ptr [EBP + 0x14]
        push EAX
        call core_actor_cpp_CDemonActor_restoreRenderState_FUN_00408b40
        add ESP,0x4
        mov EAX,dword ptr [ESP + 0x6c]
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0050289d:
        mov EAX,dword ptr [EBP + 0x14]
        push -0x1
        add EAX,0x158
        push 0x0
        push EAX
        call core_dmodel_cpp_CKeyFramedModelInstance_prepareForRendering_FUN_00478d20
        add ESP,0xc
        jmp LAB_00502886
    LAB_00602e34:
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
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
        jmp LAB_005027a1
    LAB_00602e8e:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
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
        jmp LAB_005027af
    LAB_00602ee5:
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
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
        jmp LAB_00502835
    LAB_00602f3f:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
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
        jmp LAB_00502843
    LAB_00602f96:
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
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
        jmp LAB_00502861
    LAB_00602ff0:
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
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
        jmp LAB_00502870
}
}
