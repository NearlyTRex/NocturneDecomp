; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_weather_cpp_FUN_005ae190(CWeather *this_ptr)
;
; Parameters:
; CWeather *       Stack[0x4]:4   this_ptr
; Local Variables:
; undefined4       Stack[-0x44]:4  local_44
; undefined8       Stack[-0x40]:8  local_40
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined        Stack[-0x30]:1  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   core_game.cpp_FUN_004d8060 at 004d842e
;
; Referenced Globals:
;   undefined4 s_noLightningFlash_005f9919+1
;   TerminatedCString s_noLightningFlash_005f992b
;   TerminatedCString s_rain_wav_1_005f993c
;   undefined4 DAT_005f994a
;   undefined4 DAT_005f9952
;   undefined4 DAT_005f995a
;   undefined4 DAT_005f9962
;   undefined4 DAT_005f996a
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_006236b8
;   undefined4 g_CGameInstance.field660_0x294
;   undefined4 g_CDemonCameraInstance.field4584_0x11e8
;   undefined4 DAT_02c997f8
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_0040cc00
;   core_actor.cpp_FUN_0040cd00
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_fire.cpp_FUN_004b7320
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580
;   core_weather.cpp_CWeather_createThunder_FUN_005ae840
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ae190
        ;   Label: core_weather.cpp_FUN_005ae190
    PUSH ESI                            ; 005ae191
    PUSH EDI                            ; 005ae192
    PUSH EBP                            ; 005ae193
    MOV EBP,ESP                         ; 005ae194
    SUB ESP,0x30                        ; 005ae196
    AND ESP,0xfffffff8                  ; 005ae199
    MOV EAX,[0x0061d95c]                ; 005ae19c | g_CGamePtr
    MOV EAX,dword ptr [EAX + 0x294]     ; 005ae1a1 | g_CGameInstance.field660_0x294
    MOV dword ptr [ESP + 0x1c],EAX      ; 005ae1a7
    MOV dword ptr [ESP + 0x8],EAX       ; 005ae1ab
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae1af
    CMP dword ptr [EAX + 0x24],0x0      ; 005ae1b2
    JNZ 0x005ae392                      ; 005ae1b6
        ;   XREF to: 005ae392 (CONDITIONAL_JUMP)  ; LAB_005ae392
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae1bc
        ;   Label: LAB_005ae1bc
    CMP dword ptr [EAX],0x0             ; 005ae1bf
    JZ 0x005ae43d                       ; 005ae1c2
        ;   XREF to: 005ae43d (CONDITIONAL_JUMP)  ; LAB_005ae43d
    XOR ESI,ESI                         ; 005ae1c8
    XOR EBX,EBX                         ; 005ae1ca
    MOV dword ptr [ESP + 0x24],ESI      ; 005ae1cc
    MOV dword ptr [ESP + 0x28],ESI      ; 005ae1d0
    MOV EAX,dword ptr [ESP + 0x24]      ; 005ae1d4
        ;   Label: LAB_005ae1d4
    XOR DL,DL                           ; 005ae1d8
    MOV byte ptr [EAX + 0x2c9a478],DL   ; 005ae1da
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae1e0
    FLD float ptr [EAX + 0x4]           ; 005ae1e3
    FMUL float ptr [ESP + 0x8]          ; 005ae1e6
    FSUBR float ptr [EBX + 0x2c997fc]   ; 005ae1ea | DAT_02c997fc | DAT_02c99808
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ae1f0
    FST float ptr [EBX + 0x2c997fc]     ; 005ae1f4 | DAT_02c997fc | DAT_02c99808
    FCOMP float ptr [EAX + 0x2c9a158]   ; 005ae1fa
    FNSTSW AX                           ; 005ae200
    SAHF                                ; 005ae202
    JNC 0x005ae295                      ; 005ae203
        ;   XREF to: 005ae295 (CONDITIONAL_JUMP)  ; LAB_005ae295
    FLD float ptr [EBX + 0x2c997fc]     ; 005ae209 | DAT_02c997fc | DAT_02c99808
    FADD float ptr [0x005f996a]         ; 005ae20f | DAT_005f996a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae215
    FSTP float ptr [EBX + 0x2c997fc]    ; 005ae218 | DAT_02c997fc | DAT_02c99808
    CMP dword ptr [EAX],0x1             ; 005ae21e
    JNZ 0x005ae295                      ; 005ae221
        ;   XREF to: 005ae295 (CONDITIONAL_JUMP)  ; LAB_005ae295
    MOV EAX,dword ptr [ESP + 0x28]      ; 005ae223
    LEA EDI,[ESP + 0x10]                ; 005ae227
    LEA ESI,[EBX + 0x2c997f8]           ; 005ae22b
    MOV EAX,dword ptr [EAX + 0x2c9a158] ; 005ae231
    MOVSD ES:EDI,ESI                    ; 005ae237 | DAT_02c997f8
    MOVSD ES:EDI,ESI                    ; 005ae238 | DAT_02c997fc
    MOVSD ES:EDI,ESI                    ; 005ae239 | DAT_02c99800
    PUSH 0x0                            ; 005ae23a
    MOV dword ptr [ESP + 0x18],EAX      ; 005ae23c
    LEA EAX,[ESP + 0x14]                ; 005ae240
    PUSH EAX                            ; 005ae244
    MOV ECX,dword ptr [0x0061c010]      ; 005ae245 | DAT_0061c010
    PUSH ECX                            ; 005ae24b
    CALL core_fire.cpp_FUN_004b7320     ; 005ae24c
        ;   XREF to: 004b7320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b7320(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005ae251
    PUSH 0x0                            ; 005ae254
    LEA EAX,[ESP + 0x14]                ; 005ae256
    PUSH EAX                            ; 005ae25a
    MOV ESI,dword ptr [0x0061c010]      ; 005ae25b | DAT_0061c010
    PUSH ESI                            ; 005ae261
    CALL core_fire.cpp_FUN_004b7320     ; 005ae262
        ;   XREF to: 004b7320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b7320(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005ae267
    PUSH 0x0                            ; 005ae26a
    LEA EAX,[ESP + 0x14]                ; 005ae26c
    PUSH EAX                            ; 005ae270
    MOV EDI,dword ptr [0x0061c010]      ; 005ae271 | DAT_0061c010
    PUSH EDI                            ; 005ae277
    CALL core_fire.cpp_FUN_004b7320     ; 005ae278
        ;   XREF to: 004b7320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b7320(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005ae27d
    PUSH 0x0                            ; 005ae280
    LEA EAX,[ESP + 0x14]                ; 005ae282
    PUSH EAX                            ; 005ae286
    MOV EAX,[0x0061c010]                ; 005ae287 | DAT_0061c010
    PUSH EAX                            ; 005ae28c
    CALL core_fire.cpp_FUN_004b7320     ; 005ae28d
        ;   XREF to: 004b7320 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_FUN_004b7320(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity)
    ADD ESP,0xc                         ; 005ae292
    MOV ECX,dword ptr [ESP + 0x24]      ; 005ae295
        ;   Label: LAB_005ae295
    MOV EDX,dword ptr [ESP + 0x28]      ; 005ae299
    ADD EBX,0xc                         ; 005ae29d
    INC ECX                             ; 005ae2a0
    ADD EDX,0x4                         ; 005ae2a1
    MOV dword ptr [ESP + 0x24],ECX      ; 005ae2a4
    MOV dword ptr [ESP + 0x28],EDX      ; 005ae2a8
    CMP ECX,0xc8                        ; 005ae2ac
    JL 0x005ae1d4                       ; 005ae2b2
        ;   XREF to: 005ae1d4 (CONDITIONAL_JUMP)  ; LAB_005ae1d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae2b8
    MOV EDI,dword ptr [EAX]             ; 005ae2bb
    CMP EDI,0x1                         ; 005ae2bd
    JNZ 0x005ae38b                      ; 005ae2c0
        ;   XREF to: 005ae38b (CONDITIONAL_JUMP)  ; LAB_005ae38b
    FLD float ptr [EAX + 0x20]          ; 005ae2c6
    FSUB float ptr [ESP + 0x8]          ; 005ae2c9
    FST float ptr [EAX + 0x20]          ; 005ae2cd
    FLDZ                                ; 005ae2d0
    FCOMPP                              ; 005ae2d2
    FNSTSW AX                           ; 005ae2d4
    SAHF                                ; 005ae2d6
    JA 0x005ae452                       ; 005ae2d7
        ;   XREF to: 005ae452 (CONDITIONAL_JUMP)  ; LAB_005ae452
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae2dd
    FLD float ptr [EAX + 0x2c]          ; 005ae2e0
    FSUB float ptr [ESP + 0x8]          ; 005ae2e3
    FST float ptr [EAX + 0x2c]          ; 005ae2e7
    FLDZ                                ; 005ae2ea
    FCOMPP                              ; 005ae2ec
    FNSTSW AX                           ; 005ae2ee
    SAHF                                ; 005ae2f0
    JBE 0x005ae32f                      ; 005ae2f1
        ;   XREF to: 005ae32f (CONDITIONAL_JUMP)  ; LAB_005ae32f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae2f3
    PUSH dword ptr [EAX + 0x34]         ; 005ae2f6
    PUSH 0x3dcccccd                     ; 005ae2f9
    CALL core_actor.cpp_FUN_0040cc00    ; 005ae2fe
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x34],EAX      ; 005ae303
    FLD float ptr [ESP + 0x34]          ; 005ae307
    ADD ESP,0x8                         ; 005ae30b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae30e
    PUSH 0x5f992b                       ; 005ae311 | = "noLightningFlash"
    FSTP float ptr [EAX + 0x2c]         ; 005ae316
    MOV EAX,[0x0061b4d0]                ; 005ae319 | DAT_0061b4d0
    PUSH EAX                            ; 005ae31e
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005ae31f
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005ae324
    TEST EAX,EAX                        ; 005ae327
    JZ 0x005ae48b                       ; 005ae329
        ;   XREF to: 005ae48b (CONDITIONAL_JUMP)  ; LAB_005ae48b
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae32f
        ;   Label: LAB_005ae32f
    FLD float ptr [EAX + 0x34]          ; 005ae332
    FST double ptr [ESP]                ; 005ae335
    FCOMP double ptr [0x005f995a]       ; 005ae338 | DAT_005f995a
    FNSTSW AX                           ; 005ae33e
    SAHF                                ; 005ae340
    JNC 0x005ae526                      ; 005ae341
        ;   XREF to: 005ae526 (CONDITIONAL_JUMP)  ; LAB_005ae526
    FLD double ptr [ESP]                ; 005ae347
    FLDLN2                              ; 005ae34a
    FXCH                                ; 005ae34c
    FYL2X                               ; 005ae34e
    FLD float ptr [ESP + 0x8]           ; 005ae350
    FMUL double ptr [0x005f9962]        ; 005ae354 | DAT_005f9962
    FADDP                               ; 005ae35a
    FLD1                                ; 005ae35c
    FLDL2E                              ; 005ae35e
    FMUL ST2                            ; 005ae360
    FST ST2                             ; 005ae362
    FPREM                               ; 005ae364
    F2XM1                               ; 005ae366
    FADDP                               ; 005ae368
    FSCALE                              ; 005ae36a
    FSTP ST1                            ; 005ae36c
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae36e
    FSTP float ptr [EAX + 0x34]         ; 005ae371
    MOV ESI,dword ptr [0x02c9a540]      ; 005ae374 | DAT_02c9a540
        ;   Label: LAB_005ae374
    PUSH ESI                            ; 005ae37a
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005ae37b
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005ae380
    TEST EAX,EAX                        ; 005ae383
    JZ 0x005ae535                       ; 005ae385
        ;   XREF to: 005ae535 (CONDITIONAL_JUMP)  ; LAB_005ae535
    MOV ESP,EBP                         ; 005ae38b
        ;   Label: LAB_005ae38b
    POP EBP                             ; 005ae38d
    POP EDI                             ; 005ae38e
    POP ESI                             ; 005ae38f
    POP EBX                             ; 005ae390
    RET                                 ; 005ae391
    FLD float ptr [EAX + 0x28]          ; 005ae392
        ;   Label: LAB_005ae392
    FSUB float ptr [ESP + 0x1c]         ; 005ae395
    FST float ptr [EAX + 0x28]          ; 005ae399
    FLDZ                                ; 005ae39c
    FCOMPP                              ; 005ae39e
    FNSTSW AX                           ; 005ae3a0
    SAHF                                ; 005ae3a2
    JA 0x005ae414                       ; 005ae3a3
        ;   XREF to: 005ae414 (CONDITIONAL_JUMP)  ; LAB_005ae414
    PUSH 0x5f991a                       ; 005ae3a5 | s_noLightningFlash_005f9919+1
    MOV ECX,dword ptr [0x0061b4d0]      ; 005ae3aa | DAT_0061b4d0
    PUSH ECX                            ; 005ae3b0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005ae3b1
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005ae3b6
    TEST EAX,EAX                        ; 005ae3b9
    JNZ 0x005ae414                      ; 005ae3bb
        ;   XREF to: 005ae414 (CONDITIONAL_JUMP)  ; LAB_005ae414
    MOV EAX,[0x01fe49d4]                ; 005ae3bd | g_CDemonCameraInstance.field4584_0x11e8
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ae3c2
    FILD dword ptr [ESP + 0x2c]         ; 005ae3c6
    FMUL double ptr [0x005f994a]        ; 005ae3ca | DAT_005f994a
    FSUB float ptr [ESP + 0x1c]         ; 005ae3d0
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae3d4
    FST float ptr [ESP + 0x20]          ; 005ae3d7
    FCOMP float ptr [EAX + 0x30]        ; 005ae3db
    FNSTSW AX                           ; 005ae3de
    SAHF                                ; 005ae3e0
    JNC 0x005ae3fe                      ; 005ae3e1
        ;   XREF to: 005ae3fe (CONDITIONAL_JUMP)  ; LAB_005ae3fe
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae3e3
    MOV EAX,dword ptr [EAX + 0x30]      ; 005ae3e6
    MOV dword ptr [ESP + 0x20],EAX      ; 005ae3e9
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae3ed
    MOV dword ptr [EAX + 0x24],0x0      ; 005ae3f0
    MOV dword ptr [EAX + 0x28],0x0      ; 005ae3f7
    PUSH dword ptr [ESP + 0x20]         ; 005ae3fe
        ;   Label: LAB_005ae3fe
    PUSH 0x1fe37ec                      ; 005ae402
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 005ae407
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005ae40c
    JMP 0x005ae1bc                      ; 005ae40f
        ;   XREF to: 005ae1bc (UNCONDITIONAL_JUMP)  ; LAB_005ae1bc
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae414
        ;   Label: LAB_005ae414
    PUSH dword ptr [EAX + 0x30]         ; 005ae417
    PUSH 0x1fe37ec                      ; 005ae41a
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 005ae41f
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005ae424
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae427
    MOV dword ptr [EAX + 0x24],0x0      ; 005ae42a
    MOV dword ptr [EAX + 0x28],0x0      ; 005ae431
    JMP 0x005ae1bc                      ; 005ae438
        ;   XREF to: 005ae1bc (UNCONDITIONAL_JUMP)  ; LAB_005ae1bc
    MOV EAX,[0x02c9a540]                ; 005ae43d | DAT_02c9a540
        ;   Label: LAB_005ae43d
    PUSH EAX                            ; 005ae442
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005ae443
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005ae448
    MOV ESP,EBP                         ; 005ae44b
    POP EBP                             ; 005ae44d
    POP EDI                             ; 005ae44e
    POP ESI                             ; 005ae44f
    POP EBX                             ; 005ae450
    RET                                 ; 005ae451
    PUSH 0x3ecccccd                     ; 005ae452
        ;   Label: LAB_005ae452
    CALL core_actor.cpp_FUN_0040cd00    ; 005ae457
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 005ae45c
    TEST EAX,EAX                        ; 005ae45f
    JZ 0x005ae47a                       ; 005ae461
        ;   XREF to: 005ae47a (CONDITIONAL_JUMP)  ; LAB_005ae47a
    PUSH EDI                            ; 005ae463
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ae464
    PUSH 0x3dcccccd                     ; 005ae467
    PUSH EBX                            ; 005ae46c
    CALL core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580 ; 005ae46d
        ;   XREF to: 005ae580 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createLightningStrike_FUN_005ae580(CWeather * this_ptr, float flash_timer, int play_sound)
    ADD ESP,0xc                         ; 005ae472
    JMP 0x005ae32f                      ; 005ae475
        ;   XREF to: 005ae32f (UNCONDITIONAL_JUMP)  ; LAB_005ae32f
    MOV ECX,dword ptr [EBP + 0x14]      ; 005ae47a
        ;   Label: LAB_005ae47a
    PUSH ECX                            ; 005ae47d
    CALL core_weather.cpp_CWeather_createThunder_FUN_005ae840 ; 005ae47e
        ;   XREF to: 005ae840 (UNCONDITIONAL_CALL)  ; void core_weather.cpp_CWeather_createThunder_FUN_005ae840(CWeather * this_ptr)
    ADD ESP,0x4                         ; 005ae483
    JMP 0x005ae32f                      ; 005ae486
        ;   XREF to: 005ae32f (UNCONDITIONAL_JUMP)  ; LAB_005ae32f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae48b
        ;   Label: LAB_005ae48b
    MOV dword ptr [EAX + 0x24],EDI      ; 005ae48e
    MOV EAX,[0x01fe49d4]                ; 005ae491 | g_CDemonCameraInstance.field4584_0x11e8
    MOV dword ptr [ESP + 0x2c],EAX      ; 005ae496
    FILD dword ptr [ESP + 0x2c]         ; 005ae49a
    FMUL double ptr [0x005f994a]        ; 005ae49e | DAT_005f994a
    PUSH 0x3e99999a                     ; 005ae4a4
    MOV EBX,dword ptr [EBP + 0x14]      ; 005ae4a9
    FSTP float ptr [ESP + 0x10]         ; 005ae4ac
    MOV EAX,dword ptr [ESP + 0x10]      ; 005ae4b0
    PUSH 0x3dcccccd                     ; 005ae4b4
    MOV dword ptr [EBX + 0x30],EAX      ; 005ae4b9
    CALL core_actor.cpp_FUN_0040cc00    ; 005ae4bc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x34],EAX      ; 005ae4c1
    FLD float ptr [ESP + 0x34]          ; 005ae4c5
    ADD ESP,0x8                         ; 005ae4c9
    FADD float ptr [ESP + 0xc]          ; 005ae4cc
    FST float ptr [ESP + 0xc]           ; 005ae4d0
    FLD1                                ; 005ae4d4
    FCOMPP                              ; 005ae4d6
    FNSTSW AX                           ; 005ae4d8
    SAHF                                ; 005ae4da
    JNC 0x005ae4e5                      ; 005ae4db
        ;   XREF to: 005ae4e5 (CONDITIONAL_JUMP)  ; LAB_005ae4e5
    MOV dword ptr [ESP + 0xc],0x3f800000 ; 005ae4dd
    FLD float ptr [ESP + 0xc]           ; 005ae4e5
        ;   Label: LAB_005ae4e5
    FMUL double ptr [0x005f9952]        ; 005ae4e9 | DAT_005f9952
    SUB ESP,0x4                         ; 005ae4ef
    FSTP float ptr [ESP]                ; 005ae4f2
    PUSH 0x3c23d70a                     ; 005ae4f5
    CALL core_actor.cpp_FUN_0040cc00    ; 005ae4fa
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_0040cc00()
    MOV dword ptr [ESP + 0x34],EAX      ; 005ae4ff
    FLD float ptr [ESP + 0x34]          ; 005ae503
    ADD ESP,0x8                         ; 005ae507
    PUSH dword ptr [ESP + 0xc]          ; 005ae50a
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae50e
    PUSH 0x1fe37ec                      ; 005ae511
    FSTP float ptr [EAX + 0x28]         ; 005ae516
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540 ; 005ae519
        ;   XREF to: 00453540 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_00453540(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 005ae51e
    JMP 0x005ae32f                      ; 005ae521
        ;   XREF to: 005ae32f (UNCONDITIONAL_JUMP)  ; LAB_005ae32f
    MOV EAX,dword ptr [EBP + 0x14]      ; 005ae526
        ;   Label: LAB_005ae526
    MOV dword ptr [EAX + 0x34],0x41700000 ; 005ae529
    JMP 0x005ae374                      ; 005ae530
        ;   XREF to: 005ae374 (UNCONDITIONAL_JUMP)  ; LAB_005ae374
    PUSH 0x5f993c                       ; 005ae535 | = "rain.wav @ .1"
        ;   Label: LAB_005ae535
    MOV EDI,dword ptr [EBP + 0x14]      ; 005ae53a
    PUSH EDI                            ; 005ae53d
    MOV EAX,[0x006236b8]                ; 005ae53e | DAT_006236b8
    PUSH EAX                            ; 005ae543
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 005ae544
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005ae549
    MOV [0x02c9a540],EAX                ; 005ae54c | DAT_02c9a540
    MOV ESP,EBP                         ; 005ae551
    POP EBP                             ; 005ae553
    POP EDI                             ; 005ae554
    POP ESI                             ; 005ae555
    POP EBX                             ; 005ae556
    RET                                 ; 005ae557

