; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a7d70(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe370
;   undefined4 DAT_005fe3a8
;   undefined4 DAT_01d0d210
;   undefined4 DAT_01d19f78
;   undefined4 DAT_01d19f90
;   undefined4 DAT_01d1a058
;
; Called Functions:
;   FUN_0040d400
;   FUN_0040d460
;   FUN_0040dbb0
;   FUN_00465e50
;   FUN_005a28c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a7d70
        ;   Label: FUN_004a7d70
    PUSH ESI                            ; 004a7d71
    PUSH EDI                            ; 004a7d72
    PUSH EBP                            ; 004a7d73
    SUB ESP,0x508                       ; 004a7d74
    PUSH 0x1d19bac                      ; 004a7d7a
    MOV EBX,0x1d19bc0                   ; 004a7d7f
    CALL FUN_0040d400                   ; 004a7d84
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7d89
    LEA ESI,[EBX + 0x78]                ; 004a7d8c
    PUSH EBX                            ; 004a7d8f
        ;   Label: LAB_004a7d8f
    CALL FUN_0040d400                   ; 004a7d90
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD EBX,0x14                        ; 004a7d95
    ADD ESP,0x4                         ; 004a7d98
    CMP EBX,ESI                         ; 004a7d9b
    JNZ 0x004a7d8f                      ; 004a7d9d
        ;   XREF to: 004a7d8f (CONDITIONAL_JUMP)  ; LAB_004a7d8f
    PUSH 0x1d19c38                      ; 004a7d9f
    CALL FUN_0040d400                   ; 004a7da4
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7da9
    PUSH 0x1d19c4c                      ; 004a7dac
    CALL FUN_0040d400                   ; 004a7db1
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7db6
    PUSH 0x1d19c60                      ; 004a7db9
    CALL FUN_0040d400                   ; 004a7dbe
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7dc3
    PUSH 0x1d19c74                      ; 004a7dc6
    CALL FUN_0040d400                   ; 004a7dcb
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7dd0
    PUSH 0x1d19c9c                      ; 004a7dd3
    CALL FUN_0040d400                   ; 004a7dd8
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7ddd
    PUSH 0x1d19cb0                      ; 004a7de0
    CALL FUN_0040d400                   ; 004a7de5
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7dea
    PUSH 0x1d19cc4                      ; 004a7ded
    CALL FUN_0040d400                   ; 004a7df2
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7df7
    PUSH 0x1d19cd8                      ; 004a7dfa
    CALL FUN_0040d400                   ; 004a7dff
        ;   XREF to: 0040d400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d400()
    ADD ESP,0x4                         ; 004a7e04
    XOR ECX,ECX                         ; 004a7e07
    XOR AH,AH                           ; 004a7e09
    PUSH ECX                            ; 004a7e0b
    MOV byte ptr [0x01d19f90],AH        ; 004a7e0c | DAT_01d19f90
    LEA EAX,[ESP + 0x4]                 ; 004a7e12
    PUSH EAX                            ; 004a7e16
    PUSH ECX                            ; 004a7e17
    MOV EBX,0xffffffff                  ; 004a7e18
    MOV EDX,0x1                         ; 004a7e1d
    PUSH ECX                            ; 004a7e22
    MOV dword ptr [0x005fe3a8],EBX      ; 004a7e23 | DAT_005fe3a8
    MOV dword ptr [0x005fe370],EDX      ; 004a7e29 | DAT_005fe370
    PUSH 0x1d0cfc8                      ; 004a7e2f
    MOV dword ptr [0x01d19f78],ECX      ; 004a7e34 | DAT_01d19f78
    MOV dword ptr [0x01d1a058],ECX      ; 004a7e3a | DAT_01d1a058
    CALL FUN_00465e50                   ; 004a7e40
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 004a7e45
    PUSH 0x1d0cfa8                      ; 004a7e48
    LEA EAX,[ESP + 0x4]                 ; 004a7e4d
    PUSH EAX                            ; 004a7e51
    PUSH 0x5c0d12                       ; 004a7e52
    LEA EAX,[ESP + 0x10c]               ; 004a7e57
    PUSH EAX                            ; 004a7e5e
    CALL FUN_005a28c0                   ; 004a7e5f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004a7e64
    PUSH 0x1e0                          ; 004a7e67
    PUSH 0x280                          ; 004a7e6c
    LEA EAX,[ESP + 0x108]               ; 004a7e71
    PUSH EAX                            ; 004a7e78
    PUSH 0x1d19bac                      ; 004a7e79
    CALL FUN_0040d460                   ; 004a7e7e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7e83
    PUSH 0xff                           ; 004a7e86
    PUSH 0x1d19bac                      ; 004a7e8b
    MOV EBP,0x9                         ; 004a7e90
    XOR EBX,EBX                         ; 004a7e95
    CALL FUN_0040dbb0                   ; 004a7e97
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dbb0()
    MOV EDI,dword ptr [0x01d0d210]      ; 004a7e9c | DAT_01d0d210
    ADD ESP,0x8                         ; 004a7ea2
    TEST EDI,EDI                        ; 004a7ea5
    JLE 0x004a7f80                      ; 004a7ea7
        ;   XREF to: 004a7f80 (CONDITIONAL_JUMP)  ; LAB_004a7f80
    MOV ESI,0x1d0d214                   ; 004a7ead
    MOV EDI,0x1d19bc0                   ; 004a7eb2
    IMUL EAX,EBX,0x2e4                  ; 004a7eb7
        ;   Label: LAB_004a7eb7
    PUSH ESI                            ; 004a7ebd
    PUSH 0x5c0d17                       ; 004a7ebe
    MOV dword ptr [ESP + 0x508],EAX     ; 004a7ec3
    LEA EAX,[ESP + 0x208]               ; 004a7eca
    PUSH EAX                            ; 004a7ed1
    CALL FUN_005a28c0                   ; 004a7ed2
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    IMUL EAX,EBX,0x14                   ; 004a7ed7
    ADD ESP,0xc                         ; 004a7eda
    PUSH 0x0                            ; 004a7edd
    MOV dword ptr [ESP + 0x508],EAX     ; 004a7edf
    LEA EAX,[ESP + 0x404]               ; 004a7ee6
    PUSH EAX                            ; 004a7eed
    PUSH 0x0                            ; 004a7eee
    PUSH 0x0                            ; 004a7ef0
    LEA EAX,[ESP + 0x210]               ; 004a7ef2
    PUSH EAX                            ; 004a7ef9
    CALL FUN_00465e50                   ; 004a7efa
        ;   XREF to: 00465e50 (UNCONDITIONAL_CALL)  ; undefined FUN_00465e50()
    ADD ESP,0x14                        ; 004a7eff
    PUSH 0x1d0cfa8                      ; 004a7f02
    LEA EAX,[ESP + 0x404]               ; 004a7f07
    PUSH EAX                            ; 004a7f0e
    PUSH 0x5c0d12                       ; 004a7f0f
    LEA EAX,[ESP + 0x30c]               ; 004a7f14
    PUSH EAX                            ; 004a7f1b
    CALL FUN_005a28c0                   ; 004a7f1c
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28c0()
    ADD ESP,0x10                        ; 004a7f21
    PUSH 0x36                           ; 004a7f24
    PUSH 0x5a                           ; 004a7f26
    LEA EAX,[ESP + 0x308]               ; 004a7f28
    PUSH EAX                            ; 004a7f2f
    PUSH EDI                            ; 004a7f30
    CALL FUN_0040d460                   ; 004a7f31
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7f36
    MOV EAX,dword ptr [ESP + 0x500]     ; 004a7f39
    MOV dword ptr [EAX + 0x1d0d35c],0x215 ; 004a7f40
    MOV dword ptr [EAX + 0x1d0d360],EBP ; 004a7f4a
    MOV EAX,dword ptr [ESP + 0x504]     ; 004a7f50
    ADD ESI,0x2e4                       ; 004a7f57
    INC EBX                             ; 004a7f5d
    MOV EAX,dword ptr [EAX + 0x1d19bd0] ; 004a7f5e
    MOV ECX,dword ptr [0x01d0d210]      ; 004a7f64 | DAT_01d0d210
    ADD EAX,0xa                         ; 004a7f6a
    ADD EDI,0x14                        ; 004a7f6d
    ADD EBP,EAX                         ; 004a7f70
    CMP EBX,ECX                         ; 004a7f72
    JL 0x004a7eb7                       ; 004a7f74
        ;   XREF to: 004a7eb7 (CONDITIONAL_JUMP)  ; LAB_004a7eb7
    LEA EAX,[EAX]                       ; 004a7f7a
    PUSH 0x20                           ; 004a7f80
        ;   Label: LAB_004a7f80
    PUSH 0x20                           ; 004a7f82
    PUSH 0x5c0d1e                       ; 004a7f84
    PUSH 0x1d19c38                      ; 004a7f89
    CALL FUN_0040d460                   ; 004a7f8e
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7f93
    PUSH 0x20                           ; 004a7f96
    PUSH 0x20                           ; 004a7f98
    PUSH 0x5c0d25                       ; 004a7f9a
    PUSH 0x1d19c4c                      ; 004a7f9f
    CALL FUN_0040d460                   ; 004a7fa4
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7fa9
    PUSH 0x10                           ; 004a7fac
    PUSH 0x10                           ; 004a7fae
    PUSH 0x5c0d2f                       ; 004a7fb0
    PUSH 0x1d19c60                      ; 004a7fb5
    CALL FUN_0040d460                   ; 004a7fba
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7fbf
    PUSH 0x3f                           ; 004a7fc2
    PUSH 0x21                           ; 004a7fc4
    PUSH 0x5c0d37                       ; 004a7fc6
    PUSH 0x1d19c74                      ; 004a7fcb
    CALL FUN_0040d460                   ; 004a7fd0
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7fd5
    PUSH 0x4a                           ; 004a7fd8
    PUSH 0x80                           ; 004a7fda
    PUSH 0x5c0d44                       ; 004a7fdf
    PUSH 0x1d19c88                      ; 004a7fe4
    CALL FUN_0040d460                   ; 004a7fe9
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a7fee
    PUSH 0x20                           ; 004a7ff1
    PUSH 0x40                           ; 004a7ff3
    PUSH 0x5c0d4d                       ; 004a7ff5
    PUSH 0x1d19c9c                      ; 004a7ffa
    CALL FUN_0040d460                   ; 004a7fff
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a8004
    PUSH 0x20                           ; 004a8007
    PUSH 0x40                           ; 004a8009
    PUSH 0x5c0d55                       ; 004a800b
    PUSH 0x1d19cb0                      ; 004a8010
    CALL FUN_0040d460                   ; 004a8015
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a801a
    PUSH 0x20                           ; 004a801d
    PUSH 0x1e                           ; 004a801f
    PUSH 0x5c0d5d                       ; 004a8021
    PUSH 0x1d19cc4                      ; 004a8026
    CALL FUN_0040d460                   ; 004a802b
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a8030
    PUSH 0xff                           ; 004a8033
    PUSH 0x1d19cc4                      ; 004a8038
    CALL FUN_0040dbb0                   ; 004a803d
        ;   XREF to: 0040dbb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dbb0()
    ADD ESP,0x8                         ; 004a8042
    PUSH 0x8                            ; 004a8045
    PUSH 0x100                          ; 004a8047
    PUSH 0x5c0d6d                       ; 004a804c
    PUSH 0x1d19cd8                      ; 004a8051
    XOR EBX,EBX                         ; 004a8056
    CALL FUN_0040d460                   ; 004a8058
        ;   XREF to: 0040d460 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d460()
    ADD ESP,0x10                        ; 004a805d
    MOV dword ptr [0x005fe370],EBX      ; 004a8060 | DAT_005fe370
    ADD ESP,0x508                       ; 004a8066
    POP EBP                             ; 004a806c
    POP EDI                             ; 004a806d
    POP ESI                             ; 004a806e
    POP EBX                             ; 004a806f
    RET                                 ; 004a8070

