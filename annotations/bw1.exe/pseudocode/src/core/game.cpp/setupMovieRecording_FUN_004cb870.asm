; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_setupMovieRecording_FUN_004cb870(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c3eb54
;   undefined4 DAT_01cd0c38
;   undefined4 DAT_01cd0c3c
;   undefined4 DAT_01cd0c44
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb870
        ;   Label: core_game.cpp_setupMovieRecording_FUN_004cb870
    PUSH ESI                            ; 004cb871
    PUSH EDI                            ; 004cb872
    PUSH EBP                            ; 004cb873
    PUSH 0x1                            ; 004cb874
    PUSH 0x43700000                     ; 004cb876
    PUSH 0x3e800000                     ; 004cb87b
    PUSH 0x1                            ; 004cb880
    PUSH 0x61d968                       ; 004cb882
    PUSH 0x5e1290                       ; 004cb887
    MOV EBX,dword ptr [0x0061abc0]      ; 004cb88c | g_CEditorToolsPtr
    XOR EDX,EDX                         ; 004cb892
    PUSH EBX                            ; 004cb894
    MOV dword ptr [0x01cd0c3c],EDX      ; 004cb895 | DAT_01cd0c3c
    MOV dword ptr [0x01cd0c44],EDX      ; 004cb89b | DAT_01cd0c44
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70 ; 004cb8a1
        ;   XREF to: 00495e70 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00495e70(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004cb8a6
    TEST EAX,EAX                        ; 004cb8a9
    JNZ 0x004cb8b2                      ; 004cb8ab
        ;   XREF to: 004cb8b2 (CONDITIONAL_JUMP)  ; LAB_004cb8b2
    POP EBP                             ; 004cb8ad
        ;   Label: LAB_004cb8ad
    POP EDI                             ; 004cb8ae
    POP ESI                             ; 004cb8af
    POP EBX                             ; 004cb8b0
    RET                                 ; 004cb8b1
    PUSH 0x1                            ; 004cb8b2
        ;   Label: LAB_004cb8b2
    PUSH 0x1869f                        ; 004cb8b4
    PUSH 0x0                            ; 004cb8b9
    PUSH 0x1                            ; 004cb8bb
    PUSH 0x1cd0c40                      ; 004cb8bd
    PUSH 0x5e12a0                       ; 004cb8c2
    MOV ESI,dword ptr [0x0061abc0]      ; 004cb8c7 | g_CEditorToolsPtr
    PUSH ESI                            ; 004cb8cd
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004cb8ce
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004cb8d3
    TEST EAX,EAX                        ; 004cb8d6
    JZ 0x004cb8ad                       ; 004cb8d8
        ;   XREF to: 004cb8ad (CONDITIONAL_JUMP)  ; LAB_004cb8ad
    PUSH 0x1                            ; 004cb8da
    PUSH 0x270f                         ; 004cb8dc
    PUSH 0x1                            ; 004cb8e1
    PUSH 0x1                            ; 004cb8e3
    PUSH 0x61d96c                       ; 004cb8e5
    PUSH 0x5e12ea                       ; 004cb8ea
    MOV EDI,dword ptr [0x0061abc0]      ; 004cb8ef | g_CEditorToolsPtr
    PUSH EDI                            ; 004cb8f5
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004cb8f6
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004cb8fb
    TEST EAX,EAX                        ; 004cb8fe
    JZ 0x004cb8ad                       ; 004cb900
        ;   XREF to: 004cb8ad (CONDITIONAL_JUMP)  ; LAB_004cb8ad
    PUSH 0x1                            ; 004cb902
    PUSH 0x270f                         ; 004cb904
    PUSH 0x1                            ; 004cb909
    PUSH 0x1                            ; 004cb90b
    PUSH 0x61d970                       ; 004cb90d
    PUSH 0x5e12fc                       ; 004cb912
    MOV EBP,dword ptr [0x0061abc0]      ; 004cb917 | g_CEditorToolsPtr
    PUSH EBP                            ; 004cb91d
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0 ; 004cb91e
        ;   XREF to: 00495da0 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00495da0(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004cb923
    TEST EAX,EAX                        ; 004cb926
    JZ 0x004cb8ad                       ; 004cb928
        ;   XREF to: 004cb8ad (CONDITIONAL_JUMP)  ; LAB_004cb8ad
    PUSH 0x5e130f                       ; 004cb92a
    MOV EAX,[0x0061abc0]                ; 004cb92f | g_CEditorToolsPtr
    PUSH EAX                            ; 004cb934
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0 ; 004cb935
        ;   XREF to: 004942e0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_004942e0(CEditorTools * this_ptr, char * format)
    MOV EDX,0x1                         ; 004cb93a
    ADD ESP,0x8                         ; 004cb93f
    MOV dword ptr [0x01cd0c38],EDX      ; 004cb942 | DAT_01cd0c38
    POP EBP                             ; 004cb948
    POP EDI                             ; 004cb949
    POP ESI                             ; 004cb94a
    POP EBX                             ; 004cb94b
    RET                                 ; 004cb94c

