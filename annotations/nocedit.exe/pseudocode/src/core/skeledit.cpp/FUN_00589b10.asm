; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_skeledit.cpp_FUN_00589b10()
;
;
; Referenced Globals:
;   TerminatedCString s_dixie_wav_00649df5
;   TerminatedCString s_LOD_generation_complete_00649dff
;   TerminatedCString s_LOD_generation_complete_00649e18
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   CEditorTools g_CEditorToolsPtr
;
; Called Functions:
;   crt_stack.c_stack_probe_FUN_005ff9f3
;   shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940
;   shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870
;   shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;   sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0
;   sound_sndmain.cpp_resetSoundDevice_FUN_005ab130
;   sound_sndmain.cpp_startSfx_FUN_005a8e90
;   wincore_winrun.cpp_getTime_FUN_005f2dc0
;
; *****************************************************************************

section .text

    PUSH 0x10                           ; 00589b10
        ;   Label: core_skeledit.cpp_FUN_00589b10
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00589b15 | uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)
    PUSH ESI                            ; 00589b1a
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 00589b1b | int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)
    PUSH 0x649df5                       ; 00589b20 | = "dixie.wav" | s_dixie_wav_00649df5 = dixie.wav
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00589b25 | uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589b2a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00589b2d
    TEST EDX,EDX                        ; 00589b31
    JNZ 0x00589b95                      ; 00589b33 | LAB_00589b95
        ;   XREF to: 00589b95 (CONDITIONAL_JUMP)
    PUSH EDI                            ; 00589b35
    PUSH EBX                            ; 00589b36
    PUSH EDX                            ; 00589b37
    MOV ECX,dword ptr [0x00678a60]      ; 00589b38 | CEditorTools * g_CEditorToolsPtr
    PUSH ECX                            ; 00589b3e | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 ; 00589b3f | void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
        ;   XREF to: 0049e940 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00589b44
    PUSH 0x649e18                       ; 00589b47 | = "LOD generation complete!" | s_LOD_generation_complete_00649e18 = LOD generation complete!
    MOV EBX,dword ptr [0x00678a60]      ; 00589b4c | CEditorTools * g_CEditorToolsPtr
    PUSH EBX                            ; 00589b52 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 ; 00589b53 | void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string)
        ;   XREF to: 0049e870 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00589b58
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00589b5b | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    XOR EBX,EBX                         ; 00589b60
    MOV ESI,EAX                         ; 00589b62
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00589b64 | int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00589b64
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)
    MOV EDX,EAX                         ; 00589b69
    SUB EAX,ESI                         ; 00589b6b
    TEST EAX,EAX                        ; 00589b6d
    JLE 0x00589b73                      ; 00589b6f | LAB_00589b73
        ;   XREF to: 00589b73 (CONDITIONAL_JUMP)
    ADD EBX,EAX                         ; 00589b71
    MOV ESI,EDX                         ; 00589b73
        ;   Label: LAB_00589b73
    CMP EBX,0x360000                    ; 00589b75
    JL 0x00589b64                       ; 00589b7b | LAB_00589b64
        ;   XREF to: 00589b64 (CONDITIONAL_JUMP)
    MOV EDI,dword ptr [0x00678a60]      ; 00589b7d | CEditorTools * g_CEditorToolsPtr
    PUSH EDI                            ; 00589b83 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00589b84 | void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00589b89
    POP EBX                             ; 00589b8c
    POP EDI                             ; 00589b8d
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589b8e | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    POP ESI                             ; 00589b93
    RET                                 ; 00589b94
    PUSH 0x649dff                       ; 00589b95 | = "LOD generation complete!" | s_LOD_generation_complete_00649dff = LOD generation complete!
        ;   Label: LAB_00589b95
    MOV ESI,dword ptr [0x00678a60]      ; 00589b9a | CEditorTools * g_CEditorToolsPtr
    PUSH ESI                            ; 00589ba0 | CEditorTools g_CEditorToolsPtr
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589ba1 | void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00589ba6
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589ba9 | int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)
    POP ESI                             ; 00589bae
    RET                                 ; 00589baf

