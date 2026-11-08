; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570a40(int param_1)
;
;
; XREF[1]:
;   FUN_00570f30 at 00570fea
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570a40
        ;   Label: FUN_00570a40
    PUSH ESI                            ; 00570a41
    MOV EDX,dword ptr [ESP + 0xc]       ; 00570a42
    MOV ECX,dword ptr [EDX + 0x20]      ; 00570a46
    CMP ECX,0x1                         ; 00570a49
    JNZ 0x00570aed                      ; 00570a4c
        ;   XREF to: 00570aed (CONDITIONAL_JUMP)  ; LAB_00570aed
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570a52
    FLD float ptr [ECX]                 ; 00570a55
    FCOMP double ptr [EDX + 0x4]        ; 00570a57
    FNSTSW AX                           ; 00570a5a
    SAHF                                ; 00570a5c
    JZ 0x00570ad1                       ; 00570a5d
        ;   XREF to: 00570ad1 (CONDITIONAL_JUMP)  ; LAB_00570ad1
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570a5f
        ;   Label: LAB_00570a5f
    MOV BL,byte ptr [EDX + 0x118]       ; 00570a62
    FLD float ptr [ECX]                 ; 00570a68
    OR BL,0x2                           ; 00570a6a
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570a6d
    FSTP double ptr [EDX + 0x4]         ; 00570a70
    FLD float ptr [ECX + 0x4]           ; 00570a73
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570a76
    FSTP double ptr [EDX + 0xc]         ; 00570a79
    FLD float ptr [ECX + 0x8]           ; 00570a7c
    FSTP double ptr [EDX + 0x14]        ; 00570a7f
    MOV byte ptr [EDX + 0x118],BL       ; 00570a82
    MOV ESI,dword ptr [EDX + 0x34]      ; 00570a88
        ;   Label: LAB_00570a88
    CMP ESI,0x1                         ; 00570a8b
    JNZ 0x00570b6f                      ; 00570a8e
        ;   XREF to: 00570b6f (CONDITIONAL_JUMP)  ; LAB_00570b6f
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570a94
    FLD float ptr [EDX + 0x24]          ; 00570a97
    FCOMP float ptr [ECX]               ; 00570a9a
    FNSTSW AX                           ; 00570a9c
    SAHF                                ; 00570a9e
    JZ 0x00570b4e                       ; 00570a9f
        ;   XREF to: 00570b4e (CONDITIONAL_JUMP)  ; LAB_00570b4e
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570aa5
        ;   Label: LAB_00570aa5
    FLD float ptr [ECX]                 ; 00570aa8
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570aaa
    FSTP float ptr [EDX + 0x24]         ; 00570aad
    FLD float ptr [ECX + 0x4]           ; 00570ab0
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570ab3
    FSTP float ptr [EDX + 0x28]         ; 00570ab6
    FLD float ptr [ECX + 0x8]           ; 00570ab9
    MOV CL,byte ptr [EDX + 0x118]       ; 00570abc
    OR CL,0x4                           ; 00570ac2
    FSTP float ptr [EDX + 0x2c]         ; 00570ac5
    MOV byte ptr [EDX + 0x118],CL       ; 00570ac8
    POP ESI                             ; 00570ace
        ;   Label: LAB_00570ace
    POP EBX                             ; 00570acf
    RET                                 ; 00570ad0
    FLD float ptr [ECX + 0x4]           ; 00570ad1
        ;   Label: LAB_00570ad1
    FCOMP double ptr [EDX + 0xc]        ; 00570ad4
    FNSTSW AX                           ; 00570ad7
    SAHF                                ; 00570ad9
    JNZ 0x00570a5f                      ; 00570ada
        ;   XREF to: 00570a5f (CONDITIONAL_JUMP)  ; LAB_00570a5f
    FLD float ptr [ECX + 0x8]           ; 00570adc
    FCOMP double ptr [EDX + 0x14]       ; 00570adf
    FNSTSW AX                           ; 00570ae2
    SAHF                                ; 00570ae4
    JNZ 0x00570a5f                      ; 00570ae5
        ;   XREF to: 00570a5f (CONDITIONAL_JUMP)  ; LAB_00570a5f
    JMP 0x00570a88                      ; 00570aeb
        ;   XREF to: 00570a88 (UNCONDITIONAL_JUMP)  ; LAB_00570a88
    CMP ECX,0x2                         ; 00570aed
        ;   Label: LAB_00570aed
    JNZ 0x00570a88                      ; 00570af0
        ;   XREF to: 00570a88 (CONDITIONAL_JUMP)  ; LAB_00570a88
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570af2
    FLD double ptr [EDX + 0x4]          ; 00570af5
    FCOMP double ptr [ECX]              ; 00570af8
    FNSTSW AX                           ; 00570afa
    SAHF                                ; 00570afc
    JZ 0x00570b33                       ; 00570afd
        ;   XREF to: 00570b33 (CONDITIONAL_JUMP)  ; LAB_00570b33
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570aff
        ;   Label: LAB_00570aff
    MOV AH,byte ptr [EDX + 0x118]       ; 00570b02
    FLD double ptr [ECX]                ; 00570b08
    OR AH,0x2                           ; 00570b0a
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570b0d
    FSTP double ptr [EDX + 0x4]         ; 00570b10
    FLD double ptr [ECX + 0x8]          ; 00570b13
    MOV ECX,dword ptr [EDX + 0x1c]      ; 00570b16
    FSTP double ptr [EDX + 0xc]         ; 00570b19
    MOV EBX,dword ptr [ECX + 0x10]      ; 00570b1c
    MOV dword ptr [EDX + 0x14],EBX      ; 00570b1f
    MOV EBX,dword ptr [ECX + 0x14]      ; 00570b22
    MOV dword ptr [EDX + 0x18],EBX      ; 00570b25
    MOV byte ptr [EDX + 0x118],AH       ; 00570b28
    JMP 0x00570a88                      ; 00570b2e
        ;   XREF to: 00570a88 (UNCONDITIONAL_JUMP)  ; LAB_00570a88
    FLD double ptr [EDX + 0xc]          ; 00570b33
        ;   Label: LAB_00570b33
    FCOMP double ptr [ECX + 0x8]        ; 00570b36
    FNSTSW AX                           ; 00570b39
    SAHF                                ; 00570b3b
    JNZ 0x00570aff                      ; 00570b3c
        ;   XREF to: 00570aff (CONDITIONAL_JUMP)  ; LAB_00570aff
    FLD double ptr [EDX + 0x14]         ; 00570b3e
    FCOMP double ptr [ECX + 0x10]       ; 00570b41
    FNSTSW AX                           ; 00570b44
    SAHF                                ; 00570b46
    JNZ 0x00570aff                      ; 00570b47
        ;   XREF to: 00570aff (CONDITIONAL_JUMP)  ; LAB_00570aff
    JMP 0x00570a88                      ; 00570b49
        ;   XREF to: 00570a88 (UNCONDITIONAL_JUMP)  ; LAB_00570a88
    FLD float ptr [EDX + 0x28]          ; 00570b4e
        ;   Label: LAB_00570b4e
    FCOMP float ptr [ECX + 0x4]         ; 00570b51
    FNSTSW AX                           ; 00570b54
    SAHF                                ; 00570b56
    JNZ 0x00570aa5                      ; 00570b57
        ;   XREF to: 00570aa5 (CONDITIONAL_JUMP)  ; LAB_00570aa5
    FLD float ptr [EDX + 0x2c]          ; 00570b5d
    FCOMP float ptr [ECX + 0x8]         ; 00570b60
    FNSTSW AX                           ; 00570b63
    SAHF                                ; 00570b65
    JNZ 0x00570aa5                      ; 00570b66
        ;   XREF to: 00570aa5 (CONDITIONAL_JUMP)  ; LAB_00570aa5
    POP ESI                             ; 00570b6c
    POP EBX                             ; 00570b6d
    RET                                 ; 00570b6e
    CMP ESI,0x2                         ; 00570b6f
        ;   Label: LAB_00570b6f
    JNZ 0x00570ace                      ; 00570b72
        ;   XREF to: 00570ace (CONDITIONAL_JUMP)  ; LAB_00570ace
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570b78
    FLD float ptr [EDX + 0x24]          ; 00570b7b
    FCOMP double ptr [ECX]              ; 00570b7e
    FNSTSW AX                           ; 00570b80
    SAHF                                ; 00570b82
    JZ 0x00570bb1                       ; 00570b83
        ;   XREF to: 00570bb1 (CONDITIONAL_JUMP)  ; LAB_00570bb1
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570b85
        ;   Label: LAB_00570b85
    MOV BH,byte ptr [EDX + 0x118]       ; 00570b88
    FLD double ptr [ECX]                ; 00570b8e
    OR BH,0x4                           ; 00570b90
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570b93
    FSTP float ptr [EDX + 0x24]         ; 00570b96
    FLD double ptr [ECX + 0x8]          ; 00570b99
    MOV ECX,dword ptr [EDX + 0x30]      ; 00570b9c
    FSTP float ptr [EDX + 0x28]         ; 00570b9f
    FLD double ptr [ECX + 0x10]         ; 00570ba2
    FSTP float ptr [EDX + 0x2c]         ; 00570ba5
    MOV byte ptr [EDX + 0x118],BH       ; 00570ba8
    POP ESI                             ; 00570bae
    POP EBX                             ; 00570baf
    RET                                 ; 00570bb0
    FLD float ptr [EDX + 0x28]          ; 00570bb1
        ;   Label: LAB_00570bb1
    FCOMP double ptr [ECX + 0x8]        ; 00570bb4
    FNSTSW AX                           ; 00570bb7
    SAHF                                ; 00570bb9
    JNZ 0x00570b85                      ; 00570bba
        ;   XREF to: 00570b85 (CONDITIONAL_JUMP)  ; LAB_00570b85
    FLD float ptr [EDX + 0x2c]          ; 00570bbc
    FCOMP double ptr [ECX + 0x10]       ; 00570bbf
    FNSTSW AX                           ; 00570bc2
    SAHF                                ; 00570bc4
    JNZ 0x00570b85                      ; 00570bc5
        ;   XREF to: 00570b85 (CONDITIONAL_JUMP)  ; LAB_00570b85
    POP ESI                             ; 00570bc7
    POP EBX                             ; 00570bc8
    RET                                 ; 00570bc9

