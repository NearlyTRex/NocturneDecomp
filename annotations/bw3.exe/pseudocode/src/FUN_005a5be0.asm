; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a5be0(int *param_1,uint *param_2)
;
;
; XREF[1]:
;   FUN_005a5c84 at 005a5c97
;
; Referenced Globals:
;   undefined4 DAT_006075c4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a5be0
        ;   Label: FUN_005a5be0
    PUSH EBP                            ; 005a5be1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005a5be2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005a5be6
    TEST EAX,EAX                        ; 005a5bea
    JNZ 0x005a5bf6                      ; 005a5bec
        ;   XREF to: 005a5bf6 (CONDITIONAL_JUMP)  ; LAB_005a5bf6
    MOV EAX,0x1                         ; 005a5bee
    POP EBP                             ; 005a5bf3
    POP EBX                             ; 005a5bf4
    RET                                 ; 005a5bf5
    MOV EDX,dword ptr [ECX]             ; 005a5bf6
        ;   Label: LAB_005a5bf6
    TEST EDX,EDX                        ; 005a5bf8
    JNZ 0x005a5c01                      ; 005a5bfa
        ;   XREF to: 005a5c01 (CONDITIONAL_JUMP)  ; LAB_005a5c01
    LEA EDX,[EAX + 0x2c]                ; 005a5bfc
    JMP 0x005a5c36                      ; 005a5bff
        ;   XREF to: 005a5c36 (UNCONDITIONAL_JUMP)  ; LAB_005a5c36
    MOV EAX,[0x006075c4]                ; 005a5c01 | DAT_006075c4
        ;   Label: LAB_005a5c01
    CMP dword ptr [EAX + 0x8],0x0       ; 005a5c06
    JZ 0x005a5c21                       ; 005a5c0a
        ;   XREF to: 005a5c21 (CONDITIONAL_JUMP)  ; LAB_005a5c21
    CMP EAX,EDX                         ; 005a5c0c
        ;   Label: LAB_005a5c0c
    JA 0x005a5c18                       ; 005a5c0e
        ;   XREF to: 005a5c18 (CONDITIONAL_JUMP)  ; LAB_005a5c18
    MOV EBX,dword ptr [EAX]             ; 005a5c10
    ADD EBX,EAX                         ; 005a5c12
    CMP EBX,EDX                         ; 005a5c14
    JA 0x005a5c21                       ; 005a5c16
        ;   XREF to: 005a5c21 (CONDITIONAL_JUMP)  ; LAB_005a5c21
    MOV EAX,dword ptr [EAX + 0x8]       ; 005a5c18
        ;   Label: LAB_005a5c18
    CMP dword ptr [EAX + 0x8],0x0       ; 005a5c1b
    JNZ 0x005a5c0c                      ; 005a5c1f
        ;   XREF to: 005a5c0c (CONDITIONAL_JUMP)  ; LAB_005a5c0c
    MOV EBX,dword ptr [EDX]             ; 005a5c21
        ;   Label: LAB_005a5c21
    AND BL,0xfe                         ; 005a5c23
    ADD EBX,EDX                         ; 005a5c26
    CMP EBX,EDX                         ; 005a5c28
    JA 0x005a5c34                       ; 005a5c2a
        ;   XREF to: 005a5c34 (CONDITIONAL_JUMP)  ; LAB_005a5c34
    MOV EAX,0x3                         ; 005a5c2c
    POP EBP                             ; 005a5c31
    POP EBX                             ; 005a5c32
    RET                                 ; 005a5c33
    MOV EDX,EBX                         ; 005a5c34
        ;   Label: LAB_005a5c34
    CMP dword ptr [EDX],-0x1            ; 005a5c36
        ;   Label: LAB_005a5c36
    JNZ 0x005a5c5f                      ; 005a5c39
        ;   XREF to: 005a5c5f (CONDITIONAL_JUMP)  ; LAB_005a5c5f
    MOV EBP,dword ptr [EAX + 0x8]       ; 005a5c3b
    TEST EBP,EBP                        ; 005a5c3e
    JNZ 0x005a5c58                      ; 005a5c40
        ;   XREF to: 005a5c58 (CONDITIONAL_JUMP)  ; LAB_005a5c58
    MOV word ptr [ECX + 0x4],0x0        ; 005a5c42
    MOV dword ptr [ECX + 0xa],EBP       ; 005a5c48
    MOV dword ptr [ECX + 0x6],EBP       ; 005a5c4b
    MOV EAX,0x4                         ; 005a5c4e
    MOV dword ptr [ECX],EBP             ; 005a5c53
    POP EBP                             ; 005a5c55
    POP EBX                             ; 005a5c56
    RET                                 ; 005a5c57
    MOV EAX,EBP                         ; 005a5c58
        ;   Label: LAB_005a5c58
    LEA EDX,[EBP + 0x2c]                ; 005a5c5a
    JMP 0x005a5c36                      ; 005a5c5d
        ;   XREF to: 005a5c36 (UNCONDITIONAL_JUMP)  ; LAB_005a5c36
    MOV dword ptr [ECX + 0xa],0x1       ; 005a5c5f
        ;   Label: LAB_005a5c5f
    MOV word ptr [ECX + 0x4],DS         ; 005a5c66
    MOV dword ptr [ECX],EDX             ; 005a5c69
    MOV EAX,dword ptr [EDX]             ; 005a5c6b
    AND AL,0xfe                         ; 005a5c6d
    MOV dword ptr [ECX + 0x6],EAX       ; 005a5c6f
    TEST byte ptr [EDX],0x1             ; 005a5c72
    JZ 0x005a5c7e                       ; 005a5c75
        ;   XREF to: 005a5c7e (CONDITIONAL_JUMP)  ; LAB_005a5c7e
    MOV dword ptr [ECX + 0xa],0x0       ; 005a5c77
    XOR EAX,EAX                         ; 005a5c7e
        ;   Label: LAB_005a5c7e
    POP EBP                             ; 005a5c80
    POP EBX                             ; 005a5c81
    RET                                 ; 005a5c82

