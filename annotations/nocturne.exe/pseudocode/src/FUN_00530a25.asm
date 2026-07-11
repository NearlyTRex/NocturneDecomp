; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00530a25(uint *param_1,int *param_2)
;
;
; XREF[8]:
;   FUN_00482950 at 00482992
;   FUN_00487af0 at 00487b60
;   FUN_00488bf0 at 00488fb2
;   FUN_004afa20 at 004afb14
;   FUN_004b1820 at 004b18a6
;   FUN_004cc440 at 004cc47f
;   FUN_004d7980 at 004d79c4
;   FUN_00555020 at 005551bc
;
; Referenced Globals:
;   undefined4 DAT_005bf4d8
;   undefined4 DAT_005bf4dc
;   undefined4 DAT_005bf4e0
;   undefined4 DAT_005bf4e8
;   undefined4 DAT_005bf4ec
;   undefined4 DAT_005bf4f0
;   undefined4 DAT_01c00c48
;   undefined4 DAT_01c00c4c
;   undefined4 DAT_01c00c50
;   undefined4 DAT_01c00c54
;   undefined4 DAT_01c03948
;   undefined4 DAT_01c039c4
;   undefined4 DAT_01c039c8
;   undefined4 DAT_01c039cc
;   undefined4 DAT_01c039e8
;   ... and 8 more
;
; *****************************************************************************

