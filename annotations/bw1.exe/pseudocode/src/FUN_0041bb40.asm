; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041bb40(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0041bb20 = 0041c523
;   TerminatedCString s_s_confused_while_walking_005d46d3
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d46fd
;   TerminatedCString s_boneguy_swing_wav_005d471e
;   TerminatedCString s_boneGuy_walkloop_wav_005d4731
;   undefined4 DAT_005d4749
;   undefined4 DAT_005d4751
;   undefined4 DAT_005d4759
;   undefined4 DAT_005d4761
;   undefined4 DAT_005fcc28
;   undefined4 DAT_005fcc2c
;   undefined4 DAT_005fcc38
;   void* PTR_DAT_00611100 = 007db5f0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061f650
;   ... and 6 more
;
; Called Functions:
;   FUN_00408b40
;   FUN_0040cc00
;   FUN_0041c9a0
;   FUN_0041d540
;   FUN_0041d760
;   FUN_0042c010
;   FUN_0042ccf0
;   FUN_0042d700
;   FUN_0042d750
;   FUN_0042e120
;   FUN_0042e160
;   FUN_0042e1a0
;   FUN_00432240
;   FUN_004325b0
;   FUN_00433e80
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041bb40
        ;   Label: FUN_0041bb40
    PUSH ESI                            ; 0041bb41
    PUSH EDI                            ; 0041bb42
    PUSH EBP                            ; 0041bb43
    MOV EBP,ESP                         ; 0041bb44
    SUB ESP,0x260                       ; 0041bb46
    SUB EBP,0x7a                        ; 0041bb4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041bb4f
    LEA EAX,[EBX + 0xc27c]              ; 0041bb55
    PUSH EAX                            ; 0041bb5b
    MOV EDX,dword ptr [0x0061b4d0]      ; 0041bb5c | DAT_0061b4d0
    PUSH EDX                            ; 0041bb62
    CALL FUN_004a6c30                   ; 0041bb63
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 0041bb68
    TEST EAX,EAX                        ; 0041bb6b
    JZ 0x0041bbb3                       ; 0041bb6d
        ;   XREF to: 0041bbb3 (CONDITIONAL_JUMP)  ; LAB_0041bbb3
    MOV dword ptr [EBX + 0x2538],0x0    ; 0041bb6f
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0041bb79
    MOV ECX,dword ptr [EBX + 0xc888]    ; 0041bb83
    MOV dword ptr [EBX + 0xc88c],0x0    ; 0041bb89
    TEST ECX,ECX                        ; 0041bb93
    JNZ 0x0041bba0                      ; 0041bb95
        ;   XREF to: 0041bba0 (CONDITIONAL_JUMP)  ; LAB_0041bba0
    PUSH EBX                            ; 0041bb97
    CALL FUN_0041d540                   ; 0041bb98
        ;   XREF to: 0041d540 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d540()
    ADD ESP,0x4                         ; 0041bb9d
    PUSH 0x0                            ; 0041bba0
        ;   Label: LAB_0041bba0
    PUSH 0x5                            ; 0041bba2
    LEA EAX,[EBX + 0x158]               ; 0041bba4
    PUSH EAX                            ; 0041bbaa
    CALL FUN_00524b10                   ; 0041bbab
        ;   XREF to: 00524b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00524b10()
    ADD ESP,0xc                         ; 0041bbb0
    PUSH dword ptr [EBP + 0x92]         ; 0041bbb3
        ;   Label: LAB_0041bbb3
    PUSH EBX                            ; 0041bbb9
    CALL FUN_0042e1a0                   ; 0041bbba
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e1a0()
    ADD ESP,0x8                         ; 0041bbbf
    TEST EAX,EAX                        ; 0041bbc2
    JZ 0x0041be0f                       ; 0041bbc4
        ;   XREF to: 0041be0f (CONDITIONAL_JUMP)  ; LAB_0041be0f
    CMP dword ptr [EBX + 0xc888],0x1    ; 0041bbca
    JNZ 0x0041bc0c                      ; 0041bbd1
        ;   XREF to: 0041bc0c (CONDITIONAL_JUMP)  ; LAB_0041bc0c
    FLD float ptr [EBX + 0x2538]        ; 0041bbd3
    FLDZ                                ; 0041bbd9
    FCOMPP                              ; 0041bbdb
    FNSTSW AX                           ; 0041bbdd
    SAHF                                ; 0041bbdf
    JNC 0x0041bc0c                      ; 0041bbe0
        ;   XREF to: 0041bc0c (CONDITIONAL_JUMP)  ; LAB_0041bc0c
    FLD float ptr [EBX + 0xc88c]        ; 0041bbe2
    FADD float ptr [EBP + 0x92]         ; 0041bbe8
    FST float ptr [EBX + 0xc88c]        ; 0041bbee
    FCOMP float ptr [EBX + 0xc2e0]      ; 0041bbf4
    FNSTSW AX                           ; 0041bbfa
    SAHF                                ; 0041bbfc
    JBE 0x0041be07                      ; 0041bbfd
        ;   XREF to: 0041be07 (CONDITIONAL_JUMP)  ; LAB_0041be07
    PUSH EBX                            ; 0041bc03
    CALL FUN_0041d760                   ; 0041bc04
        ;   XREF to: 0041d760 (UNCONDITIONAL_CALL)  ; undefined FUN_0041d760()
    ADD ESP,0x4                         ; 0041bc09
    CMP dword ptr [EBX + 0xc888],0x2    ; 0041bc0c
        ;   Label: LAB_0041bc0c
    JNZ 0x0041bec5                      ; 0041bc13
        ;   XREF to: 0041bec5 (CONDITIONAL_JUMP)  ; LAB_0041bec5
    FLD float ptr [EBP + 0x92]          ; 0041bc19
    FDIV float ptr [0x005fcc38]         ; 0041bc1f | DAT_005fcc38
    FADD float ptr [EBX + 0xc88c]       ; 0041bc25
    FST float ptr [EBX + 0xc88c]        ; 0041bc2b
    FLD1                                ; 0041bc31
    FCOMPP                              ; 0041bc33
    FNSTSW AX                           ; 0041bc35
    SAHF                                ; 0041bc37
    JBE 0x0041be3c                      ; 0041bc38
        ;   XREF to: 0041be3c (CONDITIONAL_JUMP)  ; LAB_0041be3c
    XOR EDX,EDX                         ; 0041bc3e
    MOV ECX,dword ptr [EBX + 0xc2e4]    ; 0041bc40
    MOV dword ptr [EBP + 0x66],EDX      ; 0041bc46
    TEST ECX,ECX                        ; 0041bc49
    JLE 0x0041be07                      ; 0041bc4b
        ;   XREF to: 0041be07 (CONDITIONAL_JUMP)  ; LAB_0041be07
    LEA EAX,[EBX + 0xc2e8]              ; 0041bc51
    MOV dword ptr [EBP + 0x56],EAX      ; 0041bc57
    LEA EAX,[EBX + 0xc88c]              ; 0041bc5a
    MOV dword ptr [EBP + 0x5a],EAX      ; 0041bc60
    LEA EAX,[EBX + 0xc300]              ; 0041bc63
    MOV dword ptr [EBP + 0x62],EAX      ; 0041bc69
    LEA EAX,[EBX + 0xc310]              ; 0041bc6c
    MOV dword ptr [EBP + 0x5e],EAX      ; 0041bc72
    LEA EAX,[EBX + 0xc320]              ; 0041bc75
    MOV dword ptr [EBP + 0x6a],EAX      ; 0041bc7b
    IMUL EAX,dword ptr [EBP + 0x66],0x48 ; 0041bc7e
        ;   Label: LAB_0041bc7e
    ADD EAX,dword ptr [EBP + 0x56]      ; 0041bc82
    LEA EDI,[EBP + -0x16]               ; 0041bc85
    FLD float ptr [EAX]                 ; 0041bc88
    MOV EDX,dword ptr [EAX + 0x44]      ; 0041bc8a
    FLD float ptr [EAX + 0x4]           ; 0041bc8d
    MOV dword ptr [EBP + 0x46],EDX      ; 0041bc90
    MOV EDX,dword ptr [EBP + 0x6a]      ; 0041bc93
    FLD float ptr [EAX + 0x8]           ; 0041bc96
    LEA ESI,[EBP + 0xffffff06]          ; 0041bc99
    FXCH ST2                            ; 0041bc9f
    FSUB float ptr [EDX]                ; 0041bca1
    FXCH                                ; 0041bca3
    FSUB float ptr [EDX + 0x4]          ; 0041bca5
    FXCH ST2                            ; 0041bca8
    FSUB float ptr [EDX + 0x8]          ; 0041bcaa
    FXCH                                ; 0041bcad
    FSTP float ptr [EBP + 0xffffff06]   ; 0041bcaf
    FXCH                                ; 0041bcb5
    FSTP float ptr [EBP + 0xffffff0a]   ; 0041bcb7
    FSTP float ptr [EBP + 0xffffff0e]   ; 0041bcbd
    MOVSD ES:EDI,ESI                    ; 0041bcc3
    MOVSD ES:EDI,ESI                    ; 0041bcc4
    MOVSD ES:EDI,ESI                    ; 0041bcc5
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0041bcc6
    FLD float ptr [EBP + -0x16]         ; 0041bcc9
    FMUL float ptr [EAX]                ; 0041bccc
    FLD float ptr [EBP + -0x12]         ; 0041bcce
    FMUL float ptr [EAX]                ; 0041bcd1
    FLD float ptr [EBP + -0xe]          ; 0041bcd3
    FMUL float ptr [EAX]                ; 0041bcd6
    LEA EDI,[EBP + 0x26]                ; 0041bcd8
    LEA ESI,[EBP + 0x1a]                ; 0041bcdb
    FXCH ST2                            ; 0041bcde
    FSTP float ptr [EBP + 0x1a]         ; 0041bce0
    FSTP float ptr [EBP + 0x1e]         ; 0041bce3
    FSTP float ptr [EBP + 0x22]         ; 0041bce6
    MOVSD ES:EDI,ESI                    ; 0041bce9
    MOVSD ES:EDI,ESI                    ; 0041bcea
    MOVSD ES:EDI,ESI                    ; 0041bceb
    FLD float ptr [EDX]                 ; 0041bcec
    FLD float ptr [EDX + 0x4]           ; 0041bcee
    FLD float ptr [EDX + 0x8]           ; 0041bcf1
    LEA EDI,[EBP + -0x46]               ; 0041bcf4
    LEA ESI,[EBP + 0x32]                ; 0041bcf7
    FXCH ST2                            ; 0041bcfa
    FADD float ptr [EBP + 0x26]         ; 0041bcfc
    FXCH                                ; 0041bcff
    FADD float ptr [EBP + 0x2a]         ; 0041bd01
    FXCH ST2                            ; 0041bd04
    FADD float ptr [EBP + 0x2e]         ; 0041bd06
    FXCH                                ; 0041bd09
    FSTP float ptr [EBP + 0x32]         ; 0041bd0b
    FXCH                                ; 0041bd0e
    FSTP float ptr [EBP + 0x36]         ; 0041bd10
    FSTP float ptr [EBP + 0x3a]         ; 0041bd13
    MOVSD ES:EDI,ESI                    ; 0041bd16
    MOVSD ES:EDI,ESI                    ; 0041bd17
    MOVSD ES:EDI,ESI                    ; 0041bd18
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0041bd19
    PUSH dword ptr [EBX + 0xc88c]       ; 0041bd1c
    PUSH EDI                            ; 0041bd22
    MOV EAX,dword ptr [EBP + 0x62]      ; 0041bd23
    PUSH EAX                            ; 0041bd26
    LEA ESI,[EBP + 0xfffffed2]          ; 0041bd27
    LEA EDI,[EBP + 0xfffffec2]          ; 0041bd2d
    CALL FUN_005b7940                   ; 0041bd33
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7940()
    LEA ESI,[EBP + 0xfffffed2]          ; 0041bd38
    LEA EAX,[EBP + 0xfffffec2]          ; 0041bd3e
    ADD ESP,0xc                         ; 0041bd44
    MOVSD ES:EDI,ESI                    ; 0041bd47
    MOVSD ES:EDI,ESI                    ; 0041bd48
    MOVSD ES:EDI,ESI                    ; 0041bd49
    MOVSD ES:EDI,ESI                    ; 0041bd4a
    PUSH EAX                            ; 0041bd4b
    LEA ESI,[EBP + -0x2e]               ; 0041bd4c
    LEA EDI,[EBP + -0x22]               ; 0041bd4f
    CALL FUN_005b7c00                   ; 0041bd52
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7c00()
    LEA ESI,[EBP + -0x2e]               ; 0041bd57
    MOVSD ES:EDI,ESI                    ; 0041bd5a
    MOVSD ES:EDI,ESI                    ; 0041bd5b
    MOVSD ES:EDI,ESI                    ; 0041bd5c
    FLD float ptr [EBX + 0xc88c]        ; 0041bd5d
    FMUL double ptr [0x005d4761]        ; 0041bd63 | DAT_005d4761
    MOV EAX,dword ptr [EBP + -0x46]     ; 0041bd69
    FLD float ptr [EBP + -0x22]         ; 0041bd6c
    FXCH                                ; 0041bd6f
    FADD ST0,ST1                        ; 0041bd71
    MOV ESI,dword ptr [EBP + 0x46]      ; 0041bd73
    FSTP ST1                            ; 0041bd76
    FSTP float ptr [EBP + -0x22]        ; 0041bd78
    MOV dword ptr [ESI + 0x20],EAX      ; 0041bd7b
    MOV EAX,dword ptr [EBP + -0x42]     ; 0041bd7e
    MOV dword ptr [ESI + 0x24],EAX      ; 0041bd81
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0041bd84
    LEA EDX,[ESI + 0x30]                ; 0041bd87
    MOV dword ptr [ESI + 0x28],EAX      ; 0041bd8a
    LEA EAX,[EBP + -0x22]               ; 0041bd8d
    ADD ESP,0x4                         ; 0041bd90
    CMP EDX,EAX                         ; 0041bd93
    JNZ 0x0041be26                      ; 0041bd95
        ;   XREF to: 0041be26 (CONDITIONAL_JUMP)  ; LAB_0041be26
    LEA EAX,[EBP + -0x46]               ; 0041bd9b
        ;   Label: LAB_0041bd9b
    LEA EDX,[ESI + 0xcd0]               ; 0041bd9e
    CMP EDX,EAX                         ; 0041bda4
    JZ 0x0041bdb9                       ; 0041bda6
        ;   XREF to: 0041bdb9 (CONDITIONAL_JUMP)  ; LAB_0041bdb9
    MOV EAX,dword ptr [EBP + -0x46]     ; 0041bda8
    MOV dword ptr [EDX],EAX             ; 0041bdab
    MOV EAX,dword ptr [EBP + -0x42]     ; 0041bdad
    MOV dword ptr [EDX + 0x4],EAX       ; 0041bdb0
    MOV EAX,dword ptr [EBP + -0x3e]     ; 0041bdb3
    MOV dword ptr [EDX + 0x8],EAX       ; 0041bdb6
    LEA EAX,[EBP + -0x22]               ; 0041bdb9
        ;   Label: LAB_0041bdb9
    LEA EDX,[ESI + 0xcdc]               ; 0041bdbc
    CMP EDX,EAX                         ; 0041bdc2
    JZ 0x0041bdd7                       ; 0041bdc4
        ;   XREF to: 0041bdd7 (CONDITIONAL_JUMP)  ; LAB_0041bdd7
    MOV EAX,dword ptr [EBP + -0x22]     ; 0041bdc6
    MOV dword ptr [EDX],EAX             ; 0041bdc9
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0041bdcb
    MOV dword ptr [EDX + 0x4],EAX       ; 0041bdce
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0041bdd1
    MOV dword ptr [EDX + 0x8],EAX       ; 0041bdd4
    MOV EDX,dword ptr [EBP + 0x62]      ; 0041bdd7
        ;   Label: LAB_0041bdd7
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0041bdda
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0041bddd
    MOV EDI,dword ptr [EBP + 0x66]      ; 0041bde0
    ADD EDX,0x48                        ; 0041bde3
    ADD ECX,0x48                        ; 0041bde6
    ADD ESI,0x48                        ; 0041bde9
    INC EDI                             ; 0041bdec
    MOV dword ptr [EBP + 0x62],EDX      ; 0041bded
    MOV dword ptr [EBP + 0x5e],ECX      ; 0041bdf0
    MOV dword ptr [EBP + 0x6a],ESI      ; 0041bdf3
    MOV EDX,dword ptr [EBX + 0xc2e4]    ; 0041bdf6
    MOV dword ptr [EBP + 0x66],EDI      ; 0041bdfc
    CMP EDI,EDX                         ; 0041bdff
    JL 0x0041bc7e                       ; 0041be01
        ;   XREF to: 0041bc7e (CONDITIONAL_JUMP)  ; LAB_0041bc7e
    LEA ESP,[EBP + 0x7a]                ; 0041be07
        ;   Label: LAB_0041be07
    POP EBP                             ; 0041be0a
    POP EDI                             ; 0041be0b
    POP ESI                             ; 0041be0c
    POP EBX                             ; 0041be0d
    RET                                 ; 0041be0e
    MOV ESI,dword ptr [EBX + 0xc278]    ; 0041be0f
        ;   Label: LAB_0041be0f
    PUSH ESI                            ; 0041be15
    CALL FUN_00573a80                   ; 0041be16
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0041be1b
    LEA ESP,[EBP + 0x7a]                ; 0041be1e
    POP EBP                             ; 0041be21
    POP EDI                             ; 0041be22
    POP ESI                             ; 0041be23
    POP EBX                             ; 0041be24
    RET                                 ; 0041be25
    MOV EAX,dword ptr [EBP + -0x22]     ; 0041be26
        ;   Label: LAB_0041be26
    MOV dword ptr [EDX],EAX             ; 0041be29
    MOV EAX,dword ptr [EBP + -0x1e]     ; 0041be2b
    MOV dword ptr [EDX + 0x4],EAX       ; 0041be2e
    MOV EAX,dword ptr [EBP + -0x1a]     ; 0041be31
    MOV dword ptr [EDX + 0x8],EAX       ; 0041be34
    JMP 0x0041bd9b                      ; 0041be37
        ;   XREF to: 0041bd9b (UNCONDITIONAL_JUMP)  ; LAB_0041bd9b
    LEA EAX,[EBX + 0x158]               ; 0041be3c
        ;   Label: LAB_0041be3c
    PUSH EAX                            ; 0041be42
    XOR EDI,EDI                         ; 0041be43
    CALL FUN_00569ae0                   ; 0041be45
        ;   XREF to: 00569ae0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569ae0()
    MOV EAX,dword ptr [EBX + 0xc2e4]    ; 0041be4a
    ADD ESP,0x4                         ; 0041be50
    TEST EAX,EAX                        ; 0041be53
    JLE 0x0041be90                      ; 0041be55
        ;   XREF to: 0041be90 (CONDITIONAL_JUMP)  ; LAB_0041be90
    MOV ESI,EBX                         ; 0041be57
    PUSH 0x1                            ; 0041be59
        ;   Label: LAB_0041be59
    MOV EAX,dword ptr [ESI + 0xc32c]    ; 0041be5b
    PUSH EAX                            ; 0041be61
    MOV EDX,dword ptr [0x0061f650]      ; 0041be62 | DAT_0061f650
    PUSH EDX                            ; 0041be68 | DAT_01d2c900
    ADD ESI,0x48                        ; 0041be69
    CALL FUN_0051b740                   ; 0041be6c
        ;   XREF to: 0051b740 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b740()
    MOV dword ptr [ESI + 0xc2e4],0x0    ; 0041be71
    INC EDI                             ; 0041be7b
    MOV ECX,dword ptr [EBX + 0xc2e4]    ; 0041be7c
    ADD ESP,0xc                         ; 0041be82
    CMP EDI,ECX                         ; 0041be85
    JL 0x0041be59                       ; 0041be87
        ;   XREF to: 0041be59 (CONDITIONAL_JUMP)  ; LAB_0041be59
    LEA EAX,[EAX]                       ; 0041be89
    NOP                                 ; 0041be8f
    FLD float ptr [EBX + 0xc2e0]        ; 0041be90
        ;   Label: LAB_0041be90
    MOV dword ptr [EBX + 0xc888],0x0    ; 0041be96
    FLD ST0                             ; 0041bea0
    FMUL double ptr [0x005d4749]        ; 0041bea2 | DAT_005d4749
    MOV dword ptr [EBX + 0x2538],0x42c80000 ; 0041bea8
    FSTP ST1                            ; 0041beb2
    FST float ptr [EBX + 0xc2e0]        ; 0041beb4
    FCOMP double ptr [0x005d4751]       ; 0041beba | DAT_005d4751
    FNSTSW AX                           ; 0041bec0
    SAHF                                ; 0041bec2
    JBE 0x0041bf1c                      ; 0041bec3
        ;   XREF to: 0041bf1c (CONDITIONAL_JUMP)  ; LAB_0041bf1c
    LEA EAX,[EBX + 0x249c]              ; 0041bec5
        ;   Label: LAB_0041bec5
    MOV dword ptr [EAX + 0x8],0x0       ; 0041becb
    FLD float ptr [EBP + 0x92]          ; 0041bed2
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041bed8
    MOV dword ptr [EAX + 0x4],EDX       ; 0041bedb
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041bede
    MOV dword ptr [EAX],EDX             ; 0041bee1
    FMUL float ptr [EBX + 0xc1d0]       ; 0041bee3
    LEA ESI,[EBX + 0x158]               ; 0041bee9
    FSTP float ptr [EBP + 0x4a]         ; 0041beef
    FLD float ptr [EBP + 0x4a]          ; 0041bef2
        ;   Label: LAB_0041bef2
    FLDZ                                ; 0041bef5
    FCOMPP                              ; 0041bef7
    FNSTSW AX                           ; 0041bef9
    SAHF                                ; 0041befb
    JNC 0x0041bf51                      ; 0041befc
        ;   XREF to: 0041bf51 (CONDITIONAL_JUMP)  ; LAB_0041bf51
    LEA EAX,[EBP + 0x4a]                ; 0041befe
    PUSH EAX                            ; 0041bf01
    PUSH ESI                            ; 0041bf02
    CALL FUN_00524270                   ; 0041bf03
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; undefined FUN_00524270()
    ADD ESP,0x8                         ; 0041bf08
    CMP EAX,0x64                        ; 0041bf0b
    JZ 0x0041bf28                       ; 0041bf0e
        ;   XREF to: 0041bf28 (CONDITIONAL_JUMP)  ; LAB_0041bf28
    PUSH EAX                            ; 0041bf10
    PUSH EBX                            ; 0041bf11
    CALL FUN_00434a80                   ; 0041bf12
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00434a80()
    ADD ESP,0x8                         ; 0041bf17
    JMP 0x0041bef2                      ; 0041bf1a
        ;   XREF to: 0041bef2 (UNCONDITIONAL_JUMP)  ; LAB_0041bef2
    MOV dword ptr [EBX + 0xc2e0],0x40200000 ; 0041bf1c
        ;   Label: LAB_0041bf1c
    JMP 0x0041bec5                      ; 0041bf26
        ;   XREF to: 0041bec5 (UNCONDITIONAL_JUMP)  ; LAB_0041bec5
    MOV EAX,dword ptr [EBX + 0xc274]    ; 0041bf28
        ;   Label: LAB_0041bf28
    TEST EAX,EAX                        ; 0041bf2e
    JZ 0x0041bef2                       ; 0041bf30
        ;   XREF to: 0041bef2 (CONDITIONAL_JUMP)  ; LAB_0041bef2
    PUSH 0x0                            ; 0041bf32
    PUSH 0x3e4ccccd                     ; 0041bf34
    PUSH EAX                            ; 0041bf39
    PUSH 0x1                            ; 0041bf3a
    PUSH EBX                            ; 0041bf3c
    MOV dword ptr [EBX + 0xc274],0x0    ; 0041bf3d
    CALL FUN_004325b0                   ; 0041bf47
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004325b0()
    ADD ESP,0x14                        ; 0041bf4c
    JMP 0x0041bef2                      ; 0041bf4f
        ;   XREF to: 0041bef2 (UNCONDITIONAL_JUMP)  ; LAB_0041bef2
    FLD float ptr [EBP + 0x92]          ; 0041bf51
        ;   Label: LAB_0041bf51
    FMUL float ptr [EBX + 0xc1d0]       ; 0041bf57
    SUB ESP,0x4                         ; 0041bf5d
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0041bf60
    MOV dword ptr [EBX + 0x2524],EAX    ; 0041bf66
    FSTP float ptr [ESP]                ; 0041bf6c
    PUSH EBX                            ; 0041bf6f
    CALL FUN_00435320                   ; 0041bf70
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined FUN_00435320()
    ADD ESP,0x8                         ; 0041bf75
    PUSH ESI                            ; 0041bf78
    CALL FUN_00524770                   ; 0041bf79
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; undefined FUN_00524770()
    ADD ESP,0x4                         ; 0041bf7e
    PUSH dword ptr [EBP + 0x92]         ; 0041bf81
    MOV EDI,dword ptr [EAX + 0x24]      ; 0041bf87
    PUSH EBX                            ; 0041bf8a
    MOV dword ptr [EBP + 0x6e],EDI      ; 0041bf8b
    CALL FUN_00432240                   ; 0041bf8e
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; undefined FUN_00432240()
    ADD ESP,0x8                         ; 0041bf93
    TEST EAX,EAX                        ; 0041bf96
    JZ 0x0041c70c                       ; 0041bf98
        ;   XREF to: 0041c70c (CONDITIONAL_JUMP)  ; LAB_0041c70c
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0041bf9e
    CMP EAX,0x2                         ; 0041bfa4
    JNC 0x0041c238                      ; 0041bfa7
        ;   XREF to: 0041c238 (CONDITIONAL_JUMP)  ; LAB_0041c238
    CMP EAX,0x1                         ; 0041bfad
    JNZ 0x0041c243                      ; 0041bfb0
        ;   XREF to: 0041c243 (CONDITIONAL_JUMP)  ; LAB_0041c243
    PUSH 0x1                            ; 0041bfb6
        ;   Label: LAB_0041bfb6
    PUSH 0x1                            ; 0041bfb8
    LEA EAX,[EBX + 0x158]               ; 0041bfba
        ;   Label: LAB_0041bfba
    PUSH EAX                            ; 0041bfc0
    CALL FUN_005247c0                   ; 0041bfc1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041bfc6
        ;   Label: LAB_0041bfc6
    LEA EAX,[EBX + 0x249c]              ; 0041bfc9
    MOV dword ptr [EAX + 0x8],0x0       ; 0041bfcf
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041bfd6
    MOV dword ptr [EAX + 0x4],EDX       ; 0041bfd9
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041bfdc
    MOV dword ptr [EAX],EDX             ; 0041bfdf
    FLD float ptr [EBX + 0xc1e4]        ; 0041bfe1
        ;   Label: caseD_3
    FLDZ                                ; 0041bfe7
    FCOMPP                              ; 0041bfe9
    FNSTSW AX                           ; 0041bfeb
    SAHF                                ; 0041bfed
    JNC 0x0041c002                      ; 0041bfee
        ;   XREF to: 0041c002 (CONDITIONAL_JUMP)  ; LAB_0041c002
    FLD float ptr [EBX + 0xc1e4]        ; 0041bff0
    FSUB float ptr [EBP + 0x92]         ; 0041bff6
    FSTP float ptr [EBX + 0xc1e4]       ; 0041bffc
    PUSH EBX                            ; 0041c002
        ;   Label: LAB_0041c002
    CALL FUN_0042e120                   ; 0041c003
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e120()
    ADD ESP,0x4                         ; 0041c008
    TEST EAX,EAX                        ; 0041c00b
    JZ 0x0041c14b                       ; 0041c00d
        ;   XREF to: 0041c14b (CONDITIONAL_JUMP)  ; LAB_0041c14b
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0041c013
    TEST EDI,EDI                        ; 0041c019
    JZ 0x0041c047                       ; 0041c01b
        ;   XREF to: 0041c047 (CONDITIONAL_JUMP)  ; LAB_0041c047
    PUSH EDI                            ; 0041c01d
    MOV EDX,dword ptr [EDI + 0x154]     ; 0041c01e
    CALL dword ptr [EDX + 0xf4]         ; 0041c024
    ADD ESP,0x4                         ; 0041c02a
    CMP EAX,EBX                         ; 0041c02d
    JNZ 0x0041c047                      ; 0041c02f
        ;   XREF to: 0041c047 (CONDITIONAL_JUMP)  ; LAB_0041c047
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0041c031
    PUSH EAX                            ; 0041c037
    MOV EDX,dword ptr [0x00622c18]      ; 0041c038 | DAT_00622c18
    PUSH EDX                            ; 0041c03e | DAT_01e82168
    CALL FUN_00559250                   ; 0041c03f
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; undefined FUN_00559250()
    ADD ESP,0x8                         ; 0041c044
    PUSH dword ptr [EBP + 0x92]         ; 0041c047
        ;   Label: LAB_0041c047
    PUSH EBX                            ; 0041c04d
    LEA ESI,[EBX + 0x2518]              ; 0041c04e
    CALL FUN_0042d700                   ; 0041c054
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d700()
    FLD float ptr [ESI]                 ; 0041c059
    FMUL float ptr [EBP + 0x92]         ; 0041c05b
    FLD float ptr [ESI + 0x4]           ; 0041c061
    FMUL float ptr [EBP + 0x92]         ; 0041c064
    FLD float ptr [ESI + 0x8]           ; 0041c06a
    FMUL float ptr [EBP + 0x92]         ; 0041c06d
    LEA EDI,[EBP + 0xfffffeee]          ; 0041c073
    LEA ESI,[EBP + 0xfffffefa]          ; 0041c079
    FXCH ST2                            ; 0041c07f
    FSTP float ptr [EBP + 0xfffffefa]   ; 0041c081
    FSTP float ptr [EBP + 0xfffffefe]   ; 0041c087
    FSTP float ptr [EBP + 0xffffff02]   ; 0041c08d
    MOVSD ES:EDI,ESI                    ; 0041c093
    MOVSD ES:EDI,ESI                    ; 0041c094
    MOVSD ES:EDI,ESI                    ; 0041c095
    LEA EDX,[EBX + 0x250c]              ; 0041c096
    FLD float ptr [EBP + 0xfffffeee]    ; 0041c09c
    FLD float ptr [EBP + 0xfffffef2]    ; 0041c0a2
    FLD float ptr [EBP + 0xfffffef6]    ; 0041c0a8
    LEA EDI,[EBP + -0x3a]               ; 0041c0ae
    LEA ESI,[EBP + -0x76]               ; 0041c0b1
    FXCH ST2                            ; 0041c0b4
    FADD float ptr [EDX]                ; 0041c0b6
    FXCH                                ; 0041c0b8
    FADD float ptr [EDX + 0x4]          ; 0041c0ba
    FXCH ST2                            ; 0041c0bd
    FADD float ptr [EDX + 0x8]          ; 0041c0bf
    FXCH                                ; 0041c0c2
    FSTP float ptr [EBP + -0x76]        ; 0041c0c4
    FXCH                                ; 0041c0c7
    FSTP float ptr [EBP + -0x72]        ; 0041c0c9
    FSTP float ptr [EBP + -0x6e]        ; 0041c0cc
    MOVSD ES:EDI,ESI                    ; 0041c0cf
    MOVSD ES:EDI,ESI                    ; 0041c0d0
    MOVSD ES:EDI,ESI                    ; 0041c0d1
    LEA EAX,[EBX + 0x249c]              ; 0041c0d2
    FLD float ptr [EBP + -0x3a]         ; 0041c0d8
    FLD float ptr [EBP + -0x36]         ; 0041c0db
    FLD float ptr [EBP + -0x32]         ; 0041c0de
    LEA EDI,[EBP + 0xffffff66]          ; 0041c0e1
    LEA ESI,[EBP + 0xffffff5a]          ; 0041c0e7
    FXCH ST2                            ; 0041c0ed
    FADD float ptr [EAX]                ; 0041c0ef
    FXCH                                ; 0041c0f1
    FADD float ptr [EAX + 0x4]          ; 0041c0f3
    FXCH ST2                            ; 0041c0f6
    FADD float ptr [EAX + 0x8]          ; 0041c0f8
    FXCH                                ; 0041c0fb
    FSTP float ptr [EBP + 0xffffff5a]   ; 0041c0fd
    FXCH                                ; 0041c103
    FSTP float ptr [EBP + 0xffffff5e]   ; 0041c105
    FSTP float ptr [EBP + 0xffffff62]   ; 0041c10b
    MOVSD ES:EDI,ESI                    ; 0041c111
    MOVSD ES:EDI,ESI                    ; 0041c112
    MOVSD ES:EDI,ESI                    ; 0041c113
    MOV dword ptr [EDX + 0x8],0x0       ; 0041c114
    MOV ECX,dword ptr [EDX + 0x8]       ; 0041c11b
    MOV dword ptr [EDX + 0x4],ECX       ; 0041c11e
    MOV ECX,dword ptr [EDX + 0x4]       ; 0041c121
    MOV dword ptr [EDX],ECX             ; 0041c124
    MOV dword ptr [EAX + 0x8],0x0       ; 0041c126
    ADD ESP,0x8                         ; 0041c12d
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041c130
    MOV dword ptr [EAX + 0x4],EDX       ; 0041c133
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041c136
    MOV dword ptr [EAX],EDX             ; 0041c139
    LEA EAX,[EBP + 0xffffff66]          ; 0041c13b
    PUSH EAX                            ; 0041c141
    PUSH EBX                            ; 0041c142
    CALL FUN_0042d750                   ; 0041c143
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; undefined FUN_0042d750()
    ADD ESP,0x8                         ; 0041c148
    PUSH EBX                            ; 0041c14b
        ;   Label: LAB_0041c14b
    CALL FUN_0042e160                   ; 0041c14c
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; undefined FUN_0042e160()
    ADD ESP,0x4                         ; 0041c151
    LEA EAX,[EBX + 0x158]               ; 0041c154
    PUSH EAX                            ; 0041c15a
    CALL FUN_005675a0                   ; 0041c15b
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005675a0()
    ADD ESP,0x4                         ; 0041c160
    PUSH dword ptr [EBP + 0x92]         ; 0041c163
    PUSH EBX                            ; 0041c169
    CALL FUN_00433e80                   ; 0041c16a
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; undefined FUN_00433e80()
    MOV ECX,dword ptr [EBP + 0x6e]      ; 0041c16f
    ADD ESP,0x8                         ; 0041c172
    CMP ECX,0x1                         ; 0041c175
    JNZ 0x0041be0f                      ; 0041c178
        ;   XREF to: 0041be0f (CONDITIONAL_JUMP)  ; LAB_0041be0f
    PUSH 0x42c80000                     ; 0041c17e
    SUB ESP,0x8                         ; 0041c183
    FLD float ptr [EBX + 0x28]          ; 0041c186
    FSTP double ptr [ESP]               ; 0041c189
    SUB ESP,0x8                         ; 0041c18c
    FLD float ptr [EBX + 0x24]          ; 0041c18f
    FSTP double ptr [ESP]               ; 0041c192
    SUB ESP,0x8                         ; 0041c195
    FLD float ptr [EBX + 0x20]          ; 0041c198
    FSTP double ptr [ESP]               ; 0041c19b
    CALL FUN_00574010                   ; 0041c19e
        ;   XREF to: 00574010 (UNCONDITIONAL_CALL)  ; undefined FUN_00574010()
    ADD ESP,0x1c                        ; 0041c1a3
    TEST EAX,EAX                        ; 0041c1a6
    JZ 0x0041be0f                       ; 0041c1a8
        ;   XREF to: 0041be0f (CONDITIONAL_JUMP)  ; LAB_0041be0f
    MOV EDI,dword ptr [EBX + 0xc278]    ; 0041c1ae
    PUSH EDI                            ; 0041c1b4
    CALL FUN_005735a0                   ; 0041c1b5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005735a0()
    ADD ESP,0x4                         ; 0041c1ba
    TEST EAX,EAX                        ; 0041c1bd
    JNZ 0x0041be07                      ; 0041c1bf
        ;   XREF to: 0041be07 (CONDITIONAL_JUMP)  ; LAB_0041be07
    CALL FUN_00572ac0                   ; 0041c1c5
        ;   XREF to: 00572ac0 (UNCONDITIONAL_CALL)  ; undefined FUN_00572ac0()
    PUSH 0x2                            ; 0041c1ca
    PUSH 0x3f800000                     ; 0041c1cc
    PUSH 0x0                            ; 0041c1d1
    CALL FUN_0040cc00                   ; 0041c1d3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    ADD ESP,0x8                         ; 0041c1d8
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c1db
    SUB ESP,0x8                         ; 0041c1de
    FLD float ptr [EBP + 0x76]          ; 0041c1e1
    FSTP double ptr [ESP]               ; 0041c1e4
    CALL FUN_00572a50                   ; 0041c1e7
        ;   XREF to: 00572a50 (UNCONDITIONAL_CALL)  ; undefined FUN_00572a50()
    ADD ESP,0xc                         ; 0041c1ec
    PUSH 0x5d4731                       ; 0041c1ef | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c1f4
    PUSH EBX                            ; 0041c1fa
    CALL dword ptr [EAX + 0x30]         ; 0041c1fb
    ADD ESP,0x8                         ; 0041c1fe
    MOV dword ptr [EBX + 0xc278],EAX    ; 0041c201
    CALL FUN_00572b40                   ; 0041c207
        ;   XREF to: 00572b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00572b40()
    LEA ESP,[EBP + 0x7a]                ; 0041c20c
    POP EBP                             ; 0041c20f
    POP EDI                             ; 0041c210
    POP ESI                             ; 0041c211
    POP EBX                             ; 0041c212
    RET                                 ; 0041c213
    PUSH 0x1                            ; 0041c214
        ;   Label: LAB_0041c214
    PUSH 0x0                            ; 0041c216
    PUSH ESI                            ; 0041c218
    CALL FUN_005247c0                   ; 0041c219
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c21e
    PUSH EBX                            ; 0041c221
    PUSH 0x5d46d3                       ; 0041c222 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00611100]      ; 0041c227 | PTR_DAT_00611100
    PUSH ESI                            ; 0041c22d | DAT_007db5f0
    CALL FUN_00445430                   ; 0041c22e
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    JMP 0x0041bfc6                      ; 0041c233
        ;   XREF to: 0041bfc6 (UNCONDITIONAL_JUMP)  ; LAB_0041bfc6
    JBE 0x0041bfb6                      ; 0041c238
        ;   XREF to: 0041bfb6 (CONDITIONAL_JUMP)  ; LAB_0041bfb6
        ;   Label: LAB_0041c238
    CMP EAX,0x3                         ; 0041c23e
    JZ 0x0041c214                       ; 0041c241
        ;   XREF to: 0041c214 (CONDITIONAL_JUMP)  ; LAB_0041c214
    PUSH 0x1                            ; 0041c243
        ;   Label: LAB_0041c243
    PUSH 0x0                            ; 0041c245
    JMP 0x0041bfba                      ; 0041c247
        ;   XREF to: 0041bfba (UNCONDITIONAL_JUMP)  ; LAB_0041bfba
    LEA EAX,[EBP + 0xfffffe1a]          ; 0041c24c
        ;   Label: caseD_2
    PUSH EAX                            ; 0041c252
    CALL FUN_0042c010                   ; 0041c253
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0041c258
    PUSH 0x41700000                     ; 0041c25b
    PUSH 0x40e00000                     ; 0041c260
    LEA ESI,[EBP + 0xffffff42]          ; 0041c265
    CALL FUN_0040cc00                   ; 0041c26b
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c270
    ADD ESP,0x8                         ; 0041c273
    LEA EAX,[EBP + 0xfffffe1a]          ; 0041c276
    MOV EDX,dword ptr [0x007c4ff0]      ; 0041c27c | DAT_007c4ff0
    PUSH EAX                            ; 0041c282
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041c283
    MOV dword ptr [EBP + 0xfffffe4e],EBX ; 0041c28a
    SUB EAX,EDX                         ; 0041c290
    MOV dword ptr [EBP + 0xfffffe52],EBX ; 0041c292
    SHL EAX,0x4                         ; 0041c298
    LEA EDX,[EBX + 0xfd8]               ; 0041c29b
    PUSH 0x3ecccccd                     ; 0041c2a1
    ADD EAX,EDX                         ; 0041c2a6
    LEA EDI,[EBP + -0x52]               ; 0041c2a8
    PUSH EAX                            ; 0041c2ab
    FLD float ptr [EBP + 0x76]          ; 0041c2ac
    PUSH 0x2c8af28                      ; 0041c2af | DAT_02c8af28
    FSTP float ptr [EBP + 0xfffffe1e]   ; 0041c2b4
    CALL FUN_005b5080                   ; 0041c2ba
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined FUN_005b5080()
    ADD ESP,0x8                         ; 0041c2bf
    LEA EAX,[EBP + -0x52]               ; 0041c2c2
    LEA ESI,[EBP + 0xffffff42]          ; 0041c2c5
    PUSH EAX                            ; 0041c2cb
    MOVSD ES:EDI,ESI                    ; 0041c2cc
    MOVSD ES:EDI,ESI                    ; 0041c2cd
    MOVSD ES:EDI,ESI                    ; 0041c2ce
    PUSH EBX                            ; 0041c2cf
    LEA ESI,[EBP + 0xffffff72]          ; 0041c2d0
    CALL FUN_00408b40                   ; 0041c2d6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    ADD ESP,0x8                         ; 0041c2db
    LEA EAX,[EBP + -0x6a]               ; 0041c2de
    PUSH EAX                            ; 0041c2e1
    LEA EDI,[EBP + -0x6a]               ; 0041c2e2
    LEA ESI,[EBP + 0xffffff72]          ; 0041c2e5
    PUSH EBX                            ; 0041c2eb
    MOVSD ES:EDI,ESI                    ; 0041c2ec
    MOVSD ES:EDI,ESI                    ; 0041c2ed
    MOVSD ES:EDI,ESI                    ; 0041c2ee
    CALL FUN_004a0770                   ; 0041c2ef
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0770()
    ADD ESP,0x10                        ; 0041c2f4
    JMP 0x0041bfe1                      ; 0041c2f7
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0041c2fc
        ;   Label: caseD_6
    TEST ESI,ESI                        ; 0041c302
    JZ 0x0041bfe1                       ; 0041c304
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH ESI                            ; 0041c30a
    MOV EDX,dword ptr [ESI + 0x154]     ; 0041c30b
    LEA ESI,[EBP + 0xfffffeaa]          ; 0041c311
    LEA EDI,[EBP + 0xfffffe92]          ; 0041c317
    CALL dword ptr [EDX + 0x1c]         ; 0041c31d
    MOV ECX,0x6                         ; 0041c320
    LEA ESI,[EBP + 0xfffffeaa]          ; 0041c325
    MOVSD.REP ES:EDI,ESI                ; 0041c32b
    FLD float ptr [EBP + 0xfffffe92]    ; 0041c32d
    FLD float ptr [EBP + 0xfffffe96]    ; 0041c333
    FLD float ptr [EBP + 0xfffffe9a]    ; 0041c339
    LEA EDI,[EBP + 0xffffff2a]          ; 0041c33f
    LEA ESI,[EBP + 0xffffff12]          ; 0041c345
    FXCH ST2                            ; 0041c34b
    FADD float ptr [EBP + 0xfffffe9e]   ; 0041c34d
    FXCH                                ; 0041c353
    FADD float ptr [EBP + 0xfffffea2]   ; 0041c355
    FXCH ST2                            ; 0041c35b
    FADD float ptr [EBP + 0xfffffea6]   ; 0041c35d
    FXCH                                ; 0041c363
    FSTP float ptr [EBP + 0xffffff12]   ; 0041c365
    FXCH                                ; 0041c36b
    FSTP float ptr [EBP + 0xffffff16]   ; 0041c36d
    FSTP float ptr [EBP + 0xffffff1a]   ; 0041c373
    MOVSD ES:EDI,ESI                    ; 0041c379
    MOVSD ES:EDI,ESI                    ; 0041c37a
    MOVSD ES:EDI,ESI                    ; 0041c37b
    FLD float ptr [0x005d4759]          ; 0041c37c | DAT_005d4759
    FLD float ptr [EBP + 0xffffff2a]    ; 0041c382
    FMUL ST1                            ; 0041c388
    FLD float ptr [EBP + 0xffffff2e]    ; 0041c38a
    FMUL ST2                            ; 0041c390
    FLD float ptr [EBP + 0xffffff32]    ; 0041c392
    FMULP ST3                           ; 0041c398
    LEA EAX,[EBP + 0xe]                 ; 0041c39a
    LEA EDX,[EBP + 0x2]                 ; 0041c39d
    ADD ESP,0x4                         ; 0041c3a0
    LEA EDI,[EBP + 0xe]                 ; 0041c3a3
    LEA ESI,[EBP + -0xa]                ; 0041c3a6
    FXCH                                ; 0041c3a9
    FSTP float ptr [EBP + -0xa]         ; 0041c3ab
    FSTP float ptr [EBP + -0x6]         ; 0041c3ae
    FSTP float ptr [EBP + -0x2]         ; 0041c3b1
    MOVSD ES:EDI,ESI                    ; 0041c3b4
    MOVSD ES:EDI,ESI                    ; 0041c3b5
    MOVSD ES:EDI,ESI                    ; 0041c3b6
    CMP EDX,EAX                         ; 0041c3b7
    JNZ 0x0041c4e3                      ; 0041c3b9
        ;   XREF to: 0041c4e3 (CONDITIONAL_JUMP)  ; LAB_0041c4e3
    LEA EAX,[EBP + -0x5e]               ; 0041c3bf
        ;   Label: LAB_0041c3bf
    LEA EDX,[EBP + 0x2]                 ; 0041c3c2
    CMP EAX,EDX                         ; 0041c3c5
    JZ 0x0041c3db                       ; 0041c3c7
        ;   XREF to: 0041c3db (CONDITIONAL_JUMP)  ; LAB_0041c3db
    MOV EAX,dword ptr [EBP + 0x2]       ; 0041c3c9
    MOV dword ptr [EBP + -0x5e],EAX     ; 0041c3cc
    MOV EAX,dword ptr [EBP + 0x6]       ; 0041c3cf
    MOV dword ptr [EBP + -0x5a],EAX     ; 0041c3d2
    MOV EAX,dword ptr [EBP + 0xa]       ; 0041c3d5
    MOV dword ptr [EBP + -0x56],EAX     ; 0041c3d8
    MOV EAX,dword ptr [EBP + 0xfffffe9a] ; 0041c3db
        ;   Label: LAB_0041c3db
    MOV dword ptr [EBP + -0x56],EAX     ; 0041c3e1
    MOV EAX,dword ptr [EBP + 0xfffffea6] ; 0041c3e4
    MOV dword ptr [EBP + 0xa],EAX       ; 0041c3ea
    LEA EAX,[EBP + -0x5e]               ; 0041c3ed
    PUSH EAX                            ; 0041c3f0
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0041c3f1
    PUSH EDI                            ; 0041c3f7
    LEA ESI,[EBP + 0xffffff1e]          ; 0041c3f8
    CALL FUN_00408b40                   ; 0041c3fe
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA EDI,[EBP + 0xffffff4e]          ; 0041c403
    LEA ESI,[EBP + 0xffffff1e]          ; 0041c409
    LEA EAX,[EBP + 0xffffff4e]          ; 0041c40f
    LEA EDX,[EBP + -0x5e]               ; 0041c415
    ADD ESP,0x8                         ; 0041c418
    MOVSD ES:EDI,ESI                    ; 0041c41b
    MOVSD ES:EDI,ESI                    ; 0041c41c
    MOVSD ES:EDI,ESI                    ; 0041c41d
    CMP EDX,EAX                         ; 0041c41e
    JZ 0x0041c43d                       ; 0041c420
        ;   XREF to: 0041c43d (CONDITIONAL_JUMP)  ; LAB_0041c43d
    MOV EAX,dword ptr [EBP + 0xffffff4e] ; 0041c422
    MOV dword ptr [EBP + -0x5e],EAX     ; 0041c428
    MOV EAX,dword ptr [EBP + 0xffffff52] ; 0041c42b
    MOV dword ptr [EBP + -0x5a],EAX     ; 0041c431
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 0041c434
    MOV dword ptr [EBP + -0x56],EAX     ; 0041c43a
    LEA EAX,[EBP + 0x2]                 ; 0041c43d
        ;   Label: LAB_0041c43d
    PUSH EAX                            ; 0041c440
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0041c441
    PUSH EAX                            ; 0041c447
    LEA ESI,[EBP + 0xfffffee2]          ; 0041c448
    LEA EDI,[EBP + 0xffffff7e]          ; 0041c44e
    CALL FUN_00408b40                   ; 0041c454
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined FUN_00408b40()
    LEA ESI,[EBP + 0xfffffee2]          ; 0041c459
    LEA EAX,[EBP + 0xffffff7e]          ; 0041c45f
    LEA EDX,[EBP + 0x2]                 ; 0041c465
    ADD ESP,0x8                         ; 0041c468
    MOVSD ES:EDI,ESI                    ; 0041c46b
    MOVSD ES:EDI,ESI                    ; 0041c46c
    MOVSD ES:EDI,ESI                    ; 0041c46d
    CMP EDX,EAX                         ; 0041c46e
    JZ 0x0041c487                       ; 0041c470
        ;   XREF to: 0041c487 (CONDITIONAL_JUMP)  ; LAB_0041c487
    MOV EAX,dword ptr [EBP + 0xffffff7e] ; 0041c472
    MOV dword ptr [EBP + 0x2],EAX       ; 0041c478
    MOV EAX,dword ptr [EBP + -0x7e]     ; 0041c47b
    MOV dword ptr [EBP + 0x6],EAX       ; 0041c47e
    MOV EAX,dword ptr [EBP + -0x7a]     ; 0041c481
    MOV dword ptr [EBP + 0xa],EAX       ; 0041c484
    LEA EAX,[EBP + 0xfffffe56]          ; 0041c487
        ;   Label: LAB_0041c487
    PUSH EAX                            ; 0041c48d
    CALL FUN_0042c010                   ; 0041c48e
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; undefined FUN_0042c010()
    ADD ESP,0x4                         ; 0041c493
    PUSH 0x41c80000                     ; 0041c496
    PUSH 0x41700000                     ; 0041c49b
    CALL FUN_0040cc00                   ; 0041c4a0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc00()
    MOV dword ptr [EBP + 0x76],EAX      ; 0041c4a5
    MOV EAX,dword ptr [EBP + 0x76]      ; 0041c4a8
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 0041c4ab
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0041c4b1
    ADD ESP,0x8                         ; 0041c4b7
    MOV dword ptr [EBP + 0xfffffe8a],EAX ; 0041c4ba
    LEA EAX,[EBP + 0xfffffe56]          ; 0041c4c0
    PUSH EAX                            ; 0041c4c6
    LEA EAX,[EBP + 0x2]                 ; 0041c4c7
    PUSH EAX                            ; 0041c4ca
    LEA EAX,[EBP + -0x5e]               ; 0041c4cb
    PUSH EAX                            ; 0041c4ce
    PUSH EBX                            ; 0041c4cf
    MOV dword ptr [EBP + 0xfffffe8e],EBX ; 0041c4d0
    CALL FUN_004a0810                   ; 0041c4d6
        ;   XREF to: 004a0810 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0810()
    ADD ESP,0x10                        ; 0041c4db
    JMP 0x0041bfe1                      ; 0041c4de
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,dword ptr [EBP + 0xe]       ; 0041c4e3
        ;   Label: LAB_0041c4e3
    MOV dword ptr [EBP + 0x2],EAX       ; 0041c4e6
    MOV EAX,dword ptr [EBP + 0x12]      ; 0041c4e9
    MOV dword ptr [EBP + 0x6],EAX       ; 0041c4ec
    MOV EAX,dword ptr [EBP + 0x16]      ; 0041c4ef
    MOV dword ptr [EBP + 0xa],EAX       ; 0041c4f2
    JMP 0x0041c3bf                      ; 0041c4f5
        ;   XREF to: 0041c3bf (UNCONDITIONAL_JUMP)  ; LAB_0041c3bf
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 0041c4fa
        ;   Label: caseD_5
    JNZ 0x0041bfe1                      ; 0041c501
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0xdc],0x0      ; 0041c507
    JNZ 0x0041bfe1                      ; 0041c50e
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0041c514
    JMP 0x0041bfe1                      ; 0041c51e
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041c523
        ;   Label: caseD_0
    PUSH EBX                            ; 0041c529
    CALL FUN_004a0fe0                   ; 0041c52a
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 0041c52f
    TEST EAX,EAX                        ; 0041c532
    JZ 0x0041c548                       ; 0041c534
        ;   XREF to: 0041c548 (CONDITIONAL_JUMP)  ; LAB_0041c548
    PUSH 0x1                            ; 0041c536
    PUSH 0x1                            ; 0041c538
    PUSH ESI                            ; 0041c53a
    CALL FUN_005247c0                   ; 0041c53b
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c540
    JMP 0x0041bfe1                      ; 0041c543
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041c548
        ;   Label: LAB_0041c548
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c54e
    PUSH EBX                            ; 0041c554
    CALL dword ptr [EAX + 0x144]        ; 0041c555
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0041c55b
    ADD ESP,0x8                         ; 0041c561
    TEST ECX,ECX                        ; 0041c564
    JZ 0x0041bfe1                       ; 0041c566
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041c56c
    PUSH 0x1                            ; 0041c56e
    PUSH ESI                            ; 0041c570
    CALL FUN_005247c0                   ; 0041c571
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c576
    JMP 0x0041bfe1                      ; 0041c579
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041c57e
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c584
    PUSH EBX                            ; 0041c58a
    CALL dword ptr [EAX + 0x144]        ; 0041c58b
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0041c591
    ADD ESP,0x8                         ; 0041c597
    TEST EDI,EDI                        ; 0041c59a
    JNZ 0x0041c5c6                      ; 0041c59c
        ;   XREF to: 0041c5c6 (CONDITIONAL_JUMP)  ; LAB_0041c5c6
    PUSH dword ptr [EBP + 0x92]         ; 0041c59e
    PUSH EBX                            ; 0041c5a4
    CALL FUN_004a0fe0                   ; 0041c5a5
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fe0()
    ADD ESP,0x8                         ; 0041c5aa
    TEST EAX,EAX                        ; 0041c5ad
    JNZ 0x0041bfe1                      ; 0041c5af
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041c5b5
    PUSH EDI                            ; 0041c5b7
    PUSH ESI                            ; 0041c5b8
    CALL FUN_005247c0                   ; 0041c5b9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c5be
    JMP 0x0041bfe1                      ; 0041c5c1
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH dword ptr [EBP + 0x92]         ; 0041c5c6
        ;   Label: LAB_0041c5c6
    PUSH EBX                            ; 0041c5cc
    CALL FUN_0041c9a0                   ; 0041c5cd
        ;   XREF to: 0041c9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041c9a0()
    ADD ESP,0x8                         ; 0041c5d2
    TEST EAX,EAX                        ; 0041c5d5
    JNZ 0x0041bfe1                      ; 0041c5d7
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    MOV EAX,[0x005fcc28]                ; 0041c5dd | DAT_005fcc28
    MOV dword ptr [EBP + 0x52],EAX      ; 0041c5e2
    CMP dword ptr [EBX + 0x2628],0x0    ; 0041c5e5
    JZ 0x0041c5f6                       ; 0041c5ec
        ;   XREF to: 0041c5f6 (CONDITIONAL_JUMP)  ; LAB_0041c5f6
    MOV EAX,[0x005fcc2c]                ; 0041c5ee | DAT_005fcc2c
    MOV dword ptr [EBP + 0x52],EAX      ; 0041c5f3
    PUSH 0x3e32b8c2                     ; 0041c5f6
        ;   Label: LAB_0041c5f6
    PUSH 0x3f000000                     ; 0041c5fb
    XOR EDX,EDX                         ; 0041c600
    MOV EAX,dword ptr [EBP + 0x52]      ; 0041c602
    MOV dword ptr [EBP + 0xffffff36],EDX ; 0041c605
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 0041c60b
    LEA EAX,[EBP + 0xffffff36]          ; 0041c611
    MOV dword ptr [EBP + 0xffffff3a],EDX ; 0041c617
    PUSH EAX                            ; 0041c61d
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0041c61e
    PUSH EAX                            ; 0041c624
    MOV EDX,dword ptr [EAX + 0x154]     ; 0041c625
    CALL dword ptr [EDX + 0xc4]         ; 0041c62b
    ADD ESP,0x4                         ; 0041c631
    PUSH EAX                            ; 0041c634
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0041c635
    ADD EAX,0x20                        ; 0041c63b
    PUSH EAX                            ; 0041c63e
    PUSH EBX                            ; 0041c63f
    CALL FUN_0042ccf0                   ; 0041c640
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0042ccf0()
    ADD ESP,0x18                        ; 0041c645
    LEA ESI,[EBX + 0x158]               ; 0041c648
    TEST EAX,EAX                        ; 0041c64e
    JL 0x0041c6df                       ; 0041c650
        ;   XREF to: 0041c6df (CONDITIONAL_JUMP)  ; LAB_0041c6df
    LEA EDX,[EBX + 0x20]                ; 0041c656
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0041c659
    FLD float ptr [EDX]                 ; 0041c65f
    FSUB float ptr [EAX + 0x20]         ; 0041c661
    FMUL ST0                            ; 0041c664
    FLD float ptr [EDX + 0x8]           ; 0041c666
    FSUB float ptr [EAX + 0x28]         ; 0041c669
    FMUL ST0                            ; 0041c66c
    FADDP                               ; 0041c66e
    FSQRT                               ; 0041c670
    FLD float ptr [EBP + 0x52]          ; 0041c672
    FADD double ptr [0x005d4749]        ; 0041c675 | DAT_005d4749
    FCOMPP                              ; 0041c67b
    FNSTSW AX                           ; 0041c67d
    SAHF                                ; 0041c67f
    JC 0x0041bfe1                       ; 0041c680
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    FLD float ptr [EBX + 0xc1e4]        ; 0041c686
    FLDZ                                ; 0041c68c
    FCOMPP                              ; 0041c68e
    FNSTSW AX                           ; 0041c690
    SAHF                                ; 0041c692
    JC 0x0041bfe1                       ; 0041c693
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    CMP dword ptr [EBX + 0x2628],0x0    ; 0041c699
    JNZ 0x0041c706                      ; 0041c6a0
        ;   XREF to: 0041c706 (CONDITIONAL_JUMP)  ; LAB_0041c706
    PUSH 0x1                            ; 0041c6a2
    PUSH 0x2                            ; 0041c6a4
    PUSH ESI                            ; 0041c6a6
        ;   Label: LAB_0041c6a6
    CALL FUN_005247c0                   ; 0041c6a7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c6ac
    MOV EAX,dword ptr [EBX + 0xc278]    ; 0041c6af
    PUSH EAX                            ; 0041c6b5
    CALL FUN_00573a80                   ; 0041c6b6
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a80()
    ADD ESP,0x4                         ; 0041c6bb
    PUSH 0x5d471e                       ; 0041c6be | = "boneguy-swing?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0041c6c3
    PUSH EBX                            ; 0041c6c9
    CALL dword ptr [EAX + 0x2c]         ; 0041c6ca
    ADD ESP,0x8                         ; 0041c6cd
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 0041c6d0
    JMP 0x0041bfe1                      ; 0041c6da
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH EBX                            ; 0041c6df
        ;   Label: LAB_0041c6df
    PUSH 0x5d46fd                       ; 0041c6e0 | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x00611100]      ; 0041c6e5 | PTR_DAT_00611100
    PUSH EDX                            ; 0041c6eb | DAT_007db5f0
    CALL FUN_00445430                   ; 0041c6ec
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; undefined FUN_00445430()
    ADD ESP,0xc                         ; 0041c6f1
    PUSH 0x1                            ; 0041c6f4
    PUSH 0x0                            ; 0041c6f6
    PUSH ESI                            ; 0041c6f8
    CALL FUN_005247c0                   ; 0041c6f9
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005247c0()
    ADD ESP,0xc                         ; 0041c6fe
    JMP 0x0041bfe1                      ; 0041c701
        ;   XREF to: 0041bfe1 (UNCONDITIONAL_JUMP)  ; caseD_4
    PUSH 0x1                            ; 0041c706
        ;   Label: LAB_0041c706
    PUSH 0x6                            ; 0041c708
    JMP 0x0041c6a6                      ; 0041c70a
        ;   XREF to: 0041c6a6 (UNCONDITIONAL_JUMP)  ; LAB_0041c6a6
    CMP EDI,0x6                         ; 0041c70c
        ;   Label: LAB_0041c70c
    JA 0x0041bfe1                       ; 0041c70f
        ;   XREF to: 0041bfe1 (CONDITIONAL_JUMP)  ; caseD_4
    JMP dword ptr [EDI*0x4 + 0x41bb20]  ; 0041c715 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

