; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d5260(int param_1,undefined4 param_2,undefined4 param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 s_IMPCT_KICK1_WAV_005c51dd+2
;   TerminatedCString s_IMPCT_ROCK_X_WAV_005c51ef
;   undefined4 DAT_005fed24
;   undefined4 DAT_007e2cec
;
; Called Functions:
;   FUN_0040c840
;   FUN_004ce9c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d5260
        ;   Label: FUN_004d5260
    PUSH ESI                            ; 004d5261
    PUSH EBP                            ; 004d5262
    MOV EBX,dword ptr [ESP + 0x10]      ; 004d5263
    MOV EDX,dword ptr [0x007e2cec]      ; 004d5267 | DAT_007e2cec
    PUSH EDX                            ; 004d526d
    MOV ECX,dword ptr [ESP + 0x20]      ; 004d526e
    PUSH ECX                            ; 004d5272
    CALL FUN_0040c840                   ; 004d5273
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV ESI,EAX                         ; 004d5278
    ADD ESP,0x8                         ; 004d527a
    TEST EAX,EAX                        ; 004d527d
    JNZ 0x004d528c                      ; 004d527f
        ;   XREF to: 004d528c (CONDITIONAL_JUMP)  ; LAB_004d528c
    CMP dword ptr [ESP + 0x1c],0x0      ; 004d5281
    JNZ 0x004d52c2                      ; 004d5286
        ;   XREF to: 004d52c2 (CONDITIONAL_JUMP)  ; LAB_004d52c2
    POP EBP                             ; 004d5288
    POP ESI                             ; 004d5289
    POP EBX                             ; 004d528a
    RET                                 ; 004d528b
    PUSH EDI                            ; 004d528c
        ;   Label: LAB_004d528c
    PUSH 0x5c51df                       ; 004d528d | s_IMPCT_KICK1_WAV_005c51dd+2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d5292
    PUSH EBX                            ; 004d5298
    CALL dword ptr [EAX + 0x2c]         ; 004d5299
    ADD ESP,0x8                         ; 004d529c
    MOV EDI,dword ptr [ESI + 0x27a0]    ; 004d529f
    PUSH EDI                            ; 004d52a5
    PUSH 0x4                            ; 004d52a6
    PUSH 0x0                            ; 004d52a8
    ADD EBX,0x20                        ; 004d52aa
    PUSH EBX                            ; 004d52ad
    MOV EBP,dword ptr [0x005fed24]      ; 004d52ae | DAT_005fed24
    PUSH EBP                            ; 004d52b4
    CALL FUN_004ce9c0                   ; 004d52b5
        ;   XREF to: 004ce9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ce9c0()
    ADD ESP,0x14                        ; 004d52ba
    POP EDI                             ; 004d52bd
    POP EBP                             ; 004d52be
    POP ESI                             ; 004d52bf
    POP EBX                             ; 004d52c0
    RET                                 ; 004d52c1
    PUSH 0x5c51ef                       ; 004d52c2 | = "IMPCT-ROCK-X.WAV"
        ;   Label: LAB_004d52c2
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d52c7
    PUSH EBX                            ; 004d52cd
    CALL dword ptr [EAX + 0x2c]         ; 004d52ce
    ADD ESP,0x8                         ; 004d52d1
    POP EBP                             ; 004d52d4
    POP ESI                             ; 004d52d5
    POP EBX                             ; 004d52d6
    RET                                 ; 004d52d7

