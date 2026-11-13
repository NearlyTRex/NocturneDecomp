; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_weather_cpp_FUN_0057c2e0(CDemonActor *param_1,float param_2,int param_3)
;
; Local Variables:
; undefined4       Stack[-0x158]:4  local_158
; undefined        Stack[-0x118]:1  local_118
; undefined4       Stack[-0xc0]:4  local_c0
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined4       Stack[-0xa4]:4  local_a4
; undefined4       Stack[-0xa0]:4  local_a0
; undefined        Stack[-0x9c]:1  local_9c
; undefined4       Stack[-0x84]:4  local_84
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined        Stack[-0x6c]:1  local_6c
; undefined        Stack[-0x60]:1  local_60
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
;
; XREF[2]:
;   core_event.cpp_FUN_0048c2e0 at 0048ef94
;   core_weather.cpp_FUN_0057bda0 at 0057c050
;
; Referenced Globals:
;   TerminatedCString s_light_wav_005d7943
;   TerminatedCString s_light_wav_005d794e
;   TerminatedCString s_noLightningFlash_005d7959
;   undefined4 DAT_005d796b
;   undefined4 DAT_005d7973
;   undefined4 DAT_005d7977
;   undefined4 DAT_005fba60
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 DAT_006045f8
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 DAT_01d5ba14
;   undefined4 g_CDemonSetInstance.actor_count
;   undefined4 g_CDemonSetInstance.actors[0]
;   CDemonRaytrace g_CDemonRaytraceInstance
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_box.cpp_FUN_0041daf0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680
;   core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550
;   core_dirmat.cpp_FUN_0045b800
;   core_dtrace.cpp_FUN_00477d90
;   core_dtrace.cpp_FUN_00477db0
;   core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0
;   core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0
;   core_sound.cpp_CSound_playActorSound_FUN_005609d0
;   core_weather.cpp_FUN_0057c2c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057c2e0
        ;   Label: core_weather.cpp_FUN_0057c2e0
    PUSH ESI                            ; 0057c2e1
    PUSH EDI                            ; 0057c2e2
    PUSH EBP                            ; 0057c2e3
    MOV EBP,ESP                         ; 0057c2e4
    SUB ESP,0x144                       ; 0057c2e6
    AND ESP,0xfffffff8                  ; 0057c2ec
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057c2ef
    CMP dword ptr [EBX],0x5             ; 0057c2f2
    JZ 0x0057c3d9                       ; 0057c2f5
        ;   XREF to: 0057c3d9 (CONDITIONAL_JUMP)  ; LAB_0057c3d9
    PUSH 0x41a00000                     ; 0057c2fb
    PUSH 0x41200000                     ; 0057c300
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c305
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x148],EAX     ; 0057c30a
    FLD float ptr [ESP + 0x148]         ; 0057c311
    ADD ESP,0x8                         ; 0057c318
    PUSH dword ptr [EBX + 0x34]         ; 0057c31b
    PUSH 0x40000000                     ; 0057c31e
    FSTP float ptr [EBX + 0x20]         ; 0057c323
        ;   Label: LAB_0057c323
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c326
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x148],EAX     ; 0057c32b
    MOV EAX,dword ptr [ESP + 0x148]     ; 0057c332
    MOV dword ptr [EBX + 0x2c],EAX      ; 0057c339
    ADD ESP,0x8                         ; 0057c33c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057c33f
    MOV ESI,dword ptr [EBX]             ; 0057c342
    XOR ECX,ECX                         ; 0057c344
    MOV dword ptr [EBX + 0x24],0x1      ; 0057c346
    MOV dword ptr [ESP + 0x11c],ECX     ; 0057c34d
    MOV dword ptr [EBX + 0x28],EAX      ; 0057c354
    CMP ESI,0x5                         ; 0057c357
    JNZ 0x0057c610                      ; 0057c35a
        ;   XREF to: 0057c610 (CONDITIONAL_JUMP)  ; LAB_0057c610
    MOV dword ptr [ESP + 0x130],ECX     ; 0057c360
    MOV dword ptr [ESP + 0x12c],ECX     ; 0057c367
    MOV EAX,[0x00603b28]                ; 0057c36e | g_CDemonSetPtr
        ;   Label: LAB_0057c36e
    MOV EDX,dword ptr [ESP + 0x130]     ; 0057c373
    CMP EDX,dword ptr [EAX + 0x14d164]  ; 0057c37a | g_CDemonSetInstance.actor_count
    JGE 0x0057c610                      ; 0057c380
        ;   XREF to: 0057c610 (CONDITIONAL_JUMP)  ; LAB_0057c610
    MOV EDI,dword ptr [ESP + 0x12c]     ; 0057c386
    MOV ESI,dword ptr [0x01c5bc48]      ; 0057c38d | g_CEnemyClassInfo.name_hash
    ADD EAX,EDI                         ; 0057c393
    PUSH ESI                            ; 0057c395
    MOV EDX,dword ptr [EAX + 0x14d168]  ; 0057c396 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 0057c39c
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0057c39d
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV dword ptr [ESP + 0x13c],EAX     ; 0057c3a2
    ADD ESP,0x8                         ; 0057c3a9
    MOV dword ptr [ESP + 0x138],EAX     ; 0057c3ac
    TEST EAX,EAX                        ; 0057c3b3
    JNZ 0x0057c406                      ; 0057c3b5
        ;   XREF to: 0057c406 (CONDITIONAL_JUMP)  ; LAB_0057c406
    MOV EDX,dword ptr [ESP + 0x130]     ; 0057c3b7
        ;   Label: LAB_0057c3b7
    MOV EAX,dword ptr [ESP + 0x12c]     ; 0057c3be
    INC EDX                             ; 0057c3c5
    ADD EAX,0x4                         ; 0057c3c6
    MOV dword ptr [ESP + 0x130],EDX     ; 0057c3c9
    MOV dword ptr [ESP + 0x12c],EAX     ; 0057c3d0
    JMP 0x0057c36e                      ; 0057c3d7
        ;   XREF to: 0057c36e (UNCONDITIONAL_JUMP)  ; LAB_0057c36e
    PUSH 0x3f400000                     ; 0057c3d9
        ;   Label: LAB_0057c3d9
    PUSH 0x3f000000                     ; 0057c3de
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0057c3e3
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [ESP + 0x148],EAX     ; 0057c3e8
    FLD float ptr [ESP + 0x148]         ; 0057c3ef
    ADD ESP,0x8                         ; 0057c3f6
    PUSH dword ptr [EBX + 0x34]         ; 0057c3f9
    PUSH 0x3f000000                     ; 0057c3fc
    JMP 0x0057c323                      ; 0057c401
        ;   XREF to: 0057c323 (UNCONDITIONAL_JUMP)  ; LAB_0057c323
    MOV ESI,dword ptr [ESP + 0x134]     ; 0057c406
        ;   Label: LAB_0057c406
    MOV EAX,dword ptr [EAX + 0x154]     ; 0057c40d
    PUSH ESI                            ; 0057c413
    CALL dword ptr [EAX + 0x10c]        ; 0057c414
    ADD ESP,0x4                         ; 0057c41a
    TEST EAX,EAX                        ; 0057c41d
    JNZ 0x0057c3b7                      ; 0057c41f
        ;   XREF to: 0057c3b7 (CONDITIONAL_JUMP)  ; LAB_0057c3b7
    PUSH EAX                            ; 0057c421
    PUSH ESI                            ; 0057c422
    MOV EAX,dword ptr [ESI + 0x154]     ; 0057c423
    LEA ESI,[ESP + 0x70]                ; 0057c429
    LEA EDI,[ESP + 0x88]                ; 0057c42d
    CALL dword ptr [EAX + 0x1c]         ; 0057c434
    MOV ECX,0x6                         ; 0057c437
    ADD ESP,0x4                         ; 0057c43c
    LEA EAX,[ESP + 0x84]                ; 0057c43f
    LEA ESI,[ESP + 0x6c]                ; 0057c446
    PUSH EAX                            ; 0057c44a
    MOVSD.REP ES:EDI,ESI                ; 0057c44b
    CALL core_box.cpp_FUN_0041daf0      ; 0057c44d
        ;   XREF to: 0041daf0 (UNCONDITIONAL_CALL)  ; undefined core_box.cpp_FUN_0041daf0()
    ADD ESP,0x8                         ; 0057c452
    TEST EAX,EAX                        ; 0057c455
    JZ 0x0057c3b7                       ; 0057c457
        ;   XREF to: 0057c3b7 (CONDITIONAL_JUMP)  ; LAB_0057c3b7
    MOV EAX,[0x01d5ba14]                ; 0057c45d | DAT_01d5ba14
    SHL EAX,0x2                         ; 0057c462
    MOV EDX,dword ptr [EAX + 0x1d5ba04] ; 0057c465
    TEST EDX,EDX                        ; 0057c46b
    JZ 0x0057c4e8                       ; 0057c46d
        ;   XREF to: 0057c4e8 (CONDITIONAL_JUMP)  ; LAB_0057c4e8
    FLD float ptr [EDX + 0x20]          ; 0057c46f
    FLD float ptr [EDX + 0x24]          ; 0057c472
    FLD float ptr [EDX + 0x28]          ; 0057c475
    MOV EAX,dword ptr [ESP + 0x134]     ; 0057c478
    LEA EDI,[ESP + 0xe0]                ; 0057c47f
    LEA ESI,[ESP + 0xc8]                ; 0057c486
    FXCH ST2                            ; 0057c48d
    FSUB float ptr [EAX + 0x20]         ; 0057c48f
    FXCH                                ; 0057c492
    FSUB float ptr [EAX + 0x24]         ; 0057c494
    FXCH ST2                            ; 0057c497
    FSUB float ptr [EAX + 0x28]         ; 0057c499
    FXCH                                ; 0057c49c
    FSTP float ptr [ESP + 0xc8]         ; 0057c49e
    FXCH                                ; 0057c4a5
    FSTP float ptr [ESP + 0xcc]         ; 0057c4a7
    FSTP float ptr [ESP + 0xd0]         ; 0057c4ae
    MOVSD ES:EDI,ESI                    ; 0057c4b5
    MOVSD ES:EDI,ESI                    ; 0057c4b6
    MOVSD ES:EDI,ESI                    ; 0057c4b7
    FLD float ptr [ESP + 0xe4]          ; 0057c4b8
    FMUL ST0                            ; 0057c4bf
    FLD float ptr [ESP + 0xe0]          ; 0057c4c1
    FMUL ST0                            ; 0057c4c8
    FADDP                               ; 0057c4ca
    FLD float ptr [ESP + 0xe8]          ; 0057c4cc
    FMUL ST0                            ; 0057c4d3
    FADDP                               ; 0057c4d5
    FSQRT                               ; 0057c4d7
    FCOMP float ptr [0x005d7977]        ; 0057c4d9 | DAT_005d7977
    FNSTSW AX                           ; 0057c4df
    SAHF                                ; 0057c4e1
    JA 0x0057c3b7                       ; 0057c4e2
        ;   XREF to: 0057c3b7 (CONDITIONAL_JUMP)  ; LAB_0057c3b7
    MOV ESI,0x1                         ; 0057c4e8
        ;   Label: LAB_0057c4e8
    MOV ECX,dword ptr [EBX + 0x64]      ; 0057c4ed
    XOR EDX,EDX                         ; 0057c4f0
    TEST ECX,ECX                        ; 0057c4f2
    JLE 0x0057c513                      ; 0057c4f4
        ;   XREF to: 0057c513 (CONDITIONAL_JUMP)  ; LAB_0057c513
    MOV EAX,EBX                         ; 0057c4f6
    MOV EDI,dword ptr [ESP + 0x138]     ; 0057c4f8
        ;   Label: LAB_0057c4f8
    CMP EDI,dword ptr [EAX + 0x3c]      ; 0057c4ff
    JZ 0x0057c3b7                       ; 0057c502
        ;   XREF to: 0057c3b7 (CONDITIONAL_JUMP)  ; LAB_0057c3b7
    INC EDX                             ; 0057c508
    MOV EDI,dword ptr [EBX + 0x64]      ; 0057c509
    ADD EAX,0x4                         ; 0057c50c
    CMP EDX,EDI                         ; 0057c50f
    JL 0x0057c4f8                       ; 0057c511
        ;   XREF to: 0057c4f8 (CONDITIONAL_JUMP)  ; LAB_0057c4f8
    TEST ESI,ESI                        ; 0057c513
        ;   Label: LAB_0057c513
    JZ 0x0057c3b7                       ; 0057c515
        ;   XREF to: 0057c3b7 (CONDITIONAL_JUMP)  ; LAB_0057c3b7
    LEA EAX,[ESP + 0x4]                 ; 0057c51b
    PUSH EAX                            ; 0057c51f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0057c520
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,0x41c80000                  ; 0057c525
    MOV EDX,0xa                         ; 0057c52a
    ADD ESP,0x4                         ; 0057c52f
    MOV ECX,0x6a                        ; 0057c532
    MOV dword ptr [ESP + 0x8],EAX       ; 0057c537
    MOV dword ptr [ESP + 0x2c],EDX      ; 0057c53b
    MOV dword ptr [ESP + 0x34],ECX      ; 0057c53f
    LEA EAX,[ESP + 0x4]                 ; 0057c543
    MOV EDX,dword ptr [ESP + 0x138]     ; 0057c547
    PUSH EAX                            ; 0057c54e
    MOV ESI,dword ptr [ESP + 0x13c]     ; 0057c54f
    MOV EDX,dword ptr [EDX + 0x154]     ; 0057c556
    PUSH ESI                            ; 0057c55c
    CALL dword ptr [EDX + 0x108]        ; 0057c55d
    ADD ESP,0x8                         ; 0057c563
    PUSH 0x0                            ; 0057c566
    PUSH 0x1                            ; 0057c568
    ADD ESI,0x20                        ; 0057c56a
    PUSH 0x41f00000                     ; 0057c56d
    PUSH ESI                            ; 0057c572
    MOV EDI,dword ptr [0x005fc5a0]      ; 0057c573 | DAT_005fc5a0
    PUSH EDI                            ; 0057c579
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0 ; 0057c57a
        ;   XREF to: 004a3bd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 0057c57f
    PUSH ESI                            ; 0057c582
    PUSH 0x5d7943                       ; 0057c583 | = "light?.wav"
    PUSH EBX                            ; 0057c588
    MOV EAX,[0x006045f8]                ; 0057c589 | DAT_006045f8
    PUSH EAX                            ; 0057c58e
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0057c58f
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0057c594
    MOV EAX,dword ptr [EBX + 0x64]      ; 0057c597
    MOV EDX,dword ptr [ESP + 0x138]     ; 0057c59a
    MOV dword ptr [EBX + EAX*0x4 + 0x3c],EDX ; 0057c5a1
    INC dword ptr [EBX + 0x64]          ; 0057c5a5
    CALL core_weather.cpp_FUN_0057c2c0  ; 0057c5a8
        ;   XREF to: 0057c2c0 (UNCONDITIONAL_CALL)  ; undefined core_weather.cpp_FUN_0057c2c0()
        ;   Label: LAB_0057c5a8
    PUSH 0x5d7959                       ; 0057c5ad | = "noLightningFlash"
    MOV dword ptr [ESP + 0x144],EAX     ; 0057c5b2
    MOV EDI,dword ptr [0x005fba60]      ; 0057c5b9 | DAT_005fba60
    MOV EAX,dword ptr [ESP + 0x144]     ; 0057c5bf
    MOV dword ptr [EBX + 0x30],EAX      ; 0057c5c6
    MOV EAX,dword ptr [EBX + 0x30]      ; 0057c5c9
    PUSH EDI                            ; 0057c5cc
    MOV dword ptr [ESP + 0x8],EAX       ; 0057c5cd
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0057c5d1
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057c5d6
    TEST EAX,EAX                        ; 0057c5d9
    JNZ 0x0057c609                      ; 0057c5db
        ;   XREF to: 0057c609 (CONDITIONAL_JUMP)  ; LAB_0057c609
    FLD float ptr [ESP]                 ; 0057c5dd
    FADD float ptr [0x005d7973]         ; 0057c5e0 | DAT_005d7973
    FST float ptr [ESP]                 ; 0057c5e6
    FLD1                                ; 0057c5e9
    FCOMPP                              ; 0057c5eb
    FNSTSW AX                           ; 0057c5ed
    SAHF                                ; 0057c5ef
    JNC 0x0057c5f9                      ; 0057c5f0
        ;   XREF to: 0057c5f9 (CONDITIONAL_JUMP)  ; LAB_0057c5f9
    MOV dword ptr [ESP],0x3f800000      ; 0057c5f2
    PUSH dword ptr [ESP]                ; 0057c5f9
        ;   Label: LAB_0057c5f9
    PUSH 0x2038f4c                      ; 0057c5fc
    CALL core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680 ; 0057c601
        ;   XREF to: 0044f680 (UNCONDITIONAL_CALL)  ; void core_dcamera.cpp_CDemonCamera_setEffectIntensity_FUN_0044f680(CDemonCamera * this_ptr, float intensity)
    ADD ESP,0x8                         ; 0057c606
    MOV ESP,EBP                         ; 0057c609
        ;   Label: LAB_0057c609
    POP EBP                             ; 0057c60b
    POP EDI                             ; 0057c60c
    POP ESI                             ; 0057c60d
    POP EBX                             ; 0057c60e
    RET                                 ; 0057c60f
    CMP dword ptr [ESP + 0x11c],0x0     ; 0057c610
        ;   Label: LAB_0057c610
    JNZ 0x0057c5a8                      ; 0057c618
        ;   XREF to: 0057c5a8 (CONDITIONAL_JUMP)  ; LAB_0057c5a8
    PUSH 0x203b37c                      ; 0057c61a | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xf0]                ; 0057c61f
    LEA EDI,[ESP + 0x108]               ; 0057c626
    CALL core_dtrace.cpp_FUN_00477d90   ; 0057c62d
        ;   XREF to: 00477d90 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477d90()
    LEA ESI,[ESP + 0xf0]                ; 0057c632
    ADD ESP,0x4                         ; 0057c639
    MOVSD ES:EDI,ESI                    ; 0057c63c
    MOVSD ES:EDI,ESI                    ; 0057c63d
    MOVSD ES:EDI,ESI                    ; 0057c63e
    PUSH 0x203b37c                      ; 0057c63f | g_CDemonRaytraceInstance
    LEA ESI,[ESP + 0xfc]                ; 0057c644
    LEA EDI,[ESP + 0x9c]                ; 0057c64b
    CALL core_dtrace.cpp_FUN_00477db0   ; 0057c652
        ;   XREF to: 00477db0 (UNCONDITIONAL_CALL)  ; undefined core_dtrace.cpp_FUN_00477db0()
    LEA ESI,[ESP + 0xfc]                ; 0057c657
    ADD ESP,0x4                         ; 0057c65e
    MOVSD ES:EDI,ESI                    ; 0057c661
    MOVSD ES:EDI,ESI                    ; 0057c662
    MOVSD ES:EDI,ESI                    ; 0057c663
    FLD float ptr [ESP + 0x98]          ; 0057c664
    FSUB float ptr [ESP + 0x104]        ; 0057c66b
    FMUL double ptr [0x005d796b]        ; 0057c672 | DAT_005d796b
    XOR ESI,ESI                         ; 0057c678
    FLDZ                                ; 0057c67a
    MOV dword ptr [ESP + 0x128],ESI     ; 0057c67c
    FXCH                                ; 0057c683
    FSTP float ptr [ESP + 0x13c]        ; 0057c685
    FCOMP float ptr [ESP + 0x13c]       ; 0057c68c
    FNSTSW AX                           ; 0057c693
    SAHF                                ; 0057c695
    JNC 0x0057c6a6                      ; 0057c696
        ;   XREF to: 0057c6a6 (CONDITIONAL_JUMP)  ; LAB_0057c6a6
    MOV EAX,dword ptr [ESP + 0x13c]     ; 0057c698
    MOV dword ptr [ESP + 0x128],EAX     ; 0057c69f
    FLD float ptr [ESP + 0x9c]          ; 0057c6a6
        ;   Label: LAB_0057c6a6
    FSUB float ptr [ESP + 0x108]        ; 0057c6ad
    FST float ptr [ESP + 0x124]         ; 0057c6b4
    FCOMP float ptr [ESP + 0x128]       ; 0057c6bb
    FNSTSW AX                           ; 0057c6c2
    SAHF                                ; 0057c6c4
    JBE 0x0057c6d5                      ; 0057c6c5
        ;   XREF to: 0057c6d5 (CONDITIONAL_JUMP)  ; LAB_0057c6d5
    MOV EAX,dword ptr [ESP + 0x124]     ; 0057c6c7
    MOV dword ptr [ESP + 0x128],EAX     ; 0057c6ce
    FLD float ptr [ESP + 0xa0]          ; 0057c6d5
        ;   Label: LAB_0057c6d5
    FSUB float ptr [ESP + 0x10c]        ; 0057c6dc
    FMUL double ptr [0x005d796b]        ; 0057c6e3 | DAT_005d796b
    FST float ptr [ESP + 0x120]         ; 0057c6e9
    FCOMP float ptr [ESP + 0x128]       ; 0057c6f0
    FNSTSW AX                           ; 0057c6f7
    SAHF                                ; 0057c6f9
    JBE 0x0057c70a                      ; 0057c6fa
        ;   XREF to: 0057c70a (CONDITIONAL_JUMP)  ; LAB_0057c70a
    MOV EAX,dword ptr [ESP + 0x120]     ; 0057c6fc
    MOV dword ptr [ESP + 0x128],EAX     ; 0057c703
    LEA EAX,[EBX + 0x14]                ; 0057c70a
        ;   Label: LAB_0057c70a
    PUSH EAX                            ; 0057c70d
    LEA EAX,[ESP + 0x44]                ; 0057c70e
    PUSH EAX                            ; 0057c712
    CALL core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550 ; 0057c713
        ;   XREF to: 0045b550 (UNCONDITIONAL_CALL)  ; void core_dirmat.cpp_CMatrix3x3f_buildRotationMatrix_FUN_0045b550(CMatrix3x3f * this_ptr, CVector3f * euler_angles)
    ADD ESP,0x8                         ; 0057c718
    MOV EAX,dword ptr [ESP + 0x128]     ; 0057c71b
    LEA ESI,[ESP + 0xbc]                ; 0057c722
    MOV dword ptr [ESP + 0xdc],EAX      ; 0057c729
    LEA EAX,[ESP + 0xd4]                ; 0057c730
    XOR EDI,EDI                         ; 0057c737
    PUSH EAX                            ; 0057c739
    LEA EAX,[ESP + 0x44]                ; 0057c73a
    MOV dword ptr [ESP + 0xd8],EDI      ; 0057c73e
    PUSH EAX                            ; 0057c745
    MOV dword ptr [ESP + 0xe0],EDI      ; 0057c746
    LEA EDI,[ESP + 0xb8]                ; 0057c74d
    CALL core_dirmat.cpp_FUN_0045b800   ; 0057c754
        ;   XREF to: 0045b800 (UNCONDITIONAL_CALL)  ; undefined core_dirmat.cpp_FUN_0045b800()
    LEA ESI,[ESP + 0xc4]                ; 0057c759
    ADD ESP,0x8                         ; 0057c760
    LEA EDX,[ESP + 0xd4]                ; 0057c763
    MOVSD ES:EDI,ESI                    ; 0057c76a
    MOVSD ES:EDI,ESI                    ; 0057c76b
    MOVSD ES:EDI,ESI                    ; 0057c76c
    LEA EAX,[EBX + 0x8]                 ; 0057c76d
    FLD float ptr [ESP + 0xb0]          ; 0057c770
    FLD float ptr [ESP + 0xb4]          ; 0057c777
    FLD float ptr [ESP + 0xb8]          ; 0057c77e
    LEA EDI,[ESP + 0xa4]                ; 0057c785
    LEA ESI,[ESP + 0x110]               ; 0057c78c
    FXCH ST2                            ; 0057c793
    FADD float ptr [EAX]                ; 0057c795
    FXCH                                ; 0057c797
    FADD float ptr [EAX + 0x4]          ; 0057c799
    FXCH ST2                            ; 0057c79c
    FADD float ptr [EAX + 0x8]          ; 0057c79e
    FXCH                                ; 0057c7a1
    FSTP float ptr [ESP + 0x110]        ; 0057c7a3
    FXCH                                ; 0057c7aa
    FSTP float ptr [ESP + 0x114]        ; 0057c7ac
    FSTP float ptr [ESP + 0x118]        ; 0057c7b3
    LEA EAX,[ESP + 0xa4]                ; 0057c7ba
    MOVSD ES:EDI,ESI                    ; 0057c7c1
    MOVSD ES:EDI,ESI                    ; 0057c7c2
    MOVSD ES:EDI,ESI                    ; 0057c7c3
    CMP EDX,EAX                         ; 0057c7c4
    JZ 0x0057c7f2                       ; 0057c7c6
        ;   XREF to: 0057c7f2 (CONDITIONAL_JUMP)  ; LAB_0057c7f2
    MOV EAX,dword ptr [ESP + 0xa4]      ; 0057c7c8
    MOV dword ptr [ESP + 0xd4],EAX      ; 0057c7cf
    MOV EAX,dword ptr [ESP + 0xa8]      ; 0057c7d6
    MOV dword ptr [ESP + 0xd8],EAX      ; 0057c7dd
    MOV EAX,dword ptr [ESP + 0xac]      ; 0057c7e4
    MOV dword ptr [ESP + 0xdc],EAX      ; 0057c7eb
    CMP dword ptr [EBP + 0x1c],0x0      ; 0057c7f2
        ;   Label: LAB_0057c7f2
    JZ 0x0057c5a8                       ; 0057c7f6
        ;   XREF to: 0057c5a8 (CONDITIONAL_JUMP)  ; LAB_0057c5a8
    PUSH 0x0                            ; 0057c7fc
    PUSH 0x0                            ; 0057c7fe
    LEA EAX,[ESP + 0xdc]                ; 0057c800
    PUSH dword ptr [ESP + 0x130]        ; 0057c807
    PUSH EAX                            ; 0057c80e
    MOV ECX,dword ptr [0x005fc5a0]      ; 0057c80f | DAT_005fc5a0
    PUSH ECX                            ; 0057c815
    CALL core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0 ; 0057c816
        ;   XREF to: 004a3bd0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createLightningBolt_FUN_004a3bd0(CFireEffect * this_ptr, CVector3f * start_position, float start_width, int enable_camera_shake, ...)
    ADD ESP,0x14                        ; 0057c81b
    LEA EAX,[ESP + 0xd4]                ; 0057c81e
    PUSH EAX                            ; 0057c825
    PUSH 0x5d794e                       ; 0057c826 | = "light?.wav"
    PUSH EBX                            ; 0057c82b
    MOV ESI,dword ptr [0x006045f8]      ; 0057c82c | DAT_006045f8
    PUSH ESI                            ; 0057c832
    CALL core_sound.cpp_CSound_playActorSound_FUN_005609d0 ; 0057c833
        ;   XREF to: 005609d0 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playActorSound_FUN_005609d0(CSound * this_ptr, CDemonActor * actor, char * sound_name, CVector3f * position)
    ADD ESP,0x10                        ; 0057c838
    JMP 0x0057c5a8                      ; 0057c83b
        ;   XREF to: 0057c5a8 (UNCONDITIONAL_JUMP)  ; LAB_0057c5a8

