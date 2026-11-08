; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0059b960(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0059b8f4 = 0059bc34
;   undefined1* switchdataD_0059b924 = 0059c888
;   TerminatedCString s_hino_stand_fly_wav_005d9ce1
;   TerminatedCString s_hino_walk_fly_wav_005d9cf4
;   TerminatedCString s_hino_run_fly_wav_005d9d06
;   TerminatedCString s_hino_reverse_wav_005d9d17
;   TerminatedCString s_hino_attack_fly_wav_005d9d28
;   TerminatedCString s_hino_attack_fly2_wav_005d9d3c
;   TerminatedCString s_hino_damage_fly_wav_005d9d51
;   TerminatedCString s_hino_die_fly_WAV_005d9d65
;   TerminatedCString s_hino_warning_wav_005d9d76
;   TerminatedCString s_hino_big_attack_wav_005d9d87
;   TerminatedCString s_hino_appear_wav_005d9d9b
;   TerminatedCString s_hino_disappear_wav_005d9dab
;   TerminatedCString s_State_d_005d9dbe
;   ... and 32 more
;
; Called Functions:
;   FUN_00408b80
;   FUN_0040c840
;   FUN_0040ce40
;   FUN_0040cea0
;   FUN_0040cfa0
;   FUN_0042abb0
;   FUN_0042b9e0
;   FUN_0042c1e0
;   FUN_0042c230
;   FUN_0042ccf0
;   FUN_0042cd30
;   FUN_00431660
;   FUN_00433350
;   FUN_00433fb0
;   FUN_00434850
;   ... and 19 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0059b960
        ;   Label: FUN_0059b960
    PUSH ESI                            ; 0059b961
    PUSH EDI                            ; 0059b962
    PUSH EBP                            ; 0059b963
    MOV EBP,ESP                         ; 0059b964
    SUB ESP,0x31c                       ; 0059b966
    SUB EBP,0x7a                        ; 0059b96c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0059b96f
    PUSH dword ptr [EBP + 0x92]         ; 0059b975
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059b97b
    PUSH EBX                            ; 0059b981
    CALL dword ptr [EAX + 0x148]        ; 0059b982
    ADD ESP,0x8                         ; 0059b988
    TEST EAX,EAX                        ; 0059b98b
    JZ 0x0059bc2c                       ; 0059b98d
        ;   XREF to: 0059bc2c (CONDITIONAL_JUMP)  ; LAB_0059bc2c
    LEA EAX,[EBX + 0x249c]              ; 0059b993
    MOV dword ptr [EAX + 0x8],0x0       ; 0059b999
    FLD float ptr [EBP + 0x92]          ; 0059b9a0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059b9a6
    MOV dword ptr [EAX + 0x4],EDX       ; 0059b9a9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059b9ac
    MOV dword ptr [EAX],EDX             ; 0059b9af
    FMUL float ptr [EBX + 0xcdcc]       ; 0059b9b1
    LEA EAX,[EBX + 0x158]               ; 0059b9b7
    FSTP float ptr [EBP + 0xe]          ; 0059b9bd
    MOV dword ptr [EBP + 0x32],EAX      ; 0059b9c0
    FLD float ptr [EBP + 0xe]           ; 0059b9c3
        ;   Label: LAB_0059b9c3
    FLDZ                                ; 0059b9c6
    FCOMPP                              ; 0059b9c8
    FNSTSW AX                           ; 0059b9ca
    SAHF                                ; 0059b9cc
    JC 0x0059bed7                       ; 0059b9cd
        ;   XREF to: 0059bed7 (CONDITIONAL_JUMP)  ; LAB_0059bed7
    FLD float ptr [EBP + 0x92]          ; 0059b9d3
    FMUL float ptr [EBX + 0xcdcc]       ; 0059b9d9
    SUB ESP,0x4                         ; 0059b9df
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0059b9e2
    MOV dword ptr [EBX + 0x2524],EAX    ; 0059b9e8
    FSTP float ptr [ESP]                ; 0059b9ee
    PUSH EBX                            ; 0059b9f1
    CALL FUN_00434850                   ; 0059b9f2
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined FUN_00434850()
    ADD ESP,0x8                         ; 0059b9f7
    LEA EAX,[EBX + 0x158]               ; 0059b9fa
    PUSH EAX                            ; 0059ba00
    MOV dword ptr [EBP + 0x2e],EAX      ; 0059ba01
    CALL FUN_004fc070                   ; 0059ba04
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    ADD ESP,0x4                         ; 0059ba09
    MOV ESI,dword ptr [EAX + 0x24]      ; 0059ba0c
    PUSH ESI                            ; 0059ba0f
    PUSH 0x5d9dbe                       ; 0059ba10 | = "State: %d\n"
    MOV ECX,dword ptr [0x005f1690]      ; 0059ba15 | PTR_DAT_005f1690
    PUSH ECX                            ; 0059ba1b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0059ba1c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    ADD ESP,0xc                         ; 0059ba21
    PUSH dword ptr [EBP + 0x92]         ; 0059ba24
    PUSH EBX                            ; 0059ba2a
    MOV dword ptr [EBP + 0x1e],ESI      ; 0059ba2b
    CALL FUN_00431660                   ; 0059ba2e
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; undefined FUN_00431660()
    ADD ESP,0x8                         ; 0059ba33
    TEST EAX,EAX                        ; 0059ba36
    JZ 0x0059cee5                       ; 0059ba38
        ;   XREF to: 0059cee5 (CONDITIONAL_JUMP)  ; LAB_0059cee5
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0059ba3e
    CMP EAX,0x2                         ; 0059ba44
    JNC 0x0059bf26                      ; 0059ba47
        ;   XREF to: 0059bf26 (CONDITIONAL_JUMP)  ; LAB_0059bf26
    CMP EAX,0x1                         ; 0059ba4d
    JNZ 0x0059bf31                      ; 0059ba50
        ;   XREF to: 0059bf31 (CONDITIONAL_JUMP)  ; LAB_0059bf31
    PUSH 0x1                            ; 0059ba56
        ;   Label: LAB_0059ba56
    PUSH 0x1                            ; 0059ba58
    LEA EAX,[EBX + 0x158]               ; 0059ba5a
        ;   Label: LAB_0059ba5a
    PUSH EAX                            ; 0059ba60
    CALL FUN_004fc0d0                   ; 0059ba61
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059ba66
        ;   Label: LAB_0059ba66
    LEA EAX,[EBX + 0x249c]              ; 0059ba69
    MOV dword ptr [EAX + 0x8],0x0       ; 0059ba6f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059ba76
    MOV dword ptr [EAX + 0x4],EDX       ; 0059ba79
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059ba7c
    MOV dword ptr [EAX],EDX             ; 0059ba7f
    FLD float ptr [EBX + 0xcde0]        ; 0059ba81
        ;   Label: caseD_3
    FLDZ                                ; 0059ba87
    FCOMPP                              ; 0059ba89
    FNSTSW AX                           ; 0059ba8b
    SAHF                                ; 0059ba8d
    JNC 0x0059baa2                      ; 0059ba8e
        ;   XREF to: 0059baa2 (CONDITIONAL_JUMP)  ; LAB_0059baa2
    FLD float ptr [EBX + 0xcde0]        ; 0059ba90
    FSUB float ptr [EBP + 0x92]         ; 0059ba96
    FSTP float ptr [EBX + 0xcde0]       ; 0059ba9c
    FLD float ptr [EBX + 0xd064]        ; 0059baa2
        ;   Label: LAB_0059baa2
    FLDZ                                ; 0059baa8
    FCOMPP                              ; 0059baaa
    FNSTSW AX                           ; 0059baac
    SAHF                                ; 0059baae
    JNC 0x0059bac3                      ; 0059baaf
        ;   XREF to: 0059bac3 (CONDITIONAL_JUMP)  ; LAB_0059bac3
    FLD float ptr [EBX + 0xd064]        ; 0059bab1
    FSUB float ptr [EBP + 0x92]         ; 0059bab7
    FSTP float ptr [EBX + 0xd064]       ; 0059babd
    FLDZ                                ; 0059bac3
        ;   Label: LAB_0059bac3
    FLD float ptr [EBX + 0xd068]        ; 0059bac5
    FSTP double ptr [EBP + -0xe]        ; 0059bacb
    FCOMP double ptr [EBP + -0xe]       ; 0059bace
    FNSTSW AX                           ; 0059bad1
    SAHF                                ; 0059bad3
    JNC 0x0059baf6                      ; 0059bad4
        ;   XREF to: 0059baf6 (CONDITIONAL_JUMP)  ; LAB_0059baf6
    MOV EDI,dword ptr [EBX + 0xd06c]    ; 0059bad6
    TEST EDI,EDI                        ; 0059badc
    JZ 0x0059cef5                       ; 0059bade
        ;   XREF to: 0059cef5 (CONDITIONAL_JUMP)  ; LAB_0059cef5
    FLD float ptr [EBX + 0xd068]        ; 0059bae4
        ;   Label: LAB_0059bae4
    FSUB float ptr [EBP + 0x92]         ; 0059baea
    FSTP float ptr [EBX + 0xd068]       ; 0059baf0
    PUSH EBX                            ; 0059baf6
        ;   Label: LAB_0059baf6
    CALL FUN_0042ccf0                   ; 0059baf7
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x4                         ; 0059bafc
    TEST EAX,EAX                        ; 0059baff
    JZ 0x0059bc05                       ; 0059bb01
        ;   XREF to: 0059bc05 (CONDITIONAL_JUMP)  ; LAB_0059bc05
    MOV ESI,dword ptr [EBP + 0x1e]      ; 0059bb07
    CMP ESI,0x8                         ; 0059bb0a
    JNZ 0x0059cfe6                      ; 0059bb0d
        ;   XREF to: 0059cfe6 (CONDITIONAL_JUMP)  ; LAB_0059cfe6
    PUSH dword ptr [EBP + 0x92]         ; 0059bb13
        ;   Label: LAB_0059bb13
    PUSH EBX                            ; 0059bb19
    CALL FUN_0042c1e0                   ; 0059bb1a
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c1e0()
    ADD ESP,0x8                         ; 0059bb1f
    LEA ESI,[EBX + 0x2518]              ; 0059bb22
        ;   Label: LAB_0059bb22
    FLD float ptr [EBP + 0x92]          ; 0059bb28
    FLD float ptr [ESI]                 ; 0059bb2e
    FMUL ST1                            ; 0059bb30
    FLD float ptr [ESI + 0x4]           ; 0059bb32
    FMUL ST2                            ; 0059bb35
    FLD float ptr [ESI + 0x8]           ; 0059bb37
    FMULP ST3                           ; 0059bb3a
    LEA EDI,[EBP + 0xfffffe66]          ; 0059bb3c
    LEA ESI,[EBP + -0x56]               ; 0059bb42
    FXCH                                ; 0059bb45
    FSTP float ptr [EBP + -0x56]        ; 0059bb47
    FSTP float ptr [EBP + -0x52]        ; 0059bb4a
    FSTP float ptr [EBP + -0x4e]        ; 0059bb4d
    MOVSD ES:EDI,ESI                    ; 0059bb50
    MOVSD ES:EDI,ESI                    ; 0059bb51
    MOVSD ES:EDI,ESI                    ; 0059bb52
    LEA EDX,[EBX + 0x250c]              ; 0059bb53
    FLD float ptr [EBP + 0xfffffe66]    ; 0059bb59
    FLD float ptr [EBP + 0xfffffe6a]    ; 0059bb5f
    FLD float ptr [EBP + 0xfffffe6e]    ; 0059bb65
    LEA EDI,[EBP + -0x7a]               ; 0059bb6b
    LEA ESI,[EBP + -0x62]               ; 0059bb6e
    FXCH ST2                            ; 0059bb71
    FADD float ptr [EDX]                ; 0059bb73
    FXCH                                ; 0059bb75
    FADD float ptr [EDX + 0x4]          ; 0059bb77
    FXCH ST2                            ; 0059bb7a
    FADD float ptr [EDX + 0x8]          ; 0059bb7c
    FXCH                                ; 0059bb7f
    FSTP float ptr [EBP + -0x62]        ; 0059bb81
    FXCH                                ; 0059bb84
    FSTP float ptr [EBP + -0x5e]        ; 0059bb86
    FSTP float ptr [EBP + -0x5a]        ; 0059bb89
    MOVSD ES:EDI,ESI                    ; 0059bb8c
    MOVSD ES:EDI,ESI                    ; 0059bb8d
    MOVSD ES:EDI,ESI                    ; 0059bb8e
    LEA EAX,[EBX + 0x249c]              ; 0059bb8f
    FLD float ptr [EBP + -0x7a]         ; 0059bb95
    FLD float ptr [EBP + -0x76]         ; 0059bb98
    FLD float ptr [EBP + -0x72]         ; 0059bb9b
    LEA EDI,[EBP + 0xfffffe7e]          ; 0059bb9e
    LEA ESI,[EBP + 0xffffff56]          ; 0059bba4
    FXCH ST2                            ; 0059bbaa
    FADD float ptr [EAX]                ; 0059bbac
    FXCH                                ; 0059bbae
    FADD float ptr [EAX + 0x4]          ; 0059bbb0
    FXCH ST2                            ; 0059bbb3
    FADD float ptr [EAX + 0x8]          ; 0059bbb5
    FXCH                                ; 0059bbb8
    FSTP float ptr [EBP + 0xffffff56]   ; 0059bbba
    FXCH                                ; 0059bbc0
    FSTP float ptr [EBP + 0xffffff5a]   ; 0059bbc2
    FSTP float ptr [EBP + 0xffffff5e]   ; 0059bbc8
    MOVSD ES:EDI,ESI                    ; 0059bbce
    MOVSD ES:EDI,ESI                    ; 0059bbcf
    MOVSD ES:EDI,ESI                    ; 0059bbd0
    MOV dword ptr [EDX + 0x8],0x0       ; 0059bbd1
    MOV ECX,dword ptr [EDX + 0x8]       ; 0059bbd8
    MOV dword ptr [EDX + 0x4],ECX       ; 0059bbdb
    MOV ECX,dword ptr [EDX + 0x4]       ; 0059bbde
    MOV dword ptr [EDX],ECX             ; 0059bbe1
    MOV dword ptr [EAX + 0x8],0x0       ; 0059bbe3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059bbea
    MOV dword ptr [EAX + 0x4],EDX       ; 0059bbed
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059bbf0
    MOV dword ptr [EAX],EDX             ; 0059bbf3
    LEA EAX,[EBP + 0xfffffe7e]          ; 0059bbf5
    PUSH EAX                            ; 0059bbfb
    PUSH EBX                            ; 0059bbfc
    CALL FUN_0042c230                   ; 0059bbfd
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c230()
    ADD ESP,0x8                         ; 0059bc02
    PUSH EBX                            ; 0059bc05
        ;   Label: LAB_0059bc05
    CALL FUN_0042cd30                   ; 0059bc06
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; undefined FUN_0042cd30()
    ADD ESP,0x4                         ; 0059bc0b
    LEA EAX,[EBX + 0x158]               ; 0059bc0e
    PUSH EAX                            ; 0059bc14
    CALL FUN_0054c130                   ; 0059bc15
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; undefined FUN_0054c130()
    ADD ESP,0x4                         ; 0059bc1a
    PUSH dword ptr [EBP + 0x92]         ; 0059bc1d
    PUSH EBX                            ; 0059bc23
    CALL FUN_00433350                   ; 0059bc24
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; undefined FUN_00433350()
    ADD ESP,0x8                         ; 0059bc29
    LEA ESP,[EBP + 0x7a]                ; 0059bc2c
        ;   Label: LAB_0059bc2c
    POP EBP                             ; 0059bc2f
    POP EDI                             ; 0059bc30
    POP ESI                             ; 0059bc31
    POP EBX                             ; 0059bc32
    RET                                 ; 0059bc33
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bc34
        ;   Label: caseD_5dc
    PUSH ECX                            ; 0059bc3b
    CALL FUN_00556700                   ; 0059bc3c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bc41
    TEST EAX,EAX                        ; 0059bc44
    JNZ 0x0059b9c3                      ; 0059bc46
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9ce1                    ; 0059bc4c | = "hino_stand_fly.wav"
    PUSH EDX                            ; 0059bc51 | = "hino_stand_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bc52
    PUSH EBX                            ; 0059bc58
    CALL dword ptr [EDI + 0x2c]         ; 0059bc59
    ADD ESP,0x8                         ; 0059bc5c
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bc5f
    JMP 0x0059b9c3                      ; 0059bc66
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bc6b
        ;   Label: caseD_5dd
    PUSH EDX                            ; 0059bc72
    CALL FUN_00556700                   ; 0059bc73
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bc78
    TEST EAX,EAX                        ; 0059bc7b
    JNZ 0x0059b9c3                      ; 0059bc7d
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9cf4                    ; 0059bc83 | = "hino_walk_fly.wav"
    PUSH EDX                            ; 0059bc88 | = "hino_walk_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bc89
    PUSH EBX                            ; 0059bc8f
    CALL dword ptr [EDI + 0x2c]         ; 0059bc90
    ADD ESP,0x8                         ; 0059bc93
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bc96
    JMP 0x0059b9c3                      ; 0059bc9d
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bca2
        ;   Label: caseD_5de
    PUSH EDI                            ; 0059bca9
    CALL FUN_00556700                   ; 0059bcaa
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bcaf
    TEST EAX,EAX                        ; 0059bcb2
    JNZ 0x0059b9c3                      ; 0059bcb4
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d06                    ; 0059bcba | = "hino_run_fly.wav"
    PUSH EDX                            ; 0059bcbf | = "hino_run_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bcc0
    PUSH EBX                            ; 0059bcc6
    CALL dword ptr [EDI + 0x2c]         ; 0059bcc7
    ADD ESP,0x8                         ; 0059bcca
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bccd
    JMP 0x0059b9c3                      ; 0059bcd4
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bcd9
        ;   Label: caseD_5df
    PUSH ECX                            ; 0059bce0
    CALL FUN_00556700                   ; 0059bce1
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bce6
    TEST EAX,EAX                        ; 0059bce9
    JNZ 0x0059b9c3                      ; 0059bceb
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d17                    ; 0059bcf1 | = "hino_reverse.wav"
    PUSH EDX                            ; 0059bcf6 | = "hino_reverse.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bcf7
    PUSH EBX                            ; 0059bcfd
    CALL dword ptr [EDI + 0x2c]         ; 0059bcfe
    ADD ESP,0x8                         ; 0059bd01
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bd04
    JMP 0x0059b9c3                      ; 0059bd0b
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bd10
        ;   Label: caseD_5e0
    PUSH EDX                            ; 0059bd17
    CALL FUN_00556700                   ; 0059bd18
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bd1d
    TEST EAX,EAX                        ; 0059bd20
    JNZ 0x0059b9c3                      ; 0059bd22
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d28                    ; 0059bd28 | = "hino_attack_fly.wav"
    PUSH EDX                            ; 0059bd2d | = "hino_attack_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bd2e
    PUSH EBX                            ; 0059bd34
    CALL dword ptr [EDI + 0x2c]         ; 0059bd35
    ADD ESP,0x8                         ; 0059bd38
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bd3b
    JMP 0x0059b9c3                      ; 0059bd42
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bd47
        ;   Label: caseD_5e1
    PUSH EDI                            ; 0059bd4e
    CALL FUN_00556700                   ; 0059bd4f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bd54
    TEST EAX,EAX                        ; 0059bd57
    JNZ 0x0059b9c3                      ; 0059bd59
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d3c                    ; 0059bd5f | = "hino_attack_fly2.wav"
    PUSH EDX                            ; 0059bd64 | = "hino_attack_fly2.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bd65
    PUSH EBX                            ; 0059bd6b
    CALL dword ptr [EDI + 0x2c]         ; 0059bd6c
    ADD ESP,0x8                         ; 0059bd6f
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bd72
    JMP 0x0059b9c3                      ; 0059bd79
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bd7e
        ;   Label: caseD_5e2
    PUSH ECX                            ; 0059bd85
    CALL FUN_00556700                   ; 0059bd86
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bd8b
    TEST EAX,EAX                        ; 0059bd8e
    JNZ 0x0059b9c3                      ; 0059bd90
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d51                    ; 0059bd96 | = "hino_damage_fly.wav"
    PUSH EDX                            ; 0059bd9b | = "hino_damage_fly.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bd9c
    PUSH EBX                            ; 0059bda2
    CALL dword ptr [EDI + 0x2c]         ; 0059bda3
    ADD ESP,0x8                         ; 0059bda6
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bda9
    JMP 0x0059b9c3                      ; 0059bdb0
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bdb5
        ;   Label: caseD_5e3
    PUSH EDX                            ; 0059bdbc
    CALL FUN_00556700                   ; 0059bdbd
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bdc2
    TEST EAX,EAX                        ; 0059bdc5
    JNZ 0x0059b9c3                      ; 0059bdc7
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d65                    ; 0059bdcd | = "hino_die_fly.WAV"
    PUSH EDX                            ; 0059bdd2 | = "hino_die_fly.WAV"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059bdd3
    PUSH EBX                            ; 0059bdd9
    CALL dword ptr [EDI + 0x2c]         ; 0059bdda
    ADD ESP,0x8                         ; 0059bddd
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bde0
    JMP 0x0059b9c3                      ; 0059bde7
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059bdec
        ;   Label: caseD_5e4
    PUSH EDI                            ; 0059bdf3
    CALL FUN_00556700                   ; 0059bdf4
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059bdf9
    TEST EAX,EAX                        ; 0059bdfc
    JNZ 0x0059b9c3                      ; 0059bdfe
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d76                    ; 0059be04 | = "hino_warning.wav"
    PUSH EDX                            ; 0059be09 | = "hino_warning.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059be0a
    PUSH EBX                            ; 0059be10
    CALL dword ptr [EDI + 0x2c]         ; 0059be11
    ADD ESP,0x8                         ; 0059be14
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059be17
    JMP 0x0059b9c3                      ; 0059be1e
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059be23
        ;   Label: caseD_5e5
    PUSH ECX                            ; 0059be2a
    CALL FUN_00556700                   ; 0059be2b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059be30
    TEST EAX,EAX                        ; 0059be33
    JNZ 0x0059b9c3                      ; 0059be35
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d87                    ; 0059be3b | = "hino_big_attack.wav"
    PUSH EDX                            ; 0059be40 | = "hino_big_attack.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059be41
    PUSH EBX                            ; 0059be47
    CALL dword ptr [EDI + 0x2c]         ; 0059be48
    ADD ESP,0x8                         ; 0059be4b
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059be4e
    JMP 0x0059b9c3                      ; 0059be55
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059be5a
        ;   Label: caseD_5e6
    PUSH EDX                            ; 0059be61
    CALL FUN_00556700                   ; 0059be62
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059be67
    TEST EAX,EAX                        ; 0059be6a
    JNZ 0x0059b9c3                      ; 0059be6c
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9d9b                    ; 0059be72 | = "hino_appear.wav"
    PUSH EDX                            ; 0059be77 | = "hino_appear.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059be78
    PUSH EBX                            ; 0059be7e
    CALL dword ptr [EDI + 0x2c]         ; 0059be7f
    ADD ESP,0x8                         ; 0059be82
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059be85
    JMP 0x0059b9c3                      ; 0059be8c
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0xbf4c] ; 0059be91
        ;   Label: caseD_5e7
    PUSH EDI                            ; 0059be98
    CALL FUN_00556700                   ; 0059be99
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; undefined FUN_00556700()
    ADD ESP,0x4                         ; 0059be9e
    TEST EAX,EAX                        ; 0059bea1
    JNZ 0x0059b9c3                      ; 0059bea3
        ;   XREF to: 0059b9c3 (CONDITIONAL_JUMP)  ; LAB_0059b9c3
    MOV EDX,0x5d9dab                    ; 0059bea9 | = "hino_disappear.wav"
    PUSH EDX                            ; 0059beae | = "hino_disappear.wav"
    MOV EDI,dword ptr [EBX + 0x154]     ; 0059beaf
    PUSH EBX                            ; 0059beb5
    CALL dword ptr [EDI + 0x2c]         ; 0059beb6
    ADD ESP,0x8                         ; 0059beb9
    MOV dword ptr [EBX + ESI*0x4 + 0xbf4c],EAX ; 0059bebc
    JMP 0x0059b9c3                      ; 0059bec3
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    PUSH ESI                            ; 0059bec8
        ;   Label: default
    PUSH EBX                            ; 0059bec9
    CALL FUN_00433fb0                   ; 0059beca
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00433fb0()
    ADD ESP,0x8                         ; 0059becf
    JMP 0x0059b9c3                      ; 0059bed2
        ;   XREF to: 0059b9c3 (UNCONDITIONAL_JUMP)  ; LAB_0059b9c3
    LEA EAX,[EBP + 0xe]                 ; 0059bed7
        ;   Label: LAB_0059bed7
    PUSH EAX                            ; 0059beda
    MOV ECX,dword ptr [EBP + 0x32]      ; 0059bedb
    PUSH ECX                            ; 0059bede
    CALL FUN_004fbb70                   ; 0059bedf
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; undefined FUN_004fbb70()
    MOV ESI,EAX                         ; 0059bee4
    LEA EDI,[EAX + 0xfffffa24]          ; 0059bee6
    ADD ESP,0x8                         ; 0059beec
    CMP EDI,0xb                         ; 0059beef
    JA 0x0059bec8                       ; 0059bef2
        ;   XREF to: 0059bec8 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDI*0x4 + 0x59b8f4]  ; 0059bef4 | caseD_5dc | caseD_5dd | caseD_5de
        ;   Label: switchD
    PUSH 0x1                            ; 0059befb
        ;   Label: LAB_0059befb
    PUSH 0x0                            ; 0059befd
    LEA EAX,[EBX + 0x158]               ; 0059beff
    PUSH EAX                            ; 0059bf05
    CALL FUN_004fc0d0                   ; 0059bf06
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059bf0b
    PUSH EBX                            ; 0059bf0e
    MOV EAX,0x5d9dc9                    ; 0059bf0f | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 0059bf14 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 0059bf15 | PTR_DAT_005f1690
    PUSH EDX                            ; 0059bf1b | DAT_007f7ea4
    CALL FUN_00441ff0                   ; 0059bf1c
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ff0()
    JMP 0x0059ba66                      ; 0059bf21
        ;   XREF to: 0059ba66 (UNCONDITIONAL_JUMP)  ; LAB_0059ba66
    JBE 0x0059ba56                      ; 0059bf26
        ;   XREF to: 0059ba56 (CONDITIONAL_JUMP)  ; LAB_0059ba56
        ;   Label: LAB_0059bf26
    CMP EAX,0x3                         ; 0059bf2c
    JZ 0x0059befb                       ; 0059bf2f
        ;   XREF to: 0059befb (CONDITIONAL_JUMP)  ; LAB_0059befb
    PUSH 0x1                            ; 0059bf31
        ;   Label: LAB_0059bf31
    PUSH 0x0                            ; 0059bf33
    JMP 0x0059ba5a                      ; 0059bf35
        ;   XREF to: 0059ba5a (UNCONDITIONAL_JUMP)  ; LAB_0059ba5a
    MOV EAX,dword ptr [EBX + 0xcdd0]    ; 0059bf3a
        ;   Label: caseD_8
    TEST EAX,EAX                        ; 0059bf40
    JNZ 0x0059ba81                      ; 0059bf42
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 0059bf48
    JNZ 0x0059ba81                      ; 0059bf4f
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0059bf55
    MOV ECX,dword ptr [EBP + 0x2e]      ; 0059bf56
    PUSH ECX                            ; 0059bf59
    LEA ESI,[EBP + 0xfffffef6]          ; 0059bf5a
    LEA EDI,[EBP + -0x1a]               ; 0059bf60
    CALL FUN_0054dbd0                   ; 0059bf63
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined FUN_0054dbd0()
    ADD ESP,0x8                         ; 0059bf68
    LEA EAX,[EBP + -0x1a]               ; 0059bf6b
    LEA ESI,[EBP + 0xfffffef6]          ; 0059bf6e
    PUSH EAX                            ; 0059bf74
    MOVSD ES:EDI,ESI                    ; 0059bf75
    MOVSD ES:EDI,ESI                    ; 0059bf76
    MOVSD ES:EDI,ESI                    ; 0059bf77
    PUSH EBX                            ; 0059bf78
    LEA ESI,[EBP + 0xfffffe8a]          ; 0059bf79
    LEA EDI,[EBP + 0xfffffede]          ; 0059bf7f
    CALL FUN_00408b80                   ; 0059bf85
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    ADD ESP,0x8                         ; 0059bf8a
    LEA ESI,[EBP + 0xfffffe8a]          ; 0059bf8d
    LEA EAX,[EBP + 0xfffffede]          ; 0059bf93
    PUSH 0x0                            ; 0059bf99
    MOVSD ES:EDI,ESI                    ; 0059bf9b
    MOVSD ES:EDI,ESI                    ; 0059bf9c
    MOVSD ES:EDI,ESI                    ; 0059bf9d
    PUSH EAX                            ; 0059bf9e
    MOV ESI,dword ptr [0x005fed24]      ; 0059bf9f | DAT_005fed24
    PUSH ESI                            ; 0059bfa5
    CALL FUN_004cec40                   ; 0059bfa6
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; undefined FUN_004cec40()
    ADD ESP,0xc                         ; 0059bfab
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0059bfae
    JMP 0x0059ba81                      ; 0059bfb8
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x2                            ; 0059bfbd
        ;   Label: caseD_4
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0059bfbf
    PUSH EAX                            ; 0059bfc5
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059bfc6
    CALL dword ptr [EDX + 0x78]         ; 0059bfcc
    ADD ESP,0x8                         ; 0059bfcf
    JMP 0x0059ba81                      ; 0059bfd2
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xd070],0x0    ; 0059bfd7
        ;   Label: caseD_9
    JNZ 0x0059c0b7                      ; 0059bfde
        ;   XREF to: 0059c0b7 (CONDITIONAL_JUMP)  ; LAB_0059c0b7
    PUSH EBX                            ; 0059bfe4
    CALL FUN_0059d000                   ; 0059bfe5
        ;   XREF to: 0059d000 (UNCONDITIONAL_CALL)  ; undefined FUN_0059d000()
    MOV dword ptr [EBX + 0xd074],EAX    ; 0059bfea
    MOV EAX,[0x006071f0]                ; 0059bff0 | DAT_006071f0
    MOV EDX,dword ptr [EAX]             ; 0059bff5 | DAT_02d0c1a0
    ADD ESP,0x4                         ; 0059bff7
    TEST EDX,EDX                        ; 0059bffa
    JNZ 0x0059c0fa                      ; 0059bffc
        ;   XREF to: 0059c0fa (CONDITIONAL_JUMP)  ; LAB_0059c0fa
    MOV EDX,dword ptr [0x00603b28]      ; 0059c002 | DAT_00603b28
    MOV EAX,dword ptr [EDX + 0x15aeb8]  ; 0059c008 | DAT_02032780
    MOV ESI,EAX                         ; 0059c00e
    IMUL EAX,EAX,0x1a4                  ; 0059c010
    ADD EDX,0x4                         ; 0059c016
    ADD EDX,EAX                         ; 0059c019
    LEA EAX,[EBP + 0xfffffe12]          ; 0059c01b
    ADD EDX,0x100                       ; 0059c021
    CMP EAX,EDX                         ; 0059c027
    JZ 0x0059c045                       ; 0059c029
        ;   XREF to: 0059c045 (CONDITIONAL_JUMP)  ; LAB_0059c045
    MOV EAX,dword ptr [EDX]             ; 0059c02b
    MOV dword ptr [EBP + 0xfffffe12],EAX ; 0059c02d
    MOV EAX,dword ptr [EDX + 0x4]       ; 0059c033
    MOV dword ptr [EBP + 0xfffffe16],EAX ; 0059c036
    MOV EAX,dword ptr [EDX + 0x8]       ; 0059c03c
    MOV dword ptr [EBP + 0xfffffe1a],EAX ; 0059c03f
    IMUL EDX,ESI,0x1a4                  ; 0059c045
        ;   Label: LAB_0059c045
    MOV EAX,[0x00603b28]                ; 0059c04b | DAT_00603b28
    ADD EAX,0x4                         ; 0059c050
    ADD EDX,EAX                         ; 0059c053
    LEA EAX,[EBP + 0xfffffe06]          ; 0059c055
    ADD EDX,0x10c                       ; 0059c05b
    CMP EAX,EDX                         ; 0059c061
    JZ 0x0059c07f                       ; 0059c063
        ;   XREF to: 0059c07f (CONDITIONAL_JUMP)  ; LAB_0059c07f
    MOV EAX,dword ptr [EDX]             ; 0059c065
    MOV dword ptr [EBP + 0xfffffe06],EAX ; 0059c067
    MOV EAX,dword ptr [EDX + 0x4]       ; 0059c06d
    MOV dword ptr [EBP + 0xfffffe0a],EAX ; 0059c070
    MOV EAX,dword ptr [EDX + 0x8]       ; 0059c076
    MOV dword ptr [EBP + 0xfffffe0e],EAX ; 0059c079
    PUSH 0x5                            ; 0059c07f
        ;   Label: LAB_0059c07f
    MOV ECX,dword ptr [0x006071f0]      ; 0059c081 | DAT_006071f0
    PUSH ECX                            ; 0059c087 | DAT_02d0c1a0
    CALL FUN_0057d050                   ; 0059c088
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d050()
    ADD ESP,0x8                         ; 0059c08d
    LEA EAX,[EBP + 0xfffffe06]          ; 0059c090
    PUSH EAX                            ; 0059c096
    LEA EAX,[EBP + 0xfffffe12]          ; 0059c097
    PUSH EAX                            ; 0059c09d
    MOV ESI,dword ptr [0x006071f0]      ; 0059c09e | DAT_006071f0
    PUSH ESI                            ; 0059c0a4 | DAT_02d0c1a0
    CALL FUN_0057d1a0                   ; 0059c0a5
        ;   XREF to: 0057d1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d1a0()
    ADD ESP,0xc                         ; 0059c0aa
    MOV dword ptr [EBX + 0xd070],0x1    ; 0059c0ad
        ;   Label: LAB_0059c0ad
    PUSH 0x3f800000                     ; 0059c0b7
        ;   Label: LAB_0059c0b7
    PUSH 0x0                            ; 0059c0bc
    PUSH 0x0                            ; 0059c0be
    MOV EDI,dword ptr [0x00603b28]      ; 0059c0c0 | DAT_00603b28
    PUSH 0x42c80000                     ; 0059c0c6
    PUSH EDI                            ; 0059c0cb | DAT_01ed78c8
    CALL FUN_0053b440                   ; 0059c0cc
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; undefined FUN_0053b440()
    FLD float ptr [EBX + 0xd060]        ; 0059c0d1
    FLDZ                                ; 0059c0d7
    ADD ESP,0x14                        ; 0059c0d9
    FCOMPP                              ; 0059c0dc
    FNSTSW AX                           ; 0059c0de
    SAHF                                ; 0059c0e0
    JNC 0x0059c107                      ; 0059c0e1
        ;   XREF to: 0059c107 (CONDITIONAL_JUMP)  ; LAB_0059c107
    FLD float ptr [EBX + 0xd060]        ; 0059c0e3
    FSUB float ptr [EBP + 0x92]         ; 0059c0e9
    FSTP float ptr [EBX + 0xd060]       ; 0059c0ef
    JMP 0x0059ba81                      ; 0059c0f5
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x5                            ; 0059c0fa
        ;   Label: LAB_0059c0fa
    PUSH EAX                            ; 0059c0fc | DAT_02d0c1a0
    CALL FUN_0057d050                   ; 0059c0fd
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d050()
    ADD ESP,0x8                         ; 0059c102
    JMP 0x0059c0ad                      ; 0059c105
        ;   XREF to: 0059c0ad (UNCONDITIONAL_JUMP)  ; LAB_0059c0ad
    PUSH 0x1                            ; 0059c107
        ;   Label: LAB_0059c107
    PUSH 0xa                            ; 0059c109
    LEA EAX,[EBX + 0x158]               ; 0059c10b
    PUSH EAX                            ; 0059c111
    CALL FUN_004fc0d0                   ; 0059c112
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059c117
    MOV dword ptr [EBX + 0xd060],0x40000000 ; 0059c11a
    JMP 0x0059ba81                      ; 0059c124
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EBP + 0x56],EAX      ; 0059c129
        ;   Label: caseD_a
    MOV dword ptr [EBP + 0x52],EAX      ; 0059c12c
    MOV EAX,[0x00603b28]                ; 0059c12f | DAT_00603b28
        ;   Label: LAB_0059c12f
    MOV EDX,dword ptr [EBP + 0x56]      ; 0059c134
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0059c137 | DAT_02024a2c
    JGE 0x0059c844                      ; 0059c13d
        ;   XREF to: 0059c844 (CONDITIONAL_JUMP)  ; LAB_0059c844
    MOV ECX,dword ptr [EBP + 0x52]      ; 0059c143
    MOV EDX,dword ptr [0x02d0bcd8]      ; 0059c146 | DAT_02d0bcd8
    ADD EAX,ECX                         ; 0059c14c
    PUSH EDX                            ; 0059c14e
    MOV ESI,dword ptr [EAX + 0x14d168]  ; 0059c14f | DAT_02024a30
    PUSH ESI                            ; 0059c155
    CALL FUN_0040c840                   ; 0059c156
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV ESI,EAX                         ; 0059c15b
    ADD ESP,0x8                         ; 0059c15d
    MOV EDI,EAX                         ; 0059c160
    TEST EAX,EAX                        ; 0059c162
    JNZ 0x0059c178                      ; 0059c164
        ;   XREF to: 0059c178 (CONDITIONAL_JUMP)  ; LAB_0059c178
    MOV ESI,dword ptr [EBP + 0x56]      ; 0059c166
        ;   Label: LAB_0059c166
    MOV ECX,dword ptr [EBP + 0x52]      ; 0059c169
    INC ESI                             ; 0059c16c
    ADD ECX,0x4                         ; 0059c16d
    MOV dword ptr [EBP + 0x56],ESI      ; 0059c170
    MOV dword ptr [EBP + 0x52],ECX      ; 0059c173
    JMP 0x0059c12f                      ; 0059c176
        ;   XREF to: 0059c12f (UNCONDITIONAL_JUMP)  ; LAB_0059c12f
    PUSH 0x5d9df3                       ; 0059c178 | = "CenterPoint"
        ;   Label: LAB_0059c178
    PUSH EAX                            ; 0059c17d
    CALL FUN_005a3d00                   ; 0059c17e
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 0059c183
    TEST EAX,EAX                        ; 0059c186
    JZ 0x0059c433                       ; 0059c188
        ;   XREF to: 0059c433 (CONDITIONAL_JUMP)  ; LAB_0059c433
    PUSH 0x5d9dff                       ; 0059c18e | = "Platform"
    PUSH ESI                            ; 0059c193
    CALL FUN_005a4010                   ; 0059c194
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4010()
    ADD ESP,0x8                         ; 0059c199
    TEST EAX,EAX                        ; 0059c19c
    JZ 0x0059c586                       ; 0059c19e
        ;   XREF to: 0059c586 (CONDITIONAL_JUMP)  ; LAB_0059c586
    CMP dword ptr [EBX + 0xd074],0x0    ; 0059c1a4
    JZ 0x0059c586                       ; 0059c1ab
        ;   XREF to: 0059c586 (CONDITIONAL_JUMP)  ; LAB_0059c586
    PUSH 0x3f800000                     ; 0059c1b1
    PUSH 0xbf800000                     ; 0059c1b6
    CALL FUN_0040ce40                   ; 0059c1bb
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    ADD ESP,0x8                         ; 0059c1c0
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c1c3
    PUSH 0x3f800000                     ; 0059c1c6
    FLD float ptr [EBP + 0x76]          ; 0059c1cb
    PUSH 0xbf800000                     ; 0059c1ce
    FSTP float ptr [EBP + 0x3e]         ; 0059c1d3
    CALL FUN_0040ce40                   ; 0059c1d6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    LEA EDX,[EBP + 0xfffffea2]          ; 0059c1db
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c1e1
    ADD ESP,0x8                         ; 0059c1e4
    FLD float ptr [EBP + 0x76]          ; 0059c1e7
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0059c1ea
    FSTP float ptr [EBP + 0x46]         ; 0059c1ed
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 0059c1f0
    MOV EAX,dword ptr [EBP + 0x46]      ; 0059c1f6
    XOR ECX,ECX                         ; 0059c1f9
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 0059c1fb
    LEA EAX,[EBP + 0xffffff02]          ; 0059c201
    MOV dword ptr [EBP + 0xfffffea6],ECX ; 0059c207
    CMP EAX,EDX                         ; 0059c20d
    JZ 0x0059c229                       ; 0059c20f
        ;   XREF to: 0059c229 (CONDITIONAL_JUMP)  ; LAB_0059c229
    MOV EAX,dword ptr [EBP + 0x3e]      ; 0059c211
    MOV dword ptr [EBP + 0xffffff02],EAX ; 0059c214
    MOV EAX,dword ptr [EBP + 0x46]      ; 0059c21a
    MOV dword ptr [EBP + 0xffffff06],ECX ; 0059c21d
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0059c223
    FLD float ptr [EBP + 0xffffff06]    ; 0059c229
        ;   Label: LAB_0059c229
    FMUL ST0                            ; 0059c22f
    FLD float ptr [EBP + 0xffffff02]    ; 0059c231
    FMUL ST0                            ; 0059c237
    FADDP                               ; 0059c239
    FLD float ptr [EBP + 0xffffff0a]    ; 0059c23b
    FMUL ST0                            ; 0059c241
    FADDP                               ; 0059c243
    FSQRT                               ; 0059c245
    FLDZ                                ; 0059c247
    FXCH                                ; 0059c249
    FSTP float ptr [EBP + 0x4a]         ; 0059c24b
    FCOMP float ptr [EBP + 0x4a]        ; 0059c24e
    FNSTSW AX                           ; 0059c251
    SAHF                                ; 0059c253
    JNC 0x0059c56d                      ; 0059c254
        ;   XREF to: 0059c56d (CONDITIONAL_JUMP)  ; LAB_0059c56d
    FLD1                                ; 0059c25a
    FLD float ptr [EBP + 0xffffff02]    ; 0059c25c
    FXCH                                ; 0059c262
    FDIV float ptr [EBP + 0x4a]         ; 0059c264
    FXCH                                ; 0059c267
    FMUL ST1                            ; 0059c269
    FLD float ptr [EBP + 0xffffff06]    ; 0059c26b
    FMUL ST2                            ; 0059c271
    FLD float ptr [EBP + 0xffffff0a]    ; 0059c273
    FMULP ST3                           ; 0059c279
    FXCH                                ; 0059c27b
    FSTP float ptr [EBP + 0xffffff02]   ; 0059c27d
    FSTP float ptr [EBP + 0xffffff06]   ; 0059c283
    FSTP float ptr [EBP + 0xffffff0a]   ; 0059c289
    PUSH 0x40c00000                     ; 0059c28f
        ;   Label: LAB_0059c28f
    PUSH 0x0                            ; 0059c294
    CALL FUN_0040ce40                   ; 0059c296
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c29b
    FLD float ptr [EBP + 0xffffff02]    ; 0059c29e
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059c2a4
    MOV dword ptr [EBP + 0x66],EAX      ; 0059c2a7
    FMUL float ptr [EBP + 0x66]         ; 0059c2aa
    FLD float ptr [EBP + 0xffffff06]    ; 0059c2ad
    FMUL float ptr [EBP + 0x66]         ; 0059c2b3
    FLD float ptr [EBP + 0xffffff0a]    ; 0059c2b6
    FMUL float ptr [EBP + 0x66]         ; 0059c2bc
    LEA EDX,[EBP + 0xffffff02]          ; 0059c2bf
    ADD ESP,0x8                         ; 0059c2c5
    LEA EAX,[EDI + 0x20]                ; 0059c2c8
    FXCH ST2                            ; 0059c2cb
    FSTP float ptr [EBP + 0xffffff02]   ; 0059c2cd
    FSTP float ptr [EBP + 0xffffff06]   ; 0059c2d3
    FSTP float ptr [EBP + 0xffffff0a]   ; 0059c2d9
    FLD float ptr [EBP + 0xffffff02]    ; 0059c2df
    FADD float ptr [EAX]                ; 0059c2e5
    FLD float ptr [EBP + 0xffffff06]    ; 0059c2e7
    FXCH                                ; 0059c2ed
    FSTP float ptr [EBP + 0xffffff02]   ; 0059c2ef
    FADD float ptr [EAX + 0x4]          ; 0059c2f5
    FLD float ptr [EBP + 0xffffff0a]    ; 0059c2f8
    FXCH                                ; 0059c2fe
    FSTP float ptr [EBP + 0xffffff06]   ; 0059c300
    FADD float ptr [EAX + 0x8]          ; 0059c306
    LEA EAX,[EBP + 0xfffffeba]          ; 0059c309
    FSTP float ptr [EBP + 0xffffff0a]   ; 0059c30f
    CMP EAX,EDX                         ; 0059c315
    JZ 0x0059c33d                       ; 0059c317
        ;   XREF to: 0059c33d (CONDITIONAL_JUMP)  ; LAB_0059c33d
    MOV EAX,dword ptr [EBP + 0xffffff02] ; 0059c319
    MOV dword ptr [EBP + 0xfffffeba],EAX ; 0059c31f
    MOV EAX,dword ptr [EBP + 0xffffff06] ; 0059c325
    MOV dword ptr [EBP + 0xfffffebe],EAX ; 0059c32b
    MOV EAX,dword ptr [EBP + 0xffffff0a] ; 0059c331
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 0059c337
    PUSH 0x0                            ; 0059c33d
        ;   Label: LAB_0059c33d
    PUSH 0x1                            ; 0059c33f
    LEA EAX,[EBP + 0xfffffeba]          ; 0059c341
    PUSH 0x41f00000                     ; 0059c347
    PUSH EAX                            ; 0059c34c
    MOV ESI,dword ptr [0x005fc5a0]      ; 0059c34d | DAT_005fc5a0
    PUSH ESI                            ; 0059c353
    CALL FUN_004a3bd0                   ; 0059c354
        ;   XREF to: 004a3bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3bd0()
    MOV EAX,[0x01d5ba14]                ; 0059c359 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059c35e
    LEA ESI,[EBP + 0xfffffe4e]          ; 0059c365
    FLD float ptr [EAX + 0x20]          ; 0059c36b
    FLD float ptr [EAX + 0x24]          ; 0059c36e
    FLD float ptr [EAX + 0x28]          ; 0059c371
    FXCH ST2                            ; 0059c374
    FSUB float ptr [EDI + 0x20]         ; 0059c376
    FXCH                                ; 0059c379
    FSUB float ptr [EDI + 0x24]         ; 0059c37b
    FXCH ST2                            ; 0059c37e
    FSUB float ptr [EDI + 0x28]         ; 0059c380
    FXCH                                ; 0059c383
    FSTP float ptr [EBP + 0xfffffe4e]   ; 0059c385
    FXCH                                ; 0059c38b
    FSTP float ptr [EBP + 0xfffffe52]   ; 0059c38d
    LEA EDI,[EBP + 0xfffffe96]          ; 0059c393
    FSTP float ptr [EBP + 0xfffffe56]   ; 0059c399
    MOVSD ES:EDI,ESI                    ; 0059c39f
    MOVSD ES:EDI,ESI                    ; 0059c3a0
    MOVSD ES:EDI,ESI                    ; 0059c3a1
    FLD float ptr [EBP + 0xfffffe9a]    ; 0059c3a2
    FMUL ST0                            ; 0059c3a8
    FLD float ptr [EBP + 0xfffffe96]    ; 0059c3aa
    FMUL ST0                            ; 0059c3b0
    FADDP                               ; 0059c3b2
    FLD float ptr [EBP + 0xfffffe9e]    ; 0059c3b4
    FMUL ST0                            ; 0059c3ba
    FADDP                               ; 0059c3bc
    FSTP float ptr [EBP + 0x6e]         ; 0059c3be
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059c3c1
    MOV EDI,dword ptr [0x01d1a0a4]      ; 0059c3c4 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059c3ca
    ADD EAX,EDI                         ; 0059c3cc
    MOV dword ptr [EBP + 0x72],EAX      ; 0059c3ce
    ADD ESP,0x14                        ; 0059c3d1
    FLD float ptr [EBP + 0x72]          ; 0059c3d4
    FCOMP double ptr [0x005d9e5c]       ; 0059c3d7 | DAT_005d9e5c
    FNSTSW AX                           ; 0059c3dd
    SAHF                                ; 0059c3df
    JA 0x0059c166                       ; 0059c3e0
        ;   XREF to: 0059c166 (CONDITIONAL_JUMP)  ; LAB_0059c166
    LEA EAX,[EBP + 0xfffffd9a]          ; 0059c3e6
    PUSH EAX                            ; 0059c3ec
    CALL FUN_0042abb0                   ; 0059c3ed
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    MOV EAX,0x41c80000                  ; 0059c3f2
    MOV EDX,0x6a                        ; 0059c3f7
    ADD ESP,0x4                         ; 0059c3fc
    MOV dword ptr [EBP + 0xfffffd9e],EAX ; 0059c3ff
    MOV dword ptr [EBP + 0xfffffdca],EDX ; 0059c405
    LEA EDX,[EBP + 0xfffffd9a]          ; 0059c40b
    MOV EAX,[0x01d5ba14]                ; 0059c411 | DAT_01d5ba14
    PUSH EDX                            ; 0059c416
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059c417
    PUSH EAX                            ; 0059c41e
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059c41f
    CALL dword ptr [ESI + 0x108]        ; 0059c425
    ADD ESP,0x8                         ; 0059c42b
    JMP 0x0059c166                      ; 0059c42e
        ;   XREF to: 0059c166 (UNCONDITIONAL_JUMP)  ; LAB_0059c166
    MOV EDI,dword ptr [0x02d0c150]      ; 0059c433 | DAT_02d0c150
        ;   Label: LAB_0059c433
    PUSH EDI                            ; 0059c439
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 0059c43a
    PUSH EAX                            ; 0059c440
    CALL FUN_0040c840                   ; 0059c441
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV dword ptr [EBP + 0x6a],EAX      ; 0059c446
    ADD ESP,0x8                         ; 0059c449
    MOV dword ptr [EBP + 0x5e],EAX      ; 0059c44c
    TEST ESI,ESI                        ; 0059c44f
    JZ 0x0059c166                       ; 0059c451
        ;   XREF to: 0059c166 (CONDITIONAL_JUMP)  ; LAB_0059c166
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0059c457
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059c45a
    PUSH EDX                            ; 0059c460
    LEA ESI,[EBP + -0x6e]               ; 0059c461
    LEA EDI,[EBP + 0xffffff1a]          ; 0059c464
    CALL dword ptr [EAX + 0xe0]         ; 0059c46a
    LEA ESI,[EBP + -0x6e]               ; 0059c470
    ADD ESP,0x4                         ; 0059c473
    LEA EAX,[EBP + 0xffffff1a]          ; 0059c476
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0059c47c
    PUSH EAX                            ; 0059c47f
    MOVSD ES:EDI,ESI                    ; 0059c480
    MOVSD ES:EDI,ESI                    ; 0059c481
    MOVSD ES:EDI,ESI                    ; 0059c482
    PUSH ECX                            ; 0059c483
    LEA ESI,[EBP + -0x26]               ; 0059c484
    LEA EDI,[EBP + 0xffffff4a]          ; 0059c487
    CALL FUN_00408b80                   ; 0059c48d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA ESI,[EBP + -0x26]               ; 0059c492
    LEA EDX,[EBP + 0xffffff4a]          ; 0059c495
    LEA EAX,[EBP + 0xfffffe1e]          ; 0059c49b
    ADD ESP,0x8                         ; 0059c4a1
    MOVSD ES:EDI,ESI                    ; 0059c4a4
    MOVSD ES:EDI,ESI                    ; 0059c4a5
    MOVSD ES:EDI,ESI                    ; 0059c4a6
    CMP EAX,EDX                         ; 0059c4a7
    JZ 0x0059c4cf                       ; 0059c4a9
        ;   XREF to: 0059c4cf (CONDITIONAL_JUMP)  ; LAB_0059c4cf
    MOV EAX,dword ptr [EBP + 0xffffff4a] ; 0059c4ab
    MOV dword ptr [EBP + 0xfffffe1e],EAX ; 0059c4b1
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 0059c4b7
    MOV dword ptr [EBP + 0xfffffe22],EAX ; 0059c4bd
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 0059c4c3
    MOV dword ptr [EBP + 0xfffffe26],EAX ; 0059c4c9
    MOV ESI,dword ptr [EBP + 0x5e]      ; 0059c4cf
        ;   Label: LAB_0059c4cf
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0059c4d2
    PUSH ESI                            ; 0059c4d5
    MOV EAX,dword ptr [EAX + 0x154]     ; 0059c4d6
    LEA ESI,[EBP + 0xfffffde2]          ; 0059c4dc
    LEA EDI,[EBP + 0xfffffe5a]          ; 0059c4e2
    CALL dword ptr [EAX + 0xe0]         ; 0059c4e8
    LEA ESI,[EBP + 0xfffffde2]          ; 0059c4ee
    LEA EAX,[EBP + 0xfffffe5a]          ; 0059c4f4
    ADD ESP,0x4                         ; 0059c4fa
    MOVSD ES:EDI,ESI                    ; 0059c4fd
    MOVSD ES:EDI,ESI                    ; 0059c4fe
    MOVSD ES:EDI,ESI                    ; 0059c4ff
    PUSH EAX                            ; 0059c500
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0059c501
    PUSH EDI                            ; 0059c504
    LEA ESI,[EBP + 0xfffffdd6]          ; 0059c505
    CALL FUN_00408b80                   ; 0059c50b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b80()
    LEA EDI,[EBP + 0xffffff6e]          ; 0059c510
    LEA ESI,[EBP + 0xfffffdd6]          ; 0059c516
    LEA EAX,[EBP + 0xffffff6e]          ; 0059c51c
    LEA EDX,[EBP + 0xfffffeba]          ; 0059c522
    ADD ESP,0x8                         ; 0059c528
    MOVSD ES:EDI,ESI                    ; 0059c52b
    MOVSD ES:EDI,ESI                    ; 0059c52c
    MOVSD ES:EDI,ESI                    ; 0059c52d
    CMP EDX,EAX                         ; 0059c52e
    JZ 0x0059c556                       ; 0059c530
        ;   XREF to: 0059c556 (CONDITIONAL_JUMP)  ; LAB_0059c556
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 0059c532
    MOV dword ptr [EBP + 0xfffffeba],EAX ; 0059c538
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 0059c53e
    MOV dword ptr [EBP + 0xfffffebe],EAX ; 0059c544
    MOV EAX,dword ptr [EBP + 0xffffff76] ; 0059c54a
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 0059c550
    FLD float ptr [EBP + 0xfffffe22]    ; 0059c556
        ;   Label: LAB_0059c556
    FADD float ptr [0x005d9e28]         ; 0059c55c | DAT_005d9e28
    FSTP float ptr [EBP + 0xfffffe22]   ; 0059c562
    JMP 0x0059c166                      ; 0059c568
        ;   XREF to: 0059c166 (UNCONDITIONAL_JUMP)  ; LAB_0059c166
    XOR EAX,EAX                         ; 0059c56d
        ;   Label: LAB_0059c56d
    MOV dword ptr [EBP + 0xffffff06],EAX ; 0059c56f
    MOV dword ptr [EBP + 0xffffff02],EAX ; 0059c575
    MOV dword ptr [EBP + 0xffffff0a],EAX ; 0059c57b
    JMP 0x0059c28f                      ; 0059c581
        ;   XREF to: 0059c28f (UNCONDITIONAL_JUMP)  ; LAB_0059c28f
    PUSH 0x5d9e08                       ; 0059c586 | = "Bridge"
        ;   Label: LAB_0059c586
    PUSH EDI                            ; 0059c58b
    CALL FUN_005a4010                   ; 0059c58c
        ;   XREF to: 005a4010 (UNCONDITIONAL_CALL)  ; undefined FUN_005a4010()
    ADD ESP,0x8                         ; 0059c591
    TEST EAX,EAX                        ; 0059c594
    JZ 0x0059c166                       ; 0059c596
        ;   XREF to: 0059c166 (CONDITIONAL_JUMP)  ; LAB_0059c166
    CMP dword ptr [EBX + 0xd074],0x0    ; 0059c59c
    JNZ 0x0059c166                      ; 0059c5a3
        ;   XREF to: 0059c166 (CONDITIONAL_JUMP)  ; LAB_0059c166
    PUSH 0x3f800000                     ; 0059c5a9
    PUSH 0xbf800000                     ; 0059c5ae
    CALL FUN_0040ce40                   ; 0059c5b3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    ADD ESP,0x8                         ; 0059c5b8
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c5bb
    PUSH 0x3f800000                     ; 0059c5be
    FLD float ptr [EBP + 0x76]          ; 0059c5c3
    PUSH 0xbf800000                     ; 0059c5c6
    FSTP float ptr [EBP + 0x42]         ; 0059c5cb
    CALL FUN_0040ce40                   ; 0059c5ce
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    LEA EDX,[EBP + 0xfffffe36]          ; 0059c5d3
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c5d9
    ADD ESP,0x8                         ; 0059c5dc
    FLD float ptr [EBP + 0x76]          ; 0059c5df
    MOV EAX,dword ptr [EBP + 0x42]      ; 0059c5e2
    FSTP float ptr [EBP + 0x36]         ; 0059c5e5
    MOV dword ptr [EBP + 0xfffffe36],EAX ; 0059c5e8
    MOV EAX,dword ptr [EBP + 0x36]      ; 0059c5ee
    XOR ECX,ECX                         ; 0059c5f1
    MOV dword ptr [EBP + 0xfffffe3e],EAX ; 0059c5f3
    LEA EAX,[EBP + 0xfffffdfa]          ; 0059c5f9
    MOV dword ptr [EBP + 0xfffffe3a],ECX ; 0059c5ff
    CMP EAX,EDX                         ; 0059c605
    JZ 0x0059c621                       ; 0059c607
        ;   XREF to: 0059c621 (CONDITIONAL_JUMP)  ; LAB_0059c621
    MOV EAX,dword ptr [EBP + 0x42]      ; 0059c609
    MOV dword ptr [EBP + 0xfffffdfa],EAX ; 0059c60c
    MOV EAX,dword ptr [EBP + 0x36]      ; 0059c612
    MOV dword ptr [EBP + 0xfffffdfe],ECX ; 0059c615
    MOV dword ptr [EBP + 0xfffffe02],EAX ; 0059c61b
    FLD float ptr [EBP + 0xfffffdfe]    ; 0059c621
        ;   Label: LAB_0059c621
    FMUL ST0                            ; 0059c627
    FLD float ptr [EBP + 0xfffffdfa]    ; 0059c629
    FMUL ST0                            ; 0059c62f
    FADDP                               ; 0059c631
    FLD float ptr [EBP + 0xfffffe02]    ; 0059c633
    FMUL ST0                            ; 0059c639
    FADDP                               ; 0059c63b
    FSQRT                               ; 0059c63d
    FLDZ                                ; 0059c63f
    FXCH                                ; 0059c641
    FSTP float ptr [EBP + 0x3a]         ; 0059c643
    FCOMP float ptr [EBP + 0x3a]        ; 0059c646
    FNSTSW AX                           ; 0059c649
    SAHF                                ; 0059c64b
    JNC 0x0059c82b                      ; 0059c64c
        ;   XREF to: 0059c82b (CONDITIONAL_JUMP)  ; LAB_0059c82b
    FLD1                                ; 0059c652
    FLD float ptr [EBP + 0xfffffdfa]    ; 0059c654
    FXCH                                ; 0059c65a
    FDIV float ptr [EBP + 0x3a]         ; 0059c65c
    FXCH                                ; 0059c65f
    FMUL ST1                            ; 0059c661
    FLD float ptr [EBP + 0xfffffdfe]    ; 0059c663
    FMUL ST2                            ; 0059c669
    FLD float ptr [EBP + 0xfffffe02]    ; 0059c66b
    FMULP ST3                           ; 0059c671
    FXCH                                ; 0059c673
    FSTP float ptr [EBP + 0xfffffdfa]   ; 0059c675
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0059c67b
    FSTP float ptr [EBP + 0xfffffe02]   ; 0059c681
    PUSH 0x40a00000                     ; 0059c687
        ;   Label: LAB_0059c687
    PUSH 0x0                            ; 0059c68c
    CALL FUN_0040ce40                   ; 0059c68e
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c693
    FLD float ptr [EBP + 0xfffffdfa]    ; 0059c696
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059c69c
    MOV dword ptr [EBP + 0x62],EAX      ; 0059c69f
    FMUL float ptr [EBP + 0x62]         ; 0059c6a2
    FLD float ptr [EBP + 0xfffffdfe]    ; 0059c6a5
    FMUL float ptr [EBP + 0x62]         ; 0059c6ab
    FLD float ptr [EBP + 0xfffffe02]    ; 0059c6ae
    FMUL float ptr [EBP + 0x62]         ; 0059c6b4
    LEA EDX,[EBP + 0xfffffdfa]          ; 0059c6b7
    ADD ESP,0x8                         ; 0059c6bd
    LEA EAX,[EDI + 0x20]                ; 0059c6c0
    FXCH ST2                            ; 0059c6c3
    FSTP float ptr [EBP + 0xfffffdfa]   ; 0059c6c5
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0059c6cb
    FSTP float ptr [EBP + 0xfffffe02]   ; 0059c6d1
    FLD float ptr [EBP + 0xfffffdfa]    ; 0059c6d7
    FADD float ptr [EAX]                ; 0059c6dd
    FLD float ptr [EBP + 0xfffffdfe]    ; 0059c6df
    FXCH                                ; 0059c6e5
    FSTP float ptr [EBP + 0xfffffdfa]   ; 0059c6e7
    FADD float ptr [EAX + 0x4]          ; 0059c6ed
    FLD float ptr [EBP + 0xfffffe02]    ; 0059c6f0
    FXCH                                ; 0059c6f6
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0059c6f8
    FADD float ptr [EAX + 0x8]          ; 0059c6fe
    LEA EAX,[EBP + 0xfffffeba]          ; 0059c701
    FSTP float ptr [EBP + 0xfffffe02]   ; 0059c707
    CMP EAX,EDX                         ; 0059c70d
    JZ 0x0059c735                       ; 0059c70f
        ;   XREF to: 0059c735 (CONDITIONAL_JUMP)  ; LAB_0059c735
    MOV EAX,dword ptr [EBP + 0xfffffdfa] ; 0059c711
    MOV dword ptr [EBP + 0xfffffeba],EAX ; 0059c717
    MOV EAX,dword ptr [EBP + 0xfffffdfe] ; 0059c71d
    MOV dword ptr [EBP + 0xfffffebe],EAX ; 0059c723
    MOV EAX,dword ptr [EBP + 0xfffffe02] ; 0059c729
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 0059c72f
    PUSH 0x0                            ; 0059c735
        ;   Label: LAB_0059c735
    PUSH 0x1                            ; 0059c737
    LEA EAX,[EBP + 0xfffffeba]          ; 0059c739
    PUSH 0x41f00000                     ; 0059c73f
    PUSH EAX                            ; 0059c744
    MOV ESI,dword ptr [0x005fc5a0]      ; 0059c745 | DAT_005fc5a0
    PUSH ESI                            ; 0059c74b
    CALL FUN_004a3bd0                   ; 0059c74c
        ;   XREF to: 004a3bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3bd0()
    MOV EAX,[0x01d5ba14]                ; 0059c751 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059c756
    LEA ESI,[EBP + 0xfffffe42]          ; 0059c75d
    FLD float ptr [EAX + 0x20]          ; 0059c763
    FLD float ptr [EAX + 0x24]          ; 0059c766
    FLD float ptr [EAX + 0x28]          ; 0059c769
    FXCH ST2                            ; 0059c76c
    FSUB float ptr [EDI + 0x20]         ; 0059c76e
    FXCH                                ; 0059c771
    FSUB float ptr [EDI + 0x24]         ; 0059c773
    FXCH ST2                            ; 0059c776
    FSUB float ptr [EDI + 0x28]         ; 0059c778
    FXCH                                ; 0059c77b
    FSTP float ptr [EBP + 0xfffffe42]   ; 0059c77d
    FXCH                                ; 0059c783
    FSTP float ptr [EBP + 0xfffffe46]   ; 0059c785
    LEA EDI,[EBP + 0xffffff32]          ; 0059c78b
    FSTP float ptr [EBP + 0xfffffe4a]   ; 0059c791
    MOVSD ES:EDI,ESI                    ; 0059c797
    MOVSD ES:EDI,ESI                    ; 0059c798
    MOVSD ES:EDI,ESI                    ; 0059c799
    FLD float ptr [EBP + 0xffffff36]    ; 0059c79a
    FMUL ST0                            ; 0059c7a0
    FLD float ptr [EBP + 0xffffff32]    ; 0059c7a2
    FMUL ST0                            ; 0059c7a8
    FADDP                               ; 0059c7aa
    FLD float ptr [EBP + 0xffffff3a]    ; 0059c7ac
    FMUL ST0                            ; 0059c7b2
    FADDP                               ; 0059c7b4
    FSTP float ptr [EBP + -0x2]         ; 0059c7b6
    MOV EAX,dword ptr [EBP + -0x2]      ; 0059c7b9
    MOV EDI,dword ptr [0x01d1a0a4]      ; 0059c7bc | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059c7c2
    ADD EAX,EDI                         ; 0059c7c4
    MOV dword ptr [EBP + 0x2],EAX       ; 0059c7c6
    ADD ESP,0x14                        ; 0059c7c9
    FLD float ptr [EBP + 0x2]           ; 0059c7cc
    FCOMP double ptr [0x005d9e54]       ; 0059c7cf | DAT_005d9e54
    FNSTSW AX                           ; 0059c7d5
    SAHF                                ; 0059c7d7
    JA 0x0059c166                       ; 0059c7d8
        ;   XREF to: 0059c166 (CONDITIONAL_JUMP)  ; LAB_0059c166
    LEA EAX,[EBP + 0xfffffd5e]          ; 0059c7de
    PUSH EAX                            ; 0059c7e4
    CALL FUN_0042abb0                   ; 0059c7e5
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042abb0()
    MOV EAX,0x41c80000                  ; 0059c7ea
    MOV EDX,0x6a                        ; 0059c7ef
    ADD ESP,0x4                         ; 0059c7f4
    MOV dword ptr [EBP + 0xfffffd62],EAX ; 0059c7f7
    MOV dword ptr [EBP + 0xfffffd8e],EDX ; 0059c7fd
    LEA EDX,[EBP + 0xfffffd5e]          ; 0059c803
    MOV EAX,[0x01d5ba14]                ; 0059c809 | DAT_01d5ba14
    PUSH EDX                            ; 0059c80e
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0059c80f
    PUSH EAX                            ; 0059c816
    MOV ESI,dword ptr [EAX + 0x154]     ; 0059c817
    CALL dword ptr [ESI + 0x108]        ; 0059c81d
    ADD ESP,0x8                         ; 0059c823
    JMP 0x0059c166                      ; 0059c826
        ;   XREF to: 0059c166 (UNCONDITIONAL_JUMP)  ; LAB_0059c166
    XOR EAX,EAX                         ; 0059c82b
        ;   Label: LAB_0059c82b
    MOV dword ptr [EBP + 0xfffffdfe],EAX ; 0059c82d
    MOV dword ptr [EBP + 0xfffffdfa],EAX ; 0059c833
    MOV dword ptr [EBP + 0xfffffe02],EAX ; 0059c839
    JMP 0x0059c687                      ; 0059c83f
        ;   XREF to: 0059c687 (UNCONDITIONAL_JUMP)  ; LAB_0059c687
    LEA EAX,[EBX + 0x158]               ; 0059c844
        ;   Label: LAB_0059c844
    PUSH EAX                            ; 0059c84a
    CALL FUN_004fc930                   ; 0059c84b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c850
    ADD ESP,0x4                         ; 0059c853
    FLD float ptr [EBP + 0x76]          ; 0059c856
    FCOMP double ptr [0x005d9e4c]       ; 0059c859 | DAT_005d9e4c
    FNSTSW AX                           ; 0059c85f
    SAHF                                ; 0059c861
    JBE 0x0059ba81                      ; 0059c862
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x0                            ; 0059c868
    MOV EDI,dword ptr [0x006071f0]      ; 0059c86a | DAT_006071f0
    PUSH EDI                            ; 0059c870 | DAT_02d0c1a0
    MOV dword ptr [EBX + 0xd070],0x0    ; 0059c871
    CALL FUN_0057d050                   ; 0059c87b
        ;   XREF to: 0057d050 (UNCONDITIONAL_CALL)  ; undefined FUN_0057d050()
    ADD ESP,0x8                         ; 0059c880
    JMP 0x0059ba81                      ; 0059c883
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xd068]        ; 0059c888
        ;   Label: caseD_0
    FLDZ                                ; 0059c88e
    FCOMPP                              ; 0059c890
    FNSTSW AX                           ; 0059c892
    SAHF                                ; 0059c894
    JC 0x0059ba81                       ; 0059c895
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0059c89b
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059c8a1
    PUSH EBX                            ; 0059c8a7
    CALL dword ptr [EAX + 0x144]        ; 0059c8a8
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0059c8ae
    ADD ESP,0x8                         ; 0059c8b4
    TEST ECX,ECX                        ; 0059c8b7
    JZ 0x0059ca48                       ; 0059c8b9
        ;   XREF to: 0059ca48 (CONDITIONAL_JUMP)  ; LAB_0059ca48
    LEA EDI,[EBP + 0xfffffe2a]          ; 0059c8bf
    MOV EDX,ECX                         ; 0059c8c5
    LEA ESI,[EBP + -0x32]               ; 0059c8c7
    LEA EAX,[EBX + 0x20]                ; 0059c8ca
    FLD float ptr [EDX + 0x20]          ; 0059c8cd
    FLD float ptr [EDX + 0x24]          ; 0059c8d0
    FLD float ptr [EDX + 0x28]          ; 0059c8d3
    FXCH ST2                            ; 0059c8d6
    FSUB float ptr [EAX]                ; 0059c8d8
    FXCH                                ; 0059c8da
    FSUB float ptr [EAX + 0x4]          ; 0059c8dc
    FXCH ST2                            ; 0059c8df
    FSUB float ptr [EAX + 0x8]          ; 0059c8e1
    FXCH                                ; 0059c8e4
    FSTP float ptr [EBP + -0x32]        ; 0059c8e6
    FXCH                                ; 0059c8e9
    FSTP float ptr [EBP + -0x2e]        ; 0059c8eb
    FSTP float ptr [EBP + -0x2a]        ; 0059c8ee
    MOVSD ES:EDI,ESI                    ; 0059c8f1
    MOVSD ES:EDI,ESI                    ; 0059c8f2
    MOVSD ES:EDI,ESI                    ; 0059c8f3
    FLD float ptr [EBP + 0xfffffe2e]    ; 0059c8f4
    FMUL ST0                            ; 0059c8fa
    FLD float ptr [EBP + 0xfffffe2a]    ; 0059c8fc
    FMUL ST0                            ; 0059c902
    FADDP                               ; 0059c904
    FLD float ptr [EBP + 0xfffffe32]    ; 0059c906
    FMUL ST0                            ; 0059c90c
    FADDP                               ; 0059c90e
    FSQRT                               ; 0059c910
    FSTP float ptr [EBP + 0x6]          ; 0059c912
    MOV EAX,dword ptr [EBP + 0x6]       ; 0059c915
    FLD float ptr [EBP + 0x6]           ; 0059c918
    MOV dword ptr [EBP + 0x12],EAX      ; 0059c91b
    FCOMP float ptr [0x005e81ac]        ; 0059c91e | DAT_005e81ac
    FNSTSW AX                           ; 0059c924
    SAHF                                ; 0059c926
    JC 0x0059c970                       ; 0059c927
        ;   XREF to: 0059c970 (CONDITIONAL_JUMP)  ; LAB_0059c970
    FLD float ptr [EBP + 0x12]          ; 0059c929
        ;   Label: LAB_0059c929
    FCOMP float ptr [EBX + 0xcddc]      ; 0059c92c
    FNSTSW AX                           ; 0059c932
    SAHF                                ; 0059c934
    JNC 0x0059ba81                      ; 0059c935
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xd064]        ; 0059c93b
    FLDZ                                ; 0059c941
    FCOMPP                              ; 0059c943
    FNSTSW AX                           ; 0059c945
    SAHF                                ; 0059c947
    JNC 0x0059c9fd                      ; 0059c948
        ;   XREF to: 0059c9fd (CONDITIONAL_JUMP)  ; LAB_0059c9fd
    PUSH 0x1                            ; 0059c94e
        ;   Label: LAB_0059c94e
    PUSH 0x2                            ; 0059c950
    LEA EAX,[EBX + 0x158]               ; 0059c952
    PUSH EAX                            ; 0059c958
    CALL FUN_004fc0d0                   ; 0059c959
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059c95e
    MOV dword ptr [EBX + 0xcde0],0x0    ; 0059c961
    JMP 0x0059ba81                      ; 0059c96b
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe2a]          ; 0059c970
        ;   Label: LAB_0059c970
    PUSH EAX                            ; 0059c976
    LEA ESI,[EBP + 0xfffffed2]          ; 0059c977
    LEA EDI,[EBP + 0xfffffec6]          ; 0059c97d
    CALL FUN_00576250                   ; 0059c983
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[EBP + 0xfffffed2]          ; 0059c988
    MOVSD ES:EDI,ESI                    ; 0059c98e
    MOVSD ES:EDI,ESI                    ; 0059c98f
    MOVSD ES:EDI,ESI                    ; 0059c990
    ADD ESP,0x4                         ; 0059c991
    FLD float ptr [EBP + 0xfffffeca]    ; 0059c994
    FSUB float ptr [EBX + 0x34]         ; 0059c99a
    SUB ESP,0x4                         ; 0059c99d
    FSTP float ptr [ESP]                ; 0059c9a0
    CALL FUN_0040cfa0                   ; 0059c9a3
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059c9a8
    FLD float ptr [EBP + 0x76]          ; 0059c9ab
    FABS                                ; 0059c9ae
    ADD ESP,0x4                         ; 0059c9b0
    FCOMP double ptr [0x005d9e44]       ; 0059c9b3 | DAT_005d9e44
    FNSTSW AX                           ; 0059c9b9
    SAHF                                ; 0059c9bb
    JNC 0x0059c929                      ; 0059c9bc
        ;   XREF to: 0059c929 (CONDITIONAL_JUMP)  ; LAB_0059c929
    PUSH 0x64                           ; 0059c9c2
    PUSH 0x0                            ; 0059c9c4
    CALL FUN_0040cea0                   ; 0059c9c6
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0059c9cb
    CMP EAX,0x32                        ; 0059c9ce
    JGE 0x0059c9e8                      ; 0059c9d1
        ;   XREF to: 0059c9e8 (CONDITIONAL_JUMP)  ; LAB_0059c9e8
    PUSH 0x1                            ; 0059c9d3
    PUSH 0x4                            ; 0059c9d5
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0059c9d7
    PUSH EAX                            ; 0059c9da
    CALL FUN_004fc0d0                   ; 0059c9db
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059c9e0
    JMP 0x0059ba81                      ; 0059c9e3
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0059c9e8
        ;   Label: LAB_0059c9e8
    PUSH 0x5                            ; 0059c9ea
    MOV EDI,dword ptr [EBP + 0x2e]      ; 0059c9ec
    PUSH EDI                            ; 0059c9ef
    CALL FUN_004fc0d0                   ; 0059c9f0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059c9f5
    JMP 0x0059ba81                      ; 0059c9f8
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x64                           ; 0059c9fd
        ;   Label: LAB_0059c9fd
    PUSH 0x0                            ; 0059c9ff
    CALL FUN_0040cea0                   ; 0059ca01
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0059ca06
    CMP EAX,0x4b                        ; 0059ca09
    JLE 0x0059c94e                      ; 0059ca0c
        ;   XREF to: 0059c94e (CONDITIONAL_JUMP)  ; LAB_0059c94e
    PUSH 0x1                            ; 0059ca12
    PUSH 0xc                            ; 0059ca14
    LEA EAX,[EBX + 0x158]               ; 0059ca16
    PUSH EAX                            ; 0059ca1c
    MOV dword ptr [EBX + 0xd060],0x40000000 ; 0059ca1d
    CALL FUN_004fc0d0                   ; 0059ca27
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059ca2c
    MOV dword ptr [EBX + 0xd064],0x41500000 ; 0059ca2f
    MOV dword ptr [EBX + 0xcde0],0x0    ; 0059ca39
    JMP 0x0059ba81                      ; 0059ca43
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0059ca48
        ;   Label: LAB_0059ca48
    PUSH EBX                            ; 0059ca4e
    CALL FUN_00489ff0                   ; 0059ca4f
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00489ff0()
    ADD ESP,0x8                         ; 0059ca54
    TEST EAX,EAX                        ; 0059ca57
    JZ 0x0059ba81                       ; 0059ca59
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0059ca5f
    PUSH 0x1                            ; 0059ca61
    MOV ESI,dword ptr [EBP + 0x2e]      ; 0059ca63
    PUSH ESI                            ; 0059ca66
    CALL FUN_004fc0d0                   ; 0059ca67
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059ca6c
    JMP 0x0059ba81                      ; 0059ca6f
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0059ca74
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059ca7a
    PUSH EBX                            ; 0059ca80
    CALL dword ptr [EAX + 0x144]        ; 0059ca81
    ADD ESP,0x8                         ; 0059ca87
    LEA EAX,[EBX + 0x158]               ; 0059ca8a
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 0059ca90
    MOV dword ptr [EBP + 0x26],EAX      ; 0059ca96
    TEST EDI,EDI                        ; 0059ca99
    JNZ 0x0059cad9                      ; 0059ca9b
        ;   XREF to: 0059cad9 (CONDITIONAL_JUMP)  ; LAB_0059cad9
    PUSH dword ptr [EBP + 0x92]         ; 0059ca9d
    PUSH EBX                            ; 0059caa3
    CALL FUN_00489ff0                   ; 0059caa4
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_00489ff0()
    ADD ESP,0x8                         ; 0059caa9
    TEST EAX,EAX                        ; 0059caac
    JZ 0x0059cac5                       ; 0059caae
        ;   XREF to: 0059cac5 (CONDITIONAL_JUMP)  ; LAB_0059cac5
    PUSH 0x1                            ; 0059cab0
    PUSH 0x1                            ; 0059cab2
    MOV EDX,dword ptr [EBP + 0x26]      ; 0059cab4
    PUSH EDX                            ; 0059cab7
    CALL FUN_004fc0d0                   ; 0059cab8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cabd
    JMP 0x0059ba81                      ; 0059cac0
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0059cac5
        ;   Label: LAB_0059cac5
    PUSH EDI                            ; 0059cac7
    MOV EAX,dword ptr [EBP + 0x26]      ; 0059cac8
    PUSH EAX                            ; 0059cacb
    CALL FUN_004fc0d0                   ; 0059cacc
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cad1
    JMP 0x0059ba81                      ; 0059cad4
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,[0x005e81ac]                ; 0059cad9 | DAT_005e81ac
        ;   Label: LAB_0059cad9
    MOV dword ptr [EBP + 0x1a],EAX      ; 0059cade
    LEA EAX,[EBX + 0x249c]              ; 0059cae1
    FLD float ptr [EBP + 0x1a]          ; 0059cae7
    MOV dword ptr [EAX + 0x8],0x0       ; 0059caea
    FADD double ptr [0x005d9e34]        ; 0059caf1 | DAT_005d9e34
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059caf7
    MOV dword ptr [EAX + 0x4],EDX       ; 0059cafa
    MOV EDX,dword ptr [EAX + 0x4]       ; 0059cafd
    MOV dword ptr [EAX],EDX             ; 0059cb00
    XOR EAX,EAX                         ; 0059cb02
    FSTP float ptr [EBP + 0x76]         ; 0059cb04
    MOV dword ptr [EBP + 0xffffff7a],EAX ; 0059cb07
    MOV dword ptr [EBP + 0xffffff7e],EAX ; 0059cb0d
    MOV EAX,dword ptr [EBP + 0x76]      ; 0059cb13
    PUSH 0x3e32b8c2                     ; 0059cb16
    MOV dword ptr [EBP + -0x7e],EAX     ; 0059cb1b
    LEA EAX,[EBP + 0xffffff7a]          ; 0059cb1e
    PUSH 0x3f000000                     ; 0059cb24
    PUSH EAX                            ; 0059cb29
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0059cb2a
    PUSH EAX                            ; 0059cb30
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059cb31
    CALL dword ptr [EDX + 0xc4]         ; 0059cb37
    ADD ESP,0x4                         ; 0059cb3d
    PUSH EAX                            ; 0059cb40
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0059cb41
    ADD EAX,0x20                        ; 0059cb47
    PUSH EAX                            ; 0059cb4a
    PUSH EBX                            ; 0059cb4b
    CALL FUN_0042b9e0                   ; 0059cb4c
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042b9e0()
    ADD ESP,0x18                        ; 0059cb51
    TEST EAX,EAX                        ; 0059cb54
    JL 0x0059ba81                       ; 0059cb56
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0xffffff3e]          ; 0059cb5c
    LEA EAX,[EBX + 0x20]                ; 0059cb62
    LEA ESI,[EBP + 0xfffffe72]          ; 0059cb65
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 0059cb6b
    FLD float ptr [EAX]                 ; 0059cb71
    FLD float ptr [EAX + 0x4]           ; 0059cb73
    FLD float ptr [EAX + 0x8]           ; 0059cb76
    FXCH ST2                            ; 0059cb79
    FSUB float ptr [EDX + 0x20]         ; 0059cb7b
    FXCH                                ; 0059cb7e
    FSUB float ptr [EDX + 0x24]         ; 0059cb80
    FXCH ST2                            ; 0059cb83
    FSUB float ptr [EDX + 0x28]         ; 0059cb85
    FXCH                                ; 0059cb88
    FSTP float ptr [EBP + 0xfffffe72]   ; 0059cb8a
    FXCH                                ; 0059cb90
    FSTP float ptr [EBP + 0xfffffe76]   ; 0059cb92
    FSTP float ptr [EBP + 0xfffffe7a]   ; 0059cb98
    MOVSD ES:EDI,ESI                    ; 0059cb9e
    MOVSD ES:EDI,ESI                    ; 0059cb9f
    MOVSD ES:EDI,ESI                    ; 0059cba0
    FLD float ptr [EBP + 0xffffff3e]    ; 0059cba1
    FMUL ST0                            ; 0059cba7
    FLD float ptr [EBP + 0xffffff46]    ; 0059cba9
    FMUL ST0                            ; 0059cbaf
    FADDP                               ; 0059cbb1
    FSQRT                               ; 0059cbb3
    XOR ECX,ECX                         ; 0059cbb5
    MOV dword ptr [EBP + 0xffffff42],ECX ; 0059cbb7
    FSTP float ptr [EBP + 0x2a]         ; 0059cbbd
    MOV EAX,dword ptr [EBP + 0x2a]      ; 0059cbc0
    FLD float ptr [EBP + 0x2a]          ; 0059cbc3
    MOV dword ptr [EBP + 0x22],EAX      ; 0059cbc6
    FCOMP float ptr [0x005e81b8]        ; 0059cbc9 | DAT_005e81b8
    FNSTSW AX                           ; 0059cbcf
    SAHF                                ; 0059cbd1
    JBE 0x0059cbfe                      ; 0059cbd2
        ;   XREF to: 0059cbfe (CONDITIONAL_JUMP)  ; LAB_0059cbfe
    FLD float ptr [EBP + 0x2a]          ; 0059cbd4
    FCOMP double ptr [0x005d9e3c]       ; 0059cbd7 | DAT_005d9e3c
    FNSTSW AX                           ; 0059cbdd
    SAHF                                ; 0059cbdf
    JNC 0x0059cbfe                      ; 0059cbe0
        ;   XREF to: 0059cbfe (CONDITIONAL_JUMP)  ; LAB_0059cbfe
    CMP dword ptr [EBP + 0x1e],0x2      ; 0059cbe2
    JZ 0x0059cbfe                       ; 0059cbe6
        ;   XREF to: 0059cbfe (CONDITIONAL_JUMP)  ; LAB_0059cbfe
    PUSH 0x1                            ; 0059cbe8
    PUSH 0x2                            ; 0059cbea
    MOV EDI,dword ptr [EBP + 0x26]      ; 0059cbec
    PUSH EDI                            ; 0059cbef
    MOV dword ptr [EBX + 0xcde0],ECX    ; 0059cbf0
    CALL FUN_004fc0d0                   ; 0059cbf6
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cbfb
    FLD float ptr [EBP + 0x22]          ; 0059cbfe
        ;   Label: LAB_0059cbfe
    FCOMP float ptr [EBP + 0x1a]        ; 0059cc01
    FNSTSW AX                           ; 0059cc04
    SAHF                                ; 0059cc06
    JA 0x0059ccd6                       ; 0059cc07
        ;   XREF to: 0059ccd6 (CONDITIONAL_JUMP)  ; LAB_0059ccd6
    FLD float ptr [EBX + 0xcde0]        ; 0059cc0d
    FLDZ                                ; 0059cc13
    FCOMPP                              ; 0059cc15
    FNSTSW AX                           ; 0059cc17
    SAHF                                ; 0059cc19
    JC 0x0059ccd6                       ; 0059cc1a
        ;   XREF to: 0059ccd6 (CONDITIONAL_JUMP)  ; LAB_0059ccd6
    LEA EDI,[EBP + 0xffffff62]          ; 0059cc20
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0059cc26
    LEA ESI,[EBP + -0x3e]               ; 0059cc2c
    LEA EDX,[EBX + 0x20]                ; 0059cc2f
    FLD float ptr [EAX + 0x24]          ; 0059cc32
    FLD float ptr [EAX + 0x28]          ; 0059cc35
    FLD float ptr [EAX + 0x20]          ; 0059cc38
    LEA EAX,[EBP + 0xffffff62]          ; 0059cc3b
    FSUB float ptr [EDX]                ; 0059cc41
    FXCH ST2                            ; 0059cc43
    FSUB float ptr [EDX + 0x4]          ; 0059cc45
    FXCH                                ; 0059cc48
    FSUB float ptr [EDX + 0x8]          ; 0059cc4a
    FXCH ST2                            ; 0059cc4d
    FSTP float ptr [EBP + -0x3e]        ; 0059cc4f
    FSTP float ptr [EBP + -0x3a]        ; 0059cc52
    FSTP float ptr [EBP + -0x36]        ; 0059cc55
    MOVSD ES:EDI,ESI                    ; 0059cc58
    MOVSD ES:EDI,ESI                    ; 0059cc59
    MOVSD ES:EDI,ESI                    ; 0059cc5a
    PUSH EAX                            ; 0059cc5b
    LEA ESI,[EBP + 0xfffffeea]          ; 0059cc5c
    LEA EDI,[EBP + 0xfffffeae]          ; 0059cc62
    CALL FUN_00576250                   ; 0059cc68
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined FUN_00576250()
    LEA ESI,[EBP + 0xfffffeea]          ; 0059cc6d
    MOVSD ES:EDI,ESI                    ; 0059cc73
    MOVSD ES:EDI,ESI                    ; 0059cc74
    MOVSD ES:EDI,ESI                    ; 0059cc75
    ADD ESP,0x4                         ; 0059cc76
    FLD float ptr [EBP + 0xfffffeb2]    ; 0059cc79
    FSUB float ptr [EBX + 0x34]         ; 0059cc7f
    SUB ESP,0x4                         ; 0059cc82
    FSTP float ptr [ESP]                ; 0059cc85
    CALL FUN_0040cfa0                   ; 0059cc88
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059cc8d
    FLD float ptr [EBP + 0x76]          ; 0059cc90
    FABS                                ; 0059cc93
    ADD ESP,0x4                         ; 0059cc95
    FCOMP double ptr [0x005d9e44]       ; 0059cc98 | DAT_005d9e44
    FNSTSW AX                           ; 0059cc9e
    SAHF                                ; 0059cca0
    JNC 0x0059ccd6                      ; 0059cca1
        ;   XREF to: 0059ccd6 (CONDITIONAL_JUMP)  ; LAB_0059ccd6
    PUSH 0x64                           ; 0059cca3
    PUSH 0x0                            ; 0059cca5
    CALL FUN_0040cea0                   ; 0059cca7
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    MOV EDX,EAX                         ; 0059ccac
    ADD ESP,0x8                         ; 0059ccae
    LEA EAX,[EBX + 0x158]               ; 0059ccb1
    TEST EDX,EDX                        ; 0059ccb7
    JZ 0x0059cd6d                       ; 0059ccb9
        ;   XREF to: 0059cd6d (CONDITIONAL_JUMP)  ; LAB_0059cd6d
    PUSH 0x1                            ; 0059ccbf
    PUSH 0x4                            ; 0059ccc1
    PUSH EAX                            ; 0059ccc3
        ;   Label: LAB_0059ccc3
    CALL FUN_004fc0d0                   ; 0059ccc4
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059ccc9
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 0059cccc
    FLD float ptr [EBP + 0x22]          ; 0059ccd6
        ;   Label: LAB_0059ccd6
    FCOMP double ptr [0x005d9e3c]       ; 0059ccd9 | DAT_005d9e3c
    FNSTSW AX                           ; 0059ccdf
    SAHF                                ; 0059cce1
    JNC 0x0059cd2f                      ; 0059cce2
        ;   XREF to: 0059cd2f (CONDITIONAL_JUMP)  ; LAB_0059cd2f
    FLD float ptr [EBX + 0xd064]        ; 0059cce4
    FLDZ                                ; 0059ccea
    FCOMPP                              ; 0059ccec
    FNSTSW AX                           ; 0059ccee
    SAHF                                ; 0059ccf0
    JC 0x0059cd76                       ; 0059ccf1
        ;   XREF to: 0059cd76 (CONDITIONAL_JUMP)  ; LAB_0059cd76
    PUSH 0x64                           ; 0059ccf7
    PUSH 0x0                            ; 0059ccf9
    CALL FUN_0040cea0                   ; 0059ccfb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cea0()
    ADD ESP,0x8                         ; 0059cd00
    CMP EAX,0x4b                        ; 0059cd03
    JLE 0x0059cd76                      ; 0059cd06
        ;   XREF to: 0059cd76 (CONDITIONAL_JUMP)  ; LAB_0059cd76
    PUSH 0x1                            ; 0059cd08
    PUSH 0xc                            ; 0059cd0a
    LEA EAX,[EBX + 0x158]               ; 0059cd0c
    PUSH EAX                            ; 0059cd12
    MOV dword ptr [EBX + 0xd060],0x40000000 ; 0059cd13
    CALL FUN_004fc0d0                   ; 0059cd1d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cd22
    MOV dword ptr [EBX + 0xd064],0x41500000 ; 0059cd25
    FLD float ptr [EBP + 0x22]          ; 0059cd2f
        ;   Label: LAB_0059cd2f
    FCOMP double ptr [0x005d9e3c]       ; 0059cd32 | DAT_005d9e3c
    FNSTSW AX                           ; 0059cd38
    SAHF                                ; 0059cd3a
    JBE 0x0059ba81                      ; 0059cd3b
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0059cd41
    PUSH 0xc                            ; 0059cd43
    LEA EAX,[EBX + 0x158]               ; 0059cd45
    PUSH EAX                            ; 0059cd4b
    MOV dword ptr [EBX + 0xd060],0x40000000 ; 0059cd4c
    CALL FUN_004fc0d0                   ; 0059cd56
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cd5b
    MOV dword ptr [EBX + 0xd064],0x41500000 ; 0059cd5e
    JMP 0x0059ba81                      ; 0059cd68
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0059cd6d
        ;   Label: LAB_0059cd6d
    PUSH 0x5                            ; 0059cd6f
    JMP 0x0059ccc3                      ; 0059cd71
        ;   XREF to: 0059ccc3 (UNCONDITIONAL_JUMP)  ; LAB_0059ccc3
    PUSH 0x1                            ; 0059cd76
        ;   Label: LAB_0059cd76
    PUSH 0x2                            ; 0059cd78
    LEA EAX,[EBX + 0x158]               ; 0059cd7a
    PUSH EAX                            ; 0059cd80
    CALL FUN_004fc0d0                   ; 0059cd81
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cd86
    MOV dword ptr [EBX + 0xcde0],0x0    ; 0059cd89
    JMP 0x0059cd2f                      ; 0059cd93
        ;   XREF to: 0059cd2f (UNCONDITIONAL_JUMP)  ; LAB_0059cd2f
    MOV ESI,dword ptr [EBP + 0x2e]      ; 0059cd95
        ;   Label: caseD_c
    PUSH ESI                            ; 0059cd98
    CALL FUN_004fc930                   ; 0059cd99
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059cd9e
    ADD ESP,0x4                         ; 0059cda1
    FLD float ptr [EBP + 0x76]          ; 0059cda4
    FCOMP double ptr [0x005d9e1c]       ; 0059cda7 | DAT_005d9e1c
    FNSTSW AX                           ; 0059cdad
    SAHF                                ; 0059cdaf
    JC 0x0059cdcb                       ; 0059cdb0
        ;   XREF to: 0059cdcb (CONDITIONAL_JUMP)  ; LAB_0059cdcb
    MOV dword ptr [EBX + 0xd06c],0x0    ; 0059cdb2
        ;   Label: LAB_0059cdb2
    MOV dword ptr [EBX + 0xd068],0x3e800000 ; 0059cdbc
    JMP 0x0059ba81                      ; 0059cdc6
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0xffffff26]          ; 0059cdcb
        ;   Label: LAB_0059cdcb
    PUSH 0xffff                         ; 0059cdd1
    LEA EAX,[EBP + 0xffffff26]          ; 0059cdd6
    LEA ESI,[EBX + 0x20]                ; 0059cddc
    PUSH 0x3e800000                     ; 0059cddf
    MOVSD ES:EDI,ESI                    ; 0059cde4
    MOVSD ES:EDI,ESI                    ; 0059cde5
    MOVSD ES:EDI,ESI                    ; 0059cde6
    PUSH 0x3                            ; 0059cde7
    FLD float ptr [EBP + 0xffffff2a]    ; 0059cde9
    LEA EDI,[EBP + -0x4a]               ; 0059cdef
    PUSH 0x40700000                     ; 0059cdf2
    LEA ESI,[EBX + 0x20]                ; 0059cdf7
    PUSH 0x3f400000                     ; 0059cdfa
    MOVSD ES:EDI,ESI                    ; 0059cdff
    MOVSD ES:EDI,ESI                    ; 0059ce00
    MOVSD ES:EDI,ESI                    ; 0059ce01
    FADD float ptr [0x005d9e28]         ; 0059ce02 | DAT_005d9e28
    FLD float ptr [EBP + -0x46]         ; 0059ce08
    PUSH 0x0                            ; 0059ce0b
    FXCH                                ; 0059ce0d
    FSTP float ptr [EBP + 0xffffff2a]   ; 0059ce0f
    PUSH EAX                            ; 0059ce15
    LEA EAX,[EBP + -0x4a]               ; 0059ce16
    MOV EDI,dword ptr [0x005fc5a0]      ; 0059ce19 | DAT_005fc5a0
    PUSH EAX                            ; 0059ce1f
    FADD float ptr [0x005d9e24]         ; 0059ce20 | DAT_005d9e24
    PUSH EDI                            ; 0059ce26
    FSTP float ptr [EBP + -0x46]        ; 0059ce27
    CALL FUN_004a3c50                   ; 0059ce2a
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    ADD ESP,0x24                        ; 0059ce2f
    JMP 0x0059cdb2                      ; 0059ce32
        ;   XREF to: 0059cdb2 (UNCONDITIONAL_JUMP)  ; LAB_0059cdb2
    MOV EAX,dword ptr [EBP + 0x2e]      ; 0059ce37
        ;   Label: caseD_b
    PUSH EAX                            ; 0059ce3a
    CALL FUN_004fc930                   ; 0059ce3b
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc930()
    MOV dword ptr [EBP + 0x76],EAX      ; 0059ce40
    ADD ESP,0x4                         ; 0059ce43
    FLD float ptr [EBP + 0x76]          ; 0059ce46
    FCOMP double ptr [0x005d9e2c]       ; 0059ce49 | DAT_005d9e2c
    FNSTSW AX                           ; 0059ce4f
    SAHF                                ; 0059ce51
    JC 0x0059ce6d                       ; 0059ce52
        ;   XREF to: 0059ce6d (CONDITIONAL_JUMP)  ; LAB_0059ce6d
    MOV dword ptr [EBX + 0xd06c],0x1    ; 0059ce54
        ;   Label: LAB_0059ce54
    MOV dword ptr [EBX + 0xd068],0x3e800000 ; 0059ce5e
    JMP 0x0059ba81                      ; 0059ce68
        ;   XREF to: 0059ba81 (UNCONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0xfffffdee]          ; 0059ce6d
        ;   Label: LAB_0059ce6d
    PUSH 0xffff                         ; 0059ce73
    LEA EAX,[EBP + 0xfffffdee]          ; 0059ce78
    MOV EDX,dword ptr [0x005fc5a0]      ; 0059ce7e | DAT_005fc5a0
    LEA ESI,[EBX + 0x20]                ; 0059ce84
    PUSH 0x3e800000                     ; 0059ce87
    MOVSD ES:EDI,ESI                    ; 0059ce8c
    MOVSD ES:EDI,ESI                    ; 0059ce8d
    MOVSD ES:EDI,ESI                    ; 0059ce8e
    PUSH 0x3                            ; 0059ce8f
    FLD float ptr [EBP + 0xfffffdf2]    ; 0059ce91
    LEA EDI,[EBP + 0xffffff0e]          ; 0059ce97
    PUSH 0x40700000                     ; 0059ce9d
    LEA ESI,[EBX + 0x20]                ; 0059cea2
    PUSH 0x3f400000                     ; 0059cea5
    FADD float ptr [0x005d9e28]         ; 0059ceaa | DAT_005d9e28
    MOVSD ES:EDI,ESI                    ; 0059ceb0
    MOVSD ES:EDI,ESI                    ; 0059ceb1
    MOVSD ES:EDI,ESI                    ; 0059ceb2
    PUSH 0x0                            ; 0059ceb3
    FLD float ptr [EBP + 0xffffff12]    ; 0059ceb5
    PUSH EAX                            ; 0059cebb
    LEA EAX,[EBP + 0xffffff0e]          ; 0059cebc
    FXCH                                ; 0059cec2
    FSTP float ptr [EBP + 0xfffffdf2]   ; 0059cec4
    PUSH EAX                            ; 0059ceca
    FADD float ptr [0x005d9e24]         ; 0059cecb | DAT_005d9e24
    PUSH EDX                            ; 0059ced1
    FSTP float ptr [EBP + 0xffffff12]   ; 0059ced2
    CALL FUN_004a3c50                   ; 0059ced8
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    ADD ESP,0x24                        ; 0059cedd
    JMP 0x0059ce54                      ; 0059cee0
        ;   XREF to: 0059ce54 (UNCONDITIONAL_JUMP)  ; LAB_0059ce54
    CMP ESI,0xc                         ; 0059cee5
        ;   Label: LAB_0059cee5
    JA 0x0059ba81                       ; 0059cee8
        ;   XREF to: 0059ba81 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [ESI*0x4 + 0x59b924]  ; 0059ceee | caseD_0 | caseD_2 | caseD_7
        ;   Label: switchD
    FLDZ                                ; 0059cef5
        ;   Label: LAB_0059cef5
    FCOMP double ptr [EBP + -0xe]       ; 0059cef7
    FNSTSW AX                           ; 0059cefa
    SAHF                                ; 0059cefc
    JNC 0x0059bae4                      ; 0059cefd
        ;   XREF to: 0059bae4 (CONDITIONAL_JUMP)  ; LAB_0059bae4
    FLD float ptr [EBX + 0xd068]        ; 0059cf03
    FSUB float ptr [EBP + 0x92]         ; 0059cf09
    FST float ptr [EBP + 0x16]          ; 0059cf0f
    FLDZ                                ; 0059cf12
    FCOMPP                              ; 0059cf14
    FNSTSW AX                           ; 0059cf16
    SAHF                                ; 0059cf18
    JC 0x0059bae4                       ; 0059cf19
        ;   XREF to: 0059bae4 (CONDITIONAL_JUMP)  ; LAB_0059bae4
    MOV EAX,dword ptr [EBP + 0x16]      ; 0059cf1f
    MOV dword ptr [EBP + 0x5a],EDI      ; 0059cf22
    XOR EDX,EDX                         ; 0059cf25
    LEA EDI,[EBX + 0x20]                ; 0059cf27
    MOV dword ptr [EBP + 0x4e],EDX      ; 0059cf2a
    MOV dword ptr [EBX + 0xd068],EAX    ; 0059cf2d
    MOV EAX,[0x00603b28]                ; 0059cf33 | DAT_00603b28
        ;   Label: LAB_0059cf33
    MOV EDX,dword ptr [EBP + 0x5a]      ; 0059cf38
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0059cf3b | DAT_02024a2c
    JGE 0x0059cfce                      ; 0059cf41
        ;   XREF to: 0059cfce (CONDITIONAL_JUMP)  ; LAB_0059cfce
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0059cf47
    MOV ESI,dword ptr [0x02d0bcd8]      ; 0059cf4a | DAT_02d0bcd8
    ADD EAX,EDX                         ; 0059cf50
    PUSH ESI                            ; 0059cf52
    MOV ECX,dword ptr [EAX + 0x14d168]  ; 0059cf53 | DAT_02024a30
    PUSH ECX                            ; 0059cf59
    CALL FUN_0040c840                   ; 0059cf5a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    MOV ESI,EAX                         ; 0059cf5f
    ADD ESP,0x8                         ; 0059cf61
    TEST EAX,EAX                        ; 0059cf64
    JNZ 0x0059cf7a                      ; 0059cf66
        ;   XREF to: 0059cf7a (CONDITIONAL_JUMP)  ; LAB_0059cf7a
    MOV ECX,dword ptr [EBP + 0x5a]      ; 0059cf68
        ;   Label: LAB_0059cf68
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0059cf6b
    INC ECX                             ; 0059cf6e
    ADD EDX,0x4                         ; 0059cf6f
    MOV dword ptr [EBP + 0x5a],ECX      ; 0059cf72
    MOV dword ptr [EBP + 0x4e],EDX      ; 0059cf75
    JMP 0x0059cf33                      ; 0059cf78
        ;   XREF to: 0059cf33 (UNCONDITIONAL_JUMP)  ; LAB_0059cf33
    PUSH 0x5d9e0f                       ; 0059cf7a | = "CenterPoint"
        ;   Label: LAB_0059cf7a
    PUSH EAX                            ; 0059cf7f
    CALL FUN_005a3d00                   ; 0059cf80
        ;   XREF to: 005a3d00 (UNCONDITIONAL_CALL)  ; undefined FUN_005a3d00()
    ADD ESP,0x8                         ; 0059cf85
    TEST EAX,EAX                        ; 0059cf88
    JNZ 0x0059cf68                      ; 0059cf8a
        ;   XREF to: 0059cf68 (CONDITIONAL_JUMP)  ; LAB_0059cf68
    PUSH 0xffff                         ; 0059cf8c
    PUSH 0x3e800000                     ; 0059cf91
    PUSH 0x3                            ; 0059cf96
    PUSH 0x3f400000                     ; 0059cf98
    PUSH 0x3f400000                     ; 0059cf9d
    PUSH EAX                            ; 0059cfa2
    ADD ESI,0x20                        ; 0059cfa3
    PUSH ESI                            ; 0059cfa6
    PUSH EDI                            ; 0059cfa7
    MOV EAX,[0x005fc5a0]                ; 0059cfa8 | DAT_005fc5a0
    PUSH EAX                            ; 0059cfad
    CALL FUN_004a3c50                   ; 0059cfae
        ;   XREF to: 004a3c50 (UNCONDITIONAL_CALL)  ; undefined FUN_004a3c50()
    MOV EAX,dword ptr [ESI]             ; 0059cfb3
    MOV dword ptr [EDI],EAX             ; 0059cfb5
    MOV EAX,dword ptr [ESI + 0x4]       ; 0059cfb7
    MOV dword ptr [EDI + 0x4],EAX       ; 0059cfba
    MOV EAX,dword ptr [ESI + 0x8]       ; 0059cfbd
    MOV dword ptr [EDI + 0x8],EAX       ; 0059cfc0
    MOV EAX,dword ptr [ESI + 0xc]       ; 0059cfc3
    ADD ESP,0x24                        ; 0059cfc6
    MOV dword ptr [EDI + 0xc],EAX       ; 0059cfc9
    JMP 0x0059cf68                      ; 0059cfcc
        ;   XREF to: 0059cf68 (UNCONDITIONAL_JUMP)  ; LAB_0059cf68
    PUSH 0x1                            ; 0059cfce
        ;   Label: LAB_0059cfce
    PUSH 0xb                            ; 0059cfd0
    LEA EAX,[EBX + 0x158]               ; 0059cfd2
    PUSH EAX                            ; 0059cfd8
    CALL FUN_004fc0d0                   ; 0059cfd9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc0d0()
    ADD ESP,0xc                         ; 0059cfde
    JMP 0x0059baf6                      ; 0059cfe1
        ;   XREF to: 0059baf6 (UNCONDITIONAL_JUMP)  ; LAB_0059baf6
    CMP ESI,0x7                         ; 0059cfe6
        ;   Label: LAB_0059cfe6
    JZ 0x0059bb13                       ; 0059cfe9
        ;   XREF to: 0059bb13 (CONDITIONAL_JUMP)  ; LAB_0059bb13
    JMP 0x0059bb22                      ; 0059cfef
        ;   XREF to: 0059bb22 (UNCONDITIONAL_JUMP)  ; LAB_0059bb22

