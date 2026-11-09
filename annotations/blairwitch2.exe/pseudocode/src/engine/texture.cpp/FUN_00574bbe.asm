; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00574bbe(int param_1,undefined4 param_2,int param_3)
;
;
; Called Functions:
;   crt_unknown.c_FUN_005b8010
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 00574bbe
        ;   Label: engine_texture.cpp_FUN_00574bbe
    PUSH EBX                            ; 00574bc0
    PUSH ESI                            ; 00574bc1
    PUSH EDI                            ; 00574bc2
    PUSH EBP                            ; 00574bc3
    SUB ESP,0x4                         ; 00574bc4
    MOV ESI,dword ptr [ESP + 0x18]      ; 00574bc7
    MOV EBP,dword ptr [ESP + 0x20]      ; 00574bcb
    XOR EDX,EDX                         ; 00574bcf
    TEST EBP,EBP                        ; 00574bd1
    JZ 0x00574c5d                       ; 00574bd3
        ;   XREF to: 00574c5d (CONDITIONAL_JUMP)  ; LAB_00574c5d
    MOV ECX,dword ptr [ESI + 0x18004]   ; 00574bd9
    XOR EBX,EBX                         ; 00574bdf
    TEST ECX,ECX                        ; 00574be1
    JLE 0x00574bfb                      ; 00574be3
        ;   XREF to: 00574bfb (CONDITIONAL_JUMP)  ; LAB_00574bfb
    MOV EAX,ESI                         ; 00574be5
    CMP EBP,dword ptr [EAX + 0x4]       ; 00574be7
        ;   Label: LAB_00574be7
    JNZ 0x00574bed                      ; 00574bea
        ;   XREF to: 00574bed (CONDITIONAL_JUMP)  ; LAB_00574bed
    INC EDX                             ; 00574bec
    INC EBX                             ; 00574bed
        ;   Label: LAB_00574bed
    MOV ECX,dword ptr [ESI + 0x18004]   ; 00574bee
    ADD EAX,0x60                        ; 00574bf4
    CMP EBX,ECX                         ; 00574bf7
    JL 0x00574be7                       ; 00574bf9
        ;   XREF to: 00574be7 (CONDITIONAL_JUMP)  ; LAB_00574be7
    PUSH EBP                            ; 00574bfb
        ;   Label: LAB_00574bfb
    PUSH EBP                            ; 00574bfc
    PUSH EDX                            ; 00574bfd
    PUSH 0x5ec9a7                       ; 00574bfe
    MOV EBX,dword ptr [ESP + 0x2c]      ; 00574c03
    PUSH EBX                            ; 00574c07
    CALL crt_unknown.c_FUN_005b8010     ; 00574c08
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0x14                        ; 00574c0d
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00574c10
    XOR EBX,EBX                         ; 00574c16
    TEST EDI,EDI                        ; 00574c18
    JLE 0x00574c3a                      ; 00574c1a
        ;   XREF to: 00574c3a (CONDITIONAL_JUMP)  ; LAB_00574c3a
    LEA EAX,[ESI + 0x4]                 ; 00574c1c
    MOV EDI,ESI                         ; 00574c1f
    MOV dword ptr [ESP],EAX             ; 00574c21
    IMUL EAX,EBX,0x60                   ; 00574c24
        ;   Label: LAB_00574c24
    CMP EBP,dword ptr [EDI + 0x4]       ; 00574c27
    JZ 0x00574c42                       ; 00574c2a
        ;   XREF to: 00574c42 (CONDITIONAL_JUMP)  ; LAB_00574c42
    INC EBX                             ; 00574c2c
        ;   Label: LAB_00574c2c
    MOV EAX,dword ptr [ESI + 0x18004]   ; 00574c2d
    ADD EDI,0x60                        ; 00574c33
    CMP EBX,EAX                         ; 00574c36
    JL 0x00574c24                       ; 00574c38
        ;   XREF to: 00574c24 (CONDITIONAL_JUMP)  ; LAB_00574c24
    ADD ESP,0x4                         ; 00574c3a
        ;   Label: LAB_00574c3a
    POP EBP                             ; 00574c3d
    POP EDI                             ; 00574c3e
    POP ESI                             ; 00574c3f
    POP EBX                             ; 00574c40
    RET                                 ; 00574c41
    ADD EAX,dword ptr [ESP]             ; 00574c42
        ;   Label: LAB_00574c42
    ADD EAX,0x4                         ; 00574c45
    PUSH EAX                            ; 00574c48
    PUSH 0x5ec9ba                       ; 00574c49
    MOV EAX,dword ptr [ESP + 0x24]      ; 00574c4e
    PUSH EAX                            ; 00574c52
    CALL crt_unknown.c_FUN_005b8010     ; 00574c53
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00574c58
    JMP 0x00574c2c                      ; 00574c5b
        ;   XREF to: 00574c2c (UNCONDITIONAL_JUMP)  ; LAB_00574c2c
    MOV EDX,dword ptr [ESI + 0x18004]   ; 00574c5d
        ;   Label: LAB_00574c5d
    XOR EBX,EBX                         ; 00574c63
    XOR EAX,EAX                         ; 00574c65
    TEST EDX,EDX                        ; 00574c67
    JLE 0x00574cb6                      ; 00574c69
        ;   XREF to: 00574cb6 (CONDITIONAL_JUMP)  ; LAB_00574cb6
    LEA ECX,[ESI + 0x4]                 ; 00574c6b
    MOV EDI,dword ptr [ECX + 0x44]      ; 00574c6e
        ;   Label: LAB_00574c6e
    MOV EDX,ECX                         ; 00574c71
    TEST EDI,EDI                        ; 00574c73
    JZ 0x00574c7e                       ; 00574c75
        ;   XREF to: 00574c7e (CONDITIONAL_JUMP)  ; LAB_00574c7e
    MOV EDI,dword ptr [ECX]             ; 00574c77
    IMUL EDI,EDI                        ; 00574c79
    ADD EAX,EDI                         ; 00574c7c
    CMP dword ptr [EDX + 0x48],0x0      ; 00574c7e
        ;   Label: LAB_00574c7e
    JZ 0x00574c8b                       ; 00574c82
        ;   XREF to: 00574c8b (CONDITIONAL_JUMP)  ; LAB_00574c8b
    MOV EDI,dword ptr [EDX]             ; 00574c84
    IMUL EDI,EDI                        ; 00574c86
    ADD EAX,EDI                         ; 00574c89
    CMP dword ptr [EDX + 0x4c],0x0      ; 00574c8b
        ;   Label: LAB_00574c8b
    JZ 0x00574c96                       ; 00574c8f
        ;   XREF to: 00574c96 (CONDITIONAL_JUMP)  ; LAB_00574c96
    ADD EAX,0x300                       ; 00574c91
    CMP dword ptr [EDX + 0x50],0x0      ; 00574c96
        ;   Label: LAB_00574c96
    JZ 0x00574ca8                       ; 00574c9a
        ;   XREF to: 00574ca8 (CONDITIONAL_JUMP)  ; LAB_00574ca8
    MOV EDI,dword ptr [EDX]             ; 00574c9c
    MOV EDX,EDI                         ; 00574c9e
    IMUL EDX,EDI                        ; 00574ca0
    SHL EDX,0x2                         ; 00574ca3
    ADD EAX,EDX                         ; 00574ca6
    INC EBX                             ; 00574ca8
        ;   Label: LAB_00574ca8
    MOV EDI,dword ptr [ESI + 0x18004]   ; 00574ca9
    ADD ECX,0x60                        ; 00574caf
    CMP EBX,EDI                         ; 00574cb2
    JL 0x00574c6e                       ; 00574cb4
        ;   XREF to: 00574c6e (CONDITIONAL_JUMP)  ; LAB_00574c6e
    PUSH EAX                            ; 00574cb6
        ;   Label: LAB_00574cb6
    PUSH 0x5ec9be                       ; 00574cb7
    MOV EBP,dword ptr [ESP + 0x24]      ; 00574cbc
    PUSH EBP                            ; 00574cc0
    CALL crt_unknown.c_FUN_005b8010     ; 00574cc1
        ;   XREF to: 005b8010 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b8010()
    ADD ESP,0xc                         ; 00574cc6
    ADD ESP,0x4                         ; 00574cc9
    POP EBP                             ; 00574ccc
    POP EDI                             ; 00574ccd
    POP ESI                             ; 00574cce
    POP EBX                             ; 00574ccf
    RET                                 ; 00574cd0

