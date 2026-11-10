; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hag_cpp_FUN_005ab260(int param_1,float param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_Death_005f0c42
;   TerminatedCString s_Animation_005f0c48
;   undefined4 DAT_005f0c52
;   TerminatedCString s_Death_005f0c57
;   undefined4 DAT_005f0c5d
;   TerminatedCString s_hagheal01L_wav_005f0c62
;   undefined4 DAT_005f0c76
;   undefined4 DAT_005f0c7e
;   undefined4 DAT_005f0c82
;   undefined4 DAT_005f0c86
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_motion.cpp_FUN_005035c0
;   core_xform.cpp_FUN_00591530
;   core_xform.cpp_FUN_00594380
;   core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10
;   shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
;   unkaddr_0059d350.cpp_FUN_0059daa0
;   unkaddr_005a7eb0.cpp_FUN_005a7ed0
;   unkafter_superopt.cpp_FUN_005a8180
;   unkafter_superopt.cpp_FUN_005a8300
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ab260
        ;   Label: core_hag.cpp_FUN_005ab260
    PUSH ESI                            ; 005ab261
    PUSH EDI                            ; 005ab262
    PUSH EBP                            ; 005ab263
    MOV EBP,ESP                         ; 005ab264
    SUB ESP,0x140                       ; 005ab266
    SUB EBP,0x7a                        ; 005ab26c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005ab26f
    PUSH 0x5f0c42                       ; 005ab275 | = "Death"
    ADD EBX,0x10af8                     ; 005ab27a
    PUSH EBX                            ; 005ab280
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ab281
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab286
    TEST EAX,EAX                        ; 005ab289
    JNZ 0x005ab2a3                      ; 005ab28b
        ;   XREF to: 005ab2a3 (CONDITIONAL_JUMP)  ; LAB_005ab2a3
    PUSH 0x5f0c48                       ; 005ab28d | = "Animation"
    PUSH EBX                            ; 005ab292
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ab293
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab298
    TEST EAX,EAX                        ; 005ab29b
    JZ 0x005ab37b                       ; 005ab29d
        ;   XREF to: 005ab37b (CONDITIONAL_JUMP)  ; LAB_005ab37b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab2a3
        ;   Label: LAB_005ab2a3
    ADD EAX,0x154                       ; 005ab2a9
    PUSH dword ptr [EBP + 0x92]         ; 005ab2ae
    PUSH EAX                            ; 005ab2b4
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005ab2b5
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab2ba
    ADD ESP,0x8                         ; 005ab2c0
    ADD EAX,0x264                       ; 005ab2c3
    PUSH dword ptr [EBP + 0x92]         ; 005ab2c8
    PUSH EAX                            ; 005ab2ce
    CALL unkafter_superopt.cpp_FUN_005a8180 ; 005ab2cf
        ;   XREF to: 005a8180 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8180()
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab2d4
    ADD ESP,0x8                         ; 005ab2da
    ADD EAX,0x2b4                       ; 005ab2dd
    PUSH EAX                            ; 005ab2e2
    CALL core_motion.cpp_FUN_005035c0   ; 005ab2e3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 005ab2e8
    ADD ESP,0x4                         ; 005ab2eb
    TEST EAX,EAX                        ; 005ab2ee
    JNZ 0x005ab3c3                      ; 005ab2f0
        ;   XREF to: 005ab3c3 (CONDITIONAL_JUMP)  ; LAB_005ab3c3
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab2f6
    CMP byte ptr [EAX + 0x11741],0x0    ; 005ab2fc
    JZ 0x005ab3b2                       ; 005ab303
        ;   XREF to: 005ab3b2 (CONDITIONAL_JUMP)  ; LAB_005ab3b2
    FLD float ptr [EAX + 0x11840]       ; 005ab309
    FSUB float ptr [EBP + 0x92]         ; 005ab30f
    FST float ptr [EAX + 0x11840]       ; 005ab315
    FLDZ                                ; 005ab31b
    FCOMPP                              ; 005ab31d
    FNSTSW AX                           ; 005ab31f
    SAHF                                ; 005ab321
    JC 0x005ab35c                       ; 005ab322
        ;   XREF to: 005ab35c (CONDITIONAL_JUMP)  ; LAB_005ab35c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005ab324
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab32a
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005ab330
    ADD EBX,0x11741                     ; 005ab336
    FLD float ptr [EAX + 0x11844]       ; 005ab33c
    PUSH EBX                            ; 005ab342
    FSTP float ptr [EAX + 0x11840]      ; 005ab343
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005ab349
    PUSH ESI                            ; 005ab34f
    CALL dword ptr [EAX + 0x34]         ; 005ab350
    ADD ESP,0x8                         ; 005ab353
    MOV dword ptr [ESI + 0x11848],EAX   ; 005ab356
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab35c
        ;   Label: LAB_005ab35c
    FLD float ptr [EAX + 0x25a8]        ; 005ab362
    FCOMP float ptr [EAX + 0x25ac]      ; 005ab368
    FNSTSW AX                           ; 005ab36e
    SAHF                                ; 005ab370
    JC 0x005ab3da                       ; 005ab371
        ;   XREF to: 005ab3da (CONDITIONAL_JUMP)  ; LAB_005ab3da
    LEA ESP,[EBP + 0x7a]                ; 005ab373
        ;   Label: LAB_005ab373
    POP EBP                             ; 005ab376
    POP EDI                             ; 005ab377
    POP ESI                             ; 005ab378
    POP EBX                             ; 005ab379
    RET                                 ; 005ab37a
    PUSH 0x5f0c52                       ; 005ab37b | DAT_005f0c52
        ;   Label: LAB_005ab37b
    PUSH EBX                            ; 005ab380
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ab381
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab386
    TEST EAX,EAX                        ; 005ab389
    JNZ 0x005ab2a3                      ; 005ab38b
        ;   XREF to: 005ab2a3 (CONDITIONAL_JUMP)  ; LAB_005ab2a3
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005ab391
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab397
    PUSH EDX                            ; 005ab39d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005ab39e
    CALL dword ptr [EAX + 0x17c]        ; 005ab3a4
    ADD ESP,0x4                         ; 005ab3aa
    JMP 0x005ab2a3                      ; 005ab3ad
        ;   XREF to: 005ab2a3 (UNCONDITIONAL_JUMP)  ; LAB_005ab2a3
    MOV EBX,dword ptr [EAX + 0x11848]   ; 005ab3b2
        ;   Label: LAB_005ab3b2
    PUSH EBX                            ; 005ab3b8
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005ab3b9
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005ab3be
    JMP 0x005ab35c                      ; 005ab3c1
        ;   XREF to: 005ab35c (UNCONDITIONAL_JUMP)  ; LAB_005ab35c
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab3c3
        ;   Label: LAB_005ab3c3
    MOV ECX,dword ptr [EAX + 0x11848]   ; 005ab3c9
    PUSH ECX                            ; 005ab3cf
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 005ab3d0
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005ab3d5
    JMP 0x005ab35c                      ; 005ab3d8
        ;   XREF to: 005ab35c (UNCONDITIONAL_JUMP)  ; LAB_005ab35c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005ab3da
        ;   Label: LAB_005ab3da
    PUSH 0x5f0c57                       ; 005ab3e0 | = "Death"
    ADD EBX,0x10af8                     ; 005ab3e5
    PUSH EBX                            ; 005ab3eb
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ab3ec
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab3f1
    TEST EAX,EAX                        ; 005ab3f4
    JNZ 0x005ab373                      ; 005ab3f6
        ;   XREF to: 005ab373 (CONDITIONAL_JUMP)  ; LAB_005ab373
    PUSH 0x5f0c5d                       ; 005ab3fc | DAT_005f0c5d
    PUSH EBX                            ; 005ab401
    CALL unkaddr_0059d350.cpp_FUN_0059daa0 ; 005ab402
        ;   XREF to: 0059daa0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_0059d350.cpp_FUN_0059daa0()
    ADD ESP,0x8                         ; 005ab407
    TEST EAX,EAX                        ; 005ab40a
    JNZ 0x005ab373                      ; 005ab40c
        ;   XREF to: 005ab373 (CONDITIONAL_JUMP)  ; LAB_005ab373
    FLD float ptr [EBP + 0x92]          ; 005ab412
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab418
    FMUL double ptr [0x005f0c76]        ; 005ab41e | DAT_005f0c76
    MOV EDI,dword ptr [EAX + 0x1185c]   ; 005ab424
    FLD float ptr [EAX + 0x25a8]        ; 005ab42a
    FXCH                                ; 005ab430
    FADD ST0,ST1                        ; 005ab432
    PUSH EDI                            ; 005ab434
    FSTP ST1                            ; 005ab435
    FSTP float ptr [EAX + 0x25a8]       ; 005ab437
    CALL sound_sndmain.cpp_FUN_00550b70 ; 005ab43d
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 005ab442
    TEST EAX,EAX                        ; 005ab445
    JNZ 0x005ab4a2                      ; 005ab447
        ;   XREF to: 005ab4a2 (CONDITIONAL_JUMP)  ; LAB_005ab4a2
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 005ab449
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x2                            ; 005ab44e
    PUSH 0x3f800000                     ; 005ab450
    PUSH 0x0                            ; 005ab455
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab457
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ab45c
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab45f
    SUB ESP,0x8                         ; 005ab462
    FLD float ptr [EBP + 0x76]          ; 005ab465
    FSTP double ptr [ESP]               ; 005ab468
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 005ab46b
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 005ab470
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab473
    PUSH 0x5f0c62                       ; 005ab479 | = "hagheal01L.wav"
    MOV EDX,dword ptr [EBP + 0x8e]      ; 005ab47e
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 005ab484
    PUSH EDX                            ; 005ab48a
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005ab48b
    CALL dword ptr [EAX + 0x38]         ; 005ab491
    ADD ESP,0x8                         ; 005ab494
    MOV dword ptr [EBX + 0x1185c],EAX   ; 005ab497
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 005ab49d
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    MOV ESI,dword ptr [EBP + 0x8e]      ; 005ab4a2
        ;   Label: LAB_005ab4a2
    ADD ESI,0x154                       ; 005ab4a8
    PUSH ESI                            ; 005ab4ae
    CALL shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130 ; 005ab4af
        ;   XREF to: 005a8130 (UNCONDITIONAL_CALL)  ; int shape_superopt.cpp_CComplexPolygon_getMaterialId_FUN_005a8130(CComplexPolygon * this_ptr)
    ADD ESP,0x4                         ; 005ab4b4
    TEST EAX,EAX                        ; 005ab4b7
    JZ 0x005ab373                       ; 005ab4b9
        ;   XREF to: 005ab373 (CONDITIONAL_JUMP)  ; LAB_005ab373
    MOV dword ptr [EBP + 0x66],ESI      ; 005ab4bf
    XOR EBX,EBX                         ; 005ab4c2
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005ab4c4
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
        ;   Label: LAB_005ab4c4
    TEST EAX,EAX                        ; 005ab4c9
    JNZ 0x005ab5ac                      ; 005ab4cb
        ;   XREF to: 005ab5ac (CONDITIONAL_JUMP)  ; LAB_005ab5ac
    INC EBX                             ; 005ab4d1
        ;   Label: LAB_005ab4d1
    CMP EBX,0x5                         ; 005ab4d2
    JL 0x005ab4c4                       ; 005ab4d5
        ;   XREF to: 005ab4c4 (CONDITIONAL_JUMP)  ; LAB_005ab4c4
    CALL unkaddr_005a7eb0.cpp_FUN_005a7ed0 ; 005ab4d7
        ;   XREF to: 005a7ed0 (UNCONDITIONAL_CALL)  ; undefined unkaddr_005a7eb0.cpp_FUN_005a7ed0()
    TEST EAX,EAX                        ; 005ab4dc
    JZ 0x005ab373                       ; 005ab4de
        ;   XREF to: 005ab373 (CONDITIONAL_JUMP)  ; LAB_005ab373
    PUSH 0x40c90fdb                     ; 005ab4e4
    PUSH 0x0                            ; 005ab4e9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab4eb
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab4f0
    FLD float ptr [EBP + 0x76]          ; 005ab4f3
    FLD ST0                             ; 005ab4f6
    FCOS                                ; 005ab4f8
    FXCH                                ; 005ab4fa
    FSIN                                ; 005ab4fc
    ADD ESP,0x8                         ; 005ab4fe
    FSTP double ptr [EBP + 0x56]        ; 005ab501
    FMUL double ptr [0x005f0c86]        ; 005ab504 | DAT_005f0c86
    PUSH 0x40c00000                     ; 005ab50a
    PUSH 0x3f800000                     ; 005ab50f
    FSTP float ptr [EBP + 0x5e]         ; 005ab514
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab517
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab51c
    FLD float ptr [EBP + 0x76]          ; 005ab51f
    FLD double ptr [EBP + 0x56]         ; 005ab522
    FMUL double ptr [0x005f0c86]        ; 005ab525 | DAT_005f0c86
    ADD ESP,0x8                         ; 005ab52b
    FSTP float ptr [EBP + 0x76]         ; 005ab52e
    MOV EAX,dword ptr [EBP + 0x76]      ; 005ab531
    FSTP float ptr [EBP + 0x62]         ; 005ab534
    MOV dword ptr [EBP + -0x2e],EAX     ; 005ab537
    MOV EAX,dword ptr [EBP + 0x62]      ; 005ab53a
    XOR EDX,EDX                         ; 005ab53d
    MOV dword ptr [EBP + -0x2a],EAX     ; 005ab53f
    MOV EAX,dword ptr [EBP + 0x5e]      ; 005ab542
    PUSH EDX                            ; 005ab545
    MOV dword ptr [EBP + -0x26],EAX     ; 005ab546
    LEA EAX,[EBP + -0x16]               ; 005ab549
    PUSH EAX                            ; 005ab54c
    LEA EAX,[EBP + -0x22]               ; 005ab54d
    PUSH EAX                            ; 005ab550
    LEA EAX,[EBP + -0x2e]               ; 005ab551
    PUSH EAX                            ; 005ab554
    PUSH 0x0                            ; 005ab555
    MOV EDI,0x3f800000                  ; 005ab557
    PUSH 0x0                            ; 005ab55c
    MOV ECX,0x3dcccccd                  ; 005ab55e
    PUSH 0x3f800000                     ; 005ab563
    MOV dword ptr [EBP + -0x12],EDI     ; 005ab568
    PUSH 0x3f800000                     ; 005ab56b
    MOV dword ptr [EBP + -0x22],EDX     ; 005ab570
    PUSH 0x3e99999a                     ; 005ab573
    MOV dword ptr [EBP + -0x1e],ECX     ; 005ab578
    PUSH 0x0                            ; 005ab57b
    MOV EAX,dword ptr [EBP + 0x8e]      ; 005ab57d
    PUSH 0x3f333333                     ; 005ab583
    ADD EAX,0x154                       ; 005ab588
    PUSH 0x40000000                     ; 005ab58d
    MOV dword ptr [EBP + -0x1a],EDX     ; 005ab592
    PUSH EAX                            ; 005ab595
    MOV dword ptr [EBP + -0x16],EDX     ; 005ab596
    MOV dword ptr [EBP + -0xe],EDX      ; 005ab599
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005ab59c
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005ab5a1
    LEA ESP,[EBP + 0x7a]                ; 005ab5a4
    POP EBP                             ; 005ab5a7
    POP EDI                             ; 005ab5a8
    POP ESI                             ; 005ab5a9
    POP EBX                             ; 005ab5aa
    RET                                 ; 005ab5ab
    PUSH 0x40c90fdb                     ; 005ab5ac
        ;   Label: LAB_005ab5ac
    PUSH 0x40490fdb                     ; 005ab5b1
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab5b6
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ab5bb
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab5be
    PUSH 0x40c90fdb                     ; 005ab5c1
    FLD float ptr [EBP + 0x76]          ; 005ab5c6
    PUSH 0x40490fdb                     ; 005ab5c9
    FSTP float ptr [EBP + 0x6a]         ; 005ab5ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab5d1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ab5d6
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab5d9
    PUSH 0x40c90fdb                     ; 005ab5dc
    FLD float ptr [EBP + 0x76]          ; 005ab5e1
    PUSH 0x40490fdb                     ; 005ab5e4
    FSTP float ptr [EBP + 0x6e]         ; 005ab5e9
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab5ec
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab5f1
    MOV EAX,dword ptr [EBP + 0x6a]      ; 005ab5f4
    FLD float ptr [EBP + 0x76]          ; 005ab5f7
    MOV dword ptr [EBP + 0x26],EAX      ; 005ab5fa
    MOV EAX,dword ptr [EBP + 0x6e]      ; 005ab5fd
    FSTP float ptr [EBP + 0x72]         ; 005ab600
    MOV dword ptr [EBP + 0x2a],EAX      ; 005ab603
    MOV EAX,dword ptr [EBP + 0x72]      ; 005ab606
    ADD ESP,0x8                         ; 005ab609
    MOV dword ptr [EBP + 0x2e],EAX      ; 005ab60c
    LEA EAX,[EBP + 0x26]                ; 005ab60f
    PUSH EAX                            ; 005ab612
    LEA ESI,[EBP + -0x56]               ; 005ab613
    LEA EDI,[EBP + -0x66]               ; 005ab616
    CALL core_xform.cpp_FUN_00594380    ; 005ab619
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00594380()
    LEA ESI,[EBP + -0x56]               ; 005ab61e
    LEA EAX,[EBP + -0x66]               ; 005ab621
    ADD ESP,0x4                         ; 005ab624
    MOVSD ES:EDI,ESI                    ; 005ab627
    MOVSD ES:EDI,ESI                    ; 005ab628
    MOVSD ES:EDI,ESI                    ; 005ab629
    MOVSD ES:EDI,ESI                    ; 005ab62a
    PUSH EAX                            ; 005ab62b
    LEA ESI,[EBP + 0xffffff3a]          ; 005ab62c
    LEA EDI,[EBP + 0xffffff6a]          ; 005ab632
    CALL core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10 ; 005ab638
        ;   XREF to: 00593a10 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToMatrix3x4_FUN_00593a10()
    MOV ECX,0xc                         ; 005ab63d
    LEA ESI,[EBP + 0xffffff3a]          ; 005ab642
    LEA EAX,[EBP + 0xffffff6a]          ; 005ab648
    ADD ESP,0x4                         ; 005ab64e
    MOVSD.REP ES:EDI,ESI                ; 005ab651
    PUSH EAX                            ; 005ab653
    MOV EDI,0x41000000                  ; 005ab654
    LEA EAX,[EBP + -0x46]               ; 005ab659
    XOR ECX,ECX                         ; 005ab65c
    LEA ESI,[EBP + 0xe]                 ; 005ab65e
    MOV dword ptr [EBP + -0x46],ECX     ; 005ab661
    MOV dword ptr [EBP + -0x42],ECX     ; 005ab664
    PUSH EAX                            ; 005ab667
    MOV dword ptr [EBP + -0x3e],EDI     ; 005ab668
    LEA EDI,[EBP + 0x3e]                ; 005ab66b
    CALL core_xform.cpp_FUN_00591530    ; 005ab66e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    LEA ESI,[EBP + 0xe]                 ; 005ab673
    MOVSD ES:EDI,ESI                    ; 005ab676
    MOVSD ES:EDI,ESI                    ; 005ab677
    MOVSD ES:EDI,ESI                    ; 005ab678
    FLD float ptr [EBP + 0x3e]          ; 005ab679
    FLD float ptr [EBP + 0x42]          ; 005ab67c
    FLD float ptr [EBP + 0x46]          ; 005ab67f
    LEA EDI,[EBP + 0x4a]                ; 005ab682
    LEA ESI,[EBP + 0x32]                ; 005ab685
    FXCH ST2                            ; 005ab688
    FCHS                                ; 005ab68a
    FXCH                                ; 005ab68c
    FCHS                                ; 005ab68e
    FXCH ST2                            ; 005ab690
    FCHS                                ; 005ab692
    FXCH                                ; 005ab694
    FSTP float ptr [EBP + 0x32]         ; 005ab696
    FXCH                                ; 005ab699
    FSTP float ptr [EBP + 0x36]         ; 005ab69b
    FSTP float ptr [EBP + 0x3a]         ; 005ab69e
    MOVSD ES:EDI,ESI                    ; 005ab6a1
    MOVSD ES:EDI,ESI                    ; 005ab6a2
    MOVSD ES:EDI,ESI                    ; 005ab6a3
    FLD float ptr [0x005f0c7e]          ; 005ab6a4 | DAT_005f0c7e
    FLD float ptr [EBP + 0x4a]          ; 005ab6aa
    FMUL ST1                            ; 005ab6ad
    FLD float ptr [EBP + 0x4e]          ; 005ab6af
    FMUL ST2                            ; 005ab6b2
    ADD ESP,0x8                         ; 005ab6b4
    LEA EAX,[EBP + 0x1a]                ; 005ab6b7
    PUSH 0x0                            ; 005ab6ba
    FLD float ptr [EBP + 0x52]          ; 005ab6bc
    FMULP ST3                           ; 005ab6bf
    PUSH EAX                            ; 005ab6c1
    LEA EDI,[EBP + 0x2]                 ; 005ab6c2
    LEA ESI,[EBP + -0xa]                ; 005ab6c5
    FXCH                                ; 005ab6c8
    FSTP float ptr [EBP + -0xa]         ; 005ab6ca
    FSTP float ptr [EBP + -0x6]         ; 005ab6cd
    FSTP float ptr [EBP + -0x2]         ; 005ab6d0
    MOVSD ES:EDI,ESI                    ; 005ab6d3
    MOVSD ES:EDI,ESI                    ; 005ab6d4
    MOVSD ES:EDI,ESI                    ; 005ab6d5
    LEA EAX,[EBP + 0x2]                 ; 005ab6d6
    FLD float ptr [0x005f0c82]          ; 005ab6d9 | DAT_005f0c82
    FLD float ptr [EBP + 0x2]           ; 005ab6df
    FMUL ST1                            ; 005ab6e2
    PUSH EAX                            ; 005ab6e4
    LEA EAX,[EBP + 0x3e]                ; 005ab6e5
    FLD float ptr [EBP + 0x6]           ; 005ab6e8
    FMUL ST2                            ; 005ab6eb
    PUSH EAX                            ; 005ab6ed
    FLD float ptr [EBP + 0xa]           ; 005ab6ee
    FMULP ST3                           ; 005ab6f1
    PUSH 0x3f800000                     ; 005ab6f3
    PUSH 0x3f000000                     ; 005ab6f8
    LEA EDI,[EBP + 0x1a]                ; 005ab6fd
    LEA ESI,[EBP + -0x3a]               ; 005ab700
    FXCH                                ; 005ab703
    FSTP float ptr [EBP + -0x3a]        ; 005ab705
    FSTP float ptr [EBP + -0x36]        ; 005ab708
    FSTP float ptr [EBP + -0x32]        ; 005ab70b
    MOVSD ES:EDI,ESI                    ; 005ab70e
    MOVSD ES:EDI,ESI                    ; 005ab70f
    MOVSD ES:EDI,ESI                    ; 005ab710
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 005ab711
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 005ab716
    MOV dword ptr [EBP + 0x76],EAX      ; 005ab719
    SUB ESP,0x4                         ; 005ab71c
    MOV EAX,dword ptr [EBP + 0x76]      ; 005ab71f
    MOV dword ptr [ESP],EAX             ; 005ab722
    PUSH 0x3e4ccccd                     ; 005ab725
    PUSH 0x3e99999a                     ; 005ab72a
    PUSH 0x0                            ; 005ab72f
    PUSH 0x3f333333                     ; 005ab731
    PUSH 0x0                            ; 005ab736
    PUSH 0x3f800000                     ; 005ab738
    MOV EAX,dword ptr [EBP + 0x66]      ; 005ab73d
    PUSH 0x40400000                     ; 005ab740
    PUSH EAX                            ; 005ab745
    CALL unkafter_superopt.cpp_FUN_005a8300 ; 005ab746
        ;   XREF to: 005a8300 (UNCONDITIONAL_CALL)  ; undefined unkafter_superopt.cpp_FUN_005a8300()
    ADD ESP,0x34                        ; 005ab74b
    JMP 0x005ab4d1                      ; 005ab74e
        ;   XREF to: 005ab4d1 (UNCONDITIONAL_JUMP)  ; LAB_005ab4d1

