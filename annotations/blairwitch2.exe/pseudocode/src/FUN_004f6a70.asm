; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004f6a70(undefined4 *param_1,undefined4 *param_2,undefined4 *param_3)
;
;
; XREF[1]:
;   FUN_004f6d00 at 004f6dce
;
; Referenced Globals:
;   undefined4 DAT_01d0987c
;   undefined4 DAT_01d09880
;   undefined4 DAT_01d09884
;   undefined4 DAT_01d09888
;   undefined4 DAT_01d09b84
;   undefined4 DAT_01d09b88
;   undefined4 DAT_01d09b8c
;   undefined4 DAT_01d09b90
;   undefined4 DAT_01d09b94
;   undefined4 DAT_01d0a398
;   undefined4 DAT_01d0a39c
;   undefined4 DAT_01d0a3d8
;   undefined4 DAT_01d0a3dc
;   undefined4 DAT_01d0a418
;   undefined4 DAT_01d0a41c
;   ... and 10 more
;
; Called Functions:
;   FUN_004f6300
;   FUN_004f6430
;   FUN_004f6560
;   FUN_004f6690
;   FUN_004f67b0
;   FUN_004f6870
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6a70
        ;   Label: FUN_004f6a70
    PUSH ESI                            ; 004f6a71
    PUSH EDI                            ; 004f6a72
    PUSH EBP                            ; 004f6a73
    MOV ESI,dword ptr [ESP + 0x14]      ; 004f6a74
    MOV EBX,dword ptr [ESP + 0x18]      ; 004f6a78
    MOV EDX,dword ptr [ESP + 0x1c]      ; 004f6a7c
    MOV ECX,dword ptr [EBX + 0x10]      ; 004f6a80
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f6a83
    MOV EDI,dword ptr [EDX + 0x10]      ; 004f6a86
    AND EAX,ECX                         ; 004f6a89
    TEST EAX,EDI                        ; 004f6a8b
    JNZ 0x004f6af3                      ; 004f6a8d
        ;   XREF to: 004f6af3 (CONDITIONAL_JUMP)  ; LAB_004f6af3
    MOV EAX,dword ptr [ESI + 0x10]      ; 004f6a8f
    OR EAX,ECX                          ; 004f6a92
    OR EAX,EDI                          ; 004f6a94
    JZ 0x004f6af8                       ; 004f6a96
        ;   XREF to: 004f6af8 (CONDITIONAL_JUMP)  ; LAB_004f6af8
    MOV EDI,0x3                         ; 004f6a98
    MOV ECX,0x10                        ; 004f6a9d
    MOV dword ptr [0x01d09b84],EDI      ; 004f6aa2 | DAT_01d09b84
    MOV EDI,0x1d0a398                   ; 004f6aa8
    MOVSD.REP ES:EDI,ESI                ; 004f6aad | DAT_01d0a398 | DAT_01d0a39c
    XOR EBP,EBP                         ; 004f6aaf
    MOV ECX,0x10                        ; 004f6ab1
    MOV EDI,0x1d0a3d8                   ; 004f6ab6
    MOV ESI,EBX                         ; 004f6abb
    MOV dword ptr [0x01d09b88],EBP      ; 004f6abd | DAT_01d09b88
    MOVSD.REP ES:EDI,ESI                ; 004f6ac3 | DAT_01d0a3d8 | DAT_01d0a3dc
    MOV dword ptr [0x01d09b8c],EBP      ; 004f6ac5 | DAT_01d09b8c
    MOV ECX,0x10                        ; 004f6acb
    MOV EDI,0x1d0a418                   ; 004f6ad0
    MOV ESI,EDX                         ; 004f6ad5
    MOV dword ptr [0x01d09b90],EBP      ; 004f6ad7 | DAT_01d09b90
    MOV dword ptr [0x01d09b94],EBP      ; 004f6add | DAT_01d09b94
    MOVSD.REP ES:EDI,ESI                ; 004f6ae3 | DAT_01d0a418 | DAT_01d0a41c
    CALL FUN_004f6300                   ; 004f6ae5
        ;   XREF to: 004f6300 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6300()
    CMP dword ptr [0x01d09b88],0x3      ; 004f6aea | DAT_01d09b88
    JGE 0x004f6b08                      ; 004f6af1
        ;   XREF to: 004f6b08 (CONDITIONAL_JUMP)  ; LAB_004f6b08
    POP EBP                             ; 004f6af3
        ;   Label: LAB_004f6af3
    POP EDI                             ; 004f6af4
    POP ESI                             ; 004f6af5
    POP EBX                             ; 004f6af6
    RET                                 ; 004f6af7
    PUSH EDX                            ; 004f6af8
        ;   Label: LAB_004f6af8
    PUSH EBX                            ; 004f6af9
    PUSH ESI                            ; 004f6afa
    CALL FUN_004f6870                   ; 004f6afb
        ;   XREF to: 004f6870 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6870()
    ADD ESP,0xc                         ; 004f6b00
    POP EBP                             ; 004f6b03
    POP EDI                             ; 004f6b04
    POP ESI                             ; 004f6b05
    POP EBX                             ; 004f6b06
    RET                                 ; 004f6b07
    CALL FUN_004f6430                   ; 004f6b08
        ;   XREF to: 004f6430 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6430()
        ;   Label: LAB_004f6b08
    CMP dword ptr [0x01d09b8c],0x3      ; 004f6b0d | DAT_01d09b8c
    JL 0x004f6af3                       ; 004f6b14
        ;   XREF to: 004f6af3 (CONDITIONAL_JUMP)  ; LAB_004f6af3
    CALL FUN_004f6560                   ; 004f6b16
        ;   XREF to: 004f6560 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6560()
    CMP dword ptr [0x01d09b90],0x3      ; 004f6b1b | DAT_01d09b90
    JL 0x004f6af3                       ; 004f6b22
        ;   XREF to: 004f6af3 (CONDITIONAL_JUMP)  ; LAB_004f6af3
    CALL FUN_004f6690                   ; 004f6b24
        ;   XREF to: 004f6690 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6690()
    CMP dword ptr [0x01d09b94],0x3      ; 004f6b29 | DAT_01d09b94
    JL 0x004f6af3                       ; 004f6b30
        ;   XREF to: 004f6af3 (CONDITIONAL_JUMP)  ; LAB_004f6af3
    CALL FUN_004f67b0                   ; 004f6b32
        ;   XREF to: 004f67b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f67b0()
    MOV EBX,dword ptr [0x01d09b94]      ; 004f6b37 | DAT_01d09b94
    XOR EDX,EDX                         ; 004f6b3d
    TEST EBX,EBX                        ; 004f6b3f
    JLE 0x004f6b9f                      ; 004f6b41
        ;   XREF to: 004f6b9f (CONDITIONAL_JUMP)  ; LAB_004f6b9f
    FLD float ptr [0x01d09888]          ; 004f6b43 | DAT_01d09888
    MOV EAX,0x1d0bb98                   ; 004f6b49
    FLD float ptr [0x01d09884]          ; 004f6b4e | DAT_01d09884
    FLD float ptr [0x01d0987c]          ; 004f6b54 | DAT_01d0987c
    FLD float ptr [EAX + 0x8]           ; 004f6b5a | DAT_01d0bba0 | DAT_01d0bbe0
        ;   Label: LAB_004f6b5a
    FLD1                                ; 004f6b5d
    FDIVRP                              ; 004f6b5f
    FLD float ptr [EAX]                 ; 004f6b61 | DAT_01d0bb98 | DAT_01d0bbd8
    FMUL ST2                            ; 004f6b63
    FLD float ptr [EAX + 0x4]           ; 004f6b65 | DAT_01d0bb9c | DAT_01d0bbdc
    FMUL float ptr [0x01d09880]         ; 004f6b68 | DAT_01d09880
    FXCH ST2                            ; 004f6b6e
    FSTP float ptr [EAX + 0xc]          ; 004f6b70 | DAT_01d0bba4 | DAT_01d0bbe4
    FMUL float ptr [EAX + 0xc]          ; 004f6b73 | DAT_01d0bba4 | DAT_01d0bbe4
    FXCH                                ; 004f6b76
    FMUL float ptr [EAX + 0xc]          ; 004f6b78 | DAT_01d0bba4 | DAT_01d0bbe4
    MOV ESI,dword ptr [0x01d09b94]      ; 004f6b7b | DAT_01d09b94
    ADD EAX,0x40                        ; 004f6b81
    INC EDX                             ; 004f6b84
    FLD ST4                             ; 004f6b85
    FLD ST4                             ; 004f6b87
    FADDP ST3,ST0                       ; 004f6b89
    FADDP                               ; 004f6b8b
    FXCH                                ; 004f6b8d
    FSTP float ptr [EAX + -0x2c]        ; 004f6b8f | DAT_01d0bbac
    FSTP float ptr [EAX + -0x28]        ; 004f6b92 | DAT_01d0bbb0
    CMP EDX,ESI                         ; 004f6b95
    JL 0x004f6b5a                       ; 004f6b97
        ;   XREF to: 004f6b5a (CONDITIONAL_JUMP)  ; LAB_004f6b5a
    FSTP ST0                            ; 004f6b99
    FSTP ST0                            ; 004f6b9b
    FSTP ST0                            ; 004f6b9d
    MOV ESI,0x1d0bb98                   ; 004f6b9f
        ;   Label: LAB_004f6b9f
    MOV EDI,0x1d0bb98                   ; 004f6ba4
    XOR EBX,EBX                         ; 004f6ba9
    ADD ESI,0x40                        ; 004f6bab
    ADD EDI,0x80                        ; 004f6bae
    MOV EAX,[0x01d09b94]                ; 004f6bb4 | DAT_01d09b94
        ;   Label: LAB_004f6bb4
    SUB EAX,0x2                         ; 004f6bb9
    CMP EBX,EAX                         ; 004f6bbc
    JGE 0x004f6af3                      ; 004f6bbe
        ;   XREF to: 004f6af3 (CONDITIONAL_JUMP)  ; LAB_004f6af3
    PUSH EDI                            ; 004f6bc4
    PUSH ESI                            ; 004f6bc5
    PUSH 0x1d0bb98                      ; 004f6bc6
    INC EBX                             ; 004f6bcb
    ADD EDI,0x40                        ; 004f6bcc
    CALL FUN_004f6870                   ; 004f6bcf
        ;   XREF to: 004f6870 (UNCONDITIONAL_CALL)  ; undefined FUN_004f6870()
    ADD ESI,0x40                        ; 004f6bd4
    ADD ESP,0xc                         ; 004f6bd7
    JMP 0x004f6bb4                      ; 004f6bda
        ;   XREF to: 004f6bb4 (UNCONDITIONAL_JUMP)  ; LAB_004f6bb4

