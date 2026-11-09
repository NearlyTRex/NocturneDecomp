; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f6be0(undefined4 *param_1,int param_2)
;
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f40a0 at 004f43c8
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
;   undefined4 DAT_01d0bb98
;   undefined4 DAT_01d0bb9c
;   undefined4 DAT_01d0bba0
;   ... and 7 more
;
; Called Functions:
;   engine_mini3d.cpp_FUN_004f6300
;   engine_mini3d.cpp_FUN_004f6430
;   engine_mini3d.cpp_FUN_004f6560
;   engine_mini3d.cpp_FUN_004f6690
;   engine_mini3d.cpp_FUN_004f67b0
;   engine_mini3d.cpp_FUN_004f7a50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6be0
        ;   Label: engine_mini3d.cpp_FUN_004f6be0
    PUSH EBP                            ; 004f6be1
    MOV EBX,dword ptr [ESP + 0x10]      ; 004f6be2
    MOV dword ptr [0x01d09b84],EBX      ; 004f6be6 | DAT_01d09b84
    XOR EDX,EDX                         ; 004f6bec
    XOR EBP,EBP                         ; 004f6bee
    XOR EAX,EAX                         ; 004f6bf0
    MOV dword ptr [0x01d09b88],EDX      ; 004f6bf2 | DAT_01d09b88
    MOV dword ptr [0x01d09b8c],EDX      ; 004f6bf8 | DAT_01d09b8c
    MOV dword ptr [0x01d09b90],EDX      ; 004f6bfe | DAT_01d09b90
    MOV dword ptr [0x01d09b94],EDX      ; 004f6c04 | DAT_01d09b94
    TEST EBX,EBX                        ; 004f6c0a
    JLE 0x004f6c32                      ; 004f6c0c
        ;   XREF to: 004f6c32 (CONDITIONAL_JUMP)  ; LAB_004f6c32
    PUSH EDI                            ; 004f6c0e
    PUSH ESI                            ; 004f6c0f
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f6c10
    MOV ESI,EAX                         ; 004f6c14
        ;   Label: LAB_004f6c14
    SHL ESI,0x6                         ; 004f6c16
    MOV ECX,0x10                        ; 004f6c19
    LEA EDI,[ESI + 0x1d0a398]           ; 004f6c1e
    MOV ESI,EDX                         ; 004f6c24
    INC EAX                             ; 004f6c26
    ADD EDX,0x40                        ; 004f6c27
    MOVSD.REP ES:EDI,ESI                ; 004f6c2a | DAT_01d0a398 | DAT_01d0a39c | DAT_01d0a3d8
    CMP EAX,EBX                         ; 004f6c2c
    JL 0x004f6c14                       ; 004f6c2e
        ;   XREF to: 004f6c14 (CONDITIONAL_JUMP)  ; LAB_004f6c14
    POP ESI                             ; 004f6c30
    POP EDI                             ; 004f6c31
    CALL engine_mini3d.cpp_FUN_004f6300 ; 004f6c32
        ;   XREF to: 004f6300 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6300()
        ;   Label: LAB_004f6c32
    CMP dword ptr [0x01d09b88],0x3      ; 004f6c37 | DAT_01d09b88
    JGE 0x004f6c49                      ; 004f6c3e
        ;   XREF to: 004f6c49 (CONDITIONAL_JUMP)  ; LAB_004f6c49
    MOV EBP,dword ptr [0x01d09b94]      ; 004f6c40 | DAT_01d09b94
        ;   Label: LAB_004f6c40
    POP EBP                             ; 004f6c46
    POP EBX                             ; 004f6c47
    RET                                 ; 004f6c48
    CALL engine_mini3d.cpp_FUN_004f6430 ; 004f6c49
        ;   XREF to: 004f6430 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6430()
        ;   Label: LAB_004f6c49
    CMP dword ptr [0x01d09b8c],0x3      ; 004f6c4e | DAT_01d09b8c
    JL 0x004f6c40                       ; 004f6c55
        ;   XREF to: 004f6c40 (CONDITIONAL_JUMP)  ; LAB_004f6c40
    CALL engine_mini3d.cpp_FUN_004f6560 ; 004f6c57
        ;   XREF to: 004f6560 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6560()
    CMP dword ptr [0x01d09b90],0x3      ; 004f6c5c | DAT_01d09b90
    JL 0x004f6c40                       ; 004f6c63
        ;   XREF to: 004f6c40 (CONDITIONAL_JUMP)  ; LAB_004f6c40
    CALL engine_mini3d.cpp_FUN_004f6690 ; 004f6c65
        ;   XREF to: 004f6690 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f6690()
    MOV EBP,dword ptr [0x01d09b94]      ; 004f6c6a | DAT_01d09b94
    CMP EBP,0x3                         ; 004f6c70
    JL 0x004f6c40                       ; 004f6c73
        ;   XREF to: 004f6c40 (CONDITIONAL_JUMP)  ; LAB_004f6c40
    CALL engine_mini3d.cpp_FUN_004f67b0 ; 004f6c75
        ;   XREF to: 004f67b0 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f67b0()
    MOV EBP,dword ptr [0x01d09b94]      ; 004f6c7a | DAT_01d09b94
    XOR EDX,EDX                         ; 004f6c80
    TEST EBP,EBP                        ; 004f6c82
    JLE 0x004f6cdc                      ; 004f6c84
        ;   XREF to: 004f6cdc (CONDITIONAL_JUMP)  ; LAB_004f6cdc
    FLD float ptr [0x01d09888]          ; 004f6c86 | DAT_01d09888
    MOV EAX,0x1d0bb98                   ; 004f6c8c
    FLD float ptr [0x01d09884]          ; 004f6c91 | DAT_01d09884
    FLD float ptr [0x01d09880]          ; 004f6c97 | DAT_01d09880
    FLD float ptr [EAX + 0x8]           ; 004f6c9d | DAT_01d0bba0 | DAT_01d0bbe0
        ;   Label: LAB_004f6c9d
    FLD1                                ; 004f6ca0
    FDIVRP                              ; 004f6ca2
    FLD float ptr [EAX]                 ; 004f6ca4 | DAT_01d0bb98 | DAT_01d0bbd8
    FMUL float ptr [0x01d0987c]         ; 004f6ca6 | DAT_01d0987c
    FLD float ptr [EAX + 0x4]           ; 004f6cac | DAT_01d0bb9c | DAT_01d0bbdc
    FMUL ST3                            ; 004f6caf
    FXCH ST2                            ; 004f6cb1
    FSTP float ptr [EAX + 0xc]          ; 004f6cb3 | DAT_01d0bba4 | DAT_01d0bbe4
    FMUL float ptr [EAX + 0xc]          ; 004f6cb6 | DAT_01d0bba4 | DAT_01d0bbe4
    FXCH                                ; 004f6cb9
    FMUL float ptr [EAX + 0xc]          ; 004f6cbb | DAT_01d0bba4 | DAT_01d0bbe4
    ADD EAX,0x40                        ; 004f6cbe
    INC EDX                             ; 004f6cc1
    FLD ST4                             ; 004f6cc2
    FLD ST4                             ; 004f6cc4
    FADDP ST3,ST0                       ; 004f6cc6
    FADDP                               ; 004f6cc8
    FXCH                                ; 004f6cca
    FSTP float ptr [EAX + -0x2c]        ; 004f6ccc | DAT_01d0bbac
    FSTP float ptr [EAX + -0x28]        ; 004f6ccf | DAT_01d0bbb0
    CMP EDX,EBP                         ; 004f6cd2
    JL 0x004f6c9d                       ; 004f6cd4
        ;   XREF to: 004f6c9d (CONDITIONAL_JUMP)  ; LAB_004f6c9d
    FSTP ST0                            ; 004f6cd6
    FSTP ST0                            ; 004f6cd8
    FSTP ST0                            ; 004f6cda
    PUSH EBP                            ; 004f6cdc
        ;   Label: LAB_004f6cdc
    PUSH 0x1d0bb98                      ; 004f6cdd | DAT_01d0bb98
    MOV dword ptr [0x01d09b94],EBP      ; 004f6ce2 | DAT_01d09b94
    CALL engine_mini3d.cpp_FUN_004f7a50 ; 004f6ce8
        ;   XREF to: 004f7a50 (UNCONDITIONAL_CALL)  ; undefined engine_mini3d.cpp_FUN_004f7a50()
    MOV EBP,dword ptr [0x01d09b94]      ; 004f6ced | DAT_01d09b94
    ADD ESP,0x8                         ; 004f6cf3
    MOV EBP,dword ptr [0x01d09b94]      ; 004f6cf6 | DAT_01d09b94
    POP EBP                             ; 004f6cfc
    POP EBX                             ; 004f6cfd
    RET                                 ; 004f6cfe

