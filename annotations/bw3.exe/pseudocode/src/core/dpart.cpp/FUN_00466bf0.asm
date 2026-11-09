; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dpart_cpp_FUN_00466bf0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_01bdcfd4
;   undefined4 DAT_01bdd4d8
;   undefined4 DAT_01bdd4dc
;   undefined4 DAT_01bdd520
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466bf0
        ;   Label: core_dpart.cpp_FUN_00466bf0
    PUSH EDI                            ; 00466bf1
    PUSH EBP                            ; 00466bf2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00466bf3
    MOV EDI,dword ptr [ESP + 0x14]      ; 00466bf7
    MOV EDX,dword ptr [EDI + 0x14]      ; 00466bfb
    MOV EAX,dword ptr [EBX + 0x14]      ; 00466bfe
    SAR EDX,0x10                        ; 00466c01
    SAR EAX,0x10                        ; 00466c04
    CMP EAX,EDX                         ; 00466c07
    JZ 0x00466cee                       ; 00466c09
        ;   XREF to: 00466cee (CONDITIONAL_JUMP)  ; LAB_00466cee
    PUSH ESI                            ; 00466c0f
    MOV ESI,dword ptr [EDI + 0x14]      ; 00466c10
    CMP ESI,dword ptr [EBX + 0x14]      ; 00466c13
    JGE 0x00466c24                      ; 00466c16
        ;   XREF to: 00466c24 (CONDITIONAL_JUMP)  ; LAB_00466c24
    MOV ECX,EBX                         ; 00466c18
    MOV EBX,EDI                         ; 00466c1a
    MOV EDI,ECX                         ; 00466c1c
    MOV ECX,EAX                         ; 00466c1e
    MOV EAX,EDX                         ; 00466c20
    MOV EDX,ECX                         ; 00466c22
    MOV ESI,dword ptr [0x01bdcfd4]      ; 00466c24 | DAT_01bdcfd4
        ;   Label: LAB_00466c24
    LEA ECX,[ESI*0x4 + 0x0]             ; 00466c2a
    ADD ECX,ESI                         ; 00466c31
    MOV ESI,0x1bdcfd8                   ; 00466c33
    SHL ECX,0x4                         ; 00466c38
    ADD ESI,ECX                         ; 00466c3b
    MOV dword ptr [ESI],EAX             ; 00466c3d
    MOV EBP,dword ptr [0x01bdd4d8]      ; 00466c3f | DAT_01bdd4d8
    MOV dword ptr [ESI + 0x4],EDX       ; 00466c45
    CMP EAX,EBP                         ; 00466c48
    JGE 0x00466c51                      ; 00466c4a
        ;   XREF to: 00466c51 (CONDITIONAL_JUMP)  ; LAB_00466c51
    MOV [0x01bdd4d8],EAX                ; 00466c4c | DAT_01bdd4d8
    CMP EDX,dword ptr [0x01bdd4dc]      ; 00466c51 | DAT_01bdd4dc
        ;   Label: LAB_00466c51
    JLE 0x00466c5f                      ; 00466c57
        ;   XREF to: 00466c5f (CONDITIONAL_JUMP)  ; LAB_00466c5f
    MOV dword ptr [0x01bdd4dc],EDX      ; 00466c59 | DAT_01bdd4dc
    MOV EDX,dword ptr [EBX + 0x14]      ; 00466c5f
        ;   Label: LAB_00466c5f
    MOV ECX,dword ptr [EDI + 0x14]      ; 00466c62
    SUB ECX,EDX                         ; 00466c65
    CMP ECX,0x10000                     ; 00466c67
    JNC 0x00466cf2                      ; 00466c6d
        ;   XREF to: 00466cf2 (CONDITIONAL_JUMP)  ; LAB_00466cf2
    XOR ECX,ECX                         ; 00466c73
    MOV EDX,dword ptr [EDI + 0x10]      ; 00466c75
        ;   Label: LAB_00466c75
    MOV EBP,dword ptr [EBX + 0x10]      ; 00466c78
    MOV EAX,ECX                         ; 00466c7b
    SUB EDX,EBP                         ; 00466c7d
    IMUL EDX                            ; 00466c7f
    SHRD EAX,EDX,0x10                   ; 00466c81
    MOV dword ptr [ESI + 0xc],EAX       ; 00466c85
    MOV EAX,dword ptr [EDI + 0x8]       ; 00466c88
    MOV EDX,dword ptr [EBX + 0x8]       ; 00466c8b
    SUB EAX,EDX                         ; 00466c8e
    MOV EDX,EAX                         ; 00466c90
    SHL EDX,0x8                         ; 00466c92
    MOV EAX,ECX                         ; 00466c95
    IMUL EDX                            ; 00466c97
    SHRD EAX,EDX,0x10                   ; 00466c99
    MOV dword ptr [ESI + 0x2c],EAX      ; 00466c9d
    MOV ECX,dword ptr [EBX + 0x14]      ; 00466ca0
    AND ECX,0xffff                      ; 00466ca3
    XOR CX,0xffff                       ; 00466ca9
    MOV EDX,dword ptr [ESI + 0xc]       ; 00466cad
    MOV EAX,ECX                         ; 00466cb0
    IMUL EDX                            ; 00466cb2
    SHRD EAX,EDX,0x10                   ; 00466cb4
    MOV EDX,EAX                         ; 00466cb8
    MOV EAX,dword ptr [EBX + 0x10]      ; 00466cba
    MOV EDI,dword ptr [0x01bdd520]      ; 00466cbd | DAT_01bdd520
    ADD EAX,EDX                         ; 00466cc3
    MOV EDX,dword ptr [ESI + 0x2c]      ; 00466cc5
    MOV dword ptr [ESI + 0x8],EAX       ; 00466cc8
    MOV EAX,ECX                         ; 00466ccb
    MOV EBX,dword ptr [EBX + 0x8]       ; 00466ccd
    IMUL EDX                            ; 00466cd0
    SHRD EAX,EDX,0x10                   ; 00466cd2
    SHL EBX,0x8                         ; 00466cd6
    MOV EBP,dword ptr [0x01bdcfd4]      ; 00466cd9 | DAT_01bdcfd4
    SUB EBX,EDI                         ; 00466cdf
    INC EBP                             ; 00466ce1
    ADD EBX,EAX                         ; 00466ce2
    MOV dword ptr [0x01bdcfd4],EBP      ; 00466ce4 | DAT_01bdcfd4
    MOV dword ptr [ESI + 0x28],EBX      ; 00466cea
    POP ESI                             ; 00466ced
    POP EBP                             ; 00466cee
        ;   Label: LAB_00466cee
    POP EDI                             ; 00466cef
    POP EBX                             ; 00466cf0
    RET                                 ; 00466cf1
    MOV EAX,0xffffffff                  ; 00466cf2
        ;   Label: LAB_00466cf2
    XOR EDX,EDX                         ; 00466cf7
    DIV ECX                             ; 00466cf9
    MOV ECX,EAX                         ; 00466cfb
    JMP 0x00466c75                      ; 00466cfd
        ;   XREF to: 00466c75 (UNCONDITIONAL_JUMP)  ; LAB_00466c75

