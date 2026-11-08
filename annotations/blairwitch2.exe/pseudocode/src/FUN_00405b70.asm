; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00405b70(int param_1)
;
;
; XREF[1]:
;   FUN_00407980 at 004079aa
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_0062202c
;   undefined4 DAT_00622030
;   undefined4 DAT_0070ca60
;   undefined4 DAT_0070ca98
;   undefined4 DAT_0070ca9c
;   undefined4 DAT_01c35e6c
;   undefined4 DAT_01c38aec
;   undefined4 DAT_01c38b40
;   undefined4 DAT_01c38b54
;   undefined4 DAT_01c38b58
;
; Called Functions:
;   FUN_00403970
;   FUN_00431d90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 00405b70
        ;   Label: FUN_00405b70
    PUSH EDI                            ; 00405b71
    PUSH EBP                            ; 00405b72
    MOV EBP,dword ptr [0x0070ca60]      ; 00405b73 | DAT_0070ca60
    MOV EDI,dword ptr [ESP + 0x10]      ; 00405b79
    LEA ESI,[EDI + 0x18]                ; 00405b7d
    LEA EAX,[EDI + 0x8]                 ; 00405b80
    PUSH EAX                            ; 00405b83
    CALL FUN_00403970                   ; 00405b84
        ;   XREF to: 00403970 (UNCONDITIONAL_CALL)  ; undefined FUN_00403970()
    ADD ESP,0x4                         ; 00405b89
    TEST EAX,EAX                        ; 00405b8c
    JZ 0x00405cd6                       ; 00405b8e
        ;   XREF to: 00405cd6 (CONDITIONAL_JUMP)  ; LAB_00405cd6
    PUSH EBX                            ; 00405b94
    MOV EDX,dword ptr [0x01c38aec]      ; 00405b95 | DAT_01c38aec
    MOV EBP,dword ptr [0x0070ca60]      ; 00405b9b | DAT_0070ca60
    TEST EDX,EDX                        ; 00405ba1
    JZ 0x00405c60                       ; 00405ba3
        ;   XREF to: 00405c60 (CONDITIONAL_JUMP)  ; LAB_00405c60
    CMP dword ptr [0x01c38b40],0x0      ; 00405ba9 | DAT_01c38b40
    JNZ 0x00405c39                      ; 00405bb0
        ;   XREF to: 00405c39 (CONDITIONAL_JUMP)  ; LAB_00405c39
    CMP dword ptr [0x006141c0],0x20     ; 00405bb6 | DAT_006141c0
    JNZ 0x00405c2d                      ; 00405bbd
        ;   XREF to: 00405c2d (CONDITIONAL_JUMP)  ; LAB_00405c2d
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405bbf | DAT_01c35e6c
    MOV EBX,0x1                         ; 00405bc9
        ;   Label: LAB_00405bc9
    MOV ECX,0xcd                        ; 00405bce
    MOV dword ptr [0x01c38b58],EBX      ; 00405bd3 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],ECX      ; 00405bd9 | DAT_01c38b54
    MOV EBX,0x70ca98                    ; 00405bdf | DAT_0070ca98
        ;   Label: LAB_00405bdf
    MOV EAX,ESI                         ; 00405be4
    XOR ECX,ECX                         ; 00405be6
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405be8
        ;   Label: LAB_00405be8
    LEA EDX,[EDX + EDX*0x2]             ; 00405beb
    MOV dword ptr [0x0070ca60],EBP      ; 00405bee | DAT_0070ca60
    CMP ECX,EDX                         ; 00405bf4
    JGE 0x00405cc4                      ; 00405bf6
        ;   XREF to: 00405cc4 (CONDITIONAL_JUMP)  ; LAB_00405cc4
    MOV EDX,dword ptr [EAX]             ; 00405bfc
    ADD EDX,EBP                         ; 00405bfe
    MOV dword ptr [EBX],EDX             ; 00405c00 | DAT_0070ca98 | DAT_0070ca9c
    MOV EDX,dword ptr [EAX]             ; 00405c02
    ADD EDX,EBP                         ; 00405c04
    IMUL EDX,EDX,0x30                   ; 00405c06
    MOV ESI,dword ptr [EAX + 0x4]       ; 00405c09
    MOV dword ptr [EDX + 0x62202c],ESI  ; 00405c0c | DAT_0062202c
    MOV EDX,dword ptr [EAX]             ; 00405c12
    ADD EDX,EBP                         ; 00405c14
    IMUL ESI,EDX,0x30                   ; 00405c16
    ADD EAX,0xc                         ; 00405c19
    ADD EBX,0x4                         ; 00405c1c
    MOV EDX,dword ptr [EAX + -0x4]      ; 00405c1f
    ADD ECX,0x3                         ; 00405c22
    MOV dword ptr [ESI + 0x622030],EDX  ; 00405c25 | DAT_00622030
    JMP 0x00405be8                      ; 00405c2b
        ;   XREF to: 00405be8 (UNCONDITIONAL_JUMP)  ; LAB_00405be8
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405c2d | DAT_01c35e6c
        ;   Label: LAB_00405c2d
    JMP 0x00405bc9                      ; 00405c37
        ;   XREF to: 00405bc9 (UNCONDITIONAL_JUMP)  ; LAB_00405bc9
    CMP dword ptr [0x006141c0],0x20     ; 00405c39 | DAT_006141c0
        ;   Label: LAB_00405c39
    JNZ 0x00405c51                      ; 00405c40
        ;   XREF to: 00405c51 (CONDITIONAL_JUMP)  ; LAB_00405c51
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405c42 | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00405bc9                      ; 00405c4c
        ;   XREF to: 00405bc9 (UNCONDITIONAL_JUMP)  ; LAB_00405bc9
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405c51 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00405c51
    JMP 0x00405bc9                      ; 00405c5b
        ;   XREF to: 00405bc9 (UNCONDITIONAL_JUMP)  ; LAB_00405bc9
    CMP dword ptr [0x01c38b40],0x0      ; 00405c60 | DAT_01c38b40
        ;   Label: LAB_00405c60
    JNZ 0x00405ca3                      ; 00405c67
        ;   XREF to: 00405ca3 (CONDITIONAL_JUMP)  ; LAB_00405ca3
    CMP dword ptr [0x006141c0],0x20     ; 00405c69 | DAT_006141c0
    JNZ 0x00405c97                      ; 00405c70
        ;   XREF to: 00405c97 (CONDITIONAL_JUMP)  ; LAB_00405c97
    MOV dword ptr [0x01c35e6c],0x55d0b3 ; 00405c72 | DAT_01c35e6c
    MOV ECX,0x1                         ; 00405c7c
        ;   Label: LAB_00405c7c
    MOV EDX,0xc5                        ; 00405c81
    MOV dword ptr [0x01c38b58],ECX      ; 00405c86 | DAT_01c38b58
    MOV dword ptr [0x01c38b54],EDX      ; 00405c8c | DAT_01c38b54
    JMP 0x00405bdf                      ; 00405c92
        ;   XREF to: 00405bdf (UNCONDITIONAL_JUMP)  ; LAB_00405bdf
    MOV dword ptr [0x01c35e6c],0x55d2e9 ; 00405c97 | DAT_01c35e6c
        ;   Label: LAB_00405c97
    JMP 0x00405c7c                      ; 00405ca1
        ;   XREF to: 00405c7c (UNCONDITIONAL_JUMP)  ; LAB_00405c7c
    CMP dword ptr [0x006141c0],0x20     ; 00405ca3 | DAT_006141c0
        ;   Label: LAB_00405ca3
    JNZ 0x00405cb8                      ; 00405caa
        ;   XREF to: 00405cb8 (CONDITIONAL_JUMP)  ; LAB_00405cb8
    MOV dword ptr [0x01c35e6c],0x55b3b1 ; 00405cac | DAT_01c35e6c | LAB_0055b3b1
    JMP 0x00405c7c                      ; 00405cb6
        ;   XREF to: 00405c7c (UNCONDITIONAL_JUMP)  ; LAB_00405c7c
    MOV dword ptr [0x01c35e6c],0x55bb93 ; 00405cb8 | DAT_01c35e6c | LAB_0055bb93
        ;   Label: LAB_00405cb8
    JMP 0x00405c7c                      ; 00405cc2
        ;   XREF to: 00405c7c (UNCONDITIONAL_JUMP)  ; LAB_00405c7c
    PUSH 0x70ca98                       ; 00405cc4 | DAT_0070ca98
        ;   Label: LAB_00405cc4
    MOV ESI,dword ptr [EDI + 0x4]       ; 00405cc9
    PUSH ESI                            ; 00405ccc
    CALL FUN_00431d90                   ; 00405ccd
        ;   XREF to: 00431d90 (UNCONDITIONAL_CALL)  ; undefined FUN_00431d90()
    ADD ESP,0x8                         ; 00405cd2
    POP EBX                             ; 00405cd5
    MOV EDX,dword ptr [EDI + 0x4]       ; 00405cd6
        ;   Label: LAB_00405cd6
    LEA EAX,[EDX*0x4 + 0x0]             ; 00405cd9
    SUB EAX,EDX                         ; 00405ce0
    LEA EDX,[EAX*0x4 + 0x0]             ; 00405ce2
    LEA EAX,[EDI + 0x18]                ; 00405ce9
    MOV EBP,dword ptr [0x0070ca60]      ; 00405cec | DAT_0070ca60
    ADD EAX,EDX                         ; 00405cf2
    POP EBP                             ; 00405cf4
    POP EDI                             ; 00405cf5
    POP ESI                             ; 00405cf6
    RET                                 ; 00405cf7

