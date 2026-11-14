; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_FUN_004b2970(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c25594
;   undefined4 DAT_01cb80d0
;   undefined4 DAT_01cb80d4
;   undefined4 DAT_01cb80dc
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047d800
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b2970
        ;   Label: core_game.cpp_FUN_004b2970
    PUSH ESI                            ; 004b2971
    PUSH EDI                            ; 004b2972
    PUSH EBP                            ; 004b2973
    PUSH 0x1                            ; 004b2974
    PUSH 0x43700000                     ; 004b2976
    PUSH 0x3e800000                     ; 004b297b
    PUSH 0x1                            ; 004b2980
    PUSH 0x6164a0                       ; 004b2982
    PUSH 0x5d7217                       ; 004b2987
    MOV EBX,dword ptr [0x006138e0]      ; 004b298c | g_CEditorToolsPtr
    XOR EDX,EDX                         ; 004b2992
    PUSH EBX                            ; 004b2994
    MOV dword ptr [0x01cb80d4],EDX      ; 004b2995 | DAT_01cb80d4
    MOV dword ptr [0x01cb80dc],EDX      ; 004b299b | DAT_01cb80dc
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047d800 ; 004b29a1
        ;   XREF to: 0047d800 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047d800(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b29a6
    TEST EAX,EAX                        ; 004b29a9
    JNZ 0x004b29b2                      ; 004b29ab
        ;   XREF to: 004b29b2 (CONDITIONAL_JUMP)  ; LAB_004b29b2
    POP EBP                             ; 004b29ad
        ;   Label: LAB_004b29ad
    POP EDI                             ; 004b29ae
    POP ESI                             ; 004b29af
    POP EBX                             ; 004b29b0
    RET                                 ; 004b29b1
    PUSH 0x1                            ; 004b29b2
        ;   Label: LAB_004b29b2
    PUSH 0x1869f                        ; 004b29b4
    PUSH 0x0                            ; 004b29b9
    PUSH 0x1                            ; 004b29bb
    PUSH 0x1cb80d8                      ; 004b29bd
    PUSH 0x5d7227                       ; 004b29c2
    MOV ESI,dword ptr [0x006138e0]      ; 004b29c7 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b29cd
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730 ; 004b29ce
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b29d3
    TEST EAX,EAX                        ; 004b29d6
    JZ 0x004b29ad                       ; 004b29d8
        ;   XREF to: 004b29ad (CONDITIONAL_JUMP)  ; LAB_004b29ad
    PUSH 0x1                            ; 004b29da
    PUSH 0x270f                         ; 004b29dc
    PUSH 0x1                            ; 004b29e1
    PUSH 0x1                            ; 004b29e3
    PUSH 0x6164a4                       ; 004b29e5
    PUSH 0x5d7271                       ; 004b29ea
    MOV EDI,dword ptr [0x006138e0]      ; 004b29ef | g_CEditorToolsPtr
    PUSH EDI                            ; 004b29f5
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730 ; 004b29f6
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b29fb
    TEST EAX,EAX                        ; 004b29fe
    JZ 0x004b29ad                       ; 004b2a00
        ;   XREF to: 004b29ad (CONDITIONAL_JUMP)  ; LAB_004b29ad
    PUSH 0x1                            ; 004b2a02
    PUSH 0x270f                         ; 004b2a04
    PUSH 0x1                            ; 004b2a09
    PUSH 0x1                            ; 004b2a0b
    PUSH 0x6164a8                       ; 004b2a0d
    PUSH 0x5d7283                       ; 004b2a12
    MOV EBP,dword ptr [0x006138e0]      ; 004b2a17 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b2a1d
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730 ; 004b2a1e
        ;   XREF to: 0047d730 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047d730(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b2a23
    TEST EAX,EAX                        ; 004b2a26
    JZ 0x004b29ad                       ; 004b2a28
        ;   XREF to: 004b29ad (CONDITIONAL_JUMP)  ; LAB_004b29ad
    PUSH 0x5d7296                       ; 004b2a2a
    MOV EAX,[0x006138e0]                ; 004b2a2f | g_CEditorToolsPtr
    PUSH EAX                            ; 004b2a34
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0 ; 004b2a35
        ;   XREF to: 0047bda0 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047bda0(CEditorTools * this_ptr, char * format)
    MOV EDX,0x1                         ; 004b2a3a
    ADD ESP,0x8                         ; 004b2a3f
    MOV dword ptr [0x01cb80d0],EDX      ; 004b2a42 | DAT_01cb80d0
    POP EBP                             ; 004b2a48
    POP EDI                             ; 004b2a49
    POP ESI                             ; 004b2a4a
    POP EBX                             ; 004b2a4b
    RET                                 ; 004b2a4c

