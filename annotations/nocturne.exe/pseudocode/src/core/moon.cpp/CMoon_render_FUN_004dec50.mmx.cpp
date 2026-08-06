// Name: core_moon.cpp_CMoon_render_FUN_004dec50
// Address: 004dec50
// Address Range: [[004dec50, 004df03f]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Globals starting with '_' overlap smaller symbols at the same address */

void __cdecl core_moon_cpp_CMoon_render_FUN_004dec50(CMoon *this_ptr)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4c
        mov ESI,dword ptr [EBP + 0x14]
        call sound_sndmain_cpp_processAudio_FUN_005288f0
        call engine_special_cpp_clearScreen_FUN_0052ee70
        call engine_special_cpp_clearZBufferNative_FUN_0052eed4
        push 0x2dd1184
        mov EDX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push EDX
        call engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_00460700
        add ESP,0x8
        mov ECX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push 0x42e00000
        push ECX
        call engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_00460c00
        add ESP,0x8
        push 0x2dd1184
        mov EBX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push EBX
        call engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_00460780
        fld double ptr [DOUBLE_0058a936]
        fld float ptr [ESI + 0x4]
        fadd ST(0),ST(1)
        fld double ptr [DOUBLE_0058a93e]
        fxch
        fmul ST(1)
        lea EAX,[EBP + -0x4c]
        fstp float ptr [EBP + -0x4c]
        fld float ptr [ESI + 0x4]
        faddp ST(2),ST(0)
        add ESP,0x8
        fmulp
        push EAX
        mov EAX,[g_CDemonRenderer_PTR_005ae704]
        mov EDI,0x42900000
        push EAX
        mov dword ptr [EBP + -0x44],EDI
        fstp float ptr [EBP + -0x48]
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
        mov EAX,[g_CDemonSet_PTR_005be368]
        add ESP,0x8
        mov dword ptr [EAX + 0x15aa88],0x1
        push 0x10000
        mov dword ptr [EAX + 0x15aa8c],0xffff6f78
        push 0x10000
        mov dword ptr [EAX + 0x15aa90],0xffff6f78
        push 0x10000
        mov dword ptr [EAX + 0x15aa94],0x9088
        push EAX
        mov dword ptr [EAX + 0x15aa98],0x280
        call core_set_cpp_CDemonSet_setFlatColor_FUN_0050e340
        add ESP,0x10
        push 0x205
        push 0x0
        push 0x0
        lea EAX,[ESI + 0x8]
        push EAX
        call core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
        mov EAX,[g_CDemonSet_PTR_005be368]
        mov dword ptr [EAX + 0x15aa8c],0xffffb7bc
        mov dword ptr [EAX + 0x15aa90],0xffffb7bc
        mov EDX,dword ptr [DAT_005bb210]
        mov dword ptr [EAX + 0x15aa94],0x4844
        add ESP,0x10
        mov dword ptr [EAX + 0x15aa98],0x2000
        test EDX,EDX
        jz LAB_004deeae
        xor EBX,EBX
        mov ESI,0x1ccdec8
    LAB_004ded89:
        fld float ptr [EBX + 0x1ccdef0]
        fldz
        fcompp
        fnstsw AX
        sahf
        ja LAB_004dee9f
        lea EAX,[EBP + -0x40]
        push EAX
        lea EAX,[EBP + -0x34]
        mov ECX,dword ptr [EBX + 0x1ccdeec]
        push EAX
        imul EAX,ECX,0xc
        add EAX,ESI
        push dword ptr [EBX + 0x1ccdef0]
        push EAX
        call core_course_cpp_CCourse_evaluate_FUN_0043b800
        fld float ptr [EBP + -0x34]
        fld float ptr [EBP + -0x30]
        fld float ptr [EBP + -0x2c]
        mov EAX,0x1ccdeec
        fld float ptr [EBP + -0x3c]
        fxch ST(3)
        fadd float ptr [EBX + EAX*0x1 + 0xc]
        mov EDI,dword ptr [g_CDemonRenderer_PTR_005ae704]
        fstp float ptr [EBP + -0x34]
        fxch
        fadd float ptr [EBX + EAX*0x1 + 0x10]
        add ESP,0x10
        fstp float ptr [EBP + -0x30]
        fadd float ptr [EBX + EAX*0x1 + 0x14]
        lea EAX,[EBP + -0x34]
        fxch
        fadd float ptr [FLOAT_0058a956]
        push EAX
        fxch
        fstp float ptr [EBP + -0x2c]
        push EDI
        fstp float ptr [EBP + -0x3c]
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_00460a00
        add ESP,0x8
        push 0x0
        lea EAX,[EBP + -0x40]
        push EAX
        mov EAX,[g_CDemonRenderer_PTR_005ae704]
        push EAX
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_00460aa0
        add ESP,0xc
        fld float ptr [EBX + 0x1ccdef4]
        push -0x1
        call crt_math_c_round_FUN_00563a30
        push 0x0
        fistp dword ptr [EBP + -0x4]
        mov EDX,dword ptr [EBP + -0x4]
        push EDX
        push 0x1cce1bc
        call core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00453040
        add ESP,0x10
        mov ECX,dword ptr [g_CDemonRenderer_PTR_005ae704]
        push ECX
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_00460bf0
        imul EAX,dword ptr [EBX + 0x1ccdeec],0xc
        mov EAX,dword ptr [ESI + EAX*0x1]
        mov dword ptr [EBP + -0x4],EAX
        fild dword ptr [EBP + -0x4]
        fdivr float ptr [EBX + 0x1ccdef0]
        add ESP,0x4
        fst float ptr [EBP + -0x8]
        fst double ptr [EBP + -0x28]
        fcomp double ptr [DOUBLE_0058a95e]
        fnstsw AX
        sahf
        jnc LAB_004df02c
        fld float ptr [EBP + -0x8]
        fmul float ptr [FLOAT_0058a94e]
        fsubr float ptr [FLOAT_0058a952]
    LAB_004dee88:
        mov EDX,dword ptr [g_CDemonSet_PTR_005be368]
        call crt_math_c_round_FUN_00563a30
        fistp dword ptr [EBP + -0x4]
        mov EAX,dword ptr [EBP + -0x4]
        mov dword ptr [EDX + 0x15aa98],EAX
    LAB_004dee9f:
        add EBX,0x18
        cmp EBX,0x2d0
        jnz LAB_004ded89
    LAB_004deeae:
        mov EAX,[g_CDemonSet_PTR_005be368]
        push 0x1ccdc50
        mov dword ptr [EAX + 0x15aa88],0x0
        call engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_0040eab0
        mov EAX,[DAT_01ccdebc]
        add ESP,0x4
        sar EAX,0x10
        mov dword ptr [EBP + -0x20],EAX
        mov EAX,[DAT_01ccdec0]
        sar EAX,0x10
        mov dword ptr [EBP + -0x14],EAX
        mov EAX,[g_CAlphaBitmap_01ccdc50]
        mov dword ptr [EBP + -0x1c],EAX
        xor EAX,EAX
        mov dword ptr [EBP + -0x18],EAX
        cmp dword ptr [EBP + -0x18],0x1e0
        jge LAB_004defd0
    LAB_004deefa:
        mov EAX,dword ptr [EBP + -0x18]
        mov EAX,dword ptr [DAT_01bd2fa0 + EAX*0x4]
        mov dword ptr [EBP + -0x10],EAX
        xor ECX,ECX
        mov EDI,dword ptr [EBP + 0xfffffff0]
    LAB_004def0f:
        movq MM0,qword ptr [EDI]
        mov EAX,ECX
        mov EBX,dword ptr [EBP + 0xffffffe8]
        shr EAX,0x1
        shr EBX,0x1
        add EAX,dword ptr [EBP + 0xffffffe0]
        add EBX,dword ptr [EBP + 0xffffffec]
        and EAX,0xff
        and EBX,0xff
        shl EAX,0x8
        add EAX,EBX
        add EAX,dword ptr [EBP + 0xffffffe4]
        movzx EAX,byte ptr [EAX]
        shr EAX,0x2
        movd MM1,dword ptr [DAT_01c00024 + EAX*0x4]
        movq MM2,MM1
        psllq MM2,0x20
        por MM1,MM2
        paddusb MM0,MM1
        mov EAX,ECX
        mov EBX,dword ptr [EBP + 0xffffffe8]
        shr EAX,0x2
        shr EBX,0x2
        add EAX,dword ptr [EBP + 0xffffffe0]
        add EBX,dword ptr [EBP + 0xffffffec]
        and EAX,0xff
        and EBX,0xff
        shl EAX,0x8
        add EAX,EBX
        add EAX,dword ptr [EBP + 0xffffffe4]
        movzx EAX,byte ptr [EAX]
        shr EAX,0x2
        movd MM1,dword ptr [DAT_01c00024 + EAX*0x4]
        movq MM2,MM1
        psllq MM2,0x20
        por MM1,MM2
        paddusb MM0,MM1
        movq qword ptr [EDI],MM0
        add EDI,0x8
        add ECX,0x2
        cmp ECX,0x280
        jc LAB_004def0f
        emms
        mov EAX,dword ptr [EBP + -0x18]
        inc dword ptr [EBP + -0x18]
        cmp dword ptr [EBP + -0x18],0x1e0
        jl LAB_004deefa
    LAB_004defd0:
        push 0x1
        call engine_3d_c_setBlendMode_FUN_004083c0
        fld float ptr [DAT_01ccdec4]
        call crt_math_c_round_FUN_00563a30
        fistp dword ptr [EBP + -0xc]
        mov ESI,dword ptr [EBP + -0xc]
        add ESP,0x4
        cmp ESI,0x1d
        jle LAB_004deff5
        xor EDI,EDI
        mov dword ptr [EBP + -0xc],EDI
    LAB_004deff5:
        mov EDX,dword ptr [EBP + -0xc]
        lea EAX,[EDX*0x4 + 0x0]
        push 0xbb80
        add EAX,EDX
        push 0x0
        shl EAX,0x2
        push 0x0
        add EAX,0x1ccdc64
        push EAX
        call engine_alphabit_cpp_CAlphaBitmap_display_FUN_0040e710
        add ESP,0x10
        push 0x0
        call engine_3d_c_setBlendMode_FUN_004083c0
        add ESP,0x4
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_004df02c:
        fld double ptr [EBP + -0x28]
        fadd double ptr [DOUBLE_0058a936]
        fmul double ptr [DOUBLE_0058a946]
        jmp LAB_004dee88
}
}
