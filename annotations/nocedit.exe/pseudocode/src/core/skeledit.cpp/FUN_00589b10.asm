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
;   CEditorTools g_CEditorToolsInstance
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
    CALL crt_stack.c_stack_probe_FUN_005ff9f3 ; 00589b15
        ;   XREF to: 005ff9f3 (UNCONDITIONAL_CALL)  ; uint crt_stack.c_stack_probe_FUN_005ff9f3(uint stack_size)
    PUSH ESI                            ; 00589b1a
    CALL sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0 ; 00589b1b
        ;   XREF to: 005aaef0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_enableSoundSystem_FUN_005aaef0()
    PUSH 0x649df5                       ; 00589b20 | = "dixie.wav"
    CALL sound_sndmain.cpp_startSfx_FUN_005a8e90 ; 00589b25
        ;   XREF to: 005a8e90 (UNCONDITIONAL_CALL)  ; uint sound_sndmain.cpp_startSfx_FUN_005a8e90(char * filename)
    ADD ESP,0x4                         ; 00589b2a
    MOV EDX,dword ptr [ESP + 0x8]       ; 00589b2d
    TEST EDX,EDX                        ; 00589b31
    JNZ 0x00589b95                      ; 00589b33
        ;   XREF to: 00589b95 (CONDITIONAL_JUMP)  ; LAB_00589b95
    PUSH EDI                            ; 00589b35
    PUSH EBX                            ; 00589b36
    PUSH EDX                            ; 00589b37
    MOV ECX,dword ptr [0x00678a60]      ; 00589b38 | g_CEditorToolsPtr
    PUSH ECX                            ; 00589b3e | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940 ; 00589b3f
        ;   XREF to: 0049e940 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_createCenteredDialog_FUN_0049e940(CEditorTools * this_ptr, char * dialog_text)
    ADD ESP,0x8                         ; 00589b44
    PUSH 0x649e18                       ; 00589b47 | = "LOD generation complete!"
    MOV EBX,dword ptr [0x00678a60]      ; 00589b4c | g_CEditorToolsPtr
    PUSH EBX                            ; 00589b52 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870 ; 00589b53
        ;   XREF to: 0049e870 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_drawWindowStatusMessage_FUN_0049e870(CEditorTools * this_ptr, char * format_string)
    ADD ESP,0x8                         ; 00589b58
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00589b5b
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
    XOR EBX,EBX                         ; 00589b60
    MOV ESI,EAX                         ; 00589b62
    CALL wincore_winrun.cpp_getTime_FUN_005f2dc0 ; 00589b64
        ;   XREF to: 005f2dc0 (UNCONDITIONAL_CALL)  ; int wincore_winrun.cpp_getTime_FUN_005f2dc0()
        ;   Label: LAB_00589b64
    MOV EDX,EAX                         ; 00589b69
    SUB EAX,ESI                         ; 00589b6b
    TEST EAX,EAX                        ; 00589b6d
    JLE 0x00589b73                      ; 00589b6f
        ;   XREF to: 00589b73 (CONDITIONAL_JUMP)  ; LAB_00589b73
    ADD EBX,EAX                         ; 00589b71
    MOV ESI,EDX                         ; 00589b73
        ;   Label: LAB_00589b73
    CMP EBX,0x360000                    ; 00589b75
    JL 0x00589b64                       ; 00589b7b
        ;   XREF to: 00589b64 (CONDITIONAL_JUMP)  ; LAB_00589b64
    MOV EDI,dword ptr [0x00678a60]      ; 00589b7d | g_CEditorToolsPtr
    PUSH EDI                            ; 00589b83 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0 ; 00589b84
        ;   XREF to: 004a0dd0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_restoreWindowAndCleanup_FUN_004a0dd0(CEditorTools * this_ptr)
    ADD ESP,0x4                         ; 00589b89
    POP EBX                             ; 00589b8c
    POP EDI                             ; 00589b8d
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589b8e
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    POP ESI                             ; 00589b93
    RET                                 ; 00589b94
    PUSH 0x649dff                       ; 00589b95 | = "LOD generation complete!"
        ;   Label: LAB_00589b95
    MOV ESI,dword ptr [0x00678a60]      ; 00589b9a | g_CEditorToolsPtr
    PUSH ESI                            ; 00589ba0 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 00589ba1
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    ADD ESP,0x8                         ; 00589ba6
    CALL sound_sndmain.cpp_resetSoundDevice_FUN_005ab130 ; 00589ba9
        ;   XREF to: 005ab130 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_resetSoundDevice_FUN_005ab130()
    POP ESI                             ; 00589bae
    RET                                 ; 00589baf

