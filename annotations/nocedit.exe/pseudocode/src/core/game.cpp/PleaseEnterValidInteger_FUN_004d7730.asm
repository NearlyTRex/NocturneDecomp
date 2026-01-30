; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_game_cpp_PleaseEnterValidInteger_FUN_004d7730(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Enter_Movie_FPS_0062b161
;   TerminatedCString s_Enter_number_of_frames_t_0062b171
;   TerminatedCString s_Enter_image_width_0062b1bb
;   TerminatedCString s_Enter_image_height_0062b1cd
;   TerminatedCString s_Press_CTRL_V_to_begin_re_0062b1e0
;   CEditorTools* g_CEditorToolsPtr = 02cf1cd4
;   float g_MovieRecordingTargetFPS = 30
;   undefined4 DAT_0067b664
;   undefined4 DAT_0067b668
;   CEditorTools g_CEditorToolsInstance
;   int g_CheatFlags
;   int g_DebugRecording
;   int g_DebugRecordingParams
;   float FLOAT_02d831bc
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d7730
        ;   Label: core_game.cpp_PleaseEnterValidInteger_FUN_004d7730
    PUSH ESI                            ; 004d7731
    PUSH EDI                            ; 004d7732
    PUSH EBP                            ; 004d7733
    PUSH 0x1                            ; 004d7734
    PUSH 0x43700000                     ; 004d7736
    PUSH 0x3e800000                     ; 004d773b
    PUSH 0x1                            ; 004d7740
    PUSH 0x67b660                       ; 004d7742 | g_MovieRecordingTargetFPS
    PUSH 0x62b161                       ; 004d7747 | = "Enter Movie FPS"
    MOV EBX,dword ptr [0x00678a60]      ; 004d774c | g_CEditorToolsInstance | g_CEditorToolsPtr
    XOR EDX,EDX                         ; 004d7752
    PUSH EBX                            ; 004d7754 | g_CEditorToolsInstance
    MOV dword ptr [0x02d831b4],EDX      ; 004d7755 | g_DebugRecording
    MOV dword ptr [0x02d831bc],EDX      ; 004d775b | FLOAT_02d831bc
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0 ; 004d7761
        ;   XREF to: 004a00f0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_004a00f0(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d7766
    TEST EAX,EAX                        ; 004d7769
    JNZ 0x004d7772                      ; 004d776b
        ;   XREF to: 004d7772 (CONDITIONAL_JUMP)  ; LAB_004d7772
    POP EBP                             ; 004d776d
        ;   Label: LAB_004d776d
    POP EDI                             ; 004d776e
    POP ESI                             ; 004d776f
    POP EBX                             ; 004d7770
    RET                                 ; 004d7771
    PUSH 0x1                            ; 004d7772
        ;   Label: LAB_004d7772
    PUSH 0x1869f                        ; 004d7774
    PUSH 0x0                            ; 004d7779
    PUSH 0x1                            ; 004d777b
    PUSH 0x2d831b8                      ; 004d777d | g_DebugRecordingParams
    PUSH 0x62b171                       ; 004d7782 | = "Enter number of frames to record (or ..."
    MOV ESI,dword ptr [0x00678a60]      ; 004d7787 | g_CEditorToolsPtr
    PUSH ESI                            ; 004d778d | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004d778e
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d7793
    TEST EAX,EAX                        ; 004d7796
    JZ 0x004d776d                       ; 004d7798
        ;   XREF to: 004d776d (CONDITIONAL_JUMP)  ; LAB_004d776d
    PUSH 0x1                            ; 004d779a
    PUSH 0x270f                         ; 004d779c
    PUSH 0x1                            ; 004d77a1
    PUSH 0x1                            ; 004d77a3
    PUSH 0x67b664                       ; 004d77a5 | DAT_0067b664
    PUSH 0x62b1bb                       ; 004d77aa | = "Enter image width"
    MOV EDI,dword ptr [0x00678a60]      ; 004d77af | g_CEditorToolsPtr
    PUSH EDI                            ; 004d77b5 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004d77b6
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d77bb
    TEST EAX,EAX                        ; 004d77be
    JZ 0x004d776d                       ; 004d77c0
        ;   XREF to: 004d776d (CONDITIONAL_JUMP)  ; LAB_004d776d
    PUSH 0x1                            ; 004d77c2
    PUSH 0x270f                         ; 004d77c4
    PUSH 0x1                            ; 004d77c9
    PUSH 0x1                            ; 004d77cb
    PUSH 0x67b668                       ; 004d77cd | DAT_0067b668
    PUSH 0x62b1cd                       ; 004d77d2 | = "Enter image height"
    MOV EBP,dword ptr [0x00678a60]      ; 004d77d7 | g_CEditorToolsPtr
    PUSH EBP                            ; 004d77dd | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020 ; 004d77de
        ;   XREF to: 004a0020 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_004a0020(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004d77e3
    TEST EAX,EAX                        ; 004d77e6
    JZ 0x004d776d                       ; 004d77e8
        ;   XREF to: 004d776d (CONDITIONAL_JUMP)  ; LAB_004d776d
    PUSH 0x62b1e0                       ; 004d77ea | = "Press CTRL+V to begin recording."
    MOV EAX,[0x00678a60]                ; 004d77ef | g_CEditorToolsInstance | g_CEditorToolsPtr
    PUSH EAX                            ; 004d77f4 | g_CEditorToolsInstance
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0 ; 004d77f5
        ;   XREF to: 0049e6a0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0049e6a0(CEditorTools * this_ptr, char * format)
    MOV EDX,0x1                         ; 004d77fa
    ADD ESP,0x8                         ; 004d77ff
    MOV dword ptr [0x02d831b0],EDX      ; 004d7802 | g_CheatFlags
    POP EBP                             ; 004d7808
    POP EDI                             ; 004d7809
    POP ESI                             ; 004d780a
    POP EBX                             ; 004d780b
    RET                                 ; 004d780c

