; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int sound_snddx_cpp_FUN_0055c0f0(undefined4 param_1,int *param_2,uint param_3)
;
;
; Referenced Globals:
;   TerminatedCString s_DirectSux_Unable_to_s_s_005d452f
;   TerminatedCString s_sound_snddx_cpp_005d491f
;   TerminatedCString s_DirectSoundDevice_setSfx_005d4932
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4960
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4989
;   TerminatedCString s_Set_hardware_sfx_seconda_005d49af
;   TerminatedCString s_Set_hardware_sfx_seconda_005d49db
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005d4a0f
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005d4a33
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4a57
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4a80
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005d4aac
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005d4acc
;   TerminatedCString s_Set_hardware_sfx_3d_buff_005d4af8
;   TerminatedCString s_Set_hardware_sfx_seconda_005d4b24
;   ... and 5 more
;
; Called Functions:
;   core_main.c_FUN_004e4330
;   crt_math.c_floor_FUN_005a3600
;   crt_math.c_round_FUN_005a3120
;   crt_unknown.c_sprintf_FUN_005a28c0
;   sound_snddx.cpp_FUN_0055a670
;   sound_snddx.cpp_FUN_0055ab20
;   sound_snddx.cpp_FUN_0055abc0
;   sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0
;   sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20
;   sound_sndmain.cpp_logSoundError_FUN_0055a560
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c0f0
        ;   Label: sound_snddx.cpp_FUN_0055c0f0
    PUSH ESI                            ; 0055c0f1
    PUSH EDI                            ; 0055c0f2
    PUSH EBP                            ; 0055c0f3
    MOV EBP,ESP                         ; 0055c0f4
    SUB ESP,0x12f8                      ; 0055c0f6
    AND ESP,0xfffffff8                  ; 0055c0fc
    MOV EBX,dword ptr [EBP + 0x18]      ; 0055c0ff
    MOV ESI,dword ptr [EBX + 0x60]      ; 0055c102
    TEST ESI,ESI                        ; 0055c105
    JLE 0x0055c112                      ; 0055c107
        ;   XREF to: 0055c112 (CONDITIONAL_JUMP)  ; LAB_0055c112
    CMP ESI,0x1f                        ; 0055c109
    JL 0x0055c360                       ; 0055c10c
        ;   XREF to: 0055c360 (CONDITIONAL_JUMP)  ; LAB_0055c360
    MOV ECX,0x5d491f                    ; 0055c112 | = "..\\sound\\snddx.cpp"
        ;   Label: LAB_0055c112
    MOV EDI,0x4ea                       ; 0055c117
    PUSH 0x5d4932                       ; 0055c11c | = "DirectSoundDevice::setSfxPos - invali..."
    MOV dword ptr [0x01d71de0],ECX      ; 0055c121 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],EDI      ; 0055c127 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0055c12d
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 0055c132
    MOV dword ptr [ESP + 0x12ec],0x1    ; 0055c135
        ;   Label: LAB_0055c135
    LEA EAX,[ESI*0x8 + 0x0]             ; 0055c140
    ADD EAX,ESI                         ; 0055c147
    MOV EDX,0x2cf500c                   ; 0055c149
    SHL EAX,0x2                         ; 0055c14e
    ADD EDX,EAX                         ; 0055c151
    MOV dword ptr [ESP + 0x12f0],EDX    ; 0055c153
    MOV EDI,dword ptr [EDX]             ; 0055c15a
    MOV ESI,dword ptr [EDX + 0x4]       ; 0055c15c
    TEST EDI,EDI                        ; 0055c15f
    JZ 0x0055c357                       ; 0055c161
        ;   XREF to: 0055c357 (CONDITIONAL_JUMP)  ; LAB_0055c357
    TEST ESI,ESI                        ; 0055c167
    JNZ 0x0055c5c5                      ; 0055c169
        ;   XREF to: 0055c5c5 (CONDITIONAL_JUMP)  ; LAB_0055c5c5
    TEST byte ptr [EBP + 0x1c],0xca     ; 0055c16f
    JZ 0x0055c29f                       ; 0055c173
        ;   XREF to: 0055c29f (CONDITIONAL_JUMP)  ; LAB_0055c29f
    CALL sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0 ; 0055c179
        ;   XREF to: 005583b0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_getAudioChannelCount_FUN_005583b0()
    MOV ECX,0x1                         ; 0055c17e
    MOV EDX,dword ptr [EBX + 0x90]      ; 0055c183
    MOV ESI,EAX                         ; 0055c189
    MOV dword ptr [ESP],EDX             ; 0055c18b
    CMP EAX,ECX                         ; 0055c18e
    JLE 0x0055c1b4                      ; 0055c190
        ;   XREF to: 0055c1b4 (CONDITIONAL_JUMP)  ; LAB_0055c1b4
    LEA EDX,[EBX + 0x4]                 ; 0055c192
    FLD float ptr [EDX + 0x90]          ; 0055c195
        ;   Label: LAB_0055c195
    FCOMP float ptr [ESP]               ; 0055c19b
    FNSTSW AX                           ; 0055c19e
    SAHF                                ; 0055c1a0
    JBE 0x0055c1ac                      ; 0055c1a1
        ;   XREF to: 0055c1ac (CONDITIONAL_JUMP)  ; LAB_0055c1ac
    MOV EAX,dword ptr [EDX + 0x90]      ; 0055c1a3
    MOV dword ptr [ESP],EAX             ; 0055c1a9
    INC ECX                             ; 0055c1ac
        ;   Label: LAB_0055c1ac
    ADD EDX,0x4                         ; 0055c1ad
    CMP ECX,ESI                         ; 0055c1b0
    JL 0x0055c195                       ; 0055c1b2
        ;   XREF to: 0055c195 (CONDITIONAL_JUMP)  ; LAB_0055c195
    PUSH dword ptr [ESP]                ; 0055c1b4
        ;   Label: LAB_0055c1b4
    CALL sound_snddx.cpp_FUN_0055ab20   ; 0055c1b7
        ;   XREF to: 0055ab20 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055ab20()
    ADD ESP,0x4                         ; 0055c1bc
    MOV dword ptr [ESP + 0x12dc],EAX    ; 0055c1bf
    XOR EAX,EAX                         ; 0055c1c6
    MOV dword ptr [ESP + 0x12e8],EAX    ; 0055c1c8
    CMP ESI,0x2                         ; 0055c1cf
    JNZ 0x0055c213                      ; 0055c1d2
        ;   XREF to: 0055c213 (CONDITIONAL_JUMP)  ; LAB_0055c213
    FLD float ptr [ESP]                 ; 0055c1d4
    FLDZ                                ; 0055c1d7
    FCOMPP                              ; 0055c1d9
    FNSTSW AX                           ; 0055c1db
    SAHF                                ; 0055c1dd
    JNC 0x0055c213                      ; 0055c1de
        ;   XREF to: 0055c213 (CONDITIONAL_JUMP)  ; LAB_0055c213
    FLD float ptr [EBX + 0x90]          ; 0055c1e0
    FCOMP float ptr [EBX + 0x94]        ; 0055c1e6
    FNSTSW AX                           ; 0055c1ec
    SAHF                                ; 0055c1ee
    JNC 0x0055c3e9                      ; 0055c1ef
        ;   XREF to: 0055c3e9 (CONDITIONAL_JUMP)  ; LAB_0055c3e9
    FLD float ptr [EBX + 0x90]          ; 0055c1f5
    FLDZ                                ; 0055c1fb
    FCOMPP                              ; 0055c1fd
    FNSTSW AX                           ; 0055c1ff
    SAHF                                ; 0055c201
    JC 0x0055c37c                       ; 0055c202
        ;   XREF to: 0055c37c (CONDITIONAL_JUMP)  ; LAB_0055c37c
    MOV dword ptr [ESP + 0x12e8],0x2710 ; 0055c208
        ;   Label: LAB_0055c208
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c213
        ;   Label: LAB_0055c213
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 0055c21a
    MOV ECX,dword ptr [EDX + 0x14]      ; 0055c221
    MOV ESI,dword ptr [EBP + 0x1c]      ; 0055c224
    SUB EAX,ECX                         ; 0055c227
    CMP ESI,-0x1                        ; 0055c229
    JZ 0x0055c484                       ; 0055c22c
        ;   XREF to: 0055c484 (CONDITIONAL_JUMP)  ; LAB_0055c484
    MOV EDX,dword ptr [ESP + 0x12dc]    ; 0055c232
        ;   Label: LAB_0055c232
    PUSH EDX                            ; 0055c239
    MOV EAX,dword ptr [EDI]             ; 0055c23a
    PUSH EDI                            ; 0055c23c
    CALL dword ptr [EAX + 0x3c]         ; 0055c23d
    TEST EAX,EAX                        ; 0055c240
    JNZ 0x0055c497                      ; 0055c242
        ;   XREF to: 0055c497 (CONDITIONAL_JUMP)  ; LAB_0055c497
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c248
        ;   Label: LAB_0055c248
    MOV EAX,dword ptr [ESP + 0x12dc]    ; 0055c24f
    MOV dword ptr [EDX + 0x14],EAX      ; 0055c256
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c259
        ;   Label: LAB_0055c259
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 0055c260
    MOV ESI,dword ptr [EDX + 0x18]      ; 0055c267
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055c26a
    SUB EAX,ESI                         ; 0055c26d
    CMP EDX,-0x1                        ; 0055c26f
    JZ 0x0055c4d9                       ; 0055c272
        ;   XREF to: 0055c4d9 (CONDITIONAL_JUMP)  ; LAB_0055c4d9
    MOV ECX,dword ptr [ESP + 0x12e8]    ; 0055c278
        ;   Label: LAB_0055c278
    PUSH ECX                            ; 0055c27f
    MOV EAX,dword ptr [EDI]             ; 0055c280
    PUSH EDI                            ; 0055c282
    CALL dword ptr [EAX + 0x40]         ; 0055c283
    TEST EAX,EAX                        ; 0055c286
    JNZ 0x0055c4ec                      ; 0055c288
        ;   XREF to: 0055c4ec (CONDITIONAL_JUMP)  ; LAB_0055c4ec
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c28e
        ;   Label: LAB_0055c28e
    MOV EAX,dword ptr [ESP + 0x12e8]    ; 0055c295
    MOV dword ptr [EDX + 0x18],EAX      ; 0055c29c
    TEST byte ptr [EBP + 0x1c],0x96     ; 0055c29f
        ;   Label: LAB_0055c29f
    JZ 0x0055c2f2                       ; 0055c2a3
        ;   XREF to: 0055c2f2 (CONDITIONAL_JUMP)  ; LAB_0055c2f2
    MOV EAX,dword ptr [EBX + 0x68]      ; 0055c2a5
    FILD dword ptr [EAX + 0x10c]        ; 0055c2a8
    FMUL float ptr [EBX + 0x6c]         ; 0055c2ae
    SUB ESP,0x4                         ; 0055c2b1
    FSTP float ptr [ESP]                ; 0055c2b4
    CALL sound_snddx.cpp_FUN_0055abc0   ; 0055c2b7
        ;   XREF to: 0055abc0 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055abc0()
    ADD ESP,0x4                         ; 0055c2bc
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c2bf
    MOV ESI,EAX                         ; 0055c2c6
    MOV ECX,dword ptr [EDX + 0x1c]      ; 0055c2c8
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055c2cb
    SUB EAX,ECX                         ; 0055c2ce
    CMP EDX,-0x1                        ; 0055c2d0
    JZ 0x0055c52e                       ; 0055c2d3
        ;   XREF to: 0055c52e (CONDITIONAL_JUMP)  ; LAB_0055c52e
    PUSH ESI                            ; 0055c2d9
        ;   Label: LAB_0055c2d9
    MOV EAX,dword ptr [EDI]             ; 0055c2da
    PUSH EDI                            ; 0055c2dc
    CALL dword ptr [EAX + 0x44]         ; 0055c2dd
    TEST EAX,EAX                        ; 0055c2e0
    JNZ 0x0055c541                      ; 0055c2e2
        ;   XREF to: 0055c541 (CONDITIONAL_JUMP)  ; LAB_0055c541
    MOV EAX,dword ptr [ESP + 0x12f0]    ; 0055c2e8
        ;   Label: LAB_0055c2e8
    MOV dword ptr [EAX + 0x1c],ESI      ; 0055c2ef
    TEST byte ptr [EBP + 0x1d],0x1      ; 0055c2f2
        ;   Label: LAB_0055c2f2
    JZ 0x0055c320                       ; 0055c2f6
        ;   XREF to: 0055c320 (CONDITIONAL_JUMP)  ; LAB_0055c320
    FLD double ptr [EBX + 0x10c]        ; 0055c2f8
    CALL crt_math.c_round_FUN_005a3120  ; 0055c2fe
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP + 0x12c8]      ; 0055c303
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 0055c30a
    PUSH EAX                            ; 0055c311
    MOV EDX,dword ptr [EDI]             ; 0055c312
    PUSH EDI                            ; 0055c314
    CALL dword ptr [EDX + 0x34]         ; 0055c315
    TEST EAX,EAX                        ; 0055c318
    JNZ 0x0055c583                      ; 0055c31a
        ;   XREF to: 0055c583 (CONDITIONAL_JUMP)  ; LAB_0055c583
    MOV EAX,dword ptr [EBP + 0x1c]      ; 0055c320
        ;   Label: LAB_0055c320
    NOT EAX                             ; 0055c323
    MOV EDI,dword ptr [EBX + 0x118]     ; 0055c325
    OR EAX,0x40000000                   ; 0055c32b
    AND EDI,EAX                         ; 0055c330
    MOV EAX,dword ptr [ESP + 0x12ec]    ; 0055c332
    MOV dword ptr [EBX + 0x118],EDI     ; 0055c339
    TEST EAX,EAX                        ; 0055c33f
    JNZ 0x0055c350                      ; 0055c341
        ;   XREF to: 0055c350 (CONDITIONAL_JUMP)  ; LAB_0055c350
    PUSH 0x5d4b58                       ; 0055c343 | = "DirectSoundDevice::setSfxOpt - failed\n"
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c348
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c34d
    MOV EDI,dword ptr [ESP + 0x12ec]    ; 0055c350
        ;   Label: LAB_0055c350
    MOV EAX,EDI                         ; 0055c357
        ;   Label: LAB_0055c357
    MOV ESP,EBP                         ; 0055c359
    POP EBP                             ; 0055c35b
    POP EDI                             ; 0055c35c
    POP ESI                             ; 0055c35d
    POP EBX                             ; 0055c35e
    RET                                 ; 0055c35f
    LEA EAX,[ESI*0x8 + 0x0]             ; 0055c360
        ;   Label: LAB_0055c360
    ADD EAX,ESI                         ; 0055c367
    CMP dword ptr [EAX*0x4 + 0x2cf500c],0x0 ; 0055c369
    JZ 0x0055c112                       ; 0055c371
        ;   XREF to: 0055c112 (CONDITIONAL_JUMP)  ; LAB_0055c112
    JMP 0x0055c135                      ; 0055c377
        ;   XREF to: 0055c135 (UNCONDITIONAL_JUMP)  ; LAB_0055c135
    FLD float ptr [EBX + 0x94]          ; 0055c37c
        ;   Label: LAB_0055c37c
    FDIV float ptr [EBX + 0x90]         ; 0055c382
    FLDLN2                              ; 0055c388
    FXCH                                ; 0055c38a
    FYL2X                               ; 0055c38c
    FMUL double ptr [0x005d4b8d]        ; 0055c38e | DAT_005d4b8d
    SUB ESP,0x8                         ; 0055c394
    FSTP double ptr [ESP]               ; 0055c397
    CALL crt_math.c_floor_FUN_005a3600  ; 0055c39a
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x12d0],EAX    ; 0055c39f
    MOV dword ptr [ESP + 0x12d4],EDX    ; 0055c3a6
    FLD double ptr [ESP + 0x12d0]       ; 0055c3ad
    ADD ESP,0x8                         ; 0055c3b4
    CALL crt_math.c_round_FUN_005a3120  ; 0055c3b7
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x12e8]      ; 0055c3bc
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 0055c3c3
    CMP EDX,0x2710                      ; 0055c3ca
    JGE 0x0055c3e0                      ; 0055c3d0
        ;   XREF to: 0055c3e0 (CONDITIONAL_JUMP)  ; LAB_0055c3e0
    XOR ESI,ESI                         ; 0055c3d2
        ;   Label: LAB_0055c3d2
    MOV dword ptr [ESP + 0x12e8],ESI    ; 0055c3d4
    JMP 0x0055c213                      ; 0055c3db
        ;   XREF to: 0055c213 (UNCONDITIONAL_JUMP)  ; LAB_0055c213
    TEST EDX,EDX                        ; 0055c3e0
        ;   Label: LAB_0055c3e0
    JG 0x0055c3d2                       ; 0055c3e2
        ;   XREF to: 0055c3d2 (CONDITIONAL_JUMP)  ; LAB_0055c3d2
    JMP 0x0055c213                      ; 0055c3e4
        ;   XREF to: 0055c213 (UNCONDITIONAL_JUMP)  ; LAB_0055c213
    FLD float ptr [EBX + 0x90]          ; 0055c3e9
        ;   Label: LAB_0055c3e9
    FCOMP float ptr [EBX + 0x94]        ; 0055c3ef
    FNSTSW AX                           ; 0055c3f5
    SAHF                                ; 0055c3f7
    JNC 0x0055c213                      ; 0055c3f8
        ;   XREF to: 0055c213 (CONDITIONAL_JUMP)  ; LAB_0055c213
    FLD float ptr [EBX + 0x94]          ; 0055c3fe
    FLDZ                                ; 0055c404
    FCOMPP                              ; 0055c406
    FNSTSW AX                           ; 0055c408
    SAHF                                ; 0055c40a
    JC 0x0055c41d                       ; 0055c40b
        ;   XREF to: 0055c41d (CONDITIONAL_JUMP)  ; LAB_0055c41d
    MOV dword ptr [ESP + 0x12e8],0xffffd8f0 ; 0055c40d
    JMP 0x0055c213                      ; 0055c418
        ;   XREF to: 0055c213 (UNCONDITIONAL_JUMP)  ; LAB_0055c213
    FLD float ptr [EBX + 0x90]          ; 0055c41d
        ;   Label: LAB_0055c41d
    FDIV float ptr [EBX + 0x94]         ; 0055c423
    FLDLN2                              ; 0055c429
    FXCH                                ; 0055c42b
    FYL2X                               ; 0055c42d
    FMUL double ptr [0x005d4b85]        ; 0055c42f | DAT_005d4b85
    SUB ESP,0x8                         ; 0055c435
    FSTP double ptr [ESP]               ; 0055c438
    CALL crt_math.c_floor_FUN_005a3600  ; 0055c43b
        ;   XREF to: 005a3600 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005a3600(double input_value)
    MOV dword ptr [ESP + 0x12d0],EAX    ; 0055c440
    MOV dword ptr [ESP + 0x12d4],EDX    ; 0055c447
    FLD double ptr [ESP + 0x12d0]       ; 0055c44e
    ADD ESP,0x8                         ; 0055c455
    CALL crt_math.c_round_FUN_005a3120  ; 0055c458
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP dword ptr [ESP + 0x12e8]      ; 0055c45d
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 0055c464
    TEST EDX,EDX                        ; 0055c46b
    JL 0x0055c208                       ; 0055c46d
        ;   XREF to: 0055c208 (CONDITIONAL_JUMP)  ; LAB_0055c208
    CMP EDX,0xffffd8f0                  ; 0055c473
    JLE 0x0055c213                      ; 0055c479
        ;   XREF to: 0055c213 (CONDITIONAL_JUMP)  ; LAB_0055c213
    JMP 0x0055c208                      ; 0055c47f
        ;   XREF to: 0055c208 (UNCONDITIONAL_JUMP)  ; LAB_0055c208
    CDQ                                 ; 0055c484
        ;   Label: LAB_0055c484
    XOR EAX,EDX                         ; 0055c485
    SUB EAX,EDX                         ; 0055c487
    CMP EAX,0x1                         ; 0055c489
    JG 0x0055c232                       ; 0055c48c
        ;   XREF to: 0055c232 (CONDITIONAL_JUMP)  ; LAB_0055c232
    JMP 0x0055c259                      ; 0055c492
        ;   XREF to: 0055c259 (UNCONDITIONAL_JUMP)  ; LAB_0055c259
    PUSH EAX                            ; 0055c497
        ;   Label: LAB_0055c497
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c498
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c49d
    PUSH EAX                            ; 0055c4a0
    PUSH 0x5d4960                       ; 0055c4a1 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5d452f                       ; 0055c4a6 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xc94]               ; 0055c4ab
    PUSH EAX                            ; 0055c4b2
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c4b3
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c4b8
    LEA EAX,[ESP + 0xc88]               ; 0055c4bb
    PUSH EAX                            ; 0055c4c2
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c4c3
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c4c8
    XOR ECX,ECX                         ; 0055c4cb
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c4cd
    JMP 0x0055c248                      ; 0055c4d4
        ;   XREF to: 0055c248 (UNCONDITIONAL_JUMP)  ; LAB_0055c248
    CDQ                                 ; 0055c4d9
        ;   Label: LAB_0055c4d9
    XOR EAX,EDX                         ; 0055c4da
    SUB EAX,EDX                         ; 0055c4dc
    CMP EAX,0x1                         ; 0055c4de
    JG 0x0055c278                       ; 0055c4e1
        ;   XREF to: 0055c278 (CONDITIONAL_JUMP)  ; LAB_0055c278
    JMP 0x0055c29f                      ; 0055c4e7
        ;   XREF to: 0055c29f (UNCONDITIONAL_JUMP)  ; LAB_0055c29f
    PUSH EAX                            ; 0055c4ec
        ;   Label: LAB_0055c4ec
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c4ed
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c4f2
    PUSH EAX                            ; 0055c4f5
    PUSH 0x5d4989                       ; 0055c4f6 | = "Set hardware sfx secondary buffer pan"
    PUSH 0x5d452f                       ; 0055c4fb | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x4c4]               ; 0055c500
    PUSH EAX                            ; 0055c507
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c508
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c50d
    LEA EAX,[ESP + 0x4b8]               ; 0055c510
    PUSH EAX                            ; 0055c517
    XOR ESI,ESI                         ; 0055c518
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c51a
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c51f
    MOV dword ptr [ESP + 0x12ec],ESI    ; 0055c522
    JMP 0x0055c28e                      ; 0055c529
        ;   XREF to: 0055c28e (UNCONDITIONAL_JUMP)  ; LAB_0055c28e
    CDQ                                 ; 0055c52e
        ;   Label: LAB_0055c52e
    XOR EAX,EDX                         ; 0055c52f
    SUB EAX,EDX                         ; 0055c531
    CMP EAX,0x1                         ; 0055c533
    JG 0x0055c2d9                       ; 0055c536
        ;   XREF to: 0055c2d9 (CONDITIONAL_JUMP)  ; LAB_0055c2d9
    JMP 0x0055c2f2                      ; 0055c53c
        ;   XREF to: 0055c2f2 (UNCONDITIONAL_JUMP)  ; LAB_0055c2f2
    PUSH EAX                            ; 0055c541
        ;   Label: LAB_0055c541
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c542
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c547
    PUSH EAX                            ; 0055c54a
    PUSH 0x5d49af                       ; 0055c54b | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5d452f                       ; 0055c550 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x974]               ; 0055c555
    PUSH EAX                            ; 0055c55c
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c55d
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c562
    LEA EAX,[ESP + 0x968]               ; 0055c565
    PUSH EAX                            ; 0055c56c
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c56d
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c572
    XOR ECX,ECX                         ; 0055c575
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c577
    JMP 0x0055c2e8                      ; 0055c57e
        ;   XREF to: 0055c2e8 (UNCONDITIONAL_JUMP)  ; LAB_0055c2e8
    PUSH EAX                            ; 0055c583
        ;   Label: LAB_0055c583
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c584
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c589
    PUSH EAX                            ; 0055c58c
    PUSH 0x5d49db                       ; 0055c58d | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5d452f                       ; 0055c592 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xfb4]               ; 0055c597
    PUSH EAX                            ; 0055c59e
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c59f
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c5a4
    LEA EAX,[ESP + 0xfa8]               ; 0055c5a7
    PUSH EAX                            ; 0055c5ae
    XOR ESI,ESI                         ; 0055c5af
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c5b1
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c5b6
    MOV dword ptr [ESP + 0x12ec],ESI    ; 0055c5b9
    JMP 0x0055c320                      ; 0055c5c0
        ;   XREF to: 0055c320 (UNCONDITIONAL_JUMP)  ; LAB_0055c320
    TEST byte ptr [EBP + 0x1c],0x88     ; 0055c5c5
        ;   Label: LAB_0055c5c5
    JZ 0x0055c60e                       ; 0055c5c9
        ;   XREF to: 0055c60e (CONDITIONAL_JUMP)  ; LAB_0055c60e
    MOV EAX,dword ptr [EBX + 0xf0]      ; 0055c5cb
    MOV EDX,dword ptr [EBX]             ; 0055c5d1
    MOV dword ptr [ESP + 0x12e0],EAX    ; 0055c5d3
    MOV EAX,dword ptr [EBX + 0xf8]      ; 0055c5da
    PUSH EDX                            ; 0055c5e0
    MOV dword ptr [ESP + 0x12dc],EAX    ; 0055c5e1
    CALL sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20 ; 0055c5e8
        ;   XREF to: 00556d20 (UNCONDITIONAL_CALL)  ; float sound_sndmain.cpp_getSfxChannelVol_FUN_00556d20(int channel_index)
    MOV dword ptr [ESP + 0x12f8],EAX    ; 0055c5ed
    FLD float ptr [ESP + 0x12f8]        ; 0055c5f4
    ADD ESP,0x4                         ; 0055c5fb
    MOV DL,byte ptr [EBX + 0x4c]        ; 0055c5fe
    FSTP float ptr [ESP + 0x4]          ; 0055c601
    TEST DL,0x1                         ; 0055c605
    JZ 0x0055c804                       ; 0055c608
        ;   XREF to: 0055c804 (CONDITIONAL_JUMP)  ; LAB_0055c804
    TEST byte ptr [EBP + 0x1c],0x2      ; 0055c60e
        ;   Label: LAB_0055c60e
    JZ 0x0055c63f                       ; 0055c612
        ;   XREF to: 0055c63f (CONDITIONAL_JUMP)  ; LAB_0055c63f
    PUSH 0x1                            ; 0055c614
    FLD double ptr [EBX + 0x14]         ; 0055c616
    SUB ESP,0x4                         ; 0055c619
    MOV EAX,dword ptr [ESI]             ; 0055c61c
    FSTP float ptr [ESP]                ; 0055c61e
    SUB ESP,0x4                         ; 0055c621
    FLD double ptr [EBX + 0xc]          ; 0055c624
    FSTP float ptr [ESP]                ; 0055c627
    SUB ESP,0x4                         ; 0055c62a
    FLD double ptr [EBX + 0x4]          ; 0055c62d
    FSTP float ptr [ESP]                ; 0055c630
    PUSH ESI                            ; 0055c633
    CALL dword ptr [EAX + 0x4c]         ; 0055c634
    TEST EAX,EAX                        ; 0055c637
    JNZ 0x0055c84a                      ; 0055c639
        ;   XREF to: 0055c84a (CONDITIONAL_JUMP)  ; LAB_0055c84a
    TEST byte ptr [EBP + 0x1c],0x4      ; 0055c63f
        ;   Label: LAB_0055c63f
    JZ 0x0055c65e                       ; 0055c643
        ;   XREF to: 0055c65e (CONDITIONAL_JUMP)  ; LAB_0055c65e
    PUSH 0x1                            ; 0055c645
    PUSH dword ptr [EBX + 0x2c]         ; 0055c647
    PUSH dword ptr [EBX + 0x28]         ; 0055c64a
    MOV EAX,dword ptr [ESI]             ; 0055c64d
    PUSH dword ptr [EBX + 0x24]         ; 0055c64f
    PUSH ESI                            ; 0055c652
    CALL dword ptr [EAX + 0x50]         ; 0055c653
    TEST EAX,EAX                        ; 0055c656
    JNZ 0x0055c88c                      ; 0055c658
        ;   XREF to: 0055c88c (CONDITIONAL_JUMP)  ; LAB_0055c88c
    TEST byte ptr [EBP + 0x1c],0x8      ; 0055c65e
        ;   Label: LAB_0055c65e
    JZ 0x0055c6b3                       ; 0055c662
        ;   XREF to: 0055c6b3 (CONDITIONAL_JUMP)  ; LAB_0055c6b3
    FLD float ptr [EBX + 0x38]          ; 0055c664
    FMUL float ptr [ESP + 0x4]          ; 0055c667
    SUB ESP,0x4                         ; 0055c66b
    FSTP float ptr [ESP]                ; 0055c66e
    CALL sound_snddx.cpp_FUN_0055ab20   ; 0055c671
        ;   XREF to: 0055ab20 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055ab20()
    ADD ESP,0x4                         ; 0055c676
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055c679
    MOV dword ptr [ESP + 0x12d0],EAX    ; 0055c67c
    CMP EDX,-0x1                        ; 0055c683
    JNZ 0x0055c8ce                      ; 0055c686
        ;   XREF to: 0055c8ce (CONDITIONAL_JUMP)  ; LAB_0055c8ce
    MOV EDX,dword ptr [ESP + 0x12d0]    ; 0055c68c
        ;   Label: LAB_0055c68c
    PUSH EDX                            ; 0055c693
    MOV EAX,dword ptr [EDI]             ; 0055c694
    PUSH EDI                            ; 0055c696
    CALL dword ptr [EAX + 0x3c]         ; 0055c697
    TEST EAX,EAX                        ; 0055c69a
    JNZ 0x0055c8eb                      ; 0055c69c
        ;   XREF to: 0055c8eb (CONDITIONAL_JUMP)  ; LAB_0055c8eb
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c6a2
        ;   Label: LAB_0055c6a2
    MOV EAX,dword ptr [ESP + 0x12d0]    ; 0055c6a9
    MOV dword ptr [EDX + 0x14],EAX      ; 0055c6b0
    TEST byte ptr [EBP + 0x1c],0x10     ; 0055c6b3
        ;   Label: LAB_0055c6b3
    JZ 0x0055c70d                       ; 0055c6b7
        ;   XREF to: 0055c70d (CONDITIONAL_JUMP)  ; LAB_0055c70d
    MOV EAX,dword ptr [EBX + 0x68]      ; 0055c6b9
    FILD dword ptr [EAX + 0x10c]        ; 0055c6bc
    FMUL float ptr [EBX + 0x3c]         ; 0055c6c2
    SUB ESP,0x4                         ; 0055c6c5
    FSTP float ptr [ESP]                ; 0055c6c8
    CALL sound_snddx.cpp_FUN_0055abc0   ; 0055c6cb
        ;   XREF to: 0055abc0 (UNCONDITIONAL_CALL)  ; undefined sound_snddx.cpp_FUN_0055abc0()
    ADD ESP,0x4                         ; 0055c6d0
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0055c6d3
    MOV dword ptr [ESP + 0x12d4],EAX    ; 0055c6d6
    CMP EDX,-0x1                        ; 0055c6dd
    JNZ 0x0055c92d                      ; 0055c6e0
        ;   XREF to: 0055c92d (CONDITIONAL_JUMP)  ; LAB_0055c92d
    MOV EDX,dword ptr [ESP + 0x12d4]    ; 0055c6e6
        ;   Label: LAB_0055c6e6
    PUSH EDX                            ; 0055c6ed
    MOV EAX,dword ptr [EDI]             ; 0055c6ee
    PUSH EDI                            ; 0055c6f0
    CALL dword ptr [EAX + 0x44]         ; 0055c6f1
    TEST EAX,EAX                        ; 0055c6f4
    JNZ 0x0055c94a                      ; 0055c6f6
        ;   XREF to: 0055c94a (CONDITIONAL_JUMP)  ; LAB_0055c94a
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c6fc
        ;   Label: LAB_0055c6fc
    MOV EAX,dword ptr [ESP + 0x12d4]    ; 0055c703
    MOV dword ptr [EDX + 0x1c],EAX      ; 0055c70a
    TEST byte ptr [EBP + 0x1c],0x40     ; 0055c70d
        ;   Label: LAB_0055c70d
    JZ 0x0055c762                       ; 0055c711
        ;   XREF to: 0055c762 (CONDITIONAL_JUMP)  ; LAB_0055c762
    XOR EAX,EAX                         ; 0055c713
    MOV DL,byte ptr [EBX + 0x4c]        ; 0055c715
    MOV dword ptr [ESP + 0x12e4],EAX    ; 0055c718
    TEST DL,0x1                         ; 0055c71f
    JZ 0x0055c72f                       ; 0055c722
        ;   XREF to: 0055c72f (CONDITIONAL_JUMP)  ; LAB_0055c72f
    MOV dword ptr [ESP + 0x12e4],0x2    ; 0055c724
    CMP dword ptr [EBP + 0x1c],-0x1     ; 0055c72f
        ;   Label: LAB_0055c72f
    JNZ 0x0055c98c                      ; 0055c733
        ;   XREF to: 0055c98c (CONDITIONAL_JUMP)  ; LAB_0055c98c
    PUSH 0x1                            ; 0055c739
        ;   Label: LAB_0055c739
    MOV EDX,dword ptr [ESP + 0x12e8]    ; 0055c73b
    PUSH EDX                            ; 0055c742
    MOV EAX,dword ptr [ESI]             ; 0055c743
    PUSH ESI                            ; 0055c745
    CALL dword ptr [EAX + 0x48]         ; 0055c746
    TEST EAX,EAX                        ; 0055c749
    JNZ 0x0055c9a8                      ; 0055c74b
        ;   XREF to: 0055c9a8 (CONDITIONAL_JUMP)  ; LAB_0055c9a8
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c751
        ;   Label: LAB_0055c751
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 0055c758
    MOV dword ptr [EDX + 0x20],EAX      ; 0055c75f
    TEST byte ptr [EBP + 0x1c],0x80     ; 0055c762
        ;   Label: LAB_0055c762
    JZ 0x0055c796                       ; 0055c766
        ;   XREF to: 0055c796 (CONDITIONAL_JUMP)  ; LAB_0055c796
    PUSH 0x1                            ; 0055c768
    MOV EAX,dword ptr [ESI]             ; 0055c76a
    PUSH dword ptr [ESP + 0x12e4]       ; 0055c76c
    PUSH ESI                            ; 0055c773
    CALL dword ptr [EAX + 0x44]         ; 0055c774
    TEST EAX,EAX                        ; 0055c777
    JNZ 0x0055c9ea                      ; 0055c779
        ;   XREF to: 0055c9ea (CONDITIONAL_JUMP)  ; LAB_0055c9ea
    PUSH 0x1                            ; 0055c77f
        ;   Label: LAB_0055c77f
    MOV EAX,dword ptr [ESI]             ; 0055c781
    PUSH dword ptr [ESP + 0x12dc]       ; 0055c783
    PUSH ESI                            ; 0055c78a
    CALL dword ptr [EAX + 0x40]         ; 0055c78b
    TEST EAX,EAX                        ; 0055c78e
    JNZ 0x0055ca2c                      ; 0055c790
        ;   XREF to: 0055ca2c (CONDITIONAL_JUMP)  ; LAB_0055ca2c
    TEST byte ptr [EBP + 0x1d],0x1      ; 0055c796
        ;   Label: LAB_0055c796
    JZ 0x0055c320                       ; 0055c79a
        ;   XREF to: 0055c320 (CONDITIONAL_JUMP)  ; LAB_0055c320
    FLD double ptr [EBX + 0x10c]        ; 0055c7a0
    CALL crt_math.c_round_FUN_005a3120  ; 0055c7a6
        ;   XREF to: 005a3120 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005a3120()
    FISTP qword ptr [ESP + 0x12c8]      ; 0055c7ab
    MOV EAX,dword ptr [ESP + 0x12c8]    ; 0055c7b2
    PUSH EAX                            ; 0055c7b9
    MOV EDX,dword ptr [EDI]             ; 0055c7ba
    PUSH EDI                            ; 0055c7bc
    CALL dword ptr [EDX + 0x34]         ; 0055c7bd
    TEST EAX,EAX                        ; 0055c7c0
    JZ 0x0055c320                       ; 0055c7c2
        ;   XREF to: 0055c320 (CONDITIONAL_JUMP)  ; LAB_0055c320
    PUSH EAX                            ; 0055c7c8
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c7c9
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c7ce
    PUSH EAX                            ; 0055c7d1
    PUSH 0x5d4b24                       ; 0055c7d2 | = "Set hardware sfx secondary buffer pla..."
    PUSH 0x5d452f                       ; 0055c7d7 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x14]                ; 0055c7dc
    PUSH EAX                            ; 0055c7e0
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c7e1
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c7e6
    LEA EAX,[ESP + 0x8]                 ; 0055c7e9
    PUSH EAX                            ; 0055c7ed
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c7ee
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c7f3
    XOR ECX,ECX                         ; 0055c7f6
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c7f8
    JMP 0x0055c320                      ; 0055c7ff
        ;   XREF to: 0055c320 (UNCONDITIONAL_JUMP)  ; LAB_0055c320
    FLD float ptr [ESP + 0x4]           ; 0055c804
        ;   Label: LAB_0055c804
    FLDZ                                ; 0055c808
    FCOMPP                              ; 0055c80a
    FNSTSW AX                           ; 0055c80c
    SAHF                                ; 0055c80e
    JNC 0x0055c60e                      ; 0055c80f
        ;   XREF to: 0055c60e (CONDITIONAL_JUMP)  ; LAB_0055c60e
    FLD float ptr [ESP + 0x4]           ; 0055c815
    FDIV ST0,ST0                        ; 0055c819
    FLD float ptr [ESP + 0x12e0]        ; 0055c81b
    FMUL float ptr [ESP + 0x4]          ; 0055c822
    FLD float ptr [ESP + 0x12d8]        ; 0055c826
    FMUL float ptr [ESP + 0x4]          ; 0055c82d
    FXCH                                ; 0055c831
    FSTP float ptr [ESP + 0x12e0]       ; 0055c833
    FSTP float ptr [ESP + 0x12d8]       ; 0055c83a
    FSTP float ptr [ESP + 0x4]          ; 0055c841
    JMP 0x0055c60e                      ; 0055c845
        ;   XREF to: 0055c60e (UNCONDITIONAL_JUMP)  ; LAB_0055c60e
    PUSH EAX                            ; 0055c84a
        ;   Label: LAB_0055c84a
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c84b
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c850
    PUSH EAX                            ; 0055c853
    PUSH 0x5d4a0f                       ; 0055c854 | = "Set hardware sfx 3d buffer position"
    PUSH 0x5d452f                       ; 0055c859 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x7e4]               ; 0055c85e
    PUSH EAX                            ; 0055c865
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c866
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c86b
    LEA EAX,[ESP + 0x7d8]               ; 0055c86e
    PUSH EAX                            ; 0055c875
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c876
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c87b
    XOR ECX,ECX                         ; 0055c87e
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c880
    JMP 0x0055c63f                      ; 0055c887
        ;   XREF to: 0055c63f (UNCONDITIONAL_JUMP)  ; LAB_0055c63f
    PUSH EAX                            ; 0055c88c
        ;   Label: LAB_0055c88c
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c88d
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c892
    PUSH EAX                            ; 0055c895
    PUSH 0x5d4a33                       ; 0055c896 | = "Set hardware sfx 3d buffer velocity"
    PUSH 0x5d452f                       ; 0055c89b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xe24]               ; 0055c8a0
    PUSH EAX                            ; 0055c8a7
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c8a8
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c8ad
    LEA EAX,[ESP + 0xe18]               ; 0055c8b0
    PUSH EAX                            ; 0055c8b7
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c8b8
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c8bd
    XOR EAX,EAX                         ; 0055c8c0
    MOV dword ptr [ESP + 0x12ec],EAX    ; 0055c8c2
    JMP 0x0055c65e                      ; 0055c8c9
        ;   XREF to: 0055c65e (UNCONDITIONAL_JUMP)  ; LAB_0055c65e
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c8ce
        ;   Label: LAB_0055c8ce
    SUB EAX,dword ptr [EDX + 0x14]      ; 0055c8d5
    CDQ                                 ; 0055c8d8
    XOR EAX,EDX                         ; 0055c8d9
    SUB EAX,EDX                         ; 0055c8db
    CMP EAX,0x1                         ; 0055c8dd
    JG 0x0055c68c                       ; 0055c8e0
        ;   XREF to: 0055c68c (CONDITIONAL_JUMP)  ; LAB_0055c68c
    JMP 0x0055c6b3                      ; 0055c8e6
        ;   XREF to: 0055c6b3 (UNCONDITIONAL_JUMP)  ; LAB_0055c6b3
    PUSH EAX                            ; 0055c8eb
        ;   Label: LAB_0055c8eb
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c8ec
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c8f1
    PUSH EAX                            ; 0055c8f4
    PUSH 0x5d4a57                       ; 0055c8f5 | = "Set hardware sfx secondary buffer volume"
    PUSH 0x5d452f                       ; 0055c8fa | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x334]               ; 0055c8ff
    PUSH EAX                            ; 0055c906
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c907
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c90c
    LEA EAX,[ESP + 0x328]               ; 0055c90f
    PUSH EAX                            ; 0055c916
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c917
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c91c
    XOR ECX,ECX                         ; 0055c91f
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c921
    JMP 0x0055c6a2                      ; 0055c928
        ;   XREF to: 0055c6a2 (UNCONDITIONAL_JUMP)  ; LAB_0055c6a2
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c92d
        ;   Label: LAB_0055c92d
    SUB EAX,dword ptr [EDX + 0x1c]      ; 0055c934
    CDQ                                 ; 0055c937
    XOR EAX,EDX                         ; 0055c938
    SUB EAX,EDX                         ; 0055c93a
    CMP EAX,0x1                         ; 0055c93c
    JG 0x0055c6e6                       ; 0055c93f
        ;   XREF to: 0055c6e6 (CONDITIONAL_JUMP)  ; LAB_0055c6e6
    JMP 0x0055c70d                      ; 0055c945
        ;   XREF to: 0055c70d (UNCONDITIONAL_JUMP)  ; LAB_0055c70d
    PUSH EAX                            ; 0055c94a
        ;   Label: LAB_0055c94a
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c94b
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c950
    PUSH EAX                            ; 0055c953
    PUSH 0x5d4a80                       ; 0055c954 | = "Set hardware sfx secondary buffer fre..."
    PUSH 0x5d452f                       ; 0055c959 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x654]               ; 0055c95e
    PUSH EAX                            ; 0055c965
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c966
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c96b
    LEA EAX,[ESP + 0x648]               ; 0055c96e
    PUSH EAX                            ; 0055c975
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c976
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c97b
    XOR ECX,ECX                         ; 0055c97e
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c980
    JMP 0x0055c6fc                      ; 0055c987
        ;   XREF to: 0055c6fc (UNCONDITIONAL_JUMP)  ; LAB_0055c6fc
    MOV EDX,dword ptr [ESP + 0x12f0]    ; 0055c98c
        ;   Label: LAB_0055c98c
    MOV EAX,dword ptr [ESP + 0x12e4]    ; 0055c993
    CMP EAX,dword ptr [EDX + 0x20]      ; 0055c99a
    JNZ 0x0055c739                      ; 0055c99d
        ;   XREF to: 0055c739 (CONDITIONAL_JUMP)  ; LAB_0055c739
    JMP 0x0055c762                      ; 0055c9a3
        ;   XREF to: 0055c762 (UNCONDITIONAL_JUMP)  ; LAB_0055c762
    PUSH EAX                            ; 0055c9a8
        ;   Label: LAB_0055c9a8
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c9a9
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c9ae
    PUSH EAX                            ; 0055c9b1
    PUSH 0x5d4aac                       ; 0055c9b2 | = "Set hardware sfx 3d buffer mode"
    PUSH 0x5d452f                       ; 0055c9b7 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1a4]               ; 0055c9bc
    PUSH EAX                            ; 0055c9c3
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055c9c4
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055c9c9
    LEA EAX,[ESP + 0x198]               ; 0055c9cc
    PUSH EAX                            ; 0055c9d3
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055c9d4
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055c9d9
    XOR ECX,ECX                         ; 0055c9dc
    MOV dword ptr [ESP + 0x12ec],ECX    ; 0055c9de
    JMP 0x0055c751                      ; 0055c9e5
        ;   XREF to: 0055c751 (UNCONDITIONAL_JUMP)  ; LAB_0055c751
    PUSH EAX                            ; 0055c9ea
        ;   Label: LAB_0055c9ea
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055c9eb
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055c9f0
    PUSH EAX                            ; 0055c9f3
    PUSH 0x5d4acc                       ; 0055c9f4 | = "Set hardware sfx 3d buffer minimum di..."
    PUSH 0x5d452f                       ; 0055c9f9 | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0x1144]              ; 0055c9fe
    PUSH EAX                            ; 0055ca05
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055ca06
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055ca0b
    LEA EAX,[ESP + 0x1138]              ; 0055ca0e
    PUSH EAX                            ; 0055ca15
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055ca16
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055ca1b
    XOR EAX,EAX                         ; 0055ca1e
    MOV dword ptr [ESP + 0x12ec],EAX    ; 0055ca20
    JMP 0x0055c77f                      ; 0055ca27
        ;   XREF to: 0055c77f (UNCONDITIONAL_JUMP)  ; LAB_0055c77f
    PUSH EAX                            ; 0055ca2c
        ;   Label: LAB_0055ca2c
    CALL sound_snddx.cpp_FUN_0055a670   ; 0055ca2d
        ;   XREF to: 0055a670 (UNCONDITIONAL_CALL)  ; char * sound_snddx.cpp_FUN_0055a670(uint error_code)
    ADD ESP,0x4                         ; 0055ca32
    PUSH EAX                            ; 0055ca35
    PUSH 0x5d4af8                       ; 0055ca36 | = "Set hardware sfx 3d buffer maximum di..."
    PUSH 0x5d452f                       ; 0055ca3b | = "DirectSux: Unable to %s.  (%s)"
    LEA EAX,[ESP + 0xb04]               ; 0055ca40
    PUSH EAX                            ; 0055ca47
    CALL crt_unknown.c_sprintf_FUN_005a28c0 ; 0055ca48
        ;   XREF to: 005a28c0 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005a28c0(char * buffer, char * format)
    ADD ESP,0x10                        ; 0055ca4d
    LEA EAX,[ESP + 0xaf8]               ; 0055ca50
    PUSH EAX                            ; 0055ca57
    CALL sound_sndmain.cpp_logSoundError_FUN_0055a560 ; 0055ca58
        ;   XREF to: 0055a560 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_logSoundError_FUN_0055a560(char * format)
    ADD ESP,0x4                         ; 0055ca5d
    XOR EDX,EDX                         ; 0055ca60
    MOV dword ptr [ESP + 0x12ec],EDX    ; 0055ca62
    JMP 0x0055c796                      ; 0055ca69
        ;   XREF to: 0055c796 (UNCONDITIONAL_JUMP)  ; LAB_0055c796

