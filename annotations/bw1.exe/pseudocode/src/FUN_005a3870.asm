; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005a3870(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005f8b84
;   undefined4 DAT_005f8b88
;   undefined4 DAT_0061c010
;   undefined4 DAT_00622c18
;   undefined4 DAT_007c637c
;   undefined4 DAT_007dc6d8
;   undefined4 DAT_01cc4184
;   undefined4 DAT_01cd0dfc
;   undefined4 DAT_01e82168
;   undefined4 DAT_01fcf278
;   undefined4 DAT_01fcf27c
;   undefined4 DAT_01fcf280
;   undefined4 DAT_01fcf284
;   undefined4 DAT_01fcf288
;   undefined4 DAT_01fcf28c
;   ... and 6 more
;
; Called Functions:
;   FUN_00408ac0
;   FUN_00408b40
;   FUN_00408bb0
;   FUN_0040c600
;   FUN_0042c010
;   FUN_00449600
;   FUN_004b56a0
;   FUN_004b5a70
;   FUN_004b9180
;   FUN_004e34b0
;   FUN_004e3a40
;   FUN_00557300
;   FUN_00559250
;   FUN_005592d0
;   FUN_0059bdd0
;   ... and 2 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a3870
        ;   Label: FUN_005a3870
    PUSH ESI                            ; 005a3871
    PUSH EDI                            ; 005a3872
    PUSH EBP                            ; 005a3873
    MOV EBP,ESP                         ; 005a3874
    SUB ESP,0x128                       ; 005a3876
    AND ESP,0xfffffff8                  ; 005a387c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a387f
    PUSH EBX                            ; 005a3882
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a3883
    LEA ESI,[ESP + 0x60]                ; 005a3889
    LEA EDI,[ESP + 0x6c]                ; 005a388d
    CALL dword ptr [EAX + 0xe0]         ; 005a3891
    ADD ESP,0x4                         ; 005a3897
    LEA EAX,[ESP + 0x68]                ; 005a389a
    LEA ESI,[ESP + 0x5c]                ; 005a389e
    PUSH EAX                            ; 005a38a2
    MOVSD ES:EDI,ESI                    ; 005a38a3
    MOVSD ES:EDI,ESI                    ; 005a38a4
    MOVSD ES:EDI,ESI                    ; 005a38a5
    PUSH EBX                            ; 005a38a6
    LEA ESI,[ESP + 0xf4]                ; 005a38a7
    LEA EDI,[ESP + 0xac]                ; 005a38ae
    CALL FUN_00408b40                   ; 005a38b5
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[ESP + 0xf4]                ; 005a38ba
    ADD ESP,0x8                         ; 005a38c1
    MOVSD ES:EDI,ESI                    ; 005a38c4
    MOVSD ES:EDI,ESI                    ; 005a38c5
    MOVSD ES:EDI,ESI                    ; 005a38c6
    MOV EAX,dword ptr [EBX + 0x2e8]     ; 005a38c7
    MOV dword ptr [ESP + 0x7c],EAX      ; 005a38cd
    LEA EAX,[ESP + 0x74]                ; 005a38d1
    XOR EDX,EDX                         ; 005a38d5
    PUSH EAX                            ; 005a38d7
    LEA ESI,[ESP + 0x54]                ; 005a38d8
    LEA EDI,[ESP + 0x9c]                ; 005a38dc
    PUSH EBX                            ; 005a38e3
    MOV dword ptr [ESP + 0x7c],EDX      ; 005a38e4
    MOV dword ptr [ESP + 0x80],EDX      ; 005a38e8
    CALL FUN_00408ac0                   ; 005a38ef
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408ac0()
    ADD ESP,0x8                         ; 005a38f4
    LEA ESI,[ESP + 0x50]                ; 005a38f7
    FLD float ptr [ESP + 0xa4]          ; 005a38fb
    FLD float ptr [ESP + 0xa8]          ; 005a3902
    MOVSD ES:EDI,ESI                    ; 005a3909
    MOVSD ES:EDI,ESI                    ; 005a390a
    MOVSD ES:EDI,ESI                    ; 005a390b
    FLD float ptr [ESP + 0xac]          ; 005a390c
    LEA EDI,[ESP + 0x44]                ; 005a3913
    LEA ESI,[ESP + 0x104]               ; 005a3917
    FXCH ST2                            ; 005a391e
    FADD float ptr [ESP + 0x98]         ; 005a3920
    FXCH                                ; 005a3927
    FADD float ptr [ESP + 0x9c]         ; 005a3929
    FXCH ST2                            ; 005a3930
    FADD float ptr [ESP + 0xa0]         ; 005a3932
    FXCH                                ; 005a3939
    FSTP float ptr [ESP + 0x104]        ; 005a393b
    FXCH                                ; 005a3942
    FSTP float ptr [ESP + 0x108]        ; 005a3944
    FSTP float ptr [ESP + 0x10c]        ; 005a394b
    MOVSD ES:EDI,ESI                    ; 005a3952
    MOVSD ES:EDI,ESI                    ; 005a3953
    MOVSD ES:EDI,ESI                    ; 005a3954
    LEA EDI,[ESP + 0xb0]                ; 005a3955
    LEA ESI,[ESP + 0xa4]                ; 005a395c
    MOVSD ES:EDI,ESI                    ; 005a3963
    MOVSD ES:EDI,ESI                    ; 005a3964
    MOVSD ES:EDI,ESI                    ; 005a3965
    PUSH 0x1                            ; 005a3966
    MOV ESI,dword ptr [0x00622c18]      ; 005a3968 | DAT_00622c18
    PUSH ESI                            ; 005a396e | DAT_01e82168
    CALL FUN_005592d0                   ; 005a396f
        ;   XREF to: 005592d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005592d0()
    ADD ESP,0x8                         ; 005a3974
    PUSH EBX                            ; 005a3977
    MOV EDI,dword ptr [0x00622c18]      ; 005a3978 | DAT_00622c18
    PUSH EDI                            ; 005a397e | DAT_01e82168
    CALL FUN_00559250                   ; 005a397f
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 005a3984
    XOR EAX,EAX                         ; 005a3987
    MOV dword ptr [ESP + 0x118],EAX     ; 005a3989
    LEA EAX,[ESP + 0x44]                ; 005a3990
        ;   Label: LAB_005a3990
    PUSH EAX                            ; 005a3994
    LEA EAX,[ESP + 0xb4]                ; 005a3995
    PUSH EAX                            ; 005a399c
    MOV EDX,dword ptr [0x00622c18]      ; 005a399d | DAT_00622c18
    PUSH EDX                            ; 005a39a3 | DAT_01e82168
    CALL FUN_00557300                   ; 005a39a4
        ;   XREF to: 00557300 (UNCONDITIONAL_CALL)  ; undefined FUN_00557300()
    MOV dword ptr [ESP + 0x130],EAX     ; 005a39a9
    FLD float ptr [ESP + 0x130]         ; 005a39b0
    ADD ESP,0xc                         ; 005a39b7
    FLDZ                                ; 005a39ba
    FXCH                                ; 005a39bc
    FSTP double ptr [ESP]               ; 005a39be
    FCOMP double ptr [ESP]              ; 005a39c1
    FNSTSW AX                           ; 005a39c4
    SAHF                                ; 005a39c6
    JA 0x005a3ce3                       ; 005a39c7
        ;   XREF to: 005a3ce3 (CONDITIONAL_JUMP)  ; LAB_005a3ce3
    FLD1                                ; 005a39cd
    FCOMP double ptr [ESP]              ; 005a39cf
    FNSTSW AX                           ; 005a39d2
    SAHF                                ; 005a39d4
    JC 0x005a3ce3                       ; 005a39d5
        ;   XREF to: 005a3ce3 (CONDITIONAL_JUMP)  ; LAB_005a3ce3
    MOV ECX,dword ptr [0x007c637c]      ; 005a39db | DAT_007c637c
    MOV EAX,[0x00622c18]                ; 005a39e1 | DAT_00622c18
    PUSH ECX                            ; 005a39e6
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005a39e7 | DAT_01fcf2ac
    PUSH ESI                            ; 005a39ed
    CALL FUN_0040c600                   ; 005a39ee
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 005a39f3
    MOV dword ptr [ESP + 0x120],EAX     ; 005a39f6
    TEST EAX,EAX                        ; 005a39fd
    JZ 0x005a3a1e                       ; 005a39ff
        ;   XREF to: 005a3a1e (CONDITIONAL_JUMP)  ; LAB_005a3a1e
    PUSH EAX                            ; 005a3a01
    MOV ESI,dword ptr [EAX + 0x154]     ; 005a3a02
    CALL dword ptr [ESI + 0x10c]        ; 005a3a08
    ADD ESP,0x4                         ; 005a3a0e
    TEST EAX,EAX                        ; 005a3a11
    JLE 0x005a3a1e                      ; 005a3a13
        ;   XREF to: 005a3a1e (CONDITIONAL_JUMP)  ; LAB_005a3a1e
    XOR EDI,EDI                         ; 005a3a15
    MOV dword ptr [ESP + 0x120],EDI     ; 005a3a17
    MOV EAX,[0x01cd0dfc]                ; 005a3a1e | DAT_01cd0dfc
        ;   Label: LAB_005a3a1e
    PUSH EAX                            ; 005a3a23
    MOV EAX,[0x00622c18]                ; 005a3a24 | DAT_00622c18
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005a3a29 | DAT_01fcf2ac
    PUSH EDX                            ; 005a3a2f
    CALL FUN_0040c600                   ; 005a3a30
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV ECX,dword ptr [0x02c8ae44]      ; 005a3a35 | DAT_02c8ae44
    ADD ESP,0x8                         ; 005a3a3b
    MOV EDI,EAX                         ; 005a3a3e
    MOV EAX,[0x00622c18]                ; 005a3a40 | DAT_00622c18
    PUSH ECX                            ; 005a3a45
    MOV ESI,dword ptr [EAX + 0x14d144]  ; 005a3a46 | DAT_01fcf2ac
    PUSH ESI                            ; 005a3a4c
    CALL FUN_0040c600                   ; 005a3a4d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 005a3a52
    MOV ESI,EAX                         ; 005a3a55
    MOV dword ptr [ESP + 0x110],EAX     ; 005a3a57
    MOV EAX,[0x007dc6d8]                ; 005a3a5e | DAT_007dc6d8
    PUSH EAX                            ; 005a3a63
    MOV EAX,[0x00622c18]                ; 005a3a64 | DAT_00622c18
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005a3a69 | DAT_01fcf2ac
    PUSH EDX                            ; 005a3a6f
    CALL FUN_0040c600                   ; 005a3a70
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    MOV dword ptr [ESP + 0x11c],EAX     ; 005a3a75
    ADD ESP,0x8                         ; 005a3a7c
    MOV ECX,dword ptr [0x01cc4184]      ; 005a3a7f | DAT_01cc4184
    MOV EAX,[0x00622c18]                ; 005a3a85 | DAT_00622c18
    PUSH ECX                            ; 005a3a8a
    MOV EDX,dword ptr [EAX + 0x14d144]  ; 005a3a8b | DAT_01fcf2ac
    PUSH EDX                            ; 005a3a91
    CALL FUN_0040c600                   ; 005a3a92
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c600()
    ADD ESP,0x8                         ; 005a3a97
    CMP dword ptr [ESP + 0x120],0x0     ; 005a3a9a
    JZ 0x005a3d44                       ; 005a3aa2
        ;   XREF to: 005a3d44 (CONDITIONAL_JUMP)  ; LAB_005a3d44
    LEA EAX,[ESP + 0x8]                 ; 005a3aa8
    PUSH EAX                            ; 005a3aac
    CALL FUN_0042c010                   ; 005a3aad
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    MOV EAX,[0x00622c18]                ; 005a3ab2 | DAT_00622c18
    ADD ESP,0x4                         ; 005a3ab7
    MOV EAX,dword ptr [EAX + 0x14d148]  ; 005a3aba | DAT_01fcf2b0
    MOV dword ptr [ESP + 0x8],EAX       ; 005a3ac0
    PUSH EBX                            ; 005a3ac4
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a3ac5
    LEA EDI,[ESP + 0xd8]                ; 005a3acb
    CALL dword ptr [EAX + 0xec]         ; 005a3ad2
    MOV dword ptr [ESP + 0x128],EAX     ; 005a3ad8
    MOV EDX,0x3ecccccd                  ; 005a3adf
    FLD float ptr [ESP + 0x128]         ; 005a3ae4
    MOV EAX,[0x00622c18]                ; 005a3aeb | DAT_00622c18
    ADD ESP,0x4                         ; 005a3af0
    LEA ESI,[EAX + 0x14d11c]            ; 005a3af3
    MOV dword ptr [ESP + 0x10],EDX      ; 005a3af9
    FSTP float ptr [ESP + 0xc]          ; 005a3afd
    FLD float ptr [ESI + 0x4]           ; 005a3b01 | DAT_01fcf288
    FLD float ptr [ESI + 0x8]           ; 005a3b04 | DAT_01fcf28c
    FLD float ptr [ESI]                 ; 005a3b07 | DAT_01fcf284
    LEA ESI,[ESP + 0xbc]                ; 005a3b09
    FSUB float ptr [EAX + 0x14d110]     ; 005a3b10 | DAT_01fcf278
    FXCH ST2                            ; 005a3b16
    FSUB float ptr [EAX + 0x14d114]     ; 005a3b18 | DAT_01fcf27c
    FXCH                                ; 005a3b1e
    FSUB float ptr [EAX + 0x14d118]     ; 005a3b20 | DAT_01fcf280
    FXCH ST2                            ; 005a3b26
    FSTP float ptr [ESP + 0xbc]         ; 005a3b28
    FSTP float ptr [ESP + 0xc0]         ; 005a3b2f
    FSTP float ptr [ESP + 0xc4]         ; 005a3b36
    MOVSD ES:EDI,ESI                    ; 005a3b3d
    MOVSD ES:EDI,ESI                    ; 005a3b3e
    MOVSD ES:EDI,ESI                    ; 005a3b3f
    FLD float ptr [ESP + 0xd8]          ; 005a3b40
    FMUL ST0                            ; 005a3b47
    FLD float ptr [ESP + 0xd4]          ; 005a3b49
    FMUL ST0                            ; 005a3b50
    FADDP                               ; 005a3b52
    FLD float ptr [ESP + 0xdc]          ; 005a3b54
    FMUL ST0                            ; 005a3b5b
    FADDP                               ; 005a3b5d
    FSQRT                               ; 005a3b5f
    FDIVR double ptr [0x005f8b88]       ; 005a3b61 | DAT_005f8b88
    FLD float ptr [ESP + 0xd4]          ; 005a3b67
    FXCH                                ; 005a3b6e
    FSTP float ptr [ESP + 0x11c]        ; 005a3b70
    FMUL float ptr [ESP + 0x11c]        ; 005a3b77
    FLD float ptr [ESP + 0xd8]          ; 005a3b7e
    FMUL float ptr [ESP + 0x11c]        ; 005a3b85
    FLD float ptr [ESP + 0xdc]          ; 005a3b8c
    FMUL float ptr [ESP + 0x11c]        ; 005a3b93
    LEA EDI,[ESP + 0x80]                ; 005a3b9a
    LEA ESI,[ESP + 0xe0]                ; 005a3ba1
    FXCH ST2                            ; 005a3ba8
    FSTP float ptr [ESP + 0xe0]         ; 005a3baa
    FSTP float ptr [ESP + 0xe4]         ; 005a3bb1
    FSTP float ptr [ESP + 0xe8]         ; 005a3bb8
    MOVSD ES:EDI,ESI                    ; 005a3bbf
    MOVSD ES:EDI,ESI                    ; 005a3bc0
    MOVSD ES:EDI,ESI                    ; 005a3bc1
    LEA EAX,[ESP + 0x14]                ; 005a3bc2
    LEA ESI,[ESP + 0x80]                ; 005a3bc6
    CMP EAX,ESI                         ; 005a3bcd
    JZ 0x005a3bf2                       ; 005a3bcf
        ;   XREF to: 005a3bf2 (CONDITIONAL_JUMP)  ; LAB_005a3bf2
    MOV EAX,dword ptr [ESP + 0x80]      ; 005a3bd1
    MOV dword ptr [ESP + 0x14],EAX      ; 005a3bd8
    MOV EAX,dword ptr [ESP + 0x84]      ; 005a3bdc
    MOV dword ptr [ESP + 0x18],EAX      ; 005a3be3
    MOV EAX,dword ptr [ESP + 0x88]      ; 005a3be7
    MOV dword ptr [ESP + 0x1c],EAX      ; 005a3bee
    MOV EAX,[0x00622c18]                ; 005a3bf2 | DAT_00622c18
        ;   Label: LAB_005a3bf2
    ADD EAX,0x14d138                    ; 005a3bf7
    PUSH EAX                            ; 005a3bfc | DAT_01fcf2a0
    MOV ECX,dword ptr [ESP + 0x124]     ; 005a3bfd
    PUSH ECX                            ; 005a3c04
    LEA ESI,[ESP + 0x100]               ; 005a3c05
    LEA EDI,[ESP + 0x94]                ; 005a3c0c
    CALL FUN_00408bb0                   ; 005a3c13
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408bb0()
    LEA ESI,[ESP + 0x100]               ; 005a3c18
    ADD ESP,0x8                         ; 005a3c1f
    MOVSD ES:EDI,ESI                    ; 005a3c22
    MOVSD ES:EDI,ESI                    ; 005a3c23
    MOVSD ES:EDI,ESI                    ; 005a3c24
    LEA EAX,[ESP + 0x8c]                ; 005a3c25
    LEA ESI,[ESP + 0x24]                ; 005a3c2c
    CMP ESI,EAX                         ; 005a3c30
    JZ 0x005a3c55                       ; 005a3c32
        ;   XREF to: 005a3c55 (CONDITIONAL_JUMP)  ; LAB_005a3c55
    MOV EAX,dword ptr [ESP + 0x8c]      ; 005a3c34
    MOV dword ptr [ESP + 0x24],EAX      ; 005a3c3b
    MOV EAX,dword ptr [ESP + 0x90]      ; 005a3c3f
    MOV dword ptr [ESP + 0x28],EAX      ; 005a3c46
    MOV EAX,dword ptr [ESP + 0x94]      ; 005a3c4a
    MOV dword ptr [ESP + 0x2c],EAX      ; 005a3c51
    MOV ESI,0x65                        ; 005a3c55
        ;   Label: LAB_005a3c55
    MOV EAX,dword ptr [EBX + 0x56c]     ; 005a3c5a
    MOV EDI,0x3f800000                  ; 005a3c60
    MOV dword ptr [ESP + 0x30],EAX      ; 005a3c65
    MOV dword ptr [ESP + 0x38],ESI      ; 005a3c69
    MOV dword ptr [ESP + 0x34],EDI      ; 005a3c6d
    MOV dword ptr [ESP + 0x3c],EBX      ; 005a3c71
    PUSH EBX                            ; 005a3c75
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a3c76
    CALL dword ptr [EAX + 0x94]         ; 005a3c7c
    ADD ESP,0x4                         ; 005a3c82
    MOV dword ptr [ESP + 0x40],EAX      ; 005a3c85
    LEA EAX,[ESP + 0x8]                 ; 005a3c89
    MOV ESI,dword ptr [ESP + 0x120]     ; 005a3c8d
    PUSH EAX                            ; 005a3c94
    MOV EAX,dword ptr [ESP + 0x124]     ; 005a3c95
    MOV ESI,dword ptr [ESI + 0x154]     ; 005a3c9c
    PUSH EAX                            ; 005a3ca2
    CALL dword ptr [ESI + 0x108]        ; 005a3ca3
    MOV EDX,dword ptr [EBX + 0x2e4]     ; 005a3ca9
    ADD ESP,0x8                         ; 005a3caf
    TEST EDX,EDX                        ; 005a3cb2
    JZ 0x005a3ce3                       ; 005a3cb4
        ;   XREF to: 005a3ce3 (CONDITIONAL_JUMP)  ; LAB_005a3ce3
    MOV EAX,[0x00622c18]                ; 005a3cb6 | DAT_00622c18
    MOV ECX,dword ptr [EAX + 0x14d144]  ; 005a3cbb | DAT_01fcf2ac
    PUSH ECX                            ; 005a3cc1
    PUSH EAX                            ; 005a3cc2 | DAT_01e82168
        ;   Label: LAB_005a3cc2
    CALL FUN_00559250                   ; 005a3cc3
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 005a3cc8
        ;   Label: LAB_005a3cc8
    MOV ESI,dword ptr [ESP + 0x118]     ; 005a3ccb
        ;   Label: LAB_005a3ccb
    INC ESI                             ; 005a3cd2
    MOV dword ptr [ESP + 0x118],ESI     ; 005a3cd3
    CMP ESI,0x4                         ; 005a3cda
    JL 0x005a3990                       ; 005a3cdd
        ;   XREF to: 005a3990 (CONDITIONAL_JUMP)  ; LAB_005a3990
    LEA EDI,[ESP + 0xc8]                ; 005a3ce3
        ;   Label: LAB_005a3ce3
    LEA EAX,[EBX + 0x3c]                ; 005a3cea
    LEA ESI,[ESP + 0xa4]                ; 005a3ced
    PUSH EAX                            ; 005a3cf4
    MOVSD ES:EDI,ESI                    ; 005a3cf5
    MOVSD ES:EDI,ESI                    ; 005a3cf6
    MOVSD ES:EDI,ESI                    ; 005a3cf7
    LEA EAX,[ESP + 0xcc]                ; 005a3cf8
    FLD float ptr [ESP + 0xd0]          ; 005a3cff
    PUSH EAX                            ; 005a3d06
    MOV EAX,[0x0061c010]                ; 005a3d07 | DAT_0061c010
    FADD float ptr [0x005f8b84]         ; 005a3d0c | DAT_005f8b84
    PUSH EAX                            ; 005a3d12
    FSTP float ptr [ESP + 0xd8]         ; 005a3d13
    CALL FUN_004b5a70                   ; 005a3d1a
        ;   XREF to: 004b5a70 (UNCONDITIONAL_CALL)  ; undefined FUN_004b5a70()
    FLD float ptr [EBX + 0x774]         ; 005a3d1f
    MOV EAX,0x1                         ; 005a3d25
    MOV dword ptr [EBX + 0x8b0],0x2     ; 005a3d2a
    ADD ESP,0xc                         ; 005a3d34
    FSTP float ptr [EBX + 0x300]        ; 005a3d37
    MOV ESP,EBP                         ; 005a3d3d
    POP EBP                             ; 005a3d3f
    POP EDI                             ; 005a3d40
    POP ESI                             ; 005a3d41
    POP EBX                             ; 005a3d42
    RET                                 ; 005a3d43
    TEST EDI,EDI                        ; 005a3d44
        ;   Label: LAB_005a3d44
    JNZ 0x005a3da6                      ; 005a3d46
        ;   XREF to: 005a3da6 (CONDITIONAL_JUMP)  ; LAB_005a3da6
    TEST ESI,ESI                        ; 005a3d48
    JZ 0x005a3dcd                       ; 005a3d4a
        ;   XREF to: 005a3dcd (CONDITIONAL_JUMP)  ; LAB_005a3dcd
    PUSH ESI                            ; 005a3d50
    CALL FUN_0059bdd0                   ; 005a3d51
        ;   XREF to: 0059bdd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059bdd0()
    ADD ESP,0x4                         ; 005a3d56
    PUSH EBX                            ; 005a3d59
    PUSH ESI                            ; 005a3d5a
    CALL FUN_0059bdf0                   ; 005a3d5b
        ;   XREF to: 0059bdf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0059bdf0()
    ADD ESP,0x8                         ; 005a3d60
    TEST EAX,EAX                        ; 005a3d63
    JZ 0x005a3d94                       ; 005a3d65
        ;   XREF to: 005a3d94 (CONDITIONAL_JUMP)  ; LAB_005a3d94
    PUSH EBX                            ; 005a3d67
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a3d68
    CALL dword ptr [EAX + 0xec]         ; 005a3d6e
    MOV dword ptr [ESP + 0x128],EAX     ; 005a3d74
    FLD float ptr [ESP + 0x128]         ; 005a3d7b
    ADD ESP,0x4                         ; 005a3d82
    SUB ESP,0x4                         ; 005a3d85
    FSTP float ptr [ESP]                ; 005a3d88
    PUSH ESI                            ; 005a3d8b
    CALL FUN_0059be30                   ; 005a3d8c
        ;   XREF to: 0059be30 (UNCONDITIONAL_CALL)  ; undefined FUN_0059be30()
    ADD ESP,0x8                         ; 005a3d91
    MOV EDI,dword ptr [ESP + 0x110]     ; 005a3d94
        ;   Label: LAB_005a3d94
    PUSH EDI                            ; 005a3d9b
    MOV EAX,[0x00622c18]                ; 005a3d9c | DAT_00622c18
    JMP 0x005a3cc2                      ; 005a3da1
        ;   XREF to: 005a3cc2 (UNCONDITIONAL_JUMP)  ; LAB_005a3cc2
    PUSH EDI                            ; 005a3da6
        ;   Label: LAB_005a3da6
    CALL FUN_004e3a40                   ; 005a3da7
        ;   XREF to: 004e3a40 (UNCONDITIONAL_CALL)  ; undefined FUN_004e3a40()
    ADD ESP,0x4                         ; 005a3dac
    TEST EAX,EAX                        ; 005a3daf
    JZ 0x005a3ce3                       ; 005a3db1
        ;   XREF to: 005a3ce3 (CONDITIONAL_JUMP)  ; LAB_005a3ce3
    MOV EAX,[0x00622c18]                ; 005a3db7 | DAT_00622c18
    ADD EAX,0x14d138                    ; 005a3dbc
    PUSH EAX                            ; 005a3dc1 | DAT_01fcf2a0
    PUSH EDI                            ; 005a3dc2
    CALL FUN_004e34b0                   ; 005a3dc3
        ;   XREF to: 004e34b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e34b0()
    JMP 0x005a3cc8                      ; 005a3dc8
        ;   XREF to: 005a3cc8 (UNCONDITIONAL_JUMP)  ; LAB_005a3cc8
    MOV ESI,dword ptr [ESP + 0x114]     ; 005a3dcd
        ;   Label: LAB_005a3dcd
    TEST ESI,ESI                        ; 005a3dd4
    JNZ 0x005a3dea                      ; 005a3dd6
        ;   XREF to: 005a3dea (CONDITIONAL_JUMP)  ; LAB_005a3dea
    TEST EAX,EAX                        ; 005a3dd8
    JZ 0x005a3df8                       ; 005a3dda
        ;   XREF to: 005a3df8 (CONDITIONAL_JUMP)  ; LAB_005a3df8
    PUSH EAX                            ; 005a3ddc
    CALL FUN_004b9180                   ; 005a3ddd
        ;   XREF to: 004b9180 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9180()
    ADD ESP,0x4                         ; 005a3de2
    JMP 0x005a3ccb                      ; 005a3de5
        ;   XREF to: 005a3ccb (UNCONDITIONAL_JUMP)  ; LAB_005a3ccb
    PUSH ESI                            ; 005a3dea
        ;   Label: LAB_005a3dea
    CALL FUN_00449600                   ; 005a3deb
        ;   XREF to: 00449600 (UNCONDITIONAL_CALL)  ; undefined FUN_00449600()
    ADD ESP,0x4                         ; 005a3df0
    JMP 0x005a3ccb                      ; 005a3df3
        ;   XREF to: 005a3ccb (UNCONDITIONAL_JUMP)  ; LAB_005a3ccb
    MOV EAX,[0x00622c18]                ; 005a3df8 | DAT_00622c18
        ;   Label: LAB_005a3df8
    MOV EDI,dword ptr [EAX + 0x14d144]  ; 005a3dfd | DAT_01fcf2ac
    PUSH EDI                            ; 005a3e03
    MOV EDX,dword ptr [EAX + 0x14d134]  ; 005a3e04 | DAT_01fcf29c
    PUSH EDX                            ; 005a3e0a
    LEA ESI,[EAX + 0x14d128]            ; 005a3e0b
    PUSH ESI                            ; 005a3e11 | DAT_01fcf290
    ADD EAX,0x14d138                    ; 005a3e12
    PUSH EAX                            ; 005a3e17 | DAT_01fcf2a0
    MOV ECX,dword ptr [0x0061c010]      ; 005a3e18 | DAT_0061c010
    PUSH ECX                            ; 005a3e1e
    CALL FUN_004b56a0                   ; 005a3e1f
        ;   XREF to: 004b56a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b56a0()
    ADD ESP,0x14                        ; 005a3e24
    JMP 0x005a3ce3                      ; 005a3e27
        ;   XREF to: 005a3ce3 (UNCONDITIONAL_JUMP)  ; LAB_005a3ce3

