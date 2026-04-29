// Name: core_moon.cpp_CMoon_render_FUN_00529ed0
// Address: 00529ed0
// Address Range: [[00529ed0, 0052a2bf]]
// Convention: __cdecl
// Signature: void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)

#include "nocturne.h"

/* WARNING: Inlined function: crt_math.c_round_FUN_005fe6b0 */

void __cdecl core_moon_cpp_CMoon_render_FUN_00529ed0(CMoon *this_ptr)
{
__asm {
        mov EBP,ESP
        sub ESP,0x4c
        mov ESI,dword ptr [EBP + 0x14]
        call sound_sndmain_cpp_processAudio_FUN_005abe20
        call wincore_windll_cpp_clearScreen_FUN_005b3e70
        call wincore_windll_cpp_clearZBufferNative_FUN_005b3ed4
        push 0x3f87558
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
        add ESP,0x8
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push 0x42e00000
        push ECX
        call engine_drender_cpp_CDemonRenderer_setProjectionScale_FUN_0048c650
        add ESP,0x8
        push 0x3f87558
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        push EBX
        call engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
        fld double ptr [DOUBLE_00639f99]
        fld float ptr [ESI + 0x4]
        fadd ST(0),ST(1)
        fld double ptr [DOUBLE_00639fa1]
        fxch
        fmul ST(1)
        lea EAX,[EBP + -0x4c]
        fstp float ptr [EBP + -0x4c]
        fld float ptr [ESI + 0x4]
        faddp ST(2),ST(0)
        add ESP,0x8
        fmulp
        push EAX
        mov EAX,[g_CDemonRendererPtr2]
        mov EDI,0x42900000
        push EAX
        mov dword ptr [EBP + -0x44],EDI
        fstp float ptr [EBP + -0x48]
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        mov EAX,[g_CDemonSetPtr]
        add ESP,0x8
        mov dword ptr [EAX + 0x15ae70],0x1
        push 0x10000
        mov dword ptr [EAX + 0x15ae74],0xffff6f78
        push 0x10000
        mov dword ptr [EAX + 0x15ae78],0xffff6f78
        push 0x10000
        mov dword ptr [EAX + 0x15ae7c],0x9088
        push EAX
        mov dword ptr [EAX + 0x15ae80],0x280
        call core_set_cpp_CDemonSet_setFlatColor_FUN_00570ca0
        add ESP,0x10
        push 0x205
        push 0x0
        push 0x0
        lea EAX,[ESI + 0x8]
        push EAX
        call core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
        mov EAX,[g_CDemonSetPtr]
        mov dword ptr [EAX + 0x15ae74],0xffffb7bc
        mov dword ptr [EAX + 0x15ae78],0xffffb7bc
        mov EDX,dword ptr [g_MoonBatsEnabled]
        mov dword ptr [EAX + 0x15ae7c],0x4844
        add ESP,0x10
        mov dword ptr [EAX + 0x15ae80],0x2000
        test EDX,EDX
        jz LAB_0052a12e
        xor EBX,EBX
        mov ESI,0x2f381e8
    LAB_0052a009:
        fld float ptr [EBX + 0x2f38210]
        fldz
        fcompp
        fnstsw AX
        sahf
        ja LAB_0052a11f
        lea EAX,[EBP + -0x40]
        push EAX
        lea EAX,[EBP + -0x34]
        mov ECX,dword ptr [g_MoonBats + EBX]
        push EAX
        imul EAX,ECX,0xc
        add EAX,ESI
        push dword ptr [EBX + 0x2f38210]
        push EAX
        call core_course_cpp_CCourse_evaluate_FUN_00442710
        fld float ptr [EBP + -0x34]
        fld float ptr [EBP + -0x30]
        fld float ptr [EBP + -0x2c]
        mov EAX,0x2f3820c
        fld float ptr [EBP + -0x3c]
        fxch ST(3)
        fadd float ptr [EBX + EAX*0x1 + 0xc]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fstp float ptr [EBP + -0x34]
        fxch
        fadd float ptr [EBX + EAX*0x1 + 0x10]
        add ESP,0x10
        fstp float ptr [EBP + -0x30]
        fadd float ptr [EBX + EAX*0x1 + 0x14]
        lea EAX,[EBP + -0x34]
        fxch
        fadd float ptr [FLOAT_00639fb9]
        push EAX
        fxch
        fstp float ptr [EBP + -0x2c]
        push EDI
        fstp float ptr [EBP + -0x3c]
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        add ESP,0x8
        push 0x0
        lea EAX,[EBP + -0x40]
        push EAX
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        add ESP,0xc
        fld float ptr [EBX + 0x2f38214]
        push -0x1
        call crt_math_c_round_FUN_005fe6b0
        push 0x0
        fistp dword ptr [EBP + -0x4]
        mov EDX,dword ptr [EBP + -0x4]
        push EDX
        push 0x2f384dc
        call core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
        add ESP,0x10
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0048c640
        imul EAX,dword ptr [g_MoonBats + EBX],0xc
        mov EAX,dword ptr [ESI + EAX*0x1]
        mov dword ptr [EBP + -0x4],EAX
        fild dword ptr [EBP + -0x4]
        fdivr float ptr [EBX + 0x2f38210]
        add ESP,0x4
        fst float ptr [EBP + -0x8]
        fst double ptr [EBP + -0x28]
        fcomp double ptr [DOUBLE_00639fc1]
        fnstsw AX
        sahf
        jnc LAB_0052a2ac
        fld float ptr [EBP + -0x8]
        fmul float ptr [FLOAT_00639fb1]
        fsubr float ptr [FLOAT_00639fb5]
    LAB_0052a108:
        mov EDX,dword ptr [g_CDemonSetPtr]
        call crt_math_c_round_FUN_005fe6b0
        fistp dword ptr [EBP + -0x4]
        mov EAX,dword ptr [EBP + -0x4]
        mov dword ptr [EDX + 0x15ae80],EAX
    LAB_0052a11f:
        add EBX,0x18
        cmp EBX,0x2d0
        jnz LAB_0052a009
    LAB_0052a12e:
        mov EAX,[g_CDemonSetPtr]
        push 0x2f37f70
        mov dword ptr [EAX + 0x15ae70],0x0
        call engine_alphabit_cpp_CAlphaBitmap_initPalette_FUN_00410cf0
        mov EAX,[g_MoonCloudScrollX]
        add ESP,0x4
        sar EAX,0x10
        mov dword ptr [EBP + -0x20],EAX
        mov EAX,[g_MoonCloudScrollY]
        sar EAX,0x10
        mov dword ptr [EBP + -0x14],EAX
        mov EAX,[g_MoonCloudTexture]
        mov dword ptr [EBP + -0x1c],EAX
        xor EAX,EAX
        mov dword ptr [EBP + -0x18],EAX
        cmp dword ptr [EBP + -0x18],0x1e0
        jge LAB_0052a250
    LAB_0052a17a:
        mov EAX,dword ptr [EBP + -0x18]
        mov EAX,dword ptr [g_ScreenBufferArray + EAX*0x4]
        mov dword ptr [EBP + -0x10],EAX
        xor ECX,ECX
        mov EDI,dword ptr [EBP + 0xfffffff0]
    LAB_0052a18f:
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
        movd MM1,dword ptr [g_Hardware32BitPalette + EAX*0x4]
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
        movd MM1,dword ptr [g_Hardware32BitPalette + EAX*0x4]
        movq MM2,MM1
        psllq MM2,0x20
        por MM1,MM2
        paddusb MM0,MM1
        movq qword ptr [EDI],MM0
        add EDI,0x8
        add ECX,0x2
        cmp ECX,0x280
        jc LAB_0052a18f
        emms
        mov EAX,dword ptr [EBP + -0x18]
        inc dword ptr [EBP + -0x18]
        cmp dword ptr [EBP + -0x18],0x1e0
        jl LAB_0052a17a
    LAB_0052a250:
        push 0x1
        call engine_3d_c_setBlendMode_FUN_00406dd0
        fld float ptr [g_MoonAnimationTimer]
        call crt_math_c_round_FUN_005fe6b0
        fistp dword ptr [EBP + -0xc]
        mov ESI,dword ptr [EBP + -0xc]
        add ESP,0x4
        cmp ESI,0x1d
        jle LAB_0052a275
        xor EDI,EDI
        mov dword ptr [EBP + -0xc],EDI
    LAB_0052a275:
        mov EDX,dword ptr [EBP + -0xc]
        lea EAX,[EDX*0x4 + 0x0]
        push 0xbb80
        add EAX,EDX
        push 0x0
        shl EAX,0x2
        push 0x0
        add EAX,0x2f37f84
        push EAX
        call engine_alphabit_cpp_CAlphaBitmap_display_FUN_00410950
        add ESP,0x10
        push 0x0
        call engine_3d_c_setBlendMode_FUN_00406dd0
        add ESP,0x4
        mov ESP,EBP
        pop EBP
        pop EDI
        pop ESI
        pop EBX
        ret
    LAB_0052a2ac:
        fld double ptr [EBP + -0x28]
        fadd double ptr [DOUBLE_00639f99]
        fmul double ptr [DOUBLE_00639fa9]
        jmp LAB_0052a108
}
}
