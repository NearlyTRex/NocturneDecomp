// Name: core_course.cpp_CCourse_preview_FUN_00443bc0
// Address: 00443bc0
// Address Range: [[00443bc0, 004440c9]]
// Convention: __cdecl
// Signature: void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)

#include "nocturne.h"

void __cdecl core_course_cpp_CCourse_preview_FUN_00443bc0(CCourse *this_ptr,CKeyFramedModel *model_ptr)
{
__asm {
        mov EBP,ESP
        sub ESP,0x120
        sub EBP,0x7a
        xor EDX,EDX
        mov EAX,[g_CDemonSetPtr]
        mov dword ptr [EBP + 0x72],EDX
        mov dword ptr [EAX + 0x15ac80],0x1
        lea EAX,[EBP + -0x42]
        mov dword ptr [EBP + 0x62],EDX
        push EAX
        mov dword ptr [EBP + 0x5e],EDX
        mov dword ptr [EBP + 0x66],EDX
        call core_slew_cpp_CSlew_init_FUN_005a2060
        fld float ptr [EBP + -0x3a]
        mov EDI,dword ptr [g_CGamePtr]
        add ESP,0x4
        fadd float ptr [FLOAT_0061943b]
        push EDI
        fstp float ptr [EBP + -0x3a]
        call core_game_cpp_CGame_saveClockTime_FUN_004d7d80
        add ESP,0x4
    LAB_00443c13:
        xor EAX,EAX
        mov dword ptr [EBP + -0x26],EAX
        mov dword ptr [EBP + -0x22],EAX
        mov dword ptr [EBP + -0x1e],EAX
        mov EAX,dword ptr [EBP + 0x8e]
        fld float ptr [EBP + 0x72]
        mov EAX,dword ptr [EAX]
        fldz
        mov dword ptr [EBP + 0x76],EAX
        fxch
        fstp double ptr [EBP + 0x4e]
        fild dword ptr [EBP + 0x76]
        fstp float ptr [EBP + 0x6a]
        fcomp double ptr [EBP + 0x4e]
        fnstsw AX
        sahf
        ja LAB_00443e62
        fld float ptr [EBP + 0x72]
        fdiv float ptr [EBP + 0x6a]
        sub ESP,0x8
        fstp double ptr [ESP]
        call crt_math_c_floor_FUN_005feb90
        mov dword ptr [EBP + 0x46],EAX
        mov dword ptr [EBP + 0x4a],EDX
        fld double ptr [EBP + 0x46]
        fmul float ptr [EBP + 0x6a]
        fsubr double ptr [EBP + 0x4e]
        add ESP,0x8
    LAB_00443c68:
        fstp float ptr [EBP + 0x6e]
    LAB_00443c6b:
        mov EAX,dword ptr [EBP + 0x6e]
        mov dword ptr [EBP + 0x72],EAX
        lea EAX,[EBP + -0xe]
        push EAX
        lea EAX,[EBP + 0xa]
        push EAX
        mov EBX,dword ptr [EBP + 0x8e]
        push dword ptr [EBP + 0x6e]
        push EBX
        mov ESI,dword ptr [EBP + 0x66]
        call core_course_cpp_CCourse_evaluate_FUN_00442710
        add ESP,0x10
        test ESI,ESI
        jz LAB_00443cca
        lea EBX,[EBP + -0x42]
        lea EAX,[EBP + 0xa]
        cmp EBX,EAX
        jz LAB_00443cae
        mov EAX,dword ptr [EBP + 0xa]
        mov dword ptr [EBP + -0x42],EAX
        mov EAX,dword ptr [EBP + 0xe]
        mov dword ptr [EBP + -0x3e],EAX
        mov EAX,dword ptr [EBP + 0x12]
        mov dword ptr [EBP + -0x3a],EAX
    LAB_00443cae:
        lea EBX,[EBP + -0x36]
        lea EAX,[EBP + -0xe]
        cmp EBX,EAX
        jz LAB_00443cca
        mov EAX,dword ptr [EBP + -0xe]
        mov dword ptr [EBP + -0x36],EAX
        mov EAX,dword ptr [EBP + -0xa]
        mov dword ptr [EBP + -0x32],EAX
        mov EAX,dword ptr [EBP + -0x6]
        mov dword ptr [EBP + -0x2e],EAX
    LAB_00443cca:
        call wincore_windll_cpp_clearScreen_FUN_005b3e70
        call wincore_windll_cpp_clearZBuffer_FUN_005b3ed4
        lea EAX,[EBP + -0x36]
        push EAX
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_setupSceneRendering_FUN_0048c1d0
        add ESP,0x8
        lea EAX,[EBP + -0x42]
        push EAX
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0048c150
        mov EDX,dword ptr [EBP + 0x5e]
        add ESP,0x8
        test EDX,EDX
        jz LAB_00443ea2
        push 0x0
        mov EBX,dword ptr [g_CDemonSetPtr]
        push 0x42c80000
        mov ECX,0x1
        push EBX
        mov dword ptr [g_CDemonRaytraceInstance],ECX
        call core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
        add ESP,0xc
    LAB_00443d25:
        lea EAX,[EBP + -0x26]
        push EAX
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        add ESP,0x8
        lea EAX,[EBP + -0x1a]
        push EAX
        lea EAX,[EBP + -0x2]
        push EAX
        mov EAX,dword ptr [EBP + 0x8e]
        mov EAX,dword ptr [EAX]
        dec EAX
        mov EDI,dword ptr [EBP + 0x8e]
        mov dword ptr [EBP + 0x76],EAX
        sub ESP,0x4
        fild dword ptr [EBP + 0x76]
        fstp float ptr [ESP]
        push EDI
        call core_course_cpp_CCourse_evaluate_FUN_00442710
        mov EAX,0xfa
        add ESP,0x10
        xor EDX,EDX
        mov [g_ActiveRenderColor],EAX
        mov dword ptr [EBP + 0x56],EDX
    LAB_00443d73:
        mov EAX,dword ptr [EBP + 0x8e]
        mov ECX,dword ptr [EBP + 0x56]
        cmp ECX,dword ptr [EAX]
        jge LAB_00443edf
        lea EAX,[EBP + -0x1a]
        push EAX
        lea EAX,[EBP + 0x22]
        mov dword ptr [EBP + 0x76],ECX
        push EAX
        fild dword ptr [EBP + 0x76]
        sub ESP,0x4
        mov ECX,dword ptr [EBP + 0x8e]
        fstp float ptr [ESP]
        push ECX
        lea EBX,[EBP + 0x2e]
        call core_course_cpp_CCourse_evaluate_FUN_00442710
        add ESP,0x10
        lea EAX,[EBP + -0x2]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0x2e]
        push EAX
        mov EAX,dword ptr [EDI]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        lea EBX,[EBP + 0x16]
        add ESP,0x8
        lea EAX,[EBP + 0x22]
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_0065c060]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0x16]
        push EAX
        mov EAX,dword ptr [EDI]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        mov EAX,[g_CDemonRendererPtr2]
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
        lea EBX,[EBP + -0x2]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        lea EAX,[EBP + 0x22]
        add ESP,0x60
        cmp EBX,EAX
        jnz LAB_00443ec5
        inc dword ptr [EBP + 0x56]
        jmp LAB_00443d73
    LAB_00443e62:
        fld float ptr [EBP + 0x72]
        fchs
        fdiv float ptr [EBP + 0x6a]
        sub ESP,0x8
        fstp double ptr [ESP]
        call crt_math_c_floor_FUN_005feb90
        mov dword ptr [EBP + 0x46],EAX
        mov dword ptr [EBP + 0x4a],EDX
        fld double ptr [EBP + 0x46]
        fmul float ptr [EBP + 0x6a]
        fadd double ptr [EBP + 0x4e]
        add ESP,0x8
        fst float ptr [EBP + 0x6e]
        fldz
        fcompp
        fnstsw AX
        sahf
        jbe LAB_00443c6b
        fld float ptr [EBP + 0x6e]
        fadd float ptr [EBP + 0x6a]
        jmp LAB_00443c68
    LAB_00443ea2:
        mov EAX,dword ptr [EBP + -0x26]
        mov dword ptr [EBP + 0x3a],EAX
        mov EAX,dword ptr [EBP + -0x22]
        mov dword ptr [EBP + 0x3e],EAX
        mov EAX,dword ptr [EBP + -0x1e]
        mov dword ptr [EBP + 0x42],EAX
        lea EAX,[EBP + 0x3a]
        push EAX
        call core_course_cpp_renderCourseGizmo_FUN_00443760
        add ESP,0x4
        jmp LAB_00443d25
    LAB_00443ec5:
        mov EAX,dword ptr [EBP + 0x22]
        mov dword ptr [EBP + -0x2],EAX
        mov EAX,dword ptr [EBP + 0x26]
        mov dword ptr [EBP + 0x2],EAX
        mov EAX,dword ptr [EBP + 0x2a]
        mov dword ptr [EBP + 0x6],EAX
        inc dword ptr [EBP + 0x56]
        jmp LAB_00443d73
    LAB_00443edf:
        mov EBX,dword ptr [EBP + 0x66]
        test EBX,EBX
        jnz LAB_00443f2f
        lea EAX,[EBP + 0xa]
        push EAX
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        add ESP,0x8
        push EBX
        lea EAX,[EBP + -0xe]
        push EAX
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        add ESP,0xc
        push -0x1
        push EBX
        push EBX
        mov EAX,dword ptr [EBP + 0x92]
        push EAX
        call core_dmodel_cpp_CKeyFramedModel_prepareForRender_FUN_00477850
        add ESP,0x10
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720
        add ESP,0x4
    LAB_00443f2f:
        sub ESP,0x8
        fld float ptr [EBP + -0xa]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + -0x6]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + -0xe]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + 0x12]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + 0xe]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + 0xa]
        fstp double ptr [ESP]
        sub ESP,0x8
        fld float ptr [EBP + 0x72]
        fstp double ptr [ESP]
        push 0x619402
        lea EAX,[EBP + 0xffffff5a]
        push EAX
        call crt_stdio_c__sprintf_FUN_005fdbd0
        add ESP,0x40
        push 0x0
        push 0x0
        lea EAX,[EBP + 0xffffff5a]
        push EAX
        call engine_2d_c_drawText_FUN_00401fd0
        add ESP,0xc
        call wincore_wddvmem_cpp_swapBuffers_FUN_005eda20
        mov ECX,dword ptr [g_CGamePtr]
        push ECX
        call core_game_cpp_CGame_updateDeltaTime_FUN_004d7d90
        add ESP,0x4
        mov EAX,[g_CGamePtr]
        push 0x1
        fld float ptr [EAX + 0x264]
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        fstp float ptr [EBP + 0x5a]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jnz LAB_004440a6
        push 0x19
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00443ff2
        cmp dword ptr [EBP + 0x62],0x0
        setz AL
        and EAX,0xff
        mov dword ptr [EBP + 0x62],EAX
    LAB_00443ff2:
        push 0x13
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00444015
        cmp dword ptr [EBP + 0x66],0x0
        setz AL
        and EAX,0xff
        mov dword ptr [EBP + 0x66],EAX
    LAB_00444015:
        push 0x1f
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00444038
        cmp dword ptr [EBP + 0x5e],0x0
        setz AL
        and EAX,0xff
        mov dword ptr [EBP + 0x5e],EAX
    LAB_00444038:
        push 0x34
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00444054
        fld1
        fadd float ptr [EBP + 0x72]
        fstp float ptr [EBP + 0x72]
    LAB_00444054:
        push 0x33
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EBX,dword ptr [EAX]
        call dword ptr [EBX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00444074
        fld float ptr [EBP + 0x72]
        fadd float ptr [FLOAT_0061944b]
        fstp float ptr [EBP + 0x72]
    LAB_00444074:
        cmp dword ptr [EBP + 0x66],0x0
        jz LAB_00444098
    LAB_0044407a:
        cmp dword ptr [EBP + 0x62],0x0
        jnz LAB_00443c13
        fld float ptr [EBP + 0x5a]
        fmul double ptr [DOUBLE_00619443]
        fadd float ptr [EBP + 0x72]
        fstp float ptr [EBP + 0x72]
        jmp LAB_00443c13
    LAB_00444098:
        lea EAX,[EBP + -0x42]
        push EAX
        call core_slew_cpp_CSlew_processInput_FUN_005a20b0
        add ESP,0x4
        jmp LAB_0044407a
    LAB_004440a6:
        call engine_2d_c_clearInputAndWait_FUN_00403260
        xor ESI,ESI
        mov EAX,[g_CDemonSetPtr]
        mov dword ptr [g_CDemonRaytraceInstance],ESI
        mov dword ptr [EAX + 0x15ac80],0x0
        lea ESP,[EBP + 0x7a]
}
}
