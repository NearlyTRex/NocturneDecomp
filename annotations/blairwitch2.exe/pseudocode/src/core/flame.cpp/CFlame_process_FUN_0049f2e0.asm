; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flame_cpp_CFlame_process_FUN_0049f2e0(CFlame *this_ptr,float delta_time)
;
; Parameters:
; CFlame *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1[12]   Stack[-0x12c]:12  local_12c
; undefined        Stack[-0x110]:1  local_110
; undefined        Stack[-0xac]:1  local_ac
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[4]:
;   core_bodypart.cpp_CBodyPart_processFires_FUN_004164b0 at 004165b7
;   core_crossbow.cpp_CCrossbow_process_FUN_0043a580 at 0043a62b
;   core_flamecan.cpp_CFlameCan_process_FUN_004a0920 at 004a0972
;   core_vessel.cpp_CCryptVessel_process_FUN_00585230 at 00585567
;
; Referenced Globals:
;   TerminatedCString s_torch_wav_f_005d584c
;   undefined4 DAT_005d585d
;   undefined4 DAT_005d5865
;   undefined4 DAT_005d586d
;   undefined4 DAT_005d5875
;   undefined4 DAT_005d587d
;   undefined4 DAT_006141f0
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 DAT_0061c068
;   undefined4 DAT_01cedef4
;   CDemonSet g_CDemonSetInstance
;   undefined4 g_CDemonSetInstance.enemy_count
;
; Called Functions:
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_flame.cpp_FUN_004a0590
;   core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
;   core_sound.cpp_CSound_killSound_FUN_0055af80
;   crt_math.c_round_FUN_005b7ff0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_sndmain.cpp_popSfxOptions_FUN_005504d0
;   sound_sndmain.cpp_pushSfxOptions_FUN_00550450
;   sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f2e0
        ;   Label: core_flame.cpp_CFlame_process_FUN_0049f2e0
    PUSH ESI                            ; 0049f2e1
    PUSH EDI                            ; 0049f2e2
    PUSH EBP                            ; 0049f2e3
    MOV EBP,ESP                         ; 0049f2e4
    SUB ESP,0x110                       ; 0049f2e6
    AND ESP,0xfffffff8                  ; 0049f2ec
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f2ef
    CMP byte ptr [EAX + 0x314],0x0      ; 0049f2f2
    JZ 0x0049f387                       ; 0049f2f9
        ;   XREF to: 0049f387 (CONDITIONAL_JUMP)  ; LAB_0049f387
    CMP dword ptr [EAX + 0x310],0x0     ; 0049f2ff
    JNZ 0x0049f387                      ; 0049f306
        ;   XREF to: 0049f387 (CONDITIONAL_JUMP)  ; LAB_0049f387
    ADD EAX,0x314                       ; 0049f30c
    PUSH EAX                            ; 0049f311
    MOV ECX,dword ptr [0x006141f0]      ; 0049f312 | DAT_006141f0
    PUSH ECX                            ; 0049f318
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0049f319
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0049f31e
    TEST EAX,EAX                        ; 0049f321
    JZ 0x0049f387                       ; 0049f323
        ;   XREF to: 0049f387 (CONDITIONAL_JUMP)  ; LAB_0049f387
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f325
    MOV EBX,dword ptr [EAX + 0x304]     ; 0049f328
    CMP EBX,0x1                         ; 0049f32e
    JZ 0x0049f370                       ; 0049f331
        ;   XREF to: 0049f370 (CONDITIONAL_JUMP)  ; LAB_0049f370
    CMP EBX,0x3                         ; 0049f333
    JZ 0x0049f370                       ; 0049f336
        ;   XREF to: 0049f370 (CONDITIONAL_JUMP)  ; LAB_0049f370
    LEA ESI,[EAX + 0x20]                ; 0049f338
    XOR EBX,EBX                         ; 0049f33b
    PUSH 0xffff                         ; 0049f33d
        ;   Label: LAB_0049f33d
    PUSH 0x1                            ; 0049f342
    PUSH 0x10000                        ; 0049f344
    PUSH 0x4000                         ; 0049f349
    PUSH 0x0                            ; 0049f34e
    PUSH ESI                            ; 0049f350
    MOV EDI,dword ptr [0x00614d30]      ; 0049f351 | DAT_00614d30
    PUSH EDI                            ; 0049f357
    INC EBX                             ; 0049f358
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 0049f359
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0049f35e
    CMP EBX,0xa                         ; 0049f361
    JL 0x0049f33d                       ; 0049f364
        ;   XREF to: 0049f33d (CONDITIONAL_JUMP)  ; LAB_0049f33d
    LEA EAX,[EAX]                       ; 0049f366
    LEA EDX,[EDX]                       ; 0049f36c
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f370
        ;   Label: LAB_0049f370
    MOV dword ptr [EAX + 0x3ec],0x1     ; 0049f373
    MOV dword ptr [EAX + 0x310],0x1     ; 0049f37d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f387
        ;   Label: LAB_0049f387
    CMP byte ptr [EAX + 0x378],0x0      ; 0049f38a
    JZ 0x0049f3f9                       ; 0049f391
        ;   XREF to: 0049f3f9 (CONDITIONAL_JUMP)  ; LAB_0049f3f9
    CMP dword ptr [EAX + 0x310],0x0     ; 0049f393
    JZ 0x0049f3f9                       ; 0049f39a
        ;   XREF to: 0049f3f9 (CONDITIONAL_JUMP)  ; LAB_0049f3f9
    ADD EAX,0x378                       ; 0049f39c
    PUSH EAX                            ; 0049f3a1
    MOV ECX,dword ptr [0x006141f0]      ; 0049f3a2 | DAT_006141f0
    PUSH ECX                            ; 0049f3a8
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0049f3a9
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0049f3ae
    TEST EAX,EAX                        ; 0049f3b1
    JZ 0x0049f3f9                       ; 0049f3b3
        ;   XREF to: 0049f3f9 (CONDITIONAL_JUMP)  ; LAB_0049f3f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f3b5
    MOV EBX,dword ptr [EAX + 0x304]     ; 0049f3b8
    MOV dword ptr [EAX + 0x310],0x0     ; 0049f3be
    CMP EBX,0x3                         ; 0049f3c8
    JZ 0x0049f3f9                       ; 0049f3cb
        ;   XREF to: 0049f3f9 (CONDITIONAL_JUMP)  ; LAB_0049f3f9
    PUSH 0xffff                         ; 0049f3cd
    FLD float ptr [EAX + 0x2b8]         ; 0049f3d2
    PUSH 0x0                            ; 0049f3d8
    FMUL double ptr [0x005d585d]        ; 0049f3da | DAT_005d585d
    SUB ESP,0x4                         ; 0049f3e0
    ADD EAX,0x20                        ; 0049f3e3
    FSTP float ptr [ESP]                ; 0049f3e6
    PUSH EAX                            ; 0049f3e9
    MOV ESI,dword ptr [0x00614d30]      ; 0049f3ea | DAT_00614d30
    PUSH ESI                            ; 0049f3f0
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 0049f3f1
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 0049f3f6
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f3f9
        ;   Label: LAB_0049f3f9
    CMP dword ptr [EAX + 0x310],0x0     ; 0049f3fc
    JZ 0x0049f621                       ; 0049f403
        ;   XREF to: 0049f621 (CONDITIONAL_JUMP)  ; LAB_0049f621
    FLD float ptr [EBP + 0x18]          ; 0049f409
    FMUL double ptr [0x005d5865]        ; 0049f40c | DAT_005d5865
    FADD float ptr [EAX + 0x2c0]        ; 0049f412
    FSTP float ptr [EAX + 0x2c0]        ; 0049f418
    CMP dword ptr [EAX + 0x2c0],0x41000000 ; 0049f41e
    JL 0x0049f43c                       ; 0049f428
        ;   XREF to: 0049f43c (CONDITIONAL_JUMP)  ; LAB_0049f43c
    FLD float ptr [EAX + 0x2c0]         ; 0049f42a
    FADD float ptr [0x005d586d]         ; 0049f430 | DAT_005d586d
    FSTP float ptr [EAX + 0x2c0]        ; 0049f436
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f43c
        ;   Label: LAB_0049f43c
    MOV dword ptr [EAX + 0x30],0x0      ; 0049f43f
    MOV dword ptr [EAX + 0x38],0x0      ; 0049f446
    PUSH EAX                            ; 0049f44d
    MOV dword ptr [EAX + 0x34],0x0      ; 0049f44e
    CALL core_flame.cpp_FUN_004a0590    ; 0049f455
        ;   XREF to: 004a0590 (UNCONDITIONAL_CALL)  ; void core_flame.cpp_FUN_004a0590(CFlame * this_ptr)
    ADD ESP,0x4                         ; 0049f45a
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f45d
    MOV EBX,dword ptr [EAX + 0x3fc]     ; 0049f460
    TEST EBX,EBX                        ; 0049f466
    JZ 0x0049f6ba                       ; 0049f468
        ;   XREF to: 0049f6ba (CONDITIONAL_JUMP)  ; LAB_0049f6ba
    MOV EDX,dword ptr [EAX + 0x30c]     ; 0049f46e
    PUSH EDX                            ; 0049f474
    MOV ECX,dword ptr [0x0061c068]      ; 0049f475 | DAT_0061c068
    PUSH ECX                            ; 0049f47b
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70 ; 0049f47c
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0049f481
    TEST EAX,EAX                        ; 0049f484
    JZ 0x0049f628                       ; 0049f486
        ;   XREF to: 0049f628 (CONDITIONAL_JUMP)  ; LAB_0049f628
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f48c
        ;   Label: LAB_0049f48c
    CMP dword ptr [EAX + 0x3e4],0x0     ; 0049f48f
    JZ 0x0049f5dc                       ; 0049f496
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    LEA EAX,[ESP + 0x74]                ; 0049f49c
    PUSH EAX                            ; 0049f4a0
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0049f4a1
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0049f4a6
    LEA EDX,[ESP + 0x74]                ; 0049f4a9
    MOV EAX,[0x01cedef4]                ; 0049f4ad | DAT_01cedef4
    PUSH EDX                            ; 0049f4b2
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0049f4b3
    PUSH EAX                            ; 0049f4ba
    MOV EBX,dword ptr [EAX + 0x2b0]     ; 0049f4bb
    CALL dword ptr [EBX + 0x44]         ; 0049f4c1
    ADD ESP,0x8                         ; 0049f4c4
    CMP EAX,0x2                         ; 0049f4c7
    JNZ 0x0049f5dc                      ; 0049f4ca
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    MOV EDX,dword ptr [0x01cedef4]      ; 0049f4d0 | DAT_01cedef4
    MOV EDX,dword ptr [EDX*0x4 + 0x1cedee4] ; 0049f4d6
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049f4dd
    LEA EAX,[EDX + 0x20]                ; 0049f4e0
    LEA EDI,[ESP + 0xc4]                ; 0049f4e3
    LEA ESI,[ESP + 0xd0]                ; 0049f4ea
    FLD float ptr [EAX]                 ; 0049f4f1
    FLD float ptr [EAX + 0x4]           ; 0049f4f3
    FLD float ptr [EAX + 0x8]           ; 0049f4f6
    FXCH ST2                            ; 0049f4f9
    FSUB float ptr [EBX + 0x20]         ; 0049f4fb
    FXCH                                ; 0049f4fe
    FSUB float ptr [EBX + 0x24]         ; 0049f500
    FXCH ST2                            ; 0049f503
    FSUB float ptr [EBX + 0x28]         ; 0049f505
    FXCH                                ; 0049f508
    FSTP float ptr [ESP + 0xd0]         ; 0049f50a
    FXCH                                ; 0049f511
    FSTP float ptr [ESP + 0xd4]         ; 0049f513
    FSTP float ptr [ESP + 0xd8]         ; 0049f51a
    MOVSD ES:EDI,ESI                    ; 0049f521
    MOVSD ES:EDI,ESI                    ; 0049f522
    MOVSD ES:EDI,ESI                    ; 0049f523
    ADD EBX,0x20                        ; 0049f524
    FLD float ptr [ESP + 0xc8]          ; 0049f527
    FCOMP double ptr [0x005d5875]       ; 0049f52e | DAT_005d5875
    FNSTSW AX                           ; 0049f534
    SAHF                                ; 0049f536
    JBE 0x0049f5dc                      ; 0049f537
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    FLD float ptr [ESP + 0xc8]          ; 0049f53d
    FCOMP float ptr [ESP + 0x8c]        ; 0049f544
    FNSTSW AX                           ; 0049f54b
    SAHF                                ; 0049f54d
    JNC 0x0049f5dc                      ; 0049f54e
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f554
    FLD float ptr [EAX + 0x2b4]         ; 0049f557
    FADD float ptr [EAX + 0x2bc]        ; 0049f55d
    FMUL double ptr [0x005d587d]        ; 0049f563 | DAT_005d587d
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049f569
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x100]       ; 0049f56e
    MOV EAX,dword ptr [ESP + 0x100]     ; 0049f575
    FLD float ptr [ESP + 0xc4]          ; 0049f57c
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049f583
    FABS                                ; 0049f58a
    FLD float ptr [ESP + 0x90]          ; 0049f58c
    FILD dword ptr [ESP + 0x10c]        ; 0049f593
    FSTP float ptr [ESP + 0xfc]         ; 0049f59a
    FADD float ptr [ESP + 0xfc]         ; 0049f5a1
    FSTP double ptr [ESP + 0x8]         ; 0049f5a8
    FCOMP double ptr [ESP + 0x8]        ; 0049f5ac
    FNSTSW AX                           ; 0049f5b0
    SAHF                                ; 0049f5b2
    JNC 0x0049f5dc                      ; 0049f5b3
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    FLD float ptr [ESP + 0xcc]          ; 0049f5b5
    FABS                                ; 0049f5bc
    FCOMP double ptr [ESP + 0x8]        ; 0049f5be
    FNSTSW AX                           ; 0049f5c2
    SAHF                                ; 0049f5c4
    JNC 0x0049f5dc                      ; 0049f5c5
        ;   XREF to: 0049f5dc (CONDITIONAL_JUMP)  ; LAB_0049f5dc
    PUSH 0x1                            ; 0049f5c7
    PUSH 0x40000000                     ; 0049f5c9
    PUSH 0x0                            ; 0049f5ce
    PUSH 0x0                            ; 0049f5d0
    PUSH EBX                            ; 0049f5d2
    PUSH EDX                            ; 0049f5d3
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 0049f5d4
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0049f5d9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f5dc
        ;   Label: LAB_0049f5dc
    CMP dword ptr [EAX + 0x3e8],0x0     ; 0049f5df
    JZ 0x0049f621                       ; 0049f5e6
        ;   XREF to: 0049f621 (CONDITIONAL_JUMP)  ; LAB_0049f621
    CMP dword ptr [EAX + 0x3f8],0x0     ; 0049f5e8
    JL 0x0049f6e5                       ; 0049f5ef
        ;   XREF to: 0049f6e5 (CONDITIONAL_JUMP)  ; LAB_0049f6e5
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049f5f5
        ;   Label: LAB_0049f5f5
    MOV EAX,[0x0061b5a8]                ; 0049f5f8 | g_CDemonSetPtr
    MOV EDX,dword ptr [EDX + 0x3f8]     ; 0049f5fd
    CMP EDX,dword ptr [EAX + 0x150fec]  ; 0049f603 | g_CDemonSetInstance.enemy_count
    JGE 0x0049f6f4                      ; 0049f609
        ;   XREF to: 0049f6f4 (CONDITIONAL_JUMP)  ; LAB_0049f6f4
    MOV EAX,[0x0061b5a8]                ; 0049f60f | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_0049f60f
    CMP dword ptr [EAX + 0x150fec],0x0  ; 0049f614 | g_CDemonSetInstance.enemy_count
    JG 0x0049f706                       ; 0049f61b
        ;   XREF to: 0049f706 (CONDITIONAL_JUMP)  ; LAB_0049f706
    MOV ESP,EBP                         ; 0049f621
        ;   Label: LAB_0049f621
    POP EBP                             ; 0049f623
    POP EDI                             ; 0049f624
    POP ESI                             ; 0049f625
    POP EBX                             ; 0049f626
    RET                                 ; 0049f627
    PUSH 0x3f866666                     ; 0049f628
        ;   Label: LAB_0049f628
    PUSH 0x3f733333                     ; 0049f62d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049f632
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x114],EAX     ; 0049f637
    FLD float ptr [ESP + 0x114]         ; 0049f63e
    ADD ESP,0x8                         ; 0049f645
    SUB ESP,0x8                         ; 0049f648
    FSTP double ptr [ESP]               ; 0049f64b
    PUSH 0x5d584c                       ; 0049f64e | = "torch.wav * %f"
    LEA EAX,[ESP + 0x1c]                ; 0049f653
    PUSH EAX                            ; 0049f657
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0049f658
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0049f65d
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 0049f660
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x2                            ; 0049f665
    PUSH 0x3f800000                     ; 0049f667
    PUSH 0x0                            ; 0049f66c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0049f66e
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0x118],EAX     ; 0049f673
    FLD float ptr [ESP + 0x118]         ; 0049f67a
    ADD ESP,0x8                         ; 0049f681
    SUB ESP,0x8                         ; 0049f684
    FSTP double ptr [ESP]               ; 0049f687
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 0049f68a
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0049f68f
    LEA EDX,[ESP + 0x10]                ; 0049f692
    PUSH EDX                            ; 0049f696
    MOV EBX,dword ptr [EBP + 0x14]      ; 0049f697
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f69a
    PUSH EBX                            ; 0049f69d
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0049f69e
    CALL dword ptr [EAX + 0x34]         ; 0049f6a4
    ADD ESP,0x8                         ; 0049f6a7
    MOV dword ptr [EBX + 0x30c],EAX     ; 0049f6aa
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 0049f6b0
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    JMP 0x0049f48c                      ; 0049f6b5
        ;   XREF to: 0049f48c (UNCONDITIONAL_JUMP)  ; LAB_0049f48c
    MOV ESI,dword ptr [EAX + 0x30c]     ; 0049f6ba
        ;   Label: LAB_0049f6ba
    TEST ESI,ESI                        ; 0049f6c0
    JZ 0x0049f48c                       ; 0049f6c2
        ;   XREF to: 0049f48c (CONDITIONAL_JUMP)  ; LAB_0049f48c
    PUSH ESI                            ; 0049f6c8
    MOV EAX,[0x0061c068]                ; 0049f6c9 | DAT_0061c068
    PUSH EAX                            ; 0049f6ce
    CALL core_sound.cpp_CSound_killSound_FUN_0055af80 ; 0049f6cf
        ;   XREF to: 0055af80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_killSound_FUN_0055af80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0049f6d4
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f6d7
    MOV dword ptr [EAX + 0x30c],EBX     ; 0049f6da
    JMP 0x0049f48c                      ; 0049f6e0
        ;   XREF to: 0049f48c (UNCONDITIONAL_JUMP)  ; LAB_0049f48c
    MOV dword ptr [EAX + 0x3f8],0x0     ; 0049f6e5
        ;   Label: LAB_0049f6e5
    JMP 0x0049f5f5                      ; 0049f6ef
        ;   XREF to: 0049f5f5 (UNCONDITIONAL_JUMP)  ; LAB_0049f5f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f6f4
        ;   Label: LAB_0049f6f4
    MOV dword ptr [EAX + 0x3f8],0x0     ; 0049f6f7
    JMP 0x0049f60f                      ; 0049f701
        ;   XREF to: 0049f60f (UNCONDITIONAL_JUMP)  ; LAB_0049f60f
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049f706
        ;   Label: LAB_0049f706
    MOV EDX,dword ptr [EDX + 0x3f8]     ; 0049f709
    MOV EBX,dword ptr [EAX + EDX*0x4 + 0x150ff0] ; 0049f70f
    LEA EAX,[ESP + 0x9c]                ; 0049f716
    PUSH EAX                            ; 0049f71d
    CALL core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0 ; 0049f71e
        ;   XREF to: 00537fa0 (UNCONDITIONAL_CALL)  ; SCollisionInfo * core_setcolid.cpp_SCollisionInfo_ctor_FUN_00537fa0(SCollisionInfo * this_ptr)
    ADD ESP,0x4                         ; 0049f723
    LEA EAX,[ESP + 0x9c]                ; 0049f726
    PUSH EAX                            ; 0049f72d
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0049f72e
    PUSH EBX                            ; 0049f734
    CALL dword ptr [EDX + 0x44]         ; 0049f735
    ADD ESP,0x8                         ; 0049f738
    CMP EAX,0x2                         ; 0049f73b
    JNZ 0x0049f83a                      ; 0049f73e
        ;   XREF to: 0049f83a (CONDITIONAL_JUMP)  ; LAB_0049f83a
    MOV EDX,dword ptr [EBP + 0x14]      ; 0049f744
    LEA EAX,[EBX + 0x20]                ; 0049f747
    LEA EDI,[ESP + 0xe8]                ; 0049f74a
    LEA ESI,[ESP + 0xdc]                ; 0049f751
    FLD float ptr [EAX + 0x4]           ; 0049f758
    FLD float ptr [EAX + 0x8]           ; 0049f75b
    FLD float ptr [EAX]                 ; 0049f75e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f760
    FSUB float ptr [EDX + 0x20]         ; 0049f763
    FXCH ST2                            ; 0049f766
    FSUB float ptr [EDX + 0x24]         ; 0049f768
    FXCH                                ; 0049f76b
    FSUB float ptr [EDX + 0x28]         ; 0049f76d
    FXCH ST2                            ; 0049f770
    FSTP float ptr [ESP + 0xdc]         ; 0049f772
    FSTP float ptr [ESP + 0xe0]         ; 0049f779
    FSTP float ptr [ESP + 0xe4]         ; 0049f780
    MOVSD ES:EDI,ESI                    ; 0049f787
    MOVSD ES:EDI,ESI                    ; 0049f788
    MOVSD ES:EDI,ESI                    ; 0049f789
    FLD float ptr [EAX + 0x2b4]         ; 0049f78a
    FADD float ptr [EAX + 0x2bc]        ; 0049f790
    FMUL double ptr [0x005d587d]        ; 0049f796 | DAT_005d587d
    ADD EDX,0x20                        ; 0049f79c
    FLD float ptr [ESP + 0xec]          ; 0049f79f
    FXCH                                ; 0049f7a6
    CALL crt_math.c_round_FUN_005b7ff0  ; 0049f7a8
        ;   XREF to: 005b7ff0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005b7ff0()
    FISTP dword ptr [ESP + 0x104]       ; 0049f7ad
    FCOMP double ptr [0x005d5875]       ; 0049f7b4 | DAT_005d5875
    FNSTSW AX                           ; 0049f7ba
    SAHF                                ; 0049f7bc
    JBE 0x0049f83a                      ; 0049f7bd
        ;   XREF to: 0049f83a (CONDITIONAL_JUMP)  ; LAB_0049f83a
    FLD float ptr [ESP + 0xec]          ; 0049f7c3
    FCOMP float ptr [ESP + 0xb4]        ; 0049f7ca
    FNSTSW AX                           ; 0049f7d1
    SAHF                                ; 0049f7d3
    JNC 0x0049f83a                      ; 0049f7d4
        ;   XREF to: 0049f83a (CONDITIONAL_JUMP)  ; LAB_0049f83a
    MOV EAX,dword ptr [ESP + 0x104]     ; 0049f7d6
    FLD float ptr [ESP + 0xe8]          ; 0049f7dd
    MOV dword ptr [ESP + 0x10c],EAX     ; 0049f7e4
    FABS                                ; 0049f7eb
    FLD float ptr [ESP + 0xb8]          ; 0049f7ed
    FILD dword ptr [ESP + 0x10c]        ; 0049f7f4
    FSTP float ptr [ESP + 0x108]        ; 0049f7fb
    FADD float ptr [ESP + 0x108]        ; 0049f802
    FSTP double ptr [ESP]               ; 0049f809
    FCOMP double ptr [ESP]              ; 0049f80c
    FNSTSW AX                           ; 0049f80f
    SAHF                                ; 0049f811
    JNC 0x0049f83a                      ; 0049f812
        ;   XREF to: 0049f83a (CONDITIONAL_JUMP)  ; LAB_0049f83a
    FLD float ptr [ESP + 0xf0]          ; 0049f814
    FABS                                ; 0049f81b
    FCOMP double ptr [ESP]              ; 0049f81d
    FNSTSW AX                           ; 0049f820
    SAHF                                ; 0049f822
    JNC 0x0049f83a                      ; 0049f823
        ;   XREF to: 0049f83a (CONDITIONAL_JUMP)  ; LAB_0049f83a
    PUSH 0x0                            ; 0049f825
    PUSH 0x40000000                     ; 0049f827
    PUSH 0x0                            ; 0049f82c
    PUSH 0x0                            ; 0049f82e
    PUSH EDX                            ; 0049f830
    PUSH EBX                            ; 0049f831
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70 ; 0049f832
        ;   XREF to: 00426e70 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_00426e70(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 0049f837
    MOV EAX,dword ptr [EBP + 0x14]      ; 0049f83a
        ;   Label: LAB_0049f83a
    INC dword ptr [EAX + 0x3f8]         ; 0049f83d
    MOV ESP,EBP                         ; 0049f843
    POP EBP                             ; 0049f845
    POP EDI                             ; 0049f846
    POP ESI                             ; 0049f847
    POP EBX                             ; 0049f848
    RET                                 ; 0049f849

