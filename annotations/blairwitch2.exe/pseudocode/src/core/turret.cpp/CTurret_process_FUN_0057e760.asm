; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_turret_cpp_CTurret_process_FUN_0057e760(CTurret *this_ptr,float delta_time)
;
; Parameters:
; CTurret *        Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined4 s_turret_ani_wav_005ed68b+1
;   TerminatedCString s_turret_ani_wav_005ed69c
;   TerminatedCString s_turret_loop_wav_f_005ed6e0
;   TerminatedCString s_turret_tail_wav_005ed6f5
;   undefined4 DAT_005ed70c
;   undefined4 DAT_006141f0
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_event.cpp_CEventList_evaluateCondition_FUN_0048e340
;   core_main.c_displayErrorAndQuit_FUN_004e4500
;   core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00
;   core_turret.cpp_CTurret_updateTargeting_FUN_0057f0b0
;   core_xform.cpp_eulerToQuaternion_FUN_00594380
;   core_xform.cpp_quaternionToEulerAngles_FUN_005940b0
;   core_xform.cpp_slerpQuaternion_FUN_00593df0
;   crt_unknown.c_sprintf_FUN_005b7790
;   sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30
;   sound_sndmain.cpp_killSfx_FUN_00551050
;   sound_sndmain.cpp_setSfxBaseFrequency_FUN_00550f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057e760
        ;   Label: core_turret.cpp_CTurret_process_FUN_0057e760
    PUSH ESI                            ; 0057e761
    PUSH EDI                            ; 0057e762
    PUSH EBP                            ; 0057e763
    MOV EBP,ESP                         ; 0057e764
    SUB ESP,0xf4                        ; 0057e766
    AND ESP,0xfffffff8                  ; 0057e76c
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057e76f
    MOV EAX,dword ptr [EBX + 0x85c]     ; 0057e772
    MOV dword ptr [EBX + 0x450],0xffffffff ; 0057e778
    CMP EAX,0x4                         ; 0057e782
    JA 0x0057eba4                       ; 0057e785
        ;   XREF to: 0057eba4 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x57e744]  ; 0057e78b | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD
    LEA EAX,[EBX + 0x30]                ; 0057e792
        ;   Label: caseD_0
    LEA EDX,[EBX + 0x6d4]               ; 0057e795
    CMP EAX,EDX                         ; 0057e79b
    JZ 0x0057e7af                       ; 0057e79d
        ;   XREF to: 0057e7af (CONDITIONAL_JUMP)  ; LAB_0057e7af
    MOV ECX,dword ptr [EDX]             ; 0057e79f
    MOV dword ptr [EAX],ECX             ; 0057e7a1
    MOV ECX,dword ptr [EDX + 0x4]       ; 0057e7a3
    MOV dword ptr [EAX + 0x4],ECX       ; 0057e7a6
    MOV ECX,dword ptr [EDX + 0x8]       ; 0057e7a9
    MOV dword ptr [EAX + 0x8],ECX       ; 0057e7ac
    LEA EAX,[EBX + 0x860]               ; 0057e7af
        ;   Label: LAB_0057e7af
    PUSH EAX                            ; 0057e7b5
    MOV EDX,dword ptr [0x006141f0]      ; 0057e7b6 | DAT_006141f0
    PUSH EDX                            ; 0057e7bc
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0057e7bd
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057e7c2
    TEST EAX,EAX                        ; 0057e7c5
    JZ 0x0057e8b6                       ; 0057e7c7
        ;   XREF to: 0057e8b6 (CONDITIONAL_JUMP)  ; LAB_0057e8b6
    FLD float ptr [EBX + 0x8c4]         ; 0057e7cd
    MOV ECX,dword ptr [EBX + 0xa14]     ; 0057e7d3
    MOV dword ptr [EBX + 0x85c],0x1     ; 0057e7d9
    PUSH ECX                            ; 0057e7e3
    FSTP float ptr [EBX + 0x8d8]        ; 0057e7e4
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057e7ea
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0057e7ef
    PUSH 0x5ed68c                       ; 0057e7f2 | s_turret_ani_wav_005ed68b+1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057e7f7
        ;   Label: LAB_0057e7f7
    PUSH EBX                            ; 0057e7fd
    CALL dword ptr [EAX + 0x34]         ; 0057e7fe
    ADD ESP,0x8                         ; 0057e801
    MOV dword ptr [EBX + 0xa14],EAX     ; 0057e804
    CMP dword ptr [EBX + 0x450],0x0     ; 0057e80a
        ;   Label: LAB_0057e80a
    JL 0x0057e823                       ; 0057e811
        ;   XREF to: 0057e823 (CONDITIONAL_JUMP)  ; LAB_0057e823
    PUSH EBX                            ; 0057e813
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057e814
    CALL dword ptr [EAX + 0xf8]         ; 0057e81a
    ADD ESP,0x4                         ; 0057e820
    FLD float ptr [EBX + 0x45c]         ; 0057e823
        ;   Label: LAB_0057e823
    FLD float ptr [EBX + 0x9c8]         ; 0057e829
    MOV EDI,dword ptr [EBX + 0xa0c]     ; 0057e82f
    FLD float ptr [EBP + 0x18]          ; 0057e835
    FXCH                                ; 0057e838
    FSUB ST0,ST1                        ; 0057e83a
    FXCH ST2                            ; 0057e83c
    FSUBRP                              ; 0057e83e
    FXCH                                ; 0057e840
    FSTP float ptr [EBX + 0x9c8]        ; 0057e842
    FSTP float ptr [EBX + 0x45c]        ; 0057e848
    TEST EDI,EDI                        ; 0057e84e
    JG 0x0057e865                       ; 0057e850
        ;   XREF to: 0057e865 (CONDITIONAL_JUMP)  ; LAB_0057e865
    FLD float ptr [EBX + 0x9c8]         ; 0057e852
    FLDZ                                ; 0057e858
    FCOMPP                              ; 0057e85a
    FNSTSW AX                           ; 0057e85c
    SAHF                                ; 0057e85e
    JNC 0x0057ec06                      ; 0057e85f
        ;   XREF to: 0057ec06 (CONDITIONAL_JUMP)  ; LAB_0057ec06
    MOV ECX,dword ptr [EBX + 0xa0c]     ; 0057e865
        ;   Label: LAB_0057e865
    PUSH 0x3f8e38e4                     ; 0057e86b
    DEC ECX                             ; 0057e870
    PUSH 0x3f666666                     ; 0057e871
    MOV dword ptr [EBX + 0xa0c],ECX     ; 0057e876
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0057e87c
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [ESP + 0xf8],EAX      ; 0057e881
    FLD float ptr [ESP + 0xf8]          ; 0057e888
    ADD ESP,0x8                         ; 0057e88f
    MOV ESI,dword ptr [EBX + 0xa10]     ; 0057e892
    FSTP float ptr [ESP]                ; 0057e898
    PUSH dword ptr [ESP]                ; 0057e89b
    PUSH ESI                            ; 0057e89e
    CALL sound_sndmain.cpp_setSfxBaseFrequency_FUN_00550f50 ; 0057e89f
        ;   XREF to: 00550f50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_setSfxBaseFrequency_FUN_00550f50(uint sfx_handle, float base_frequency)
    ADD ESP,0x8                         ; 0057e8a4
    TEST EAX,EAX                        ; 0057e8a7
    JZ 0x0057ebcc                       ; 0057e8a9
        ;   XREF to: 0057ebcc (CONDITIONAL_JUMP)  ; LAB_0057ebcc
    MOV ESP,EBP                         ; 0057e8af
        ;   Label: LAB_0057e8af
    POP EBP                             ; 0057e8b1
    POP EDI                             ; 0057e8b2
    POP ESI                             ; 0057e8b3
    POP EBX                             ; 0057e8b4
    RET                                 ; 0057e8b5
    MOV dword ptr [EBX + 0x8d8],EAX     ; 0057e8b6
        ;   Label: LAB_0057e8b6
    JMP 0x0057e80a                      ; 0057e8bc
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    FLD float ptr [EBX + 0x8d8]         ; 0057e8c1
        ;   Label: caseD_1
    FSUB float ptr [EBP + 0x18]         ; 0057e8c7
    FST float ptr [EBX + 0x8d8]         ; 0057e8ca
    FLDZ                                ; 0057e8d0
    FCOMPP                              ; 0057e8d2
    FNSTSW AX                           ; 0057e8d4
    SAHF                                ; 0057e8d6
    JC 0x0057e80a                       ; 0057e8d7
        ;   XREF to: 0057e80a (CONDITIONAL_JUMP)  ; LAB_0057e80a
    MOV dword ptr [EBX + 0x8d8],0x0     ; 0057e8dd
    MOV dword ptr [EBX + 0x85c],0x2     ; 0057e8e7
    MOV dword ptr [EBX + 0x45c],0x0     ; 0057e8f1
    JMP 0x0057e80a                      ; 0057e8fb
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    LEA EAX,[EBX + 0x860]               ; 0057e900
        ;   Label: caseD_2
    MOV dword ptr [EBX + 0x450],0xff    ; 0057e906
    PUSH EAX                            ; 0057e910
    MOV EAX,[0x006141f0]                ; 0057e911 | DAT_006141f0
    MOV dword ptr [EBX + 0x454],0x0     ; 0057e916
    PUSH EAX                            ; 0057e920
    MOV dword ptr [EBX + 0x458],0x0     ; 0057e921
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0057e92b
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057e930
    TEST EAX,EAX                        ; 0057e933
    JNZ 0x0057e952                      ; 0057e935
        ;   XREF to: 0057e952 (CONDITIONAL_JUMP)  ; LAB_0057e952
    MOV dword ptr [EBX + 0x85c],0x3     ; 0057e937
    MOV EAX,dword ptr [EBX + 0x8c8]     ; 0057e941
    MOV dword ptr [EBX + 0x8d8],EAX     ; 0057e947
    JMP 0x0057e80a                      ; 0057e94d
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    PUSH dword ptr [EBP + 0x18]         ; 0057e952
        ;   Label: LAB_0057e952
    PUSH EBX                            ; 0057e955
    CALL core_turret.cpp_CTurret_updateTargeting_FUN_0057f0b0 ; 0057e956
        ;   XREF to: 0057f0b0 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updateTargeting_FUN_0057f0b0(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057e95b
    MOV dword ptr [EBX + 0x8d8],0x0     ; 0057e95e
    JMP 0x0057e80a                      ; 0057e968
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    LEA EAX,[EBX + 0x860]               ; 0057e96d
        ;   Label: caseD_3
    MOV dword ptr [EBX + 0x450],0x0     ; 0057e973
    PUSH EAX                            ; 0057e97d
    MOV ESI,dword ptr [0x006141f0]      ; 0057e97e | DAT_006141f0
    MOV dword ptr [EBX + 0x454],0xff    ; 0057e984
    PUSH ESI                            ; 0057e98e
    MOV dword ptr [EBX + 0x458],0x0     ; 0057e98f
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 0057e999
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0057e99e
    TEST EAX,EAX                        ; 0057e9a1
    JZ 0x0057e9c8                       ; 0057e9a3
        ;   XREF to: 0057e9c8 (CONDITIONAL_JUMP)  ; LAB_0057e9c8
    MOV dword ptr [EBX + 0x8d8],0x0     ; 0057e9a5
    MOV dword ptr [EBX + 0x85c],0x2     ; 0057e9af
    MOV dword ptr [EBX + 0x45c],0x0     ; 0057e9b9
    JMP 0x0057e80a                      ; 0057e9c3
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    FLD float ptr [EBX + 0x8d8]         ; 0057e9c8
        ;   Label: LAB_0057e9c8
    FSUB float ptr [EBP + 0x18]         ; 0057e9ce
    FST float ptr [EBX + 0x8d8]         ; 0057e9d1
    FLDZ                                ; 0057e9d7
    FCOMPP                              ; 0057e9d9
    FNSTSW AX                           ; 0057e9db
    SAHF                                ; 0057e9dd
    JC 0x0057ea0f                       ; 0057e9de
        ;   XREF to: 0057ea0f (CONDITIONAL_JUMP)  ; LAB_0057ea0f
    FLD float ptr [EBX + 0x8cc]         ; 0057e9e0
    MOV EDI,dword ptr [EBX + 0xa14]     ; 0057e9e6
    MOV dword ptr [EBX + 0x85c],0x4     ; 0057e9ec
    PUSH EDI                            ; 0057e9f6
    FSTP float ptr [EBX + 0x8d8]        ; 0057e9f7
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057e9fd
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0057ea02
    PUSH 0x5ed69c                       ; 0057ea05 | = "turret-ani?.wav"
    JMP 0x0057e7f7                      ; 0057ea0a
        ;   XREF to: 0057e7f7 (UNCONDITIONAL_JUMP)  ; LAB_0057e7f7
    PUSH dword ptr [EBP + 0x18]         ; 0057ea0f
        ;   Label: LAB_0057ea0f
    PUSH EBX                            ; 0057ea12
    CALL core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00 ; 0057ea13
        ;   XREF to: 0057fa00 (UNCONDITIONAL_CALL)  ; void core_turret.cpp_CTurret_updatePatrol_FUN_0057fa00(CTurret * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0057ea18
    JMP 0x0057e80a                      ; 0057ea1b
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    FLD float ptr [EBX + 0x8d8]         ; 0057ea20
        ;   Label: caseD_4
    LEA EAX,[EBX + 0x6d4]               ; 0057ea26
    FSUB float ptr [EBP + 0x18]         ; 0057ea2c
    MOV dword ptr [ESP + 0xe8],EAX      ; 0057ea2f
    FSTP float ptr [EBX + 0x8d8]        ; 0057ea36
    LEA EAX,[EBX + 0x30]                ; 0057ea3c
    FLD float ptr [EBX + 0x8d8]         ; 0057ea3f
    FLDZ                                ; 0057ea45
    MOV dword ptr [ESP + 0xec],EAX      ; 0057ea47
    FCOMPP                              ; 0057ea4e
    FNSTSW AX                           ; 0057ea50
    SAHF                                ; 0057ea52
    JC 0x0057eaaf                       ; 0057ea53
        ;   XREF to: 0057eaaf (CONDITIONAL_JUMP)  ; LAB_0057eaaf
    MOV EAX,dword ptr [ESP + 0xec]      ; 0057ea55
    MOV dword ptr [EBX + 0x85c],0x0     ; 0057ea5c
    MOV ECX,dword ptr [ESP + 0xe8]      ; 0057ea66
    MOV dword ptr [EBX + 0x8d8],0x0     ; 0057ea6d
    CMP EAX,ECX                         ; 0057ea77
    JZ 0x0057e80a                       ; 0057ea79
        ;   XREF to: 0057e80a (CONDITIONAL_JUMP)  ; LAB_0057e80a
    MOV EAX,ECX                         ; 0057ea7f
    FLD float ptr [EAX]                 ; 0057ea81
    MOV EAX,dword ptr [ESP + 0xec]      ; 0057ea83
    FSTP float ptr [EAX]                ; 0057ea8a
    MOV EAX,ECX                         ; 0057ea8c
    FLD float ptr [EAX + 0x4]           ; 0057ea8e
    MOV EAX,dword ptr [ESP + 0xec]      ; 0057ea91
    FSTP float ptr [EAX + 0x4]          ; 0057ea98
    MOV EAX,ECX                         ; 0057ea9b
    FLD float ptr [EAX + 0x8]           ; 0057ea9d
    MOV EAX,dword ptr [ESP + 0xec]      ; 0057eaa0
    FSTP float ptr [EAX + 0x8]          ; 0057eaa7
    JMP 0x0057e80a                      ; 0057eaaa
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    MOV ESI,dword ptr [ESP + 0xec]      ; 0057eaaf
        ;   Label: LAB_0057eaaf
    PUSH ESI                            ; 0057eab6
    LEA ESI,[ESP + 0x6c]                ; 0057eab7
    LEA EDI,[ESP + 0x8c]                ; 0057eabb
    CALL core_xform.cpp_eulerToQuaternion_FUN_00594380 ; 0057eac2
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_00594380(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0x6c]                ; 0057eac7
    ADD ESP,0x4                         ; 0057eacb
    MOVSD ES:EDI,ESI                    ; 0057eace
    MOVSD ES:EDI,ESI                    ; 0057eacf
    MOVSD ES:EDI,ESI                    ; 0057ead0
    MOVSD ES:EDI,ESI                    ; 0057ead1
    MOV EDI,dword ptr [ESP + 0xe8]      ; 0057ead2
    PUSH EDI                            ; 0057ead9
    LEA ESI,[ESP + 0x7c]                ; 0057eada
    CALL core_xform.cpp_eulerToQuaternion_FUN_00594380 ; 0057eade
        ;   XREF to: 00594380 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_eulerToQuaternion_FUN_00594380(CVector3f * euler_angles, CQuaternion4f * quat_out)
    LEA EDI,[ESP + 0x9c]                ; 0057eae3
    LEA ESI,[ESP + 0x7c]                ; 0057eaea
    ADD ESP,0x4                         ; 0057eaee
    MOVSD ES:EDI,ESI                    ; 0057eaf1
    MOVSD ES:EDI,ESI                    ; 0057eaf2
    MOVSD ES:EDI,ESI                    ; 0057eaf3
    MOVSD ES:EDI,ESI                    ; 0057eaf4
    FLD float ptr [EBP + 0x18]          ; 0057eaf5
    FLD float ptr [EBX + 0x8d8]         ; 0057eaf8
    FADD ST0,ST1                        ; 0057eafe
    FDIVP                               ; 0057eb00
    FMUL double ptr [0x005ed70c]        ; 0057eb02 | DAT_005ed70c
    SUB ESP,0x4                         ; 0057eb08
    LEA EAX,[ESP + 0x9c]                ; 0057eb0b
    FSTP float ptr [ESP]                ; 0057eb12
    PUSH EAX                            ; 0057eb15
    LEA EAX,[ESP + 0x90]                ; 0057eb16
    PUSH EAX                            ; 0057eb1d
    LEA ESI,[ESP + 0xb4]                ; 0057eb1e
    LEA EDI,[ESP + 0xc4]                ; 0057eb25
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 0057eb2c
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; CQuaternion4f * core_xform.cpp_slerpQuaternion_FUN_00593df0(CQuaternion4f * quat1_in, CQuaternion4f * quat2_in, float t, CQuaternion4f * quat_out)
    LEA ESI,[ESP + 0xb4]                ; 0057eb31
    ADD ESP,0xc                         ; 0057eb38
    LEA EAX,[ESP + 0xb8]                ; 0057eb3b
    MOVSD ES:EDI,ESI                    ; 0057eb42
    MOVSD ES:EDI,ESI                    ; 0057eb43
    MOVSD ES:EDI,ESI                    ; 0057eb44
    MOVSD ES:EDI,ESI                    ; 0057eb45
    PUSH EAX                            ; 0057eb46
    LEA ESI,[ESP + 0xcc]                ; 0057eb47
    LEA EDI,[ESP + 0xd8]                ; 0057eb4e
    CALL core_xform.cpp_quaternionToEulerAngles_FUN_005940b0 ; 0057eb55
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined1 core_xform.cpp_quaternionToEulerAngles_FUN_005940b0()
    LEA ESI,[ESP + 0xcc]                ; 0057eb5a
    ADD ESP,0x4                         ; 0057eb61
    LEA EAX,[ESP + 0xd4]                ; 0057eb64
    MOV EDX,dword ptr [ESP + 0xec]      ; 0057eb6b
    MOVSD ES:EDI,ESI                    ; 0057eb72
    MOVSD ES:EDI,ESI                    ; 0057eb73
    MOVSD ES:EDI,ESI                    ; 0057eb74
    CMP EAX,EDX                         ; 0057eb75
    JZ 0x0057eb96                       ; 0057eb77
        ;   XREF to: 0057eb96 (CONDITIONAL_JUMP)  ; LAB_0057eb96
    MOV EAX,dword ptr [ESP + 0xd4]      ; 0057eb79
    MOV dword ptr [EDX],EAX             ; 0057eb80
    MOV EAX,dword ptr [ESP + 0xd8]      ; 0057eb82
    MOV dword ptr [EDX + 0x4],EAX       ; 0057eb89
    MOV EAX,dword ptr [ESP + 0xdc]      ; 0057eb8c
    MOV dword ptr [EDX + 0x8],EAX       ; 0057eb93
    PUSH EBX                            ; 0057eb96
        ;   Label: LAB_0057eb96
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0057eb97
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0057eb9c
    JMP 0x0057e80a                      ; 0057eb9f
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    MOV EDX,0x5ed6ac                    ; 0057eba4
        ;   Label: default
    MOV ECX,0x15a                       ; 0057eba9
    PUSH 0x5ed6bf                       ; 0057ebae
    MOV dword ptr [0x01d046a0],EDX      ; 0057ebb3 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0057ebb9 | DAT_01d046a4
    CALL core_main.c_displayErrorAndQuit_FUN_004e4500 ; 0057ebbf
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_004e4500(char * format)
    ADD ESP,0x4                         ; 0057ebc4
    JMP 0x0057e80a                      ; 0057ebc7
        ;   XREF to: 0057e80a (UNCONDITIONAL_JUMP)  ; LAB_0057e80a
    FLD float ptr [ESP]                 ; 0057ebcc
        ;   Label: LAB_0057ebcc
    SUB ESP,0x8                         ; 0057ebcf
    FSTP double ptr [ESP]               ; 0057ebd2
    PUSH 0x5ed6e0                       ; 0057ebd5 | = "turret-loop.wav * %f"
    LEA EAX,[ESP + 0x10]                ; 0057ebda
    PUSH EAX                            ; 0057ebde
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 0057ebdf
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x10                        ; 0057ebe4
    LEA EAX,[ESP + 0x4]                 ; 0057ebe7
    PUSH EAX                            ; 0057ebeb
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 0057ebec
    PUSH EBX                            ; 0057ebf2
    CALL dword ptr [EDX + 0x38]         ; 0057ebf3
    ADD ESP,0x8                         ; 0057ebf6
    MOV dword ptr [EBX + 0xa10],EAX     ; 0057ebf9
    MOV ESP,EBP                         ; 0057ebff
    POP EBP                             ; 0057ec01
    POP EDI                             ; 0057ec02
    POP ESI                             ; 0057ec03
    POP EBX                             ; 0057ec04
    RET                                 ; 0057ec05
    PUSH 0x2                            ; 0057ec06
        ;   Label: LAB_0057ec06
    MOV EAX,dword ptr [EBX + 0xa10]     ; 0057ec08
    PUSH EAX                            ; 0057ec0e
    CALL sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30 ; 0057ec0f
        ;   XREF to: 00550c30 (UNCONDITIONAL_CALL)  ; double sound_sndmain.cpp_getSfxPlaybackPosition_FUN_00550c30(uint sfx_handle, uint output_format)
    MOV dword ptr [ESP + 0xe8],EAX      ; 0057ec14
    MOV dword ptr [ESP + 0xec],EDX      ; 0057ec1b
    FLD double ptr [ESP + 0xe8]         ; 0057ec22
    FLDZ                                ; 0057ec29
    ADD ESP,0x8                         ; 0057ec2b
    FCOMPP                              ; 0057ec2e
    FNSTSW AX                           ; 0057ec30
    SAHF                                ; 0057ec32
    JA 0x0057e8af                       ; 0057ec33
        ;   XREF to: 0057e8af (CONDITIONAL_JUMP)  ; LAB_0057e8af
    MOV EDX,dword ptr [EBX + 0xa10]     ; 0057ec39
    PUSH EDX                            ; 0057ec3f
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057ec40
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0057ec45
    PUSH 0x5ed6f5                       ; 0057ec48 | = "turret-tail.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0057ec4d
    PUSH EBX                            ; 0057ec53
    CALL dword ptr [EAX + 0x34]         ; 0057ec54
    ADD ESP,0x8                         ; 0057ec57
    MOV ESP,EBP                         ; 0057ec5a
    POP EBP                             ; 0057ec5c
    POP EDI                             ; 0057ec5d
    POP ESI                             ; 0057ec5e
    POP EBX                             ; 0057ec5f
    RET                                 ; 0057ec60

