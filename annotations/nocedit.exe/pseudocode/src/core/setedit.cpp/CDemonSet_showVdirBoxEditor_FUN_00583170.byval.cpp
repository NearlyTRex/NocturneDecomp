// Name: core_setedit.cpp_CDemonSet_showVdirBoxEditor_FUN_00583170
// Address: 00583170
// Address Range: [[00583170, 00583633] [00583651, 00583aac] [00583ad6, 005848f1]]
// Convention: __cdecl
// Signature: void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)

#include "nocturne.h"

void __cdecl core_setedit_cpp_CDemonSet_showVdirBoxEditor_FUN_00583170(CDemonSet *this_ptr)
{
__asm {
        mov EBP,ESP
        sub ESP,0x25c
        sub EBP,0x7e
        push 0x648d37
        mov EDX,dword ptr [g_CEditorToolsPtr]
        push EDX
        call shape_edittool_cpp_CEditorTools_displayCenteredStatusMessage_FUN_0049e790
        add ESP,0x8
        mov ECX,dword ptr [EBP + 0x92]
        push ECX
        call core_set_cpp_CDemonSet_initScene_FUN_0056aa10
        mov EAX,dword ptr [EBP + 0x92]
        add ESP,0x4
        mov dword ptr [EAX + 0x14d154],0x0
        call wincore_windll_cpp_clearScreen_FUN_005b3e70
        call engine_2d_c_clearInputAndWait_FUN_00403260
        lea EAX,[EBP + 0xfffffe4a]
        push EAX
        xor EBX,EBX
        call core_slew_cpp_CSlew_init_FUN_005a2060
        mov EAX,0x42200000
        mov EDX,dword ptr [g_CGamePtr]
        add ESP,0x4
        mov dword ptr [EBP + -0x3a],EBX
        mov dword ptr [EBP + -0x36],EBX
        push EDX
        mov dword ptr [EBP + -0x32],EBX
        mov dword ptr [EBP + 0x42],EAX
        call core_game_cpp_CGame_saveClockTime_FUN_004d7d80
        mov EAX,dword ptr [EBP + 0x92]
        add EAX,0x15b414
        mov dword ptr [EAX + 0xfffff878],0x1
        mov dword ptr [EAX + 0xfffff87c],0x1
        mov dword ptr [EAX + 0xfffff870],0x1
        mov dword ptr [EBP + 0x4e],EAX
        mov EAX,dword ptr [EBP + 0x92]
        add EAX,0x4
        mov dword ptr [EBP + 0x2a],EAX
        mov EAX,0x32758e8
        add EAX,0x4
        mov dword ptr [EBP + 0x22],EAX
        mov EAX,0x32758e8
        add EAX,0x8
        mov dword ptr [EBP + 0x76],EBX
        mov dword ptr [EBP + 0x1e],EAX
        mov EAX,dword ptr [EBP + 0x4e]
        add ESP,0x4
        mov dword ptr [EBP + 0x4a],EAX
    LAB_00583244:
        mov EBX,dword ptr [EBP + 0x92]
        mov EDI,dword ptr [EBP + 0x76]
        mov EAX,[g_MouseButtonFlags]
        push EBX
        xor ESI,ESI
        mov dword ptr [EBP + 0x26],EAX
        call core_setdir_cpp_CDemonSet_buildVdirBoxGroups_FUN_00576710
        mov dword ptr [EBP + 0x52],ESI
        add ESP,0x4
        test EDI,EDI
        jl LAB_0058327a
        cmp EDI,dword ptr [EBX + 0x15b410]
        jge LAB_0058327a
        imul EAX,EDI,0x44
        mov EDX,dword ptr [EBP + 0x4e]
        add EDX,EAX
        mov dword ptr [EBP + 0x52],EDX
    LAB_0058327a:
        call wincore_winrun_cpp_doNothing_FUN_005f2f80
        call wincore_windll_cpp_clearScreen_FUN_005b3e70
        mov ESI,dword ptr [EBP + 0x52]
        call wincore_windll_cpp_clearZBuffer_FUN_005b3ed4
        test ESI,ESI
        jz LAB_0058338c
        lea EAX,[EBP + 0xfffffe56]
        lea EDX,[EBP + -0x3a]
        cmp EAX,EDX
        jz LAB_005832bc
        mov EAX,dword ptr [EBP + -0x3a]
        mov dword ptr [EBP + 0xfffffe56],EAX
        mov EAX,dword ptr [EBP + -0x36]
        mov dword ptr [EBP + 0xfffffe5a],EAX
        mov EAX,dword ptr [EBP + -0x32]
        mov dword ptr [EBP + 0xfffffe5e],EAX
    LAB_005832bc:
        lea EAX,[EBP + 0xfffffeb2]
        push EAX
        mov EAX,dword ptr [EBP + 0x52]
        add EAX,0x18
        push EAX
        call core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
        fld float ptr [EBP + 0xfffffe5a]
        add ESP,0x8
        fadd float ptr [EAX + 0x4]
        lea EAX,[EBP + 0xfffffe56]
        push EAX
        lea EAX,[EBP + 0xfffffe22]
        push EAX
        fstp float ptr [EBP + 0xfffffe5a]
        call core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
        fld float ptr [EBP + 0x42]
        fchs
        fstp float ptr [EBP + 0x7a]
        mov EAX,dword ptr [EBP + 0x7a]
        add ESP,0x8
        mov dword ptr [EBP + 0xfffffec6],EAX
        lea EAX,[EBP + 0xfffffebe]
        push EAX
        lea EAX,[EBP + 0xffffff5a]
        push EAX
        lea EAX,[EBP + 0xfffffe22]
        xor EDI,EDI
        push EAX
        mov dword ptr [EBP + 0xfffffebe],EDI
        mov dword ptr [EBP + 0xfffffec2],EDI
        call core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
        mov EDX,dword ptr [EBP + 0x52]
        fld float ptr [EAX]
        fadd float ptr [EDX]
        fstp float ptr [EBP + 0xfffffeca]
        fld float ptr [EAX + 0x4]
        fadd float ptr [EDX + 0x4]
        add ESP,0xc
        fstp float ptr [EBP + 0xfffffece]
        fld float ptr [EAX + 0x8]
        lea EAX,[EBP + 0xfffffe4a]
        fadd float ptr [EDX + 0x8]
        lea EDX,[EBP + 0xfffffeca]
        fstp float ptr [EBP + 0xfffffed2]
        cmp EAX,EDX
        jz LAB_0058338c
        mov EAX,dword ptr [EBP + 0xfffffeca]
        mov dword ptr [EBP + 0xfffffe4a],EAX
        mov EAX,dword ptr [EBP + 0xfffffece]
        mov dword ptr [EBP + 0xfffffe4e],EAX
        mov EAX,dword ptr [EBP + 0xfffffed2]
        mov dword ptr [EBP + 0xfffffe52],EAX
    LAB_0058338c:
        mov EDX,0x41e00000
        lea EAX,[EBP + 0xfffffe4a]
        mov dword ptr [EBP + 0xfffffe62],EDX
        cmp EAX,0x32758e8
        jz LAB_005833c5
        mov EAX,dword ptr [EBP + 0xfffffe4a]
        mov [g_CDemonCameraInstance.base.position],EAX
        mov EAX,dword ptr [EBP + 0xfffffe4e]
        mov [g_CDemonCameraInstance.base.position+4],EAX
        mov EAX,dword ptr [EBP + 0xfffffe52]
        mov [g_CDemonCameraInstance.base.position+8],EAX
    LAB_005833c5:
        lea EAX,[EBP + 0xfffffe56]
        push EAX
        push 0x32758f4
        call core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
        add ESP,0x8
        push 0x1
        mov EAX,dword ptr [EBP + 0xfffffe62]
        push 0x32758e4
        mov [g_CDemonCameraInstance.base.focal_length],EAX
        call core_dcamera_cpp_CDemonCamera_beginScene_FUN_0044c430
        add ESP,0x8
        push 0x0
        mov ECX,dword ptr [EBP + 0x92]
        push 0x43160000
        push ECX
        call core_set_cpp_CDemonSet_renderSceneGeometry_FUN_0056a190
        add ESP,0xc
        push 0x1
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        mov ESI,0xffffffff
        push EBX
        mov EDI,dword ptr [EBP + 0x76]
        mov dword ptr [EBP + 0x66],ESI
        call engine_drender_cpp_CDemonRenderer_enableFaceCapture_FUN_0048caa0
        add ESP,0x8
        test EDI,EDI
        jl LAB_00583450
        mov EDX,dword ptr [EBP + 0x92]
        cmp EDI,dword ptr [EDX + 0x15b410]
        jge LAB_00583450
        mov ESI,dword ptr [EBP + 0x92]
    LAB_0058343d:
        mov dword ptr [EBP + 0x66],EDI
        imul EAX,dword ptr [EBP + 0x66],0x44
        add EAX,ESI
        mov EDI,dword ptr [EAX + 0x15b454]
        test EDI,EDI
        jge LAB_0058343d
    LAB_00583450:
        mov EAX,dword ptr [EBP + 0x92]
        mov EDX,dword ptr [EAX + 0x15b410]
        xor ESI,ESI
        test EDX,EDX
        jle LAB_00583651
        mov EAX,dword ptr [EBP + 0x4a]
        add EAX,0x18
        mov dword ptr [EBP + 0x5a],EAX
    LAB_0058346f:
        imul EDI,ESI,0x44
        lea EAX,[EBP + 0xfffffefa]
        push EAX
        mov EBX,dword ptr [EBP + 0x5a]
        mov ECX,dword ptr [EBP + 0x4a]
        push EBX
        add EDI,ECX
        call core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
        add ESP,0x8
        push EDI
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        add ESP,0x8
        push 0x0
        lea EAX,[EBP + 0xfffffefa]
        push EAX
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        mov ECX,dword ptr [EBP + 0x76]
        add ESP,0xc
        cmp ESI,ECX
        jz LAB_005834db
        mov ECX,dword ptr [EBP + 0x92]
        mov EDX,ESI
    LAB_005834c4:
        imul EAX,EDX,0x44
        add EAX,ECX
        mov EBX,dword ptr [EAX + 0x15b454]
        test EBX,EBX
        jl LAB_0058357e
        mov EDX,EBX
        jmp LAB_005834c4
    LAB_005834db:
        lea EBX,[EDI + 0xc]
        push 0x0
        lea EAX,[EBP + 0xffffff36]
        fld float ptr [EBX]
        push 0xff
        fchs
        fstp float ptr [EBP + 0xffffff36]
        push 0x0
        fld float ptr [EBX + 0x4]
        push 0x3f000000
        fchs
        fstp float ptr [EBP + 0xffffff3a]
        push EBX
        fld float ptr [EBX + 0x8]
        fchs
        push EAX
        fstp float ptr [EBP + 0xffffff3e]
        call core_setedit_cpp_renderColoredBox_FUN_005817d0
        add ESP,0x18
        mov EDI,dword ptr [g_CEditorToolsPtr]
        push EDI
        call shape_edittool_cpp_CEditorTools_getTimeCycledColorByte_FUN_004a1330
        add ESP,0x4
        push EAX
        mov EDI,EAX
        mov EAX,[g_CEditorToolsPtr]
        push 0x40000000
        push EAX
        call shape_edittool_cpp_CEditorTools_draw3DAxisLabels_FUN_004a1ca0
        fld float ptr [EBX]
        lea EAX,[EBP + 0xffffff66]
        mov EDX,dword ptr [g_CEditorToolsPtr]
        add ESP,0xc
        fchs
        fstp float ptr [EBP + 0xffffff66]
        push EDI
        fld float ptr [EBX + 0x4]
        fchs
        push EBX
        fstp float ptr [EBP + 0xffffff6a]
        fld float ptr [EBX + 0x8]
        push EAX
        fchs
        push EDX
        fstp float ptr [EBP + 0xffffff6e]
        call shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
        add ESP,0x10
        jmp LAB_00583624
    LAB_0058357e:
        lea EBX,[EDI + 0xc]
        cmp EDX,dword ptr [EBP + 0x66]
        jnz LAB_005835e6
        fld float ptr [EBX]
        push 0x0
        lea EAX,[EBP + -0x6a]
        fchs
        fstp float ptr [EBP + -0x6a]
        push 0x80
        fld float ptr [EBX + 0x4]
        fchs
        push 0x0
        fstp float ptr [EBP + -0x66]
        push 0x3e99999a
        fld float ptr [EBX + 0x8]
        push EBX
        fchs
        push EAX
        fstp float ptr [EBP + -0x62]
        call core_setedit_cpp_renderColoredBox_FUN_005817d0
        fld float ptr [EBX]
        lea EAX,[EBP + 0x2]
        add ESP,0x18
        fchs
        fstp float ptr [EBP + 0x2]
        push 0x2
        fld float ptr [EBX + 0x4]
        fchs
        push EBX
        fstp float ptr [EBP + 0x6]
        fld float ptr [EBX + 0x8]
        push EAX
        mov EAX,[g_CEditorToolsPtr]
        fchs
        push EAX
        fstp float ptr [EBP + 0xa]
        call shape_edittool_cpp_CEditorTools_draw3DWireframeCube_FUN_004a2050
        add ESP,0x10
        jmp LAB_00583624
    LAB_005835e6:
        fld float ptr [EBX]
        push 0xff
        lea EAX,[EBP + 0xffffff4e]
        fchs
        fstp float ptr [EBP + 0xffffff4e]
        push 0x0
        fld float ptr [EBX + 0x4]
        fchs
        push 0x0
        fstp float ptr [EBP + 0xffffff52]
        push 0x3e4ccccd
        fld float ptr [EBX + 0x8]
        push EBX
        fchs
        push EAX
        fstp float ptr [EBP + 0xffffff56]
        call core_setedit_cpp_renderColoredBox_FUN_005817d0
        add ESP,0x18
    LAB_00583624:
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        mov EBX,dword ptr [EBP + 0x5a]
        inc ESI
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720
    LAB_00583651:
        xor EAX,EAX
        mov dword ptr [EBP + 0x5e],EAX
        mov EAX,dword ptr [EBP + 0x92]
        cmp dword ptr [EAX],0x0
        jle LAB_00583ad6
        mov EAX,dword ptr [EBP + 0x2a]
        add EAX,0x10c
        mov dword ptr [EBP + 0x62],EAX
        mov EAX,dword ptr [EBP + 0x2a]
        add EAX,0x100
        mov dword ptr [EBP + 0x6e],EAX
    LAB_0058367b:
        mov EBX,dword ptr [EBP + 0x6e]
        push EBX
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_processCameraRelativeVertex_FUN_0048c450
        add ESP,0x8
        push 0x0
        mov EDI,dword ptr [EBP + 0x62]
        push EDI
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        mov ESI,0x4
        mov EDI,0x1
        call engine_drender_cpp_CDemonRenderer_applyScaledTransform_FUN_0048c4f0
        mov EDX,dword ptr [EBP + 0x76]
        add ESP,0xc
        test EDX,EDX
        jl LAB_005836d9
        mov EAX,EDX
        mov EDX,dword ptr [EBP + 0x92]
        cmp EAX,dword ptr [EDX + 0x15b410]
        jge LAB_005836d9
        push EBX
        push EAX
        push EDX
        call core_setdir_cpp_CDemonSet_isPointInVdirGroup_FUN_00576340
        add ESP,0xc
        test EAX,EAX
        jz LAB_005836d9
        mov ESI,0xfb
        xor EDI,EDI
    LAB_005836d9:
        mov ECX,0xbf800000
        mov EAX,0x40000000
        lea EBX,[EBP + -0x52]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov dword ptr [EBP + 0xffffff2a],ECX
        mov dword ptr [EBP + 0xffffff32],EAX
        lea EAX,[EBP + 0xffffff2a]
        mov dword ptr [EBP + 0xffffff2e],ECX
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + -0x52]
        push EAX
        mov EAX,dword ptr [EDX]
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov DH,byte ptr [EBP + 0xffffff2d]
        lea EBX,[EBP + -0x76]
        lea EAX,[EBP + 0xffffff2a]
        xor DH,0x80
        add ESP,0x8
        mov byte ptr [EBP + 0xffffff2d],DH
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + -0x76]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x30
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov BL,byte ptr [EBP + 0xffffff31]
        lea EAX,[EBP + 0xffffff2a]
        xor BL,0x80
        add ESP,0x8
        mov byte ptr [EBP + 0xffffff31],BL
        lea EBX,[EBP + 0xfffffed6]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0xfffffed6]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x60
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov BH,byte ptr [EBP + 0xffffff2d]
        lea EAX,[EBP + 0xffffff2a]
        xor BH,0x80
        add ESP,0x8
        mov byte ptr [EBP + 0xffffff2d],BH
        lea EBX,[EBP + -0x22]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + -0x22]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x90
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov EDX,0xbe99999a
        lea EAX,[EBP + 0xffffff2a]
        add ESP,0x8
        xor EBX,EBX
        mov dword ptr [EBP + 0xffffff2a],EDX
        mov dword ptr [EBP + 0xffffff2e],EDX
        mov dword ptr [EBP + 0xffffff32],EBX
        lea EBX,[EBP + 0xfffffeee]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0xfffffeee]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0xc0
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov CL,byte ptr [EBP + 0xffffff2d]
        lea EBX,[EBP + 0xffffff1e]
        lea EAX,[EBP + 0xffffff2a]
        add ESP,0x8
        xor CL,0x80
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        mov byte ptr [EBP + 0xffffff2d],CL
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0xffffff1e]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0xf0
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov CH,byte ptr [EBP + 0xffffff31]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        xor CH,0x80
        add ESP,0x8
        mov byte ptr [EBP + 0xffffff31],CH
        lea EBX,[EBP + 0xffffff42]
        lea EAX,[EBP + 0xffffff2a]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + 0xffffff42]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x120
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        mov AL,byte ptr [EBP + 0xffffff2d]
        lea EBX,[EBP + -0x16]
        xor AL,0x80
        add ESP,0x8
        mov byte ptr [EBP + 0xffffff2d],AL
        lea EAX,[EBP + 0xffffff2a]
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        fld float ptr [EAX]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX]
        fld float ptr [EAX + 0x4]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fmul float ptr [FLOAT_00662a28]
        fistp dword ptr [EBX + 0x8]
        lea EAX,[EBP + -0x16]
        push EAX
        mov EAX,dword ptr [EDX]
        add EAX,0x150
        push EAX
        call wincore_windll_cpp_transformAndProjectPoint_FUN_005b575c
        add ESP,0x8
        test EDI,EDI
        jz LAB_0058415a
        push ESI
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_setCurrentPolygonColor_FUN_0048c960
        add ESP,0x8
        push 0x1
        push 0x0
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x2
        push 0x1
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x3
        push 0x2
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x0
        push 0x3
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x5
        push 0x4
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        push EBX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x6
        push 0x5
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x7
        push 0x6
        mov EDI,dword ptr [g_CDemonRendererPtr2]
        push EDI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x4
        push 0x7
        mov EAX,[g_CDemonRendererPtr2]
        push EAX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x4
        push 0x0
        mov EDX,dword ptr [g_CDemonRendererPtr2]
        push EDX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x5
        push 0x1
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        push ECX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x6
        push 0x2
        mov EBX,dword ptr [g_CDemonRendererPtr2]
        push EBX
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
        push 0x7
        push 0x3
        mov ESI,dword ptr [g_CDemonRendererPtr2]
        push ESI
        call engine_drender_cpp_CDemonRenderer_clipAndDrawLine3D_FUN_0048caf0
        add ESP,0xc
    LAB_00583a98:
        mov ECX,dword ptr [g_CDemonRendererPtr2]
        mov EBX,dword ptr [EBP + 0x62]
        push ECX
        mov ESI,dword ptr [EBP + 0x6e]
        mov EDI,dword ptr [EBP + 0x5e]
        call engine_drender_cpp_CDemonRenderer_matrixPop_FUN_0050d720
    LAB_00583ad6:
        push 0x0
        push 0x32758e4
        call core_dcamera_cpp_CDemonCamera_endScene_FUN_0044cb80
        add ESP,0x8
        push 0x0
        mov EBX,dword ptr [g_CEditorToolsPtr]
        push EBX
        call shape_edittool_cpp_CEditorTools_setMousePointerType_FUN_004a1380
        add ESP,0x8
        call wincore_wddvmem_cpp_swapBuffers_FUN_005eda20
        mov ESI,dword ptr [g_CGamePtr]
        push ESI
        call core_game_cpp_CGame_updateDT_FUN_004d7d90
        add ESP,0x4
        mov EAX,[g_CKeysPtr]
        push 0x1
        mov EDX,dword ptr [EAX]
        push EAX
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jnz LAB_005848b2
        cmp dword ptr [EBP + 0x52],0x0
        jnz LAB_005843ab
        lea EAX,[EBP + 0xfffffe4a]
        push EAX
        call core_slew_cpp_CSlew_processInput_FUN_005a20b0
        add ESP,0x4
    LAB_00583b3b:
        push 0xf
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583b75
        push 0x2a
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_0058476d
        mov EDI,dword ptr [EBP + 0x76]
        dec EDI
        mov dword ptr [EBP + 0x76],EDI
        test EDI,EDI
        jl LAB_00584758
    LAB_00583b75:
        push 0x17
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583c2f
        mov EAX,dword ptr [EBP + 0x92]
        mov EDX,dword ptr [EAX + 0x15b410]
        cmp EDX,0xfa
        jge LAB_00584790
        mov dword ptr [EBP + 0x76],EDX
        imul EBX,EDX,0x44
        mov EDI,dword ptr [EBP + 0x4e]
        lea EAX,[EBP + 0xfffffe4a]
        add EBX,EDI
        cmp EBX,EAX
        jz LAB_00583bd4
        mov EAX,dword ptr [EBP + 0xfffffe4a]
        mov dword ptr [EBX],EAX
        mov EAX,dword ptr [EBP + 0xfffffe4e]
        mov dword ptr [EBX + 0x4],EAX
        mov EAX,dword ptr [EBP + 0xfffffe52]
        mov dword ptr [EBX + 0x8],EAX
    LAB_00583bd4:
        mov EAX,dword ptr [EBP + 0xfffffe56]
        mov dword ptr [EBP + -0x2e],EAX
        mov EAX,dword ptr [EBP + 0xfffffe5a]
        mov dword ptr [EBP + -0x2a],EAX
        mov EAX,dword ptr [EBP + 0xfffffe5e]
        mov dword ptr [EBP + -0x26],EAX
        xor EAX,EAX
        mov dword ptr [EBP + -0x26],EAX
        mov dword ptr [EBP + -0x2e],EAX
        lea EAX,[EBP + -0x2e]
        push EAX
        lea EAX,[EBX + 0x18]
        push EAX
        call core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
        mov dword ptr [EBX + 0xc],0x41200000
        mov dword ptr [EBX + 0x10],0x41200000
        mov EAX,dword ptr [EBP + 0x92]
        mov dword ptr [EBX + 0x14],0x41200000
        mov ECX,dword ptr [EAX + 0x15b410]
        inc ECX
        add ESP,0x8
        mov dword ptr [EAX + 0x15b410],ECX
    LAB_00583c2f:
        push 0x13
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583c6f
        mov EAX,dword ptr [EBP + 0x92]
        mov EBX,dword ptr [EAX + 0x15b410]
        cmp EBX,0xfa
        jl LAB_005847a9
        push 0x648d86
        mov EDX,dword ptr [g_CEditorToolsPtr]
        push EDX
    LAB_00583c67:
        call shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
        add ESP,0x8
    LAB_00583c6f:
        push 0x20
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583d09
        mov ECX,dword ptr [EBP + 0x76]
        test ECX,ECX
        jl LAB_00583d09
        mov EDX,dword ptr [EBP + 0x92]
        cmp ECX,dword ptr [EDX + 0x15b410]
        jge LAB_00583d09
        push 0x648ddf
        mov ESI,dword ptr [g_CEditorToolsPtr]
        push ESI
        call shape_edittool_cpp_CEditorTools_showConfirmationDialog_FUN_0049f060
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583d09
        mov EAX,dword ptr [EBP + 0x92]
        mov EDI,dword ptr [EAX + 0x15b410]
        dec EDI
        mov EDX,dword ptr [EBP + 0x76]
        mov dword ptr [EAX + 0x15b410],EDI
        mov EAX,EDI
        sub EAX,EDX
        imul EAX,EAX,0x44
        push EAX
        lea EAX,[EDX + 0x1]
        imul EAX,EAX,0x44
        mov ECX,dword ptr [EBP + 0x4e]
        add EAX,ECX
        mov EBX,EDX
        push EAX
        imul EAX,EDX,0x44
        add EAX,ECX
        push EAX
        call crt_string_c_memmove_FUN_005fe5e0
        mov EDX,dword ptr [EBP + 0x92]
        mov EAX,EBX
        mov EDI,dword ptr [EDX + 0x15b410]
        add ESP,0xc
        cmp EAX,EDI
        jl LAB_00583d09
        xor EAX,EAX
        mov dword ptr [EBP + 0x76],EAX
    LAB_00583d09:
        push 0x31
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583d24
        mov dword ptr [EBP + 0x76],0xffffffff
    LAB_00583d24:
        push 0x3b
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00583f58
        call wincore_windll_cpp_clearScreen_FUN_005b3e70
        mov ECX,dword ptr [g_WindowWidth]
        imul EDX,ECX,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        push 0x0
        push EAX
        push 0x648c63
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        mov ESI,0xa
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x0
        add EAX,EBX
        push EAX
        push 0x648c4d
        call engine_2d_c_drawText_FUN_00401fd0
        mov EBX,dword ptr [g_WindowWidth]
        imul EDX,EBX,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        add ESP,0xc
        push 0xb
        push EAX
        push 0x648c6f
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0xb
        add EAX,EBX
        push EAX
        push 0x648c66
        call engine_2d_c_drawText_FUN_00401fd0
        mov ESI,dword ptr [g_WindowWidth]
        imul EDX,ESI,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        add ESP,0xc
        push 0x16
        push EAX
        push 0x648c80
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        mov ESI,0xa
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x16
        add EAX,EBX
        push EAX
        push 0x648c73
        call engine_2d_c_drawText_FUN_00401fd0
        add ESP,0xc
        mov EDI,dword ptr [g_WindowWidth]
        imul EDX,EDI,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        push 0x21
        push EAX
        push 0x648c95
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x21
        add EAX,EBX
        push EAX
        push 0x648c8a
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        imul EDX,EAX,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        add ESP,0xc
        push 0x2c
        push EAX
        push 0x648ca2
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x2c
        add EAX,EBX
        push EAX
        push 0x648c97
        call engine_2d_c_drawText_FUN_00401fd0
        mov ECX,dword ptr [g_WindowWidth]
        imul EDX,ECX,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        add ESP,0xc
        push 0x37
        push EAX
        push 0x648cb1
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x37
        add EAX,EBX
        push EAX
        push 0x648ca4
        call engine_2d_c_drawText_FUN_00401fd0
        mov EBX,dword ptr [g_WindowWidth]
        imul EDX,EBX,0x0
        mov EAX,EDX
        sar EDX,0x1f
        sub EAX,EDX
        sar EAX,0x1
        add ESP,0xc
        push 0x42
        push EAX
        push 0x648cc1
        mov EBX,EAX
        call engine_2d_c_drawText_FUN_00401fd0
        mov EAX,[g_WindowWidth]
        mov EDX,EAX
        sar EDX,0x1f
        idiv ESI
        add ESP,0xc
        push 0x42
        add EAX,EBX
        push EAX
        push 0x648cb3
        call engine_2d_c_drawText_FUN_00401fd0
        add ESP,0xc
        push 0x63
        push 0x0
        push 0x648cc3
        call engine_2d_c_drawText_FUN_00401fd0
        add ESP,0xc
        push 0x6e
        push 0x0
        push 0x648cfb
        call engine_2d_c_drawText_FUN_00401fd0
        add ESP,0xc
        call engine_2d_c_clearInputAndWait_FUN_00403260
        call wincore_wddvmem_cpp_swapBuffers_FUN_005eda20
        mov ESI,dword ptr [g_CKeysPtr]
        push ESI
        call engine_keys_cpp_CKeys_getInputKey_FUN_00502460
        add ESP,0x4
        call engine_2d_c_clearInputAndWait_FUN_00403260
    LAB_00583f58:
        test byte ptr [EBP + 0x26],0x1
        jz LAB_00583244
        test byte ptr [g_MouseButtonFlags],0x1
        jnz LAB_00583244
        mov EAX,[g_CDemonCameraInstance.base.position]
        mov dword ptr [EBP + 0xffffff06],EAX
        mov EAX,dword ptr [EBP + 0x22]
        mov EAX,dword ptr [EAX]
        mov dword ptr [EBP + 0xffffff0a],EAX
        mov EAX,dword ptr [EBP + 0x1e]
        mov EDI,dword ptr [g_MouseY]
        mov EAX,dword ptr [EAX]
        push EDI
        mov dword ptr [EBP + 0xffffff0e],EAX
        mov EAX,[g_MouseX]
        push EAX
        lea EAX,[EBP + -0x46]
        push EAX
        push 0x32758e4
        call core_dcamera_cpp_CDemonCamera_screenToWorldDirection_FUN_0044d480
        fld float ptr [FLOAT_00648e2d]
        fld float ptr [EAX]
        fmul ST(1)
        fstp float ptr [EBP + 0xfffffea6]
        fld float ptr [EAX + 0x4]
        fmul ST(1)
        fstp float ptr [EBP + 0xfffffeaa]
        fmul float ptr [EAX + 0x8]
        xor ESI,ESI
        mov EDX,0x7149f2ca
        add ESP,0x10
        mov EAX,dword ptr [EBP + 0x92]
        fstp float ptr [EBP + 0xfffffeae]
        mov ECX,dword ptr [EAX + 0x15b410]
        mov dword ptr [EBP + 0x56],EDX
        test ECX,ECX
        jle LAB_00583244
        mov EAX,dword ptr [EBP + 0x4e]
        mov EBX,dword ptr [EBP + 0x4e]
        add EAX,0x18
        add EBX,0xc
        mov dword ptr [EBP + 0x72],EAX
    LAB_00583fff:
        imul EDI,ESI,0x44
        fld float ptr [EBP + 0xffffff06]
        fld float ptr [EBP + 0xffffff0a]
        fld float ptr [EBP + 0xffffff0e]
        mov ECX,dword ptr [EBP + 0x4e]
        lea EAX,[EBP + 0xfffffe9a]
        add EDI,ECX
        push EAX
        lea EAX,[EBP + 0xffffff7e]
        fxch ST(2)
        fsub float ptr [EDI]
        push EAX
        fstp float ptr [EBP + 0xfffffe9a]
        fsub float ptr [EDI + 0x4]
        mov EAX,dword ptr [EBP + 0x72]
        fstp float ptr [EBP + 0xfffffe9e]
        fsub float ptr [EDI + 0x8]
        push EAX
        fstp float ptr [EBP + 0xfffffea2]
        call core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
        add ESP,0xc
        lea EAX,[EBP + 0xfffffea6]
        push EAX
        lea EAX,[EBP + -0xa]
        push EAX
        mov EDX,dword ptr [EBP + 0x72]
        push EDX
        call core_dirmat_cpp_CMatrix3x3f_transformVectorTranspose_FUN_00472030
        fld float ptr [EBX]
        lea EDX,[EBP + 0xffffff72]
        lea EAX,[EBP + 0xfffffe82]
        add ESP,0xc
        fchs
        fstp float ptr [EBP + 0xffffff72]
        fld float ptr [EBX + 0x4]
        fchs
        fstp float ptr [EBP + 0xffffff76]
        fld float ptr [EBX + 0x8]
        fchs
        fstp float ptr [EBP + 0xffffff7a]
        cmp EAX,EDX
        jz LAB_005840ba
        mov EAX,dword ptr [EBP + 0xffffff72]
        mov dword ptr [EBP + 0xfffffe82],EAX
        mov EAX,dword ptr [EBP + 0xffffff76]
        mov dword ptr [EBP + 0xfffffe86],EAX
        mov EAX,dword ptr [EBP + 0xffffff7a]
        mov dword ptr [EBP + 0xfffffe8a],EAX
    LAB_005840ba:
        lea EAX,[EBP + 0xfffffe8e]
        add EDI,0xc
        cmp EAX,EDI
        jz LAB_005840e1
        mov EAX,dword ptr [EDI]
        mov dword ptr [EBP + 0xfffffe8e],EAX
        mov EAX,dword ptr [EDI + 0x4]
        mov dword ptr [EBP + 0xfffffe92],EAX
        mov EAX,dword ptr [EDI + 0x8]
        mov dword ptr [EBP + 0xfffffe96],EAX
    LAB_005840e1:
        push 0x0
        lea EAX,[EBP + -0xa]
        push EAX
        lea EAX,[EBP + 0xffffff7e]
        push EAX
        lea EAX,[EBP + 0xfffffe82]
        push EAX
        call core_box_cpp_CBoundingBox3D_doesRayIntersect_FUN_00420940
        fldz
        mov dword ptr [EBP + 0x7a],EAX
        add ESP,0x10
        mov EAX,dword ptr [EBP + 0x7a]
        mov dword ptr [EBP + 0x6a],EAX
        fld float ptr [EBP + 0x6a]
        fstp double ptr [EBP + 0x16]
        fcomp double ptr [EBP + 0x16]
        fnstsw AX
        sahf
        ja LAB_00584134
        fld1
        fcomp double ptr [EBP + 0x16]
        fnstsw AX
        sahf
        jbe LAB_00584134
        fld float ptr [EBP + 0x6a]
        fcomp float ptr [EBP + 0x56]
        fnstsw AX
        sahf
        jnc LAB_00584134
        mov EAX,dword ptr [EBP + 0x6a]
        mov dword ptr [EBP + 0x76],ESI
        mov dword ptr [EBP + 0x56],EAX
    LAB_00584134:
        mov EDI,dword ptr [EBP + 0x72]
        mov EAX,dword ptr [EBP + 0x92]
        add EBX,0x44
        inc ESI
        add EDI,0x44
        mov EDX,dword ptr [EAX + 0x15b410]
        mov dword ptr [EBP + 0x72],EDI
        cmp ESI,EDX
        jge LAB_00583244
        jmp LAB_00583fff
    LAB_0058415a:
        mov EAX,[g_CDemonRendererPtr2]
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        mov dword ptr [g_ActiveRenderColor],ESI
        lea ESI,[EAX + 0x30]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        mov EAX,[g_CDemonRendererPtr2]
        add ESP,0x60
        mov ECX,0xc
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xc0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        mov ESI,EAX
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0xf0]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x30]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x120]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x60]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        mov EAX,[g_CDemonRendererPtr2]
        sub ESP,0x30
        mov EAX,dword ptr [EAX]
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x150]
        rep movsd
        sub ESP,0x30
        mov ECX,0xc
        mov EDI,ESP
        lea ESI,[EAX + 0x90]
        rep movsd
        call engine_3d_c_clipAndDrawLine2D_FUN_00407d70
        add ESP,0x60
        jmp LAB_00583a98
    LAB_005843ab:
        mov EAX,[g_CGamePtr]
        mov EAX,dword ptr [EAX + 0x264]
        push 0x38
        mov dword ptr [EBP + 0x36],EAX
        mov dword ptr [EBP + 0x32],EAX
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_0058466c
        fld float ptr [EBP + 0x36]
        fmul double ptr [DOUBLE_00648e05]
    LAB_005843dc:
        fstp float ptr [EBP + 0x32]
    LAB_005843df:
        fld float ptr [EBP + 0x42]
        fmul double ptr [DOUBLE_00648e15]
        fld float ptr [EBP + 0x32]
        fld ST(0)
        fmul double ptr [DOUBLE_00648e0d]
        push 0x4a
        mov EAX,[g_CKeysPtr]
        fxch ST(2)
        fmulp
        push EAX
        mov EDX,dword ptr [EAX]
        fxch
        fstp float ptr [EBP + 0x3e]
        fstp float ptr [EBP + 0x2e]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_0058441b
        fld float ptr [EBP + -0x3a]
        fadd float ptr [EBP + 0x3e]
        fstp float ptr [EBP + -0x3a]
    LAB_0058441b:
        push 0x4e
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584437
        fld float ptr [EBP + -0x3a]
        fsub float ptr [EBP + 0x3e]
        fstp float ptr [EBP + -0x3a]
    LAB_00584437:
        push 0x52
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584453
        fld float ptr [EBP + -0x36]
        fadd float ptr [EBP + 0x3e]
        fstp float ptr [EBP + -0x36]
    LAB_00584453:
        push 0x53
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_0058446f
        fld float ptr [EBP + -0x36]
        fsub float ptr [EBP + 0x3e]
        fstp float ptr [EBP + -0x36]
    LAB_0058446f:
        push 0xd
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_0058448c
        fld float ptr [EBP + 0x42]
        fsub float ptr [EBP + 0x2e]
        fstp float ptr [EBP + 0x42]
    LAB_0058448c:
        push 0xc
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX + 0x4]
        add ESP,0x8
        test EAX,EAX
        jz LAB_005844a9
        fld float ptr [EBP + 0x42]
        fadd float ptr [EBP + 0x2e]
        fstp float ptr [EBP + 0x42]
    LAB_005844a9:
        fld float ptr [EBP + -0x3a]
        fcomp double ptr [DOUBLE_00648e35]
        fnstsw AX
        sahf
        jnc LAB_005844be
        mov dword ptr [EBP + -0x3a],0xbfc90fdb
    LAB_005844be:
        fld float ptr [EBP + -0x3a]
        fcomp double ptr [DOUBLE_00648e0d]
        fnstsw AX
        sahf
        jbe LAB_005844d3
        mov dword ptr [EBP + -0x3a],0x3fc90fdb
    LAB_005844d3:
        fld float ptr [EBP + -0x36]
        fcomp double ptr [DOUBLE_00648e35]
        fnstsw AX
        sahf
        jnc LAB_005844ed
        fld float ptr [EBP + -0x36]
        fadd float ptr [FLOAT_00648e41]
        fstp float ptr [EBP + -0x36]
    LAB_005844ed:
        fld float ptr [EBP + -0x36]
        fcomp double ptr [DOUBLE_00648e0d]
        fnstsw AX
        sahf
        jbe LAB_00584507
        fld float ptr [EBP + -0x36]
        fadd float ptr [FLOAT_00648e3d]
        fstp float ptr [EBP + -0x36]
    LAB_00584507:
        fld float ptr [EBP + 0x42]
        fcomp double ptr [DOUBLE_00648e15]
        fnstsw AX
        sahf
        jnc LAB_0058451c
        mov dword ptr [EBP + 0x42],0x3f000000
    LAB_0058451c:
        push 0x1d
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584695
        mov EAX,[g_CGamePtr]
        push 0x38
        fld float ptr [EAX + 0x264]
        mov EAX,[g_CKeysPtr]
        fmul double ptr [DOUBLE_00648e1d]
        push EAX
        mov EDX,dword ptr [EAX]
        fstp float ptr [EBP + 0x46]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584566
        fld float ptr [EBP + 0x46]
        fmul double ptr [DOUBLE_00648e25]
        fstp float ptr [EBP + 0x46]
    LAB_00584566:
        push 0x4b
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584585
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0xc]
        fsub float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0xc]
    LAB_00584585:
        push 0x4d
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_005845a4
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0xc]
        fadd float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0xc]
    LAB_005845a4:
        push 0x1e
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_005845c3
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x10]
        fsub float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0x10]
    LAB_005845c3:
        push 0x10
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_005845e2
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x10]
        fadd float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0x10]
    LAB_005845e2:
        push 0x50
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584601
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x14]
        fsub float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0x14]
    LAB_00584601:
        push 0x48
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_00584620
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x14]
        fadd float ptr [EBP + 0x46]
        fstp float ptr [EAX + 0x14]
    LAB_00584620:
        mov EAX,dword ptr [EBP + 0x52]
        mov EDI,0x3f800000
        mov EDX,dword ptr [EAX + 0xc]
        mov dword ptr [EBP + 0x3a],EDI
        cmp EDX,EDI
        jge LAB_00584635
        mov dword ptr [EAX + 0xc],EDI
    LAB_00584635:
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x10]
        fcomp float ptr [EBP + 0x3a]
        fnstsw AX
        sahf
        jnc LAB_0058464c
        mov EDX,dword ptr [EBP + 0x52]
        mov EAX,dword ptr [EBP + 0x3a]
        mov dword ptr [EDX + 0x10],EAX
    LAB_0058464c:
        mov EAX,dword ptr [EBP + 0x52]
        fld float ptr [EAX + 0x14]
        fcomp float ptr [EBP + 0x3a]
        fnstsw AX
        sahf
        jnc LAB_00583b3b
        mov EDX,dword ptr [EBP + 0x52]
        mov EAX,dword ptr [EBP + 0x3a]
        mov dword ptr [EDX + 0x14],EAX
        jmp LAB_00583b3b
    LAB_0058466c:
        push 0x2a
        mov EAX,[g_CKeysPtr]
        push EAX
        mov EDX,dword ptr [EAX]
        call dword ptr [EDX]
        add ESP,0x8
        test EAX,EAX
        jz LAB_005843df
        fld float ptr [EBP + 0x36]
        fld ST(0)
        fmul double ptr [DOUBLE_00648dfd]
        fstp ST(1)
        jmp LAB_005843dc
    LAB_00584695:
        lea EAX,[EBP + 0xfffffe66]
        push EAX
        mov EBX,dword ptr [EBP + 0x52]
        call core_slew_cpp_CSlew_init_FUN_005a2060
        lea EAX,[EBP + 0xfffffe66]
        add ESP,0x4
        cmp EAX,EBX
        jz LAB_005846cb
        mov EAX,dword ptr [EBX]
        mov dword ptr [EBP + 0xfffffe66],EAX
        mov EAX,dword ptr [EBX + 0x4]
        mov dword ptr [EBP + 0xfffffe6a],EAX
        mov EAX,dword ptr [EBX + 0x8]
        mov dword ptr [EBP + 0xfffffe6e],EAX
    LAB_005846cb:
        lea EAX,[EBP + 0xffffff12]
        push EAX
        mov EAX,dword ptr [EBP + 0x52]
        add EAX,0x18
        push EAX
        call core_dirmat_cpp_CMatrix3x3f_getEulerAngles_FUN_00472160
        mov EDX,EAX
        lea EAX,[EBP + 0xfffffe72]
        add ESP,0x8
        cmp EAX,EDX
        jz LAB_00584707
        mov EAX,dword ptr [EDX]
        mov dword ptr [EBP + 0xfffffe72],EAX
        mov EAX,dword ptr [EDX + 0x4]
        mov dword ptr [EBP + 0xfffffe76],EAX
        mov EAX,dword ptr [EDX + 0x8]
        mov dword ptr [EBP + 0xfffffe7a],EAX
    LAB_00584707:
        lea EAX,[EBP + 0xfffffe66]
        push EAX
        mov ESI,dword ptr [EBP + 0x52]
        call core_slew_cpp_CSlew_processInput_FUN_005a20b0
        lea EAX,[EBP + 0xfffffe66]
        add ESP,0x4
        cmp EAX,ESI
        jz LAB_0058473d
        mov EAX,dword ptr [EBP + 0xfffffe66]
        mov dword ptr [ESI],EAX
        mov EAX,dword ptr [EBP + 0xfffffe6a]
        mov dword ptr [ESI + 0x4],EAX
        mov EAX,dword ptr [EBP + 0xfffffe6e]
        mov dword ptr [ESI + 0x8],EAX
    LAB_0058473d:
        lea EAX,[EBP + 0xfffffe72]
        push EAX
        mov EAX,dword ptr [EBP + 0x52]
        add EAX,0x18
        push EAX
        call core_dirmat_cpp_CMatrix3x3f_buildRotationMatrix_FUN_00471d30
        add ESP,0x8
        jmp LAB_00583b3b
    LAB_00584758:
        mov EAX,dword ptr [EBP + 0x92]
        mov EAX,dword ptr [EAX + 0x15b410]
        dec EAX
        mov dword ptr [EBP + 0x76],EAX
        jmp LAB_00583b75
    LAB_0058476d:
        mov ECX,dword ptr [EBP + 0x76]
        mov EDX,dword ptr [EBP + 0x92]
        inc ECX
        mov EBX,dword ptr [EDX + 0x15b410]
        mov dword ptr [EBP + 0x76],ECX
        cmp ECX,EBX
        jl LAB_00583b75
        mov dword ptr [EBP + 0x76],EAX
        jmp LAB_00583b75
    LAB_00584790:
        push 0x648d46
        mov ECX,dword ptr [g_CEditorToolsPtr]
        push ECX
        call shape_edittool_cpp_CEditorTools_showError_FUN_0049e740
        add ESP,0x8
        jmp LAB_00583c2f
    LAB_005847a9:
        mov ESI,dword ptr [EBP + 0x76]
        test ESI,ESI
        jl LAB_005847b4
        cmp ESI,EBX
        jl LAB_005847c4
    LAB_005847b4:
        push 0x648dbd
        mov EAX,[g_CEditorToolsPtr]
        push EAX
        jmp LAB_00583c67
    LAB_005847c4:
        imul EBX,EBX,0x44
        imul ESI,ESI,0x44
        mov EDX,dword ptr [EBP + 0x4e]
        add EBX,EDX
        add ESI,EDX
        mov EDX,EBX
        mov EAX,ESI
        cmp EBX,ESI
        jz LAB_005847e9
        mov ECX,dword ptr [ESI]
        mov dword ptr [EBX],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EBX + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EBX + 0x8],ECX
    LAB_005847e9:
        lea ESI,[EAX + 0xc]
        lea EBX,[EDX + 0xc]
        cmp EBX,ESI
        jz LAB_00584803
        mov ECX,dword ptr [ESI]
        mov dword ptr [EBX],ECX
        mov ECX,dword ptr [ESI + 0x4]
        mov dword ptr [EBX + 0x4],ECX
        mov ECX,dword ptr [ESI + 0x8]
        mov dword ptr [EBX + 0x8],ECX
    LAB_00584803:
        mov ECX,dword ptr [EAX + 0x18]
        mov dword ptr [EDX + 0x18],ECX
        mov ECX,dword ptr [EAX + 0x1c]
        mov dword ptr [EDX + 0x1c],ECX
        mov ECX,dword ptr [EAX + 0x20]
        mov dword ptr [EDX + 0x20],ECX
        mov ECX,dword ptr [EAX + 0x24]
        mov dword ptr [EDX + 0x24],ECX
        mov ECX,dword ptr [EAX + 0x28]
        mov dword ptr [EDX + 0x28],ECX
        mov ECX,dword ptr [EAX + 0x2c]
        mov dword ptr [EDX + 0x2c],ECX
        mov ECX,dword ptr [EAX + 0x30]
        mov dword ptr [EDX + 0x30],ECX
        mov ECX,dword ptr [EAX + 0x34]
        mov dword ptr [EDX + 0x34],ECX
        mov ECX,dword ptr [EAX + 0x38]
        mov dword ptr [EDX + 0x38],ECX
        mov EBX,dword ptr [EAX + 0x3c]
        mov dword ptr [EDX + 0x3c],EBX
        mov EAX,dword ptr [EAX + 0x40]
        mov dword ptr [EDX + 0x40],EAX
        mov EAX,dword ptr [EBP + 0x92]
        mov EAX,dword ptr [EAX + 0x15b410]
        mov dword ptr [EBP + 0x76],EAX
        imul EBX,EAX,0x44
        add EBX,dword ptr [EBP + 0x4e]
        mov EDX,dword ptr [EBP + 0x92]
        inc EAX
        mov dword ptr [EDX + 0x15b410],EAX
        lea EAX,[EBP + 0xfffffee2]
        push EAX
        lea EAX,[EBP + -0x5e]
        mov ECX,0x3f000000
        push EAX
        lea EAX,[EBX + 0x18]
        mov dword ptr [EBP + 0xfffffee2],ECX
        push EAX
        mov dword ptr [EBP + 0xfffffee6],ECX
        mov dword ptr [EBP + 0xfffffeea],ECX
        call core_dirmat_cpp_CMatrix3x3f_transformVector_FUN_00471fd0
        fld float ptr [EAX]
        fadd float ptr [EBX]
        fstp float ptr [EBX]
        fld float ptr [EAX + 0x4]
        fadd float ptr [EBX + 0x4]
        fstp float ptr [EBX + 0x4]
        fld float ptr [EAX + 0x8]
        fadd float ptr [EBX + 0x8]
        add ESP,0xc
        fstp float ptr [EBX + 0x8]
        jmp LAB_00583c6f
    LAB_005848b2:
        mov EDX,dword ptr [EBP + 0x92]
        push EDX
        call core_set_cpp_CDemonSet_clearLights_FUN_0056d2d0
        add ESP,0x4
        call engine_2d_c_clearInputAndWait_FUN_00403260
        mov EAX,dword ptr [EBP + 0x92]
        mov dword ptr [EAX + 0x15ac8c],0x0
        mov dword ptr [EAX + 0x15ac90],0x0
        mov dword ptr [EAX + 0x15ac84],0x0
        lea ESP,[EBP + 0x7e]
}
}
