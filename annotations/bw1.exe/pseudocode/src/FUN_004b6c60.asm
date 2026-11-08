; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b6c60(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[6]:
;   FUN_00430c90 at 00430d60
;   FUN_00449600 at 00449694
;   FUN_004a1d00 at 004a2cdd
;   FUN_004b1d90 at 004b1dff
;   FUN_004b91d0 at 004b9285
;   FUN_005a8e60 at 005a9350
;
; Referenced Globals:
;   TerminatedCString s_xplode_wav_6_0_005df63c
;   undefined4 DAT_006236b8
;   undefined4 DAT_01cb006c
;
; Called Functions:
;   FUN_004b16d0
;   FUN_004b6f30
;   FUN_0057d8a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b6c60
        ;   Label: FUN_004b6c60
    PUSH EDI                            ; 004b6c61
    PUSH EBP                            ; 004b6c62
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b6c63
    MOV EAX,[0x01cb006c]                ; 004b6c67 | DAT_01cb006c
    SHL EAX,0x2                         ; 004b6c6c
    PUSH dword ptr [ESP + 0x1c]         ; 004b6c6f
    MOV EDX,EAX                         ; 004b6c73
    SHL EAX,0x3                         ; 004b6c75
    PUSH dword ptr [ESP + 0x1c]         ; 004b6c78
    SUB EAX,EDX                         ; 004b6c7c
    PUSH EBX                            ; 004b6c7e
    ADD EAX,0x1cb0070                   ; 004b6c7f
    PUSH EAX                            ; 004b6c84
    CALL FUN_004b16d0                   ; 004b6c85
        ;   XREF to: 004b16d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b16d0()
    MOV EDX,dword ptr [0x01cb006c]      ; 004b6c8a | DAT_01cb006c
    INC EDX                             ; 004b6c90
    ADD ESP,0x10                        ; 004b6c91
    MOV dword ptr [0x01cb006c],EDX      ; 004b6c94 | DAT_01cb006c
    CMP EDX,0xa                         ; 004b6c9a
    JL 0x004b6ca9                       ; 004b6c9d
        ;   XREF to: 004b6ca9 (CONDITIONAL_JUMP)  ; LAB_004b6ca9
    PUSH ESI                            ; 004b6c9f
    XOR ESI,ESI                         ; 004b6ca0
    MOV dword ptr [0x01cb006c],ESI      ; 004b6ca2 | DAT_01cb006c
    POP ESI                             ; 004b6ca8
    PUSH EBX                            ; 004b6ca9
        ;   Label: LAB_004b6ca9
    PUSH 0x5df63c                       ; 004b6caa | = "xplode?.wav @ 6.0"
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b6caf
    PUSH EDI                            ; 004b6cb3
    MOV EBP,dword ptr [0x006236b8]      ; 004b6cb4 | DAT_006236b8
    PUSH EBP                            ; 004b6cba
    CALL FUN_0057d8a0                   ; 004b6cbb
        ;   XREF to: 0057d8a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d8a0()
    ADD ESP,0x10                        ; 004b6cc0
    PUSH dword ptr [ESP + 0x20]         ; 004b6cc3
    PUSH EBX                            ; 004b6cc7
    PUSH EDI                            ; 004b6cc8
    CALL FUN_004b6f30                   ; 004b6cc9
        ;   XREF to: 004b6f30 (UNCONDITIONAL_CALL)  ; undefined FUN_004b6f30()
    ADD ESP,0xc                         ; 004b6cce
    POP EBP                             ; 004b6cd1
    POP EDI                             ; 004b6cd2
    POP EBX                             ; 004b6cd3
    RET                                 ; 004b6cd4

