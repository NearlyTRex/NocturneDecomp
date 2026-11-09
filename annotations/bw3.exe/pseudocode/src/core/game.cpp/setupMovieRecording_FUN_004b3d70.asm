; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_setupMovieRecording_FUN_004b3d70(void)
;
;
; Referenced Globals:
;   CEditorTools* g_CEditorToolsPtr = 01c5b0e4
;   undefined4 DAT_01d22c40
;   undefined4 DAT_01d22c44
;   undefined4 DAT_01d22c4c
;
; Called Functions:
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940
;   shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b3d70
        ;   Label: core_game.cpp_setupMovieRecording_FUN_004b3d70
    PUSH ESI                            ; 004b3d71
    PUSH EDI                            ; 004b3d72
    PUSH EBP                            ; 004b3d73
    PUSH 0x1                            ; 004b3d74
    PUSH 0x43700000                     ; 004b3d76
    PUSH 0x3e800000                     ; 004b3d7b
    PUSH 0x1                            ; 004b3d80
    PUSH 0x5fe9e8                       ; 004b3d82
    PUSH 0x5c210c                       ; 004b3d87
    MOV EBX,dword ptr [0x005fb140]      ; 004b3d8c | g_CEditorToolsPtr
    XOR EDX,EDX                         ; 004b3d92
    PUSH EBX                            ; 004b3d94
    MOV dword ptr [0x01d22c44],EDX      ; 004b3d95 | DAT_01d22c44
    MOV dword ptr [0x01d22c4c],EDX      ; 004b3d9b | DAT_01d22c4c
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10 ; 004b3da1
        ;   XREF to: 0047ea10 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_0047ea10(CEditorTools * this_ptr, char * prompt_text, float * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b3da6
    TEST EAX,EAX                        ; 004b3da9
    JNZ 0x004b3db2                      ; 004b3dab
        ;   XREF to: 004b3db2 (CONDITIONAL_JUMP)  ; LAB_004b3db2
    POP EBP                             ; 004b3dad
        ;   Label: LAB_004b3dad
    POP EDI                             ; 004b3dae
    POP ESI                             ; 004b3daf
    POP EBX                             ; 004b3db0
    RET                                 ; 004b3db1
    PUSH 0x1                            ; 004b3db2
        ;   Label: LAB_004b3db2
    PUSH 0x1869f                        ; 004b3db4
    PUSH 0x0                            ; 004b3db9
    PUSH 0x1                            ; 004b3dbb
    PUSH 0x1d22c48                      ; 004b3dbd
    PUSH 0x5c211c                       ; 004b3dc2
    MOV ESI,dword ptr [0x005fb140]      ; 004b3dc7 | g_CEditorToolsPtr
    PUSH ESI                            ; 004b3dcd
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004b3dce
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b3dd3
    TEST EAX,EAX                        ; 004b3dd6
    JZ 0x004b3dad                       ; 004b3dd8
        ;   XREF to: 004b3dad (CONDITIONAL_JUMP)  ; LAB_004b3dad
    PUSH 0x1                            ; 004b3dda
    PUSH 0x270f                         ; 004b3ddc
    PUSH 0x1                            ; 004b3de1
    PUSH 0x1                            ; 004b3de3
    PUSH 0x5fe9ec                       ; 004b3de5
    PUSH 0x5c2166                       ; 004b3dea
    MOV EDI,dword ptr [0x005fb140]      ; 004b3def | g_CEditorToolsPtr
    PUSH EDI                            ; 004b3df5
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004b3df6
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b3dfb
    TEST EAX,EAX                        ; 004b3dfe
    JZ 0x004b3dad                       ; 004b3e00
        ;   XREF to: 004b3dad (CONDITIONAL_JUMP)  ; LAB_004b3dad
    PUSH 0x1                            ; 004b3e02
    PUSH 0x270f                         ; 004b3e04
    PUSH 0x1                            ; 004b3e09
    PUSH 0x1                            ; 004b3e0b
    PUSH 0x5fe9f0                       ; 004b3e0d
    PUSH 0x5c2178                       ; 004b3e12
    MOV EBP,dword ptr [0x005fb140]      ; 004b3e17 | g_CEditorToolsPtr
    PUSH EBP                            ; 004b3e1d
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940 ; 004b3e1e
        ;   XREF to: 0047e940 (UNCONDITIONAL_CALL)  ; int shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_0047e940(CEditorTools * this_ptr, char * prompt_text, int * result_ptr, int enable_range_check, ...)
    ADD ESP,0x1c                        ; 004b3e23
    TEST EAX,EAX                        ; 004b3e26
    JZ 0x004b3dad                       ; 004b3e28
        ;   XREF to: 004b3dad (CONDITIONAL_JUMP)  ; LAB_004b3dad
    PUSH 0x5c218b                       ; 004b3e2a
    MOV EAX,[0x005fb140]                ; 004b3e2f | g_CEditorToolsPtr
    PUSH EAX                            ; 004b3e34
    CALL shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80 ; 004b3e35
        ;   XREF to: 0047ce80 (UNCONDITIONAL_CALL)  ; void shape_edittool.cpp_CEditorTools_showMessage_FUN_0047ce80(CEditorTools * this_ptr, char * format)
    MOV EDX,0x1                         ; 004b3e3a
    ADD ESP,0x8                         ; 004b3e3f
    MOV dword ptr [0x01d22c40],EDX      ; 004b3e42 | DAT_01d22c40
    POP EBP                             ; 004b3e48
    POP EDI                             ; 004b3e49
    POP ESI                             ; 004b3e4a
    POP EBX                             ; 004b3e4b
    RET                                 ; 004b3e4c

