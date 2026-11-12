; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_larva_cpp_CLarva_process_FUN_004e0670(CLarva *this_ptr,float delta_time)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_larva_blow1_wav_005dbdae
;   TerminatedCString s_s_confused_while_walking_005dbdbe
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005dbde8
;   TerminatedCString s_slime_wav_f_f_005dbe09
;   undefined4 DAT_005dbe1e
;   undefined4 DAT_005dbe26
;   undefined4 DAT_005dbe2e
;   undefined4 DAT_005dbe36
;   undefined4 DAT_005dbe3e
;   undefined4 DAT_005dbe46
;   undefined4 DAT_005dbe4e
;   undefined4 DAT_005f92bc
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_00614d30
;   CGore* g_CGorePtr = 01cb8284
;   ... and 4 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970
;   core_fire.cpp_CFireEffect_createFireball_FUN_0049d500
;   core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e0670
        ;   Label: core_larva.cpp_CLarva_process_FUN_004e0670
    PUSH ESI                            ; 004e0671
    PUSH EDI                            ; 004e0672
    PUSH EBP                            ; 004e0673
    MOV EBP,ESP                         ; 004e0674
    SUB ESP,0x274                       ; 004e0676
    SUB EBP,0x7a                        ; 004e067c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004e067f
    PUSH dword ptr [EBP + 0x92]         ; 004e0685
    PUSH EBX                            ; 004e068b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004e068c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e0691
    TEST EAX,EAX                        ; 004e0694
    JZ 0x004e0927                       ; 004e0696
        ;   XREF to: 004e0927 (CONDITIONAL_JUMP)  ; LAB_004e0927
    LEA EAX,[EBX + 0x2508]              ; 004e069c
    MOV dword ptr [EAX + 0x8],0x0       ; 004e06a2
    FLD float ptr [EBP + 0x92]          ; 004e06a9
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e06af
    MOV dword ptr [EAX + 0x4],EDX       ; 004e06b2
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e06b5
    MOV dword ptr [EAX],EDX             ; 004e06b8
    LEA EAX,[EBX + 0x20]                ; 004e06ba
    FMUL float ptr [EBX + 0x10a60]      ; 004e06bd
    MOV dword ptr [EBP + 0x66],EAX      ; 004e06c3
    LEA EAX,[EBX + 0x2b4]               ; 004e06c6
    FSTP float ptr [EBP + 0x3a]         ; 004e06cc
    MOV dword ptr [EBP + 0x5a],EAX      ; 004e06cf
    FLD float ptr [EBP + 0x3a]          ; 004e06d2
        ;   Label: LAB_004e06d2
    FLDZ                                ; 004e06d5
    FCOMPP                              ; 004e06d7
    FNSTSW AX                           ; 004e06d9
    SAHF                                ; 004e06db
    JC 0x004e0b4d                       ; 004e06dc
        ;   XREF to: 004e0b4d (CONDITIONAL_JUMP)  ; LAB_004e0b4d
    FLD float ptr [EBP + 0x92]          ; 004e06e2
    FMUL float ptr [EBX + 0x10a60]      ; 004e06e8
    SUB ESP,0x4                         ; 004e06ee
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004e06f1
    MOV dword ptr [EBX + 0x2594],EAX    ; 004e06f7
    FSTP float ptr [ESP]                ; 004e06fd
    PUSH EBX                            ; 004e0700
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004e0701
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004e0706
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004e0709
    PUSH EDX                            ; 004e070c
    CALL core_motion.cpp_FUN_005035c0   ; 004e070d
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004e0712
    PUSH dword ptr [EBP + 0x92]         ; 004e0715
    MOV ESI,dword ptr [EAX + 0x24]      ; 004e071b
    PUSH EBX                            ; 004e071e
    MOV dword ptr [EBP + 0x4e],ESI      ; 004e071f
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 004e0722
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e0727
    TEST EAX,EAX                        ; 004e072a
    JZ 0x004e0fb9                       ; 004e072c
        ;   XREF to: 004e0fb9 (CONDITIONAL_JUMP)  ; LAB_004e0fb9
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004e0732
    CMP EAX,0x2                         ; 004e0738
    JNC 0x004e0b92                      ; 004e073b
        ;   XREF to: 004e0b92 (CONDITIONAL_JUMP)  ; LAB_004e0b92
    CMP EAX,0x1                         ; 004e0741
    JNZ 0x004e0b9d                      ; 004e0744
        ;   XREF to: 004e0b9d (CONDITIONAL_JUMP)  ; LAB_004e0b9d
    PUSH 0x1                            ; 004e074a
        ;   Label: LAB_004e074a
    PUSH 0x1                            ; 004e074c
    LEA EAX,[EBX + 0x2b4]               ; 004e074e
        ;   Label: LAB_004e074e
    PUSH EAX                            ; 004e0754
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0755
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e075a
        ;   Label: LAB_004e075a
    LEA EAX,[EBX + 0x2508]              ; 004e075d
    MOV dword ptr [EAX + 0x8],0x0       ; 004e0763
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e076a
    MOV dword ptr [EAX + 0x4],EDX       ; 004e076d
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e0770
    MOV dword ptr [EAX],EDX             ; 004e0773
    FLD float ptr [EBX + 0x10a74]       ; 004e0775
        ;   Label: LAB_004e0775
    FLDZ                                ; 004e077b
    FCOMPP                              ; 004e077d
    FNSTSW AX                           ; 004e077f
    SAHF                                ; 004e0781
    JNC 0x004e0796                      ; 004e0782
        ;   XREF to: 004e0796 (CONDITIONAL_JUMP)  ; LAB_004e0796
    FLD float ptr [EBX + 0x10a74]       ; 004e0784
    FSUB float ptr [EBP + 0x92]         ; 004e078a
    FSTP float ptr [EBX + 0x10a74]      ; 004e0790
    CMP dword ptr [EBP + 0x4e],0x1      ; 004e0796
        ;   Label: LAB_004e0796
    JNZ 0x004e1066                      ; 004e079a
        ;   XREF to: 004e1066 (CONDITIONAL_JUMP)  ; LAB_004e1066
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 004e07a0
    PUSH EDX                            ; 004e07a6
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004e07a7
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004e07ac
    TEST EAX,EAX                        ; 004e07af
    JZ 0x004e0fdf                       ; 004e07b1
        ;   XREF to: 004e0fdf (CONDITIONAL_JUMP)  ; LAB_004e0fdf
    PUSH EBX                            ; 004e07b7
        ;   Label: LAB_004e07b7
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 004e07b8
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e07bd
    TEST EAX,EAX                        ; 004e07c0
    JZ 0x004e0900                       ; 004e07c2
        ;   XREF to: 004e0900 (CONDITIONAL_JUMP)  ; LAB_004e0900
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004e07c8
    TEST ECX,ECX                        ; 004e07ce
    JZ 0x004e07fc                       ; 004e07d0
        ;   XREF to: 004e07fc (CONDITIONAL_JUMP)  ; LAB_004e07fc
    PUSH ECX                            ; 004e07d2
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 004e07d3
    CALL dword ptr [EDX + 0xfc]         ; 004e07d9
    ADD ESP,0x4                         ; 004e07df
    CMP EAX,EBX                         ; 004e07e2
    JNZ 0x004e07fc                      ; 004e07e4
        ;   XREF to: 004e07fc (CONDITIONAL_JUMP)  ; LAB_004e07fc
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004e07e6
    PUSH ESI                            ; 004e07ec
    MOV EDI,dword ptr [0x0061b5a8]      ; 004e07ed | g_CDemonSetPtr
    PUSH EDI                            ; 004e07f3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004e07f4
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004e07f9
    PUSH dword ptr [EBP + 0x92]         ; 004e07fc
        ;   Label: LAB_004e07fc
    PUSH EBX                            ; 004e0802
    LEA ESI,[EBX + 0x2588]              ; 004e0803
    CALL core_charactr.cpp_FUN_00423a10 ; 004e0809
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    FLD float ptr [ESI]                 ; 004e080e
    FMUL float ptr [EBP + 0x92]         ; 004e0810
    FLD float ptr [ESI + 0x4]           ; 004e0816
    FMUL float ptr [EBP + 0x92]         ; 004e0819
    FLD float ptr [ESI + 0x8]           ; 004e081f
    FMUL float ptr [EBP + 0x92]         ; 004e0822
    LEA EDI,[EBP + 0xffffff22]          ; 004e0828
    LEA ESI,[EBP + 0xfffffefe]          ; 004e082e
    FXCH ST2                            ; 004e0834
    FSTP float ptr [EBP + 0xfffffefe]   ; 004e0836
    FSTP float ptr [EBP + 0xffffff02]   ; 004e083c
    FSTP float ptr [EBP + 0xffffff06]   ; 004e0842
    MOVSD ES:EDI,ESI                    ; 004e0848
    MOVSD ES:EDI,ESI                    ; 004e0849
    MOVSD ES:EDI,ESI                    ; 004e084a
    LEA EDX,[EBX + 0x257c]              ; 004e084b
    FLD float ptr [EBP + 0xffffff22]    ; 004e0851
    FLD float ptr [EBP + 0xffffff26]    ; 004e0857
    FLD float ptr [EBP + 0xffffff2a]    ; 004e085d
    LEA EDI,[EBP + 0xffffff16]          ; 004e0863
    LEA ESI,[EBP + -0x6]                ; 004e0869
    FXCH ST2                            ; 004e086c
    FADD float ptr [EDX]                ; 004e086e
    FXCH                                ; 004e0870
    FADD float ptr [EDX + 0x4]          ; 004e0872
    FXCH ST2                            ; 004e0875
    FADD float ptr [EDX + 0x8]          ; 004e0877
    FXCH                                ; 004e087a
    FSTP float ptr [EBP + -0x6]         ; 004e087c
    FXCH                                ; 004e087f
    FSTP float ptr [EBP + -0x2]         ; 004e0881
    FSTP float ptr [EBP + 0x2]          ; 004e0884
    MOVSD ES:EDI,ESI                    ; 004e0887
    MOVSD ES:EDI,ESI                    ; 004e0888
    MOVSD ES:EDI,ESI                    ; 004e0889
    LEA EAX,[EBX + 0x2508]              ; 004e088a
    FLD float ptr [EBP + 0xffffff16]    ; 004e0890
    FLD float ptr [EBP + 0xffffff1a]    ; 004e0896
    FLD float ptr [EBP + 0xffffff1e]    ; 004e089c
    LEA EDI,[EBP + 0xffffff2e]          ; 004e08a2
    LEA ESI,[EBP + -0x36]               ; 004e08a8
    FXCH ST2                            ; 004e08ab
    FADD float ptr [EAX]                ; 004e08ad
    FXCH                                ; 004e08af
    FADD float ptr [EAX + 0x4]          ; 004e08b1
    FXCH ST2                            ; 004e08b4
    FADD float ptr [EAX + 0x8]          ; 004e08b6
    FXCH                                ; 004e08b9
    FSTP float ptr [EBP + -0x36]        ; 004e08bb
    FXCH                                ; 004e08be
    FSTP float ptr [EBP + -0x32]        ; 004e08c0
    FSTP float ptr [EBP + -0x2e]        ; 004e08c3
    MOVSD ES:EDI,ESI                    ; 004e08c6
    MOVSD ES:EDI,ESI                    ; 004e08c7
    MOVSD ES:EDI,ESI                    ; 004e08c8
    MOV dword ptr [EDX + 0x8],0x0       ; 004e08c9
    MOV ECX,dword ptr [EDX + 0x8]       ; 004e08d0
    MOV dword ptr [EDX + 0x4],ECX       ; 004e08d3
    MOV ECX,dword ptr [EDX + 0x4]       ; 004e08d6
    MOV dword ptr [EDX],ECX             ; 004e08d9
    MOV dword ptr [EAX + 0x8],0x0       ; 004e08db
    ADD ESP,0x8                         ; 004e08e2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e08e5
    MOV dword ptr [EAX + 0x4],EDX       ; 004e08e8
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e08eb
    MOV dword ptr [EAX],EDX             ; 004e08ee
    LEA EAX,[EBP + 0xffffff2e]          ; 004e08f0
    PUSH EAX                            ; 004e08f6
    PUSH EBX                            ; 004e08f7
    CALL core_charactr.cpp_FUN_00423a60 ; 004e08f8
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004e08fd
    PUSH EBX                            ; 004e0900
        ;   Label: LAB_004e0900
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004e0901
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004e0906
    LEA EAX,[EBX + 0x2b4]               ; 004e0909
    PUSH EAX                            ; 004e090f
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004e0910
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004e0915
    PUSH dword ptr [EBP + 0x92]         ; 004e0918
    PUSH EBX                            ; 004e091e
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004e091f
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e0924
    LEA ESP,[EBP + 0x7a]                ; 004e0927
        ;   Label: LAB_004e0927
    POP EBP                             ; 004e092a
    POP EDI                             ; 004e092b
    POP ESI                             ; 004e092c
    POP EBX                             ; 004e092d
    RET                                 ; 004e092e
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004e092f
        ;   Label: LAB_004e092f
    TEST EDX,EDX                        ; 004e0935
    JZ 0x004e06d2                       ; 004e0937
        ;   XREF to: 004e06d2 (CONDITIONAL_JUMP)  ; LAB_004e06d2
    MOV EAX,EDX                         ; 004e093d
    LEA EDI,[EBP + -0x4e]               ; 004e093f
    LEA ESI,[EBP + 0x6]                 ; 004e0942
    FLD float ptr [EAX + 0x20]          ; 004e0945
    FLD float ptr [EAX + 0x24]          ; 004e0948
    MOV EDX,dword ptr [EBP + 0x66]      ; 004e094b
    FLD float ptr [EAX + 0x28]          ; 004e094e
    FXCH ST2                            ; 004e0951
    FSUB float ptr [EDX]                ; 004e0953
    FXCH                                ; 004e0955
    FSUB float ptr [EDX + 0x4]          ; 004e0957
    FXCH ST2                            ; 004e095a
    FSUB float ptr [EDX + 0x8]          ; 004e095c
    FXCH                                ; 004e095f
    FSTP float ptr [EBP + 0x6]          ; 004e0961
    FXCH                                ; 004e0964
    FSTP float ptr [EBP + 0xa]          ; 004e0966
    FSTP float ptr [EBP + 0xe]          ; 004e0969
    MOVSD ES:EDI,ESI                    ; 004e096c
    MOVSD ES:EDI,ESI                    ; 004e096d
    MOVSD ES:EDI,ESI                    ; 004e096e
    LEA EAX,[EBP + -0x72]               ; 004e096f
    LEA ESI,[EBP + -0x4e]               ; 004e0972
    CMP EAX,ESI                         ; 004e0975
    JZ 0x004e098b                       ; 004e0977
        ;   XREF to: 004e098b (CONDITIONAL_JUMP)  ; LAB_004e098b
    MOV EAX,dword ptr [EBP + -0x4e]     ; 004e0979
    MOV dword ptr [EBP + -0x72],EAX     ; 004e097c
    MOV EAX,dword ptr [EBP + -0x4a]     ; 004e097f
    MOV dword ptr [EBP + -0x6e],EAX     ; 004e0982
    MOV EAX,dword ptr [EBP + -0x46]     ; 004e0985
    MOV dword ptr [EBP + -0x6a],EAX     ; 004e0988
    FLD float ptr [EBP + -0x6e]         ; 004e098b
        ;   Label: LAB_004e098b
    PUSH 0x40000000                     ; 004e098e
    FADD float ptr [0x005dbe3e]         ; 004e0993 | DAT_005dbe3e
    PUSH 0xc0000000                     ; 004e0999
    FSTP float ptr [EBP + -0x6e]        ; 004e099e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004e09a1
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e09a6
    ADD ESP,0x8                         ; 004e09a9
    FLD float ptr [EBP + 0x76]          ; 004e09ac
    PUSH 0x40000000                     ; 004e09af
    FADD float ptr [EBP + -0x72]        ; 004e09b4
    PUSH 0xc0000000                     ; 004e09b7
    FSTP float ptr [EBP + -0x72]        ; 004e09bc
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004e09bf
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    FLD double ptr [0x005dbe46]         ; 004e09c4 | DAT_005dbe46
    FLD ST0                             ; 004e09ca
    MOV dword ptr [EBP + 0x76],EAX      ; 004e09cc
    FSIN                                ; 004e09cf
    FLD double ptr [0x005dbe4e]         ; 004e09d1 | DAT_005dbe4e
    FPTAN                               ; 004e09d7
    FSTP ST0                            ; 004e09d9
    FLD float ptr [EBP + 0x76]          ; 004e09db
    FADD float ptr [EBP + -0x6a]        ; 004e09de
    FST float ptr [EBP + -0x6a]         ; 004e09e1
    FLD float ptr [EBP + -0x72]         ; 004e09e4
    CALL crt_math.c_atan2_FUN_005b9989  ; 004e09e7
        ;   XREF to: 005b9989 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_atan2_FUN_005b9989()
    FLD float ptr [EBP + -0x6a]         ; 004e09ec
    FMUL ST0                            ; 004e09ef
    FLD float ptr [EBP + -0x72]         ; 004e09f1
    FMUL ST0                            ; 004e09f4
    FADDP                               ; 004e09f6
    FSQRT                               ; 004e09f8
    FXCH ST4                            ; 004e09fa
    FCOS                                ; 004e09fc
    FLD ST1                             ; 004e09fe
    FSIN                                ; 004e0a00
    FXCH ST2                            ; 004e0a02
    FCOS                                ; 004e0a04
    FXCH ST5                            ; 004e0a06
    FSTP double ptr [EBP + 0x26]        ; 004e0a08
    FXCH ST2                            ; 004e0a0b
    FMUL double ptr [EBP + 0x26]        ; 004e0a0d
    FSUB float ptr [EBP + -0x6e]        ; 004e0a10
    FLD ST2                             ; 004e0a13
    FMUL float ptr [0x005dbe3e]         ; 004e0a15 | DAT_005dbe3e
    FLD double ptr [EBP + 0x26]         ; 004e0a1b
    FMUL double ptr [0x005dbe36]        ; 004e0a1e | DAT_005dbe36
    FXCH                                ; 004e0a24
    FMUL ST4                            ; 004e0a26
    FXCH                                ; 004e0a28
    FMUL double ptr [EBP + 0x26]        ; 004e0a2a
    FXCH                                ; 004e0a2d
    FMULP ST2                           ; 004e0a2f
    FXCH ST2                            ; 004e0a31
    FMUL ST3                            ; 004e0a33
    ADD ESP,0x8                         ; 004e0a35
    FXCH ST5                            ; 004e0a38
    FMULP ST3                           ; 004e0a3a
    FXCH                                ; 004e0a3c
    FSTP float ptr [EBP + 0x5e]         ; 004e0a3e
    FXCH ST2                            ; 004e0a41
    FCHS                                ; 004e0a43
    FSTP float ptr [EBP + 0xffffff3e]   ; 004e0a45
    FXCH                                ; 004e0a4b
    FST float ptr [EBP + 0x62]          ; 004e0a4d
    FLDZ                                ; 004e0a50
    FXCH ST3                            ; 004e0a52
    FSTP float ptr [EBP + 0xffffff3a]   ; 004e0a54
    FXCH                                ; 004e0a5a
    FSTP float ptr [EBP + 0xffffff42]   ; 004e0a5c
    FXCH                                ; 004e0a62
    FCOMPP                              ; 004e0a64
    FNSTSW AX                           ; 004e0a66
    SAHF                                ; 004e0a68
    JNC 0x004e06d2                      ; 004e0a69
        ;   XREF to: 004e06d2 (CONDITIONAL_JUMP)  ; LAB_004e06d2
    FLD float ptr [EBP + 0x5e]          ; 004e0a6f
    FDIV float ptr [EBP + 0x62]         ; 004e0a72
    FSQRT                               ; 004e0a75
    FLD float ptr [EBP + 0xffffff3a]    ; 004e0a77
    FXCH                                ; 004e0a7d
    FSTP float ptr [EBP + 0x6a]         ; 004e0a7f
    FMUL float ptr [EBP + 0x6a]         ; 004e0a82
    FLD float ptr [EBP + 0xffffff3e]    ; 004e0a85
    FMUL float ptr [EBP + 0x6a]         ; 004e0a8b
    FLD float ptr [EBP + 0xffffff42]    ; 004e0a8e
    FMUL float ptr [EBP + 0x6a]         ; 004e0a94
    LEA EDI,[EBP + -0x2a]               ; 004e0a97
    LEA ESI,[EBP + 0xffffff76]          ; 004e0a9a
    FXCH ST2                            ; 004e0aa0
    FSTP float ptr [EBP + 0xffffff76]   ; 004e0aa2
    FSTP float ptr [EBP + 0xffffff7a]   ; 004e0aa8
    FSTP float ptr [EBP + 0xffffff7e]   ; 004e0aae
    MOVSD ES:EDI,ESI                    ; 004e0ab4
    MOVSD ES:EDI,ESI                    ; 004e0ab5
    MOVSD ES:EDI,ESI                    ; 004e0ab6
    LEA EAX,[EBP + 0xffffff3a]          ; 004e0ab7
    LEA ESI,[EBP + -0x2a]               ; 004e0abd
    CMP EAX,ESI                         ; 004e0ac0
    JZ 0x004e0adf                       ; 004e0ac2
        ;   XREF to: 004e0adf (CONDITIONAL_JUMP)  ; LAB_004e0adf
    MOV EAX,dword ptr [EBP + -0x2a]     ; 004e0ac4
    MOV dword ptr [EBP + 0xffffff3a],EAX ; 004e0ac7
    MOV EAX,dword ptr [EBP + -0x26]     ; 004e0acd
    MOV dword ptr [EBP + 0xffffff3e],EAX ; 004e0ad0
    MOV EAX,dword ptr [EBP + -0x22]     ; 004e0ad6
    MOV dword ptr [EBP + 0xffffff42],EAX ; 004e0ad9
    MOV ESI,0x3f000000                  ; 004e0adf
        ;   Label: LAB_004e0adf
    MOV EDI,0x3f800000                  ; 004e0ae4
    LEA EAX,[EBP + -0x1e]               ; 004e0ae9
    XOR ECX,ECX                         ; 004e0aec
    PUSH EAX                            ; 004e0aee
    MOV dword ptr [EBP + -0x1e],ECX     ; 004e0aef
    MOV dword ptr [EBP + -0x1a],ESI     ; 004e0af2
    PUSH EBX                            ; 004e0af5
    LEA ESI,[EBP + 0xffffff46]          ; 004e0af6
    MOV dword ptr [EBP + -0x16],EDI     ; 004e0afc
    CALL core_actor.cpp_FUN_00408d70    ; 004e0aff
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004e0b04
    PUSH 0x0                            ; 004e0b07
    PUSH 0x2                            ; 004e0b09
    LEA EAX,[EBP + 0xffffff3a]          ; 004e0b0b
    PUSH EAX                            ; 004e0b11
    LEA EAX,[EBP + 0xffffff6a]          ; 004e0b12
    LEA EDI,[EBP + 0xffffff6a]          ; 004e0b18
    PUSH EAX                            ; 004e0b1e
    MOV EAX,[0x00614d30]                ; 004e0b1f | DAT_00614d30
    LEA ESI,[EBP + 0xffffff46]          ; 004e0b24
    PUSH EAX                            ; 004e0b2a
    MOVSD ES:EDI,ESI                    ; 004e0b2b
    MOVSD ES:EDI,ESI                    ; 004e0b2c
    MOVSD ES:EDI,ESI                    ; 004e0b2d
    CALL core_fire.cpp_CFireEffect_createFireball_FUN_0049d500 ; 004e0b2e
        ;   XREF to: 0049d500 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFireball_FUN_0049d500(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int lighting_active, ...)
    ADD ESP,0x14                        ; 004e0b33
    PUSH 0x5dbdae                       ; 004e0b36 | = "larva-blow1.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e0b3b
    PUSH EBX                            ; 004e0b41
    CALL dword ptr [EAX + 0x34]         ; 004e0b42
    ADD ESP,0x8                         ; 004e0b45
    JMP 0x004e06d2                      ; 004e0b48
        ;   XREF to: 004e06d2 (UNCONDITIONAL_JUMP)  ; LAB_004e06d2
    LEA EAX,[EBP + 0x3a]                ; 004e0b4d
        ;   Label: LAB_004e0b4d
    PUSH EAX                            ; 004e0b50
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004e0b51
    PUSH EAX                            ; 004e0b54
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004e0b55
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004e0b5a
    CMP EAX,0x64                        ; 004e0b5d
    JZ 0x004e092f                       ; 004e0b60
        ;   XREF to: 004e092f (CONDITIONAL_JUMP)  ; LAB_004e092f
    JMP 0x004e06d2                      ; 004e0b66
        ;   XREF to: 004e06d2 (UNCONDITIONAL_JUMP)  ; LAB_004e06d2
    PUSH 0x1                            ; 004e0b6b
        ;   Label: LAB_004e0b6b
    PUSH 0x0                            ; 004e0b6d
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004e0b6f
    PUSH ECX                            ; 004e0b72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0b73
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0b78
    PUSH EBX                            ; 004e0b7b
    PUSH 0x5dbdbe                       ; 004e0b7c | = "%s confused while walking to scriptDe..."
    MOV ESI,dword ptr [0x00609ed0]      ; 004e0b81 | g_CConsolePtr
    PUSH ESI                            ; 004e0b87 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004e0b88
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x004e075a                      ; 004e0b8d
        ;   XREF to: 004e075a (UNCONDITIONAL_JUMP)  ; LAB_004e075a
    JBE 0x004e074a                      ; 004e0b92
        ;   XREF to: 004e074a (CONDITIONAL_JUMP)  ; LAB_004e074a
        ;   Label: LAB_004e0b92
    CMP EAX,0x3                         ; 004e0b98
    JZ 0x004e0b6b                       ; 004e0b9b
        ;   XREF to: 004e0b6b (CONDITIONAL_JUMP)  ; LAB_004e0b6b
    PUSH 0x1                            ; 004e0b9d
        ;   Label: LAB_004e0b9d
    PUSH 0x0                            ; 004e0b9f
    JMP 0x004e074e                      ; 004e0ba1
        ;   XREF to: 004e074e (UNCONDITIONAL_JUMP)  ; LAB_004e074e
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004e0ba6
        ;   Label: LAB_004e0ba6
    JNZ 0x004e0775                      ; 004e0bad
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    CMP dword ptr [EBX + 0xdc],0x0      ; 004e0bb3
    JNZ 0x004e0775                      ; 004e0bba
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH EAX                            ; 004e0bc0
    MOV EDI,dword ptr [EBP + 0x5a]      ; 004e0bc1
    PUSH EDI                            ; 004e0bc4
    LEA ESI,[EBP + 0xfffffeda]          ; 004e0bc5
    CALL core_skeleton.cpp_FUN_005469a0 ; 004e0bcb
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    LEA EDI,[EBP + -0x5a]               ; 004e0bd0
    ADD ESP,0x8                         ; 004e0bd3
    LEA EAX,[EBP + -0x5a]               ; 004e0bd6
    LEA ESI,[EBP + 0xfffffeda]          ; 004e0bd9
    PUSH EAX                            ; 004e0bdf
    MOVSD ES:EDI,ESI                    ; 004e0be0
    MOVSD ES:EDI,ESI                    ; 004e0be1
    MOVSD ES:EDI,ESI                    ; 004e0be2
    PUSH EBX                            ; 004e0be3
    LEA ESI,[EBP + 0xfffffece]          ; 004e0be4
    CALL core_actor.cpp_FUN_00408d70    ; 004e0bea
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004e0bef
    PUSH 0x1                            ; 004e0bf2
    LEA EAX,[EBP + 0xffffff5e]          ; 004e0bf4
    LEA EDI,[EBP + 0xffffff5e]          ; 004e0bfa
    PUSH EAX                            ; 004e0c00
    MOV EAX,[0x006167e0]                ; 004e0c01 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffece]          ; 004e0c06
    PUSH EAX                            ; 004e0c0c
    MOVSD ES:EDI,ESI                    ; 004e0c0d
    MOVSD ES:EDI,ESI                    ; 004e0c0e
    MOVSD ES:EDI,ESI                    ; 004e0c0f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 004e0c10
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004e0c15
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004e0c18
    JMP 0x004e0775                      ; 004e0c22
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH dword ptr [EBP + 0x92]         ; 004e0c27
        ;   Label: LAB_004e0c27
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e0c2d
    PUSH EBX                            ; 004e0c33
    CALL dword ptr [EAX + 0x150]        ; 004e0c34
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004e0c3a
    ADD ESP,0x8                         ; 004e0c40
    TEST ESI,ESI                        ; 004e0c43
    JNZ 0x004e0c73                      ; 004e0c45
        ;   XREF to: 004e0c73 (CONDITIONAL_JUMP)  ; LAB_004e0c73
    PUSH dword ptr [EBP + 0x92]         ; 004e0c47
    PUSH EBX                            ; 004e0c4d
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004e0c4e
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e0c53
    TEST EAX,EAX                        ; 004e0c56
    JZ 0x004e0775                       ; 004e0c58
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH 0x1                            ; 004e0c5e
    PUSH 0x1                            ; 004e0c60
    MOV EDX,dword ptr [EBP + 0x5a]      ; 004e0c62
    PUSH EDX                            ; 004e0c65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0c66
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0c6b
    JMP 0x004e0775                      ; 004e0c6e
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    MOV EAX,ESI                         ; 004e0c73
        ;   Label: LAB_004e0c73
    MOV EDX,dword ptr [EBP + 0x66]      ; 004e0c75
    LEA EDI,[EBP + -0x7e]               ; 004e0c78
    FLD float ptr [EAX + 0x20]          ; 004e0c7b
    FLD float ptr [EAX + 0x24]          ; 004e0c7e
    FLD float ptr [EAX + 0x28]          ; 004e0c81
    LEA ESI,[EBP + 0xffffff52]          ; 004e0c84
    FXCH ST2                            ; 004e0c8a
    FSUB float ptr [EDX]                ; 004e0c8c
    FXCH                                ; 004e0c8e
    FSUB float ptr [EDX + 0x4]          ; 004e0c90
    FXCH ST2                            ; 004e0c93
    FSUB float ptr [EDX + 0x8]          ; 004e0c95
    FXCH                                ; 004e0c98
    FSTP float ptr [EBP + 0xffffff52]   ; 004e0c9a
    FXCH                                ; 004e0ca0
    FSTP float ptr [EBP + 0xffffff56]   ; 004e0ca2
    FSTP float ptr [EBP + 0xffffff5a]   ; 004e0ca8
    MOVSD ES:EDI,ESI                    ; 004e0cae
    MOVSD ES:EDI,ESI                    ; 004e0caf
    MOVSD ES:EDI,ESI                    ; 004e0cb0
    FLD float ptr [EBP + -0x7a]         ; 004e0cb1
    FMUL ST0                            ; 004e0cb4
    FLD float ptr [EBP + -0x7e]         ; 004e0cb6
    FMUL ST0                            ; 004e0cb9
    FADDP                               ; 004e0cbb
    FLD float ptr [EBP + -0x76]         ; 004e0cbd
    FMUL ST0                            ; 004e0cc0
    FADDP                               ; 004e0cc2
    FSTP float ptr [EBP + 0x6e]         ; 004e0cc4
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004e0cc7
    MOV EDI,dword ptr [0x01caf5b4]      ; 004e0cca | DAT_01caf5b4
    SAR EAX,0x1                         ; 004e0cd0
    ADD EAX,EDI                         ; 004e0cd2
    MOV dword ptr [EBP + 0x52],EAX      ; 004e0cd4
    LEA EAX,[EBP + -0x7e]               ; 004e0cd7
    PUSH EAX                            ; 004e0cda
    LEA ESI,[EBP + -0x42]               ; 004e0cdb
    LEA EDI,[EBP + 0xffffff0a]          ; 004e0cde
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004e0ce4
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + -0x42]               ; 004e0ce9
    MOVSD ES:EDI,ESI                    ; 004e0cec
    MOVSD ES:EDI,ESI                    ; 004e0ced
    MOVSD ES:EDI,ESI                    ; 004e0cee
    ADD ESP,0x4                         ; 004e0cef
    FLD float ptr [EBP + 0xffffff0e]    ; 004e0cf2
    FSUB float ptr [EBX + 0x34]         ; 004e0cf8
    SUB ESP,0x4                         ; 004e0cfb
    FSTP float ptr [ESP]                ; 004e0cfe
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004e0d01
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e0d06
    FLD float ptr [EBP + 0x76]          ; 004e0d09
    FABS                                ; 004e0d0c
    ADD ESP,0x4                         ; 004e0d0e
    FCOMP double ptr [0x005dbe1e]       ; 004e0d11 | DAT_005dbe1e
    FNSTSW AX                           ; 004e0d17
    SAHF                                ; 004e0d19
    JNC 0x004e0d70                      ; 004e0d1a
        ;   XREF to: 004e0d70 (CONDITIONAL_JUMP)  ; LAB_004e0d70
    FLD float ptr [EBP + 0x52]          ; 004e0d1c
    FCOMP double ptr [0x005dbe26]       ; 004e0d1f | DAT_005dbe26
    FNSTSW AX                           ; 004e0d25
    SAHF                                ; 004e0d27
    JA 0x004e0d70                       ; 004e0d28
        ;   XREF to: 004e0d70 (CONDITIONAL_JUMP)  ; LAB_004e0d70
    FLD float ptr [EBX + 0x10a74]       ; 004e0d2a
    FLDZ                                ; 004e0d30
    FCOMPP                              ; 004e0d32
    FNSTSW AX                           ; 004e0d34
    SAHF                                ; 004e0d36
    JC 0x004e0775                       ; 004e0d37
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH 0x1                            ; 004e0d3d
    PUSH 0x2                            ; 004e0d3f
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004e0d41
    PUSH EAX                            ; 004e0d44
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0d45
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0d4a
    PUSH 0x41f00000                     ; 004e0d4d
    PUSH 0x41700000                     ; 004e0d52
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004e0d57
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e0d5c
    ADD ESP,0x8                         ; 004e0d5f
    MOV EAX,dword ptr [EBP + 0x76]      ; 004e0d62
    MOV dword ptr [EBX + 0x10a74],EAX   ; 004e0d65
    JMP 0x004e0775                      ; 004e0d6b
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH 0x1                            ; 004e0d70
        ;   Label: LAB_004e0d70
    PUSH 0x1                            ; 004e0d72
    LEA EAX,[EBX + 0x2b4]               ; 004e0d74
    PUSH EAX                            ; 004e0d7a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0d7b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0d80
    JMP 0x004e0775                      ; 004e0d83
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH dword ptr [EBP + 0x92]         ; 004e0d88
        ;   Label: LAB_004e0d88
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004e0d8e
    PUSH EBX                            ; 004e0d94
    CALL dword ptr [EAX + 0x150]        ; 004e0d95
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004e0d9b
    ADD ESP,0x8                         ; 004e0da1
    TEST EDX,EDX                        ; 004e0da4
    JNZ 0x004e0dd3                      ; 004e0da6
        ;   XREF to: 004e0dd3 (CONDITIONAL_JUMP)  ; LAB_004e0dd3
    PUSH dword ptr [EBP + 0x92]         ; 004e0da8
    PUSH EBX                            ; 004e0dae
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004e0daf
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004e0db4
    TEST EAX,EAX                        ; 004e0db7
    JNZ 0x004e0775                      ; 004e0db9
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH 0x1                            ; 004e0dbf
    PUSH EAX                            ; 004e0dc1
    MOV ECX,dword ptr [EBP + 0x5a]      ; 004e0dc2
    PUSH ECX                            ; 004e0dc5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0dc6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0dcb
    JMP 0x004e0775                      ; 004e0dce
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    MOV EAX,[0x005f92bc]                ; 004e0dd3 | DAT_005f92bc
        ;   Label: LAB_004e0dd3
    PUSH 0x3e32b8c2                     ; 004e0dd8
    MOV dword ptr [EBP + 0x72],EAX      ; 004e0ddd
    LEA EAX,[EBX + 0x2508]              ; 004e0de0
    PUSH 0x3f000000                     ; 004e0de6
    MOV dword ptr [EAX + 0x8],0x0       ; 004e0deb
    XOR ECX,ECX                         ; 004e0df2
    MOV EDX,dword ptr [EAX + 0x8]       ; 004e0df4
    MOV dword ptr [EAX + 0x4],EDX       ; 004e0df7
    MOV EDX,dword ptr [EAX + 0x4]       ; 004e0dfa
    MOV dword ptr [EAX],EDX             ; 004e0dfd
    MOV EAX,dword ptr [EBP + 0x72]      ; 004e0dff
    MOV dword ptr [EBP + 0x12],ECX      ; 004e0e02
    MOV dword ptr [EBP + 0x1a],EAX      ; 004e0e05
    LEA EAX,[EBP + 0x12]                ; 004e0e08
    MOV dword ptr [EBP + 0x16],ECX      ; 004e0e0b
    PUSH EAX                            ; 004e0e0e
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004e0e0f
    PUSH EAX                            ; 004e0e15
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004e0e16
    CALL dword ptr [EDX + 0xcc]         ; 004e0e1c
    ADD ESP,0x4                         ; 004e0e22
    PUSH EAX                            ; 004e0e25
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004e0e26
    ADD EAX,0x20                        ; 004e0e2c
    PUSH EAX                            ; 004e0e2f
    PUSH EBX                            ; 004e0e30
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004e0e31
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004e0e36
    TEST EAX,EAX                        ; 004e0e39
    JL 0x004e0f8f                       ; 004e0e3b
        ;   XREF to: 004e0f8f (CONDITIONAL_JUMP)  ; LAB_004e0f8f
    FLD float ptr [EBX + 0x10a74]       ; 004e0e41
        ;   Label: LAB_004e0e41
    FLDZ                                ; 004e0e47
    FCOMPP                              ; 004e0e49
    FNSTSW AX                           ; 004e0e4b
    SAHF                                ; 004e0e4d
    JC 0x004e0775                       ; 004e0e4e
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    LEA EDI,[EBP + 0xfffffee6]          ; 004e0e54
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004e0e5a
    LEA ESI,[EBP + 0xfffffef2]          ; 004e0e60
    LEA EAX,[EBX + 0x20]                ; 004e0e66
    FLD float ptr [EDX + 0x20]          ; 004e0e69
    FLD float ptr [EDX + 0x24]          ; 004e0e6c
    FLD float ptr [EDX + 0x28]          ; 004e0e6f
    FXCH ST2                            ; 004e0e72
    FSUB float ptr [EAX]                ; 004e0e74
    FXCH                                ; 004e0e76
    FSUB float ptr [EAX + 0x4]          ; 004e0e78
    FXCH ST2                            ; 004e0e7b
    FSUB float ptr [EAX + 0x8]          ; 004e0e7d
    FXCH                                ; 004e0e80
    FSTP float ptr [EBP + 0xfffffef2]   ; 004e0e82
    FXCH                                ; 004e0e88
    FSTP float ptr [EBP + 0xfffffef6]   ; 004e0e8a
    FSTP float ptr [EBP + 0xfffffefa]   ; 004e0e90
    MOVSD ES:EDI,ESI                    ; 004e0e96
    MOVSD ES:EDI,ESI                    ; 004e0e97
    MOVSD ES:EDI,ESI                    ; 004e0e98
    FLD float ptr [EBP + 0xfffffeea]    ; 004e0e99
    FMUL ST0                            ; 004e0e9f
    FLD float ptr [EBP + 0xfffffee6]    ; 004e0ea1
    FMUL ST0                            ; 004e0ea7
    FADDP                               ; 004e0ea9
    FLD float ptr [EBP + 0xfffffeee]    ; 004e0eab
    FMUL ST0                            ; 004e0eb1
    FADDP                               ; 004e0eb3
    FSTP float ptr [EBP + 0x3e]         ; 004e0eb5
    MOV EAX,dword ptr [EBP + 0x3e]      ; 004e0eb8
    MOV EDX,dword ptr [0x01caf5b4]      ; 004e0ebb | DAT_01caf5b4
    SAR EAX,0x1                         ; 004e0ec1
    ADD EAX,EDX                         ; 004e0ec3
    MOV dword ptr [EBP + 0x42],EAX      ; 004e0ec5
    FLD float ptr [EBP + 0x42]          ; 004e0ec8
    FCOMP float ptr [EBX + 0x10a70]     ; 004e0ecb
    FNSTSW AX                           ; 004e0ed1
    SAHF                                ; 004e0ed3
    JNC 0x004e0775                      ; 004e0ed4
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    LEA EAX,[EBP + 0xfffffee6]          ; 004e0eda
    PUSH EAX                            ; 004e0ee0
    LEA ESI,[EBP + -0x12]               ; 004e0ee1
    LEA EDI,[EBP + -0x66]               ; 004e0ee4
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004e0ee7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + -0x12]               ; 004e0eec
    LEA EAX,[EBP + -0x66]               ; 004e0eef
    LEA EDX,[EBP + 0xfffffee6]          ; 004e0ef2
    ADD ESP,0x4                         ; 004e0ef8
    MOVSD ES:EDI,ESI                    ; 004e0efb
    MOVSD ES:EDI,ESI                    ; 004e0efc
    MOVSD ES:EDI,ESI                    ; 004e0efd
    CMP EDX,EAX                         ; 004e0efe
    JZ 0x004e0f1d                       ; 004e0f00
        ;   XREF to: 004e0f1d (CONDITIONAL_JUMP)  ; LAB_004e0f1d
    MOV EAX,dword ptr [EBP + -0x66]     ; 004e0f02
    MOV dword ptr [EBP + 0xfffffee6],EAX ; 004e0f05
    MOV EAX,dword ptr [EBP + -0x62]     ; 004e0f0b
    MOV dword ptr [EBP + 0xfffffeea],EAX ; 004e0f0e
    MOV EAX,dword ptr [EBP + -0x5e]     ; 004e0f14
    MOV dword ptr [EBP + 0xfffffeee],EAX ; 004e0f17
    PUSH dword ptr [EBP + 0xfffffeea]   ; 004e0f1d
        ;   Label: LAB_004e0f1d
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004e0f23
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e0f28
    ADD ESP,0x4                         ; 004e0f2b
    FLD float ptr [EBP + 0x76]          ; 004e0f2e
    PUSH dword ptr [EBX + 0x34]         ; 004e0f31
    FSTP float ptr [EBP + 0x56]         ; 004e0f34
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004e0f37
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e0f3c
    ADD ESP,0x4                         ; 004e0f3f
    FLD float ptr [EBP + 0x76]          ; 004e0f42
    FSUBR float ptr [EBP + 0x56]        ; 004e0f45
    SUB ESP,0x4                         ; 004e0f48
    FSTP float ptr [ESP]                ; 004e0f4b
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004e0f4e
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e0f53
    FLD float ptr [EBP + 0x76]          ; 004e0f56
    FABS                                ; 004e0f59
    ADD ESP,0x4                         ; 004e0f5b
    FCOMP double ptr [0x005dbe1e]       ; 004e0f5e | DAT_005dbe1e
    FNSTSW AX                           ; 004e0f64
    SAHF                                ; 004e0f66
    JNC 0x004e0775                      ; 004e0f67
        ;   XREF to: 004e0775 (CONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH 0x1                            ; 004e0f6d
    PUSH 0x2                            ; 004e0f6f
    LEA EAX,[EBX + 0x2b4]               ; 004e0f71
    PUSH EAX                            ; 004e0f77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0f78
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0f7d
    MOV dword ptr [EBX + 0x10a74],0x40c00000 ; 004e0f80
    JMP 0x004e0775                      ; 004e0f8a
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    PUSH EBX                            ; 004e0f8f
        ;   Label: LAB_004e0f8f
    PUSH 0x5dbde8                       ; 004e0f90 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x00609ed0]      ; 004e0f95 | g_CConsolePtr
    PUSH EDI                            ; 004e0f9b | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004e0f9c
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 004e0fa1
    PUSH 0x1                            ; 004e0fa4
    PUSH 0x0                            ; 004e0fa6
    MOV EAX,dword ptr [EBP + 0x5a]      ; 004e0fa8
    PUSH EAX                            ; 004e0fab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004e0fac
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e0fb1
    JMP 0x004e0e41                      ; 004e0fb4
        ;   XREF to: 004e0e41 (UNCONDITIONAL_JUMP)  ; LAB_004e0e41
    CMP ESI,0x1                         ; 004e0fb9
        ;   Label: LAB_004e0fb9
    JNC 0x004e0fcb                      ; 004e0fbc
        ;   XREF to: 004e0fcb (CONDITIONAL_JUMP)  ; LAB_004e0fcb
    TEST ESI,ESI                        ; 004e0fbe
    JZ 0x004e0c27                       ; 004e0fc0
        ;   XREF to: 004e0c27 (CONDITIONAL_JUMP)  ; LAB_004e0c27
    JMP 0x004e0775                      ; 004e0fc6
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    JBE 0x004e0d88                      ; 004e0fcb
        ;   XREF to: 004e0d88 (CONDITIONAL_JUMP)  ; LAB_004e0d88
        ;   Label: LAB_004e0fcb
    CMP ESI,0x5                         ; 004e0fd1
    JZ 0x004e0ba6                       ; 004e0fd4
        ;   XREF to: 004e0ba6 (CONDITIONAL_JUMP)  ; LAB_004e0ba6
    JMP 0x004e0775                      ; 004e0fda
        ;   XREF to: 004e0775 (UNCONDITIONAL_JUMP)  ; LAB_004e0775
    FLD float ptr [EBX + 0x2824]        ; 004e0fdf
        ;   Label: LAB_004e0fdf
    FLDLN2                              ; 004e0fe5
    FXCH                                ; 004e0fe7
    FYL2X                               ; 004e0fe9
    FMUL double ptr [0x005dbe2e]        ; 004e0feb | DAT_005dbe2e
    FLD1                                ; 004e0ff1
    FLDL2E                              ; 004e0ff3
    FMUL ST2                            ; 004e0ff5
    FST ST2                             ; 004e0ff7
    FPREM                               ; 004e0ff9
    F2XM1                               ; 004e0ffb
    FADDP                               ; 004e0ffd
    FSCALE                              ; 004e0fff
    FSTP ST1                            ; 004e1001
    PUSH 0x3f8147ae                     ; 004e1003
    PUSH 0x3f7d70a4                     ; 004e1008
    FSTP double ptr [EBP + 0x1e]        ; 004e100d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004e1010
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004e1015
    ADD ESP,0x8                         ; 004e1018
    FLD float ptr [EBP + 0x76]          ; 004e101b
    FMUL double ptr [EBP + 0x1e]        ; 004e101e
    SUB ESP,0x8                         ; 004e1021
    FSTP double ptr [ESP]               ; 004e1024
    SUB ESP,0x8                         ; 004e1027
    FLD float ptr [EBX + 0x2824]        ; 004e102a
    FSTP double ptr [ESP]               ; 004e1030
    PUSH 0x5dbe09                       ; 004e1033 | = "slime.wav @%f *%f"
    LEA EAX,[EBP + 0xfffffe06]          ; 004e1038
    PUSH EAX                            ; 004e103e
    CALL crt_unknown.c_sprintf_FUN_005b7790 ; 004e103f
        ;   XREF to: 005b7790 (UNCONDITIONAL_CALL)  ; int crt_unknown.c_sprintf_FUN_005b7790(char * buffer, char * format)
    ADD ESP,0x18                        ; 004e1044
    LEA EAX,[EBP + 0xfffffe06]          ; 004e1047
    PUSH EAX                            ; 004e104d
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004e104e
    PUSH EBX                            ; 004e1054
    CALL dword ptr [EDX + 0x38]         ; 004e1055
    ADD ESP,0x8                         ; 004e1058
    MOV dword ptr [EBX + 0x10b00],EAX   ; 004e105b
    JMP 0x004e07b7                      ; 004e1061
        ;   XREF to: 004e07b7 (UNCONDITIONAL_JUMP)  ; LAB_004e07b7
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 004e1066
        ;   Label: LAB_004e1066
    PUSH EAX                            ; 004e106c
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004e106d
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004e1072
    JMP 0x004e07b7                      ; 004e1075
        ;   XREF to: 004e07b7 (UNCONDITIONAL_JUMP)  ; LAB_004e07b7

