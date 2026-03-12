; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_process_FUN_005e2430(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; float[1497]      Stack[-0x186c]:5988  afStackY_186c
; undefined8       Stack[-0x100]:8  local_100
; float            Stack[-0xf8]:4  local_f8
; char[100]        Stack[-0xf4]:100  local_f4
; CQuaternion4f    Stack[-0x90]:16  local_90
; CVector3f        Stack[-0x80]:12  local_80
; CQuaternion4f    Stack[-0x70]:16  local_70
; CQuaternion4f    Stack[-0x60]:16  local_60
; CQuaternion4f    Stack[-0x50]:16  local_50
; CQuaternion4f    Stack[-0x40]:16  local_40
; undefined1[20]   Stack[-0x30]:20  local_30
; CVector3f *      Stack[-0x1c]:4  local_1c
; CVector3f *      Stack[-0x18]:4  local_18
; float            Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   void* switchdataD_005e241c = 005e2462
;   TerminatedCString s_turret_ani_wav_00656600
;   TerminatedCString s_turret_ani_wav_00656610
;   TerminatedCString s_core_turret_cpp_00656620
;   TerminatedCString s_CTurret_process_invalid__00656633
;   TerminatedCString s_turret_loop_wav_f_00656654
;   TerminatedCString s_turret_tail_wav_00656669
;   double DOUBLE_00656680 = 2
;   CEventList* g_CEventListPtr = 02d05310
;   CEventList g_CEventListInstance
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_turret.cpp_CTurret_updatePatrol_FUN_005e3560
;   core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50
;   core_xform.cpp_eulerToQuaternion_FUN_005f7b20
;   core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0
;   core_xform.cpp_slerpQuaternion_FUN_005f77e0
;   crt_stdio.c__sprintf_FUN_005fdbd0
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e2430
        ;   Label: core_turret.cpp_CTurret_process_FUN_005e2430
    PUSH ESI                            ; 005e2431
    PUSH EDI                            ; 005e2432
    PUSH EBP                            ; 005e2433
    MOV EBP,ESP                         ; 005e2434
    SUB ESP,0xe8                        ; 005e2436
    AND ESP,0xfffffff8                  ; 005e243c
    MOV EBX,dword ptr [EBP + 0x14]      ; 005e243f
    MOV EAX,dword ptr [EBX + 0x700]     ; 005e2442
    MOV dword ptr [EBX + 0x2f4],0xffffffff ; 005e2448
    CMP EAX,0x4                         ; 005e2452
    JA 0x005e2850                       ; 005e2455
        ;   XREF to: 005e2850 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x5e241c]  ; 005e245b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x30]                ; 005e2462
        ;   Label: caseD_0
    LEA EDX,[EBX + 0x578]               ; 005e2465
    CMP EAX,EDX                         ; 005e246b
    JZ 0x005e247f                       ; 005e246d
        ;   XREF to: 005e247f (CONDITIONAL_JUMP)  ; LAB_005e247f
    MOV ECX,dword ptr [EDX]             ; 005e246f
    MOV dword ptr [EAX],ECX             ; 005e2471
    MOV ECX,dword ptr [EDX + 0x4]       ; 005e2473
    MOV dword ptr [EAX + 0x4],ECX       ; 005e2476
    MOV ECX,dword ptr [EDX + 0x8]       ; 005e2479
    MOV dword ptr [EAX + 0x8],ECX       ; 005e247c
    LEA EAX,[EBX + 0x704]               ; 005e247f
        ;   Label: LAB_005e247f
    PUSH EAX                            ; 005e2485
    MOV EDX,dword ptr [0x006793d0]      ; 005e2486 | g_CEventListPtr
    PUSH EDX                            ; 005e248c | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005e248d
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005e2492
    TEST EAX,EAX                        ; 005e2495
    JZ 0x005e2586                       ; 005e2497
        ;   XREF to: 005e2586 (CONDITIONAL_JUMP)  ; LAB_005e2586
    FLD float ptr [EBX + 0x768]         ; 005e249d
    MOV ECX,dword ptr [EBX + 0x8b8]     ; 005e24a3
    MOV dword ptr [EBX + 0x700],0x1     ; 005e24a9
    PUSH ECX                            ; 005e24b3
    FSTP float ptr [EBX + 0x77c]        ; 005e24b4
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005e24ba
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005e24bf
    PUSH 0x656600                       ; 005e24c2 | = "turret-ani?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e24c7
        ;   Label: LAB_005e24c7
    PUSH EBX                            ; 005e24cd
    CALL dword ptr [EAX + 0x24]         ; 005e24ce
    ADD ESP,0x8                         ; 005e24d1
    MOV dword ptr [EBX + 0x8b8],EAX     ; 005e24d4
    CMP dword ptr [EBX + 0x2f4],0x0     ; 005e24da
        ;   Label: LAB_005e24da
    JL 0x005e24f3                       ; 005e24e1
        ;   XREF to: 005e24f3 (CONDITIONAL_JUMP)  ; LAB_005e24f3
    PUSH EBX                            ; 005e24e3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e24e4
    CALL dword ptr [EAX + 0x104]        ; 005e24ea
    ADD ESP,0x4                         ; 005e24f0
    FLD float ptr [EBX + 0x300]         ; 005e24f3
        ;   Label: LAB_005e24f3
    FLD float ptr [EBX + 0x86c]         ; 005e24f9
    MOV EDI,dword ptr [EBX + 0x8b0]     ; 005e24ff
    FLD float ptr [EBP + 0x18]          ; 005e2505
    FXCH                                ; 005e2508
    FSUB ST0,ST1                        ; 005e250a
    FXCH ST2                            ; 005e250c
    FSUBRP                              ; 005e250e
    FXCH                                ; 005e2510
    FSTP float ptr [EBX + 0x86c]        ; 005e2512
    FSTP float ptr [EBX + 0x300]        ; 005e2518
    TEST EDI,EDI                        ; 005e251e
    JG 0x005e2535                       ; 005e2520
        ;   XREF to: 005e2535 (CONDITIONAL_JUMP)  ; LAB_005e2535
    FLD float ptr [EBX + 0x86c]         ; 005e2522
    FLDZ                                ; 005e2528
    FCOMPP                              ; 005e252a
    FNSTSW AX                           ; 005e252c
    SAHF                                ; 005e252e
    JNC 0x005e28b2                      ; 005e252f
        ;   XREF to: 005e28b2 (CONDITIONAL_JUMP)  ; LAB_005e28b2
    MOV ECX,dword ptr [EBX + 0x8b0]     ; 005e2535
        ;   Label: LAB_005e2535
    PUSH 0x3f8e38e4                     ; 005e253b
    DEC ECX                             ; 005e2540
    PUSH 0x3f666666                     ; 005e2541
    MOV dword ptr [EBX + 0x8b0],ECX     ; 005e2546
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005e254c
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [ESP + 0xec],EAX      ; 005e2551
    FLD float ptr [ESP + 0xec]          ; 005e2558
    ADD ESP,0x8                         ; 005e255f
    MOV ESI,dword ptr [EBX + 0x8b4]     ; 005e2562
    FSTP float ptr [ESP]                ; 005e2568
    PUSH dword ptr [ESP]                ; 005e256b
    PUSH ESI                            ; 005e256e
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40 ; 005e256f
        ;   XREF to: 005a9b40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_005a9b40(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 005e2574
    TEST EAX,EAX                        ; 005e2577
    JZ 0x005e2878                       ; 005e2579
        ;   XREF to: 005e2878 (CONDITIONAL_JUMP)  ; LAB_005e2878
    MOV ESP,EBP                         ; 005e257f
        ;   Label: LAB_005e257f
    POP EBP                             ; 005e2581
    POP EDI                             ; 005e2582
    POP ESI                             ; 005e2583
    POP EBX                             ; 005e2584
    RET                                 ; 005e2585
    MOV dword ptr [EBX + 0x77c],EAX     ; 005e2586
        ;   Label: LAB_005e2586
    JMP 0x005e24da                      ; 005e258c
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    FLD float ptr [EBX + 0x77c]         ; 005e2591
        ;   Label: caseD_1
    FSUB float ptr [EBP + 0x18]         ; 005e2597
    FST float ptr [EBX + 0x77c]         ; 005e259a
    FLDZ                                ; 005e25a0
    FCOMPP                              ; 005e25a2
    FNSTSW AX                           ; 005e25a4
    SAHF                                ; 005e25a6
    JC 0x005e24da                       ; 005e25a7
        ;   XREF to: 005e24da (CONDITIONAL_JUMP)  ; LAB_005e24da
    MOV dword ptr [EBX + 0x77c],0x0     ; 005e25ad
    MOV dword ptr [EBX + 0x700],0x2     ; 005e25b7
    MOV dword ptr [EBX + 0x300],0x0     ; 005e25c1
    JMP 0x005e24da                      ; 005e25cb
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    LEA EAX,[EBX + 0x704]               ; 005e25d0
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x2f4],0xff    ; 005e25d6
    PUSH EAX                            ; 005e25e0
    MOV EAX,[0x006793d0]                ; 005e25e1 | g_CEventListPtr
    MOV dword ptr [EBX + 0x2f8],0x0     ; 005e25e6
    PUSH EAX                            ; 005e25f0 | g_CEventListInstance
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005e25f1
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005e25fb
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005e2600
    TEST EAX,EAX                        ; 005e2603
    JNZ 0x005e2622                      ; 005e2605
        ;   XREF to: 005e2622 (CONDITIONAL_JUMP)  ; LAB_005e2622
    MOV dword ptr [EBX + 0x700],0x3     ; 005e2607
    MOV EAX,dword ptr [EBX + 0x76c]     ; 005e2611
    MOV dword ptr [EBX + 0x77c],EAX     ; 005e2617
    JMP 0x005e24da                      ; 005e261d
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    PUSH dword ptr [EBP + 0x18]         ; 005e2622
        ;   Label: LAB_005e2622
    PUSH EBX                            ; 005e2625
    CALL core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50 ; 005e2626
        ;   XREF to: 005e2d50 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updateTargeting_FUN_005e2d50(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005e262b
    MOV dword ptr [EBX + 0x77c],0x0     ; 005e262e
    JMP 0x005e24da                      ; 005e2638
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    LEA EAX,[EBX + 0x704]               ; 005e263d
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x2f4],0x0     ; 005e2643
    PUSH EAX                            ; 005e264d
    MOV ESI,dword ptr [0x006793d0]      ; 005e264e | g_CEventListPtr
    MOV dword ptr [EBX + 0x2f8],0xff    ; 005e2654
    PUSH ESI                            ; 005e265e | g_CEventListInstance
    MOV dword ptr [EBX + 0x2fc],0x0     ; 005e265f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005e2669
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005e266e
    TEST EAX,EAX                        ; 005e2671
    JZ 0x005e2698                       ; 005e2673
        ;   XREF to: 005e2698 (CONDITIONAL_JUMP)  ; LAB_005e2698
    MOV dword ptr [EBX + 0x77c],0x0     ; 005e2675
    MOV dword ptr [EBX + 0x700],0x2     ; 005e267f
    MOV dword ptr [EBX + 0x300],0x0     ; 005e2689
    JMP 0x005e24da                      ; 005e2693
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    FLD float ptr [EBX + 0x77c]         ; 005e2698
        ;   Label: LAB_005e2698
    FSUB float ptr [EBP + 0x18]         ; 005e269e
    FST float ptr [EBX + 0x77c]         ; 005e26a1
    FLDZ                                ; 005e26a7
    FCOMPP                              ; 005e26a9
    FNSTSW AX                           ; 005e26ab
    SAHF                                ; 005e26ad
    JC 0x005e26df                       ; 005e26ae
        ;   XREF to: 005e26df (CONDITIONAL_JUMP)  ; LAB_005e26df
    FLD float ptr [EBX + 0x770]         ; 005e26b0
    MOV EDI,dword ptr [EBX + 0x8b8]     ; 005e26b6
    MOV dword ptr [EBX + 0x700],0x4     ; 005e26bc
    PUSH EDI                            ; 005e26c6
    FSTP float ptr [EBX + 0x77c]        ; 005e26c7
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005e26cd
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005e26d2
    PUSH 0x656610                       ; 005e26d5 | = "turret-ani?.wav"
    JMP 0x005e24c7                      ; 005e26da
        ;   XREF to: 005e24c7 (UNCONDITIONAL_JUMP)  ; LAB_005e24c7
    PUSH dword ptr [EBP + 0x18]         ; 005e26df
        ;   Label: LAB_005e26df
    PUSH EBX                            ; 005e26e2
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_005e3560 ; 005e26e3
        ;   XREF to: 005e3560 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_005e3560(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005e26e8
    JMP 0x005e24da                      ; 005e26eb
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    FLD float ptr [EBX + 0x77c]         ; 005e26f0
        ;   Label: caseD_4
    LEA EAX,[EBX + 0x578]               ; 005e26f6
    FSUB float ptr [EBP + 0x18]         ; 005e26fc
    MOV dword ptr [ESP + 0xdc],EAX      ; 005e26ff
    FSTP float ptr [EBX + 0x77c]        ; 005e2706
    LEA EAX,[EBX + 0x30]                ; 005e270c
    FLD float ptr [EBX + 0x77c]         ; 005e270f
    FLDZ                                ; 005e2715
    MOV dword ptr [ESP + 0xe0],EAX      ; 005e2717
    FCOMPP                              ; 005e271e
    FNSTSW AX                           ; 005e2720
    SAHF                                ; 005e2722
    JC 0x005e277f                       ; 005e2723
        ;   XREF to: 005e277f (CONDITIONAL_JUMP)  ; LAB_005e277f
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005e2725
    MOV dword ptr [EBX + 0x700],0x0     ; 005e272c
    MOV ECX,dword ptr [ESP + 0xdc]      ; 005e2736
    MOV dword ptr [EBX + 0x77c],0x0     ; 005e273d
    CMP EAX,ECX                         ; 005e2747
    JZ 0x005e24da                       ; 005e2749
        ;   XREF to: 005e24da (CONDITIONAL_JUMP)  ; LAB_005e24da
    MOV EAX,ECX                         ; 005e274f
    FLD float ptr [EAX]                 ; 005e2751
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005e2753
    FSTP float ptr [EAX]                ; 005e275a
    MOV EAX,ECX                         ; 005e275c
    FLD float ptr [EAX + 0x4]           ; 005e275e
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005e2761
    FSTP float ptr [EAX + 0x4]          ; 005e2768
    MOV EAX,ECX                         ; 005e276b
    FLD float ptr [EAX + 0x8]           ; 005e276d
    MOV EAX,dword ptr [ESP + 0xe0]      ; 005e2770
    FSTP float ptr [EAX + 0x8]          ; 005e2777
    JMP 0x005e24da                      ; 005e277a
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    MOV ESI,dword ptr [ESP + 0xe0]      ; 005e277f
        ;   Label: LAB_005e277f
    PUSH ESI                            ; 005e2786
    LEA ESI,[ESP + 0xbc]                ; 005e2787
    LEA EDI,[ESP + 0x6c]                ; 005e278e
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 005e2792
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xbc]                ; 005e2797
    ADD ESP,0x4                         ; 005e279e
    MOVSD ES:EDI,ESI                    ; 005e27a1
    MOVSD ES:EDI,ESI                    ; 005e27a2
    MOVSD ES:EDI,ESI                    ; 005e27a3
    MOVSD ES:EDI,ESI                    ; 005e27a4
    MOV EDI,dword ptr [ESP + 0xdc]      ; 005e27a5
    PUSH EDI                            ; 005e27ac
    LEA ESI,[ESP + 0x8c]                ; 005e27ad
    CALL core_xform.cpp_eulerToQuaternion_FUN_005f7b20 ; 005e27b4
        ;   XREF to: 005f7b20 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_005f7b20(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA EDI,[ESP + 0xac]                ; 005e27b9
    LEA ESI,[ESP + 0x8c]                ; 005e27c0
    ADD ESP,0x4                         ; 005e27c7
    MOVSD ES:EDI,ESI                    ; 005e27ca
    MOVSD ES:EDI,ESI                    ; 005e27cb
    MOVSD ES:EDI,ESI                    ; 005e27cc
    MOVSD ES:EDI,ESI                    ; 005e27cd
    FLD float ptr [EBP + 0x18]          ; 005e27ce
    FLD float ptr [EBX + 0x77c]         ; 005e27d1
    FADD ST0,ST1                        ; 005e27d7
    FDIVP                               ; 005e27d9
    FMUL double ptr [0x00656680]        ; 005e27db | DOUBLE_00656680
    SUB ESP,0x4                         ; 005e27e1
    LEA EAX,[ESP + 0xac]                ; 005e27e4
    FSTP float ptr [ESP]                ; 005e27eb
    PUSH EAX                            ; 005e27ee
    LEA EAX,[ESP + 0x70]                ; 005e27ef
    PUSH EAX                            ; 005e27f3
    LEA ESI,[ESP + 0xa4]                ; 005e27f4
    CALL core_xform.cpp_slerpQuaternion_FUN_005f77e0 ; 005e27fb
        ;   XREF to: 005f77e0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_005f77e0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    ADD ESP,0xc                         ; 005e2800
    LEA EAX,[ESP + 0x78]                ; 005e2803
    LEA EDI,[ESP + 0x78]                ; 005e2807
    PUSH EAX                            ; 005e280b
    LEA EAX,[ESP + 0xcc]                ; 005e280c
    LEA ESI,[ESP + 0x9c]                ; 005e2813
    PUSH EAX                            ; 005e281a
    MOVSD ES:EDI,ESI                    ; 005e281b
    MOVSD ES:EDI,ESI                    ; 005e281c
    MOVSD ES:EDI,ESI                    ; 005e281d
    MOVSD ES:EDI,ESI                    ; 005e281e
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0 ; 005e281f
        ;   XREF to: 005f7ac0 (UNCONDITIONAL_CALL)  ; CVector3f * core_xform.cpp_quaternionToEulerAngles_FUN_005f7ac0(CQuaternion4f * quat_in, CVector3f * vector_out)
    ADD ESP,0x8                         ; 005e2824
    MOV EDX,dword ptr [ESP + 0xe0]      ; 005e2827
    CMP EAX,EDX                         ; 005e282e
    JZ 0x005e2842                       ; 005e2830
        ;   XREF to: 005e2842 (CONDITIONAL_JUMP)  ; LAB_005e2842
    MOV ECX,dword ptr [EAX]             ; 005e2832
    MOV dword ptr [EDX],ECX             ; 005e2834
    MOV ECX,dword ptr [EAX + 0x4]       ; 005e2836
    MOV dword ptr [EDX + 0x4],ECX       ; 005e2839
    MOV ECX,dword ptr [EAX + 0x8]       ; 005e283c
    MOV dword ptr [EDX + 0x8],ECX       ; 005e283f
    PUSH EBX                            ; 005e2842
        ;   Label: LAB_005e2842
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10 ; 005e2843
        ;   XREF to: 00408c10 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408c10(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 005e2848
    JMP 0x005e24da                      ; 005e284b
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    MOV EDX,0x656620                    ; 005e2850 | = "..\\core\\turret.cpp"
        ;   Label: default
    MOV ECX,0x15a                       ; 005e2855
    PUSH 0x656633                       ; 005e285a | = "CTurret::process - invalid state"
    MOV dword ptr [0x02f0ca48],EDX      ; 005e285f | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 005e2865 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005e286b
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005e2870
    JMP 0x005e24da                      ; 005e2873
        ;   XREF to: 005e24da (UNCONDITIONAL_JUMP)  ; LAB_005e24da
    FLD float ptr [ESP]                 ; 005e2878
        ;   Label: LAB_005e2878
    SUB ESP,0x8                         ; 005e287b
    FSTP double ptr [ESP]               ; 005e287e
    PUSH 0x656654                       ; 005e2881 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 005e2886
    PUSH EAX                            ; 005e288a
    CALL crt_stdio.c__sprintf_FUN_005fdbd0 ; 005e288b
        ;   XREF to: 005fdbd0 (UNCONDITIONAL_CALL)  ; int crt_stdio.c__sprintf_FUN_005fdbd0(char * buffer, char * format)
    ADD ESP,0x10                        ; 005e2890
    LEA EAX,[ESP + 0x4]                 ; 005e2893
    PUSH EAX                            ; 005e2897
    MOV EDX,dword ptr [EBX + 0x154]     ; 005e2898
    PUSH EBX                            ; 005e289e
    CALL dword ptr [EDX + 0x28]         ; 005e289f
    ADD ESP,0x8                         ; 005e28a2
    MOV dword ptr [EBX + 0x8b4],EAX     ; 005e28a5
    MOV ESP,EBP                         ; 005e28ab
    POP EBP                             ; 005e28ad
    POP EDI                             ; 005e28ae
    POP ESI                             ; 005e28af
    POP EBX                             ; 005e28b0
    RET                                 ; 005e28b1
    PUSH 0x2                            ; 005e28b2
        ;   Label: LAB_005e28b2
    MOV EAX,dword ptr [EBX + 0x8b4]     ; 005e28b4
    PUSH EAX                            ; 005e28ba
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720 ; 005e28bb
        ;   XREF to: 005a9720 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_005a9720(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0xdc],EAX      ; 005e28c0
    MOV dword ptr [ESP + 0xe0],EDX      ; 005e28c7
    FLD double ptr [ESP + 0xdc]         ; 005e28ce
    FLDZ                                ; 005e28d5
    ADD ESP,0x8                         ; 005e28d7
    FCOMPP                              ; 005e28da
    FNSTSW AX                           ; 005e28dc
    SAHF                                ; 005e28de
    JA 0x005e257f                       ; 005e28df
        ;   XREF to: 005e257f (CONDITIONAL_JUMP)  ; LAB_005e257f
    MOV EDX,dword ptr [EBX + 0x8b4]     ; 005e28e5
    PUSH EDX                            ; 005e28eb
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005e28ec
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005e28f1
    PUSH 0x656669                       ; 005e28f4 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005e28f9
    PUSH EBX                            ; 005e28ff
    CALL dword ptr [EAX + 0x24]         ; 005e2900
    ADD ESP,0x8                         ; 005e2903
    MOV ESP,EBP                         ; 005e2906
    POP EBP                             ; 005e2908
    POP EDI                             ; 005e2909
    POP ESI                             ; 005e290a
    POP EBX                             ; 005e290b
    RET                                 ; 005e290c

