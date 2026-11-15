; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_process_FUN_005a23b0(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_turret_ani_wav_005f89e7+1
;   TerminatedCString s_turret_ani_wav_005f89f8
;   TerminatedCString s_turret_loop_wav_f_005f8a3c
;   TerminatedCString s_turret_tail_wav_005f8a51
;   undefined4 DAT_005f8a68
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30
;   core_main.c_displayErrorAndQuit_FUN_005030e0
;   core_turret.cpp_CTurret_updatePatrol_FUN_005a3650
;   core_turret.cpp_CTurret_updateTargeting_FUN_005a2d00
;   core_xform.cpp_eulerToQuaternion_FUN_005b7ed0
;   core_xform.cpp_quaternionToEulerAngles_FUN_005b7c00
;   core_xform.cpp_slerpQuaternion_FUN_005b7940
;   crt_unknown.c_sprintf_FUN_005bfb40
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a23b0
        ;   Label: core_turret.cpp_CTurret_process_FUN_005a23b0
    PUSH ESI                            ; 005a23b1
    PUSH EDI                            ; 005a23b2
    PUSH EBP                            ; 005a23b3
    MOV EBP,ESP                         ; 005a23b4
    SUB ESP,0xf4                        ; 005a23b6
    AND ESP,0xfffffff8                  ; 005a23bc
    MOV EBX,dword ptr [EBP + 0x14]      ; 005a23bf
    MOV EAX,dword ptr [EBX + 0x700]     ; 005a23c2
    MOV dword ptr [EBX + 0x2f4],0xffffffff ; 005a23c8
    CMP EAX,0x4                         ; 005a23d2
    JA 0x005a27f4                       ; 005a23d5
        ;   XREF to: 005a27f4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5a2394]  ; 005a23db | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x30]                ; 005a23e2
        ;   Label: caseD_0
    LEA EDX,[EBX + 0x578]               ; 005a23e5
    CMP EAX,EDX                         ; 005a23eb
    JZ 0x005a23ff                       ; 005a23ed
        ;   XREF to: 005a23ff (CONDITIONAL_JUMP)  ; LAB_005a23ff
    MOV ECX,dword ptr [EDX]             ; 005a23ef
    MOV dword ptr [EAX],ECX             ; 005a23f1
    MOV ECX,dword ptr [EDX + 0x4]       ; 005a23f3
    MOV dword ptr [EAX + 0x4],ECX       ; 005a23f6
    MOV ECX,dword ptr [EDX + 0x8]       ; 005a23f9
    MOV dword ptr [EAX + 0x8],ECX       ; 005a23fc
    LEA EAX,[EBX + 0x704]               ; 005a23ff
        ;   Label: LAB_005a23ff
    PUSH EAX                            ; 005a2405
    MOV EDX,dword ptr [0x0061b4d0]      ; 005a2406 | DAT_0061b4d0
    PUSH EDX                            ; 005a240c
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005a240d
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a2412
    TEST EAX,EAX                        ; 005a2415
    JZ 0x005a2506                       ; 005a2417
        ;   XREF to: 005a2506 (CONDITIONAL_JUMP)  ; LAB_005a2506
    FLD float ptr [EBX + 0x768]         ; 005a241d
    MOV ECX,dword ptr [EBX + 0x8b8]     ; 005a2423
    MOV dword ptr [EBX + 0x700],0x1     ; 005a2429
    PUSH ECX                            ; 005a2433
    FSTP float ptr [EBX + 0x77c]        ; 005a2434
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005a243a
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005a243f
    PUSH 0x5f89e8                       ; 005a2442 | s_turret_ani_wav_005f89e7+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2447
        ;   Label: LAB_005a2447
    PUSH EBX                            ; 005a244d
    CALL dword ptr [EAX + 0x2c]         ; 005a244e
    ADD ESP,0x8                         ; 005a2451
    MOV dword ptr [EBX + 0x8b8],EAX     ; 005a2454
    CMP dword ptr [EBX + 0x2f4],0x0     ; 005a245a
        ;   Label: LAB_005a245a
    JL 0x005a2473                       ; 005a2461
        ;   XREF to: 005a2473 (CONDITIONAL_JUMP)  ; LAB_005a2473
    PUSH EBX                            ; 005a2463
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a2464
    CALL dword ptr [EAX + 0xf0]         ; 005a246a
    ADD ESP,0x4                         ; 005a2470
    FLD float ptr [EBX + 0x300]         ; 005a2473
        ;   Label: LAB_005a2473
    FLD float ptr [EBX + 0x86c]         ; 005a2479
    MOV EDI,dword ptr [EBX + 0x8b0]     ; 005a247f
    FLD float ptr [EBP + 0x18]          ; 005a2485
    FXCH                                ; 005a2488
    FSUB ST0,ST1                        ; 005a248a
    FXCH ST2                            ; 005a248c
    FSUBRP                              ; 005a248e
    FXCH                                ; 005a2490
    FSTP float ptr [EBX + 0x86c]        ; 005a2492
    FSTP float ptr [EBX + 0x300]        ; 005a2498
    TEST EDI,EDI                        ; 005a249e
    JG 0x005a24b5                       ; 005a24a0
        ;   XREF to: 005a24b5 (CONDITIONAL_JUMP)  ; LAB_005a24b5
    FLD float ptr [EBX + 0x86c]         ; 005a24a2
    FLDZ                                ; 005a24a8
    FCOMPP                              ; 005a24aa
    FNSTSW AX                           ; 005a24ac
    SAHF                                ; 005a24ae
    JNC 0x005a2856                      ; 005a24af
        ;   XREF to: 005a2856 (CONDITIONAL_JUMP)  ; LAB_005a2856
    MOV ECX,dword ptr [EBX + 0x8b0]     ; 005a24b5
        ;   Label: LAB_005a24b5
    PUSH 0x3f8e38e4                     ; 005a24bb
    DEC ECX                             ; 005a24c0
    PUSH 0x3f666666                     ; 005a24c1
    MOV dword ptr [EBX + 0x8b0],ECX     ; 005a24c6
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 005a24cc
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 005a24d1
    FLD float ptr [ESP + 0xf8]          ; 005a24d8
    ADD ESP,0x8                         ; 005a24df
    MOV ESI,dword ptr [EBX + 0x8b4]     ; 005a24e2
    FSTP float ptr [ESP]                ; 005a24e8
    PUSH dword ptr [ESP]                ; 005a24eb
    PUSH ESI                            ; 005a24ee
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980 ; 005a24ef
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_00573980(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 005a24f4
    TEST EAX,EAX                        ; 005a24f7
    JZ 0x005a281c                       ; 005a24f9
        ;   XREF to: 005a281c (CONDITIONAL_JUMP)  ; LAB_005a281c
    MOV ESP,EBP                         ; 005a24ff
        ;   Label: LAB_005a24ff
    POP EBP                             ; 005a2501
    POP EDI                             ; 005a2502
    POP ESI                             ; 005a2503
    POP EBX                             ; 005a2504
    RET                                 ; 005a2505
    MOV dword ptr [EBX + 0x77c],EAX     ; 005a2506
        ;   Label: LAB_005a2506
    JMP 0x005a245a                      ; 005a250c
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    FLD float ptr [EBX + 0x77c]         ; 005a2511
        ;   Label: caseD_1
    FSUB float ptr [EBP + 0x18]         ; 005a2517
    FST float ptr [EBX + 0x77c]         ; 005a251a
    FLDZ                                ; 005a2520
    FCOMPP                              ; 005a2522
    FNSTSW AX                           ; 005a2524
    SAHF                                ; 005a2526
    JC 0x005a245a                       ; 005a2527
        ;   XREF to: 005a245a (CONDITIONAL_JUMP)  ; LAB_005a245a
    MOV dword ptr [EBX + 0x77c],0x0     ; 005a252d
    MOV dword ptr [EBX + 0x700],0x2     ; 005a2537
    MOV dword ptr [EBX + 0x300],0x0     ; 005a2541
    JMP 0x005a245a                      ; 005a254b
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    LEA EAX,[EBX + 0x704]               ; 005a2550
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x2f4],0xff    ; 005a2556
    PUSH EAX                            ; 005a2560
    MOV EAX,[0x0061b4d0]                ; 005a2561 | DAT_0061b4d0
    MOV dword ptr [EBX + 0x2f8],0x0     ; 005a2566
    PUSH EAX                            ; 005a2570
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005a2571
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005a257b
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a2580
    TEST EAX,EAX                        ; 005a2583
    JNZ 0x005a25a2                      ; 005a2585
        ;   XREF to: 005a25a2 (CONDITIONAL_JUMP)  ; LAB_005a25a2
    MOV dword ptr [EBX + 0x700],0x3     ; 005a2587
    MOV EAX,dword ptr [EBX + 0x76c]     ; 005a2591
    MOV dword ptr [EBX + 0x77c],EAX     ; 005a2597
    JMP 0x005a245a                      ; 005a259d
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    PUSH dword ptr [EBP + 0x18]         ; 005a25a2
        ;   Label: LAB_005a25a2
    PUSH EBX                            ; 005a25a5
    CALL core_turret.cpp_CTurret_updateTargeting_FUN_005a2d00 ; 005a25a6
        ;   XREF to: 005a2d00 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updateTargeting_FUN_005a2d00(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a25ab
    MOV dword ptr [EBX + 0x77c],0x0     ; 005a25ae
    JMP 0x005a245a                      ; 005a25b8
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    LEA EAX,[EBX + 0x704]               ; 005a25bd
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2f4],0x0     ; 005a25c3
    PUSH EAX                            ; 005a25cd
    MOV ESI,dword ptr [0x0061b4d0]      ; 005a25ce | DAT_0061b4d0
    MOV dword ptr [EBX + 0x2f8],0xff    ; 005a25d4
    PUSH ESI                            ; 005a25de
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005a25df
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 005a25e9
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005a25ee
    TEST EAX,EAX                        ; 005a25f1
    JZ 0x005a2618                       ; 005a25f3
        ;   XREF to: 005a2618 (CONDITIONAL_JUMP)  ; LAB_005a2618
    MOV dword ptr [EBX + 0x77c],0x0     ; 005a25f5
    MOV dword ptr [EBX + 0x700],0x2     ; 005a25ff
    MOV dword ptr [EBX + 0x300],0x0     ; 005a2609
    JMP 0x005a245a                      ; 005a2613
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    FLD float ptr [EBX + 0x77c]         ; 005a2618
        ;   Label: LAB_005a2618
    FSUB float ptr [EBP + 0x18]         ; 005a261e
    FST float ptr [EBX + 0x77c]         ; 005a2621
    FLDZ                                ; 005a2627
    FCOMPP                              ; 005a2629
    FNSTSW AX                           ; 005a262b
    SAHF                                ; 005a262d
    JC 0x005a265f                       ; 005a262e
        ;   XREF to: 005a265f (CONDITIONAL_JUMP)  ; LAB_005a265f
    FLD float ptr [EBX + 0x770]         ; 005a2630
    MOV EDI,dword ptr [EBX + 0x8b8]     ; 005a2636
    MOV dword ptr [EBX + 0x700],0x4     ; 005a263c
    PUSH EDI                            ; 005a2646
    FSTP float ptr [EBX + 0x77c]        ; 005a2647
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005a264d
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005a2652
    PUSH 0x5f89f8                       ; 005a2655 | = "turret-ani?.wav"
    JMP 0x005a2447                      ; 005a265a
        ;   XREF to: 005a2447 (UNCONDITIONAL_JUMP)  ; LAB_005a2447
    PUSH dword ptr [EBP + 0x18]         ; 005a265f
        ;   Label: LAB_005a265f
    PUSH EBX                            ; 005a2662
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_005a3650 ; 005a2663
        ;   XREF to: 005a3650 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_005a3650(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005a2668
    JMP 0x005a245a                      ; 005a266b
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    FLD float ptr [EBX + 0x77c]         ; 005a2670
        ;   Label: caseD_4
    LEA EAX,[EBX + 0x578]               ; 005a2676
    FSUB float ptr [EBP + 0x18]         ; 005a267c
    MOV dword ptr [ESP + 0xe8],EAX      ; 005a267f
    FSTP float ptr [EBX + 0x77c]        ; 005a2686
    LEA EAX,[EBX + 0x30]                ; 005a268c
    FLD float ptr [EBX + 0x77c]         ; 005a268f
    FLDZ                                ; 005a2695
    MOV dword ptr [ESP + 0xec],EAX      ; 005a2697
    FCOMPP                              ; 005a269e
    FNSTSW AX                           ; 005a26a0
    SAHF                                ; 005a26a2
    JC 0x005a26ff                       ; 005a26a3
        ;   XREF to: 005a26ff (CONDITIONAL_JUMP)  ; LAB_005a26ff
    MOV EAX,dword ptr [ESP + 0xec]      ; 005a26a5
    MOV dword ptr [EBX + 0x700],0x0     ; 005a26ac
    MOV ECX,dword ptr [ESP + 0xe8]      ; 005a26b6
    MOV dword ptr [EBX + 0x77c],0x0     ; 005a26bd
    CMP EAX,ECX                         ; 005a26c7
    JZ 0x005a245a                       ; 005a26c9
        ;   XREF to: 005a245a (CONDITIONAL_JUMP)  ; LAB_005a245a
    MOV EAX,ECX                         ; 005a26cf
    FLD float ptr [EAX]                 ; 005a26d1
    MOV EAX,dword ptr [ESP + 0xec]      ; 005a26d3
    FSTP float ptr [EAX]                ; 005a26da
    MOV EAX,ECX                         ; 005a26dc
    FLD float ptr [EAX + 0x4]           ; 005a26de
    MOV EAX,dword ptr [ESP + 0xec]      ; 005a26e1
    FSTP float ptr [EAX + 0x4]          ; 005a26e8
    MOV EAX,ECX                         ; 005a26eb
    FLD float ptr [EAX + 0x8]           ; 005a26ed
    MOV EAX,dword ptr [ESP + 0xec]      ; 005a26f0
    FSTP float ptr [EAX + 0x8]          ; 005a26f7
    JMP 0x005a245a                      ; 005a26fa
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    MOV ESI,dword ptr [ESP + 0xec]      ; 005a26ff
        ;   Label: LAB_005a26ff
    PUSH ESI                            ; 005a2706
    LEA ESI,[ESP + 0x6c]                ; 005a2707
    LEA EDI,[ESP + 0x8c]                ; 005a270b
    CALL core_xform.cpp_eulerToQuaternion_FUN_005b7ed0 ; 005a2712
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005b7ed0(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x6c]                ; 005a2717
    ADD ESP,0x4                         ; 005a271b
    MOVSD ES:EDI,ESI                    ; 005a271e
    MOVSD ES:EDI,ESI                    ; 005a271f
    MOVSD ES:EDI,ESI                    ; 005a2720
    MOVSD ES:EDI,ESI                    ; 005a2721
    MOV EDI,dword ptr [ESP + 0xe8]      ; 005a2722
    PUSH EDI                            ; 005a2729
    LEA ESI,[ESP + 0x7c]                ; 005a272a
    CALL core_xform.cpp_eulerToQuaternion_FUN_005b7ed0 ; 005a272e
        ;   XREF to: 005b7ed0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005b7ed0(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA EDI,[ESP + 0x9c]                ; 005a2733
    LEA ESI,[ESP + 0x7c]                ; 005a273a
    ADD ESP,0x4                         ; 005a273e
    MOVSD ES:EDI,ESI                    ; 005a2741
    MOVSD ES:EDI,ESI                    ; 005a2742
    MOVSD ES:EDI,ESI                    ; 005a2743
    MOVSD ES:EDI,ESI                    ; 005a2744
    FLD float ptr [EBP + 0x18]          ; 005a2745
    FLD float ptr [EBX + 0x77c]         ; 005a2748
    FADD ST0,ST1                        ; 005a274e
    FDIVP                               ; 005a2750
    FMUL double ptr [0x005f8a68]        ; 005a2752 | DAT_005f8a68
    SUB ESP,0x4                         ; 005a2758
    LEA EAX,[ESP + 0x9c]                ; 005a275b
    FSTP float ptr [ESP]                ; 005a2762
    PUSH EAX                            ; 005a2765
    LEA EAX,[ESP + 0x90]                ; 005a2766
    PUSH EAX                            ; 005a276d
    LEA ESI,[ESP + 0xb4]                ; 005a276e
    LEA EDI,[ESP + 0xc4]                ; 005a2775
    CALL core_xform.cpp_slerpQuaternion_FUN_005b7940 ; 005a277c
        ;   XREF to: 005b7940 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_005b7940()
    LEA ESI,[ESP + 0xb4]                ; 005a2781
    ADD ESP,0xc                         ; 005a2788
    LEA EAX,[ESP + 0xb8]                ; 005a278b
    MOVSD ES:EDI,ESI                    ; 005a2792
    MOVSD ES:EDI,ESI                    ; 005a2793
    MOVSD ES:EDI,ESI                    ; 005a2794
    MOVSD ES:EDI,ESI                    ; 005a2795
    PUSH EAX                            ; 005a2796
    LEA ESI,[ESP + 0xcc]                ; 005a2797
    LEA EDI,[ESP + 0xd8]                ; 005a279e
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005b7c00 ; 005a27a5
        ;   XREF to: 005b7c00 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_quaternionToEulerAngles_FUN_005b7c00()
    LEA ESI,[ESP + 0xcc]                ; 005a27aa
    ADD ESP,0x4                         ; 005a27b1
    LEA EAX,[ESP + 0xd4]                ; 005a27b4
    MOV EDX,dword ptr [ESP + 0xec]      ; 005a27bb
    MOVSD ES:EDI,ESI                    ; 005a27c2
    MOVSD ES:EDI,ESI                    ; 005a27c3
    MOVSD ES:EDI,ESI                    ; 005a27c4
    CMP EAX,EDX                         ; 005a27c5
    JZ 0x005a27e6                       ; 005a27c7
        ;   XREF to: 005a27e6 (CONDITIONAL_JUMP)  ; LAB_005a27e6
    MOV EAX,dword ptr [ESP + 0xd4]      ; 005a27c9
    MOV dword ptr [EDX],EAX             ; 005a27d0
    MOV EAX,dword ptr [ESP + 0xd8]      ; 005a27d2
    MOV dword ptr [EDX + 0x4],EAX       ; 005a27d9
    MOV EAX,dword ptr [ESP + 0xdc]      ; 005a27dc
    MOV dword ptr [EDX + 0x8],EAX       ; 005a27e3
    PUSH EBX                            ; 005a27e6
        ;   Label: LAB_005a27e6
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0 ; 005a27e7
        ;   XREF to: 004088b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088b0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005a27ec
    JMP 0x005a245a                      ; 005a27ef
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    MOV EDX,0x5f8a08                    ; 005a27f4
        ;   Label: default
    MOV ECX,0x15a                       ; 005a27f9
    PUSH 0x5f8a1b                       ; 005a27fe
    MOV dword ptr [0x01d1d400],EDX      ; 005a2803 | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ECX      ; 005a2809 | DAT_01d1d404
    CALL core_main.c_displayErrorAndQuit_FUN_005030e0 ; 005a280f
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_005030e0(char * format)
    ADD ESP,0x4                         ; 005a2814
    JMP 0x005a245a                      ; 005a2817
        ;   XREF to: 005a245a (UNCONDITIONAL_JUMP)  ; LAB_005a245a
    FLD float ptr [ESP]                 ; 005a281c
        ;   Label: LAB_005a281c
    SUB ESP,0x8                         ; 005a281f
    FSTP double ptr [ESP]               ; 005a2822
    PUSH 0x5f8a3c                       ; 005a2825 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 005a282a
    PUSH EAX                            ; 005a282e
    CALL crt_unknown.c_sprintf_FUN_005bfb40 ; 005a282f
        ;   XREF to: 005bfb40 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005bfb40(char * buffer, char * format)
    ADD ESP,0x10                        ; 005a2834
    LEA EAX,[ESP + 0x4]                 ; 005a2837
    PUSH EAX                            ; 005a283b
    MOV EDX,dword ptr [EBX + 0x154]     ; 005a283c
    PUSH EBX                            ; 005a2842
    CALL dword ptr [EDX + 0x30]         ; 005a2843
    ADD ESP,0x8                         ; 005a2846
    MOV dword ptr [EBX + 0x8b4],EAX     ; 005a2849
    MOV ESP,EBP                         ; 005a284f
    POP EBP                             ; 005a2851
    POP EDI                             ; 005a2852
    POP ESI                             ; 005a2853
    POP EBX                             ; 005a2854
    RET                                 ; 005a2855
    PUSH 0x2                            ; 005a2856
        ;   Label: LAB_005a2856
    MOV EAX,dword ptr [EBX + 0x8b4]     ; 005a2858
    PUSH EAX                            ; 005a285e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660 ; 005a285f
        ;   XREF to: 00573660 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00573660(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0xe8],EAX      ; 005a2864
    MOV dword ptr [ESP + 0xec],EDX      ; 005a286b
    FLD double ptr [ESP + 0xe8]         ; 005a2872
    FLDZ                                ; 005a2879
    ADD ESP,0x8                         ; 005a287b
    FCOMPP                              ; 005a287e
    FNSTSW AX                           ; 005a2880
    SAHF                                ; 005a2882
    JA 0x005a24ff                       ; 005a2883
        ;   XREF to: 005a24ff (CONDITIONAL_JUMP)  ; LAB_005a24ff
    MOV EDX,dword ptr [EBX + 0x8b4]     ; 005a2889
    PUSH EDX                            ; 005a288f
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005a2890
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005a2895
    PUSH 0x5f8a51                       ; 005a2898 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a289d
    PUSH EBX                            ; 005a28a3
    CALL dword ptr [EAX + 0x2c]         ; 005a28a4
    ADD ESP,0x8                         ; 005a28a7
    MOV ESP,EBP                         ; 005a28aa
    POP EBP                             ; 005a28ac
    POP EDI                             ; 005a28ad
    POP ESI                             ; 005a28ae
    POP EBX                             ; 005a28af
    RET                                 ; 005a28b0

