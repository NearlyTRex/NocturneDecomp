; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_asgaya_cpp_FUN_005a1c00(void)
;
;
; Referenced Globals:
;   undefined4 DAT_01bdd520
;   undefined4 DAT_02d24d80
;   undefined4 DAT_02d25284
;   undefined4 DAT_02d25288
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a1c00
        ;   Label: core_asgaya.cpp_FUN_005a1c00
    PUSH EDI                            ; 005a1c01
    PUSH EBP                            ; 005a1c02
    SUB ESP,0x4                         ; 005a1c03
    MOV EBX,dword ptr [ESP + 0x14]      ; 005a1c06
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a1c0a
    MOV EDX,dword ptr [EDI + 0x14]      ; 005a1c0e
    MOV EAX,dword ptr [EBX + 0x14]      ; 005a1c11
    SAR EDX,0x10                        ; 005a1c14
    SAR EAX,0x10                        ; 005a1c17
    CMP EAX,EDX                         ; 005a1c1a
    JZ 0x005a1d05                       ; 005a1c1c
        ;   XREF to: 005a1d05 (CONDITIONAL_JUMP)  ; LAB_005a1d05
    PUSH ESI                            ; 005a1c22
    MOV ESI,dword ptr [EDI + 0x14]      ; 005a1c23
    CMP ESI,dword ptr [EBX + 0x14]      ; 005a1c26
    JGE 0x005a1c37                      ; 005a1c29
        ;   XREF to: 005a1c37 (CONDITIONAL_JUMP)  ; LAB_005a1c37
    MOV ECX,EBX                         ; 005a1c2b
    MOV EBX,EDI                         ; 005a1c2d
    MOV EDI,ECX                         ; 005a1c2f
    MOV ECX,EAX                         ; 005a1c31
    MOV EAX,EDX                         ; 005a1c33
    MOV EDX,ECX                         ; 005a1c35
    MOV ESI,dword ptr [0x02d24d80]      ; 005a1c37 | DAT_02d24d80
        ;   Label: LAB_005a1c37
    LEA ECX,[ESI*0x4 + 0x0]             ; 005a1c3d
    ADD ECX,ESI                         ; 005a1c44
    MOV ESI,0x2d24d84                   ; 005a1c46
    SHL ECX,0x4                         ; 005a1c4b
    ADD ESI,ECX                         ; 005a1c4e
    MOV dword ptr [ESI],EAX             ; 005a1c50
    MOV EBP,dword ptr [0x02d25284]      ; 005a1c52 | DAT_02d25284
    MOV dword ptr [ESI + 0x4],EDX       ; 005a1c58
    CMP EAX,EBP                         ; 005a1c5b
    JGE 0x005a1c64                      ; 005a1c5d
        ;   XREF to: 005a1c64 (CONDITIONAL_JUMP)  ; LAB_005a1c64
    MOV [0x02d25284],EAX                ; 005a1c5f | DAT_02d25284
    CMP EDX,dword ptr [0x02d25288]      ; 005a1c64 | DAT_02d25288
        ;   Label: LAB_005a1c64
    JLE 0x005a1c72                      ; 005a1c6a
        ;   XREF to: 005a1c72 (CONDITIONAL_JUMP)  ; LAB_005a1c72
    MOV dword ptr [0x02d25288],EDX      ; 005a1c6c | DAT_02d25288
    MOV EDX,dword ptr [EBX + 0x14]      ; 005a1c72
        ;   Label: LAB_005a1c72
    MOV ECX,dword ptr [EDI + 0x14]      ; 005a1c75
    SUB ECX,EDX                         ; 005a1c78
    CMP ECX,0x10000                     ; 005a1c7a
    JNC 0x005a1d0c                      ; 005a1c80
        ;   XREF to: 005a1d0c (CONDITIONAL_JUMP)  ; LAB_005a1d0c
    XOR ECX,ECX                         ; 005a1c86
    MOV EAX,dword ptr [EDI + 0x10]      ; 005a1c88
        ;   Label: LAB_005a1c88
    MOV EDX,dword ptr [EBX + 0x10]      ; 005a1c8b
    MOV EBP,dword ptr [EBX + 0x14]      ; 005a1c8e
    SUB EAX,EDX                         ; 005a1c91
    AND EBP,0xffff                      ; 005a1c93
    MOV EDX,EAX                         ; 005a1c99
    MOV EAX,ECX                         ; 005a1c9b
    XOR EBP,0xffff                      ; 005a1c9d
    IMUL EDX                            ; 005a1ca3
    SHRD EAX,EDX,0x10                   ; 005a1ca5
    MOV EDX,EAX                         ; 005a1ca9
    MOV dword ptr [ESI + 0xc],EAX       ; 005a1cab
    MOV EAX,EBP                         ; 005a1cae
    IMUL EDX                            ; 005a1cb0
    SHRD EAX,EDX,0x10                   ; 005a1cb2
    MOV dword ptr [ESP + 0x4],EAX       ; 005a1cb6
    MOV EDX,dword ptr [ESP + 0x4]       ; 005a1cba
    MOV EAX,dword ptr [EBX + 0x10]      ; 005a1cbe
    ADD EAX,EDX                         ; 005a1cc1
    MOV dword ptr [ESI + 0x8],EAX       ; 005a1cc3
    MOV EDX,dword ptr [EDI + 0x8]       ; 005a1cc6
    SUB EDX,dword ptr [EBX + 0x8]       ; 005a1cc9
    MOV EAX,ECX                         ; 005a1ccc
    SHL EDX,0x8                         ; 005a1cce
    IMUL EDX                            ; 005a1cd1
    SHRD EAX,EDX,0x10                   ; 005a1cd3
    MOV dword ptr [ESI + 0x2c],EAX      ; 005a1cd7
    MOV ECX,dword ptr [EBX + 0x8]       ; 005a1cda
    MOV EAX,[0x01bdd520]                ; 005a1cdd | DAT_01bdd520
    SHL ECX,0x8                         ; 005a1ce2
    MOV EDX,dword ptr [ESI + 0x2c]      ; 005a1ce5
    SUB ECX,EAX                         ; 005a1ce8
    MOV EAX,EBP                         ; 005a1cea
    IMUL EDX                            ; 005a1cec
    SHRD EAX,EDX,0x10                   ; 005a1cee
    MOV EDX,dword ptr [0x02d24d80]      ; 005a1cf2 | DAT_02d24d80
    ADD ECX,EAX                         ; 005a1cf8
    INC EDX                             ; 005a1cfa
    MOV dword ptr [ESI + 0x28],ECX      ; 005a1cfb
    MOV dword ptr [0x02d24d80],EDX      ; 005a1cfe | DAT_02d24d80
    POP ESI                             ; 005a1d04
    ADD ESP,0x4                         ; 005a1d05
        ;   Label: LAB_005a1d05
    POP EBP                             ; 005a1d08
    POP EDI                             ; 005a1d09
    POP EBX                             ; 005a1d0a
    RET                                 ; 005a1d0b
    MOV EAX,0xffffffff                  ; 005a1d0c
        ;   Label: LAB_005a1d0c
    XOR EDX,EDX                         ; 005a1d11
    DIV ECX                             ; 005a1d13
    MOV ECX,EAX                         ; 005a1d15
    JMP 0x005a1c88                      ; 005a1d17
        ;   XREF to: 005a1c88 (UNCONDITIONAL_JUMP)  ; LAB_005a1c88

