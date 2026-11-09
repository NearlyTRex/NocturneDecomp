; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 sound_snddx_cpp_FUN_005570a0(int *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005e9a3b
;   TerminatedCString s_sound_snddx_cpp_005ea146
;   TerminatedCString s_DirectSoundDevice_startS_005ea159
;   TerminatedCString s_sound_snddx_cpp_005ea18a
;   TerminatedCString s_DirectSoundDevice_startS_005ea19d
;   TerminatedCString s_sound_snddx_cpp_005ea1c7
;   TerminatedCString s_DirectSoundDevice_startS_005ea1da
;   TerminatedCString s_Set_frequency_hardware_s_005ea234
;   TerminatedCString s_Set_volume_hardware_sfx_005ea260
;   TerminatedCString s_Play_hardware_sfx_second_005ea289
;   TerminatedCString s_Set_hardware_sfx_seconda_005ea2ac
;   TerminatedCString s_Set_hardware_sfx_seconda_005ea2d8
;   TerminatedCString s_Set_hardware_sfx_seconda_005ea30c
;   TerminatedCString s_Play_hardware_sfx_second_005ea335
;   undefined4 DAT_01d046a0
;   ... and 1 more
;
; Called Functions:
;   core_main.c_FUN_004e4500
;   crt_unknown.c_FUN_005b7790
;   sound_snddx.cpp_FUN_00554ad0
;   sound_snddx.cpp_FUN_00555020
;   sound_sndmain.cpp_FUN_005549c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005570a0
        ;   Label: sound_snddx.cpp_FUN_005570a0
    PUSH ESI                            ; 005570a1
    PUSH EDI                            ; 005570a2
    PUSH EBP                            ; 005570a3
    SUB ESP,0xaf4                       ; 005570a4
    MOV EBP,dword ptr [ESP + 0xb08]     ; 005570aa
    MOV ESI,dword ptr [ESP + 0xb0c]     ; 005570b1
    MOV EBX,dword ptr [ESI + 0x60]      ; 005570b8
    TEST EBX,EBX                        ; 005570bb
    JLE 0x005570c8                      ; 005570bd
        ;   XREF to: 005570c8 (CONDITIONAL_JUMP)  ; LAB_005570c8
    CMP EBX,0x1f                        ; 005570bf
    JL 0x005571d0                       ; 005570c2
        ;   XREF to: 005571d0 (CONDITIONAL_JUMP)  ; LAB_005571d0
    PUSH EBX                            ; 005570c8
        ;   Label: LAB_005570c8
    MOV ECX,0x5ea146                    ; 005570c9 | = "..\\sound\\snddx.cpp"
    MOV EDI,0x61a                       ; 005570ce
    PUSH 0x5ea159                       ; 005570d3 | = "DirectSoundDevice::startSfx - invalid..."
    MOV dword ptr [0x01d046a0],ECX      ; 005570d8 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDI      ; 005570de | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 005570e4
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 005570e9
    PUSH -0x1                           ; 005570ec
        ;   Label: LAB_005570ec
    PUSH ESI                            ; 005570ee
    MOV EAX,dword ptr [EBP]             ; 005570ef
    PUSH EBP                            ; 005570f2
    CALL dword ptr [EAX + 0x44]         ; 005570f3
    ADD ESP,0xc                         ; 005570f6
    TEST EAX,EAX                        ; 005570f9
    JZ 0x005571c5                       ; 005570fb
        ;   XREF to: 005571c5 (CONDITIONAL_JUMP)  ; LAB_005571c5
    XOR EBP,EBP                         ; 00557101
    MOV EAX,dword ptr [ESI + 0x68]      ; 00557103
    MOV dword ptr [ESP + 0xaf0],EBP     ; 00557106
    TEST EAX,EAX                        ; 0055710d
    JZ 0x005571ec                       ; 0055710f
        ;   XREF to: 005571ec (CONDITIONAL_JUMP)  ; LAB_005571ec
    MOV EAX,dword ptr [ESI + 0x68]      ; 00557115
        ;   Label: LAB_00557115
    CMP dword ptr [EAX + 0x124],0x1     ; 00557118
    JLE 0x00557214                      ; 0055711f
        ;   XREF to: 00557214 (CONDITIONAL_JUMP)  ; LAB_00557214
    MOV EAX,0x5ea1c7                    ; 00557125 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_00557125
    MOV EDX,0x626                       ; 0055712a
    PUSH 0x5ea1da                       ; 0055712f | = "DirectSoundDevice::startSfx - exotic ..."
    MOV [0x01d046a0],EAX                ; 00557134 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 00557139 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0055713f
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 00557144
    MOV EAX,dword ptr [ESI + 0x68]      ; 00557147
        ;   Label: LAB_00557147
    CMP dword ptr [EAX + 0x124],0x1     ; 0055714a
    JNZ 0x00557164                      ; 00557151
        ;   XREF to: 00557164 (CONDITIONAL_JUMP)  ; LAB_00557164
    CMP dword ptr [EAX + 0x13c],0x0     ; 00557153
    JL 0x00557164                       ; 0055715a
        ;   XREF to: 00557164 (CONDITIONAL_JUMP)  ; LAB_00557164
    OR byte ptr [ESP + 0xaf0],0x1       ; 0055715c
    MOV EAX,dword ptr [ESI + 0x68]      ; 00557164
        ;   Label: LAB_00557164
    MOV EDI,dword ptr [EAX + 0x164]     ; 00557167
    CMP EDI,dword ptr [EAX + 0x110]     ; 0055716d
    JZ 0x0055717d                       ; 00557173
        ;   XREF to: 0055717d (CONDITIONAL_JUMP)  ; LAB_0055717d
    OR byte ptr [ESP + 0xaf0],0x1       ; 00557175
    MOV ECX,dword ptr [ESP + 0xaf0]     ; 0055717d
        ;   Label: LAB_0055717d
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557184
    PUSH ECX                            ; 0055718b
    LEA EDI,[EBX + EAX*0x1]             ; 0055718c
    PUSH 0x0                            ; 0055718f
    SHL EDI,0x2                         ; 00557191
    PUSH 0x0                            ; 00557194
    MOV EAX,dword ptr [EDI + 0x264ac10] ; 00557196
    PUSH EAX                            ; 0055719c
    MOV EDX,dword ptr [EAX]             ; 0055719d
    CALL dword ptr [EDX + 0x30]         ; 0055719f
    CMP EAX,0x88780064                  ; 005571a2
    JZ 0x00557226                       ; 005571a7
        ;   XREF to: 00557226 (CONDITIONAL_JUMP)  ; LAB_00557226
    TEST EAX,EAX                        ; 005571a9
    JNZ 0x005574c2                      ; 005571ab
        ;   XREF to: 005574c2 (CONDITIONAL_JUMP)  ; LAB_005574c2
    MOV DH,byte ptr [ESI + 0x11b]       ; 005571b1
        ;   Label: LAB_005571b1
    AND DH,0xbf                         ; 005571b7
    MOV EAX,0x1                         ; 005571ba
    MOV byte ptr [ESI + 0x11b],DH       ; 005571bf
    ADD ESP,0xaf4                       ; 005571c5
        ;   Label: LAB_005571c5
    POP EBP                             ; 005571cb
    POP EDI                             ; 005571cc
    POP ESI                             ; 005571cd
    POP EBX                             ; 005571ce
    RET                                 ; 005571cf
    LEA EAX,[EBX*0x8 + 0x0]             ; 005571d0
        ;   Label: LAB_005571d0
    ADD EAX,EBX                         ; 005571d7
    CMP dword ptr [EAX*0x4 + 0x264ac10],0x0 ; 005571d9
    JZ 0x005570c8                       ; 005571e1
        ;   XREF to: 005570c8 (CONDITIONAL_JUMP)  ; LAB_005570c8
    JMP 0x005570ec                      ; 005571e7
        ;   XREF to: 005570ec (UNCONDITIONAL_JUMP)  ; LAB_005570ec
    MOV EDX,0x5ea18a                    ; 005571ec | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_005571ec
    MOV ECX,0x624                       ; 005571f1
    PUSH 0x5ea19d                       ; 005571f6 | = "DirectSoundDevice::startSfx - no samp..."
    MOV dword ptr [0x01d046a0],EDX      ; 005571fb | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 00557201 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 00557207
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x4                         ; 0055720c
    JMP 0x00557115                      ; 0055720f
        ;   XREF to: 00557115 (UNCONDITIONAL_JUMP)  ; LAB_00557115
    CMP dword ptr [EAX + 0x13c],0x0     ; 00557214
        ;   Label: LAB_00557214
    JG 0x00557125                       ; 0055721b
        ;   XREF to: 00557125 (CONDITIONAL_JUMP)  ; LAB_00557125
    JMP 0x00557147                      ; 00557221
        ;   XREF to: 00557147 (UNCONDITIONAL_JUMP)  ; LAB_00557147
    PUSH 0x0                            ; 00557226
        ;   Label: LAB_00557226
    MOV EAX,dword ptr [EDI + 0x264ac10] ; 00557228
    PUSH EAX                            ; 0055722e
    MOV EDX,dword ptr [EAX]             ; 0055722f
    CALL dword ptr [EDX + 0x44]         ; 00557231
    TEST EAX,EAX                        ; 00557234
    JNZ 0x00557344                      ; 00557236
        ;   XREF to: 00557344 (CONDITIONAL_JUMP)  ; LAB_00557344
    LEA EAX,[EBX*0x8 + 0x0]             ; 0055723c
    ADD EAX,EBX                         ; 00557243
    PUSH 0xffffd8f0                     ; 00557245
    MOV EAX,dword ptr [EAX*0x4 + 0x264ac10] ; 0055724a
    PUSH EAX                            ; 00557251
    MOV EDX,dword ptr [EAX]             ; 00557252
    CALL dword ptr [EDX + 0x3c]         ; 00557254
    TEST EAX,EAX                        ; 00557257
    JNZ 0x00557385                      ; 00557259
        ;   XREF to: 00557385 (CONDITIONAL_JUMP)  ; LAB_00557385
    MOV EDI,dword ptr [ESP + 0xaf0]     ; 0055725f
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557266
    PUSH EDI                            ; 0055726d
    ADD EAX,EBX                         ; 0055726e
    PUSH 0x0                            ; 00557270
    MOV EAX,dword ptr [EAX*0x4 + 0x264ac10] ; 00557272
    PUSH 0x0                            ; 00557279
    MOV EDX,dword ptr [EAX]             ; 0055727b
    PUSH EAX                            ; 0055727d
    CALL dword ptr [EDX + 0x30]         ; 0055727e
    TEST EAX,EAX                        ; 00557281
    JNZ 0x005573c6                      ; 00557283
        ;   XREF to: 005573c6 (CONDITIONAL_JUMP)  ; LAB_005573c6
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557289
    LEA EDI,[EBX + EAX*0x1]             ; 00557290
    SHL EDI,0x2                         ; 00557293
    MOV EBP,dword ptr [EDI + 0x264ac2c] ; 00557296
    CMP EBP,-0x1                        ; 0055729c
    JZ 0x005572f9                       ; 0055729f
        ;   XREF to: 005572f9 (CONDITIONAL_JUMP)  ; LAB_005572f9
    MOV EAX,dword ptr [ESI + 0x68]      ; 005572a1
    CMP EBP,dword ptr [EAX + 0x10c]     ; 005572a4
    JZ 0x005572f9                       ; 005572aa
        ;   XREF to: 005572f9 (CONDITIONAL_JUMP)  ; LAB_005572f9
    FILD dword ptr [EAX + 0x10c]        ; 005572ac
    FMUL float ptr [ESI + 0x3c]         ; 005572b2
    SUB ESP,0x4                         ; 005572b5
    FSTP float ptr [ESP]                ; 005572b8
    CALL sound_snddx.cpp_FUN_00555020   ; 005572bb
        ;   XREF to: 00555020 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_00555020()
    MOV EDX,EAX                         ; 005572c0
    MOV ECX,dword ptr [EDI + 0x264ac2c] ; 005572c2
    ADD ESP,0x4                         ; 005572c8
    SUB EDX,ECX                         ; 005572cb
    MOV EBP,EAX                         ; 005572cd
    CMP EDX,0x1                         ; 005572cf
    JBE 0x005572f9                      ; 005572d2
        ;   XREF to: 005572f9 (CONDITIONAL_JUMP)  ; LAB_005572f9
    PUSH EAX                            ; 005572d4
    MOV EDI,dword ptr [EDI + 0x264ac10] ; 005572d5
    PUSH EDI                            ; 005572db
    MOV EDX,dword ptr [EDI]             ; 005572dc
    CALL dword ptr [EDX + 0x44]         ; 005572de
    TEST EAX,EAX                        ; 005572e1
    JNZ 0x00557407                      ; 005572e3
        ;   XREF to: 00557407 (CONDITIONAL_JUMP)  ; LAB_00557407
    LEA EAX,[EBX*0x8 + 0x0]             ; 005572e9
        ;   Label: LAB_005572e9
    ADD EAX,EBX                         ; 005572f0
    MOV dword ptr [EAX*0x4 + 0x264ac2c],EBP ; 005572f2
    LEA EAX,[EBX*0x8 + 0x0]             ; 005572f9
        ;   Label: LAB_005572f9
    ADD EAX,EBX                         ; 00557300
    PUSH 0x0                            ; 00557302
    MOV EAX,dword ptr [EAX*0x4 + 0x264ac10] ; 00557304
    PUSH EAX                            ; 0055730b
    MOV EDX,dword ptr [EAX]             ; 0055730c
    CALL dword ptr [EDX + 0x34]         ; 0055730e
    TEST EAX,EAX                        ; 00557311
    JNZ 0x00557440                      ; 00557313
        ;   XREF to: 00557440 (CONDITIONAL_JUMP)  ; LAB_00557440
    LEA EAX,[EBX*0x8 + 0x0]             ; 00557319
    ADD EAX,EBX                         ; 00557320
    MOV EBP,dword ptr [EAX*0x4 + 0x264ac24] ; 00557322
    MOV EBX,dword ptr [EAX*0x4 + 0x264ac10] ; 00557329
    PUSH EBP                            ; 00557330
    MOV EDI,dword ptr [EBX]             ; 00557331
    PUSH EBX                            ; 00557333
    CALL dword ptr [EDI + 0x3c]         ; 00557334
    TEST EAX,EAX                        ; 00557337
    JNZ 0x00557481                      ; 00557339
        ;   XREF to: 00557481 (CONDITIONAL_JUMP)  ; LAB_00557481
    JMP 0x005571b1                      ; 0055733f
        ;   XREF to: 005571b1 (UNCONDITIONAL_JUMP)  ; LAB_005571b1
    PUSH EAX                            ; 00557344
        ;   Label: LAB_00557344
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557345
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055734a
    PUSH EAX                            ; 0055734d
    PUSH 0x5ea234                       ; 0055734e | = "Set frequency hardware sfx secondary ..."
    PUSH 0x5e9a3b                       ; 00557353 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x32c]               ; 00557358
    PUSH EAX                            ; 0055735f
    CALL crt_unknown.c_FUN_005b7790     ; 00557360
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00557365
    LEA EAX,[ESP + 0x320]               ; 00557368
    PUSH EAX                            ; 0055736f
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557370
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557375
    XOR EAX,EAX                         ; 00557378
    ADD ESP,0xaf4                       ; 0055737a
    POP EBP                             ; 00557380
    POP EDI                             ; 00557381
    POP ESI                             ; 00557382
    POP EBX                             ; 00557383
    RET                                 ; 00557384
    PUSH EAX                            ; 00557385
        ;   Label: LAB_00557385
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557386
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055738b
    PUSH EAX                            ; 0055738e
    PUSH 0x5ea260                       ; 0055738f | = "Set volume hardware sfx secondary buffer"
    PUSH 0x5e9a3b                       ; 00557394 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4bc]               ; 00557399
    PUSH EAX                            ; 005573a0
    CALL crt_unknown.c_FUN_005b7790     ; 005573a1
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 005573a6
    LEA EAX,[ESP + 0x4b0]               ; 005573a9
    PUSH EAX                            ; 005573b0
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005573b1
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005573b6
    XOR EAX,EAX                         ; 005573b9
    ADD ESP,0xaf4                       ; 005573bb
    POP EBP                             ; 005573c1
    POP EDI                             ; 005573c2
    POP ESI                             ; 005573c3
    POP EBX                             ; 005573c4
    RET                                 ; 005573c5
    PUSH EAX                            ; 005573c6
        ;   Label: LAB_005573c6
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005573c7
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005573cc
    PUSH EAX                            ; 005573cf
    PUSH 0x5ea289                       ; 005573d0 | = "Play hardware sfx secondary buffer"
    PUSH 0x5e9a3b                       ; 005573d5 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7dc]               ; 005573da
    PUSH EAX                            ; 005573e1
    CALL crt_unknown.c_FUN_005b7790     ; 005573e2
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 005573e7
    LEA EAX,[ESP + 0x7d0]               ; 005573ea
    PUSH EAX                            ; 005573f1
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005573f2
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005573f7
    XOR EAX,EAX                         ; 005573fa
    ADD ESP,0xaf4                       ; 005573fc
    POP EBP                             ; 00557402
    POP EDI                             ; 00557403
    POP ESI                             ; 00557404
    POP EBX                             ; 00557405
    RET                                 ; 00557406
    PUSH EAX                            ; 00557407
        ;   Label: LAB_00557407
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557408
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 0055740d
    PUSH EAX                            ; 00557410
    PUSH 0x5ea2ac                       ; 00557411 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5e9a3b                       ; 00557416 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x64c]               ; 0055741b
    PUSH EAX                            ; 00557422
    CALL crt_unknown.c_FUN_005b7790     ; 00557423
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00557428
    LEA EAX,[ESP + 0x640]               ; 0055742b
    PUSH EAX                            ; 00557432
    CALL sound_sndmain.cpp_FUN_005549c0 ; 00557433
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557438
    JMP 0x005572e9                      ; 0055743b
        ;   XREF to: 005572e9 (UNCONDITIONAL_JUMP)  ; LAB_005572e9
    PUSH EAX                            ; 00557440
        ;   Label: LAB_00557440
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557441
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557446
    PUSH EAX                            ; 00557449
    PUSH 0x5ea2d8                       ; 0055744a | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5e9a3b                       ; 0055744f | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x96c]               ; 00557454
    PUSH EAX                            ; 0055745b
    CALL crt_unknown.c_FUN_005b7790     ; 0055745c
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 00557461
    LEA EAX,[ESP + 0x960]               ; 00557464
    PUSH EAX                            ; 0055746b
    CALL sound_sndmain.cpp_FUN_005549c0 ; 0055746c
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 00557471
    XOR EAX,EAX                         ; 00557474
    ADD ESP,0xaf4                       ; 00557476
    POP EBP                             ; 0055747c
    POP EDI                             ; 0055747d
    POP ESI                             ; 0055747e
    POP EBX                             ; 0055747f
    RET                                 ; 00557480
    PUSH EAX                            ; 00557481
        ;   Label: LAB_00557481
    CALL sound_snddx.cpp_FUN_00554ad0   ; 00557482
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 00557487
    PUSH EAX                            ; 0055748a
    PUSH 0x5ea30c                       ; 0055748b | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5e9a3b                       ; 00557490 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x19c]               ; 00557495
    PUSH EAX                            ; 0055749c
    CALL crt_unknown.c_FUN_005b7790     ; 0055749d
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 005574a2
    LEA EAX,[ESP + 0x190]               ; 005574a5
    PUSH EAX                            ; 005574ac
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005574ad
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005574b2
    XOR EAX,EAX                         ; 005574b5
    ADD ESP,0xaf4                       ; 005574b7
    POP EBP                             ; 005574bd
    POP EDI                             ; 005574be
    POP ESI                             ; 005574bf
    POP EBX                             ; 005574c0
    RET                                 ; 005574c1
    PUSH EAX                            ; 005574c2
        ;   Label: LAB_005574c2
    CALL sound_snddx.cpp_FUN_00554ad0   ; 005574c3
        ;   XREF to: 00554ad0 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_00554ad0(uint error_code)
    ADD ESP,0x4                         ; 005574c8
    PUSH EAX                            ; 005574cb
    PUSH 0x5ea335                       ; 005574cc | = "Play hardware sfx secondary buffer"
    PUSH 0x5e9a3b                       ; 005574d1 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc]                 ; 005574d6
    PUSH EAX                            ; 005574da
    CALL crt_unknown.c_FUN_005b7790     ; 005574db
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005b7790()
    ADD ESP,0x10                        ; 005574e0
    MOV EAX,ESP                         ; 005574e3
    PUSH EAX                            ; 005574e5
    CALL sound_sndmain.cpp_FUN_005549c0 ; 005574e6
        ;   XREF to: 005549c0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005549c0()
    ADD ESP,0x4                         ; 005574eb
    XOR EAX,EAX                         ; 005574ee
    ADD ESP,0xaf4                       ; 005574f0
    POP EBP                             ; 005574f6
    POP EDI                             ; 005574f7
    POP ESI                             ; 005574f8
    POP EBX                             ; 005574f9
    RET                                 ; 005574fa

