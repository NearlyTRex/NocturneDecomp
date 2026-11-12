; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_boxactor_cpp_CBoxActor_process_FUN_0041c090(CBoxActor *this_ptr,float delta_time)
;
; Parameters:
; CBoxActor *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; XREF[4]:
;   core_boxactor.cpp_CLightActor_process_FUN_0041d020 at 0041d037
;   core_hpbox.cpp_CParticleBox_process_FUN_005ac960 at 005ac976
;   core_mine.cpp_CSpiritMine_process_FUN_005ad530 at 005ad564
;   core_necklace.cpp_CNecklace_process_FUN_005adad0 at 005adaec
;
; Referenced Globals:
;   undefined4 DAT_005cc519
;   undefined4 DAT_005cc51d
;   undefined4 DAT_005cc521
;   undefined4 DAT_005cc529
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408cf0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_box.cpp_CBox_process_FUN_005b2290
;   core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0
;   core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20
;   core_setcolid.cpp_FUN_00537f30
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
;   crt_math.c_floor_FUN_005b84d0
;   crt_math.c_round_FUN_005b7ff0
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041c090
        ;   Label: core_boxactor.cpp_CBoxActor_process_FUN_0041c090
    PUSH ESI                            ; 0041c091
    PUSH EDI                            ; 0041c092
    PUSH EBP                            ; 0041c093
    MOV EBP,ESP                         ; 0041c094
    SUB ESP,0x13c                       ; 0041c096
    AND ESP,0xfffffff8                  ; 0041c09c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0041c09f
    LEA EAX,[EBX + 0x2b4]               ; 0041c0a2
    PUSH EAX                            ; 0041c0a8
    CALL core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20 ; 0041c0a9
        ;   XREF to: 0044fd20 (UNCONDITIONAL_CALL)  ; CKeyFramedModel * core_dmodel.cpp_CKeyFramedModelInstance_getModelPtr_FUN_0044fd20(CKeyFramedModelInstance * this_ptr)
    FLD float ptr [EBX + 0x468]         ; 0041c0ae
    ADD ESP,0x4                         ; 0041c0b4
    MOV ESI,dword ptr [EAX + 0x100]     ; 0041c0b7
    FADD float ptr [EBX + 0x46c]        ; 0041c0bd
    SUB ESP,0x8                         ; 0041c0c3
    FST float ptr [EBX + 0x46c]         ; 0041c0c6
    FSTP double ptr [ESP]               ; 0041c0cc
    CALL crt_math.c_floor_FUN_005b84d0  ; 0041c0cf
        ;   XREF to: 005b84d0 (UNCONDITIONAL_CALL)  ; double crt_math.c_floor_FUN_005b84d0(double input_value)
    MOV dword ptr [ESP + 0x12c],EAX     ; 0041c0d4
    MOV dword ptr [ESP + 0x130],EDX     ; 0041c0db
    FLD double ptr [ESP + 0x12c]        ; 0041c0e2
    ADD ESP,0x8                         ; 0041c0e9
    CALL crt_math.c_round_FUN_005b7ff0  ; 0041c0ec
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x130]       ; 0041c0f1
    MOV EAX,dword ptr [ESP + 0x130]     ; 0041c0f8
    MOV dword ptr [ESP + 0x134],EAX     ; 0041c0ff
    FILD dword ptr [ESP + 0x134]        ; 0041c106
    FSUBR float ptr [EBX + 0x46c]       ; 0041c10d
    MOV EDI,ESI                         ; 0041c113
    FSTP float ptr [ESP + 0x12c]        ; 0041c115
    TEST EAX,EAX                        ; 0041c11c
    JL 0x0041c2be                       ; 0041c11e
        ;   XREF to: 0041c2be (CONDITIONAL_JUMP)  ; LAB_0041c2be
    MOV EDX,EAX                         ; 0041c124
    SAR EDX,0x1f                        ; 0041c126
    IDIV ESI                            ; 0041c129
    MOV dword ptr [ESP + 0x130],EDX     ; 0041c12b
    MOV EAX,dword ptr [ESP + 0x130]     ; 0041c132
        ;   Label: LAB_0041c132
    MOV dword ptr [ESP + 0x134],EAX     ; 0041c139
    MOV dword ptr [ESP + 0x138],EDI     ; 0041c140
    FILD dword ptr [ESP + 0x134]        ; 0041c147
    FADD float ptr [ESP + 0x12c]        ; 0041c14e
    FILD dword ptr [ESP + 0x138]        ; 0041c155
    FXCH                                ; 0041c15c
    FSTP float ptr [EBX + 0x46c]        ; 0041c15e
    FCOMP float ptr [EBX + 0x46c]       ; 0041c164
    FNSTSW AX                           ; 0041c16a
    SAHF                                ; 0041c16c
    JA 0x0041c179                       ; 0041c16d
        ;   XREF to: 0041c179 (CONDITIONAL_JUMP)  ; LAB_0041c179
    MOV dword ptr [EBX + 0x46c],0x0     ; 0041c16f
    LEA EAX,[EBX + 0x45c]               ; 0041c179
        ;   Label: LAB_0041c179
    FLD float ptr [EBP + 0x18]          ; 0041c17f
    FLD float ptr [EAX]                 ; 0041c182
    FMUL ST1                            ; 0041c184
    FLD float ptr [EAX + 0x4]           ; 0041c186
    FMUL ST2                            ; 0041c189
    FLD float ptr [EAX + 0x8]           ; 0041c18b
    FMULP ST3                           ; 0041c18e
    LEA EDI,[ESP + 0xb8]                ; 0041c190
    LEA ESI,[ESP + 0x88]                ; 0041c197
    FXCH                                ; 0041c19e
    FSTP float ptr [ESP + 0x88]         ; 0041c1a0
    FSTP float ptr [ESP + 0x8c]         ; 0041c1a7
    FSTP float ptr [ESP + 0x90]         ; 0041c1ae
    MOVSD ES:EDI,ESI                    ; 0041c1b5
    MOVSD ES:EDI,ESI                    ; 0041c1b6
    MOVSD ES:EDI,ESI                    ; 0041c1b7
    FLD float ptr [0x005cc519]          ; 0041c1b8 | DAT_005cc519
    FLD float ptr [ESP + 0xb8]          ; 0041c1be
    FMUL ST1                            ; 0041c1c5
    FLD float ptr [ESP + 0xbc]          ; 0041c1c7
    FMUL ST2                            ; 0041c1ce
    FLD float ptr [ESP + 0xc0]          ; 0041c1d0
    FMULP ST3                           ; 0041c1d7
    LEA EAX,[EBX + 0x30]                ; 0041c1d9
    LEA EDI,[ESP + 0xa0]                ; 0041c1dc
    LEA ESI,[ESP + 0x70]                ; 0041c1e3
    FXCH                                ; 0041c1e7
    FSTP float ptr [ESP + 0x70]         ; 0041c1e9
    FSTP float ptr [ESP + 0x74]         ; 0041c1ed
    FSTP float ptr [ESP + 0x78]         ; 0041c1f1
    MOVSD ES:EDI,ESI                    ; 0041c1f5
    MOVSD ES:EDI,ESI                    ; 0041c1f6
    MOVSD ES:EDI,ESI                    ; 0041c1f7
    FLD float ptr [EAX]                 ; 0041c1f8
    FLD float ptr [EAX + 0x4]           ; 0041c1fa
    FLD float ptr [EAX + 0x8]           ; 0041c1fd
    FXCH ST2                            ; 0041c200
    FADD float ptr [ESP + 0xa0]         ; 0041c202
    FXCH                                ; 0041c209
    FADD float ptr [ESP + 0xa4]         ; 0041c20b
    FXCH ST2                            ; 0041c212
    FADD float ptr [ESP + 0xa8]         ; 0041c214
    FXCH                                ; 0041c21b
    FSTP float ptr [EAX]                ; 0041c21d
    FXCH                                ; 0041c21f
    FSTP float ptr [EAX + 0x4]          ; 0041c221
    FSTP float ptr [EAX + 0x8]          ; 0041c224
    PUSH dword ptr [EBX + 0x30]         ; 0041c227
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0041c22a
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041c22f
    FLD float ptr [ESP + 0x13c]         ; 0041c236
    ADD ESP,0x4                         ; 0041c23d
    PUSH dword ptr [EBX + 0x38]         ; 0041c240
    FSTP float ptr [EBX + 0x30]         ; 0041c243
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0041c246
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041c24b
    FLD float ptr [ESP + 0x13c]         ; 0041c252
    ADD ESP,0x4                         ; 0041c259
    PUSH dword ptr [EBX + 0x34]         ; 0041c25c
    FSTP float ptr [EBX + 0x38]         ; 0041c25f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 0041c262
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0041c267
    FLD float ptr [ESP + 0x13c]         ; 0041c26e
    MOV AH,byte ptr [EBX + 0x430]       ; 0041c275
    FSTP float ptr [EBX + 0x34]         ; 0041c27b
    ADD ESP,0x4                         ; 0041c27e
    TEST AH,AH                          ; 0041c281
    JZ 0x0041c29f                       ; 0041c283
        ;   XREF to: 0041c29f (CONDITIONAL_JUMP)  ; LAB_0041c29f
    MOV ECX,dword ptr [EBX + 0x458]     ; 0041c285
    PUSH ECX                            ; 0041c28b
    MOV ESI,dword ptr [0x0061c068]      ; 0041c28c | DAT_0061c068
    PUSH ESI                            ; 0041c292
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70 ; 0041c293
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0041c298
    TEST EAX,EAX                        ; 0041c29b
    JZ 0x0041c2d5                       ; 0041c29d
        ;   XREF to: 0041c2d5 (CONDITIONAL_JUMP)  ; LAB_0041c2d5
    CMP dword ptr [EBX + 0x474],0x0     ; 0041c29f
        ;   Label: LAB_0041c29f
    JNZ 0x0041c2b7                      ; 0041c2a6
        ;   XREF to: 0041c2b7 (CONDITIONAL_JUMP)  ; LAB_0041c2b7
    FLD float ptr [EBX + 0x4ec]         ; 0041c2a8
    FLDZ                                ; 0041c2ae
    FCOMPP                              ; 0041c2b0
    FNSTSW AX                           ; 0041c2b2
    SAHF                                ; 0041c2b4
    JC 0x0041c32b                       ; 0041c2b5
        ;   XREF to: 0041c32b (CONDITIONAL_JUMP)  ; LAB_0041c32b
    MOV ESP,EBP                         ; 0041c2b7
        ;   Label: LAB_0041c2b7
    POP EBP                             ; 0041c2b9
    POP EDI                             ; 0041c2ba
    POP ESI                             ; 0041c2bb
    POP EBX                             ; 0041c2bc
    RET                                 ; 0041c2bd
    NEG EAX                             ; 0041c2be
        ;   Label: LAB_0041c2be
    MOV EDX,EAX                         ; 0041c2c0
    SAR EDX,0x1f                        ; 0041c2c2
    IDIV ESI                            ; 0041c2c5
    SUB ESI,EDX                         ; 0041c2c7
    MOV dword ptr [ESP + 0x130],ESI     ; 0041c2c9
    JMP 0x0041c132                      ; 0041c2d0
        ;   XREF to: 0041c132 (UNCONDITIONAL_JUMP)  ; LAB_0041c132
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0041c2d5
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
        ;   Label: LAB_0041c2d5
    PUSH 0x2                            ; 0041c2da
    PUSH 0x3f800000                     ; 0041c2dc
    PUSH 0x0                            ; 0041c2e1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041c2e3
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x144],EAX     ; 0041c2e8
    FLD float ptr [ESP + 0x144]         ; 0041c2ef
    ADD ESP,0x8                         ; 0041c2f6
    SUB ESP,0x8                         ; 0041c2f9
    FSTP double ptr [ESP]               ; 0041c2fc
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 0041c2ff
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0041c304
    LEA EAX,[EBX + 0x430]               ; 0041c307
    PUSH EAX                            ; 0041c30d
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0041c30e
    PUSH EBX                            ; 0041c314
    CALL dword ptr [EDX + 0x34]         ; 0041c315
    ADD ESP,0x8                         ; 0041c318
    MOV dword ptr [EBX + 0x458],EAX     ; 0041c31b
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0041c321
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x0041c29f                      ; 0041c326
        ;   XREF to: 0041c29f (UNCONDITIONAL_JUMP)  ; LAB_0041c29f
    PUSH dword ptr [EBP + 0x18]         ; 0041c32b
        ;   Label: LAB_0041c32b
    LEA EDI,[ESP + 0x98]                ; 0041c32e
    LEA EAX,[EBX + 0x4f0]               ; 0041c335
    LEA ESI,[EBX + 0x20]                ; 0041c33b
    PUSH EAX                            ; 0041c33e
    MOVSD ES:EDI,ESI                    ; 0041c33f
    MOVSD ES:EDI,ESI                    ; 0041c340
    MOVSD ES:EDI,ESI                    ; 0041c341
    CALL core_box.cpp_CBox_process_FUN_005b2290 ; 0041c342
        ;   XREF to: 005b2290 (UNCONDITIONAL_CALL)  ; void core_box.cpp_CBox_process_FUN_005b2290(CBox * this_ptr, float delta_time)
    LEA EAX,[EBX + 0x30]                ; 0041c347
    LEA ESI,[EBX + 0x4fc]               ; 0041c34a
    ADD ESP,0x8                         ; 0041c350
    CMP EAX,ESI                         ; 0041c353
    JZ 0x0041c367                       ; 0041c355
        ;   XREF to: 0041c367 (CONDITIONAL_JUMP)  ; LAB_0041c367
    MOV EDX,dword ptr [ESI]             ; 0041c357
    MOV dword ptr [EAX],EDX             ; 0041c359
    MOV EDX,dword ptr [ESI + 0x4]       ; 0041c35b
    MOV dword ptr [EAX + 0x4],EDX       ; 0041c35e
    MOV EDX,dword ptr [ESI + 0x8]       ; 0041c361
    MOV dword ptr [EAX + 0x8],EDX       ; 0041c364
    PUSH EBX                            ; 0041c367
        ;   Label: LAB_0041c367
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0041c368
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041c36d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041c370
    PUSH EBX                            ; 0041c376
    LEA ESI,[ESP + 0x5c]                ; 0041c377
    LEA EDI,[ESP + 0x44]                ; 0041c37b
    CALL dword ptr [EAX + 0x24]         ; 0041c37f
    MOV ECX,0x6                         ; 0041c382
    LEA ESI,[ESP + 0x5c]                ; 0041c387
    ADD ESP,0x4                         ; 0041c38b
    MOVSD.REP ES:EDI,ESI                ; 0041c38e
    LEA EAX,[ESP + 0x40]                ; 0041c390
    FLD float ptr [ESP + 0x40]          ; 0041c394
    FLD float ptr [ESP + 0x44]          ; 0041c398
    FLD float ptr [ESP + 0x48]          ; 0041c39c
    LEA EDI,[ESP + 0xf4]                ; 0041c3a0
    LEA ESI,[ESP + 0x100]               ; 0041c3a7
    FXCH ST2                            ; 0041c3ae
    FADD float ptr [EAX + 0xc]          ; 0041c3b0
    FXCH                                ; 0041c3b3
    FADD float ptr [EAX + 0x10]         ; 0041c3b5
    FXCH ST2                            ; 0041c3b8
    FADD float ptr [EAX + 0x14]         ; 0041c3ba
    FXCH                                ; 0041c3bd
    FSTP float ptr [ESP + 0x100]        ; 0041c3bf
    FXCH                                ; 0041c3c6
    FSTP float ptr [ESP + 0x104]        ; 0041c3c8
    FSTP float ptr [ESP + 0x108]        ; 0041c3cf
    MOVSD ES:EDI,ESI                    ; 0041c3d6
    MOVSD ES:EDI,ESI                    ; 0041c3d7
    MOVSD ES:EDI,ESI                    ; 0041c3d8
    FLD float ptr [0x005cc51d]          ; 0041c3d9 | DAT_005cc51d
    FLD float ptr [ESP + 0xf4]          ; 0041c3df
    FMUL ST1                            ; 0041c3e6
    FLD float ptr [ESP + 0xf8]          ; 0041c3e8
    FMUL ST2                            ; 0041c3ef
    FLD float ptr [ESP + 0xfc]          ; 0041c3f1
    FMULP ST3                           ; 0041c3f8
    LEA EAX,[ESP + 0x7c]                ; 0041c3fa
    LEA EDI,[ESP + 0x10c]               ; 0041c3fe
    LEA ESI,[ESP + 0xdc]                ; 0041c405
    FXCH                                ; 0041c40c
    FSTP float ptr [ESP + 0xdc]         ; 0041c40e
    FSTP float ptr [ESP + 0xe0]         ; 0041c415
    FSTP float ptr [ESP + 0xe4]         ; 0041c41c
    MOVSD ES:EDI,ESI                    ; 0041c423
    MOVSD ES:EDI,ESI                    ; 0041c424
    MOVSD ES:EDI,ESI                    ; 0041c425
    PUSH EAX                            ; 0041c426
    FLD float ptr [ESP + 0x110]         ; 0041c427
    FLD float ptr [ESP + 0x114]         ; 0041c42e
    FLD float ptr [ESP + 0x118]         ; 0041c435
    LEA EDI,[ESP + 0x80]                ; 0041c43c
    LEA ESI,[ESP + 0x11c]               ; 0041c443
    FXCH ST2                            ; 0041c44a
    FCHS                                ; 0041c44c
    FXCH                                ; 0041c44e
    FCHS                                ; 0041c450
    FXCH ST2                            ; 0041c452
    FCHS                                ; 0041c454
    FXCH                                ; 0041c456
    FSTP float ptr [ESP + 0x11c]        ; 0041c458
    FXCH                                ; 0041c45f
    FSTP float ptr [ESP + 0x120]        ; 0041c461
    FSTP float ptr [ESP + 0x124]        ; 0041c468
    MOVSD ES:EDI,ESI                    ; 0041c46f
    MOVSD ES:EDI,ESI                    ; 0041c470
    MOVSD ES:EDI,ESI                    ; 0041c471
    PUSH EBX                            ; 0041c472
    LEA ESI,[ESP + 0xf0]                ; 0041c473
    LEA EDI,[ESP + 0xb4]                ; 0041c47a
    CALL core_actor.cpp_FUN_00408cf0    ; 0041c481
        ;   XREF to: 00408cf0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408cf0()
    LEA ESI,[ESP + 0xf0]                ; 0041c486
    ADD ESP,0x8                         ; 0041c48d
    LEA EAX,[EBX + 0x4f0]               ; 0041c490
    MOVSD ES:EDI,ESI                    ; 0041c496
    MOVSD ES:EDI,ESI                    ; 0041c497
    MOVSD ES:EDI,ESI                    ; 0041c498
    FLD float ptr [EAX]                 ; 0041c499
    FLD float ptr [EAX + 0x4]           ; 0041c49b
    FLD float ptr [EAX + 0x8]           ; 0041c49e
    LEA EDI,[ESP + 0xd0]                ; 0041c4a1
    LEA ESI,[ESP + 0xc4]                ; 0041c4a8
    FXCH ST2                            ; 0041c4af
    FADD float ptr [ESP + 0xac]         ; 0041c4b1
    FXCH                                ; 0041c4b8
    FADD float ptr [ESP + 0xb0]         ; 0041c4ba
    FXCH ST2                            ; 0041c4c1
    FADD float ptr [ESP + 0xb4]         ; 0041c4c3
    FXCH                                ; 0041c4ca
    FSTP float ptr [ESP + 0xc4]         ; 0041c4cc
    FXCH                                ; 0041c4d3
    FSTP float ptr [ESP + 0xc8]         ; 0041c4d5
    FSTP float ptr [ESP + 0xcc]         ; 0041c4dc
    MOVSD ES:EDI,ESI                    ; 0041c4e3
    MOVSD ES:EDI,ESI                    ; 0041c4e4
    MOVSD ES:EDI,ESI                    ; 0041c4e5
    LEA ESI,[EBX + 0x20]                ; 0041c4e6
    MOV EAX,dword ptr [ESP + 0xd0]      ; 0041c4e9
    MOV dword ptr [ESI],EAX             ; 0041c4f0
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0041c4f2
    MOV dword ptr [ESI + 0x4],EAX       ; 0041c4f9
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0041c4fc
    MOV dword ptr [ESI + 0x8],EAX       ; 0041c503
    LEA EAX,[EBX + 0x530]               ; 0041c506
    FLD float ptr [EAX + 0x4]           ; 0041c50c
    FMUL ST0                            ; 0041c50f
    FLD float ptr [EAX]                 ; 0041c511
    FMUL ST0                            ; 0041c513
    FADDP                               ; 0041c515
    FLD float ptr [EAX + 0x8]           ; 0041c517
    FMUL ST0                            ; 0041c51a
    FADDP                               ; 0041c51c
    FSQRT                               ; 0041c51e
    FST float ptr [ESP]                 ; 0041c520
    FCOMP double ptr [0x005cc521]       ; 0041c523 | DAT_005cc521
    FNSTSW AX                           ; 0041c529
    SAHF                                ; 0041c52b
    JBE 0x0041c2b7                      ; 0041c52c
        ;   XREF to: 0041c2b7 (CONDITIONAL_JUMP)  ; LAB_0041c2b7
    LEA EAX,[ESP + 0x4]                 ; 0041c532
    PUSH EAX                            ; 0041c536
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041c537
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041c53c
    LEA EAX,[ESP + 0x4]                 ; 0041c53f
    FLD float ptr [ESP]                 ; 0041c543
    FMUL float ptr [EBX + 0x4ec]        ; 0041c546
    PUSH EAX                            ; 0041c54c
    FMUL float ptr [0x005cc529]         ; 0041c54d | DAT_005cc529
    PUSH ESI                            ; 0041c553
    LEA EAX,[ESP + 0x9c]                ; 0041c554
    MOV dword ptr [ESP + 0x40],EBX      ; 0041c55b
    PUSH EAX                            ; 0041c55f
    MOV EAX,[0x0061b5a8]                ; 0041c560 | g_CDemonSetPtr
    MOV dword ptr [ESP + 0x48],EBX      ; 0041c565
    PUSH EAX                            ; 0041c569
    FSTP float ptr [ESP + 0x18]         ; 0041c56a
    CALL core_setcolid.cpp_FUN_00537f30 ; 0041c56e
        ;   XREF to: 00537f30 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00537f30()
    ADD ESP,0x10                        ; 0041c573
    MOV ESP,EBP                         ; 0041c576
    POP EBP                             ; 0041c578
    POP EDI                             ; 0041c579
    POP ESI                             ; 0041c57a
    POP EBX                             ; 0041c57b
    RET                                 ; 0041c57c