section .text

    TEST dword ptr [0x01c03948],0xffffffff ; 00530a25 | DAT_01c03948
        ;   Label: FUN_00530a25
    JZ 0x00530b73                       ; 00530a2f
        ;   XREF to: 00530b73 (CONDITIONAL_JUMP)  ; LAB_00530b73
    MOV EBX,dword ptr [ESP + 0x8]       ; 00530a35
    MOV EAX,dword ptr [EBX]             ; 00530a39
    MOV ECX,dword ptr [EBX + 0x4]       ; 00530a3b
    MOV EDX,dword ptr [EBX + 0x8]       ; 00530a3e
    SUB EAX,dword ptr [0x01c039c4]      ; 00530a41 | DAT_01c039c4
    SUB ECX,dword ptr [0x01c039c8]      ; 00530a47 | DAT_01c039c8
    SUB EDX,dword ptr [0x01c039cc]      ; 00530a4d | DAT_01c039cc
    MOVD MM0,EAX                        ; 00530a53
    MOVD MM1,ECX                        ; 00530a56
    MOVD MM2,EDX                        ; 00530a59
    IMUL dword ptr [0x01c039e8]         ; 00530a5c | DAT_01c039e8
    MOV EBX,EAX                         ; 00530a62
    MOV ECX,EDX                         ; 00530a64
    MOVD EAX,MM1                        ; 00530a66
    IMUL dword ptr [0x01c039f4]         ; 00530a69 | DAT_01c039f4
    ADD EBX,EAX                         ; 00530a6f
    ADC ECX,EDX                         ; 00530a71
    MOVD EAX,MM2                        ; 00530a73
    IMUL dword ptr [0x01c03a00]         ; 00530a76 | DAT_01c03a00
    ADD EAX,EBX                         ; 00530a7c
    ADC EDX,ECX                         ; 00530a7e
    SHRD EAX,EDX,0x10                   ; 00530a80
    MOVD MM4,EAX                        ; 00530a84
    MOVD EAX,MM0                        ; 00530a87
    IMUL dword ptr [0x01c039ec]         ; 00530a8a | DAT_01c039ec
    MOV EBX,EAX                         ; 00530a90
    MOV ECX,EDX                         ; 00530a92
    MOVD EAX,MM1                        ; 00530a94
    IMUL dword ptr [0x01c039f8]         ; 00530a97 | DAT_01c039f8
    ADD EBX,EAX                         ; 00530a9d
    ADC ECX,EDX                         ; 00530a9f
    MOVD EAX,MM2                        ; 00530aa1
    IMUL dword ptr [0x01c03a04]         ; 00530aa4 | DAT_01c03a04
    ADD EAX,EBX                         ; 00530aaa
    ADC EDX,ECX                         ; 00530aac
    SHRD EAX,EDX,0x10                   ; 00530aae
    MOVD MM5,EAX                        ; 00530ab2
    MOVD EAX,MM0                        ; 00530ab5
    IMUL dword ptr [0x01c039f0]         ; 00530ab8 | DAT_01c039f0
    MOV EBX,EAX                         ; 00530abe
    MOV ECX,EDX                         ; 00530ac0
    MOVD EAX,MM1                        ; 00530ac2
    IMUL dword ptr [0x01c039fc]         ; 00530ac5 | DAT_01c039fc
    ADD EBX,EAX                         ; 00530acb
    ADC ECX,EDX                         ; 00530acd
    MOVD EAX,MM2                        ; 00530acf
    IMUL dword ptr [0x01c03a08]         ; 00530ad2 | DAT_01c03a08
    ADD EAX,EBX                         ; 00530ad8
    ADC EDX,ECX                         ; 00530ada
    SHRD EAX,EDX,0x10                   ; 00530adc
    MOVD MM6,EAX                        ; 00530ae0
    NEG EAX                             ; 00530ae3
    MOV EDX,EAX                         ; 00530ae5
    XOR EAX,EAX                         ; 00530ae7
    MOVD EBX,MM4                        ; 00530ae9
    MOVD ECX,MM6                        ; 00530aec
    CMP EBX,ECX                         ; 00530aef
    JLE 0x00530af8                      ; 00530af1
        ;   XREF to: 00530af8 (CONDITIONAL_JUMP)  ; LAB_00530af8
    OR EAX,0x80000001                   ; 00530af3
    CMP EBX,EDX                         ; 00530af8
        ;   Label: LAB_00530af8
    JGE 0x00530b01                      ; 00530afa
        ;   XREF to: 00530b01 (CONDITIONAL_JUMP)  ; LAB_00530b01
    OR EAX,0x80000002                   ; 00530afc
    MOVD EBX,MM5                        ; 00530b01
        ;   Label: LAB_00530b01
    CMP EBX,ECX                         ; 00530b04
    JLE 0x00530b0d                      ; 00530b06
        ;   XREF to: 00530b0d (CONDITIONAL_JUMP)  ; LAB_00530b0d
    OR EAX,0x80000004                   ; 00530b08
    CMP EBX,EDX                         ; 00530b0d
        ;   Label: LAB_00530b0d
    JGE 0x00530b16                      ; 00530b0f
        ;   XREF to: 00530b16 (CONDITIONAL_JUMP)  ; LAB_00530b16
    OR EAX,0x80000008                   ; 00530b11
    CMP ECX,0x0                         ; 00530b16
        ;   Label: LAB_00530b16
    JG 0x00530b20                       ; 00530b19
        ;   XREF to: 00530b20 (CONDITIONAL_JUMP)  ; LAB_00530b20
    OR EAX,0x80000010                   ; 00530b1b
    MOV EBX,dword ptr [ESP + 0x4]       ; 00530b20
        ;   Label: LAB_00530b20
    MOVD dword ptr [EBX],MM4            ; 00530b24
    MOVD dword ptr [EBX + 0x4],MM5      ; 00530b27
    MOVD dword ptr [EBX + 0x8],MM6      ; 00530b2b
    TEST EAX,0xffffffff                 ; 00530b2f
    JNZ 0x00530b6d                      ; 00530b34
        ;   XREF to: 00530b6d (CONDITIONAL_JUMP)  ; LAB_00530b6d
    MOV EAX,0x7fffffff                  ; 00530b36
    XOR EDX,EDX                         ; 00530b3b
    IDIV ECX                            ; 00530b3d
    MOV dword ptr [EBX + 0xc],EAX       ; 00530b3f
    MOVD EAX,MM4                        ; 00530b42
    IMUL dword ptr [0x01c00c48]         ; 00530b45 | DAT_01c00c48
    IDIV ECX                            ; 00530b4b
    ADD EAX,dword ptr [0x01c00c50]      ; 00530b4d | DAT_01c00c50
    MOV dword ptr [EBX + 0x10],EAX      ; 00530b53
    MOVD EAX,MM5                        ; 00530b56
    IMUL dword ptr [0x01c00c4c]         ; 00530b59 | DAT_01c00c4c
    IDIV ECX                            ; 00530b5f
    ADD EAX,dword ptr [0x01c00c54]      ; 00530b61 | DAT_01c00c54
    MOV dword ptr [EBX + 0x14],EAX      ; 00530b67
    EMMS                                ; 00530b6a
    RET                                 ; 00530b6c
    MOV dword ptr [EBX + 0x10],EAX      ; 00530b6d
        ;   Label: LAB_00530b6d
    EMMS                                ; 00530b70
    RET                                 ; 00530b72
    PUSH ESI                            ; 00530b73
        ;   Label: LAB_00530b73
    PUSH EDI                            ; 00530b74
    MOV ESI,dword ptr [ESP + 0x10]      ; 00530b75
    MOV EDI,dword ptr [ESP + 0xc]       ; 00530b79
    MOV EAX,dword ptr [ESI]             ; 00530b7d
    MOV EBX,dword ptr [ESI + 0x4]       ; 00530b7f
    MOV ECX,dword ptr [ESI + 0x8]       ; 00530b82
    SUB EAX,dword ptr [0x01c039c4]      ; 00530b85 | DAT_01c039c4
    SUB EBX,dword ptr [0x01c039c8]      ; 00530b8b | DAT_01c039c8
    SUB ECX,dword ptr [0x01c039cc]      ; 00530b91 | DAT_01c039cc
    MOV [0x005bf4d8],EAX                ; 00530b97 | DAT_005bf4d8
    MOV dword ptr [0x005bf4dc],EBX      ; 00530b9c | DAT_005bf4dc
    MOV dword ptr [0x005bf4e0],ECX      ; 00530ba2 | DAT_005bf4e0
    IMUL dword ptr [0x01c039e8]         ; 00530ba8 | DAT_01c039e8
    MOV EBX,EAX                         ; 00530bae
    MOV ECX,EDX                         ; 00530bb0
    MOV EAX,[0x005bf4dc]                ; 00530bb2 | DAT_005bf4dc
    IMUL dword ptr [0x01c039f4]         ; 00530bb7 | DAT_01c039f4
    ADD EBX,EAX                         ; 00530bbd
    ADC ECX,EDX                         ; 00530bbf
    MOV EAX,[0x005bf4e0]                ; 00530bc1 | DAT_005bf4e0
    IMUL dword ptr [0x01c03a00]         ; 00530bc6 | DAT_01c03a00
    ADD EAX,EBX                         ; 00530bcc
    ADC EDX,ECX                         ; 00530bce
    SHRD EAX,EDX,0x10                   ; 00530bd0
    MOV [0x005bf4e8],EAX                ; 00530bd4 | DAT_005bf4e8
    MOV EAX,[0x005bf4d8]                ; 00530bd9 | DAT_005bf4d8
    IMUL dword ptr [0x01c039ec]         ; 00530bde | DAT_01c039ec
    MOV EBX,EAX                         ; 00530be4
    MOV ECX,EDX                         ; 00530be6
    MOV EAX,[0x005bf4dc]                ; 00530be8 | DAT_005bf4dc
    IMUL dword ptr [0x01c039f8]         ; 00530bed | DAT_01c039f8
    ADD EBX,EAX                         ; 00530bf3
    ADC ECX,EDX                         ; 00530bf5
    MOV EAX,[0x005bf4e0]                ; 00530bf7 | DAT_005bf4e0
    IMUL dword ptr [0x01c03a04]         ; 00530bfc | DAT_01c03a04
    ADD EAX,EBX                         ; 00530c02
    ADC EDX,ECX                         ; 00530c04
    SHRD EAX,EDX,0x10                   ; 00530c06
    MOV [0x005bf4ec],EAX                ; 00530c0a | DAT_005bf4ec
    MOV EAX,[0x005bf4d8]                ; 00530c0f | DAT_005bf4d8
    IMUL dword ptr [0x01c039f0]         ; 00530c14 | DAT_01c039f0
    MOV EBX,EAX                         ; 00530c1a
    MOV ECX,EDX                         ; 00530c1c
    MOV EAX,[0x005bf4dc]                ; 00530c1e | DAT_005bf4dc
    IMUL dword ptr [0x01c039fc]         ; 00530c23 | DAT_01c039fc
    ADD EBX,EAX                         ; 00530c29
    ADC ECX,EDX                         ; 00530c2b
    MOV EAX,[0x005bf4e0]                ; 00530c2d | DAT_005bf4e0
    IMUL dword ptr [0x01c03a08]         ; 00530c32 | DAT_01c03a08
    ADD EAX,EBX                         ; 00530c38
    ADC EDX,ECX                         ; 00530c3a
    SHRD EAX,EDX,0x10                   ; 00530c3c
    MOV [0x005bf4f0],EAX                ; 00530c40 | DAT_005bf4f0
    NEG EAX                             ; 00530c45
    MOV EDX,EAX                         ; 00530c47
    XOR EAX,EAX                         ; 00530c49
    MOV EBX,dword ptr [0x005bf4e8]      ; 00530c4b | DAT_005bf4e8
    MOV ECX,dword ptr [0x005bf4f0]      ; 00530c51 | DAT_005bf4f0
    CMP EBX,ECX                         ; 00530c57
    JLE 0x00530c60                      ; 00530c59
        ;   XREF to: 00530c60 (CONDITIONAL_JUMP)  ; LAB_00530c60
    OR EAX,0x80000001                   ; 00530c5b
    CMP EBX,EDX                         ; 00530c60
        ;   Label: LAB_00530c60
    JGE 0x00530c69                      ; 00530c62
        ;   XREF to: 00530c69 (CONDITIONAL_JUMP)  ; LAB_00530c69
    OR EAX,0x80000002                   ; 00530c64
    MOV EBX,dword ptr [0x005bf4ec]      ; 00530c69 | DAT_005bf4ec
        ;   Label: LAB_00530c69
    CMP EBX,ECX                         ; 00530c6f
    JLE 0x00530c78                      ; 00530c71
        ;   XREF to: 00530c78 (CONDITIONAL_JUMP)  ; LAB_00530c78
    OR EAX,0x80000004                   ; 00530c73
    CMP EBX,EDX                         ; 00530c78
        ;   Label: LAB_00530c78
    JGE 0x00530c81                      ; 00530c7a
        ;   XREF to: 00530c81 (CONDITIONAL_JUMP)  ; LAB_00530c81
    OR EAX,0x80000008                   ; 00530c7c
    CMP ECX,0x0                         ; 00530c81
        ;   Label: LAB_00530c81
    JG 0x00530c8b                       ; 00530c84
        ;   XREF to: 00530c8b (CONDITIONAL_JUMP)  ; LAB_00530c8b
    OR EAX,0x80000010                   ; 00530c86
    TEST EAX,0xffffffff                 ; 00530c8b
        ;   Label: LAB_00530c8b
    JNZ 0x00530cda                      ; 00530c90
        ;   XREF to: 00530cda (CONDITIONAL_JUMP)  ; LAB_00530cda
    MOV EAX,[0x005bf4e8]                ; 00530c92 | DAT_005bf4e8
    MOV dword ptr [EDI],EAX             ; 00530c97
    MOV dword ptr [EDI + 0x4],EBX       ; 00530c99
    MOV dword ptr [EDI + 0x8],ECX       ; 00530c9c
    MOV EAX,0x7fffffff                  ; 00530c9f
    XOR EDX,EDX                         ; 00530ca4
    IDIV ECX                            ; 00530ca6
    MOV dword ptr [EDI + 0xc],EAX       ; 00530ca8
    MOV EAX,[0x005bf4e8]                ; 00530cab | DAT_005bf4e8
    IMUL dword ptr [0x01c00c48]         ; 00530cb0 | DAT_01c00c48
    IDIV ECX                            ; 00530cb6
    ADD EAX,dword ptr [0x01c00c50]      ; 00530cb8 | DAT_01c00c50
    MOV dword ptr [EDI + 0x10],EAX      ; 00530cbe
    MOV EAX,[0x005bf4ec]                ; 00530cc1 | DAT_005bf4ec
    IMUL dword ptr [0x01c00c4c]         ; 00530cc6 | DAT_01c00c4c
    IDIV ECX                            ; 00530ccc
    ADD EAX,dword ptr [0x01c00c54]      ; 00530cce | DAT_01c00c54
    MOV dword ptr [EDI + 0x14],EAX      ; 00530cd4
    POP EDI                             ; 00530cd7
    POP ESI                             ; 00530cd8
    RET                                 ; 00530cd9
    MOV EDX,dword ptr [0x005bf4e8]      ; 00530cda | DAT_005bf4e8
        ;   Label: LAB_00530cda
    MOV dword ptr [EDI],EDX             ; 00530ce0
    MOV dword ptr [EDI + 0x4],EBX       ; 00530ce2
    MOV dword ptr [EDI + 0x8],ECX       ; 00530ce5
    MOV dword ptr [EDI + 0x10],EAX      ; 00530ce8
    POP EDI                             ; 00530ceb
    POP ESI                             ; 00530cec
    RET                                 ; 00530ced

