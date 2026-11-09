; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_dcamera_cpp_FUN_00440a4e(int param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01308800
;   undefined4 DAT_01510718
;   undefined4 DAT_0151071c
;   undefined4 DAT_01510720
;   undefined4 DAT_01510724
;   undefined4 DAT_01510728
;
; *****************************************************************************

section .text

    MOV EBX,EBX                         ; 00440a4e
        ;   Label: core_dcamera.cpp_FUN_00440a4e
    PUSH EBX                            ; 00440a50
    PUSH ESI                            ; 00440a51
    PUSH EDI                            ; 00440a52
    PUSH EBP                            ; 00440a53
    SUB ESP,0x2c                        ; 00440a54
    MOV EAX,dword ptr [ESP + 0x40]      ; 00440a57
    SHL EAX,0x8                         ; 00440a5b
    MOV EDX,EAX                         ; 00440a5e
    SHL EAX,0x4                         ; 00440a60
    MOV ECX,0x83c7d4                    ; 00440a63
    SUB EAX,EDX                         ; 00440a68
    MOV EDX,dword ptr [ESP + 0x44]      ; 00440a6a
    ADD ECX,EAX                         ; 00440a6e
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440a70
    SUB EAX,EDX                         ; 00440a77
    SHL EAX,0x2                         ; 00440a79
    MOV EDX,dword ptr [ESP + 0x40]      ; 00440a7c
    ADD ECX,EAX                         ; 00440a80
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440a82
    ADD EAX,EDX                         ; 00440a89
    MOV EDX,0x14c3cd0                   ; 00440a8b
    SHL EAX,0x8                         ; 00440a90
    ADD EDX,EAX                         ; 00440a93
    MOV EAX,dword ptr [ESP + 0x44]      ; 00440a95
    MOV dword ptr [ESP + 0x18],ECX      ; 00440a99
    SHL EAX,0x2                         ; 00440a9d
    MOV CL,byte ptr [0x01308800]        ; 00440aa0 | DAT_01308800
    ADD EDX,EAX                         ; 00440aa6
    MOV EAX,dword ptr [ESP + 0x40]      ; 00440aa8
    MOV dword ptr [ESP + 0x10],EDX      ; 00440aac
    MOV EDX,dword ptr [ESP + 0x44]      ; 00440ab0
    SHL EAX,CL                          ; 00440ab4
    SHL EDX,CL                          ; 00440ab6
    MOV EAX,dword ptr [EAX*0x4 + 0x1c2b64c] ; 00440ab8
    SHL EDX,0x2                         ; 00440abf
    ADD EAX,EDX                         ; 00440ac2
    MOV EDX,dword ptr [ESP + 0x40]      ; 00440ac4
    MOV dword ptr [ESP + 0x14],EAX      ; 00440ac8
    LEA EAX,[EDX*0x4 + 0x0]             ; 00440acc
    ADD EAX,EDX                         ; 00440ad3
    MOV EDX,dword ptr [ESP + 0x4c]      ; 00440ad5
    SHL EAX,0x6                         ; 00440ad9
    ADD EDX,0x784                       ; 00440adc
    ADD EAX,EDX                         ; 00440ae2
    MOV EDX,dword ptr [ESP + 0x44]      ; 00440ae4
    ADD EDX,EAX                         ; 00440ae8
    MOV EAX,dword ptr [ESP + 0x44]      ; 00440aea
    MOV dword ptr [ESP + 0xc],EDX       ; 00440aee
    CMP EAX,dword ptr [ESP + 0x48]      ; 00440af2
    JGE 0x00440c24                      ; 00440af6
        ;   XREF to: 00440c24 (CONDITIONAL_JUMP)  ; LAB_00440c24
    XOR AH,AH                           ; 00440afc
        ;   Label: LAB_00440afc
    MOV EDX,dword ptr [ESP + 0x10]      ; 00440afe
    MOV byte ptr [ESP + 0x28],AH        ; 00440b02
    MOV EAX,dword ptr [ESP + 0x14]      ; 00440b06
    MOV ECX,dword ptr [EDX]             ; 00440b0a
    CMP ECX,dword ptr [EAX]             ; 00440b0c
    JBE 0x00440bce                      ; 00440b0e
        ;   XREF to: 00440bce (CONDITIONAL_JUMP)  ; LAB_00440bce
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440b14
    MOV EDX,dword ptr [0x01510718]      ; 00440b18 | DAT_01510718
    MOV EAX,dword ptr [EAX]             ; 00440b1e
    SUB EAX,dword ptr [EDX]             ; 00440b20
    CDQ                                 ; 00440b22
    XOR EAX,EDX                         ; 00440b23
    SUB EAX,EDX                         ; 00440b25
    MOV EDX,dword ptr [0x01510718]      ; 00440b27 | DAT_01510718
    MOV ESI,dword ptr [EDX + 0xc]       ; 00440b2d
    MOV ECX,EAX                         ; 00440b30
    CMP EAX,ESI                         ; 00440b32
    JGE 0x00440bce                      ; 00440b34
        ;   XREF to: 00440bce (CONDITIONAL_JUMP)  ; LAB_00440bce
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440b3a
    MOV EDI,dword ptr [EDX + 0x4]       ; 00440b3e
    MOV EAX,dword ptr [EAX + 0x4]       ; 00440b41
    SUB EAX,EDI                         ; 00440b44
    CDQ                                 ; 00440b46
    XOR EAX,EDX                         ; 00440b47
    SUB EAX,EDX                         ; 00440b49
    MOV EDX,dword ptr [0x01510718]      ; 00440b4b | DAT_01510718
    MOV EBP,dword ptr [EDX + 0xc]       ; 00440b51
    MOV EBX,EAX                         ; 00440b54
    CMP EAX,EBP                         ; 00440b56
    JGE 0x00440bce                      ; 00440b58
        ;   XREF to: 00440bce (CONDITIONAL_JUMP)  ; LAB_00440bce
    MOV EAX,dword ptr [ESP + 0x18]      ; 00440b5a
    MOV ESI,dword ptr [EDX + 0x8]       ; 00440b5e
    MOV EAX,dword ptr [EAX + 0x8]       ; 00440b61
    SUB EAX,ESI                         ; 00440b64
    CDQ                                 ; 00440b66
    XOR EAX,EDX                         ; 00440b67
    SUB EAX,EDX                         ; 00440b69
    MOV EDX,dword ptr [0x01510718]      ; 00440b6b | DAT_01510718
    CMP EAX,dword ptr [EDX + 0xc]       ; 00440b71
    JGE 0x00440bce                      ; 00440b74
        ;   XREF to: 00440bce (CONDITIONAL_JUMP)  ; LAB_00440bce
    IMUL EBX,EBX                        ; 00440b76
    IMUL ECX,ECX                        ; 00440b79
    IMUL EAX,EAX                        ; 00440b7c
    ADD ECX,EBX                         ; 00440b7f
    ADD ECX,EAX                         ; 00440b81
    MOV EBP,dword ptr [EDX + 0x10]      ; 00440b83
    MOV dword ptr [ESP + 0x8],ECX       ; 00440b86
    CMP ECX,EBP                         ; 00440b8a
    JGE 0x00440bce                      ; 00440b8c
        ;   XREF to: 00440bce (CONDITIONAL_JUMP)  ; LAB_00440bce
    MOV ESI,dword ptr [ESP + 0x40]      ; 00440b8e
    MOV ECX,dword ptr [ESP + 0x14]      ; 00440b92
    MOV EBX,dword ptr [ESP + 0x44]      ; 00440b96
    MOV EAX,[0x0151071c]                ; 00440b9a | DAT_0151071c
    MOV ECX,dword ptr [ECX]             ; 00440b9f
    TEST EAX,EAX                        ; 00440ba1
    JNZ 0x00440cb1                      ; 00440ba3
        ;   XREF to: 00440cb1 (CONDITIONAL_JUMP)  ; LAB_00440cb1
    MOV EAX,[0x01510718]                ; 00440ba9 | DAT_01510718
        ;   Label: LAB_00440ba9
    MOV ECX,dword ptr [ESP + 0x8]       ; 00440bae
    MOV EDX,dword ptr [EAX + 0x10]      ; 00440bb2
    SUB EDX,ECX                         ; 00440bb5
    SAR EDX,0x10                        ; 00440bb7
    IMUL EDX,EDX,0x3f                   ; 00440bba
    MOV ECX,dword ptr [EAX + 0x10]      ; 00440bbd
    SAR ECX,0x10                        ; 00440bc0
    MOV EAX,EDX                         ; 00440bc3
    SAR EDX,0x1f                        ; 00440bc5
    IDIV ECX                            ; 00440bc8
    MOV byte ptr [ESP + 0x28],AL        ; 00440bca
    MOV EDX,dword ptr [ESP + 0xc]       ; 00440bce
        ;   Label: LAB_00440bce
    MOV EDI,dword ptr [ESP + 0x10]      ; 00440bd2
    MOV EBP,dword ptr [ESP + 0x18]      ; 00440bd6
    MOV AL,byte ptr [ESP + 0x28]        ; 00440bda
    MOV ESI,dword ptr [ESP + 0x14]      ; 00440bde
    MOV CL,byte ptr [0x01308800]        ; 00440be2 | DAT_01308800
    LEA EBX,[EDX + 0x1]                 ; 00440be8
    ADD EDI,0x4                         ; 00440beb
    ADD EBP,0xc                         ; 00440bee
    MOV byte ptr [EDX],AL               ; 00440bf1
    MOV EAX,0x1                         ; 00440bf3
    MOV EDX,dword ptr [ESP + 0x48]      ; 00440bf8
    SHL EAX,CL                          ; 00440bfc
    MOV dword ptr [ESP + 0xc],EBX       ; 00440bfe
    SHL EAX,0x2                         ; 00440c02
    MOV dword ptr [ESP + 0x10],EDI      ; 00440c05
    ADD ESI,EAX                         ; 00440c09
    MOV EAX,dword ptr [ESP + 0x44]      ; 00440c0b
    MOV dword ptr [ESP + 0x18],EBP      ; 00440c0f
    INC EAX                             ; 00440c13
    MOV dword ptr [ESP + 0x14],ESI      ; 00440c14
    MOV dword ptr [ESP + 0x44],EAX      ; 00440c18
    CMP EAX,EDX                         ; 00440c1c
    JL 0x00440afc                       ; 00440c1e
        ;   XREF to: 00440afc (CONDITIONAL_JUMP)  ; LAB_00440afc
    MOV EDX,dword ptr [ESP + 0x40]      ; 00440c24
        ;   Label: LAB_00440c24
    MOV ECX,dword ptr [ESP + 0x4c]      ; 00440c28
    SHL EDX,0x2                         ; 00440c2c
    MOV EBX,dword ptr [ESP + 0x40]      ; 00440c2f
    ADD EDX,ECX                         ; 00440c33
    LEA ECX,[EBX*0x4 + 0x0]             ; 00440c35
    ADD ECX,EBX                         ; 00440c3c
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00440c3e
    SHL ECX,0x6                         ; 00440c42
    ADD EBX,0x784                       ; 00440c45
    MOV EAX,dword ptr [EDX + 0x4]       ; 00440c4b
    ADD ECX,EBX                         ; 00440c4e
    MOV EDX,dword ptr [EDX + 0x3c4]     ; 00440c50
    ADD ECX,EAX                         ; 00440c56
    CMP EAX,EDX                         ; 00440c58
    JGE 0x00440c65                      ; 00440c5a
        ;   XREF to: 00440c65 (CONDITIONAL_JUMP)  ; LAB_00440c65
    CMP byte ptr [ECX],0x0              ; 00440c5c
        ;   Label: LAB_00440c5c
    JZ 0x00440d74                       ; 00440c5f
        ;   XREF to: 00440d74 (CONDITIONAL_JUMP)  ; LAB_00440d74
    MOV EBX,dword ptr [ESP + 0x40]      ; 00440c65
        ;   Label: LAB_00440c65
    LEA ECX,[EBX*0x4 + 0x0]             ; 00440c69
    ADD ECX,EBX                         ; 00440c70
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00440c72
    SHL ECX,0x6                         ; 00440c76
    ADD EBX,0x784                       ; 00440c79
    ADD ECX,EBX                         ; 00440c7f
    ADD ECX,EDX                         ; 00440c81
    DEC ECX                             ; 00440c83
    CMP EDX,EAX                         ; 00440c84
    JLE 0x00440c93                      ; 00440c86
        ;   XREF to: 00440c93 (CONDITIONAL_JUMP)  ; LAB_00440c93
    CMP byte ptr [ECX],0x0              ; 00440c88
        ;   Label: LAB_00440c88
    JNZ 0x00440c93                      ; 00440c8b
        ;   XREF to: 00440c93 (CONDITIONAL_JUMP)  ; LAB_00440c93
    DEC EDX                             ; 00440c8d
    DEC ECX                             ; 00440c8e
    CMP EDX,EAX                         ; 00440c8f
    JG 0x00440c88                       ; 00440c91
        ;   XREF to: 00440c88 (CONDITIONAL_JUMP)  ; LAB_00440c88
    MOV ECX,dword ptr [ESP + 0x40]      ; 00440c93
        ;   Label: LAB_00440c93
    MOV EBX,dword ptr [ESP + 0x4c]      ; 00440c97
    SHL ECX,0x2                         ; 00440c9b
    ADD ECX,EBX                         ; 00440c9e
    MOV dword ptr [ECX + 0x4],EAX       ; 00440ca0
    MOV dword ptr [ECX + 0x3c4],EDX     ; 00440ca3
    ADD ESP,0x2c                        ; 00440ca9
    POP EBP                             ; 00440cac
    POP EDI                             ; 00440cad
    POP ESI                             ; 00440cae
    POP EBX                             ; 00440caf
    RET                                 ; 00440cb0
    MOV EBP,dword ptr [0x01510720]      ; 00440cb1 | DAT_01510720
        ;   Label: LAB_00440cb1
    MOV EAX,[0x01510724]                ; 00440cb7 | DAT_01510724
    MOV EDI,dword ptr [0x01510728]      ; 00440cbc | DAT_01510728
    XOR EDX,EDX                         ; 00440cc2
    MOV dword ptr [ESP],EAX             ; 00440cc4
    MOV dword ptr [ESP + 0x4],EDX       ; 00440cc7
    TEST ECX,ECX                        ; 00440ccb
    JZ 0x00440d41                       ; 00440ccd
        ;   XREF to: 00440d41 (CONDITIONAL_JUMP)  ; LAB_00440d41
    MOV EAX,0x7fffffff                  ; 00440ccf
    MOV EDX,EAX                         ; 00440cd4
    SAR EDX,0x1f                        ; 00440cd6
    IDIV ECX                            ; 00440cd9
    MOV ECX,EAX                         ; 00440cdb
    MOV EAX,EBP                         ; 00440cdd
        ;   Label: LAB_00440cdd
    SUB EAX,EBX                         ; 00440cdf
    SHL EAX,0x4                         ; 00440ce1
    MOV dword ptr [ESP + 0x20],EAX      ; 00440ce4
    MOV EAX,dword ptr [ESP]             ; 00440ce8
    SUB EAX,ESI                         ; 00440ceb
    MOV EDX,EDI                         ; 00440ced
    SHL EAX,0x4                         ; 00440cef
    SUB EDX,ECX                         ; 00440cf2
    MOV dword ptr [ESP + 0x24],EAX      ; 00440cf4
    MOV EAX,EDX                         ; 00440cf8
    SAR EDX,0x1f                        ; 00440cfa
    SHL EDX,0x4                         ; 00440cfd
    SBB EAX,EDX                         ; 00440d00
    SAR EAX,0x4                         ; 00440d02
    SHL EBX,0x8                         ; 00440d05
    MOV dword ptr [ESP + 0x1c],EAX      ; 00440d08
    MOV EDX,ESI                         ; 00440d0c
    MOV EAX,0x10                        ; 00440d0e
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00440d13
    SHL EDX,0x8                         ; 00440d17
    MOV ESI,EDX                         ; 00440d1a
        ;   Label: LAB_00440d1a
    SAR ESI,0x8                         ; 00440d1c
    IMUL EDI,ESI,0x500                  ; 00440d1f
    MOV ESI,EBX                         ; 00440d25
    SAR ESI,0x8                         ; 00440d27
    MOV ESI,dword ptr [EDI + ESI*0x4 + 0xb1ac98] ; 00440d2a
    LEA EDI,[ECX + -0x80]               ; 00440d31
    CMP ESI,EDI                         ; 00440d34
    JGE 0x00440d48                      ; 00440d36
        ;   XREF to: 00440d48 (CONDITIONAL_JUMP)  ; LAB_00440d48
    TEST EAX,EAX                        ; 00440d38
    JNZ 0x00440d64                      ; 00440d3a
        ;   XREF to: 00440d64 (CONDITIONAL_JUMP)  ; LAB_00440d64
    JMP 0x00440ba9                      ; 00440d3c
        ;   XREF to: 00440ba9 (UNCONDITIONAL_JUMP)  ; LAB_00440ba9
    MOV ECX,0x7fffffff                  ; 00440d41
        ;   Label: LAB_00440d41
    JMP 0x00440cdd                      ; 00440d46
        ;   XREF to: 00440cdd (UNCONDITIONAL_JUMP)  ; LAB_00440cdd
    MOV ESI,dword ptr [ESP + 0x20]      ; 00440d48
        ;   Label: LAB_00440d48
    MOV EDI,dword ptr [ESP + 0x24]      ; 00440d4c
    DEC EAX                             ; 00440d50
    ADD ECX,EBP                         ; 00440d51
    ADD EBX,ESI                         ; 00440d53
    ADD EDX,EDI                         ; 00440d55
    TEST EAX,EAX                        ; 00440d57
    JG 0x00440d1a                       ; 00440d59
        ;   XREF to: 00440d1a (CONDITIONAL_JUMP)  ; LAB_00440d1a
    TEST EAX,EAX                        ; 00440d5b
    JNZ 0x00440d64                      ; 00440d5d
        ;   XREF to: 00440d64 (CONDITIONAL_JUMP)  ; LAB_00440d64
    JMP 0x00440ba9                      ; 00440d5f
        ;   XREF to: 00440ba9 (UNCONDITIONAL_JUMP)  ; LAB_00440ba9
    CMP dword ptr [ESP + 0x4],0x0       ; 00440d64
        ;   Label: LAB_00440d64
    JNZ 0x00440ba9                      ; 00440d69
        ;   XREF to: 00440ba9 (CONDITIONAL_JUMP)  ; LAB_00440ba9
    JMP 0x00440bce                      ; 00440d6f
        ;   XREF to: 00440bce (UNCONDITIONAL_JUMP)  ; LAB_00440bce
    INC EAX                             ; 00440d74
        ;   Label: LAB_00440d74
    INC ECX                             ; 00440d75
    CMP EAX,EDX                         ; 00440d76
    JL 0x00440c5c                       ; 00440d78
        ;   XREF to: 00440c5c (CONDITIONAL_JUMP)  ; LAB_00440c5c
    JMP 0x00440c65                      ; 00440d7e
        ;   XREF to: 00440c65 (UNCONDITIONAL_JUMP)  ; LAB_00440c65

