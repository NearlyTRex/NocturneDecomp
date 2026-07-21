; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_game_cpp_setupMovieRecording_FUN_0049a240(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005b6d50
;   undefined4 DAT_01c78ac8
;   undefined4 DAT_01c78acc
;   undefined4 DAT_01c78ad4
;
; Called Functions:
;   FUN_0046fe60
;   shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430
;   shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049a240
        ;   Label: core_game.cpp_setupMovieRecording_FUN_0049a240
    PUSH ESI                            ; 0049a241
    PUSH EDI                            ; 0049a242
    PUSH EBP                            ; 0049a243
    PUSH 0x1                            ; 0049a244
    PUSH 0x43700000                     ; 0049a246
    PUSH 0x3e800000                     ; 0049a24b
    PUSH 0x1                            ; 0049a250
    PUSH 0x5b9360                       ; 0049a252
    PUSH 0x5822e6                       ; 0049a257
    MOV EBX,dword ptr [0x005b6d50]      ; 0049a25c | DAT_005b6d50
    XOR EDX,EDX                         ; 0049a262
    PUSH EBX                            ; 0049a264
    MOV dword ptr [0x01c78acc],EDX      ; 0049a265 | DAT_01c78acc
    MOV dword ptr [0x01c78ad4],EDX      ; 0049a26b | DAT_01c78ad4
    CALL shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430 ; 0049a271
        ;   XREF to: 00471430 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_promptForValidFloat_FUN_00471430()
    ADD ESP,0x1c                        ; 0049a276
    TEST EAX,EAX                        ; 0049a279
    JNZ 0x0049a282                      ; 0049a27b
        ;   XREF to: 0049a282 (CONDITIONAL_JUMP)  ; LAB_0049a282
    POP EBP                             ; 0049a27d
        ;   Label: LAB_0049a27d
    POP EDI                             ; 0049a27e
    POP ESI                             ; 0049a27f
    POP EBX                             ; 0049a280
    RET                                 ; 0049a281
    PUSH 0x1                            ; 0049a282
        ;   Label: LAB_0049a282
    PUSH 0x1869f                        ; 0049a284
    PUSH 0x0                            ; 0049a289
    PUSH 0x1                            ; 0049a28b
    PUSH 0x1c78ad0                      ; 0049a28d
    PUSH 0x5822f6                       ; 0049a292
    MOV ESI,dword ptr [0x005b6d50]      ; 0049a297 | DAT_005b6d50
    PUSH ESI                            ; 0049a29d
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 0049a29e
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360()
    ADD ESP,0x1c                        ; 0049a2a3
    TEST EAX,EAX                        ; 0049a2a6
    JZ 0x0049a27d                       ; 0049a2a8
        ;   XREF to: 0049a27d (CONDITIONAL_JUMP)  ; LAB_0049a27d
    PUSH 0x1                            ; 0049a2aa
    PUSH 0x270f                         ; 0049a2ac
    PUSH 0x1                            ; 0049a2b1
    PUSH 0x1                            ; 0049a2b3
    PUSH 0x5b9364                       ; 0049a2b5
    PUSH 0x582340                       ; 0049a2ba
    MOV EDI,dword ptr [0x005b6d50]      ; 0049a2bf | DAT_005b6d50
    PUSH EDI                            ; 0049a2c5
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 0049a2c6
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360()
    ADD ESP,0x1c                        ; 0049a2cb
    TEST EAX,EAX                        ; 0049a2ce
    JZ 0x0049a27d                       ; 0049a2d0
        ;   XREF to: 0049a27d (CONDITIONAL_JUMP)  ; LAB_0049a27d
    PUSH 0x1                            ; 0049a2d2
    PUSH 0x270f                         ; 0049a2d4
    PUSH 0x1                            ; 0049a2d9
    PUSH 0x1                            ; 0049a2db
    PUSH 0x5b9368                       ; 0049a2dd
    PUSH 0x582352                       ; 0049a2e2
    MOV EBP,dword ptr [0x005b6d50]      ; 0049a2e7 | DAT_005b6d50
    PUSH EBP                            ; 0049a2ed
    CALL shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360 ; 0049a2ee
        ;   XREF to: 00471360 (UNCONDITIONAL_CALL)  ; undefined shape_edittool.cpp_CEditorTools_promptForValidInteger_FUN_00471360()
    ADD ESP,0x1c                        ; 0049a2f3
    TEST EAX,EAX                        ; 0049a2f6
    JZ 0x0049a27d                       ; 0049a2f8
        ;   XREF to: 0049a27d (CONDITIONAL_JUMP)  ; LAB_0049a27d
    PUSH 0x582365                       ; 0049a2fa
    MOV EAX,[0x005b6d50]                ; 0049a2ff | DAT_005b6d50
    PUSH EAX                            ; 0049a304
    CALL FUN_0046fe60                   ; 0049a305
        ;   XREF to: 0046fe60 (UNCONDITIONAL_CALL)  ; undefined FUN_0046fe60()
    MOV EDX,0x1                         ; 0049a30a
    ADD ESP,0x8                         ; 0049a30f
    MOV dword ptr [0x01c78ac8],EDX      ; 0049a312 | DAT_01c78ac8
    POP EBP                             ; 0049a318
    POP EDI                             ; 0049a319
    POP ESI                             ; 0049a31a
    POP EBX                             ; 0049a31b
    RET                                 ; 0049a31c

