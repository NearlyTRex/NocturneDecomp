; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_curtain_cpp_CCurtain_solveConstraints_FUN_0044ac10(CCurtain *this_ptr,SCurtainVertex *vertex)
;
; Parameters:
; CCurtain *       Stack[0x4]:4   this_ptr
; SCurtainVertex * Stack[0x8]:4   vertex
;
; XREF[1]:
;   core_curtain.cpp_CCurtain_process_FUN_0044b6f0 at 0044beff
;
; Referenced Globals:
;   undefined4 DAT_005d7402
;   undefined4 DAT_005d740a
;   undefined4 DAT_007dc718
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044ac10
        ;   Label: core_curtain.cpp_CCurtain_solveConstraints_FUN_0044ac10
    PUSH ESI                            ; 0044ac11
    PUSH EDI                            ; 0044ac12
    PUSH EBP                            ; 0044ac13
    MOV EBP,ESP                         ; 0044ac14
    SUB ESP,0x1f0                       ; 0044ac16
    AND ESP,0xfffffff8                  ; 0044ac1c
    MOV ECX,dword ptr [EBP + 0x18]      ; 0044ac1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ac22
    CMP dword ptr [EAX + 0x65b2c],0x0   ; 0044ac25
    JZ 0x0044ac64                       ; 0044ac2c
        ;   XREF to: 0044ac64 (CONDITIONAL_JUMP)  ; LAB_0044ac64
    FLD float ptr [ECX + 0x24]          ; 0044ac2e
    FCOMP float ptr [EAX + 0x65b28]     ; 0044ac31
    FNSTSW AX                           ; 0044ac37
    SAHF                                ; 0044ac39
    JNC 0x0044ac64                      ; 0044ac3a
        ;   XREF to: 0044ac64 (CONDITIONAL_JUMP)  ; LAB_0044ac64
    LEA EAX,[ECX + 0x2c]                ; 0044ac3c
    MOV dword ptr [EAX + 0x8],0x0       ; 0044ac3f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044ac46
    MOV dword ptr [EAX + 0x4],EDX       ; 0044ac49
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044ac4c
    MOV dword ptr [EAX],EDX             ; 0044ac4f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ac51
    MOV EDX,dword ptr [EAX + 0x65b28]   ; 0044ac54
    MOV dword ptr [ECX + 0x24],EDX      ; 0044ac5a
    MOV dword ptr [ECX + 0x6c],0x1      ; 0044ac5d
    XOR EBX,EBX                         ; 0044ac64
        ;   Label: LAB_0044ac64
    MOV ESI,dword ptr [0x007dc718]      ; 0044ac66 | DAT_007dc718
    MOV dword ptr [ESP + 0x1e4],EBX     ; 0044ac6c
    TEST ESI,ESI                        ; 0044ac73
    JLE 0x0044adee                      ; 0044ac75
        ;   XREF to: 0044adee (CONDITIONAL_JUMP)  ; LAB_0044adee
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ac7b
    LEA EDX,[ECX + 0x20]                ; 0044ac7e
    ADD EAX,0x1c728                     ; 0044ac81
    XOR ESI,ESI                         ; 0044ac86
    MOV dword ptr [ESP + 0x1d4],EAX     ; 0044ac88
    MOV EAX,0x7dcbcc                    ; 0044ac8f
    LEA EBX,[ECX + 0x2c]                ; 0044ac94
    ADD EAX,0x1c                        ; 0044ac97
    MOV dword ptr [ESP + 0x1d8],ESI     ; 0044ac9a
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0044aca1
    LEA EDI,[ESP + 0x94]                ; 0044aca8
        ;   Label: LAB_0044aca8
    LEA ESI,[ECX + 0x2c]                ; 0044acaf
    MOVSD ES:EDI,ESI                    ; 0044acb2
    MOVSD ES:EDI,ESI                    ; 0044acb3
    MOVSD ES:EDI,ESI                    ; 0044acb4
    FLD float ptr [ESP + 0x98]          ; 0044acb5
    FMUL ST0                            ; 0044acbc
    FLD float ptr [ESP + 0x94]          ; 0044acbe
    FMUL ST0                            ; 0044acc5
    FADDP                               ; 0044acc7
    FLD float ptr [ESP + 0x9c]          ; 0044acc9
    FMUL ST0                            ; 0044acd0
    FADDP                               ; 0044acd2
    FSQRT                               ; 0044acd4
    FLDZ                                ; 0044acd6
    FXCH                                ; 0044acd8
    FSTP float ptr [ESP + 0x19c]        ; 0044acda
    FCOMP float ptr [ESP + 0x19c]       ; 0044ace1
    FNSTSW AX                           ; 0044ace8
    SAHF                                ; 0044acea
    FLD float ptr [ECX + 0x30]          ; 0044aceb
    FCOMP double ptr [0x005d7402]       ; 0044acee | DAT_005d7402
    FNSTSW AX                           ; 0044acf4
    SAHF                                ; 0044acf6
    JNC 0x0044b217                      ; 0044acf7
        ;   XREF to: 0044b217 (CONDITIONAL_JUMP)  ; LAB_0044b217
    IMUL ESI,dword ptr [ESP + 0x1e4],0x28 ; 0044acfd
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044ad05
    FLD float ptr [EAX + 0x7dc720]      ; 0044ad0c
    FADD float ptr [ESI + 0x7dcbe4]     ; 0044ad12
    FLD float ptr [ECX + 0x24]          ; 0044ad18
    FXCH                                ; 0044ad1b
    FSTP float ptr [ESP + 0x1e8]        ; 0044ad1d
    FCOMP float ptr [ESP + 0x1e8]       ; 0044ad24
    FNSTSW AX                           ; 0044ad2b
    SAHF                                ; 0044ad2d
    JNC 0x0044b217                      ; 0044ad2e
        ;   XREF to: 0044b217 (CONDITIONAL_JUMP)  ; LAB_0044b217
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044ad34
    FLD float ptr [ECX + 0x24]          ; 0044ad3b
    FCOMP float ptr [EAX + 0x7dc720]    ; 0044ad3e
    FNSTSW AX                           ; 0044ad44
    SAHF                                ; 0044ad46
    JBE 0x0044b217                      ; 0044ad47
        ;   XREF to: 0044b217 (CONDITIONAL_JUMP)  ; LAB_0044b217
    FLD float ptr [ECX + 0x20]          ; 0044ad4d
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044ad50
    FLD float ptr [ECX + 0x28]          ; 0044ad57
    FXCH                                ; 0044ad5a
    FSUB float ptr [EAX + 0x7dc71c]     ; 0044ad5c
    FXCH                                ; 0044ad62
    FSUB float ptr [EAX + 0x7dc724]     ; 0044ad64
    FXCH                                ; 0044ad6a
    FST float ptr [ESP + 0x1c]          ; 0044ad6c
    FMUL float ptr [ESP + 0x1c]         ; 0044ad70
    FXCH                                ; 0044ad74
    FST float ptr [ESP + 0x24]          ; 0044ad76
    FMUL float ptr [ESP + 0x24]         ; 0044ad7a
    XOR EAX,EAX                         ; 0044ad7e
    FADDP                               ; 0044ad80
    MOV dword ptr [ESP + 0x20],EAX      ; 0044ad82
    FSQRT                               ; 0044ad86
    FCOMP float ptr [ESI + 0x7dcbe8]    ; 0044ad88
    FNSTSW AX                           ; 0044ad8e
    SAHF                                ; 0044ad90
    JNC 0x0044b217                      ; 0044ad91
        ;   XREF to: 0044b217 (CONDITIONAL_JUMP)  ; LAB_0044b217
    MOV dword ptr [ECX + 0x30],0x0      ; 0044ad97
    MOV EAX,dword ptr [ESP + 0x1e8]     ; 0044ad9e
    MOV dword ptr [ECX + 0x6c],0x1      ; 0044ada5
    MOV dword ptr [ECX + 0x24],EAX      ; 0044adac
    MOV EDI,dword ptr [ESP + 0x1d8]     ; 0044adaf
        ;   Label: LAB_0044adaf
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0044adb6
    MOV ESI,dword ptr [ESP + 0x1e4]     ; 0044adbd
    ADD EDI,0xc                         ; 0044adc4
    ADD EAX,0x28                        ; 0044adc7
    INC ESI                             ; 0044adca
    MOV dword ptr [ESP + 0x1d8],EDI     ; 0044adcb
    MOV dword ptr [ESP + 0x1cc],EAX     ; 0044add2
    MOV EDI,dword ptr [0x007dc718]      ; 0044add9 | DAT_007dc718
    MOV dword ptr [ESP + 0x1e4],ESI     ; 0044addf
    CMP ESI,EDI                         ; 0044ade6
    JL 0x0044aca8                       ; 0044ade8
        ;   XREF to: 0044aca8 (CONDITIONAL_JUMP)  ; LAB_0044aca8
    XOR EAX,EAX                         ; 0044adee
        ;   Label: LAB_0044adee
    MOV EDX,dword ptr [ECX + 0x44]      ; 0044adf0
    MOV dword ptr [ESP + 0x1ec],EAX     ; 0044adf3
    TEST EDX,EDX                        ; 0044adfa
    JLE 0x0044b210                      ; 0044adfc
        ;   XREF to: 0044b210 (CONDITIONAL_JUMP)  ; LAB_0044b210
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae02
    ADD EAX,0x65b1c                     ; 0044ae05
    MOV dword ptr [ESP + 0x1a8],EAX     ; 0044ae0a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae11
    ADD EAX,0x1c728                     ; 0044ae14
    LEA EDX,[ECX + 0x20]                ; 0044ae19
    MOV dword ptr [ESP + 0x1d0],EAX     ; 0044ae1c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0044ae23
    LEA EBX,[ECX + 0x2c]                ; 0044ae26
    ADD EAX,0x208                       ; 0044ae29
    MOV dword ptr [ESP + 0x1bc],ECX     ; 0044ae2e
    MOV dword ptr [ESP + 0x1dc],EAX     ; 0044ae35
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0044ae3c
        ;   Label: LAB_0044ae3c
    IMUL EAX,dword ptr [EAX + 0x48],0x74 ; 0044ae43
    FLD float ptr [EDX]                 ; 0044ae47
    FLD float ptr [EDX + 0x4]           ; 0044ae49
    MOV ESI,dword ptr [ESP + 0x1dc]     ; 0044ae4c
    FLD float ptr [EDX + 0x8]           ; 0044ae53
    ADD EAX,ESI                         ; 0044ae56
    LEA EDI,[ESP + 0xb8]                ; 0044ae58
    LEA ESI,[ESP + 0x58]                ; 0044ae5f
    FXCH ST2                            ; 0044ae63
    FSUB float ptr [EAX + 0x20]         ; 0044ae65
    FXCH                                ; 0044ae68
    FSUB float ptr [EAX + 0x24]         ; 0044ae6a
    FXCH ST2                            ; 0044ae6d
    FSUB float ptr [EAX + 0x28]         ; 0044ae6f
    FXCH                                ; 0044ae72
    FSTP float ptr [ESP + 0x58]         ; 0044ae74
    FXCH                                ; 0044ae78
    FSTP float ptr [ESP + 0x5c]         ; 0044ae7a
    FSTP float ptr [ESP + 0x60]         ; 0044ae7e
    MOVSD ES:EDI,ESI                    ; 0044ae82
    MOVSD ES:EDI,ESI                    ; 0044ae83
    MOVSD ES:EDI,ESI                    ; 0044ae84
    LEA EAX,[ESP + 0xb8]                ; 0044ae85
    LEA ESI,[ESP + 0x16c]               ; 0044ae8c
    CMP ESI,EAX                         ; 0044ae93
    JNZ 0x0044b6b8                      ; 0044ae95
        ;   XREF to: 0044b6b8 (CONDITIONAL_JUMP)  ; LAB_0044b6b8
    FLD float ptr [ESP + 0x170]         ; 0044ae9b
        ;   Label: LAB_0044ae9b
    FMUL ST0                            ; 0044aea2
    FLD float ptr [ESP + 0x16c]         ; 0044aea4
    FMUL ST0                            ; 0044aeab
    FADDP                               ; 0044aead
    FLD float ptr [ESP + 0x174]         ; 0044aeaf
    FMUL ST0                            ; 0044aeb6
    FADDP                               ; 0044aeb8
    FSQRT                               ; 0044aeba
    FSTP float ptr [ESP + 0x1c0]        ; 0044aebc
    MOV EAX,dword ptr [ESP + 0x1c0]     ; 0044aec3
    MOV dword ptr [ESP],EAX             ; 0044aeca
    MOV EAX,dword ptr [ESP + 0x1bc]     ; 0044aecd
    MOV EAX,dword ptr [EAX + 0x58]      ; 0044aed4
    MOV dword ptr [ESP + 0x1c4],EAX     ; 0044aed7
    FLD float ptr [ESP + 0x1c0]         ; 0044aede
    FCOMP float ptr [ESP + 0x1c4]       ; 0044aee5
    FNSTSW AX                           ; 0044aeec
    SAHF                                ; 0044aeee
    JBE 0x0044b030                      ; 0044aeef
        ;   XREF to: 0044b030 (CONDITIONAL_JUMP)  ; LAB_0044b030
    FLD float ptr [ESP + 0x1c0]         ; 0044aef5
    FLD ST0                             ; 0044aefc
    FSUB float ptr [ESP + 0x1c4]        ; 0044aefe
    FLD float ptr [ESP + 0x16c]         ; 0044af05
    FXCH                                ; 0044af0c
    FSTP float ptr [ESP + 0x1b0]        ; 0044af0e
    FMUL float ptr [ESP + 0x1b0]        ; 0044af15
    FLD float ptr [ESP + 0x170]         ; 0044af1c
    FMUL float ptr [ESP + 0x1b0]        ; 0044af23
    FLD float ptr [ESP + 0x174]         ; 0044af2a
    FMUL float ptr [ESP + 0x1b0]        ; 0044af31
    LEA EDI,[ESP + 0x40]                ; 0044af38
    LEA ESI,[ESP + 0x160]               ; 0044af3c
    FXCH ST2                            ; 0044af43
    FSTP float ptr [ESP + 0x160]        ; 0044af45
    FSTP float ptr [ESP + 0x164]        ; 0044af4c
    FSTP float ptr [ESP + 0x168]        ; 0044af53
    MOVSD ES:EDI,ESI                    ; 0044af5a
    MOVSD ES:EDI,ESI                    ; 0044af5b
    MOVSD ES:EDI,ESI                    ; 0044af5c
    FLD1                                ; 0044af5d
    FLD float ptr [ESP + 0x40]          ; 0044af5f
    FXCH                                ; 0044af63
    FDIVRP ST2,ST0                      ; 0044af65
    FMUL ST1                            ; 0044af67
    FLD float ptr [ESP + 0x44]          ; 0044af69
    FMUL ST2                            ; 0044af6d
    FLD float ptr [ESP + 0x48]          ; 0044af6f
    FMULP ST3                           ; 0044af73
    LEA EDI,[ESP + 0x70]                ; 0044af75
    LEA ESI,[ESP + 0xe8]                ; 0044af79
    FXCH                                ; 0044af80
    FSTP float ptr [ESP + 0xe8]         ; 0044af82
    FSTP float ptr [ESP + 0xec]         ; 0044af89
    FSTP float ptr [ESP + 0xf0]         ; 0044af90
    MOVSD ES:EDI,ESI                    ; 0044af97
    MOVSD ES:EDI,ESI                    ; 0044af98
    MOVSD ES:EDI,ESI                    ; 0044af99
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0044af9a
    FLD float ptr [ESP + 0x70]          ; 0044afa1
    FLD float ptr [EDX]                 ; 0044afa5
    FLD float ptr [EDX + 0x4]           ; 0044afa7
    FLD float ptr [EDX + 0x8]           ; 0044afaa
    FXCH ST2                            ; 0044afad
    FSUB float ptr [ESP + 0x70]         ; 0044afaf
    FXCH                                ; 0044afb3
    FSUB float ptr [ESP + 0x74]         ; 0044afb5
    FXCH ST2                            ; 0044afb9
    FSUB float ptr [ESP + 0x78]         ; 0044afbb
    FXCH                                ; 0044afbf
    FSTP float ptr [EDX]                ; 0044afc1
    FXCH                                ; 0044afc3
    FSTP float ptr [EDX + 0x4]          ; 0044afc5
    FSTP float ptr [EDX + 0x8]          ; 0044afc8
    FMUL float ptr [EAX]                ; 0044afcb
    FLD float ptr [ESP + 0x74]          ; 0044afcd
    FMUL float ptr [EAX]                ; 0044afd1
    FLD float ptr [ESP + 0x78]          ; 0044afd3
    FMUL float ptr [EAX]                ; 0044afd7
    LEA EDI,[ESP + 0x184]               ; 0044afd9
    LEA ESI,[ESP + 0xd0]                ; 0044afe0
    FXCH ST2                            ; 0044afe7
    FSTP float ptr [ESP + 0xd0]         ; 0044afe9
    FSTP float ptr [ESP + 0xd4]         ; 0044aff0
    FSTP float ptr [ESP + 0xd8]         ; 0044aff7
    MOVSD ES:EDI,ESI                    ; 0044affe
    MOVSD ES:EDI,ESI                    ; 0044afff
    MOVSD ES:EDI,ESI                    ; 0044b000
    FLD float ptr [EBX]                 ; 0044b001
    FLD float ptr [EBX + 0x4]           ; 0044b003
    FLD float ptr [EBX + 0x8]           ; 0044b006
    FXCH ST2                            ; 0044b009
    FSUB float ptr [ESP + 0x184]        ; 0044b00b
    FXCH                                ; 0044b012
    FSUB float ptr [ESP + 0x188]        ; 0044b014
    FXCH ST2                            ; 0044b01b
    FSUB float ptr [ESP + 0x18c]        ; 0044b01d
    FXCH                                ; 0044b024
    FSTP float ptr [EBX]                ; 0044b026
    FXCH                                ; 0044b028
    FSTP float ptr [EBX + 0x4]          ; 0044b02a
    FSTP float ptr [EBX + 0x8]          ; 0044b02d
    FLD float ptr [ESP]                 ; 0044b030
        ;   Label: LAB_0044b030
    FCOMP float ptr [ESP + 0x1c4]       ; 0044b033
    FNSTSW AX                           ; 0044b03a
    SAHF                                ; 0044b03c
    JNC 0x0044b1e5                      ; 0044b03d
        ;   XREF to: 0044b1e5 (CONDITIONAL_JUMP)  ; LAB_0044b1e5
    FLD float ptr [ESP]                 ; 0044b043
    FCOMP double ptr [0x005d740a]       ; 0044b046 | DAT_005d740a
    FNSTSW AX                           ; 0044b04c
    SAHF                                ; 0044b04e
    JBE 0x0044b1e5                      ; 0044b04f
        ;   XREF to: 0044b1e5 (CONDITIONAL_JUMP)  ; LAB_0044b1e5
    FLD float ptr [ESP]                 ; 0044b055
    FLD float ptr [ESP + 0x1c4]         ; 0044b058
    FSUB ST0,ST1                        ; 0044b05f
    FLD float ptr [ESP + 0x16c]         ; 0044b061
    FXCH                                ; 0044b068
    FSTP float ptr [ESP + 0x1b4]        ; 0044b06a
    FMUL float ptr [ESP + 0x1b4]        ; 0044b071
    FLD float ptr [ESP + 0x170]         ; 0044b078
    FMUL float ptr [ESP + 0x1b4]        ; 0044b07f
    FLD float ptr [ESP + 0x174]         ; 0044b086
    FMUL float ptr [ESP + 0x1b4]        ; 0044b08d
    LEA EDI,[ESP + 0xc4]                ; 0044b094
    LEA ESI,[ESP + 0x7c]                ; 0044b09b
    FXCH ST2                            ; 0044b09f
    FSTP float ptr [ESP + 0x7c]         ; 0044b0a1
    FSTP float ptr [ESP + 0x80]         ; 0044b0a5
    FSTP float ptr [ESP + 0x84]         ; 0044b0ac
    MOVSD ES:EDI,ESI                    ; 0044b0b3
    MOVSD ES:EDI,ESI                    ; 0044b0b4
    MOVSD ES:EDI,ESI                    ; 0044b0b5
    FLD1                                ; 0044b0b6
    FLD float ptr [ESP + 0xc4]          ; 0044b0b8
    FXCH                                ; 0044b0bf
    FDIVRP ST2,ST0                      ; 0044b0c1
    FMUL ST1                            ; 0044b0c3
    FLD float ptr [ESP + 0xc8]          ; 0044b0c5
    FMUL ST2                            ; 0044b0cc
    FLD float ptr [ESP + 0xcc]          ; 0044b0ce
    FMULP ST3                           ; 0044b0d5
    LEA EDI,[ESP + 0x13c]               ; 0044b0d7
    LEA ESI,[ESP + 0xa0]                ; 0044b0de
    FXCH                                ; 0044b0e5
    FSTP float ptr [ESP + 0xa0]         ; 0044b0e7
    FSTP float ptr [ESP + 0xa4]         ; 0044b0ee
    FSTP float ptr [ESP + 0xa8]         ; 0044b0f5
    MOVSD ES:EDI,ESI                    ; 0044b0fc
    MOVSD ES:EDI,ESI                    ; 0044b0fd
    MOVSD ES:EDI,ESI                    ; 0044b0fe
    MOV EAX,dword ptr [ESP + 0x1a8]     ; 0044b0ff
    FLD float ptr [ESP + 0x13c]         ; 0044b106
    FMUL float ptr [EAX]                ; 0044b10d
    FLD float ptr [ESP + 0x140]         ; 0044b10f
    FMUL float ptr [EAX]                ; 0044b116
    FLD float ptr [ESP + 0x144]         ; 0044b118
    FMUL float ptr [EAX]                ; 0044b11f
    LEA EDI,[ESP + 0x154]               ; 0044b121
    LEA ESI,[ESP + 0x4c]                ; 0044b128
    FXCH ST2                            ; 0044b12c
    FSTP float ptr [ESP + 0x4c]         ; 0044b12e
    FSTP float ptr [ESP + 0x50]         ; 0044b132
    FSTP float ptr [ESP + 0x54]         ; 0044b136
    MOVSD ES:EDI,ESI                    ; 0044b13a
    MOVSD ES:EDI,ESI                    ; 0044b13b
    MOVSD ES:EDI,ESI                    ; 0044b13c
    MOV EAX,dword ptr [ESP + 0x1d0]     ; 0044b13d
    FLD float ptr [ESP + 0x154]         ; 0044b144
    FLD float ptr [EDX]                 ; 0044b14b
    FLD float ptr [EDX + 0x4]           ; 0044b14d
    FLD float ptr [EDX + 0x8]           ; 0044b150
    FXCH ST2                            ; 0044b153
    FADD float ptr [ESP + 0x154]        ; 0044b155
    FXCH                                ; 0044b15c
    FADD float ptr [ESP + 0x158]        ; 0044b15e
    FXCH ST2                            ; 0044b165
    FADD float ptr [ESP + 0x15c]        ; 0044b167
    FXCH                                ; 0044b16e
    FSTP float ptr [EDX]                ; 0044b170
    FXCH                                ; 0044b172
    FSTP float ptr [EDX + 0x4]          ; 0044b174
    FSTP float ptr [EDX + 0x8]          ; 0044b177
    FMUL float ptr [EAX]                ; 0044b17a
    FLD float ptr [ESP + 0x158]         ; 0044b17c
    FMUL float ptr [EAX]                ; 0044b183
    FLD float ptr [ESP + 0x15c]         ; 0044b185
    FMUL float ptr [EAX]                ; 0044b18c
    LEA EDI,[ESP + 0xac]                ; 0044b18e
    LEA ESI,[ESP + 0xdc]                ; 0044b195
    FXCH ST2                            ; 0044b19c
    FSTP float ptr [ESP + 0xdc]         ; 0044b19e
    FSTP float ptr [ESP + 0xe0]         ; 0044b1a5
    FSTP float ptr [ESP + 0xe4]         ; 0044b1ac
    MOVSD ES:EDI,ESI                    ; 0044b1b3
    MOVSD ES:EDI,ESI                    ; 0044b1b4
    MOVSD ES:EDI,ESI                    ; 0044b1b5
    FLD float ptr [EBX]                 ; 0044b1b6
    FLD float ptr [EBX + 0x4]           ; 0044b1b8
    FLD float ptr [EBX + 0x8]           ; 0044b1bb
    FXCH ST2                            ; 0044b1be
    FADD float ptr [ESP + 0xac]         ; 0044b1c0
    FXCH                                ; 0044b1c7
    FADD float ptr [ESP + 0xb0]         ; 0044b1c9
    FXCH ST2                            ; 0044b1d0
    FADD float ptr [ESP + 0xb4]         ; 0044b1d2
    FXCH                                ; 0044b1d9
    FSTP float ptr [EBX]                ; 0044b1db
    FXCH                                ; 0044b1dd
    FSTP float ptr [EBX + 0x4]          ; 0044b1df
    FSTP float ptr [EBX + 0x8]          ; 0044b1e2
    MOV ESI,dword ptr [ESP + 0x1bc]     ; 0044b1e5
        ;   Label: LAB_0044b1e5
    MOV EDI,dword ptr [ESP + 0x1ec]     ; 0044b1ec
    ADD ESI,0x4                         ; 0044b1f3
    INC EDI                             ; 0044b1f6
    MOV dword ptr [ESP + 0x1bc],ESI     ; 0044b1f7
    MOV ESI,dword ptr [ECX + 0x44]      ; 0044b1fe
    MOV dword ptr [ESP + 0x1ec],EDI     ; 0044b201
    CMP EDI,ESI                         ; 0044b208
    JL 0x0044ae3c                       ; 0044b20a
        ;   XREF to: 0044ae3c (CONDITIONAL_JUMP)  ; LAB_0044ae3c
    MOV ESP,EBP                         ; 0044b210
        ;   Label: LAB_0044b210
    POP EBP                             ; 0044b212
    POP EDI                             ; 0044b213
    POP ESI                             ; 0044b214
    POP EBX                             ; 0044b215
    RET                                 ; 0044b216
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b217
        ;   Label: LAB_0044b217
    FLD float ptr [ECX + 0x24]          ; 0044b21e
    FCOMP float ptr [EAX + 0x7dc720]    ; 0044b221
    FNSTSW AX                           ; 0044b227
    SAHF                                ; 0044b229
    JC 0x0044adaf                       ; 0044b22a
        ;   XREF to: 0044adaf (CONDITIONAL_JUMP)  ; LAB_0044adaf
    IMUL ESI,dword ptr [ESP + 0x1e4],0x28 ; 0044b230
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b238
    FLD float ptr [EAX + 0x7dc720]      ; 0044b23f
    FADD float ptr [ESI + 0x7dcbe4]     ; 0044b245
    FLD float ptr [ECX + 0x24]          ; 0044b24b
    FXCH                                ; 0044b24e
    FSTP float ptr [ESP + 0x1c8]        ; 0044b250
    FCOMP float ptr [ESP + 0x1c8]       ; 0044b257
    FNSTSW AX                           ; 0044b25e
    SAHF                                ; 0044b260
    JA 0x0044adaf                       ; 0044b261
        ;   XREF to: 0044adaf (CONDITIONAL_JUMP)  ; LAB_0044adaf
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b267
    FLD float ptr [ECX + 0x20]          ; 0044b26e
    FSUB float ptr [EAX + 0x7dc71c]     ; 0044b271
    FST float ptr [ESP + 0x124]         ; 0044b277
    FLD float ptr [ECX + 0x28]          ; 0044b27e
    FSUB float ptr [EAX + 0x7dc724]     ; 0044b281
    FXCH                                ; 0044b287
    FMUL float ptr [ESP + 0x124]        ; 0044b289
    FXCH                                ; 0044b290
    FST float ptr [ESP + 0x12c]         ; 0044b292
    FMUL float ptr [ESP + 0x12c]        ; 0044b299
    FXCH                                ; 0044b2a0
    XOR EAX,EAX                         ; 0044b2a2
    FXCH                                ; 0044b2a4
    FSTP float ptr [ESP + 0x1e0]        ; 0044b2a6
    FADD float ptr [ESP + 0x1e0]        ; 0044b2ad
    MOV dword ptr [ESP + 0x128],EAX     ; 0044b2b4
    FSQRT                               ; 0044b2bb
    FST float ptr [ESP + 0x1b8]         ; 0044b2bd
    FCOMP float ptr [ESI + 0x7dcbe8]    ; 0044b2c4
    FNSTSW AX                           ; 0044b2ca
    SAHF                                ; 0044b2cc
    JA 0x0044adaf                       ; 0044b2cd
        ;   XREF to: 0044adaf (CONDITIONAL_JUMP)  ; LAB_0044adaf
    FLD float ptr [ECX + 0x3c]          ; 0044b2d3
    FCOMP float ptr [ESP + 0x1c8]       ; 0044b2d6
    FNSTSW AX                           ; 0044b2dd
    SAHF                                ; 0044b2df
    JC 0x0044b3d2                       ; 0044b2e0
        ;   XREF to: 0044b3d2 (CONDITIONAL_JUMP)  ; LAB_0044b3d2
    LEA EDI,[ESP + 0x100]               ; 0044b2e6
    LEA ESI,[ECX + 0x20]                ; 0044b2ed
    FLD float ptr [ESP + 0x1c8]         ; 0044b2f0
    MOVSD ES:EDI,ESI                    ; 0044b2f7
    MOVSD ES:EDI,ESI                    ; 0044b2f8
    MOVSD ES:EDI,ESI                    ; 0044b2f9
    MOV EAX,dword ptr [ESP + 0x1c8]     ; 0044b2fa
    FLD float ptr [ESP + 0x100]         ; 0044b301
    FLD float ptr [ESP + 0x108]         ; 0044b308
    LEA EDI,[ESP + 0x34]                ; 0044b30f
    MOV dword ptr [ESP + 0x104],EAX     ; 0044b313
    LEA ESI,[ESP + 0x10c]               ; 0044b31a
    FXCH                                ; 0044b321
    FSUB float ptr [EDX]                ; 0044b323
    FXCH ST2                            ; 0044b325
    FSUB float ptr [EDX + 0x4]          ; 0044b327
    FXCH                                ; 0044b32a
    FSUB float ptr [EDX + 0x8]          ; 0044b32c
    FXCH ST2                            ; 0044b32f
    FSTP float ptr [ESP + 0x10c]        ; 0044b331
    FSTP float ptr [ESP + 0x110]        ; 0044b338
    FSTP float ptr [ESP + 0x114]        ; 0044b33f
    MOVSD ES:EDI,ESI                    ; 0044b346
    MOVSD ES:EDI,ESI                    ; 0044b347
    MOVSD ES:EDI,ESI                    ; 0044b348
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0044b349
    FLD float ptr [ESP + 0x34]          ; 0044b350
    FMUL float ptr [EAX]                ; 0044b354
    FLD float ptr [ESP + 0x38]          ; 0044b356
    FMUL float ptr [EAX]                ; 0044b35a
    FLD float ptr [ESP + 0x3c]          ; 0044b35c
    FMUL float ptr [EAX]                ; 0044b360
    LEA EDI,[ESP + 0x28]                ; 0044b362
    LEA ESI,[ESP + 0x4]                 ; 0044b366
    FXCH ST2                            ; 0044b36a
    FSTP float ptr [ESP + 0x4]          ; 0044b36c
    FSTP float ptr [ESP + 0x8]          ; 0044b370
    FSTP float ptr [ESP + 0xc]          ; 0044b374
    MOVSD ES:EDI,ESI                    ; 0044b378
    MOVSD ES:EDI,ESI                    ; 0044b379
    MOVSD ES:EDI,ESI                    ; 0044b37a
    LEA EAX,[ESP + 0x100]               ; 0044b37b
    FLD float ptr [EBX]                 ; 0044b382
    FLD float ptr [EBX + 0x4]           ; 0044b384
    FLD float ptr [EBX + 0x8]           ; 0044b387
    FXCH ST2                            ; 0044b38a
    FADD float ptr [ESP + 0x28]         ; 0044b38c
    FXCH                                ; 0044b390
    FADD float ptr [ESP + 0x2c]         ; 0044b392
    FXCH ST2                            ; 0044b396
    FADD float ptr [ESP + 0x30]         ; 0044b398
    FXCH                                ; 0044b39c
    FSTP float ptr [EBX]                ; 0044b39e
    FXCH                                ; 0044b3a0
    FSTP float ptr [EBX + 0x4]          ; 0044b3a2
    FSTP float ptr [EBX + 0x8]          ; 0044b3a5
    CMP EDX,EAX                         ; 0044b3a8
    JZ 0x0044adaf                       ; 0044b3aa
        ;   XREF to: 0044adaf (CONDITIONAL_JUMP)  ; LAB_0044adaf
    MOV EAX,dword ptr [ESP + 0x100]     ; 0044b3b0
    MOV dword ptr [EDX],EAX             ; 0044b3b7
    MOV EAX,dword ptr [ESP + 0x104]     ; 0044b3b9
    MOV dword ptr [EDX + 0x4],EAX       ; 0044b3c0
    MOV EAX,dword ptr [ESP + 0x108]     ; 0044b3c3
    MOV dword ptr [EDX + 0x8],EAX       ; 0044b3ca
    JMP 0x0044adaf                      ; 0044b3cd
        ;   XREF to: 0044adaf (UNCONDITIONAL_JUMP)  ; LAB_0044adaf
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b3d2
        ;   Label: LAB_0044b3d2
    FLD float ptr [ECX + 0x3c]          ; 0044b3d9
    FCOMP float ptr [EAX + 0x7dc720]    ; 0044b3dc
    FNSTSW AX                           ; 0044b3e2
    SAHF                                ; 0044b3e4
    JA 0x0044b4e8                       ; 0044b3e5
        ;   XREF to: 0044b4e8 (CONDITIONAL_JUMP)  ; LAB_0044b4e8
    LEA EDI,[ESP + 0x64]                ; 0044b3eb
    LEA ESI,[ECX + 0x20]                ; 0044b3ef
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b3f2
    MOVSD ES:EDI,ESI                    ; 0044b3f9
    MOVSD ES:EDI,ESI                    ; 0044b3fa
    MOVSD ES:EDI,ESI                    ; 0044b3fb
    MOV EAX,dword ptr [EAX + 0x7dc720]  ; 0044b3fc
    FLD float ptr [ESP + 0x64]          ; 0044b402
    FLD float ptr [ESP + 0x6c]          ; 0044b406
    LEA EDI,[ESP + 0xf4]                ; 0044b40a
    MOV dword ptr [ESP + 0x68],EAX      ; 0044b411
    LEA ESI,[ESP + 0x130]               ; 0044b415
    FLD float ptr [ESP + 0x68]          ; 0044b41c
    FXCH ST2                            ; 0044b420
    FSUB float ptr [EDX]                ; 0044b422
    FXCH                                ; 0044b424
    FSUB float ptr [EDX + 0x8]          ; 0044b426
    FXCH                                ; 0044b429
    FSTP float ptr [ESP + 0x130]        ; 0044b42b
    FXCH                                ; 0044b432
    FSUB float ptr [EDX + 0x4]          ; 0044b434
    FXCH                                ; 0044b437
    FSTP float ptr [ESP + 0x138]        ; 0044b439
    FSTP float ptr [ESP + 0x134]        ; 0044b440
    MOVSD ES:EDI,ESI                    ; 0044b447
    MOVSD ES:EDI,ESI                    ; 0044b448
    MOVSD ES:EDI,ESI                    ; 0044b449
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0044b44a
    FLD float ptr [ESP + 0xf4]          ; 0044b451
    FMUL float ptr [EAX]                ; 0044b458
    FLD float ptr [ESP + 0xf8]          ; 0044b45a
    FMUL float ptr [EAX]                ; 0044b461
    FLD float ptr [ESP + 0xfc]          ; 0044b463
    FMUL float ptr [EAX]                ; 0044b46a
    LEA EDI,[ESP + 0x148]               ; 0044b46c
    LEA ESI,[ESP + 0x178]               ; 0044b473
    FXCH ST2                            ; 0044b47a
    FSTP float ptr [ESP + 0x178]        ; 0044b47c
    FSTP float ptr [ESP + 0x17c]        ; 0044b483
    FSTP float ptr [ESP + 0x180]        ; 0044b48a
    MOVSD ES:EDI,ESI                    ; 0044b491
    MOVSD ES:EDI,ESI                    ; 0044b492
    MOVSD ES:EDI,ESI                    ; 0044b493
    LEA EAX,[ESP + 0x64]                ; 0044b494
    FLD float ptr [EBX]                 ; 0044b498
    FLD float ptr [EBX + 0x4]           ; 0044b49a
    FLD float ptr [EBX + 0x8]           ; 0044b49d
    FXCH ST2                            ; 0044b4a0
    FADD float ptr [ESP + 0x148]        ; 0044b4a2
    FXCH                                ; 0044b4a9
    FADD float ptr [ESP + 0x14c]        ; 0044b4ab
    FXCH ST2                            ; 0044b4b2
    FADD float ptr [ESP + 0x150]        ; 0044b4b4
    FXCH                                ; 0044b4bb
    FSTP float ptr [EBX]                ; 0044b4bd
    FXCH                                ; 0044b4bf
    FSTP float ptr [EBX + 0x4]          ; 0044b4c1
    FSTP float ptr [EBX + 0x8]          ; 0044b4c4
    CMP EDX,EAX                         ; 0044b4c7
    JZ 0x0044adaf                       ; 0044b4c9
        ;   XREF to: 0044adaf (CONDITIONAL_JUMP)  ; LAB_0044adaf
    MOV EAX,dword ptr [ESP + 0x64]      ; 0044b4cf
    MOV dword ptr [EDX],EAX             ; 0044b4d3
    MOV EAX,dword ptr [ESP + 0x68]      ; 0044b4d5
    MOV dword ptr [EDX + 0x4],EAX       ; 0044b4d9
    MOV EAX,dword ptr [ESP + 0x6c]      ; 0044b4dc
    MOV dword ptr [EDX + 0x8],EAX       ; 0044b4e0
    JMP 0x0044adaf                      ; 0044b4e3
        ;   XREF to: 0044adaf (UNCONDITIONAL_JUMP)  ; LAB_0044adaf
    FLDZ                                ; 0044b4e8
        ;   Label: LAB_0044b4e8
    FCOMP float ptr [ESP + 0x1b8]       ; 0044b4ea
    FNSTSW AX                           ; 0044b4f1
    SAHF                                ; 0044b4f3
    JNC 0x0044b69c                      ; 0044b4f4
        ;   XREF to: 0044b69c (CONDITIONAL_JUMP)  ; LAB_0044b69c
    FLD1                                ; 0044b4fa
    FLD float ptr [ESP + 0x124]         ; 0044b4fc
    FXCH                                ; 0044b503
    FDIV float ptr [ESP + 0x1b8]        ; 0044b505
    FXCH                                ; 0044b50c
    FMUL ST1                            ; 0044b50e
    FLDZ                                ; 0044b510
    FMUL ST2                            ; 0044b512
    FLD float ptr [ESP + 0x12c]         ; 0044b514
    FMULP ST3                           ; 0044b51b
    FXCH                                ; 0044b51d
    FSTP float ptr [ESP + 0x124]        ; 0044b51f
    FSTP float ptr [ESP + 0x128]        ; 0044b526
    FSTP float ptr [ESP + 0x12c]        ; 0044b52d
    MOV EAX,dword ptr [ESP + 0x1cc]     ; 0044b534
        ;   Label: LAB_0044b534
    FLD float ptr [ESP + 0x124]         ; 0044b53b
    FMUL float ptr [EAX]                ; 0044b542
    FLD float ptr [ESP + 0x128]         ; 0044b544
    FXCH                                ; 0044b54b
    FSTP float ptr [ESP + 0x124]        ; 0044b54d
    FMUL float ptr [EAX]                ; 0044b554
    FLD float ptr [ESP + 0x12c]         ; 0044b556
    FXCH                                ; 0044b55d
    FSTP float ptr [ESP + 0x128]        ; 0044b55f
    FMUL float ptr [EAX]                ; 0044b566
    LEA EDI,[ESP + 0x118]               ; 0044b568
    LEA ESI,[ESP + 0x190]               ; 0044b56f
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b576
    FLD float ptr [ESP + 0x124]         ; 0044b57d
    FADD float ptr [EAX + 0x7dc71c]     ; 0044b584
    FXCH                                ; 0044b58a
    FSTP float ptr [ESP + 0x12c]        ; 0044b58c
    FSTP float ptr [ESP + 0x124]        ; 0044b593
    MOV EAX,dword ptr [ECX + 0x24]      ; 0044b59a
    FLD float ptr [ESP + 0x12c]         ; 0044b59d
    MOV dword ptr [ESP + 0x128],EAX     ; 0044b5a4
    MOV EAX,dword ptr [ESP + 0x1d8]     ; 0044b5ab
    FLD float ptr [ESP + 0x124]         ; 0044b5b2
    FXCH                                ; 0044b5b9
    FADD float ptr [EAX + 0x7dc724]     ; 0044b5bb
    FLD float ptr [ESP + 0x128]         ; 0044b5c1
    FXCH                                ; 0044b5c8
    FST float ptr [ESP + 0x12c]         ; 0044b5ca
    FXCH ST2                            ; 0044b5d1
    FSUB float ptr [EDX]                ; 0044b5d3
    FXCH                                ; 0044b5d5
    FSUB float ptr [EDX + 0x4]          ; 0044b5d7
    FXCH                                ; 0044b5da
    FSTP float ptr [ESP + 0x190]        ; 0044b5dc
    FXCH                                ; 0044b5e3
    FSUB float ptr [EDX + 0x8]          ; 0044b5e5
    FXCH                                ; 0044b5e8
    FSTP float ptr [ESP + 0x194]        ; 0044b5ea
    FSTP float ptr [ESP + 0x198]        ; 0044b5f1
    MOVSD ES:EDI,ESI                    ; 0044b5f8
    MOVSD ES:EDI,ESI                    ; 0044b5f9
    MOVSD ES:EDI,ESI                    ; 0044b5fa
    MOV EAX,dword ptr [ESP + 0x1d4]     ; 0044b5fb
    FLD float ptr [ESP + 0x118]         ; 0044b602
    FMUL float ptr [EAX]                ; 0044b609
    FLD float ptr [ESP + 0x11c]         ; 0044b60b
    FMUL float ptr [EAX]                ; 0044b612
    FLD float ptr [ESP + 0x120]         ; 0044b614
    FMUL float ptr [EAX]                ; 0044b61b
    LEA EDI,[ESP + 0x88]                ; 0044b61d
    LEA ESI,[ESP + 0x10]                ; 0044b624
    FXCH ST2                            ; 0044b628
    FSTP float ptr [ESP + 0x10]         ; 0044b62a
    FSTP float ptr [ESP + 0x14]         ; 0044b62e
    FSTP float ptr [ESP + 0x18]         ; 0044b632
    MOVSD ES:EDI,ESI                    ; 0044b636
    MOVSD ES:EDI,ESI                    ; 0044b637
    MOVSD ES:EDI,ESI                    ; 0044b638
    LEA EAX,[ESP + 0x124]               ; 0044b639
    FLD float ptr [EBX]                 ; 0044b640
    FLD float ptr [EBX + 0x4]           ; 0044b642
    FLD float ptr [EBX + 0x8]           ; 0044b645
    FXCH ST2                            ; 0044b648
    FADD float ptr [ESP + 0x88]         ; 0044b64a
    FXCH                                ; 0044b651
    FADD float ptr [ESP + 0x8c]         ; 0044b653
    FXCH ST2                            ; 0044b65a
    FADD float ptr [ESP + 0x90]         ; 0044b65c
    FXCH                                ; 0044b663
    FSTP float ptr [EBX]                ; 0044b665
    FXCH                                ; 0044b667
    FSTP float ptr [EBX + 0x4]          ; 0044b669
    FSTP float ptr [EBX + 0x8]          ; 0044b66c
    CMP EDX,EAX                         ; 0044b66f
    JZ 0x0044b690                       ; 0044b671
        ;   XREF to: 0044b690 (CONDITIONAL_JUMP)  ; LAB_0044b690
    MOV EAX,dword ptr [ESP + 0x124]     ; 0044b673
    MOV dword ptr [EDX],EAX             ; 0044b67a
    MOV EAX,dword ptr [ESP + 0x128]     ; 0044b67c
    MOV dword ptr [EDX + 0x4],EAX       ; 0044b683
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0044b686
    MOV dword ptr [EDX + 0x8],EAX       ; 0044b68d
    MOV dword ptr [ECX + 0x6c],0x1      ; 0044b690
        ;   Label: LAB_0044b690
    JMP 0x0044adaf                      ; 0044b697
        ;   XREF to: 0044adaf (UNCONDITIONAL_JUMP)  ; LAB_0044adaf
    XOR ESI,ESI                         ; 0044b69c
        ;   Label: LAB_0044b69c
    MOV dword ptr [ESP + 0x128],ESI     ; 0044b69e
    MOV dword ptr [ESP + 0x124],ESI     ; 0044b6a5
    MOV dword ptr [ESP + 0x12c],ESI     ; 0044b6ac
    JMP 0x0044b534                      ; 0044b6b3
        ;   XREF to: 0044b534 (UNCONDITIONAL_JUMP)  ; LAB_0044b534
    MOV EAX,dword ptr [ESP + 0xb8]      ; 0044b6b8
        ;   Label: LAB_0044b6b8
    MOV dword ptr [ESP + 0x16c],EAX     ; 0044b6bf
    MOV EAX,dword ptr [ESP + 0xbc]      ; 0044b6c6
    MOV dword ptr [ESP + 0x170],EAX     ; 0044b6cd
    MOV EAX,dword ptr [ESP + 0xc0]      ; 0044b6d4
    MOV dword ptr [ESP + 0x174],EAX     ; 0044b6db
    JMP 0x0044ae9b                      ; 0044b6e2
        ;   XREF to: 0044ae9b (UNCONDITIONAL_JUMP)  ; LAB_0044ae9b

