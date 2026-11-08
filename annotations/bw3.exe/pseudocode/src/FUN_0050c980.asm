; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050c980(int param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; Referenced Globals:
;   undefined4 DAT_005cb8fc
;   undefined4 DAT_005cb904
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01ed2a34
;   undefined4 DAT_01ed2a38
;   undefined4 DAT_01ed2a3c
;   undefined4 DAT_01ed2a40
;   undefined4 DAT_01ed2a44
;   undefined4 DAT_01ed2a48
;   undefined4 DAT_01ed2a4c
;   undefined4 DAT_01ed2a50
;   undefined4 DAT_01ed2a54
;   undefined4 DAT_01ed2a58
;   undefined4 DAT_01ed2a5c
;   undefined4 DAT_01ed2a60
;   ... and 11 more
;
; Called Functions:
;   FUN_0046c5e0
;   FUN_0046ce90
;   FUN_0046d450
;   FUN_0046d540
;   FUN_0046e5e0
;   FUN_005632a3
;   FUN_005a3120
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c980
        ;   Label: FUN_0050c980
    PUSH ESI                            ; 0050c981
    PUSH EDI                            ; 0050c982
    PUSH EBP                            ; 0050c983
    MOV EBP,ESP                         ; 0050c984
    SUB ESP,0x6c                        ; 0050c986
    AND ESP,0xfffffff8                  ; 0050c989
    MOV EDX,dword ptr [0x005f2afc]      ; 0050c98c | DAT_005f2afc
    PUSH EDX                            ; 0050c992
    CALL FUN_0046d540                   ; 0050c993
        ;   XREF to: 0046d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d540()
    ADD ESP,0x4                         ; 0050c998
    TEST EAX,EAX                        ; 0050c99b
    JZ 0x0050c9a6                       ; 0050c99d
        ;   XREF to: 0050c9a6 (CONDITIONAL_JUMP)  ; LAB_0050c9a6
    MOV ESP,EBP                         ; 0050c99f
    POP EBP                             ; 0050c9a1
    POP EDI                             ; 0050c9a2
    POP ESI                             ; 0050c9a3
    POP EBX                             ; 0050c9a4
    RET                                 ; 0050c9a5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0050c9a6
        ;   Label: LAB_0050c9a6
    FILD dword ptr [EAX + 0x24]         ; 0050c9a9
    FMUL float ptr [0x0203b3b0]         ; 0050c9ac | DAT_0203b3b0
    XOR ECX,ECX                         ; 0050c9b2
    FADD float ptr [0x0203b38c]         ; 0050c9b4 | DAT_0203b38c
    MOV dword ptr [ESP + 0x4],ECX       ; 0050c9ba
    FSTP float ptr [ESP]                ; 0050c9be
    FILD dword ptr [EAX + 0x2c]         ; 0050c9c1
    FMUL float ptr [0x0203b3b8]         ; 0050c9c4 | DAT_0203b3b8
    MOV EAX,ESP                         ; 0050c9ca
    MOV EBX,dword ptr [0x005f2afc]      ; 0050c9cc | DAT_005f2afc
    PUSH EAX                            ; 0050c9d2
    FADD float ptr [0x0203b394]         ; 0050c9d3 | DAT_0203b394
    PUSH EBX                            ; 0050c9d9
    FSTP float ptr [ESP + 0x10]         ; 0050c9da
    CALL FUN_0046ce90                   ; 0050c9de
        ;   XREF to: 0046ce90 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ce90()
    ADD ESP,0x8                         ; 0050c9e3
    PUSH 0x60360c                       ; 0050c9e6
    MOV ESI,dword ptr [0x005f2afc]      ; 0050c9eb | DAT_005f2afc
    PUSH ESI                            ; 0050c9f1
    MOV EDI,0x4                         ; 0050c9f2
    CALL FUN_0046e5e0                   ; 0050c9f7
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    MOV EDX,0x1                         ; 0050c9fc
    MOV ESI,0x2                         ; 0050ca01
    ADD ESP,0x8                         ; 0050ca06
    MOV dword ptr [0x01ed2a34],EDI      ; 0050ca09 | DAT_01ed2a34
    XOR EAX,EAX                         ; 0050ca0f
    MOV EDI,0x800000                    ; 0050ca11
    MOV [0x01ed2a38],EAX                ; 0050ca16 | DAT_01ed2a38
    MOV [0x01ed2a3c],EAX                ; 0050ca1b | DAT_01ed2a3c
    MOV [0x01ed2a40],EAX                ; 0050ca20 | DAT_01ed2a40
    MOV [0x01ed2a44],EAX                ; 0050ca25 | DAT_01ed2a44
    MOV [0x01ed2a48],EAX                ; 0050ca2a | DAT_01ed2a48
    MOV dword ptr [0x01ed2a54],EDX      ; 0050ca2f | DAT_01ed2a54
    MOV dword ptr [0x01ed2a60],ESI      ; 0050ca35 | DAT_01ed2a60
    PUSH EAX                            ; 0050ca3b
    MOV EDX,0x3                         ; 0050ca3c
    MOV ESI,dword ptr [0x005f2afc]      ; 0050ca41 | DAT_005f2afc
    MOV dword ptr [0x01ed2a4c],EDI      ; 0050ca47 | DAT_01ed2a4c
    MOV dword ptr [0x01ed2a50],EDI      ; 0050ca4d | DAT_01ed2a50
    MOV dword ptr [0x01ed2a58],EDI      ; 0050ca53 | DAT_01ed2a58
    MOV dword ptr [0x01ed2a5c],EDI      ; 0050ca59 | DAT_01ed2a5c
    MOV dword ptr [0x01ed2a64],EDI      ; 0050ca5f | DAT_01ed2a64
    MOV dword ptr [0x01ed2a68],EDI      ; 0050ca65 | DAT_01ed2a68
    MOV dword ptr [0x01ed2a70],EDI      ; 0050ca6b | DAT_01ed2a70
    PUSH ESI                            ; 0050ca71
    MOV dword ptr [0x01ed2a74],EDI      ; 0050ca72 | DAT_01ed2a74
    MOV dword ptr [0x01ed2a6c],EDX      ; 0050ca78 | DAT_01ed2a6c
    CALL FUN_0046d450                   ; 0050ca7e
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d450()
    ADD ESP,0x8                         ; 0050ca83
    MOV EAX,dword ptr [EBP + 0x18]      ; 0050ca86
    SHL EAX,0x8                         ; 0050ca89
    MOV dword ptr [ESP + 0x58],EAX      ; 0050ca8c
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0050ca90
    SHL EAX,0x8                         ; 0050ca93
    MOV dword ptr [ESP + 0x5c],EAX      ; 0050ca96
    MOV EAX,dword ptr [EBP + 0x20]      ; 0050ca9a
    SHL EAX,0x8                         ; 0050ca9d
    XOR EDI,EDI                         ; 0050caa0
    MOV dword ptr [ESP + 0x60],EAX      ; 0050caa2
    MOV EAX,dword ptr [EBP + 0x24]      ; 0050caa6
    MOV dword ptr [ESP + 0xc],EDI       ; 0050caa9
    SHL EAX,0x8                         ; 0050caad
    MOV dword ptr [ESP + 0x50],EDI      ; 0050cab0
    MOV dword ptr [ESP + 0x54],EAX      ; 0050cab4
    MOV EAX,dword ptr [ESP + 0x50]      ; 0050cab8
        ;   Label: LAB_0050cab8
    MOV ECX,dword ptr [EBP + 0x14]      ; 0050cabc
    XOR EDX,EDX                         ; 0050cabf
    ADD EAX,ECX                         ; 0050cac1
    MOV dword ptr [ESP + 0x14],EDX      ; 0050cac3
    MOV dword ptr [ESP + 0x64],EAX      ; 0050cac7
    MOV EAX,dword ptr [ESP + 0x64]      ; 0050cacb
        ;   Label: LAB_0050cacb
    MOV EBX,dword ptr [EAX + 0x9c70]    ; 0050cacf
    CMP EBX,0xfffffc19                  ; 0050cad5
    JGE 0x0050cb2a                      ; 0050cadb
        ;   XREF to: 0050cb2a (CONDITIONAL_JUMP)  ; LAB_0050cb2a
    MOV EAX,dword ptr [ESP + 0x14]      ; 0050cadd
        ;   Label: LAB_0050cadd
    MOV EDI,dword ptr [ESP + 0x64]      ; 0050cae1
    INC EAX                             ; 0050cae5
    ADD EDI,0x190                       ; 0050cae6
    MOV dword ptr [ESP + 0x14],EAX      ; 0050caec
    MOV dword ptr [ESP + 0x64],EDI      ; 0050caf0
    CMP EAX,0x64                        ; 0050caf4
    JL 0x0050cacb                       ; 0050caf7
        ;   XREF to: 0050cacb (CONDITIONAL_JUMP)  ; LAB_0050cacb
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050caf9
    MOV ECX,dword ptr [ESP + 0x50]      ; 0050cafd
    INC EBX                             ; 0050cb01
    ADD ECX,0x4                         ; 0050cb02
    MOV dword ptr [ESP + 0xc],EBX       ; 0050cb05
    MOV dword ptr [ESP + 0x50],ECX      ; 0050cb09
    CMP EBX,0x64                        ; 0050cb0d
    JL 0x0050cab8                       ; 0050cb10
        ;   XREF to: 0050cab8 (CONDITIONAL_JUMP)  ; LAB_0050cab8
    PUSH 0x1                            ; 0050cb12
    MOV EDI,dword ptr [0x005f2afc]      ; 0050cb14 | DAT_005f2afc
    PUSH EDI                            ; 0050cb1a
    CALL FUN_0046d450                   ; 0050cb1b
        ;   XREF to: 0046d450 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d450()
    ADD ESP,0x8                         ; 0050cb20
    MOV ESP,EBP                         ; 0050cb23
    POP EBP                             ; 0050cb25
    POP EDI                             ; 0050cb26
    POP ESI                             ; 0050cb27
    POP EBX                             ; 0050cb28
    RET                                 ; 0050cb29
    CMP EBX,0x3e7                       ; 0050cb2a
        ;   Label: LAB_0050cb2a
    JG 0x0050cadd                       ; 0050cb30
        ;   XREF to: 0050cadd (CONDITIONAL_JUMP)  ; LAB_0050cadd
    FLD float ptr [0x005cb8fc]          ; 0050cb32 | DAT_005cb8fc
    FLD float ptr [0x0203b3b0]          ; 0050cb38 | DAT_0203b3b0
    FMUL ST1                            ; 0050cb3e
    FLD float ptr [0x0203b3b4]          ; 0050cb40 | DAT_0203b3b4
    FMUL ST2                            ; 0050cb46
    FLD float ptr [0x0203b3b8]          ; 0050cb48 | DAT_0203b3b8
    FMULP ST3                           ; 0050cb4e
    FLD double ptr [0x005cb904]         ; 0050cb50 | DAT_005cb904
    FLD float ptr [0x0203b390]          ; 0050cb56 | DAT_0203b390
    FMUL ST1                            ; 0050cb5c
    LEA EDI,[ESP + 0x24]                ; 0050cb5e
    MOV EAX,dword ptr [EAX + 0x30]      ; 0050cb62
    LEA ESI,[ESP + 0xc]                 ; 0050cb65
    MOV dword ptr [ESP + 0x10],EAX      ; 0050cb69
    FXCH ST3                            ; 0050cb6d
    FSTP float ptr [ESP + 0x3c]         ; 0050cb6f
    MOVSD ES:EDI,ESI                    ; 0050cb73
    MOVSD ES:EDI,ESI                    ; 0050cb74
    MOVSD ES:EDI,ESI                    ; 0050cb75
    FXCH                                ; 0050cb76
    FSTP float ptr [ESP + 0x40]         ; 0050cb78
    LEA EDI,[ESP + 0x18]                ; 0050cb7c
    LEA ESI,[ESP + 0x3c]                ; 0050cb80
    MOV EAX,dword ptr [ESP + 0x24]      ; 0050cb84
    FXCH ST2                            ; 0050cb88
    FSTP float ptr [ESP + 0x44]         ; 0050cb8a
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cb8e
    MOVSD ES:EDI,ESI                    ; 0050cb92
    MOVSD ES:EDI,ESI                    ; 0050cb93
    MOVSD ES:EDI,ESI                    ; 0050cb94
    FILD dword ptr [ESP + 0x68]         ; 0050cb95
    MOV EAX,dword ptr [ESP + 0x28]      ; 0050cb99
    FMUL float ptr [ESP + 0x18]         ; 0050cb9d
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cba1
    FILD dword ptr [ESP + 0x68]         ; 0050cba5
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0050cba9
    FMUL float ptr [ESP + 0x1c]         ; 0050cbad
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cbb1
    FILD dword ptr [ESP + 0x68]         ; 0050cbb5
    FMUL float ptr [ESP + 0x20]         ; 0050cbb9
    MOV EDX,dword ptr [0x005f2afc]      ; 0050cbbd | DAT_005f2afc
    FXCH ST2                            ; 0050cbc3
    CALL FUN_005a3120                   ; 0050cbc5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x30]        ; 0050cbca
    LEA EAX,[ESP + 0x30]                ; 0050cbce
    FADDP ST2,ST0                       ; 0050cbd2
    PUSH EAX                            ; 0050cbd4
    CALL FUN_005a3120                   ; 0050cbd5
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FXCH                                ; 0050cbda
    FADDP ST2,ST0                       ; 0050cbdc
    FISTP dword ptr [ESP + 0x3c]        ; 0050cbde
    CALL FUN_005a3120                   ; 0050cbe2
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x38]        ; 0050cbe7
    MOV EAX,dword ptr [EDX]             ; 0050cbeb
    PUSH EAX                            ; 0050cbed
    CALL FUN_005632a3                   ; 0050cbee
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0050cbf3
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050cbf6
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cbfa
    MOV EDX,dword ptr [0x005f2afc]      ; 0050cbfe | DAT_005f2afc
    FILD dword ptr [ESP + 0x68]         ; 0050cc04
    LEA EAX,[ESP + 0x30]                ; 0050cc08
    FLD ST0                             ; 0050cc0c
    FADD float ptr [ESP + 0x18]         ; 0050cc0e
    PUSH EAX                            ; 0050cc12
    FSTP ST1                            ; 0050cc13
    CALL FUN_005a3120                   ; 0050cc15
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x34]        ; 0050cc1a
    MOV EAX,dword ptr [EDX]             ; 0050cc1e
    ADD EAX,0x30                        ; 0050cc20
    PUSH EAX                            ; 0050cc23
    CALL FUN_005632a3                   ; 0050cc24
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0050cc29
    MOV EAX,dword ptr [ESP + 0x38]      ; 0050cc2c
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cc30
    MOV EDX,dword ptr [0x005f2afc]      ; 0050cc34 | DAT_005f2afc
    FILD dword ptr [ESP + 0x68]         ; 0050cc3a
    LEA EAX,[ESP + 0x30]                ; 0050cc3e
    FLD ST0                             ; 0050cc42
    FADD float ptr [ESP + 0x20]         ; 0050cc44
    PUSH EAX                            ; 0050cc48
    FSTP ST1                            ; 0050cc49
    CALL FUN_005a3120                   ; 0050cc4b
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x3c]        ; 0050cc50
    MOV EAX,dword ptr [EDX]             ; 0050cc54
    ADD EAX,0x60                        ; 0050cc56
    PUSH EAX                            ; 0050cc59
    CALL FUN_005632a3                   ; 0050cc5a
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0050cc5f
    MOV EAX,dword ptr [ESP + 0x30]      ; 0050cc62
    MOV dword ptr [ESP + 0x68],EAX      ; 0050cc66
    LEA EDX,[ESP + 0x30]                ; 0050cc6a
    FILD dword ptr [ESP + 0x68]         ; 0050cc6e
    FLD ST0                             ; 0050cc72
    FSUB float ptr [ESP + 0x18]         ; 0050cc74
    MOV EAX,[0x005f2afc]                ; 0050cc78 | DAT_005f2afc
    FSTP ST1                            ; 0050cc7d
    CALL FUN_005a3120                   ; 0050cc7f
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3120()
    FISTP dword ptr [ESP + 0x30]        ; 0050cc84
    MOV EAX,dword ptr [EAX]             ; 0050cc88
    PUSH EDX                            ; 0050cc8a
    ADD EAX,0x90                        ; 0050cc8b
    PUSH EAX                            ; 0050cc90
    CALL FUN_005632a3                   ; 0050cc91
        ;   XREF to: 005632a3 (UNCONDITIONAL_CALL)  ; undefined FUN_005632a3()
    ADD ESP,0x8                         ; 0050cc96
    MOV EAX,[0x005f2afc]                ; 0050cc99 | DAT_005f2afc
    MOV EDX,dword ptr [EAX]             ; 0050cc9e
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050cca0
    MOV dword ptr [EDX + 0x20],ECX      ; 0050cca4
    MOV EDX,dword ptr [EAX]             ; 0050cca7
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050cca9
    MOV dword ptr [EDX + 0x24],ECX      ; 0050ccad
    MOV EDX,dword ptr [EAX]             ; 0050ccb0
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050ccb2
    MOV dword ptr [EDX + 0x28],ECX      ; 0050ccb6
    MOV EDX,dword ptr [EAX]             ; 0050ccb9
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050ccbb
    MOV dword ptr [EDX + 0x2c],ECX      ; 0050ccbf
    MOV EDX,dword ptr [EAX]             ; 0050ccc2
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050ccc4
    MOV dword ptr [EDX + 0x50],ECX      ; 0050ccc8
    MOV EDX,dword ptr [EAX]             ; 0050cccb
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050cccd
    MOV dword ptr [EDX + 0x54],ECX      ; 0050ccd1
    MOV EDX,dword ptr [EAX]             ; 0050ccd4
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050ccd6
    MOV dword ptr [EDX + 0x58],ECX      ; 0050ccda
    MOV EDX,dword ptr [EAX]             ; 0050ccdd
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050ccdf
    MOV dword ptr [EDX + 0x5c],ECX      ; 0050cce3
    MOV EDX,dword ptr [EAX]             ; 0050cce6
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050cce8
    MOV dword ptr [EDX + 0x80],ECX      ; 0050ccec
    MOV EDX,dword ptr [EAX]             ; 0050ccf2
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050ccf4
    MOV dword ptr [EDX + 0x84],ECX      ; 0050ccf8
    MOV EDX,dword ptr [EAX]             ; 0050ccfe
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050cd00
    MOV dword ptr [EDX + 0x88],ECX      ; 0050cd04
    MOV EDX,dword ptr [EAX]             ; 0050cd0a
    MOV ECX,dword ptr [ESP + 0x54]      ; 0050cd0c
    MOV dword ptr [EDX + 0x8c],ECX      ; 0050cd10
    MOV EDX,dword ptr [EAX]             ; 0050cd16
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050cd18
    MOV dword ptr [EDX + 0xb0],ECX      ; 0050cd1c
    MOV EDX,dword ptr [EAX]             ; 0050cd22
    MOV ECX,dword ptr [ESP + 0x5c]      ; 0050cd24
    MOV dword ptr [EDX + 0xb4],ECX      ; 0050cd28
    MOV EDX,dword ptr [EAX]             ; 0050cd2e
    MOV ECX,dword ptr [ESP + 0x60]      ; 0050cd30
    MOV dword ptr [EDX + 0xb8],ECX      ; 0050cd34
    PUSH 0x1ed2a30                      ; 0050cd3a
    MOV EDX,dword ptr [EAX]             ; 0050cd3f
    MOV ECX,dword ptr [ESP + 0x58]      ; 0050cd41
    PUSH EAX                            ; 0050cd45
    MOV dword ptr [EDX + 0xbc],ECX      ; 0050cd46
    CALL FUN_0046c5e0                   ; 0050cd4c
        ;   XREF to: 0046c5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046c5e0()
    ADD ESP,0x8                         ; 0050cd51
    JMP 0x0050cadd                      ; 0050cd54
        ;   XREF to: 0050cadd (UNCONDITIONAL_JUMP)  ; LAB_0050cadd

