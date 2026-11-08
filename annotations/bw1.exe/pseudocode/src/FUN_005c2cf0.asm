; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005c2cf0(int *param_1,uint *param_2)
;
;
; XREF[1]:
;   FUN_005c2d94 at 005c2da7
;
; Referenced Globals:
;   undefined4 DAT_00626220
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c2cf0
        ;   Label: FUN_005c2cf0
    PUSH EBP                            ; 005c2cf1
    MOV ECX,dword ptr [ESP + 0xc]       ; 005c2cf2
    MOV EAX,dword ptr [ESP + 0x10]      ; 005c2cf6
    TEST EAX,EAX                        ; 005c2cfa
    JNZ 0x005c2d06                      ; 005c2cfc
        ;   XREF to: 005c2d06 (CONDITIONAL_JUMP)  ; LAB_005c2d06
    MOV EAX,0x1                         ; 005c2cfe
    POP EBP                             ; 005c2d03
    POP EBX                             ; 005c2d04
    RET                                 ; 005c2d05
    MOV EDX,dword ptr [ECX]             ; 005c2d06
        ;   Label: LAB_005c2d06
    TEST EDX,EDX                        ; 005c2d08
    JNZ 0x005c2d11                      ; 005c2d0a
        ;   XREF to: 005c2d11 (CONDITIONAL_JUMP)  ; LAB_005c2d11
    LEA EDX,[EAX + 0x2c]                ; 005c2d0c
    JMP 0x005c2d46                      ; 005c2d0f
        ;   XREF to: 005c2d46 (UNCONDITIONAL_JUMP)  ; LAB_005c2d46
    MOV EAX,[0x00626220]                ; 005c2d11 | DAT_00626220
        ;   Label: LAB_005c2d11
    CMP dword ptr [EAX + 0x8],0x0       ; 005c2d16
    JZ 0x005c2d31                       ; 005c2d1a
        ;   XREF to: 005c2d31 (CONDITIONAL_JUMP)  ; LAB_005c2d31
    CMP EAX,EDX                         ; 005c2d1c
        ;   Label: LAB_005c2d1c
    JA 0x005c2d28                       ; 005c2d1e
        ;   XREF to: 005c2d28 (CONDITIONAL_JUMP)  ; LAB_005c2d28
    MOV EBX,dword ptr [EAX]             ; 005c2d20
    ADD EBX,EAX                         ; 005c2d22
    CMP EBX,EDX                         ; 005c2d24
    JA 0x005c2d31                       ; 005c2d26
        ;   XREF to: 005c2d31 (CONDITIONAL_JUMP)  ; LAB_005c2d31
    MOV EAX,dword ptr [EAX + 0x8]       ; 005c2d28
        ;   Label: LAB_005c2d28
    CMP dword ptr [EAX + 0x8],0x0       ; 005c2d2b
    JNZ 0x005c2d1c                      ; 005c2d2f
        ;   XREF to: 005c2d1c (CONDITIONAL_JUMP)  ; LAB_005c2d1c
    MOV EBX,dword ptr [EDX]             ; 005c2d31
        ;   Label: LAB_005c2d31
    AND BL,0xfe                         ; 005c2d33
    ADD EBX,EDX                         ; 005c2d36
    CMP EBX,EDX                         ; 005c2d38
    JA 0x005c2d44                       ; 005c2d3a
        ;   XREF to: 005c2d44 (CONDITIONAL_JUMP)  ; LAB_005c2d44
    MOV EAX,0x3                         ; 005c2d3c
    POP EBP                             ; 005c2d41
    POP EBX                             ; 005c2d42
    RET                                 ; 005c2d43
    MOV EDX,EBX                         ; 005c2d44
        ;   Label: LAB_005c2d44
    CMP dword ptr [EDX],-0x1            ; 005c2d46
        ;   Label: LAB_005c2d46
    JNZ 0x005c2d6f                      ; 005c2d49
        ;   XREF to: 005c2d6f (CONDITIONAL_JUMP)  ; LAB_005c2d6f
    MOV EBP,dword ptr [EAX + 0x8]       ; 005c2d4b
    TEST EBP,EBP                        ; 005c2d4e
    JNZ 0x005c2d68                      ; 005c2d50
        ;   XREF to: 005c2d68 (CONDITIONAL_JUMP)  ; LAB_005c2d68
    MOV word ptr [ECX + 0x4],0x0        ; 005c2d52
    MOV dword ptr [ECX + 0xa],EBP       ; 005c2d58
    MOV dword ptr [ECX + 0x6],EBP       ; 005c2d5b
    MOV EAX,0x4                         ; 005c2d5e
    MOV dword ptr [ECX],EBP             ; 005c2d63
    POP EBP                             ; 005c2d65
    POP EBX                             ; 005c2d66
    RET                                 ; 005c2d67
    MOV EAX,EBP                         ; 005c2d68
        ;   Label: LAB_005c2d68
    LEA EDX,[EBP + 0x2c]                ; 005c2d6a
    JMP 0x005c2d46                      ; 005c2d6d
        ;   XREF to: 005c2d46 (UNCONDITIONAL_JUMP)  ; LAB_005c2d46
    MOV dword ptr [ECX + 0xa],0x1       ; 005c2d6f
        ;   Label: LAB_005c2d6f
    MOV word ptr [ECX + 0x4],DS         ; 005c2d76
    MOV dword ptr [ECX],EDX             ; 005c2d79
    MOV EAX,dword ptr [EDX]             ; 005c2d7b
    AND AL,0xfe                         ; 005c2d7d
    MOV dword ptr [ECX + 0x6],EAX       ; 005c2d7f
    TEST byte ptr [EDX],0x1             ; 005c2d82
    JZ 0x005c2d8e                       ; 005c2d85
        ;   XREF to: 005c2d8e (CONDITIONAL_JUMP)  ; LAB_005c2d8e
    MOV dword ptr [ECX + 0xa],0x0       ; 005c2d87
    XOR EAX,EAX                         ; 005c2d8e
        ;   Label: LAB_005c2d8e
    POP EBP                             ; 005c2d90
    POP EBX                             ; 005c2d91
    RET                                 ; 005c2d92

