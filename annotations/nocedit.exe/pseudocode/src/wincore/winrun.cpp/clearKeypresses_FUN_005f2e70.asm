; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl wincore_winrun_cpp_clearKeypresses_FUN_005f2e70(void)
;
;
; XREF[7]:
;   core_dmodel.cpp_CKeyFramedModel_showEditorMenu_FUN_0047cbc0 at 0047d815
;   core_script.cpp_CScript_processEditorInput_FUN_00565130 at 005653c1
;   engine_2d.c_clearInputAndWait_FUN_00403260 at 00403260
;   engine_keys.cpp_clearKeypresses_FUN_00502450 at 00502450
;   shape_design.c_showFacetPartEditor_FUN_0045f1d0 at 0045f320
;   shape_design.c_showPointEditor_FUN_0045c6c0 at 0045c6f9
;   shape_edittool.cpp_CInputString_handleKeyboardInput_FUN_0049d6c0 at 0049d82d
;
; Referenced Globals:
;   int g_InputReadIndex
;   int g_InputWriteIndex
;   int g_InputCountOld
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005f2e70
        ;   Label: wincore_winrun.cpp_clearKeypresses_FUN_005f2e70
    XOR EAX,EAX                         ; 005f2e72
    MOV dword ptr [0x03f96c1c],EDX      ; 005f2e74 | g_InputWriteIndex
    MOV dword ptr [0x03f96c18],EDX      ; 005f2e7a | g_InputReadIndex
    MOV dword ptr [0x03f96c20],EDX      ; 005f2e80 | g_InputCountOld
    RET                                 ; 005f2e86

