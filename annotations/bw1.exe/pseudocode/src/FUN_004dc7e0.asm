; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004dc7e0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_004dc7c4 = 004dccbc
;   undefined4 s_s_confused_while_walking_005e3923+1
;   TerminatedCString s_gargoyle_alive_wav_005e394e
;   TerminatedCString s_gargoyle_stone_wav_005e3962
;   TerminatedCString s_gargoyle_stone_wav_005e3975
;   undefined4 DAT_005e398c
;   undefined4 DAT_00600ffc
;   undefined4 DAT_00601008
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_007db5f0
;   undefined4 DAT_01c43530
;   undefined4 DAT_01cd0ca4
;   undefined4 DAT_02c8af28
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0040cd00
;   FUN_0040cd60
;   FUN_0042c010
;   FUN_0042ccf0
;   FUN_0042d700
;   FUN_0042d750
;   FUN_0042e120
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00432240
;   FUN_00433e80
;   FUN_00434a80
;   FUN_00435320
;   ... and 11 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004dc7e0
        ;   Label: FUN_004dc7e0
    PUSH ESI                            ; 004dc7e1
    PUSH EDI                            ; 004dc7e2
    PUSH EBP                            ; 004dc7e3
    MOV EBP,ESP                         ; 004dc7e4
    SUB ESP,0x16c                       ; 004dc7e6
    SUB EBP,0x7a                        ; 004dc7ec
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004dc7ef
    PUSH dword ptr [EBP + 0x92]         ; 004dc7f5
    PUSH EBX                            ; 004dc7fb
    CALL FUN_0042e1a0                   ; 004dc7fc
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 004dc801
    TEST EAX,EAX                        ; 004dc804
    JZ 0x004dc860                       ; 004dc806
        ;   XREF to: 004dc860 (CONDITIONAL_JUMP)  ; LAB_004dc860
    LEA EAX,[EBX + 0x249c]              ; 004dc808
        ;   Label: LAB_004dc808
    MOV dword ptr [EAX + 0x8],0x0       ; 004dc80e
    FLD float ptr [EBP + 0x92]          ; 004dc815
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dc81b
    MOV dword ptr [EAX + 0x4],EDX       ; 004dc81e
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dc821
    MOV dword ptr [EAX],EDX             ; 004dc824
    FMUL float ptr [EBX + 0xc1d0]       ; 004dc826
    LEA EAX,[EBX + 0x158]               ; 004dc82c
    FSTP float ptr [EBP + 0x56]         ; 004dc832
    MOV dword ptr [EBP + 0x72],EAX      ; 004dc835
    FLD float ptr [EBP + 0x56]          ; 004dc838
        ;   Label: LAB_004dc838
    FLDZ                                ; 004dc83b
    FCOMPP                              ; 004dc83d
    FNSTSW AX                           ; 004dc83f
    SAHF                                ; 004dc841
    JNC 0x004dc884                      ; 004dc842
        ;   XREF to: 004dc884 (CONDITIONAL_JUMP)  ; LAB_004dc884
    LEA EAX,[EBP + 0x56]                ; 004dc844
    PUSH EAX                            ; 004dc847
    MOV EAX,dword ptr [EBP + 0x72]      ; 004dc848
    PUSH EAX                            ; 004dc84b
    CALL FUN_00524270                   ; 004dc84c
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 004dc851
    PUSH EAX                            ; 004dc854
    PUSH EBX                            ; 004dc855
    CALL FUN_00434a80                   ; 004dc856
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 004dc85b
    JMP 0x004dc838                      ; 004dc85e
        ;   XREF to: 004dc838 (UNCONDITIONAL_JUMP)  ; LAB_004dc838
    LEA EAX,[EBX + 0x158]               ; 004dc860
        ;   Label: LAB_004dc860
    PUSH EAX                            ; 004dc866
    CALL FUN_00524770                   ; 004dc867
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004dc86c
    ADD ESP,0x4                         ; 004dc86f
    CMP EAX,0x8                         ; 004dc872
    JZ 0x004dc87c                       ; 004dc875
        ;   XREF to: 004dc87c (CONDITIONAL_JUMP)  ; LAB_004dc87c
    CMP EAX,0x5                         ; 004dc877
    JNZ 0x004dc808                      ; 004dc87a
        ;   XREF to: 004dc808 (CONDITIONAL_JUMP)  ; LAB_004dc808
    LEA ESP,[EBP + 0x7a]                ; 004dc87c
        ;   Label: LAB_004dc87c
    POP EBP                             ; 004dc87f
    POP EDI                             ; 004dc880
    POP ESI                             ; 004dc881
    POP EBX                             ; 004dc882
    RET                                 ; 004dc883
    FLD float ptr [EBP + 0x92]          ; 004dc884
        ;   Label: LAB_004dc884
    FMUL float ptr [EBX + 0xc1d0]       ; 004dc88a
    SUB ESP,0x4                         ; 004dc890
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004dc893
    MOV dword ptr [EBX + 0x2524],EAX    ; 004dc899
    FSTP float ptr [ESP]                ; 004dc89f
    PUSH EBX                            ; 004dc8a2
    CALL FUN_00435320                   ; 004dc8a3
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined FUN_00435320()
    ADD ESP,0x8                         ; 004dc8a8
    MOV EDX,dword ptr [EBP + 0x72]      ; 004dc8ab
    PUSH EDX                            ; 004dc8ae
    CALL FUN_00524770                   ; 004dc8af
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 004dc8b4
    PUSH dword ptr [EBP + 0x92]         ; 004dc8b7
    MOV ESI,dword ptr [EAX + 0x24]      ; 004dc8bd
    PUSH EBX                            ; 004dc8c0
    MOV dword ptr [EBP + 0x5e],ESI      ; 004dc8c1
    CALL FUN_00432240                   ; 004dc8c4
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; undefined FUN_00432240()
    ADD ESP,0x8                         ; 004dc8c9
    TEST EAX,EAX                        ; 004dc8cc
    JZ 0x004dd1f4                       ; 004dc8ce
        ;   XREF to: 004dd1f4 (CONDITIONAL_JUMP)  ; LAB_004dd1f4
    MOV EAX,dword ptr [EBX + 0x273c]    ; 004dc8d4
    CMP EAX,0x2                         ; 004dc8da
    JNC 0x004dcb64                      ; 004dc8dd
        ;   XREF to: 004dcb64 (CONDITIONAL_JUMP)  ; LAB_004dcb64
    CMP EAX,0x1                         ; 004dc8e3
    JNZ 0x004dcb6f                      ; 004dc8e6
        ;   XREF to: 004dcb6f (CONDITIONAL_JUMP)  ; LAB_004dcb6f
    PUSH 0x1                            ; 004dc8ec
        ;   Label: LAB_004dc8ec
    PUSH 0x1                            ; 004dc8ee
    LEA EAX,[EBX + 0x158]               ; 004dc8f0
        ;   Label: LAB_004dc8f0
    PUSH EAX                            ; 004dc8f6
    CALL FUN_005247c0                   ; 004dc8f7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dc8fc
        ;   Label: LAB_004dc8fc
    LEA EAX,[EBX + 0x249c]              ; 004dc8ff
    MOV dword ptr [EAX + 0x8],0x0       ; 004dc905
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dc90c
    MOV dword ptr [EAX + 0x4],EDX       ; 004dc90f
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dc912
    MOV dword ptr [EAX],EDX             ; 004dc915
    FLD float ptr [EBX + 0xc1e4]        ; 004dc917
        ;   Label: caseD_4
    FLDZ                                ; 004dc91d
    FCOMPP                              ; 004dc91f
    FNSTSW AX                           ; 004dc921
    SAHF                                ; 004dc923
    JNC 0x004dc938                      ; 004dc924
        ;   XREF to: 004dc938 (CONDITIONAL_JUMP)  ; LAB_004dc938
    FLD float ptr [EBX + 0xc1e4]        ; 004dc926
    FSUB float ptr [EBP + 0x92]         ; 004dc92c
    FSTP float ptr [EBX + 0xc1e4]       ; 004dc932
    PUSH EBX                            ; 004dc938
        ;   Label: LAB_004dc938
    CALL FUN_0042e120                   ; 004dc939
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e120()
    ADD ESP,0x4                         ; 004dc93e
    TEST EAX,EAX                        ; 004dc941
    JZ 0x004dca2c                       ; 004dc943
        ;   XREF to: 004dca2c (CONDITIONAL_JUMP)  ; LAB_004dca2c
    PUSH dword ptr [EBP + 0x92]         ; 004dc949
    PUSH EBX                            ; 004dc94f
    LEA ESI,[EBX + 0x2518]              ; 004dc950
    CALL FUN_0042d700                   ; 004dc956
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d700()
    FLD float ptr [ESI]                 ; 004dc95b
    FMUL float ptr [EBP + 0x92]         ; 004dc95d
    FLD float ptr [ESI + 0x4]           ; 004dc963
    FMUL float ptr [EBP + 0x92]         ; 004dc966
    FLD float ptr [ESI + 0x8]           ; 004dc96c
    FMUL float ptr [EBP + 0x92]         ; 004dc96f
    LEA EDI,[EBP + -0x62]               ; 004dc975
    LEA ESI,[EBP + 0xffffff6e]          ; 004dc978
    FXCH ST2                            ; 004dc97e
    FSTP float ptr [EBP + 0xffffff6e]   ; 004dc980
    FSTP float ptr [EBP + 0xffffff72]   ; 004dc986
    FSTP float ptr [EBP + 0xffffff76]   ; 004dc98c
    MOVSD ES:EDI,ESI                    ; 004dc992
    MOVSD ES:EDI,ESI                    ; 004dc993
    MOVSD ES:EDI,ESI                    ; 004dc994
    LEA EAX,[EBX + 0x250c]              ; 004dc995
    FLD float ptr [EBP + -0x62]         ; 004dc99b
    FLD float ptr [EBP + -0x5e]         ; 004dc99e
    FLD float ptr [EBP + -0x5a]         ; 004dc9a1
    LEA EDI,[EBP + -0x3e]               ; 004dc9a4
    LEA ESI,[EBP + -0x2]                ; 004dc9a7
    FXCH ST2                            ; 004dc9aa
    FADD float ptr [EAX]                ; 004dc9ac
    FXCH                                ; 004dc9ae
    FADD float ptr [EAX + 0x4]          ; 004dc9b0
    FXCH ST2                            ; 004dc9b3
    FADD float ptr [EAX + 0x8]          ; 004dc9b5
    FXCH                                ; 004dc9b8
    FSTP float ptr [EBP + -0x2]         ; 004dc9ba
    FXCH                                ; 004dc9bd
    FSTP float ptr [EBP + 0x2]          ; 004dc9bf
    FSTP float ptr [EBP + 0x6]          ; 004dc9c2
    MOVSD ES:EDI,ESI                    ; 004dc9c5
    MOVSD ES:EDI,ESI                    ; 004dc9c6
    MOVSD ES:EDI,ESI                    ; 004dc9c7
    LEA EDX,[EBX + 0x249c]              ; 004dc9c8
    FLD float ptr [EBP + -0x3e]         ; 004dc9ce
    FLD float ptr [EBP + -0x3a]         ; 004dc9d1
    FLD float ptr [EBP + -0x36]         ; 004dc9d4
    LEA EDI,[EBP + -0x1a]               ; 004dc9d7
    LEA ESI,[EBP + -0xe]                ; 004dc9da
    FXCH ST2                            ; 004dc9dd
    FADD float ptr [EDX]                ; 004dc9df
    FXCH                                ; 004dc9e1
    FADD float ptr [EDX + 0x4]          ; 004dc9e3
    FXCH ST2                            ; 004dc9e6
    FADD float ptr [EDX + 0x8]          ; 004dc9e8
    FXCH                                ; 004dc9eb
    FSTP float ptr [EBP + -0xe]         ; 004dc9ed
    FXCH                                ; 004dc9f0
    FSTP float ptr [EBP + -0xa]         ; 004dc9f2
    FSTP float ptr [EBP + -0x6]         ; 004dc9f5
    MOVSD ES:EDI,ESI                    ; 004dc9f8
    MOVSD ES:EDI,ESI                    ; 004dc9f9
    MOVSD ES:EDI,ESI                    ; 004dc9fa
    MOV dword ptr [EAX + 0x8],0x0       ; 004dc9fb
    ADD ESP,0x8                         ; 004dca02
    MOV ECX,dword ptr [EAX + 0x8]       ; 004dca05
    MOV dword ptr [EAX + 0x4],ECX       ; 004dca08
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dca0b
    MOV dword ptr [EAX],ECX             ; 004dca0e
    MOV dword ptr [EDX + 0x8],0x0       ; 004dca10
    LEA EAX,[EBP + -0x1a]               ; 004dca17
    FLD float ptr [EDX + 0x8]           ; 004dca1a
    PUSH EAX                            ; 004dca1d
    FST float ptr [EDX + 0x4]           ; 004dca1e
    PUSH EBX                            ; 004dca21
    FSTP float ptr [EDX]                ; 004dca22
    CALL FUN_0042d750                   ; 004dca24
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 004dca29
    PUSH EBX                            ; 004dca2c
        ;   Label: LAB_004dca2c
    CALL FUN_0042e160                   ; 004dca2d
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 004dca32
    LEA EAX,[EBX + 0x158]               ; 004dca35
    PUSH EAX                            ; 004dca3b
    CALL FUN_005675a0                   ; 004dca3c
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 004dca41
    PUSH dword ptr [EBP + 0x92]         ; 004dca44
    PUSH EBX                            ; 004dca4a
    CALL FUN_00433e80                   ; 004dca4b
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004dca50
    ADD ESP,0x8                         ; 004dca53
    CMP ECX,0x5                         ; 004dca56
    JNZ 0x004dd204                      ; 004dca59
        ;   XREF to: 004dd204 (CONDITIONAL_JUMP)  ; LAB_004dd204
    MOV EAX,dword ptr [EBX + 0xc298]    ; 004dca5f
    SHL EAX,0x8                         ; 004dca65
    MOV dword ptr [EBX + 0xc2b0],EAX    ; 004dca68
    MOV EAX,dword ptr [EBX + 0xc29c]    ; 004dca6e
    SHL EAX,0x8                         ; 004dca74
    MOV dword ptr [EBX + 0xc2b4],EAX    ; 004dca77
    MOV EAX,dword ptr [EBX + 0xc2a0]    ; 004dca7d
    SHL EAX,0x8                         ; 004dca83
    MOV dword ptr [EBX + 0xc2b8],EAX    ; 004dca86
    MOV ESI,dword ptr [EBX + 0xc2b0]    ; 004dca8c
        ;   Label: LAB_004dca8c
    MOV EAX,dword ptr [EBX + 0x108]     ; 004dca92
    CMP EAX,ESI                         ; 004dca98
    JGE 0x004dd227                      ; 004dca9a
        ;   XREF to: 004dd227 (CONDITIONAL_JUMP)  ; LAB_004dd227
    MOV EAX,[0x01c43530]                ; 004dcaa0 | DAT_01c43530
    MOV ESI,dword ptr [EBX + 0x108]     ; 004dcaa5
    ADD ESI,EAX                         ; 004dcaab
    MOV EDI,dword ptr [EBX + 0xc2b0]    ; 004dcaad
    MOV dword ptr [EBX + 0x108],ESI     ; 004dcab3
    CMP ESI,EDI                         ; 004dcab9
    JLE 0x004dcac3                      ; 004dcabb
        ;   XREF to: 004dcac3 (CONDITIONAL_JUMP)  ; LAB_004dcac3
    MOV dword ptr [EBX + 0x108],EDI     ; 004dcabd
    MOV EDX,dword ptr [EBX + 0xc2b4]    ; 004dcac3
        ;   Label: LAB_004dcac3
    MOV EAX,dword ptr [EBX + 0x10c]     ; 004dcac9
    CMP EAX,EDX                         ; 004dcacf
    JGE 0x004dd259                      ; 004dcad1
        ;   XREF to: 004dd259 (CONDITIONAL_JUMP)  ; LAB_004dd259
    MOV EAX,[0x01c43530]                ; 004dcad7 | DAT_01c43530
    MOV EDX,dword ptr [EBX + 0x10c]     ; 004dcadc
    ADD EDX,EAX                         ; 004dcae2
    MOV ECX,dword ptr [EBX + 0xc2b4]    ; 004dcae4
    MOV dword ptr [EBX + 0x10c],EDX     ; 004dcaea
    CMP EDX,ECX                         ; 004dcaf0
    JLE 0x004dcafa                      ; 004dcaf2
        ;   XREF to: 004dcafa (CONDITIONAL_JUMP)  ; LAB_004dcafa
    MOV dword ptr [EBX + 0x10c],ECX     ; 004dcaf4
    MOV ESI,dword ptr [EBX + 0xc2b8]    ; 004dcafa
        ;   Label: LAB_004dcafa
    MOV EAX,dword ptr [EBX + 0x110]     ; 004dcb00
    CMP EAX,ESI                         ; 004dcb06
    JGE 0x004dd28b                      ; 004dcb08
        ;   XREF to: 004dd28b (CONDITIONAL_JUMP)  ; LAB_004dd28b
    MOV EAX,[0x01c43530]                ; 004dcb0e | DAT_01c43530
    MOV ESI,dword ptr [EBX + 0x110]     ; 004dcb13
    ADD ESI,EAX                         ; 004dcb19
    MOV EDI,dword ptr [EBX + 0xc2b8]    ; 004dcb1b
    MOV dword ptr [EBX + 0x110],ESI     ; 004dcb21
    CMP ESI,EDI                         ; 004dcb27
    JLE 0x004dc87c                      ; 004dcb29
        ;   XREF to: 004dc87c (CONDITIONAL_JUMP)  ; LAB_004dc87c
    MOV dword ptr [EBX + 0x110],EDI     ; 004dcb2f
    LEA ESP,[EBP + 0x7a]                ; 004dcb35
    POP EBP                             ; 004dcb38
    POP EDI                             ; 004dcb39
    POP ESI                             ; 004dcb3a
    POP EBX                             ; 004dcb3b
    RET                                 ; 004dcb3c
    PUSH 0x1                            ; 004dcb3d
        ;   Label: LAB_004dcb3d
    PUSH 0x0                            ; 004dcb3f
    MOV EAX,dword ptr [EBP + 0x72]      ; 004dcb41
    PUSH EAX                            ; 004dcb44
    CALL FUN_005247c0                   ; 004dcb45
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcb4a
    PUSH EBX                            ; 004dcb4d
    PUSH 0x5e3924                       ; 004dcb4e | s_s_confused_while_walking_005e3923+1
    MOV EDX,dword ptr [0x00611100]      ; 004dcb53 | PTR_DAT_00611100
    PUSH EDX                            ; 004dcb59 | DAT_007db5f0
    CALL FUN_00445430                   ; 004dcb5a
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    JMP 0x004dc8fc                      ; 004dcb5f
        ;   XREF to: 004dc8fc (UNCONDITIONAL_JUMP)  ; LAB_004dc8fc
    JBE 0x004dc8ec                      ; 004dcb64
        ;   XREF to: 004dc8ec (CONDITIONAL_JUMP)  ; LAB_004dc8ec
        ;   Label: LAB_004dcb64
    CMP EAX,0x3                         ; 004dcb6a
    JZ 0x004dcb3d                       ; 004dcb6d
        ;   XREF to: 004dcb3d (CONDITIONAL_JUMP)  ; LAB_004dcb3d
    PUSH 0x1                            ; 004dcb6f
        ;   Label: LAB_004dcb6f
    PUSH 0x0                            ; 004dcb71
    JMP 0x004dc8f0                      ; 004dcb73
        ;   XREF to: 004dc8f0 (UNCONDITIONAL_JUMP)  ; LAB_004dc8f0
    LEA EAX,[EBP + 0xffffff0e]          ; 004dcb78
        ;   Label: caseD_3
    PUSH EAX                            ; 004dcb7e
    CALL FUN_0042c010                   ; 004dcb7f
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 004dcb84
    PUSH 0x40a00000                     ; 004dcb87
    PUSH 0x40400000                     ; 004dcb8c
    LEA ESI,[EBP + -0x6e]               ; 004dcb91
    CALL FUN_0040cc00                   ; 004dcb94
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 004dcb99
    ADD ESP,0x8                         ; 004dcb9c
    LEA EAX,[EBP + 0xffffff0e]          ; 004dcb9f
    MOV EDX,dword ptr [0x01cd0ca4]      ; 004dcba5 | DAT_01cd0ca4
    PUSH EAX                            ; 004dcbab
    LEA EAX,[EDX*0x4 + 0x0]             ; 004dcbac
    MOV dword ptr [EBP + 0xffffff42],EBX ; 004dcbb3
    SUB EAX,EDX                         ; 004dcbb9
    MOV dword ptr [EBP + 0xffffff46],EBX ; 004dcbbb
    SHL EAX,0x4                         ; 004dcbc1
    LEA EDX,[EBX + 0xfd8]               ; 004dcbc4
    PUSH 0x3ecccccd                     ; 004dcbca
    ADD EAX,EDX                         ; 004dcbcf
    LEA EDI,[EBP + 0xffffff56]          ; 004dcbd1
    PUSH EAX                            ; 004dcbd7
    FLD float ptr [EBP + 0x76]          ; 004dcbd8
    PUSH 0x2c8af28                      ; 004dcbdb | DAT_02c8af28
    FSTP float ptr [EBP + 0xffffff12]   ; 004dcbe0
    CALL FUN_005b5080                   ; 004dcbe6
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 004dcbeb
    LEA EAX,[EBP + 0xffffff56]          ; 004dcbee
    LEA ESI,[EBP + -0x6e]               ; 004dcbf4
    PUSH EAX                            ; 004dcbf7
    MOVSD ES:EDI,ESI                    ; 004dcbf8
    MOVSD ES:EDI,ESI                    ; 004dcbf9
    MOVSD ES:EDI,ESI                    ; 004dcbfa
    PUSH EBX                            ; 004dcbfb
    LEA ESI,[EBP + -0x56]               ; 004dcbfc
    CALL FUN_00408b40                   ; 004dcbff
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 004dcc04
    LEA EAX,[EBP + 0xffffff62]          ; 004dcc07
    PUSH EAX                            ; 004dcc0d
    LEA EDI,[EBP + 0xffffff62]          ; 004dcc0e
    LEA ESI,[EBP + -0x56]               ; 004dcc14
    PUSH EBX                            ; 004dcc17
    MOVSD ES:EDI,ESI                    ; 004dcc18
    MOVSD ES:EDI,ESI                    ; 004dcc19
    MOVSD ES:EDI,ESI                    ; 004dcc1a
    CALL FUN_004a0770                   ; 004dcc1b
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 004dcc20
    JMP 0x004dc917                      ; 004dcc23
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004dcc28
        ;   Label: caseD_5
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dcc2e
    PUSH EBX                            ; 004dcc34
    CALL dword ptr [EAX + 0x144]        ; 004dcc35
    ADD ESP,0x8                         ; 004dcc3b
    PUSH EBX                            ; 004dcc3e
    CALL FUN_004dc630                   ; 004dcc3f
        ;   XREF to: 004dc630 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc630()
    ADD ESP,0x4                         ; 004dcc44
    TEST EAX,EAX                        ; 004dcc47
    JZ 0x004dc917                       ; 004dcc49
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xc2c0]        ; 004dcc4f
    FSUB float ptr [EBP + 0x92]         ; 004dcc55
    FST float ptr [EBX + 0xc2c0]        ; 004dcc5b
    FLDZ                                ; 004dcc61
    FCOMPP                              ; 004dcc63
    FNSTSW AX                           ; 004dcc65
    SAHF                                ; 004dcc67
    JBE 0x004dc917                      ; 004dcc68
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dcc6e
    PUSH 0x0                            ; 004dcc70
    MOV ECX,dword ptr [EBP + 0x72]      ; 004dcc72
    PUSH ECX                            ; 004dcc75
    MOV dword ptr [EBX + 0xc2c0],0x0    ; 004dcc76
    CALL FUN_005247c0                   ; 004dcc80
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcc85
    MOV ESI,dword ptr [EBX + 0xc2ac]    ; 004dcc88
    PUSH ESI                            ; 004dcc8e
    CALL FUN_005735a0                   ; 004dcc8f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 004dcc94
    TEST EAX,EAX                        ; 004dcc97
    JNZ 0x004dc917                      ; 004dcc99
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5e394e                       ; 004dcc9f | = "gargoyle-alive?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dcca4
    PUSH EBX                            ; 004dccaa
    CALL dword ptr [EAX + 0x2c]         ; 004dccab
    ADD ESP,0x8                         ; 004dccae
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004dccb1
    JMP 0x004dc917                      ; 004dccb7
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004dccbc
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dccc2
    PUSH EBX                            ; 004dccc8
    CALL dword ptr [EAX + 0x144]        ; 004dccc9
    ADD ESP,0x8                         ; 004dcccf
    PUSH EBX                            ; 004dccd2
    CALL FUN_004dc630                   ; 004dccd3
        ;   XREF to: 004dc630 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc630()
    ADD ESP,0x4                         ; 004dccd8
    TEST EAX,EAX                        ; 004dccdb
    JZ 0x004dcda3                       ; 004dccdd
        ;   XREF to: 004dcda3 (CONDITIONAL_JUMP)  ; LAB_004dcda3
    CMP dword ptr [EBX + 0xc2bc],0x0    ; 004dcce3
    JNZ 0x004dce02                      ; 004dccea
        ;   XREF to: 004dce02 (CONDITIONAL_JUMP)  ; LAB_004dce02
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dccf0
    TEST EDX,EDX                        ; 004dccf6
    JZ 0x004dcea4                       ; 004dccf8
        ;   XREF to: 004dcea4 (CONDITIONAL_JUMP)  ; LAB_004dcea4
    FLD float ptr [EDX + 0x20]          ; 004dccfe
    FLD float ptr [EDX + 0x24]          ; 004dcd01
    FLD float ptr [EDX + 0x28]          ; 004dcd04
    LEA EAX,[EBX + 0x20]                ; 004dcd07
    LEA EDI,[EBP + 0x46]                ; 004dcd0a
    LEA ESI,[EBP + 0xffffff7a]          ; 004dcd0d
    FXCH ST2                            ; 004dcd13
    FSUB float ptr [EAX]                ; 004dcd15
    FXCH                                ; 004dcd17
    FSUB float ptr [EAX + 0x4]          ; 004dcd19
    FXCH ST2                            ; 004dcd1c
    FSUB float ptr [EAX + 0x8]          ; 004dcd1e
    FXCH                                ; 004dcd21
    FSTP float ptr [EBP + 0xffffff7a]   ; 004dcd23
    FXCH                                ; 004dcd29
    FSTP float ptr [EBP + 0xffffff7e]   ; 004dcd2b
    FSTP float ptr [EBP + -0x7e]        ; 004dcd31
    MOVSD ES:EDI,ESI                    ; 004dcd34
    MOVSD ES:EDI,ESI                    ; 004dcd35
    MOVSD ES:EDI,ESI                    ; 004dcd36
    FLD float ptr [EBP + 0x4a]          ; 004dcd37
    FMUL ST0                            ; 004dcd3a
    FLD float ptr [EBP + 0x46]          ; 004dcd3c
    FMUL ST0                            ; 004dcd3f
    FADDP                               ; 004dcd41
    FLD float ptr [EBP + 0x4e]          ; 004dcd43
    FMUL ST0                            ; 004dcd46
    FADDP                               ; 004dcd48
    FSQRT                               ; 004dcd4a
    FSTP float ptr [EBP + 0x52]         ; 004dcd4c
    MOV EAX,dword ptr [EBP + 0x52]      ; 004dcd4f
    FLD float ptr [EBP + 0x52]          ; 004dcd52
    MOV dword ptr [EBP + 0x62],EAX      ; 004dcd55
    FCOMP float ptr [0x00600ffc]        ; 004dcd58 | DAT_00600ffc
    FNSTSW AX                           ; 004dcd5e
    SAHF                                ; 004dcd60
    JC 0x004dce17                       ; 004dcd61
        ;   XREF to: 004dce17 (CONDITIONAL_JUMP)  ; LAB_004dce17
    FLD float ptr [EBP + 0x62]          ; 004dcd67
        ;   Label: LAB_004dcd67
    FCOMP float ptr [EBX + 0xc1e0]      ; 004dcd6a
    FNSTSW AX                           ; 004dcd70
    SAHF                                ; 004dcd72
    JNC 0x004dc917                      ; 004dcd73
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBP + 0x62]          ; 004dcd79
    LEA ESI,[EBX + 0x158]               ; 004dcd7c
    FCOMP float ptr [0x00601008]        ; 004dcd82 | DAT_00601008
    FNSTSW AX                           ; 004dcd88
    SAHF                                ; 004dcd8a
    JNC 0x004dce6f                      ; 004dcd8b
        ;   XREF to: 004dce6f (CONDITIONAL_JUMP)  ; LAB_004dce6f
    PUSH 0x1                            ; 004dcd91
    PUSH 0x1                            ; 004dcd93
    PUSH ESI                            ; 004dcd95
    CALL FUN_005247c0                   ; 004dcd96
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcd9b
    JMP 0x004dc917                      ; 004dcd9e
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004dcda3
        ;   Label: LAB_004dcda3
    PUSH 0x0                            ; 004dcda8
    CALL FUN_0040cc00                   ; 004dcdaa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    ADD ESP,0x8                         ; 004dcdaf
    PUSH 0x1                            ; 004dcdb2
    MOV ESI,dword ptr [EBP + 0x72]      ; 004dcdb4
    MOV dword ptr [EBP + 0x76],EAX      ; 004dcdb7
    PUSH 0x5                            ; 004dcdba
    FLD float ptr [EBP + 0x76]          ; 004dcdbc
    PUSH ESI                            ; 004dcdbf
    FSTP float ptr [EBX + 0xc2c0]       ; 004dcdc0
    CALL FUN_005247c0                   ; 004dcdc6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcdcb
    MOV EDI,dword ptr [EBX + 0xc2ac]    ; 004dcdce
    PUSH EDI                            ; 004dcdd4
    CALL FUN_005735a0                   ; 004dcdd5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 004dcdda
    TEST EAX,EAX                        ; 004dcddd
    JNZ 0x004dc917                      ; 004dcddf
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5e3962                       ; 004dcde5 | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dcdea
    PUSH EBX                            ; 004dcdf0
    CALL dword ptr [EAX + 0x2c]         ; 004dcdf1
    ADD ESP,0x8                         ; 004dcdf4
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004dcdf7
    JMP 0x004dc917                      ; 004dcdfd
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dce02
        ;   Label: LAB_004dce02
    PUSH 0x1                            ; 004dce04
    MOV EDI,dword ptr [EBP + 0x72]      ; 004dce06
    PUSH EDI                            ; 004dce09
    CALL FUN_005247c0                   ; 004dce0a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dce0f
    JMP 0x004dc917                      ; 004dce12
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    LEA EAX,[EBP + 0x46]                ; 004dce17
        ;   Label: LAB_004dce17
    PUSH EAX                            ; 004dce1a
    LEA ESI,[EBP + -0x32]               ; 004dce1b
    LEA EDI,[EBP + -0x26]               ; 004dce1e
    CALL FUN_005a7520                   ; 004dce21
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[EBP + -0x32]               ; 004dce26
    MOVSD ES:EDI,ESI                    ; 004dce29
    MOVSD ES:EDI,ESI                    ; 004dce2a
    MOVSD ES:EDI,ESI                    ; 004dce2b
    ADD ESP,0x4                         ; 004dce2c
    FLD float ptr [EBP + -0x22]         ; 004dce2f
    FSUB float ptr [EBX + 0x34]         ; 004dce32
    SUB ESP,0x4                         ; 004dce35
    FSTP float ptr [ESP]                ; 004dce38
    CALL FUN_0040cd60                   ; 004dce3b
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004dce40
    FLD float ptr [EBP + 0x76]          ; 004dce43
    FABS                                ; 004dce46
    ADD ESP,0x4                         ; 004dce48
    FCOMP double ptr [0x005e398c]       ; 004dce4b | DAT_005e398c
    FNSTSW AX                           ; 004dce51
    SAHF                                ; 004dce53
    JNC 0x004dcd67                      ; 004dce54
        ;   XREF to: 004dcd67 (CONDITIONAL_JUMP)  ; LAB_004dcd67
    PUSH 0x1                            ; 004dce5a
    PUSH 0x3                            ; 004dce5c
    MOV ESI,dword ptr [EBP + 0x72]      ; 004dce5e
    PUSH ESI                            ; 004dce61
    CALL FUN_005247c0                   ; 004dce62
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dce67
    JMP 0x004dcd67                      ; 004dce6a
        ;   XREF to: 004dcd67 (UNCONDITIONAL_JUMP)  ; LAB_004dcd67
    PUSH 0x3dcccccd                     ; 004dce6f
        ;   Label: LAB_004dce6f
    CALL FUN_0040cd00                   ; 004dce74
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 004dce79
    TEST EAX,EAX                        ; 004dce7c
    JZ 0x004dce92                       ; 004dce7e
        ;   XREF to: 004dce92 (CONDITIONAL_JUMP)  ; LAB_004dce92
    PUSH 0x1                            ; 004dce80
    PUSH 0x4                            ; 004dce82
    PUSH ESI                            ; 004dce84
    CALL FUN_005247c0                   ; 004dce85
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dce8a
    JMP 0x004dc917                      ; 004dce8d
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dce92
        ;   Label: LAB_004dce92
    PUSH 0x2                            ; 004dce94
    PUSH ESI                            ; 004dce96
    CALL FUN_005247c0                   ; 004dce97
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dce9c
    JMP 0x004dc917                      ; 004dce9f
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004dcea4
        ;   Label: LAB_004dcea4
    PUSH EBX                            ; 004dceaa
    CALL FUN_004a0fe0                   ; 004dceab
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 004dceb0
    TEST EAX,EAX                        ; 004dceb3
    JZ 0x004dc917                       ; 004dceb5
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dcebb
    PUSH 0x1                            ; 004dcebd
    MOV ECX,dword ptr [EBP + 0x72]      ; 004dcebf
    PUSH ECX                            ; 004dcec2
    CALL FUN_005247c0                   ; 004dcec3
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcec8
    JMP 0x004dc917                      ; 004dcecb
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 004dced0
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dced6
    PUSH EBX                            ; 004dcedc
    CALL dword ptr [EAX + 0x144]        ; 004dcedd
    ADD ESP,0x8                         ; 004dcee3
    PUSH EBX                            ; 004dcee6
    CALL FUN_004dc630                   ; 004dcee7
        ;   XREF to: 004dc630 (UNCONDITIONAL_CALL)  ; undefined FUN_004dc630()
    LEA EDX,[EBX + 0x158]               ; 004dceec
    ADD ESP,0x4                         ; 004dcef2
    MOV dword ptr [EBP + 0x6e],EDX      ; 004dcef5
    TEST EAX,EAX                        ; 004dcef8
    JZ 0x004dcf49                       ; 004dcefa
        ;   XREF to: 004dcf49 (CONDITIONAL_JUMP)  ; LAB_004dcf49
    MOV EDX,dword ptr [EBX + 0xc2bc]    ; 004dcefc
    LEA EAX,[EBX + 0x249c]              ; 004dcf02
    TEST EDX,EDX                        ; 004dcf08
    JNZ 0x004dcfa8                      ; 004dcf0a
        ;   XREF to: 004dcfa8 (CONDITIONAL_JUMP)  ; LAB_004dcfa8
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004dcf10
    JNZ 0x004dd016                      ; 004dcf17
        ;   XREF to: 004dd016 (CONDITIONAL_JUMP)  ; LAB_004dd016
    PUSH dword ptr [EBP + 0x92]         ; 004dcf1d
    PUSH EBX                            ; 004dcf23
    CALL FUN_004a0fe0                   ; 004dcf24
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 004dcf29
    TEST EAX,EAX                        ; 004dcf2c
    JZ 0x004dd002                       ; 004dcf2e
        ;   XREF to: 004dd002 (CONDITIONAL_JUMP)  ; LAB_004dd002
    PUSH 0x1                            ; 004dcf34
    PUSH 0x1                            ; 004dcf36
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004dcf38
    PUSH EDI                            ; 004dcf3b
    CALL FUN_005247c0                   ; 004dcf3c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcf41
    JMP 0x004dc917                      ; 004dcf44
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3f800000                     ; 004dcf49
        ;   Label: LAB_004dcf49
    PUSH 0x0                            ; 004dcf4e
    CALL FUN_0040cc00                   ; 004dcf50
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    ADD ESP,0x8                         ; 004dcf55
    PUSH 0x1                            ; 004dcf58
    MOV EDI,dword ptr [EBP + 0x6e]      ; 004dcf5a
    MOV dword ptr [EBP + 0x76],EAX      ; 004dcf5d
    PUSH 0x5                            ; 004dcf60
    FLD float ptr [EBP + 0x76]          ; 004dcf62
    PUSH EDI                            ; 004dcf65
    FSTP float ptr [EBX + 0xc2c0]       ; 004dcf66
    CALL FUN_005247c0                   ; 004dcf6c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dcf71
    MOV EAX,dword ptr [EBX + 0xc2ac]    ; 004dcf74
    PUSH EAX                            ; 004dcf7a
    CALL FUN_005735a0                   ; 004dcf7b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 004dcf80
    TEST EAX,EAX                        ; 004dcf83
    JNZ 0x004dc917                      ; 004dcf85
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x5e3975                       ; 004dcf8b | = "gargoyle-stone.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004dcf90
    PUSH EBX                            ; 004dcf96
    CALL dword ptr [EAX + 0x2c]         ; 004dcf97
    ADD ESP,0x8                         ; 004dcf9a
    MOV dword ptr [EBX + 0xc2ac],EAX    ; 004dcf9d
    JMP 0x004dc917                      ; 004dcfa3
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EAX + 0x8],0x0       ; 004dcfa8
        ;   Label: LAB_004dcfa8
    MOV EDX,dword ptr [EAX + 0x8]       ; 004dcfaf
    MOV dword ptr [EAX + 0x4],EDX       ; 004dcfb2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004dcfb5
    MOV dword ptr [EAX],EDX             ; 004dcfb8
    XOR EAX,EAX                         ; 004dcfba
    PUSH 0x3e32b8c2                     ; 004dcfbc
    MOV dword ptr [EBP + -0x7a],EAX     ; 004dcfc1
    MOV dword ptr [EBP + -0x76],EAX     ; 004dcfc4
    MOV dword ptr [EBP + -0x72],EAX     ; 004dcfc7
    LEA EAX,[EBP + -0x7a]               ; 004dcfca
    PUSH 0x3f000000                     ; 004dcfcd
    PUSH EAX                            ; 004dcfd2
    MOV EAX,dword ptr [EBX + 0xc2a4]    ; 004dcfd3
    PUSH EAX                            ; 004dcfd9
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dcfda
    CALL dword ptr [EDX + 0xc4]         ; 004dcfe0
    ADD ESP,0x4                         ; 004dcfe6
    PUSH EAX                            ; 004dcfe9
    MOV EAX,dword ptr [EBX + 0xc2a4]    ; 004dcfea
    ADD EAX,0x20                        ; 004dcff0
    PUSH EAX                            ; 004dcff3
    PUSH EBX                            ; 004dcff4
    CALL FUN_0042ccf0                   ; 004dcff5
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 004dcffa
    JMP 0x004dc917                      ; 004dcffd
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dd002
        ;   Label: LAB_004dd002
    PUSH EAX                            ; 004dd004
    MOV ESI,dword ptr [EBP + 0x6e]      ; 004dd005
    PUSH ESI                            ; 004dd008
    CALL FUN_005247c0                   ; 004dd009
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dd00e
    JMP 0x004dc917                      ; 004dd011
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x3e32b8c2                     ; 004dd016
        ;   Label: LAB_004dd016
    PUSH 0x3f000000                     ; 004dd01b
    MOV EDX,dword ptr [0x00600ffc]      ; 004dd020 | DAT_00600ffc
    MOV dword ptr [EAX + 0x8],0x0       ; 004dd026
    XOR ESI,ESI                         ; 004dd02d
    MOV ECX,dword ptr [EAX + 0x8]       ; 004dd02f
    MOV dword ptr [EAX + 0x4],ECX       ; 004dd032
    MOV ECX,dword ptr [EAX + 0x4]       ; 004dd035
    MOV dword ptr [EAX],ECX             ; 004dd038
    LEA EAX,[EBP + 0xa]                 ; 004dd03a
    MOV dword ptr [EBP + 0xa],ESI       ; 004dd03d
    MOV dword ptr [EBP + 0xe],ESI       ; 004dd040
    MOV dword ptr [EBP + 0x12],EDX      ; 004dd043
    PUSH EAX                            ; 004dd046
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dd047
    PUSH EAX                            ; 004dd04d
    MOV dword ptr [EBP + 0x6a],EDX      ; 004dd04e
    MOV EDX,dword ptr [EAX + 0x154]     ; 004dd051
    CALL dword ptr [EDX + 0xc4]         ; 004dd057
    ADD ESP,0x4                         ; 004dd05d
    PUSH EAX                            ; 004dd060
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dd061
    ADD EAX,0x20                        ; 004dd067
    PUSH EAX                            ; 004dd06a
    PUSH EBX                            ; 004dd06b
    CALL FUN_0042ccf0                   ; 004dd06c
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 004dd071
    TEST EAX,EAX                        ; 004dd074
    JL 0x004dc917                       ; 004dd076
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    LEA EDI,[EBP + 0x3a]                ; 004dd07c
    LEA EAX,[EBX + 0x20]                ; 004dd07f
    LEA ESI,[EBP + -0x4a]               ; 004dd082
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 004dd085
    FLD float ptr [EAX]                 ; 004dd08b
    FLD float ptr [EAX + 0x4]           ; 004dd08d
    FLD float ptr [EAX + 0x8]           ; 004dd090
    FXCH ST2                            ; 004dd093
    FSUB float ptr [EDX + 0x20]         ; 004dd095
    FXCH                                ; 004dd098
    FSUB float ptr [EDX + 0x24]         ; 004dd09a
    FXCH ST2                            ; 004dd09d
    FSUB float ptr [EDX + 0x28]         ; 004dd09f
    FXCH                                ; 004dd0a2
    FSTP float ptr [EBP + -0x4a]        ; 004dd0a4
    FXCH                                ; 004dd0a7
    FSTP float ptr [EBP + -0x46]        ; 004dd0a9
    FSTP float ptr [EBP + -0x42]        ; 004dd0ac
    MOVSD ES:EDI,ESI                    ; 004dd0af
    MOVSD ES:EDI,ESI                    ; 004dd0b0
    MOVSD ES:EDI,ESI                    ; 004dd0b1
    FLD float ptr [EBP + 0x3a]          ; 004dd0b2
    FMUL ST0                            ; 004dd0b5
    FLD float ptr [EBP + 0x42]          ; 004dd0b7
    FMUL ST0                            ; 004dd0ba
    XOR EAX,EAX                         ; 004dd0bc
    FADDP                               ; 004dd0be
    MOV dword ptr [EBP + 0x3e],EAX      ; 004dd0c0
    FSQRT                               ; 004dd0c3
    FSTP float ptr [EBP + 0x5a]         ; 004dd0c5
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004dd0c8
    FLD float ptr [EBP + 0x5a]          ; 004dd0cb
    MOV dword ptr [EBP + 0x66],EAX      ; 004dd0ce
    FCOMP float ptr [0x00601008]        ; 004dd0d1 | DAT_00601008
    FNSTSW AX                           ; 004dd0d7
    SAHF                                ; 004dd0d9
    JBE 0x004dd101                      ; 004dd0da
        ;   XREF to: 004dd101 (CONDITIONAL_JUMP)  ; LAB_004dd101
    PUSH 0x3dcccccd                     ; 004dd0dc
    CALL FUN_0040cd00                   ; 004dd0e1
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd00()
    ADD ESP,0x4                         ; 004dd0e6
    TEST EAX,EAX                        ; 004dd0e9
    JZ 0x004dd1e7                       ; 004dd0eb
        ;   XREF to: 004dd1e7 (CONDITIONAL_JUMP)  ; LAB_004dd1e7
    PUSH 0x1                            ; 004dd0f1
    PUSH 0x4                            ; 004dd0f3
    MOV ECX,dword ptr [EBP + 0x6e]      ; 004dd0f5
    PUSH ECX                            ; 004dd0f8
    CALL FUN_005247c0                   ; 004dd0f9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
        ;   Label: LAB_004dd0f9
    ADD ESP,0xc                         ; 004dd0fe
    FLD float ptr [EBP + 0x66]          ; 004dd101
        ;   Label: LAB_004dd101
    FCOMP float ptr [EBP + 0x6a]        ; 004dd104
    FNSTSW AX                           ; 004dd107
    SAHF                                ; 004dd109
    JA 0x004dd1bd                       ; 004dd10a
        ;   XREF to: 004dd1bd (CONDITIONAL_JUMP)  ; LAB_004dd1bd
    FLD float ptr [EBX + 0xc1e4]        ; 004dd110
    FLDZ                                ; 004dd116
    FCOMPP                              ; 004dd118
    FNSTSW AX                           ; 004dd11a
    SAHF                                ; 004dd11c
    JC 0x004dd1bd                       ; 004dd11d
        ;   XREF to: 004dd1bd (CONDITIONAL_JUMP)  ; LAB_004dd1bd
    LEA EDI,[EBP + 0x16]                ; 004dd123
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004dd126
    LEA ESI,[EBP + 0xffffff4a]          ; 004dd12c
    LEA EDX,[EBX + 0x20]                ; 004dd132
    FLD float ptr [EAX + 0x24]          ; 004dd135
    FLD float ptr [EAX + 0x28]          ; 004dd138
    FLD float ptr [EAX + 0x20]          ; 004dd13b
    LEA EAX,[EBP + 0x16]                ; 004dd13e
    FSUB float ptr [EDX]                ; 004dd141
    FXCH ST2                            ; 004dd143
    FSUB float ptr [EDX + 0x4]          ; 004dd145
    FXCH                                ; 004dd148
    FSUB float ptr [EDX + 0x8]          ; 004dd14a
    FXCH ST2                            ; 004dd14d
    FSTP float ptr [EBP + 0xffffff4a]   ; 004dd14f
    FSTP float ptr [EBP + 0xffffff4e]   ; 004dd155
    FSTP float ptr [EBP + 0xffffff52]   ; 004dd15b
    MOVSD ES:EDI,ESI                    ; 004dd161
    MOVSD ES:EDI,ESI                    ; 004dd162
    MOVSD ES:EDI,ESI                    ; 004dd163
    PUSH EAX                            ; 004dd164
    LEA ESI,[EBP + 0x2e]                ; 004dd165
    LEA EDI,[EBP + 0x22]                ; 004dd168
    CALL FUN_005a7520                   ; 004dd16b
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined FUN_005a7520()
    LEA ESI,[EBP + 0x2e]                ; 004dd170
    MOVSD ES:EDI,ESI                    ; 004dd173
    MOVSD ES:EDI,ESI                    ; 004dd174
    MOVSD ES:EDI,ESI                    ; 004dd175
    ADD ESP,0x4                         ; 004dd176
    FLD float ptr [EBP + 0x26]          ; 004dd179
    FSUB float ptr [EBX + 0x34]         ; 004dd17c
    SUB ESP,0x4                         ; 004dd17f
    FSTP float ptr [ESP]                ; 004dd182
    CALL FUN_0040cd60                   ; 004dd185
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cd60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004dd18a
    FLD float ptr [EBP + 0x76]          ; 004dd18d
    FABS                                ; 004dd190
    ADD ESP,0x4                         ; 004dd192
    FCOMP double ptr [0x005e398c]       ; 004dd195 | DAT_005e398c
    FNSTSW AX                           ; 004dd19b
    SAHF                                ; 004dd19d
    JNC 0x004dd1bd                      ; 004dd19e
        ;   XREF to: 004dd1bd (CONDITIONAL_JUMP)  ; LAB_004dd1bd
    PUSH 0x1                            ; 004dd1a0
    PUSH 0x3                            ; 004dd1a2
    LEA EAX,[EBX + 0x158]               ; 004dd1a4
    PUSH EAX                            ; 004dd1aa
    CALL FUN_005247c0                   ; 004dd1ab
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dd1b0
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 004dd1b3
    FLD float ptr [EBP + 0x66]          ; 004dd1bd
        ;   Label: LAB_004dd1bd
    FCOMP float ptr [EBX + 0xc1e0]      ; 004dd1c0
    FNSTSW AX                           ; 004dd1c6
    SAHF                                ; 004dd1c8
    JBE 0x004dc917                      ; 004dd1c9
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dd1cf
    PUSH 0x0                            ; 004dd1d1
    LEA EAX,[EBX + 0x158]               ; 004dd1d3
    PUSH EAX                            ; 004dd1d9
    CALL FUN_005247c0                   ; 004dd1da
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 004dd1df
    JMP 0x004dc917                      ; 004dd1e2
        ;   XREF to: 004dc917 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 004dd1e7
        ;   Label: LAB_004dd1e7
    PUSH 0x2                            ; 004dd1e9
    MOV EDX,dword ptr [EBP + 0x6e]      ; 004dd1eb
    PUSH EDX                            ; 004dd1ee
    JMP 0x004dd0f9                      ; 004dd1ef
        ;   XREF to: 004dd0f9 (UNCONDITIONAL_JUMP)  ; LAB_004dd0f9
    CMP ESI,0x5                         ; 004dd1f4
        ;   Label: LAB_004dd1f4
    JA 0x004dc917                       ; 004dd1f7
        ;   XREF to: 004dc917 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [ESI*0x4 + 0x4dc7c4]  ; 004dd1fd | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xc2b4],0xffff ; 004dd204
        ;   Label: LAB_004dd204
    MOV dword ptr [EBX + 0xc2b8],0xffff ; 004dd20e
    MOV dword ptr [EBX + 0xc2b0],0xffff ; 004dd218
    JMP 0x004dca8c                      ; 004dd222
        ;   XREF to: 004dca8c (UNCONDITIONAL_JUMP)  ; LAB_004dca8c
    JLE 0x004dcac3                      ; 004dd227
        ;   XREF to: 004dcac3 (CONDITIONAL_JUMP)  ; LAB_004dcac3
        ;   Label: LAB_004dd227
    MOV EAX,[0x01c43530]                ; 004dd22d | DAT_01c43530
    MOV EDX,dword ptr [EBX + 0x108]     ; 004dd232
    SUB EDX,EAX                         ; 004dd238
    MOV ECX,dword ptr [EBX + 0xc2b0]    ; 004dd23a
    MOV dword ptr [EBX + 0x108],EDX     ; 004dd240
    CMP EDX,ECX                         ; 004dd246
    JGE 0x004dcac3                      ; 004dd248
        ;   XREF to: 004dcac3 (CONDITIONAL_JUMP)  ; LAB_004dcac3
    MOV dword ptr [EBX + 0x108],ECX     ; 004dd24e
    JMP 0x004dcac3                      ; 004dd254
        ;   XREF to: 004dcac3 (UNCONDITIONAL_JUMP)  ; LAB_004dcac3
    JLE 0x004dcafa                      ; 004dd259
        ;   XREF to: 004dcafa (CONDITIONAL_JUMP)  ; LAB_004dcafa
        ;   Label: LAB_004dd259
    MOV EAX,[0x01c43530]                ; 004dd25f | DAT_01c43530
    MOV ESI,dword ptr [EBX + 0x10c]     ; 004dd264
    SUB ESI,EAX                         ; 004dd26a
    MOV EDI,dword ptr [EBX + 0xc2b4]    ; 004dd26c
    MOV dword ptr [EBX + 0x10c],ESI     ; 004dd272
    CMP ESI,EDI                         ; 004dd278
    JGE 0x004dcafa                      ; 004dd27a
        ;   XREF to: 004dcafa (CONDITIONAL_JUMP)  ; LAB_004dcafa
    MOV dword ptr [EBX + 0x10c],EDI     ; 004dd280
    JMP 0x004dcafa                      ; 004dd286
        ;   XREF to: 004dcafa (UNCONDITIONAL_JUMP)  ; LAB_004dcafa
    JLE 0x004dc87c                      ; 004dd28b
        ;   XREF to: 004dc87c (CONDITIONAL_JUMP)  ; LAB_004dc87c
        ;   Label: LAB_004dd28b
    MOV EAX,[0x01c43530]                ; 004dd291 | DAT_01c43530
    MOV EDX,dword ptr [EBX + 0x110]     ; 004dd296
    SUB EDX,EAX                         ; 004dd29c
    MOV ECX,dword ptr [EBX + 0xc2b8]    ; 004dd29e
    MOV dword ptr [EBX + 0x110],EDX     ; 004dd2a4
    CMP EDX,ECX                         ; 004dd2aa
    JGE 0x004dc87c                      ; 004dd2ac
        ;   XREF to: 004dc87c (CONDITIONAL_JUMP)  ; LAB_004dc87c
    MOV dword ptr [EBX + 0x110],ECX     ; 004dd2b2
    LEA ESP,[EBP + 0x7a]                ; 004dd2b8
    POP EBP                             ; 004dd2bb
    POP EDI                             ; 004dd2bc
    POP ESI                             ; 004dd2bd
    POP EBX                             ; 004dd2be
    RET                                 ; 004dd2bf

