; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00462ff0(int param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_00462f74 = 0046353d
;   undefined1* switchdataD_00462f84 = 00464349
;   TerminatedCString s_brideexplosion_wav_005d0f76
;   TerminatedCString s_s_confused_while_walking_005d0f89
;   TerminatedCString s_bride_d_wav_005d0fb3
;   TerminatedCString s_hotbride_disappear_wav_005d0fc1
;   TerminatedCString s_bride_d_wav_005d0fd8
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d0fe6
;   TerminatedCString s_hotbride_bite_wav_005d1007
;   TerminatedCString s_CHero_005d101a
;   TerminatedCString s_bride_d_wav_005d1020
;   TerminatedCString s_hotbride_disappear_wav_005d102e
;   TerminatedCString s_bride_d_wav_005d1045
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d1053
;   TerminatedCString s_hotbride_swipe_wav_005d1074
;   ... and 29 more
;
; Called Functions:
;   FUN_00408cf0
;   FUN_00408d70
;   FUN_0040c840
;   FUN_0040c8f0
;   FUN_0040cf60
;   FUN_0040cfc0
;   FUN_0040d060
;   FUN_0040d0c0
;   FUN_004222d0
;   FUN_00423000
;   FUN_00423a10
;   FUN_00423a60
;   FUN_00424470
;   FUN_004244b0
;   FUN_004287f0
;   ... and 24 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00462ff0
        ;   Label: FUN_00462ff0
    PUSH ESI                            ; 00462ff1
    PUSH EDI                            ; 00462ff2
    PUSH EBP                            ; 00462ff3
    MOV EBP,ESP                         ; 00462ff4
    SUB ESP,0x5e8                       ; 00462ff6
    SUB EBP,0x7a                        ; 00462ffc
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00462fff
    CMP dword ptr [EBX + 0x10c20],0x0   ; 00463005
    JZ 0x00463080                       ; 0046300c
        ;   XREF to: 00463080 (CONDITIONAL_JUMP)  ; LAB_00463080
    FLD float ptr [EBX + 0x10c24]       ; 0046300e
    FSUB float ptr [EBP + 0x92]         ; 00463014
    FST float ptr [EBX + 0x10c24]       ; 0046301a
    FLDZ                                ; 00463020
    FCOMPP                              ; 00463022
    FNSTSW AX                           ; 00463024
    SAHF                                ; 00463026
    JBE 0x004631a0                      ; 00463027
        ;   XREF to: 004631a0 (CONDITIONAL_JUMP)  ; LAB_004631a0
    MOV dword ptr [EBX + 0x10c20],0x0   ; 0046302d
    MOV dword ptr [EBX + 0x70],0x2      ; 00463037
    MOV ESI,dword ptr [EBX + 0x10ba4]   ; 0046303e
    MOV dword ptr [EBX + 0x10c24],0x0   ; 00463044
    XOR EAX,EAX                         ; 0046304e
    TEST ESI,ESI                        ; 00463050
    JLE 0x00463080                      ; 00463052
        ;   XREF to: 00463080 (CONDITIONAL_JUMP)  ; LAB_00463080
    MOV EDX,EBX                         ; 00463054
    MOV ESI,dword ptr [EDX + 0x10ba8]   ; 00463056
        ;   Label: LAB_00463056
    MOV dword ptr [ESI + 0x70],0x2      ; 0046305c
    INC EAX                             ; 00463063
    MOV ECX,dword ptr [EBX + 0x10ba4]   ; 00463064
    ADD EDX,0x4                         ; 0046306a
    CMP EAX,ECX                         ; 0046306d
    JL 0x00463056                       ; 0046306f
        ;   XREF to: 00463056 (CONDITIONAL_JUMP)  ; LAB_00463056
    LEA EAX,[EAX]                       ; 00463071
    LEA EDX,[EDX]                       ; 00463077
    LEA EAX,[EAX]                       ; 0046307d
    PUSH dword ptr [EBP + 0x92]         ; 00463080
        ;   Label: LAB_00463080
    PUSH EBX                            ; 00463086
    CALL FUN_004658e0                   ; 00463087
        ;   XREF to: 004658e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004658e0()
    ADD ESP,0x8                         ; 0046308c
    PUSH dword ptr [EBP + 0x92]         ; 0046308f
    PUSH EBX                            ; 00463095
    CALL FUN_004244b0                   ; 00463096
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004244b0()
    ADD ESP,0x8                         ; 0046309b
    TEST EAX,EAX                        ; 0046309e
    JZ 0x004634a8                       ; 004630a0
        ;   XREF to: 004634a8 (CONDITIONAL_JUMP)  ; LAB_004634a8
    FLD float ptr [EBX + 0x10b90]       ; 004630a6
    FLDZ                                ; 004630ac
    FCOMPP                              ; 004630ae
    FNSTSW AX                           ; 004630b0
    SAHF                                ; 004630b2
    JBE 0x00463204                      ; 004630b3
        ;   XREF to: 00463204 (CONDITIONAL_JUMP)  ; LAB_00463204
    LEA EAX,[EBX + 0x2508]              ; 004630b9
        ;   Label: LAB_004630b9
    MOV dword ptr [EAX + 0x8],0x0       ; 004630bf
    FLD float ptr [EBP + 0x92]          ; 004630c6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004630cc
    MOV dword ptr [EAX + 0x4],EDX       ; 004630cf
    MOV EDX,dword ptr [EAX + 0x4]       ; 004630d2
    MOV dword ptr [EAX],EDX             ; 004630d5
    FMUL float ptr [EBX + 0x10a60]      ; 004630d7
    LEA EAX,[EBX + 0x2b4]               ; 004630dd
    FSTP float ptr [EBP + 0x3e]         ; 004630e3
    MOV dword ptr [EBP + 0x5a],EAX      ; 004630e6
    FLD float ptr [EBP + 0x3e]          ; 004630e9
        ;   Label: LAB_004630e9
    FLDZ                                ; 004630ec
    FCOMPP                              ; 004630ee
    FNSTSW AX                           ; 004630f0
    SAHF                                ; 004630f2
    JNC 0x0046322a                      ; 004630f3
        ;   XREF to: 0046322a (CONDITIONAL_JUMP)  ; LAB_0046322a
    LEA EAX,[EBP + 0x3e]                ; 004630f9
    PUSH EAX                            ; 004630fc
    MOV EDI,dword ptr [EBP + 0x5a]      ; 004630fd
    PUSH EDI                            ; 00463100
    CALL FUN_005030c0                   ; 00463101
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005030c0()
    ADD ESP,0x8                         ; 00463106
    CMP EAX,0x29a                       ; 00463109
    JNZ 0x0046321b                      ; 0046310e
        ;   XREF to: 0046321b (CONDITIONAL_JUMP)  ; LAB_0046321b
    MOV dword ptr [EBX + 0x3448],0x0    ; 00463114
    XOR EAX,EAX                         ; 0046311e
    MOV dword ptr [EBP + 0xfffffdba],EAX ; 00463120
    LEA EAX,[EBP + 0xfffffdba]          ; 00463126
    PUSH EAX                            ; 0046312c
    MOV EDX,0x41a00000                  ; 0046312d
    LEA ESI,[EBP + 0xfffffeb6]          ; 00463132
    PUSH EBX                            ; 00463138
    MOV dword ptr [EBP + 0xfffffdbe],EDX ; 00463139
    MOV dword ptr [EBP + 0xfffffdc2],EDX ; 0046313f
    CALL FUN_00408cf0                   ; 00463145
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined FUN_00408cf0()
    ADD ESP,0x8                         ; 0046314a
    PUSH 0x1                            ; 0046314d
    LEA EAX,[EBP + 0xfffffe7a]          ; 0046314f
    PUSH 0xbf800000                     ; 00463155
    PUSH EAX                            ; 0046315a
    LEA EDI,[EBP + 0xfffffe7a]          ; 0046315b
    LEA ESI,[EBP + 0xfffffeb6]          ; 00463161
    PUSH EBX                            ; 00463167
    MOVSD ES:EDI,ESI                    ; 00463168
    MOVSD ES:EDI,ESI                    ; 00463169
    MOVSD ES:EDI,ESI                    ; 0046316a
    CALL FUN_00464700                   ; 0046316b
        ;   XREF to: 00464700 (UNCONDITIONAL_CALL)  ; undefined FUN_00464700()
    ADD ESP,0x10                        ; 00463170
    MOV dword ptr [EBX + 0x10c20],0x1   ; 00463173
    PUSH 0x5d0f76                       ; 0046317d | = "brideexplosion.wav"
    FLD float ptr [0x005f5660]          ; 00463182 | DAT_005f5660
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00463188
    PUSH EBX                            ; 0046318e
    FSTP float ptr [EBX + 0x10c24]      ; 0046318f
    CALL dword ptr [EAX + 0x38]         ; 00463195
    ADD ESP,0x8                         ; 00463198
    JMP 0x004630e9                      ; 0046319b
        ;   XREF to: 004630e9 (UNCONDITIONAL_JUMP)  ; LAB_004630e9
    MOV ECX,dword ptr [EBX + 0x10ba4]   ; 004631a0
        ;   Label: LAB_004631a0
    XOR EDX,EDX                         ; 004631a6
    TEST ECX,ECX                        ; 004631a8
    JLE 0x00463080                      ; 004631aa
        ;   XREF to: 00463080 (CONDITIONAL_JUMP)  ; LAB_00463080
    FLD float ptr [0x005f5660]          ; 004631b0 | DAT_005f5660
    FLD double ptr [0x005d108c]         ; 004631b6 | DAT_005d108c
    MOV ESI,EBX                         ; 004631bc
    MOV EAX,dword ptr [ESI + 0x10ba8]   ; 004631be
        ;   Label: LAB_004631be
    MOV dword ptr [EAX + 0xfc],0x1      ; 004631c4
    MOV dword ptr [EAX + 0x10c8],0x1    ; 004631ce
    FLD float ptr [EBX + 0x10c24]       ; 004631d8
    FMUL ST1                            ; 004631de
    FDIV ST0,ST2                        ; 004631e0
    INC EDX                             ; 004631e2
    CALL FUN_005b7ff0                   ; 004631e3
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7ff0()
    FISTP dword ptr [EAX + 0x10d4]      ; 004631e8
    MOV EDI,dword ptr [EBX + 0x10ba4]   ; 004631ee
    ADD ESI,0x4                         ; 004631f4
    CMP EDX,EDI                         ; 004631f7
    JL 0x004631be                       ; 004631f9
        ;   XREF to: 004631be (CONDITIONAL_JUMP)  ; LAB_004631be
    FSTP ST0                            ; 004631fb
    FSTP ST0                            ; 004631fd
    JMP 0x00463080                      ; 004631ff
        ;   XREF to: 00463080 (UNCONDITIONAL_JUMP)  ; LAB_00463080
    FLD float ptr [EBX + 0x10b90]       ; 00463204
        ;   Label: LAB_00463204
    FSUB float ptr [EBP + 0x92]         ; 0046320a
    FSTP float ptr [EBX + 0x10b90]      ; 00463210
    JMP 0x004630b9                      ; 00463216
        ;   XREF to: 004630b9 (UNCONDITIONAL_JUMP)  ; LAB_004630b9
    PUSH EAX                            ; 0046321b
        ;   Label: LAB_0046321b
    PUSH EBX                            ; 0046321c
    CALL FUN_0042aa00                   ; 0046321d
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; undefined FUN_0042aa00()
    ADD ESP,0x8                         ; 00463222
    JMP 0x004630e9                      ; 00463225
        ;   XREF to: 004630e9 (UNCONDITIONAL_JUMP)  ; LAB_004630e9
    MOV ESI,dword ptr [EBP + 0x5a]      ; 0046322a
        ;   Label: LAB_0046322a
    PUSH ESI                            ; 0046322d
    CALL FUN_005035c0                   ; 0046322e
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00463233
    ADD ESP,0x4                         ; 00463236
    MOV ESI,EAX                         ; 00463239
    CMP EAX,0x9                         ; 0046323b
    JNZ 0x004634b0                      ; 0046323e
        ;   XREF to: 004634b0 (CONDITIONAL_JUMP)  ; LAB_004634b0
    FLD float ptr [EBP + 0x92]          ; 00463244
    FLD float ptr [0x005f5658]          ; 0046324a | DAT_005f5658
    FMUL ST1                            ; 00463250
    FLD float ptr [0x005f5654]          ; 00463252 | DAT_005f5654
    FMULP ST2                           ; 00463258
    FMUL float ptr [EBX + 0x10a60]      ; 0046325a
    FLD float ptr [EBX + 0x10a60]       ; 00463260
    FMULP ST2                           ; 00463266
    FSTP float ptr [EBX + 0x2598]       ; 00463268
    FSTP float ptr [EBX + 0x2594]       ; 0046326e
    PUSH dword ptr [EBP + 0x92]         ; 00463274
        ;   Label: LAB_00463274
    PUSH EBX                            ; 0046327a
    CALL FUN_004287f0                   ; 0046327b
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004287f0()
    ADD ESP,0x8                         ; 00463280
    TEST EAX,EAX                        ; 00463283
    JZ 0x004646d2                       ; 00463285
        ;   XREF to: 004646d2 (CONDITIONAL_JUMP)  ; LAB_004646d2
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 0046328b
    CMP EAX,0x2                         ; 00463291
    JNC 0x00463504                      ; 00463294
        ;   XREF to: 00463504 (CONDITIONAL_JUMP)  ; LAB_00463504
    CMP EAX,0x1                         ; 0046329a
    JNZ 0x0046350f                      ; 0046329d
        ;   XREF to: 0046350f (CONDITIONAL_JUMP)  ; LAB_0046350f
    PUSH 0x1                            ; 004632a3
        ;   Label: LAB_004632a3
    PUSH 0xe                            ; 004632a5
    LEA EAX,[EBX + 0x2b4]               ; 004632a7
        ;   Label: LAB_004632a7
    PUSH EAX                            ; 004632ad
    CALL FUN_00503620                   ; 004632ae
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004632b3
        ;   Label: LAB_004632b3
    LEA EAX,[EBX + 0x2508]              ; 004632b6
    MOV dword ptr [EAX + 0x8],0x0       ; 004632bc
    MOV EDX,dword ptr [EAX + 0x8]       ; 004632c3
    MOV dword ptr [EAX + 0x4],EDX       ; 004632c6
    MOV EDX,dword ptr [EAX + 0x4]       ; 004632c9
    MOV dword ptr [EAX],EDX             ; 004632cc
    MOV EAX,EAX                         ; 004632ce
    FLD float ptr [EBX + 0x10a74]       ; 004632d0
        ;   Label: default
    FLDZ                                ; 004632d6
    FCOMPP                              ; 004632d8
    FNSTSW AX                           ; 004632da
    SAHF                                ; 004632dc
    JNC 0x004632f1                      ; 004632dd
        ;   XREF to: 004632f1 (CONDITIONAL_JUMP)  ; LAB_004632f1
    FLD float ptr [EBX + 0x10a74]       ; 004632df
    FSUB float ptr [EBP + 0x92]         ; 004632e5
    FSTP float ptr [EBX + 0x10a74]      ; 004632eb
    LEA EAX,[EBX + 0x2b4]               ; 004632f1
        ;   Label: LAB_004632f1
    PUSH EAX                            ; 004632f7
    CALL FUN_005035c0                   ; 004632f8
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 004632fd
    ADD ESP,0x4                         ; 00463300
    MOV dword ptr [EBP + 0x4a],EAX      ; 00463303
    CMP EAX,0x11                        ; 00463306
    JZ 0x004646e2                       ; 00463309
        ;   XREF to: 004646e2 (CONDITIONAL_JUMP)  ; LAB_004646e2
    CMP EAX,0x10                        ; 0046330f
    JZ 0x004646e2                       ; 00463312
        ;   XREF to: 004646e2 (CONDITIONAL_JUMP)  ; LAB_004646e2
    CMP EAX,0xf                         ; 00463318
    JZ 0x004646e2                       ; 0046331b
        ;   XREF to: 004646e2 (CONDITIONAL_JUMP)  ; LAB_004646e2
    CMP dword ptr [EBP + 0x4a],0x3      ; 00463321
        ;   Label: LAB_00463321
    JNZ 0x0046333d                      ; 00463325
        ;   XREF to: 0046333d (CONDITIONAL_JUMP)  ; LAB_0046333d
    FLD float ptr [EBX + 0x2510]        ; 00463327
    FLD ST0                             ; 0046332d
    FMUL double ptr [0x005d10ac]        ; 0046332f | DAT_005d10ac
    FSTP ST1                            ; 00463335
    FSTP float ptr [EBX + 0x2510]       ; 00463337
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 0046333d
        ;   Label: LAB_0046333d
    TEST ESI,ESI                        ; 00463343
    JZ 0x00463370                       ; 00463345
        ;   XREF to: 00463370 (CONDITIONAL_JUMP)  ; LAB_00463370
    PUSH ESI                            ; 00463347
    MOV EDX,dword ptr [ESI + 0x2b0]     ; 00463348
    CALL dword ptr [EDX + 0xfc]         ; 0046334e
    ADD ESP,0x4                         ; 00463354
    CMP EAX,EBX                         ; 00463357
    JNZ 0x00463370                      ; 00463359
        ;   XREF to: 00463370 (CONDITIONAL_JUMP)  ; LAB_00463370
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0046335b
    PUSH EDI                            ; 00463361
    MOV EAX,[0x0061b5a8]                ; 00463362 | DAT_0061b5a8
    PUSH EAX                            ; 00463367 | DAT_01e661b8
    CALL FUN_00537e30                   ; 00463368
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; undefined FUN_00537e30()
    ADD ESP,0x8                         ; 0046336d
    PUSH dword ptr [EBP + 0x92]         ; 00463370
        ;   Label: LAB_00463370
    PUSH EBX                            ; 00463376
    LEA ESI,[EBX + 0x2588]              ; 00463377
    CALL FUN_00423a10                   ; 0046337d
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a10()
    FLD float ptr [ESI]                 ; 00463382
    FMUL float ptr [EBP + 0x92]         ; 00463384
    FLD float ptr [ESI + 0x4]           ; 0046338a
    FMUL float ptr [EBP + 0x92]         ; 0046338d
    FLD float ptr [ESI + 0x8]           ; 00463393
    FMUL float ptr [EBP + 0x92]         ; 00463396
    LEA EDI,[EBP + -0x5a]               ; 0046339c
    LEA ESI,[EBP + 0xfffffdae]          ; 0046339f
    FXCH ST2                            ; 004633a5
    FSTP float ptr [EBP + 0xfffffdae]   ; 004633a7
    FSTP float ptr [EBP + 0xfffffdb2]   ; 004633ad
    FSTP float ptr [EBP + 0xfffffdb6]   ; 004633b3
    MOVSD ES:EDI,ESI                    ; 004633b9
    MOVSD ES:EDI,ESI                    ; 004633ba
    MOVSD ES:EDI,ESI                    ; 004633bb
    LEA EAX,[EBX + 0x257c]              ; 004633bc
    FLD float ptr [EBP + -0x5a]         ; 004633c2
    FLD float ptr [EBP + -0x56]         ; 004633c5
    FLD float ptr [EBP + -0x52]         ; 004633c8
    LEA EDI,[EBP + 0x2a]                ; 004633cb
    LEA ESI,[EBP + 0xffffff0a]          ; 004633ce
    FXCH ST2                            ; 004633d4
    FADD float ptr [EAX]                ; 004633d6
    FXCH                                ; 004633d8
    FADD float ptr [EAX + 0x4]          ; 004633da
    FXCH ST2                            ; 004633dd
    FADD float ptr [EAX + 0x8]          ; 004633df
    FXCH                                ; 004633e2
    FSTP float ptr [EBP + 0xffffff0a]   ; 004633e4
    FXCH                                ; 004633ea
    FSTP float ptr [EBP + 0xffffff0e]   ; 004633ec
    FSTP float ptr [EBP + 0xffffff12]   ; 004633f2
    MOVSD ES:EDI,ESI                    ; 004633f8
    MOVSD ES:EDI,ESI                    ; 004633f9
    MOVSD ES:EDI,ESI                    ; 004633fa
    LEA EDX,[EBX + 0x2508]              ; 004633fb
    FLD float ptr [EBP + 0x2a]          ; 00463401
    FLD float ptr [EBP + 0x2e]          ; 00463404
    FLD float ptr [EBP + 0x32]          ; 00463407
    LEA EDI,[EBP + 0xfffffd66]          ; 0046340a
    LEA ESI,[EBP + 0xfffffdc6]          ; 00463410
    FXCH ST2                            ; 00463416
    FADD float ptr [EDX]                ; 00463418
    FXCH                                ; 0046341a
    FADD float ptr [EDX + 0x4]          ; 0046341c
    FXCH ST2                            ; 0046341f
    FADD float ptr [EDX + 0x8]          ; 00463421
    FXCH                                ; 00463424
    FSTP float ptr [EBP + 0xfffffdc6]   ; 00463426
    FXCH                                ; 0046342c
    FSTP float ptr [EBP + 0xfffffdca]   ; 0046342e
    FSTP float ptr [EBP + 0xfffffdce]   ; 00463434
    MOVSD ES:EDI,ESI                    ; 0046343a
    MOVSD ES:EDI,ESI                    ; 0046343b
    MOVSD ES:EDI,ESI                    ; 0046343c
    MOV dword ptr [EAX + 0x8],0x0       ; 0046343d
    ADD ESP,0x8                         ; 00463444
    MOV ECX,dword ptr [EAX + 0x8]       ; 00463447
    MOV dword ptr [EAX + 0x4],ECX       ; 0046344a
    MOV ECX,dword ptr [EAX + 0x4]       ; 0046344d
    MOV dword ptr [EAX],ECX             ; 00463450
    MOV dword ptr [EDX + 0x8],0x0       ; 00463452
    LEA EAX,[EBP + 0xfffffd66]          ; 00463459
    FLD float ptr [EDX + 0x8]           ; 0046345f
    PUSH EAX                            ; 00463462
    FST float ptr [EDX + 0x4]           ; 00463463
    PUSH EBX                            ; 00463466
    FSTP float ptr [EDX]                ; 00463467
    CALL FUN_00423a60                   ; 00463469
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; undefined FUN_00423a60()
    ADD ESP,0x8                         ; 0046346e
    CMP dword ptr [EBP + 0x4a],0x17     ; 00463471
        ;   Label: LAB_00463471
    JZ 0x00463481                       ; 00463475
        ;   XREF to: 00463481 (CONDITIONAL_JUMP)  ; LAB_00463481
    MOV dword ptr [EBX + 0x10b84],0x0   ; 00463477
    PUSH EBX                            ; 00463481
        ;   Label: LAB_00463481
    CALL FUN_00424470                   ; 00463482
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; undefined FUN_00424470()
    ADD ESP,0x4                         ; 00463487
    LEA EAX,[EBX + 0x2b4]               ; 0046348a
    PUSH EAX                            ; 00463490
    CALL FUN_00544f00                   ; 00463491
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00544f00()
    ADD ESP,0x4                         ; 00463496
    PUSH dword ptr [EBP + 0x92]         ; 00463499
    PUSH EBX                            ; 0046349f
    CALL FUN_00429e90                   ; 004634a0
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; undefined FUN_00429e90()
    ADD ESP,0x8                         ; 004634a5
    LEA ESP,[EBP + 0x7a]                ; 004634a8
        ;   Label: LAB_004634a8
    POP EBP                             ; 004634ab
    POP EDI                             ; 004634ac
    POP ESI                             ; 004634ad
    POP EBX                             ; 004634ae
    RET                                 ; 004634af
    FLD float ptr [0x005f5650]          ; 004634b0 | DAT_005f5650
        ;   Label: LAB_004634b0
    FMUL float ptr [EBP + 0x92]         ; 004634b6
    FMUL float ptr [EBX + 0x10a60]      ; 004634bc
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004634c2
    MOV dword ptr [EBX + 0x2594],EAX    ; 004634c8
    FSTP float ptr [EBX + 0x2598]       ; 004634ce
    JMP 0x00463274                      ; 004634d4
        ;   XREF to: 00463274 (UNCONDITIONAL_JUMP)  ; LAB_00463274
    PUSH 0x1                            ; 004634d9
        ;   Label: LAB_004634d9
    PUSH 0x0                            ; 004634db
    LEA EAX,[EBX + 0x2b4]               ; 004634dd
    PUSH EAX                            ; 004634e3
    CALL FUN_00503620                   ; 004634e4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004634e9
    PUSH EBX                            ; 004634ec
    MOV EAX,0x5d0f89                    ; 004634ed | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 004634f2 | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 004634f3 | PTR_DAT_00609ed0
    PUSH ESI                            ; 004634f9 | DAT_007c158c
    CALL FUN_00436710                   ; 004634fa
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    JMP 0x004632b3                      ; 004634ff
        ;   XREF to: 004632b3 (UNCONDITIONAL_JUMP)  ; LAB_004632b3
    JBE 0x004632a3                      ; 00463504
        ;   XREF to: 004632a3 (CONDITIONAL_JUMP)  ; LAB_004632a3
        ;   Label: LAB_00463504
    CMP EAX,0x3                         ; 0046350a
    JZ 0x004634d9                       ; 0046350d
        ;   XREF to: 004634d9 (CONDITIONAL_JUMP)  ; LAB_004634d9
    PUSH 0x1                            ; 0046350f
        ;   Label: LAB_0046350f
    PUSH 0x0                            ; 00463511
    JMP 0x004632a7                      ; 00463513
        ;   XREF to: 004632a7 (UNCONDITIONAL_JUMP)  ; LAB_004632a7
    FLD float ptr [EBX + 0x10b8c]       ; 00463518
        ;   Label: caseD_17
    FLDZ                                ; 0046351e
    FCOMPP                              ; 00463520
    FNSTSW AX                           ; 00463522
    SAHF                                ; 00463524
    JNC 0x00463555                      ; 00463525
        ;   XREF to: 00463555 (CONDITIONAL_JUMP)  ; LAB_00463555
    MOV EAX,dword ptr [EBX + 0x10b84]   ; 00463527
        ;   Label: LAB_00463527
    CMP EAX,0x3                         ; 0046352d
    JA 0x004632d0                       ; 00463530
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    JMP dword ptr [EAX*0x4 + 0x462f74]  ; 00463536 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    PUSH 0x1                            ; 0046353d
        ;   Label: caseD_0
    PUSH 0x0                            ; 0046353f
    LEA EAX,[EBX + 0x2b4]               ; 00463541
    PUSH EAX                            ; 00463547
    CALL FUN_00503620                   ; 00463548
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046354d
    JMP 0x004632d0                      ; 00463550
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,dword ptr [EBX + 0x10b80]   ; 00463555
        ;   Label: LAB_00463555
    PUSH EAX                            ; 0046355b
    PUSH 0x5d0fb3                       ; 0046355c | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffaf6]          ; 00463561
    PUSH EAX                            ; 00463567
    CALL FUN_005b7790                   ; 00463568
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 0046356d
    LEA EAX,[EBP + 0xfffffaf6]          ; 00463570
    PUSH 0x3f800000                     ; 00463576
    PUSH EAX                            ; 0046357b
    PUSH EBX                            ; 0046357c
    CALL FUN_00465400                   ; 0046357d
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 00463582
    PUSH 0x3e4ccccd                     ; 00463585
    CALL FUN_0040d060                   ; 0046358a
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0046358f
    TEST EAX,EAX                        ; 00463592
    JZ 0x00463527                       ; 00463594
        ;   XREF to: 00463527 (CONDITIONAL_JUMP)  ; LAB_00463527
    LEA EAX,[EBP + 0xfffffaf6]          ; 00463596
    PUSH 0x3f800000                     ; 0046359c
    PUSH EAX                            ; 004635a1
    PUSH EBX                            ; 004635a2
    CALL FUN_00465400                   ; 004635a3
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 004635a8
    JMP 0x00463527                      ; 004635ab
        ;   XREF to: 00463527 (UNCONDITIONAL_JUMP)  ; LAB_00463527
    FLD float ptr [EBX + 0x10b88]       ; 004635b0
        ;   Label: caseD_1
    FADD float ptr [EBP + 0x92]         ; 004635b6
    FST float ptr [EBX + 0x10b88]       ; 004635bc
    FCOMP float ptr [0x005f565c]        ; 004635c2 | DAT_005f565c
    FNSTSW AX                           ; 004635c8
    SAHF                                ; 004635ca
    JBE 0x004635e2                      ; 004635cb
        ;   XREF to: 004635e2 (CONDITIONAL_JUMP)  ; LAB_004635e2
    MOV dword ptr [EBX + 0x10b84],0x2   ; 004635cd
    MOV EAX,[0x005f565c]                ; 004635d7 | DAT_005f565c
    MOV dword ptr [EBX + 0x10b88],EAX   ; 004635dc
    MOV EDX,0x40400000                  ; 004635e2
        ;   Label: LAB_004635e2
    LEA ESI,[EBX + 0x2b4]               ; 004635e7
    XOR EAX,EAX                         ; 004635ed
    XOR EDI,EDI                         ; 004635ef
    MOV dword ptr [EBP + -0x12],EAX     ; 004635f1
    PUSH ESI                            ; 004635f4
    MOV dword ptr [EBP + -0xe],EDX      ; 004635f5
    MOV dword ptr [EBP + -0xa],EAX      ; 004635f8
    CALL FUN_00547890                   ; 004635fb
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    MOV dword ptr [EBP + 0x72],EDI      ; 00463600
    ADD ESP,0x4                         ; 00463603
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00463606
    MOV dword ptr [EBP + 0x52],EAX      ; 0046360c
    TEST EDX,EDX                        ; 0046360f
    JLE 0x004632d0                      ; 00463611
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    MOV dword ptr [EBP + 0x4e],ESI      ; 00463617
    MOV EAX,dword ptr [EBP + 0x72]      ; 0046361a
        ;   Label: LAB_0046361a
    PUSH EAX                            ; 0046361d
    MOV EDX,dword ptr [EBP + 0x4e]      ; 0046361e
    PUSH EDX                            ; 00463621
    LEA ESI,[EBP + 0xfffffef2]          ; 00463622
    LEA EDI,[EBP + 0xfffffe02]          ; 00463628
    CALL FUN_00546a90                   ; 0046362e
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 00463633
    LEA EAX,[EBP + 0xfffffe02]          ; 00463636
    LEA ESI,[EBP + 0xfffffef2]          ; 0046363c
    PUSH EAX                            ; 00463642
    MOVSD ES:EDI,ESI                    ; 00463643
    MOVSD ES:EDI,ESI                    ; 00463644
    MOVSD ES:EDI,ESI                    ; 00463645
    PUSH EBX                            ; 00463646
    LEA ESI,[EBP + -0x2a]               ; 00463647
    CALL FUN_00408d70                   ; 0046364a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 0046364f
    PUSH 0xffff                         ; 00463652
    LEA EAX,[EBP + -0x12]               ; 00463657
    PUSH EAX                            ; 0046365a
    LEA EDI,[EBP + 0xfffffdf6]          ; 0046365b
    LEA ESI,[EBP + -0x2a]               ; 00463661
    PUSH 0x3f000000                     ; 00463664
    LEA EAX,[EBP + 0xfffffdf6]          ; 00463669
    MOVSD ES:EDI,ESI                    ; 0046366f
    MOVSD ES:EDI,ESI                    ; 00463670
    MOVSD ES:EDI,ESI                    ; 00463671
    PUSH EAX                            ; 00463672
    MOV ECX,dword ptr [0x00614d30]      ; 00463673 | DAT_00614d30
    MOV ESI,dword ptr [EBP + 0x72]      ; 00463679
    PUSH ECX                            ; 0046367c
    INC ESI                             ; 0046367d
    CALL FUN_0049d230                   ; 0046367e
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    MOV EDX,dword ptr [EBP + 0x52]      ; 00463683
    MOV dword ptr [EBP + 0x72],ESI      ; 00463686
    MOV EDI,dword ptr [EDX + 0x1d1f8]   ; 00463689
    ADD ESP,0x14                        ; 0046368f
    CMP ESI,EDI                         ; 00463692
    JL 0x0046361a                       ; 00463694
        ;   XREF to: 0046361a (CONDITIONAL_JUMP)  ; LAB_0046361a
    JMP 0x004632d0                      ; 00463696
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV ECX,0x1                         ; 0046369b
        ;   Label: caseD_2
    LEA EAX,[EBX + 0x10b94]             ; 004636a0
    XOR ESI,ESI                         ; 004636a6
    MOV dword ptr [EBP + 0x46],ECX      ; 004636a8
    MOV dword ptr [EBP + 0x66],ESI      ; 004636ab
    MOV dword ptr [EBP + 0x6a],EAX      ; 004636ae
    MOV dword ptr [EBP + 0x62],ESI      ; 004636b1
        ;   Label: LAB_004636b1
    MOV EAX,[0x0061b5a8]                ; 004636b4 | DAT_0061b5a8
    MOV EDX,dword ptr [EBP + 0x66]      ; 004636b9
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 004636bc | DAT_01fb5260
    JGE 0x00463769                      ; 004636c2
        ;   XREF to: 00463769 (CONDITIONAL_JUMP)  ; LAB_00463769
    ADD EAX,dword ptr [EBP + 0x62]      ; 004636c8
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 004636cb
    TEST ESI,ESI                        ; 004636d1
    JNZ 0x004636e4                      ; 004636d3
        ;   XREF to: 004636e4 (CONDITIONAL_JUMP)  ; LAB_004636e4
    MOV EDI,dword ptr [EBP + 0x66]      ; 004636d5
        ;   Label: LAB_004636d5
    MOV ESI,dword ptr [EBP + 0x62]      ; 004636d8
    INC EDI                             ; 004636db
    ADD ESI,0x4                         ; 004636dc
    MOV dword ptr [EBP + 0x66],EDI      ; 004636df
    JMP 0x004636b1                      ; 004636e2
        ;   XREF to: 004636b1 (UNCONDITIONAL_JUMP)  ; LAB_004636b1
    CMP ESI,EBX                         ; 004636e4
        ;   Label: LAB_004636e4
    JZ 0x004636d5                       ; 004636e6
        ;   XREF to: 004636d5 (CONDITIONAL_JUMP)  ; LAB_004636d5
    PUSH ESI                            ; 004636e8
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004636e9
    CALL dword ptr [EAX + 0x114]        ; 004636ef
    ADD ESP,0x4                         ; 004636f5
    TEST EAX,EAX                        ; 004636f8
    JG 0x004636d5                       ; 004636fa
        ;   XREF to: 004636d5 (CONDITIONAL_JUMP)  ; LAB_004636d5
    FLD float ptr [ESI + 0x24]          ; 004636fc
    FLD float ptr [ESI + 0x28]          ; 004636ff
    FLD float ptr [ESI + 0x20]          ; 00463702
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00463705
    LEA EDI,[EBP + 0xfffffe62]          ; 00463708
    LEA ESI,[EBP + 0xfffffe1a]          ; 0046370e
    FSUB float ptr [EAX]                ; 00463714
    FXCH ST2                            ; 00463716
    FSUB float ptr [EAX + 0x4]          ; 00463718
    FXCH                                ; 0046371b
    FSUB float ptr [EAX + 0x8]          ; 0046371d
    FXCH ST2                            ; 00463720
    FSTP float ptr [EBP + 0xfffffe1a]   ; 00463722
    FSTP float ptr [EBP + 0xfffffe1e]   ; 00463728
    FSTP float ptr [EBP + 0xfffffe22]   ; 0046372e
    MOVSD ES:EDI,ESI                    ; 00463734
    MOVSD ES:EDI,ESI                    ; 00463735
    MOVSD ES:EDI,ESI                    ; 00463736
    FLD float ptr [EBP + 0xfffffe66]    ; 00463737
    FMUL ST0                            ; 0046373d
    FLD float ptr [EBP + 0xfffffe62]    ; 0046373f
    FMUL ST0                            ; 00463745
    FADDP                               ; 00463747
    FLD float ptr [EBP + 0xfffffe6a]    ; 00463749
    FMUL ST0                            ; 0046374f
    FADDP                               ; 00463751
    FSQRT                               ; 00463753
    FCOMP double ptr [0x005d10b4]       ; 00463755 | DAT_005d10b4
    FNSTSW AX                           ; 0046375b
    SAHF                                ; 0046375d
    JNC 0x004636d5                      ; 0046375e
        ;   XREF to: 004636d5 (CONDITIONAL_JUMP)  ; LAB_004636d5
    JMP 0x004632d0                      ; 00463764
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBP + 0x46],0x0      ; 00463769
        ;   Label: LAB_00463769
    JZ 0x004632d0                       ; 0046376d
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [0x005f565c]          ; 00463773 | DAT_005f565c
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00463779
    MOV dword ptr [EBX + 0x10b84],0x3   ; 0046377c
    LEA EAX,[EBX + 0x20]                ; 00463786
    FSTP float ptr [EBX + 0x10b88]      ; 00463789
    MOV ECX,dword ptr [EDX]             ; 0046378f
    MOV dword ptr [EAX],ECX             ; 00463791
    MOV ECX,dword ptr [EDX + 0x4]       ; 00463793
    MOV dword ptr [EAX + 0x4],ECX       ; 00463796
    MOV ECX,dword ptr [EDX + 0x8]       ; 00463799
    MOV dword ptr [EAX + 0x8],ECX       ; 0046379c
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0046379f
    TEST EDX,EDX                        ; 004637a5
    JZ 0x00463842                       ; 004637a7
        ;   XREF to: 00463842 (CONDITIONAL_JUMP)  ; LAB_00463842
    FLD float ptr [EDX + 0x20]          ; 004637ad
    FLD float ptr [EDX + 0x24]          ; 004637b0
    FLD float ptr [EDX + 0x28]          ; 004637b3
    LEA EDI,[EBP + 0xffffff22]          ; 004637b6
    LEA ESI,[EBP + 0xfffffece]          ; 004637bc
    FXCH ST2                            ; 004637c2
    FSUB float ptr [EAX]                ; 004637c4
    FXCH                                ; 004637c6
    FSUB float ptr [EAX + 0x4]          ; 004637c8
    FXCH ST2                            ; 004637cb
    FSUB float ptr [EAX + 0x8]          ; 004637cd
    FXCH                                ; 004637d0
    FSTP float ptr [EBP + 0xfffffece]   ; 004637d2
    FXCH                                ; 004637d8
    FSTP float ptr [EBP + 0xfffffed2]   ; 004637da
    FSTP float ptr [EBP + 0xfffffed6]   ; 004637e0
    LEA EAX,[EBP + 0xffffff22]          ; 004637e6
    MOVSD ES:EDI,ESI                    ; 004637ec
    MOVSD ES:EDI,ESI                    ; 004637ed
    MOVSD ES:EDI,ESI                    ; 004637ee
    PUSH EAX                            ; 004637ef
    LEA ESI,[EBP + 0xfffffdde]          ; 004637f0
    LEA EDI,[EBP + 0xfffffefe]          ; 004637f6
    CALL FUN_005838f0                   ; 004637fc
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[EBP + 0xfffffdde]          ; 00463801
    LEA EAX,[EBP + 0xfffffefe]          ; 00463807
    ADD ESP,0x4                         ; 0046380d
    LEA EDX,[EBX + 0x30]                ; 00463810
    MOVSD ES:EDI,ESI                    ; 00463813
    MOVSD ES:EDI,ESI                    ; 00463814
    MOVSD ES:EDI,ESI                    ; 00463815
    CMP EDX,EAX                         ; 00463816
    JZ 0x00463834                       ; 00463818
        ;   XREF to: 00463834 (CONDITIONAL_JUMP)  ; LAB_00463834
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 0046381a
    MOV dword ptr [EDX],EAX             ; 00463820
    MOV EAX,dword ptr [EBP + 0xffffff02] ; 00463822
    MOV dword ptr [EDX + 0x4],EAX       ; 00463828
    MOV EAX,dword ptr [EBP + 0xffffff06] ; 0046382b
    MOV dword ptr [EDX + 0x8],EAX       ; 00463831
    MOV dword ptr [EBX + 0x38],0x0      ; 00463834
        ;   Label: LAB_00463834
    MOV dword ptr [EBX + 0x30],0x0      ; 0046383b
    PUSH 0x5d0fc1                       ; 00463842 | = "hotbride-disappear.wav"
        ;   Label: LAB_00463842
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00463847
    PUSH EBX                            ; 0046384d
    CALL dword ptr [EAX + 0x34]         ; 0046384e
    ADD ESP,0x8                         ; 00463851
    JMP 0x004632d0                      ; 00463854
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV ECX,0x40400000                  ; 00463859
        ;   Label: caseD_3
    LEA ESI,[EBX + 0x2b4]               ; 0046385e
    XOR EDX,EDX                         ; 00463864
    XOR EDI,EDI                         ; 00463866
    MOV dword ptr [EBP + 0xffffff3a],EDX ; 00463868
    PUSH ESI                            ; 0046386e
    MOV dword ptr [EBP + 0xffffff3e],ECX ; 0046386f
    MOV dword ptr [EBP + 0xffffff42],EDX ; 00463875
    CALL FUN_00547890                   ; 0046387b
        ;   XREF to: 00547890 (UNCONDITIONAL_CALL)  ; undefined FUN_00547890()
    MOV dword ptr [EBP + 0x6e],EDI      ; 00463880
    MOV dword ptr [EBP + 0x5e],ESI      ; 00463883
    ADD ESP,0x4                         ; 00463886
    MOV EDX,dword ptr [EAX + 0x1d1f8]   ; 00463889
    MOV dword ptr [EBP + 0x56],EAX      ; 0046388f
    TEST EDX,EDX                        ; 00463892
    JLE 0x00463920                      ; 00463894
        ;   XREF to: 00463920 (CONDITIONAL_JUMP)  ; LAB_00463920
    MOV ESI,dword ptr [EBP + 0x6e]      ; 0046389a
        ;   Label: LAB_0046389a
    PUSH ESI                            ; 0046389d
    MOV EDI,dword ptr [EBP + 0x5e]      ; 0046389e
    PUSH EDI                            ; 004638a1
    LEA ESI,[EBP + 0xfffffeaa]          ; 004638a2
    CALL FUN_00546a90                   ; 004638a8
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    LEA EDI,[EBP + -0x7e]               ; 004638ad
    ADD ESP,0x8                         ; 004638b0
    LEA EAX,[EBP + -0x7e]               ; 004638b3
    LEA ESI,[EBP + 0xfffffeaa]          ; 004638b6
    PUSH EAX                            ; 004638bc
    MOVSD ES:EDI,ESI                    ; 004638bd
    MOVSD ES:EDI,ESI                    ; 004638be
    MOVSD ES:EDI,ESI                    ; 004638bf
    PUSH EBX                            ; 004638c0
    LEA ESI,[EBP + 0xfffffdea]          ; 004638c1
    CALL FUN_00408d70                   ; 004638c7
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004638cc
    PUSH 0xffff                         ; 004638cf
    LEA EAX,[EBP + 0xffffff3a]          ; 004638d4
    PUSH EAX                            ; 004638da
    PUSH 0x3f000000                     ; 004638db
    LEA EAX,[EBP + 0xfffffda2]          ; 004638e0
    LEA EDI,[EBP + 0xfffffda2]          ; 004638e6
    PUSH EAX                            ; 004638ec
    MOV EAX,[0x00614d30]                ; 004638ed | DAT_00614d30
    LEA ESI,[EBP + 0xfffffdea]          ; 004638f2
    PUSH EAX                            ; 004638f8
    MOVSD ES:EDI,ESI                    ; 004638f9
    MOVSD ES:EDI,ESI                    ; 004638fa
    MOVSD ES:EDI,ESI                    ; 004638fb
    CALL FUN_0049d230                   ; 004638fc
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; undefined FUN_0049d230()
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00463901
    INC EDX                             ; 00463904
    MOV dword ptr [EBP + 0x6e],EDX      ; 00463905
    MOV EAX,EDX                         ; 00463908
    MOV EDX,dword ptr [EBP + 0x56]      ; 0046390a
    MOV ECX,dword ptr [EDX + 0x1d1f8]   ; 0046390d
    ADD ESP,0x14                        ; 00463913
    CMP EAX,ECX                         ; 00463916
    JL 0x0046389a                       ; 00463918
        ;   XREF to: 0046389a (CONDITIONAL_JUMP)  ; LAB_0046389a
    LEA EAX,[EAX]                       ; 0046391a
    FLD float ptr [EBX + 0x10b88]       ; 00463920
        ;   Label: LAB_00463920
    FSUB float ptr [EBP + 0x92]         ; 00463926
    FST float ptr [EBX + 0x10b88]       ; 0046392c
    FLDZ                                ; 00463932
    FCOMPP                              ; 00463934
    FNSTSW AX                           ; 00463936
    SAHF                                ; 00463938
    JBE 0x004632d0                      ; 00463939
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0046393f
    PUSH 0xe                            ; 00463941
    MOV ESI,dword ptr [EBP + 0x5e]      ; 00463943
    MOV dword ptr [EBX + 0x10b88],0x0   ; 00463946
    PUSH ESI                            ; 00463950
    MOV dword ptr [EBX + 0x10b84],0x0   ; 00463951
    CALL FUN_00503620                   ; 0046395b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463960
    PUSH 0x41a00000                     ; 00463963
    PUSH 0x40000000                     ; 00463968
    CALL FUN_0040cf60                   ; 0046396d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463972
    ADD ESP,0x8                         ; 00463975
    MOV EAX,dword ptr [EBP + 0x76]      ; 00463978
    MOV dword ptr [EBX + 0x10b90],EAX   ; 0046397b
    JMP 0x004632d0                      ; 00463981
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0x10c20],0x0   ; 00463986
        ;   Label: caseD_7
    JNZ 0x004632d0                      ; 0046398d
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    MOV ESI,dword ptr [0x01ba5794]      ; 00463993 | DAT_01ba5794
    PUSH ESI                            ; 00463999
    LEA EAX,[EBX + 0x2b4]               ; 0046399a
    PUSH EAX                            ; 004639a0
    LEA ESI,[EBP + 0xfffffe6e]          ; 004639a1
    LEA EDI,[EBP + 0xffffff16]          ; 004639a7
    CALL FUN_00546a90                   ; 004639ad
        ;   XREF to: 00546a90 (UNCONDITIONAL_CALL)  ; undefined FUN_00546a90()
    ADD ESP,0x8                         ; 004639b2
    LEA EAX,[EBP + 0xffffff16]          ; 004639b5
    LEA ESI,[EBP + 0xfffffe6e]          ; 004639bb
    PUSH EAX                            ; 004639c1
    MOVSD ES:EDI,ESI                    ; 004639c2
    MOVSD ES:EDI,ESI                    ; 004639c3
    MOVSD ES:EDI,ESI                    ; 004639c4
    PUSH EBX                            ; 004639c5
    LEA ESI,[EBP + 0xfffffe86]          ; 004639c6
    LEA EDI,[EBP + 0xfffffe3e]          ; 004639cc
    CALL FUN_00408d70                   ; 004639d2
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 004639d7
    LEA ESI,[EBP + 0xfffffe86]          ; 004639da
    LEA EAX,[EBX + 0x30]                ; 004639e0
    PUSH 0x0                            ; 004639e3
    MOVSD ES:EDI,ESI                    ; 004639e5
    MOVSD ES:EDI,ESI                    ; 004639e6
    MOVSD ES:EDI,ESI                    ; 004639e7
    PUSH 0x1                            ; 004639e8
    LEA EDI,[EBP + 0xfffffe26]          ; 004639ea
    LEA ESI,[EBP + 0xfffffe3e]          ; 004639f0
    PUSH EAX                            ; 004639f6
    LEA EAX,[EBP + 0xfffffe26]          ; 004639f7
    MOVSD ES:EDI,ESI                    ; 004639fd
    MOVSD ES:EDI,ESI                    ; 004639fe
    MOVSD ES:EDI,ESI                    ; 004639ff
    PUSH EAX                            ; 00463a00
    MOV EDI,dword ptr [0x00614d30]      ; 00463a01 | DAT_00614d30
    PUSH EDI                            ; 00463a07
    CALL FUN_0049e680                   ; 00463a08
        ;   XREF to: 0049e680 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e680()
    ADD ESP,0x14                        ; 00463a0d
    LEA EDI,[EBP + 0xfffffe56]          ; 00463a10
    PUSH 0x0                            ; 00463a16
    LEA ESI,[EBX + 0x30]                ; 00463a18
    LEA EAX,[EBP + 0xfffffe56]          ; 00463a1b
    PUSH 0x1                            ; 00463a21
    MOVSD ES:EDI,ESI                    ; 00463a23
    MOVSD ES:EDI,ESI                    ; 00463a24
    MOVSD ES:EDI,ESI                    ; 00463a25
    PUSH EAX                            ; 00463a26
    LEA EAX,[EBP + 0xfffffe26]          ; 00463a27
    FLD float ptr [EBP + 0xfffffe56]    ; 00463a2d
    PUSH EAX                            ; 00463a33
    MOV EAX,[0x00614d30]                ; 00463a34 | DAT_00614d30
    FADD float ptr [0x005d10a4]         ; 00463a39 | DAT_005d10a4
    PUSH EAX                            ; 00463a3f
    FSTP float ptr [EBP + 0xfffffe56]   ; 00463a40
    CALL FUN_0049e680                   ; 00463a46
        ;   XREF to: 0049e680 (UNCONDITIONAL_CALL)  ; undefined FUN_0049e680()
    ADD ESP,0x14                        ; 00463a4b
    JMP 0x004632d0                      ; 00463a4e
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc9a]          ; 00463a53
        ;   Label: caseD_2
    PUSH EAX                            ; 00463a59
    CALL FUN_004222d0                   ; 00463a5a
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00463a5f
    PUSH 0x41700000                     ; 00463a62
    PUSH 0x40e00000                     ; 00463a67
    CALL FUN_0040cf60                   ; 00463a6c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463a71
    ADD ESP,0x8                         ; 00463a74
    LEA EAX,[EBP + 0xfffffc9a]          ; 00463a77
    MOV EDX,dword ptr [0x01ba5778]      ; 00463a7d | DAT_01ba5778
    PUSH EAX                            ; 00463a83
    LEA EAX,[EDX*0x4 + 0x0]             ; 00463a84
    LEA ESI,[EBP + 0xfffffd7e]          ; 00463a8b
    SUB EAX,EDX                         ; 00463a91
    MOV dword ptr [EBP + 0xfffffcce],EBX ; 00463a93
    MOV EDX,EAX                         ; 00463a99
    MOV dword ptr [EBP + 0xfffffcd2],EBX ; 00463a9b
    SHL EDX,0x4                         ; 00463aa1
    LEA EAX,[EBX + 0x1134]              ; 00463aa4
    PUSH 0x3ecccccd                     ; 00463aaa
    ADD EAX,EDX                         ; 00463aaf
    LEA EDI,[EBP + 0xfffffe0e]          ; 00463ab1
    PUSH EAX                            ; 00463ab7
    MOV EAX,0x265370c                   ; 00463ab8
    FLD float ptr [EBP + 0x76]          ; 00463abd
    PUSH EAX                            ; 00463ac0 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffc9e]   ; 00463ac1
    CALL FUN_00591530                   ; 00463ac7
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00463acc
    LEA EAX,[EBP + 0xfffffe0e]          ; 00463acf
    LEA ESI,[EBP + 0xfffffd7e]          ; 00463ad5
    PUSH EAX                            ; 00463adb
    MOVSD ES:EDI,ESI                    ; 00463adc
    MOVSD ES:EDI,ESI                    ; 00463add
    MOVSD ES:EDI,ESI                    ; 00463ade
    PUSH EBX                            ; 00463adf
    LEA ESI,[EBP + 0xfffffd96]          ; 00463ae0
    CALL FUN_00408d70                   ; 00463ae6
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00463aeb
    LEA EAX,[EBP + -0x36]               ; 00463aee
    PUSH EAX                            ; 00463af1
    LEA EDI,[EBP + -0x36]               ; 00463af2
    LEA ESI,[EBP + 0xfffffd96]          ; 00463af5
    PUSH EBX                            ; 00463afb
    MOVSD ES:EDI,ESI                    ; 00463afc
    MOVSD ES:EDI,ESI                    ; 00463afd
    MOVSD ES:EDI,ESI                    ; 00463afe
    CALL FUN_00488110                   ; 00463aff
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00463b04
    MOV dword ptr [EBX + 0x10ba0],0x1   ; 00463b07
    JMP 0x004632d0                      ; 00463b11
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc22]          ; 00463b16
        ;   Label: caseD_13
    PUSH EAX                            ; 00463b1c
    CALL FUN_004222d0                   ; 00463b1d
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00463b22
    PUSH 0x41700000                     ; 00463b25
    PUSH 0x40e00000                     ; 00463b2a
    LEA ESI,[EBP + 0xfffffeda]          ; 00463b2f
    CALL FUN_0040cf60                   ; 00463b35
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463b3a
    ADD ESP,0x8                         ; 00463b3d
    LEA EAX,[EBP + 0xfffffc22]          ; 00463b40
    MOV EDX,dword ptr [0x01ba5778]      ; 00463b46 | DAT_01ba5778
    PUSH EAX                            ; 00463b4c
    LEA EAX,[EDX*0x4 + 0x0]             ; 00463b4d
    MOV dword ptr [EBP + 0xfffffc56],EBX ; 00463b54
    SUB EAX,EDX                         ; 00463b5a
    MOV dword ptr [EBP + 0xfffffc5a],EBX ; 00463b5c
    SHL EAX,0x4                         ; 00463b62
    LEA EDX,[EBX + 0x1134]              ; 00463b65
    PUSH 0x3ecccccd                     ; 00463b6b
    ADD EAX,EDX                         ; 00463b70
    LEA EDI,[EBP + -0x72]               ; 00463b72
    PUSH EAX                            ; 00463b75
    FLD float ptr [EBP + 0x76]          ; 00463b76
    PUSH 0x265370c                      ; 00463b79 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffc26]   ; 00463b7e
    CALL FUN_00591530                   ; 00463b84
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00463b89
    LEA EAX,[EBP + -0x72]               ; 00463b8c
    LEA ESI,[EBP + 0xfffffeda]          ; 00463b8f
    PUSH EAX                            ; 00463b95
    MOVSD ES:EDI,ESI                    ; 00463b96
    MOVSD ES:EDI,ESI                    ; 00463b97
    MOVSD ES:EDI,ESI                    ; 00463b98
    PUSH EBX                            ; 00463b99
    LEA ESI,[EBP + -0x1e]               ; 00463b9a
    CALL FUN_00408d70                   ; 00463b9d
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00463ba2
    LEA EAX,[EBP + 0xffffff76]          ; 00463ba5
    PUSH EAX                            ; 00463bab
    LEA EDI,[EBP + 0xffffff76]          ; 00463bac
    LEA ESI,[EBP + -0x1e]               ; 00463bb2
    PUSH EBX                            ; 00463bb5
    MOVSD ES:EDI,ESI                    ; 00463bb6
    MOVSD ES:EDI,ESI                    ; 00463bb7
    MOVSD ES:EDI,ESI                    ; 00463bb8
    CALL FUN_00488110                   ; 00463bb9
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00463bbe
    MOV dword ptr [EBX + 0x10ba0],0x1   ; 00463bc1
    JMP 0x004632d0                      ; 00463bcb
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffcd6]          ; 00463bd0
        ;   Label: caseD_14
    PUSH EAX                            ; 00463bd6
    CALL FUN_004222d0                   ; 00463bd7
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00463bdc
    PUSH 0x41700000                     ; 00463bdf
    PUSH 0x40e00000                     ; 00463be4
    LEA ESI,[EBP + 0xfffffd72]          ; 00463be9
    CALL FUN_0040cf60                   ; 00463bef
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463bf4
    ADD ESP,0x8                         ; 00463bf7
    LEA EAX,[EBP + 0xfffffcd6]          ; 00463bfa
    MOV EDX,dword ptr [0x01ba5778]      ; 00463c00 | DAT_01ba5778
    PUSH EAX                            ; 00463c06
    LEA EAX,[EDX*0x4 + 0x0]             ; 00463c07
    MOV dword ptr [EBP + 0xfffffd0a],EBX ; 00463c0e
    SUB EAX,EDX                         ; 00463c14
    MOV dword ptr [EBP + 0xfffffd0e],EBX ; 00463c16
    SHL EAX,0x4                         ; 00463c1c
    LEA EDX,[EBX + 0x1134]              ; 00463c1f
    PUSH 0x3ecccccd                     ; 00463c25
    ADD EAX,EDX                         ; 00463c2a
    LEA EDI,[EBP + 0x1e]                ; 00463c2c
    PUSH EAX                            ; 00463c2f
    FLD float ptr [EBP + 0x76]          ; 00463c30
    PUSH 0x265370c                      ; 00463c33 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffcda]   ; 00463c38
    CALL FUN_00591530                   ; 00463c3e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00463c43
    LEA EAX,[EBP + 0x1e]                ; 00463c46
    LEA ESI,[EBP + 0xfffffd72]          ; 00463c49
    PUSH EAX                            ; 00463c4f
    MOVSD ES:EDI,ESI                    ; 00463c50
    MOVSD ES:EDI,ESI                    ; 00463c51
    MOVSD ES:EDI,ESI                    ; 00463c52
    PUSH EBX                            ; 00463c53
    LEA ESI,[EBP + 0xfffffd4e]          ; 00463c54
    CALL FUN_00408d70                   ; 00463c5a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00463c5f
    LEA EAX,[EBP + -0x66]               ; 00463c62
    PUSH EAX                            ; 00463c65
    LEA EDI,[EBP + -0x66]               ; 00463c66
    LEA ESI,[EBP + 0xfffffd4e]          ; 00463c69
    PUSH EBX                            ; 00463c6f
    MOVSD ES:EDI,ESI                    ; 00463c70
    MOVSD ES:EDI,ESI                    ; 00463c71
    MOVSD ES:EDI,ESI                    ; 00463c72
    CALL FUN_00488110                   ; 00463c73
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00463c78
    MOV dword ptr [EBX + 0x10ba0],0x1   ; 00463c7b
    JMP 0x004632d0                      ; 00463c85
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffd12]          ; 00463c8a
        ;   Label: caseD_15
    PUSH EAX                            ; 00463c90
    CALL FUN_004222d0                   ; 00463c91
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 00463c96
    PUSH 0x41700000                     ; 00463c99
    PUSH 0x40e00000                     ; 00463c9e
    LEA ESI,[EBP + 0xfffffd8a]          ; 00463ca3
    CALL FUN_0040cf60                   ; 00463ca9
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463cae
    ADD ESP,0x8                         ; 00463cb1
    LEA EAX,[EBP + 0xfffffd12]          ; 00463cb4
    MOV EDX,dword ptr [0x01ba5780]      ; 00463cba | DAT_01ba5780
    PUSH EAX                            ; 00463cc0
    LEA EAX,[EDX*0x4 + 0x0]             ; 00463cc1
    MOV dword ptr [EBP + 0xfffffd46],EBX ; 00463cc8
    SUB EAX,EDX                         ; 00463cce
    MOV dword ptr [EBP + 0xfffffd4a],EBX ; 00463cd0
    SHL EAX,0x4                         ; 00463cd6
    LEA EDX,[EBX + 0x1134]              ; 00463cd9
    PUSH 0x3ecccccd                     ; 00463cdf
    ADD EAX,EDX                         ; 00463ce4
    LEA EDI,[EBP + 0xfffffd5a]          ; 00463ce6
    PUSH EAX                            ; 00463cec
    FLD float ptr [EBP + 0x76]          ; 00463ced
    PUSH 0x265370c                      ; 00463cf0 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffd16]   ; 00463cf5
    CALL FUN_00591530                   ; 00463cfb
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 00463d00
    LEA EAX,[EBP + 0xfffffd5a]          ; 00463d03
    LEA ESI,[EBP + 0xfffffd8a]          ; 00463d09
    PUSH EAX                            ; 00463d0f
    MOVSD ES:EDI,ESI                    ; 00463d10
    MOVSD ES:EDI,ESI                    ; 00463d11
    MOVSD ES:EDI,ESI                    ; 00463d12
    PUSH EBX                            ; 00463d13
    LEA ESI,[EBP + 0xffffff5e]          ; 00463d14
    CALL FUN_00408d70                   ; 00463d1a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00463d1f
    LEA EAX,[EBP + 0xfffffe32]          ; 00463d22
    PUSH EAX                            ; 00463d28
    LEA EDI,[EBP + 0xfffffe32]          ; 00463d29
    LEA ESI,[EBP + 0xffffff5e]          ; 00463d2f
    PUSH EBX                            ; 00463d35
    MOVSD ES:EDI,ESI                    ; 00463d36
    MOVSD ES:EDI,ESI                    ; 00463d37
    MOVSD ES:EDI,ESI                    ; 00463d38
    CALL FUN_00488110                   ; 00463d39
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00463d3e
    JMP 0x004632d0                      ; 00463d41
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0x10a64],0x0   ; 00463d46
        ;   Label: caseD_11
    JNZ 0x004632d0                      ; 00463d4d
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    CMP dword ptr [EBX + 0xdc],0x0      ; 00463d53
    JNZ 0x004632d0                      ; 00463d5a
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH EAX                            ; 00463d60
    LEA EAX,[EBX + 0x2b4]               ; 00463d61
    PUSH EAX                            ; 00463d67
    LEA ESI,[EBP + 0xfffffdd2]          ; 00463d68
    LEA EDI,[EBP + 0xfffffe9e]          ; 00463d6e
    CALL FUN_005469a0                   ; 00463d74
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005469a0()
    ADD ESP,0x8                         ; 00463d79
    LEA EAX,[EBP + 0xfffffe9e]          ; 00463d7c
    LEA ESI,[EBP + 0xfffffdd2]          ; 00463d82
    PUSH EAX                            ; 00463d88
    MOVSD ES:EDI,ESI                    ; 00463d89
    MOVSD ES:EDI,ESI                    ; 00463d8a
    MOVSD ES:EDI,ESI                    ; 00463d8b
    PUSH EBX                            ; 00463d8c
    LEA ESI,[EBP + 0xfffffe4a]          ; 00463d8d
    CALL FUN_00408d70                   ; 00463d93
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00463d98
    PUSH 0x0                            ; 00463d9b
    LEA EAX,[EBP + 0xffffff6a]          ; 00463d9d
    LEA EDI,[EBP + 0xffffff6a]          ; 00463da3
    PUSH EAX                            ; 00463da9
    MOV EAX,[0x006167e0]                ; 00463daa | DAT_006167e0
    LEA ESI,[EBP + 0xfffffe4a]          ; 00463daf
    PUSH EAX                            ; 00463db5
    MOVSD ES:EDI,ESI                    ; 00463db6
    MOVSD ES:EDI,ESI                    ; 00463db7
    MOVSD ES:EDI,ESI                    ; 00463db8
    CALL FUN_004c9ad0                   ; 00463db9
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c9ad0()
    ADD ESP,0xc                         ; 00463dbe
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00463dc1
        ;   Label: caseD_10
    JMP 0x004632d0                      ; 00463dcb
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x01cedef4]                ; 00463dd0 | DAT_01cedef4
        ;   Label: caseD_c
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00463dd5
    PUSH EAX                            ; 00463ddc
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00463ddd
    CALL dword ptr [EDX + 0x114]        ; 00463de3
    ADD ESP,0x4                         ; 00463de9
    TEST EAX,EAX                        ; 00463dec
    JNZ 0x004632d0                      ; 00463dee
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0x10b1c]             ; 00463df4
    PUSH EAX                            ; 00463dfa
    MOV ESI,dword ptr [0x006141f0]      ; 00463dfb | DAT_006141f0
    PUSH ESI                            ; 00463e01
    CALL FUN_0048e340                   ; 00463e02
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00463e07
    TEST EAX,EAX                        ; 00463e0a
    JZ 0x004632d0                       ; 00463e0c
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463e12
    PUSH 0xd                            ; 00463e14
    LEA EAX,[EBX + 0x2b4]               ; 00463e16
    PUSH EAX                            ; 00463e1c
    CALL FUN_00503620                   ; 00463e1d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463e22
    JMP 0x004632d0                      ; 00463e25
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x01cedef4]                ; 00463e2a | DAT_01cedef4
        ;   Label: caseD_12
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 00463e2f
    PUSH EAX                            ; 00463e36
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00463e37
    CALL dword ptr [EDX + 0x114]        ; 00463e3d
    ADD ESP,0x4                         ; 00463e43
    TEST EAX,EAX                        ; 00463e46
    JNZ 0x004632d0                      ; 00463e48
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0x10b1c]             ; 00463e4e
    PUSH EAX                            ; 00463e54
    MOV ECX,dword ptr [0x006141f0]      ; 00463e55 | DAT_006141f0
    PUSH ECX                            ; 00463e5b
    CALL FUN_0048e340                   ; 00463e5c
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00463e61
    TEST EAX,EAX                        ; 00463e64
    JZ 0x004632d0                       ; 00463e66
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463e6c
    PUSH 0xd                            ; 00463e6e
    LEA EAX,[EBX + 0x2b4]               ; 00463e70
    PUSH EAX                            ; 00463e76
    CALL FUN_00503620                   ; 00463e77
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463e7c
    JMP 0x004632d0                      ; 00463e7f
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0x10b1c]             ; 00463e84
        ;   Label: caseD_1a
    PUSH EAX                            ; 00463e8a
    MOV EDI,dword ptr [0x006141f0]      ; 00463e8b | DAT_006141f0
    PUSH EDI                            ; 00463e91
    CALL FUN_0048e340                   ; 00463e92
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00463e97
    TEST EAX,EAX                        ; 00463e9a
    JZ 0x004632d0                       ; 00463e9c
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463ea2
    PUSH 0x0                            ; 00463ea4
    LEA EAX,[EBX + 0x2b4]               ; 00463ea6
    PUSH EAX                            ; 00463eac
    CALL FUN_00503620                   ; 00463ead
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463eb2
    JMP 0x004632d0                      ; 00463eb5
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBX + 0x10b1c]             ; 00463eba
        ;   Label: caseD_f
    PUSH EAX                            ; 00463ec0
    MOV EDX,dword ptr [0x006141f0]      ; 00463ec1 | DAT_006141f0
    PUSH EDX                            ; 00463ec7
    CALL FUN_0048e340                   ; 00463ec8
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; undefined FUN_0048e340()
    ADD ESP,0x8                         ; 00463ecd
    TEST EAX,EAX                        ; 00463ed0
    JZ 0x004632d0                       ; 00463ed2
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463ed8
    PUSH 0xb                            ; 00463eda
    LEA EAX,[EBX + 0x2b4]               ; 00463edc
    PUSH EAX                            ; 00463ee2
    CALL FUN_00503620                   ; 00463ee3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463ee8
    JMP 0x004632d0                      ; 00463eeb
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 00463ef0
        ;   Label: caseD_8
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00463ef6
    PUSH EBX                            ; 00463efc
    CALL dword ptr [EAX + 0x150]        ; 00463efd
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00463f03
    ADD ESP,0x8                         ; 00463f09
    TEST EAX,EAX                        ; 00463f0c
    JZ 0x00463f91                       ; 00463f0e
        ;   XREF to: 00463f91 (CONDITIONAL_JUMP)  ; LAB_00463f91
    FLD float ptr [EBX + 0x25a8]        ; 00463f14
    FCOMP float ptr [0x005f564c]        ; 00463f1a | DAT_005f564c
    FNSTSW AX                           ; 00463f20
    SAHF                                ; 00463f22
    JC 0x00463f34                       ; 00463f23
        ;   XREF to: 00463f34 (CONDITIONAL_JUMP)  ; LAB_00463f34
    FLD float ptr [EBX + 0x10b90]       ; 00463f25
    FLDZ                                ; 00463f2b
    FCOMPP                              ; 00463f2d
    FNSTSW AX                           ; 00463f2f
    SAHF                                ; 00463f31
    JBE 0x00463f65                      ; 00463f32
        ;   XREF to: 00463f65 (CONDITIONAL_JUMP)  ; LAB_00463f65
    PUSH 0x1                            ; 00463f34
        ;   Label: LAB_00463f34
    PUSH 0x0                            ; 00463f36
    LEA EAX,[EBX + 0x2b4]               ; 00463f38
    PUSH EAX                            ; 00463f3e
    CALL FUN_00503620                   ; 00463f3f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463f44
    PUSH 0x41a00000                     ; 00463f47
    PUSH 0x40000000                     ; 00463f4c
    CALL FUN_0040cf60                   ; 00463f51
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 00463f56
    ADD ESP,0x8                         ; 00463f59
    MOV EAX,dword ptr [EBP + 0x76]      ; 00463f5c
    MOV dword ptr [EBX + 0x10b90],EAX   ; 00463f5f
    MOV EDX,dword ptr [EBX + 0x10ba0]   ; 00463f65
        ;   Label: LAB_00463f65
    LEA EAX,[EBX + 0x2b4]               ; 00463f6b
    TEST EDX,EDX                        ; 00463f71
    JZ 0x00463fc0                       ; 00463f73
        ;   XREF to: 00463fc0 (CONDITIONAL_JUMP)  ; LAB_00463fc0
    PUSH 0x1                            ; 00463f75
    PUSH 0x19                           ; 00463f77
    PUSH EAX                            ; 00463f79
    CALL FUN_00503620                   ; 00463f7a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463f7f
    MOV dword ptr [EBX + 0x10ba0],0x0   ; 00463f82
    JMP 0x004632d0                      ; 00463f8c
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 00463f91
        ;   Label: LAB_00463f91
    PUSH EBX                            ; 00463f97
    CALL FUN_00488970                   ; 00463f98
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 00463f9d
    TEST EAX,EAX                        ; 00463fa0
    JZ 0x004632d0                       ; 00463fa2
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463fa8
    PUSH 0xe                            ; 00463faa
    LEA EAX,[EBX + 0x2b4]               ; 00463fac
    PUSH EAX                            ; 00463fb2
    CALL FUN_00503620                   ; 00463fb3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463fb8
    JMP 0x004632d0                      ; 00463fbb
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00463fc0
        ;   Label: LAB_00463fc0
    PUSH 0x9                            ; 00463fc2
    PUSH EAX                            ; 00463fc4
    CALL FUN_00503620                   ; 00463fc5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00463fca
    JMP 0x004632d0                      ; 00463fcd
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0x10b8c]       ; 00463fd2
        ;   Label: caseD_9
    FLDZ                                ; 00463fd8
    FCOMPP                              ; 00463fda
    FNSTSW AX                           ; 00463fdc
    SAHF                                ; 00463fde
    JC 0x00464037                       ; 00463fdf
        ;   XREF to: 00464037 (CONDITIONAL_JUMP)  ; LAB_00464037
    MOV EDI,dword ptr [EBX + 0x10b80]   ; 00463fe1
    PUSH EDI                            ; 00463fe7
    PUSH 0x5d0fd8                       ; 00463fe8 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffa92]          ; 00463fed
    PUSH EAX                            ; 00463ff3
    CALL FUN_005b7790                   ; 00463ff4
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00463ff9
    LEA EAX,[EBP + 0xfffffa92]          ; 00463ffc
    PUSH 0x3f800000                     ; 00464002
    PUSH EAX                            ; 00464007
    PUSH EBX                            ; 00464008
    CALL FUN_00465400                   ; 00464009
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 0046400e
    PUSH 0x3e4ccccd                     ; 00464011
    CALL FUN_0040d060                   ; 00464016
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 0046401b
    TEST EAX,EAX                        ; 0046401e
    JZ 0x00464037                       ; 00464020
        ;   XREF to: 00464037 (CONDITIONAL_JUMP)  ; LAB_00464037
    LEA EAX,[EBP + 0xfffffa92]          ; 00464022
    PUSH 0x3f800000                     ; 00464028
    PUSH EAX                            ; 0046402d
    PUSH EBX                            ; 0046402e
    CALL FUN_00465400                   ; 0046402f
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 00464034
    PUSH dword ptr [EBP + 0x92]         ; 00464037
        ;   Label: LAB_00464037
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046403d
    PUSH EBX                            ; 00464043
    CALL dword ptr [EAX + 0x150]        ; 00464044
    ADD ESP,0x8                         ; 0046404a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046404d
    LEA ESI,[EBX + 0x2b4]               ; 00464053
    TEST EAX,EAX                        ; 00464059
    JZ 0x0046409c                       ; 0046405b
        ;   XREF to: 0046409c (CONDITIONAL_JUMP)  ; LAB_0046409c
    FLD float ptr [EBX + 0x10b90]       ; 0046405d
    FLDZ                                ; 00464063
    FCOMPP                              ; 00464065
    FNSTSW AX                           ; 00464067
    SAHF                                ; 00464069
    JBE 0x004640c5                      ; 0046406a
        ;   XREF to: 004640c5 (CONDITIONAL_JUMP)  ; LAB_004640c5
    PUSH 0x41a00000                     ; 0046406c
    PUSH 0x40000000                     ; 00464071
    CALL FUN_0040cf60                   ; 00464076
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 0046407b
    PUSH 0x1                            ; 0046407e
    MOV dword ptr [EBP + 0x76],EAX      ; 00464080
    PUSH 0x0                            ; 00464083
    FLD float ptr [EBP + 0x76]          ; 00464085
    PUSH ESI                            ; 00464088
    FSTP float ptr [EBX + 0x10b90]      ; 00464089
    CALL FUN_00503620                   ; 0046408f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00464094
    JMP 0x004632d0                      ; 00464097
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 0046409c
        ;   Label: LAB_0046409c
    PUSH EBX                            ; 004640a2
    CALL FUN_00488970                   ; 004640a3
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 004640a8
    TEST EAX,EAX                        ; 004640ab
    JZ 0x004632d0                       ; 004640ad
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 004640b3
        ;   Label: LAB_004640b3
    PUSH 0xe                            ; 004640b5
    PUSH ESI                            ; 004640b7
    CALL FUN_00503620                   ; 004640b8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004640bd
    JMP 0x004632d0                      ; 004640c0
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3db2b8c2                     ; 004640c5
        ;   Label: LAB_004640c5
    PUSH 0x3f000000                     ; 004640ca
    MOV EAX,[0x005f5640]                ; 004640cf | DAT_005f5640
    XOR EDX,EDX                         ; 004640d4
    MOV dword ptr [EBP + 0xffffff46],EDX ; 004640d6
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 004640dc
    LEA EAX,[EBP + 0xffffff46]          ; 004640e2
    MOV dword ptr [EBP + 0xffffff4a],EDX ; 004640e8
    PUSH EAX                            ; 004640ee
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004640ef
    PUSH EAX                            ; 004640f5
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004640f6
    CALL dword ptr [EDX + 0xcc]         ; 004640fc
    ADD ESP,0x4                         ; 00464102
    PUSH EAX                            ; 00464105
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00464106
    ADD EAX,0x20                        ; 0046410c
    PUSH EAX                            ; 0046410f
    PUSH EBX                            ; 00464110
    CALL FUN_00423000                   ; 00464111
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 00464116
    TEST EAX,EAX                        ; 00464119
    JL 0x00464160                       ; 0046411b
        ;   XREF to: 00464160 (CONDITIONAL_JUMP)  ; LAB_00464160
    JLE 0x00464187                      ; 0046411d
        ;   XREF to: 00464187 (CONDITIONAL_JUMP)  ; LAB_00464187
    FLD float ptr [EBX + 0x10a74]       ; 0046411f
    FLDZ                                ; 00464125
    FCOMPP                              ; 00464127
    FNSTSW AX                           ; 00464129
    SAHF                                ; 0046412b
    JC 0x004632d0                       ; 0046412c
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00464132
    PUSH 0x2                            ; 00464134
    PUSH ESI                            ; 00464136
    CALL FUN_00503620                   ; 00464137
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046413c
    PUSH 0x5d1007                       ; 0046413f | = "hotbride-bite?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00464144
    PUSH EBX                            ; 0046414a
    CALL dword ptr [EAX + 0x34]         ; 0046414b
    ADD ESP,0x8                         ; 0046414e
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 00464151
    JMP 0x004632d0                      ; 0046415b
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH EBX                            ; 00464160
        ;   Label: LAB_00464160
    PUSH 0x5d0fe6                       ; 00464161 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 00464166 | PTR_DAT_00609ed0
    PUSH EDI                            ; 0046416c | DAT_007c158c
    CALL FUN_00436710                   ; 0046416d
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 00464172
    PUSH 0x1                            ; 00464175
    PUSH 0x8                            ; 00464177
    PUSH ESI                            ; 00464179
    CALL FUN_00503620                   ; 0046417a
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046417f
    JMP 0x004632d0                      ; 00464182
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EDI,[EBP + -0x42]               ; 00464187
        ;   Label: LAB_00464187
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0046418a
    LEA ESI,[EBP + 0xfffffee6]          ; 00464190
    LEA EDX,[EBX + 0x20]                ; 00464196
    FLD float ptr [EAX + 0x24]          ; 00464199
    FLD float ptr [EAX + 0x28]          ; 0046419c
    FLD float ptr [EAX + 0x20]          ; 0046419f
    LEA EAX,[EBP + -0x42]               ; 004641a2
    FSUB float ptr [EDX]                ; 004641a5
    FXCH ST2                            ; 004641a7
    FSUB float ptr [EDX + 0x4]          ; 004641a9
    FXCH                                ; 004641ac
    FSUB float ptr [EDX + 0x8]          ; 004641ae
    FXCH ST2                            ; 004641b1
    FSTP float ptr [EBP + 0xfffffee6]   ; 004641b3
    FSTP float ptr [EBP + 0xfffffeea]   ; 004641b9
    FSTP float ptr [EBP + 0xfffffeee]   ; 004641bf
    LEA EDX,[EBP + 0xffffff52]          ; 004641c5
    MOVSD ES:EDI,ESI                    ; 004641cb
    MOVSD ES:EDI,ESI                    ; 004641cc
    MOVSD ES:EDI,ESI                    ; 004641cd
    CMP EDX,EAX                         ; 004641ce
    JZ 0x004641ed                       ; 004641d0
        ;   XREF to: 004641ed (CONDITIONAL_JUMP)  ; LAB_004641ed
    MOV EAX,dword ptr [EBP + -0x42]     ; 004641d2
    MOV dword ptr [EBP + 0xffffff52],EAX ; 004641d5
    MOV EAX,dword ptr [EBP + -0x3e]     ; 004641db
    MOV dword ptr [EBP + 0xffffff56],EAX ; 004641de
    MOV EAX,dword ptr [EBP + -0x3a]     ; 004641e4
    MOV dword ptr [EBP + 0xffffff5a],EAX ; 004641e7
    FLD float ptr [EBP + 0xffffff56]    ; 004641ed
        ;   Label: LAB_004641ed
    FMUL ST0                            ; 004641f3
    FLD float ptr [EBP + 0xffffff52]    ; 004641f5
    FMUL ST0                            ; 004641fb
    FADDP                               ; 004641fd
    FLD float ptr [EBP + 0xffffff5a]    ; 004641ff
    FMUL ST0                            ; 00464205
    FADDP                               ; 00464207
    FSQRT                               ; 00464209
    FCOMP double ptr [0x005d1094]       ; 0046420b | DAT_005d1094
    FNSTSW AX                           ; 00464211
    SAHF                                ; 00464213
    JBE 0x004632d0                      ; 00464214
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xffffff52]          ; 0046421a
    PUSH EAX                            ; 00464220
    LEA ESI,[EBP + -0x6]                ; 00464221
    LEA EDI,[EBP + 0xffffff2e]          ; 00464224
    CALL FUN_005838f0                   ; 0046422a
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005838f0()
    LEA ESI,[EBP + -0x6]                ; 0046422f
    MOVSD ES:EDI,ESI                    ; 00464232
    MOVSD ES:EDI,ESI                    ; 00464233
    MOVSD ES:EDI,ESI                    ; 00464234
    ADD ESP,0x4                         ; 00464235
    FLD float ptr [EBP + 0xffffff32]    ; 00464238
    FSUB float ptr [EBX + 0x34]         ; 0046423e
    SUB ESP,0x4                         ; 00464241
    FSTP float ptr [ESP]                ; 00464244
    CALL FUN_0040d0c0                   ; 00464247
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0046424c
    FLD float ptr [EBP + 0x76]          ; 0046424f
    FABS                                ; 00464252
    ADD ESP,0x4                         ; 00464254
    FCOMP double ptr [0x005d109c]       ; 00464257 | DAT_005d109c
    FNSTSW AX                           ; 0046425d
    SAHF                                ; 0046425f
    JNC 0x004632d0                      ; 00464260
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3f490fdb                     ; 00464266
    PUSH 0xbf490fdb                     ; 0046426b
    CALL FUN_0040cf60                   ; 00464270
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 00464275
    MOV dword ptr [EBP + 0x76],EAX      ; 00464278
    PUSH 0x1                            ; 0046427b
    FLD float ptr [EBP + 0x76]          ; 0046427d
    LEA EAX,[EBX + 0x2b4]               ; 00464280
    PUSH 0x3                            ; 00464286
    FADD float ptr [EBX + 0x34]         ; 00464288
    PUSH EAX                            ; 0046428b
    FSTP float ptr [EBX + 0x34]         ; 0046428c
    CALL FUN_00503620                   ; 0046428f
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00464294
    JMP 0x004632d0                      ; 00464297
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    LEA EAX,[EBP + 0xfffffc5e]          ; 0046429c
        ;   Label: caseD_3
    PUSH EAX                            ; 004642a2
    CALL FUN_004222d0                   ; 004642a3
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004222d0()
    ADD ESP,0x4                         ; 004642a8
    PUSH 0x41700000                     ; 004642ab
    PUSH 0x40e00000                     ; 004642b0
    CALL FUN_0040cf60                   ; 004642b5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    MOV dword ptr [EBP + 0x76],EAX      ; 004642ba
    ADD ESP,0x8                         ; 004642bd
    LEA EAX,[EBP + 0xfffffc5e]          ; 004642c0
    MOV EDX,dword ptr [0x01ba5778]      ; 004642c6 | DAT_01ba5778
    PUSH EAX                            ; 004642cc
    LEA EAX,[EDX*0x4 + 0x0]             ; 004642cd
    LEA ESI,[EBP + 0x12]                ; 004642d4
    SUB EAX,EDX                         ; 004642d7
    MOV dword ptr [EBP + 0xfffffc92],EBX ; 004642d9
    MOV EDX,EAX                         ; 004642df
    MOV dword ptr [EBP + 0xfffffc96],EBX ; 004642e1
    SHL EDX,0x4                         ; 004642e7
    LEA EAX,[EBX + 0x1134]              ; 004642ea
    PUSH 0x3ecccccd                     ; 004642f0
    ADD EAX,EDX                         ; 004642f5
    LEA EDI,[EBP + 0x6]                 ; 004642f7
    PUSH EAX                            ; 004642fa
    MOV EAX,0x265370c                   ; 004642fb
    FLD float ptr [EBP + 0x76]          ; 00464300
    PUSH EAX                            ; 00464303 | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffc62]   ; 00464304
    CALL FUN_00591530                   ; 0046430a
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined FUN_00591530()
    ADD ESP,0x8                         ; 0046430f
    LEA EAX,[EBP + 0x6]                 ; 00464312
    LEA ESI,[EBP + 0x12]                ; 00464315
    PUSH EAX                            ; 00464318
    MOVSD ES:EDI,ESI                    ; 00464319
    MOVSD ES:EDI,ESI                    ; 0046431a
    MOVSD ES:EDI,ESI                    ; 0046431b
    PUSH EBX                            ; 0046431c
    LEA ESI,[EBP + 0xfffffe92]          ; 0046431d
    CALL FUN_00408d70                   ; 00464323
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d70()
    ADD ESP,0x8                         ; 00464328
    LEA EAX,[EBP + -0x4e]               ; 0046432b
    PUSH EAX                            ; 0046432e
    LEA EDI,[EBP + -0x4e]               ; 0046432f
    LEA ESI,[EBP + 0xfffffe92]          ; 00464332
    PUSH EBX                            ; 00464338
    MOVSD ES:EDI,ESI                    ; 00464339
    MOVSD ES:EDI,ESI                    ; 0046433a
    MOVSD ES:EDI,ESI                    ; 0046433b
    CALL FUN_00488110                   ; 0046433c
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; undefined FUN_00488110()
    ADD ESP,0x10                        ; 00464341
    JMP 0x004632d0                      ; 00464344
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH dword ptr [EBP + 0x92]         ; 00464349
        ;   Label: caseD_0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046434f
    PUSH EBX                            ; 00464355
    CALL dword ptr [EAX + 0x150]        ; 00464356
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 0046435c
    ADD ESP,0x8                         ; 00464362
    TEST EDX,EDX                        ; 00464365
    JNZ 0x00464398                      ; 00464367
        ;   XREF to: 00464398 (CONDITIONAL_JUMP)  ; LAB_00464398
    PUSH dword ptr [EBP + 0x92]         ; 00464369
    PUSH EBX                            ; 0046436f
    CALL FUN_00488970                   ; 00464370
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 00464375
    TEST EAX,EAX                        ; 00464378
    JZ 0x004632d0                       ; 0046437a
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 00464380
    PUSH 0xe                            ; 00464382
    LEA EAX,[EBX + 0x2b4]               ; 00464384
    PUSH EAX                            ; 0046438a
    CALL FUN_00503620                   ; 0046438b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00464390
    JMP 0x004632d0                      ; 00464393
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x3e800000                     ; 00464398
        ;   Label: LAB_00464398
    CALL FUN_0040d060                   ; 0046439d
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 004643a2
    TEST EAX,EAX                        ; 004643a5
    JNZ 0x004643f2                      ; 004643a7
        ;   XREF to: 004643f2 (CONDITIONAL_JUMP)  ; LAB_004643f2
    FLD float ptr [EBX + 0x10b90]       ; 004643a9
        ;   Label: LAB_004643a9
    FLDZ                                ; 004643af
    LEA ESI,[EBX + 0x2b4]               ; 004643b1
    FCOMPP                              ; 004643b7
    FNSTSW AX                           ; 004643b9
    SAHF                                ; 004643bb
    JBE 0x004640b3                      ; 004643bc
        ;   XREF to: 004640b3 (CONDITIONAL_JUMP)  ; LAB_004640b3
    PUSH 0x41a00000                     ; 004643c2
    PUSH 0x40000000                     ; 004643c7
    CALL FUN_0040cf60                   ; 004643cc
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cf60()
    ADD ESP,0x8                         ; 004643d1
    PUSH 0x1                            ; 004643d4
    MOV dword ptr [EBP + 0x76],EAX      ; 004643d6
    PUSH 0xd                            ; 004643d9
    FLD float ptr [EBP + 0x76]          ; 004643db
    PUSH ESI                            ; 004643de
    FSTP float ptr [EBX + 0x10b90]      ; 004643df
    CALL FUN_00503620                   ; 004643e5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004643ea
    JMP 0x004632d0                      ; 004643ed
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,0x5d101a                    ; 004643f2 | = "CHero"
        ;   Label: LAB_004643f2
    PUSH EAX                            ; 004643f7 | = "CHero"
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004643f8
    PUSH ECX                            ; 004643fe
    CALL FUN_0040c840                   ; 004643ff
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c840()
    ADD ESP,0x8                         ; 00464404
    TEST EAX,EAX                        ; 00464407
    JZ 0x004643a9                       ; 00464409
        ;   XREF to: 004643a9 (CONDITIONAL_JUMP)  ; LAB_004643a9
    XOR ESI,ESI                         ; 0046440b
    LEA EDI,[ESI*0x4 + 0x0]             ; 0046440d
    MOV EAX,[0x0061b5a8]                ; 00464414 | DAT_0061b5a8
        ;   Label: LAB_00464414
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00464419 | DAT_01fb71a4
    JGE 0x0046444b                      ; 0046441f
        ;   XREF to: 0046444b (CONDITIONAL_JUMP)  ; LAB_0046444b
    MOV ECX,dword ptr [0x01ba5774]      ; 00464421 | DAT_01ba5774
    PUSH ECX                            ; 00464427
    MOV EDX,dword ptr [EDI + EAX*0x1 + 0x150ff0] ; 00464428
    PUSH EDX                            ; 0046442f
    CALL FUN_0040c8f0                   ; 00464430
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c8f0()
    ADD ESP,0x8                         ; 00464435
    TEST EAX,EAX                        ; 00464438
    JNZ 0x00464442                      ; 0046443a
        ;   XREF to: 00464442 (CONDITIONAL_JUMP)  ; LAB_00464442
    INC ESI                             ; 0046443c
        ;   Label: LAB_0046443c
    ADD EDI,0x4                         ; 0046443d
    JMP 0x00464414                      ; 00464440
        ;   XREF to: 00464414 (UNCONDITIONAL_JUMP)  ; LAB_00464414
    CMP dword ptr [EAX + 0x10b84],0x0   ; 00464442
        ;   Label: LAB_00464442
    JZ 0x0046443c                       ; 00464449
        ;   XREF to: 0046443c (CONDITIONAL_JUMP)  ; LAB_0046443c
    MOV EAX,[0x0061b5a8]                ; 0046444b | DAT_0061b5a8
        ;   Label: LAB_0046444b
    CMP ESI,dword ptr [EAX + 0x150fec]  ; 00464450 | DAT_01fb71a4
    JNZ 0x004643a9                      ; 00464456
        ;   XREF to: 004643a9 (CONDITIONAL_JUMP)  ; LAB_004643a9
    MOV EAX,dword ptr [EBX + 0x10b80]   ; 0046445c
    PUSH EAX                            ; 00464462
    PUSH 0x5d1020                       ; 00464463 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffb5a]          ; 00464468
    PUSH EAX                            ; 0046446e
    CALL FUN_005b7790                   ; 0046446f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00464474
    LEA EAX,[EBP + 0xfffffb5a]          ; 00464477
    PUSH 0x3f800000                     ; 0046447d
    PUSH EAX                            ; 00464482
    PUSH EBX                            ; 00464483
    CALL FUN_00465400                   ; 00464484
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 00464489
    PUSH 0x1                            ; 0046448c
    PUSH 0x17                           ; 0046448e
    LEA EAX,[EBX + 0x2b4]               ; 00464490
    PUSH EAX                            ; 00464496
    CALL FUN_00503620                   ; 00464497
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046449c
    PUSH 0x5d102e                       ; 0046449f | = "hotbride-disappear.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004644a4
    PUSH EBX                            ; 004644aa
    CALL dword ptr [EAX + 0x34]         ; 004644ab
    ADD ESP,0x8                         ; 004644ae
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004644b1
    LEA EAX,[EBX + 0x10b94]             ; 004644b7
    ADD EDX,0x20                        ; 004644bd
    MOV dword ptr [EBX + 0x10b84],0x1   ; 004644c0
    CMP EAX,EDX                         ; 004644ca
    JZ 0x004644de                       ; 004644cc
        ;   XREF to: 004644de (CONDITIONAL_JUMP)  ; LAB_004644de
    MOV ECX,dword ptr [EDX]             ; 004644ce
    MOV dword ptr [EAX],ECX             ; 004644d0
    MOV ECX,dword ptr [EDX + 0x4]       ; 004644d2
    MOV dword ptr [EAX + 0x4],ECX       ; 004644d5
    MOV ECX,dword ptr [EDX + 0x8]       ; 004644d8
    MOV dword ptr [EAX + 0x8],ECX       ; 004644db
    MOV dword ptr [EBX + 0x10b88],0x0   ; 004644de
        ;   Label: LAB_004644de
    JMP 0x004632d0                      ; 004644e8
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0x10b8c]       ; 004644ed
        ;   Label: caseD_e
    FLDZ                                ; 004644f3
    FCOMPP                              ; 004644f5
    FNSTSW AX                           ; 004644f7
    SAHF                                ; 004644f9
    JC 0x00464552                       ; 004644fa
        ;   XREF to: 00464552 (CONDITIONAL_JUMP)  ; LAB_00464552
    MOV ECX,dword ptr [EBX + 0x10b80]   ; 004644fc
    PUSH ECX                            ; 00464502
    PUSH 0x5d1045                       ; 00464503 | = "bride-%d?.wav"
    LEA EAX,[EBP + 0xfffffbbe]          ; 00464508
    PUSH EAX                            ; 0046450e
    CALL FUN_005b7790                   ; 0046450f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7790()
    ADD ESP,0xc                         ; 00464514
    LEA EAX,[EBP + 0xfffffbbe]          ; 00464517
    PUSH 0x3f800000                     ; 0046451d
    PUSH EAX                            ; 00464522
    PUSH EBX                            ; 00464523
    CALL FUN_00465400                   ; 00464524
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 00464529
    PUSH 0x3e4ccccd                     ; 0046452c
    CALL FUN_0040d060                   ; 00464531
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d060()
    ADD ESP,0x4                         ; 00464536
    TEST EAX,EAX                        ; 00464539
    JZ 0x00464552                       ; 0046453b
        ;   XREF to: 00464552 (CONDITIONAL_JUMP)  ; LAB_00464552
    LEA EAX,[EBP + 0xfffffbbe]          ; 0046453d
    PUSH 0x3f800000                     ; 00464543
    PUSH EAX                            ; 00464548
    PUSH EBX                            ; 00464549
    CALL FUN_00465400                   ; 0046454a
        ;   XREF to: 00465400 (UNCONDITIONAL_CALL)  ; undefined FUN_00465400()
    ADD ESP,0xc                         ; 0046454f
    PUSH dword ptr [EBP + 0x92]         ; 00464552
        ;   Label: LAB_00464552
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00464558
    PUSH EBX                            ; 0046455e
    CALL dword ptr [EAX + 0x150]        ; 0046455f
    ADD ESP,0x8                         ; 00464565
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 00464568
    LEA ESI,[EBX + 0x2b4]               ; 0046456e
    TEST EDI,EDI                        ; 00464574
    JNZ 0x004645a0                      ; 00464576
        ;   XREF to: 004645a0 (CONDITIONAL_JUMP)  ; LAB_004645a0
    PUSH dword ptr [EBP + 0x92]         ; 00464578
    PUSH EBX                            ; 0046457e
    CALL FUN_00488970                   ; 0046457f
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; undefined FUN_00488970()
    ADD ESP,0x8                         ; 00464584
    TEST EAX,EAX                        ; 00464587
    JNZ 0x004632d0                      ; 00464589
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 0046458f
    PUSH EDI                            ; 00464591
    PUSH ESI                            ; 00464592
    CALL FUN_00503620                   ; 00464593
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00464598
    JMP 0x004632d0                      ; 0046459b
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    MOV EAX,[0x005f563c]                ; 004645a0 | DAT_005f563c
        ;   Label: LAB_004645a0
    MOV dword ptr [EBP + 0x42],EAX      ; 004645a5
    LEA EAX,[EBX + 0x2508]              ; 004645a8
    MOV dword ptr [EAX + 0x8],0x0       ; 004645ae
    MOV EDX,dword ptr [EAX + 0x8]       ; 004645b5
    MOV dword ptr [EAX + 0x4],EDX       ; 004645b8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004645bb
    MOV dword ptr [EAX],EDX             ; 004645be
    XOR EAX,EAX                         ; 004645c0
    MOV dword ptr [EBP + 0xfffffec2],EAX ; 004645c2
    MOV dword ptr [EBP + 0xfffffec6],EAX ; 004645c8
    MOV EAX,dword ptr [EBP + 0x42]      ; 004645ce
    PUSH 0x3db2b8c2                     ; 004645d1
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 004645d6
    LEA EAX,[EBP + 0xfffffec2]          ; 004645dc
    PUSH 0x3f000000                     ; 004645e2
    PUSH EAX                            ; 004645e7
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004645e8
    PUSH EAX                            ; 004645ee
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004645ef
    CALL dword ptr [EDX + 0xcc]         ; 004645f5
    ADD ESP,0x4                         ; 004645fb
    PUSH EAX                            ; 004645fe
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004645ff
    ADD EAX,0x20                        ; 00464605
    PUSH EAX                            ; 00464608
    PUSH EBX                            ; 00464609
    CALL FUN_00423000                   ; 0046460a
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; undefined FUN_00423000()
    ADD ESP,0x18                        ; 0046460f
    TEST EAX,EAX                        ; 00464612
    JL 0x00464699                       ; 00464614
        ;   XREF to: 00464699 (CONDITIONAL_JUMP)  ; LAB_00464699
    JLE 0x004632d0                      ; 0046461a
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    FLD float ptr [EBX + 0x10a74]       ; 00464620
    FLDZ                                ; 00464626
    FCOMPP                              ; 00464628
    FNSTSW AX                           ; 0046462a
    SAHF                                ; 0046462c
    JC 0x004632d0                       ; 0046462d
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x2                            ; 00464633
    PUSH 0x0                            ; 00464635
    CALL FUN_0040cfc0                   ; 00464637
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    ADD ESP,0x8                         ; 0046463c
    MOV EDI,EAX                         ; 0046463f
    TEST EAX,EAX                        ; 00464641
    JZ 0x004646c0                       ; 00464643
        ;   XREF to: 004646c0 (CONDITIONAL_JUMP)  ; LAB_004646c0
    CMP EDI,0x1                         ; 00464649
        ;   Label: LAB_00464649
    JNZ 0x00464660                      ; 0046464c
        ;   XREF to: 00464660 (CONDITIONAL_JUMP)  ; LAB_00464660
    PUSH EDI                            ; 0046464e
    PUSH 0x14                           ; 0046464f
    LEA EAX,[EBX + 0x2b4]               ; 00464651
    PUSH EAX                            ; 00464657
    CALL FUN_00503620                   ; 00464658
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 0046465d
    CMP EDI,0x2                         ; 00464660
        ;   Label: LAB_00464660
    JNZ 0x0046468a                      ; 00464663
        ;   XREF to: 0046468a (CONDITIONAL_JUMP)  ; LAB_0046468a
    PUSH 0x1                            ; 00464665
    PUSH 0x15                           ; 00464667
    LEA EAX,[EBX + 0x2b4]               ; 00464669
    PUSH EAX                            ; 0046466f
    CALL FUN_00503620                   ; 00464670
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 00464675
    PUSH 0x5d1074                       ; 00464678 | = "hotbride-swipe?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0046467d
    PUSH EBX                            ; 00464683
    CALL dword ptr [EAX + 0x34]         ; 00464684
    ADD ESP,0x8                         ; 00464687
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 0046468a
        ;   Label: LAB_0046468a
    JMP 0x004632d0                      ; 00464694
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH EBX                            ; 00464699
        ;   Label: LAB_00464699
    PUSH 0x5d1053                       ; 0046469a | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 0046469f | PTR_DAT_00609ed0
    PUSH ECX                            ; 004646a5 | DAT_007c158c
    CALL FUN_00436710                   ; 004646a6
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined FUN_00436710()
    ADD ESP,0xc                         ; 004646ab
    PUSH 0x1                            ; 004646ae
    PUSH 0x0                            ; 004646b0
    PUSH ESI                            ; 004646b2
    CALL FUN_00503620                   ; 004646b3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004646b8
    JMP 0x004632d0                      ; 004646bb
        ;   XREF to: 004632d0 (UNCONDITIONAL_JUMP)  ; caseD_19
    PUSH 0x1                            ; 004646c0
        ;   Label: LAB_004646c0
    PUSH 0x13                           ; 004646c2
    PUSH ESI                            ; 004646c4
    CALL FUN_00503620                   ; 004646c5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; undefined FUN_00503620()
    ADD ESP,0xc                         ; 004646ca
    JMP 0x00464649                      ; 004646cd
        ;   XREF to: 00464649 (UNCONDITIONAL_JUMP)  ; LAB_00464649
    CMP ESI,0x1a                        ; 004646d2
        ;   Label: LAB_004646d2
    JA 0x004632d0                       ; 004646d5
        ;   XREF to: 004632d0 (CONDITIONAL_JUMP)  ; caseD_19
    JMP dword ptr [ESI*0x4 + 0x462f84]  ; 004646db | caseD_0 | caseD_19 | caseD_2
        ;   Label: switchD
    CMP dword ptr [EBX + 0xdc],0x0      ; 004646e2
        ;   Label: LAB_004646e2
    JNZ 0x00463321                      ; 004646e9
        ;   XREF to: 00463321 (CONDITIONAL_JUMP)  ; LAB_00463321
    JMP 0x00463471                      ; 004646ef
        ;   XREF to: 00463471 (UNCONDITIONAL_JUMP)  ; LAB_00463471

