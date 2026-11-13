; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_baal_cpp_CBaal_process_FUN_005968a0(CBaal *this_ptr,float delta_time)
;
; Parameters:
; CBaal *          Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00596878 = 00597028
;   TerminatedCString s_baal_stand_wav_005d955b
;   TerminatedCString s_baal_chasewalk_wav_005d956a
;   TerminatedCString s_baal_chasefast_wav_005d957d
;   TerminatedCString s_baal_attack_wav_005d9590
;   TerminatedCString s_baal_attack1_wav_005d95a0
;   TerminatedCString s_baal_attack2_wav_005d95b1
;   TerminatedCString s_baal_attack3_wav_005d95c2
;   TerminatedCString s_baal_pain_wav_005d95d3
;   TerminatedCString s_baal_die_wav_005d95e1
;   TerminatedCString s_baal_warning_wav_005d95ee
;   TerminatedCString s_s_confused_while_walking_005d95ff
;   TerminatedCString s_Walking_005d9629
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d9635
;   undefined4 DAT_005d9659
;   ... and 19 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_baal.cpp_FUN_00597700
;   core_baal.cpp_FUN_00597be0
;   core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00434850
;   ... and 15 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005968a0
        ;   Label: core_baal.cpp_CBaal_process_FUN_005968a0
    PUSH ESI                            ; 005968a1
    PUSH EDI                            ; 005968a2
    PUSH EBP                            ; 005968a3
    MOV EBP,ESP                         ; 005968a4
    SUB ESP,0x188                       ; 005968a6
    SUB EBP,0x7a                        ; 005968ac
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005968af
    PUSH dword ptr [EBP + 0x92]         ; 005968b5
    MOV EAX,dword ptr [EBX + 0x154]     ; 005968bb
    PUSH EBX                            ; 005968c1
    CALL dword ptr [EAX + 0x144]        ; 005968c2
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 005968c8
    ADD ESP,0x8                         ; 005968ce
    TEST EDX,EDX                        ; 005968d1
    JZ 0x00596c4c                       ; 005968d3
        ;   XREF to: 00596c4c (CONDITIONAL_JUMP)  ; LAB_00596c4c
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 005968d9
        ;   Label: LAB_005968d9
    TEST ECX,ECX                        ; 005968df
    JZ 0x00596ca4                       ; 005968e1
        ;   XREF to: 00596ca4 (CONDITIONAL_JUMP)  ; LAB_00596ca4
    LEA EDI,[EBP + 0xffffff6a]          ; 005968e7
    LEA EDX,[EBX + 0x20]                ; 005968ed
    LEA ESI,[EBP + 0xffffff3a]          ; 005968f0
    LEA EAX,[EBP + 0xffffff6a]          ; 005968f6
    FLD float ptr [EDX + 0x4]           ; 005968fc
    FLD float ptr [EDX + 0x8]           ; 005968ff
    FLD float ptr [EDX]                 ; 00596902
    LEA EDX,[EBP + 0xffffff46]          ; 00596904
    FSUB float ptr [ECX + 0x20]         ; 0059690a
    FXCH ST2                            ; 0059690d
    FSUB float ptr [ECX + 0x24]         ; 0059690f
    FXCH                                ; 00596912
    FSUB float ptr [ECX + 0x28]         ; 00596914
    FXCH ST2                            ; 00596917
    FSTP float ptr [EBP + 0xffffff3a]   ; 00596919
    FSTP float ptr [EBP + 0xffffff3e]   ; 0059691f
    FSTP float ptr [EBP + 0xffffff42]   ; 00596925
    MOVSD ES:EDI,ESI                    ; 0059692b
    MOVSD ES:EDI,ESI                    ; 0059692c
    MOVSD ES:EDI,ESI                    ; 0059692d
    CMP EDX,EAX                         ; 0059692e
    JZ 0x00596956                       ; 00596930
        ;   XREF to: 00596956 (CONDITIONAL_JUMP)  ; LAB_00596956
    MOV EAX,dword ptr [EBP + 0xffffff6a] ; 00596932
    MOV dword ptr [EBP + 0xffffff46],EAX ; 00596938
    MOV EAX,dword ptr [EBP + 0xffffff6e] ; 0059693e
    MOV dword ptr [EBP + 0xffffff4a],EAX ; 00596944
    MOV EAX,dword ptr [EBP + 0xffffff72] ; 0059694a
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 00596950
    FLD float ptr [EBP + 0xffffff4a]    ; 00596956
        ;   Label: LAB_00596956
    FMUL ST0                            ; 0059695c
    FLD float ptr [EBP + 0xffffff46]    ; 0059695e
    FMUL ST0                            ; 00596964
    FADDP                               ; 00596966
    FLD float ptr [EBP + 0xffffff4e]    ; 00596968
    FMUL ST0                            ; 0059696e
    FADDP                               ; 00596970
    FSTP float ptr [EBP + 0x62]         ; 00596972
    MOV EAX,dword ptr [EBP + 0x62]      ; 00596975
    MOV ESI,dword ptr [0x01d1a0a4]      ; 00596978 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 0059697e
    PUSH dword ptr [EBP + 0x92]         ; 00596980
    ADD EAX,ESI                         ; 00596986
    PUSH EBX                            ; 00596988
    MOV dword ptr [EBP + 0x66],EAX      ; 00596989
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059698c
    CALL dword ptr [EAX + 0x148]        ; 00596992
    ADD ESP,0x8                         ; 00596998
    TEST EAX,EAX                        ; 0059699b
    JZ 0x00596ca4                       ; 0059699d
        ;   XREF to: 00596ca4 (CONDITIONAL_JUMP)  ; LAB_00596ca4
    FLD float ptr [EBX + 0xd054]        ; 005969a3
    FLDZ                                ; 005969a9
    FCOMPP                              ; 005969ab
    FNSTSW AX                           ; 005969ad
    SAHF                                ; 005969af
    JNC 0x005969c4                      ; 005969b0
        ;   XREF to: 005969c4 (CONDITIONAL_JUMP)  ; LAB_005969c4
    FLD float ptr [EBX + 0xd054]        ; 005969b2
    FSUB float ptr [EBP + 0x92]         ; 005969b8
    FSTP float ptr [EBX + 0xd054]       ; 005969be
    FLD float ptr [EBX + 0xd080]        ; 005969c4
        ;   Label: LAB_005969c4
    FLDZ                                ; 005969ca
    FCOMPP                              ; 005969cc
    FNSTSW AX                           ; 005969ce
    SAHF                                ; 005969d0
    JNC 0x005969e5                      ; 005969d1
        ;   XREF to: 005969e5 (CONDITIONAL_JUMP)  ; LAB_005969e5
    FLD float ptr [EBX + 0xd080]        ; 005969d3
    FSUB float ptr [EBP + 0x92]         ; 005969d9
    FSTP float ptr [EBX + 0xd080]       ; 005969df
    FLD float ptr [EBX + 0xd064]        ; 005969e5
        ;   Label: LAB_005969e5
    FADD float ptr [EBP + 0x92]         ; 005969eb
    FST float ptr [EBX + 0xd064]        ; 005969f1
    FCOMP float ptr [EBX + 0xd06c]      ; 005969f7
    FNSTSW AX                           ; 005969fd
    SAHF                                ; 005969ff
    JNC 0x00596cac                      ; 00596a00
        ;   XREF to: 00596cac (CONDITIONAL_JUMP)  ; LAB_00596cac
    FLD float ptr [EBP + 0x92]          ; 00596a06
        ;   Label: LAB_00596a06
    LEA EAX,[EBX + 0x158]               ; 00596a0c
    FMUL float ptr [EBX + 0xcdcc]       ; 00596a12
    MOV dword ptr [EBP + 0x6e],EAX      ; 00596a18
    LEA EAX,[EBX + 0x2518]              ; 00596a1b
    MOV dword ptr [EBP + 0x5e],EAX      ; 00596a21
    LEA EAX,[EBX + 0x250c]              ; 00596a24
    MOV dword ptr [EBP + 0x6a],EAX      ; 00596a2a
    LEA EAX,[EBX + 0x249c]              ; 00596a2d
    MOV dword ptr [EBP + 0x72],EAX      ; 00596a33
    LEA EAX,[EBX + 0x20]                ; 00596a36
    MOV dword ptr [EBP + 0x5a],EAX      ; 00596a39
    LEA EAX,[EBX + 0xfd8]               ; 00596a3c
    FSTP float ptr [EBP + 0x42]         ; 00596a42
    MOV dword ptr [EBP + 0x56],EAX      ; 00596a45
    FLD float ptr [EBP + 0x42]          ; 00596a48
        ;   Label: LAB_00596a48
    FLDZ                                ; 00596a4b
    FCOMPP                              ; 00596a4d
    FNSTSW AX                           ; 00596a4f
    SAHF                                ; 00596a51
    JNC 0x005976c5                      ; 00596a52
        ;   XREF to: 005976c5 (CONDITIONAL_JUMP)  ; LAB_005976c5
    LEA EAX,[EBP + 0x42]                ; 00596a58
    PUSH EAX                            ; 00596a5b
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00596a5c
    PUSH EAX                            ; 00596a5f
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 00596a60
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    MOV EDI,EAX                         ; 00596a65
    LEA ESI,[EAX*0x4 + 0x0]             ; 00596a67
    ADD ESP,0x8                         ; 00596a6e
    ADD ESI,EBX                         ; 00596a71
    CMP EAX,0x4b4                       ; 00596a73
    JNC 0x00596e99                      ; 00596a78
        ;   XREF to: 00596e99 (CONDITIONAL_JUMP)  ; LAB_00596e99
    CMP EAX,0x4b1                       ; 00596a7e
    JNC 0x00596f06                      ; 00596a83
        ;   XREF to: 00596f06 (CONDITIONAL_JUMP)  ; LAB_00596f06
    CMP EAX,0x44d                       ; 00596a89
    JNC 0x00596f4b                      ; 00596a8e
        ;   XREF to: 00596f4b (CONDITIONAL_JUMP)  ; LAB_00596f4b
    FLD float ptr [EBP + 0x92]          ; 00596a94
        ;   Label: LAB_00596a94
    FMUL float ptr [EBX + 0xcdcc]       ; 00596a9a
    FMUL double ptr [0x005d9659]        ; 00596aa0 | DAT_005d9659
    SUB ESP,0x4                         ; 00596aa6
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00596aa9
    MOV dword ptr [EBX + 0x2524],EAX    ; 00596aaf
    FSTP float ptr [ESP]                ; 00596ab5
    PUSH EBX                            ; 00596ab8
    CALL core_charactr.cpp_FUN_00434850 ; 00596ab9
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 00596abe
    MOV EDX,dword ptr [EBP + 0x6e]      ; 00596ac1
    PUSH EDX                            ; 00596ac4
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00596ac5
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00596aca
    PUSH dword ptr [EBP + 0x92]         ; 00596acd
    PUSH EBX                            ; 00596ad3
    MOV ESI,dword ptr [EAX + 0x24]      ; 00596ad4
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00596ad7
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00596adc
    TEST EAX,EAX                        ; 00596adf
    JZ 0x00597697                       ; 00596ae1
        ;   XREF to: 00597697 (CONDITIONAL_JUMP)  ; LAB_00597697
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00596ae7
    CMP EAX,0x2                         ; 00596aed
    JNC 0x00596f8b                      ; 00596af0
        ;   XREF to: 00596f8b (CONDITIONAL_JUMP)  ; LAB_00596f8b
    CMP EAX,0x1                         ; 00596af6
    JNZ 0x00596f96                      ; 00596af9
        ;   XREF to: 00596f96 (CONDITIONAL_JUMP)  ; LAB_00596f96
    CMP ESI,0x2                         ; 00596aff
        ;   Label: LAB_00596aff
    JZ 0x00596b0f                       ; 00596b02
        ;   XREF to: 00596b0f (CONDITIONAL_JUMP)  ; LAB_00596b0f
    PUSH 0x0                            ; 00596b04
    PUSH EBX                            ; 00596b06
    CALL core_baal.cpp_FUN_00597be0     ; 00596b07
        ;   XREF to: 00597be0 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597be0()
    ADD ESP,0x8                         ; 00596b0c
    MOV EAX,dword ptr [EBP + 0x72]      ; 00596b0f
        ;   Label: LAB_00596b0f
    MOV dword ptr [EAX + 0x8],0x0       ; 00596b12
    MOV EDX,dword ptr [EAX + 0x8]       ; 00596b19
    MOV dword ptr [EAX + 0x4],EDX       ; 00596b1c
    MOV EDX,dword ptr [EAX + 0x4]       ; 00596b1f
    MOV dword ptr [EAX],EDX             ; 00596b22
    FLD float ptr [EBX + 0xcde0]        ; 00596b24
        ;   Label: caseD_6
    FLDZ                                ; 00596b2a
    FCOMPP                              ; 00596b2c
    FNSTSW AX                           ; 00596b2e
    SAHF                                ; 00596b30
    JNC 0x00596b45                      ; 00596b31
        ;   XREF to: 00596b45 (CONDITIONAL_JUMP)  ; LAB_00596b45
    FLD float ptr [EBX + 0xcde0]        ; 00596b33
    FSUB float ptr [EBP + 0x92]         ; 00596b39
    FSTP float ptr [EBX + 0xcde0]       ; 00596b3f
    FLD float ptr [EBX + 0xcde0]        ; 00596b45
        ;   Label: LAB_00596b45
    FLDZ                                ; 00596b4b
    FCOMPP                              ; 00596b4d
    FNSTSW AX                           ; 00596b4f
    SAHF                                ; 00596b51
    JA 0x005976b6                       ; 00596b52
        ;   XREF to: 005976b6 (CONDITIONAL_JUMP)  ; LAB_005976b6
    MOV ESI,dword ptr [EBP + 0x6e]      ; 00596b58
        ;   Label: LAB_00596b58
    PUSH ESI                            ; 00596b5b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00596b5c
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00596b61
    PUSH dword ptr [EBP + 0x92]         ; 00596b64
    PUSH EBX                            ; 00596b6a
    CALL core_charactr.cpp_FUN_0042c1e0 ; 00596b6b
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00596b70
    FLD float ptr [EAX]                 ; 00596b73
    FMUL float ptr [EBP + 0x92]         ; 00596b75
    FLD float ptr [EAX + 0x4]           ; 00596b7b
    FMUL float ptr [EBP + 0x92]         ; 00596b7e
    FLD float ptr [EAX + 0x8]           ; 00596b84
    FMUL float ptr [EBP + 0x92]         ; 00596b87
    LEA EDI,[EBP + 0x36]                ; 00596b8d
    LEA ESI,[EBP + -0x66]               ; 00596b90
    FXCH ST2                            ; 00596b93
    FSTP float ptr [EBP + -0x66]        ; 00596b95
    FSTP float ptr [EBP + -0x62]        ; 00596b98
    FSTP float ptr [EBP + -0x5e]        ; 00596b9b
    MOVSD ES:EDI,ESI                    ; 00596b9e
    MOVSD ES:EDI,ESI                    ; 00596b9f
    MOVSD ES:EDI,ESI                    ; 00596ba0
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00596ba1
    FLD float ptr [EBP + 0x36]          ; 00596ba4
    FLD float ptr [EBP + 0x3a]          ; 00596ba7
    FLD float ptr [EBP + 0x3e]          ; 00596baa
    LEA EDI,[EBP + 0xffffff2e]          ; 00596bad
    LEA ESI,[EBP + -0x42]               ; 00596bb3
    FXCH ST2                            ; 00596bb6
    FADD float ptr [EAX]                ; 00596bb8
    FXCH                                ; 00596bba
    FADD float ptr [EAX + 0x4]          ; 00596bbc
    FXCH ST2                            ; 00596bbf
    FADD float ptr [EAX + 0x8]          ; 00596bc1
    FXCH                                ; 00596bc4
    FSTP float ptr [EBP + -0x42]        ; 00596bc6
    FXCH                                ; 00596bc9
    FSTP float ptr [EBP + -0x3e]        ; 00596bcb
    FSTP float ptr [EBP + -0x3a]        ; 00596bce
    MOVSD ES:EDI,ESI                    ; 00596bd1
    MOVSD ES:EDI,ESI                    ; 00596bd2
    MOVSD ES:EDI,ESI                    ; 00596bd3
    MOV EAX,dword ptr [EBP + 0x72]      ; 00596bd4
    FLD float ptr [EBP + 0xffffff2e]    ; 00596bd7
    FLD float ptr [EBP + 0xffffff32]    ; 00596bdd
    FLD float ptr [EBP + 0xffffff36]    ; 00596be3
    LEA EDI,[EBP + 0x1e]                ; 00596be9
    LEA ESI,[EBP + 0x2a]                ; 00596bec
    FXCH ST2                            ; 00596bef
    FADD float ptr [EAX]                ; 00596bf1
    FXCH                                ; 00596bf3
    FADD float ptr [EAX + 0x4]          ; 00596bf5
    FXCH ST2                            ; 00596bf8
    FADD float ptr [EAX + 0x8]          ; 00596bfa
    FXCH                                ; 00596bfd
    FSTP float ptr [EBP + 0x2a]         ; 00596bff
    FXCH                                ; 00596c02
    FSTP float ptr [EBP + 0x2e]         ; 00596c04
    FSTP float ptr [EBP + 0x32]         ; 00596c07
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00596c0a
    MOVSD ES:EDI,ESI                    ; 00596c0d
    MOVSD ES:EDI,ESI                    ; 00596c0e
    MOVSD ES:EDI,ESI                    ; 00596c0f
    MOV dword ptr [EAX + 0x8],0x0       ; 00596c10
    MOV EDX,dword ptr [EAX + 0x8]       ; 00596c17
    MOV dword ptr [EAX + 0x4],EDX       ; 00596c1a
    MOV EDX,dword ptr [EAX + 0x4]       ; 00596c1d
    MOV dword ptr [EAX],EDX             ; 00596c20
    MOV EAX,dword ptr [EBP + 0x72]      ; 00596c22
    MOV dword ptr [EAX + 0x8],0x0       ; 00596c25
    ADD ESP,0x8                         ; 00596c2c
    MOV EDX,dword ptr [EAX + 0x8]       ; 00596c2f
    MOV dword ptr [EAX + 0x4],EDX       ; 00596c32
    MOV EDX,dword ptr [EAX + 0x4]       ; 00596c35
    MOV dword ptr [EAX],EDX             ; 00596c38
    LEA EAX,[EBP + 0x1e]                ; 00596c3a
    PUSH EAX                            ; 00596c3d
    PUSH EBX                            ; 00596c3e
    CALL core_charactr.cpp_FUN_0042c230 ; 00596c3f
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00596c44
    JMP 0x00596a48                      ; 00596c47
        ;   XREF to: 00596a48 (UNCONDITIONAL_JUMP)  ; LAB_00596a48
    MOV EAX,[0x01d5ba14]                ; 00596c4c | DAT_01d5ba14
        ;   Label: LAB_00596c4c
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00596c51
    PUSH EAX                            ; 00596c58
    MOV EDX,dword ptr [EAX + 0x154]     ; 00596c59
    CALL dword ptr [EDX + 0x10c]        ; 00596c5f
    ADD ESP,0x4                         ; 00596c65
    TEST EAX,EAX                        ; 00596c68
    JZ 0x00596c92                       ; 00596c6a
        ;   XREF to: 00596c92 (CONDITIONAL_JUMP)  ; LAB_00596c92
    MOV EAX,[0x005fe9dc]                ; 00596c6c | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00596c71 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d5ba14]                ; 00596c7b | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00596c80
    MOV dword ptr [EBX + 0xcde4],EAX    ; 00596c87
    JMP 0x005968d9                      ; 00596c8d
        ;   XREF to: 005968d9 (UNCONDITIONAL_JUMP)  ; LAB_005968d9
    PUSH 0x1                            ; 00596c92
        ;   Label: LAB_00596c92
    PUSH EAX                            ; 00596c94
    ADD EBX,0x158                       ; 00596c95
    PUSH EBX                            ; 00596c9b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00596c9c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596ca1
    LEA ESP,[EBP + 0x7a]                ; 00596ca4
        ;   Label: LAB_00596ca4
    POP EBP                             ; 00596ca7
    POP EDI                             ; 00596ca8
    POP ESI                             ; 00596ca9
    POP EBX                             ; 00596caa
    RET                                 ; 00596cab
    MOV EAX,dword ptr [EBX + 0xd06c]    ; 00596cac
        ;   Label: LAB_00596cac
    MOV dword ptr [EBX + 0xd064],EAX    ; 00596cb2
    JMP 0x00596a06                      ; 00596cb8
        ;   XREF to: 00596a06 (UNCONDITIONAL_JUMP)  ; LAB_00596a06
    PUSH 0x3f800000                     ; 00596cbd
        ;   Label: LAB_00596cbd
    PUSH 0x0                            ; 00596cc2
    PUSH 0x0                            ; 00596cc4
    MOV ESI,dword ptr [0x00603b28]      ; 00596cc6 | g_CDemonSetPtr
    PUSH 0x42c80000                     ; 00596ccc
    PUSH ESI                            ; 00596cd1 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440 ; 00596cd2
        ;   XREF to: 0053b440 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_initCameraShake_FUN_0053b440(CDemonSet * this_ptr, float peak, float attack, float sustain, ...)
    MOV EDI,dword ptr [EBX + 0xd0b8]    ; 00596cd7
    ADD ESP,0x14                        ; 00596cdd
    TEST EDI,EDI                        ; 00596ce0
    JZ 0x00596a94                       ; 00596ce2
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH EDI                            ; 00596ce8
    CALL core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790 ; 00596ce9
        ;   XREF to: 00419790 (UNCONDITIONAL_CALL)  ; void core_boneguy.cpp_CBoneGuy_beginRecombine_FUN_00419790(CBoneGuy * this_ptr)
    ADD ESP,0x4                         ; 00596cee
    JMP 0x00596a94                      ; 00596cf1
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0xbdc4] ; 00596cf6
        ;   Label: LAB_00596cf6
    PUSH ECX                            ; 00596cfd
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596cfe
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596d03
    TEST EAX,EAX                        ; 00596d06
    JNZ 0x00596a94                      ; 00596d08
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    MOV ESI,0x5d955b                    ; 00596d0e | = "baal_stand.wav"
    PUSH ESI                            ; 00596d13 | = "baal_stand.wav"
    MOV EDX,dword ptr [EBX + 0x154]     ; 00596d14
    PUSH EBX                            ; 00596d1a
    CALL dword ptr [EDX + 0x2c]         ; 00596d1b
    ADD ESP,0x8                         ; 00596d1e
    MOV dword ptr [EBX + EDI*0x4 + 0xbdc4],EAX ; 00596d21
    JMP 0x00596a94                      ; 00596d28
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV EDX,dword ptr [ESI + 0xbdc4]    ; 00596d2d
        ;   Label: LAB_00596d2d
    PUSH EDX                            ; 00596d33
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596d34
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596d39
    TEST EAX,EAX                        ; 00596d3c
    JNZ 0x00596a94                      ; 00596d3e
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d956a                       ; 00596d44 | = "baal_chasewalk.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596d49
    PUSH EBX                            ; 00596d4f
    CALL dword ptr [EAX + 0x2c]         ; 00596d50
    ADD ESP,0x8                         ; 00596d53
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596d56
    JMP 0x00596a94                      ; 00596d5c
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV EAX,dword ptr [ESI + 0xbdc4]    ; 00596d61
        ;   Label: LAB_00596d61
    PUSH EAX                            ; 00596d67
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596d68
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596d6d
    TEST EAX,EAX                        ; 00596d70
    JNZ 0x00596a94                      ; 00596d72
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d957d                       ; 00596d78 | = "baal_chasefast.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596d7d
    PUSH EBX                            ; 00596d83
    CALL dword ptr [EAX + 0x2c]         ; 00596d84
    ADD ESP,0x8                         ; 00596d87
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596d8a
    JMP 0x00596a94                      ; 00596d90
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV ECX,dword ptr [ESI + 0xbdc4]    ; 00596d95
        ;   Label: LAB_00596d95
    PUSH ECX                            ; 00596d9b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596d9c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596da1
    TEST EAX,EAX                        ; 00596da4
    JNZ 0x00596a94                      ; 00596da6
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95a0                       ; 00596dac | = "baal_attack1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596db1
    PUSH EBX                            ; 00596db7
    CALL dword ptr [EAX + 0x2c]         ; 00596db8
    ADD ESP,0x8                         ; 00596dbb
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596dbe
    JMP 0x00596a94                      ; 00596dc4
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV EDX,dword ptr [ESI + 0xbdc4]    ; 00596dc9
        ;   Label: LAB_00596dc9
    PUSH EDX                            ; 00596dcf
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596dd0
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596dd5
    TEST EAX,EAX                        ; 00596dd8
    JNZ 0x00596a94                      ; 00596dda
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95b1                       ; 00596de0 | = "baal_attack2.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596de5
    PUSH EBX                            ; 00596deb
    CALL dword ptr [EAX + 0x2c]         ; 00596dec
    ADD ESP,0x8                         ; 00596def
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596df2
    JMP 0x00596a94                      ; 00596df8
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV EDI,dword ptr [ESI + 0xbdc4]    ; 00596dfd
        ;   Label: LAB_00596dfd
    PUSH EDI                            ; 00596e03
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596e04
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596e09
    TEST EAX,EAX                        ; 00596e0c
    JNZ 0x00596a94                      ; 00596e0e
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95d3                       ; 00596e14 | = "baal_pain.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596e19
    PUSH EBX                            ; 00596e1f
    CALL dword ptr [EAX + 0x2c]         ; 00596e20
    ADD ESP,0x8                         ; 00596e23
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596e26
    JMP 0x00596a94                      ; 00596e2c
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV ECX,dword ptr [ESI + 0xbdc4]    ; 00596e31
        ;   Label: LAB_00596e31
    PUSH ECX                            ; 00596e37
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596e38
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596e3d
    TEST EAX,EAX                        ; 00596e40
    JNZ 0x00596a94                      ; 00596e42
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95e1                       ; 00596e48 | = "baal_die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596e4d
    PUSH EBX                            ; 00596e53
    CALL dword ptr [EAX + 0x2c]         ; 00596e54
    ADD ESP,0x8                         ; 00596e57
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596e5a
    JMP 0x00596a94                      ; 00596e60
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    MOV EDX,dword ptr [ESI + 0xbdc4]    ; 00596e65
        ;   Label: LAB_00596e65
    PUSH EDX                            ; 00596e6b
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596e6c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596e71
    TEST EAX,EAX                        ; 00596e74
    JNZ 0x00596a94                      ; 00596e76
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95ee                       ; 00596e7c | = "baal_warning.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596e81
    PUSH EBX                            ; 00596e87
    CALL dword ptr [EAX + 0x2c]         ; 00596e88
    ADD ESP,0x8                         ; 00596e8b
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596e8e
    JMP 0x00596a94                      ; 00596e94
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    JBE 0x00596d95                      ; 00596e99
        ;   XREF to: 00596d95 (CONDITIONAL_JUMP)  ; LAB_00596d95
        ;   Label: LAB_00596e99
    CMP EAX,0x4b7                       ; 00596e9f
    JNC 0x00596ee5                      ; 00596ea4
        ;   XREF to: 00596ee5 (CONDITIONAL_JUMP)  ; LAB_00596ee5
    CMP EAX,0x4b5                       ; 00596ea6
    JBE 0x00596dc9                      ; 00596eab
        ;   XREF to: 00596dc9 (CONDITIONAL_JUMP)  ; LAB_00596dc9
    MOV EAX,dword ptr [ESI + 0xbdc4]    ; 00596eb1
    PUSH EAX                            ; 00596eb7
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596eb8
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596ebd
    TEST EAX,EAX                        ; 00596ec0
    JNZ 0x00596a94                      ; 00596ec2
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d95c2                       ; 00596ec8 | = "baal_attack3.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596ecd
    PUSH EBX                            ; 00596ed3
    CALL dword ptr [EAX + 0x2c]         ; 00596ed4
    ADD ESP,0x8                         ; 00596ed7
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596eda
    JMP 0x00596a94                      ; 00596ee0
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    JBE 0x00596dfd                      ; 00596ee5
        ;   XREF to: 00596dfd (CONDITIONAL_JUMP)  ; LAB_00596dfd
        ;   Label: LAB_00596ee5
    CMP EAX,0x4b8                       ; 00596eeb
    JBE 0x00596e31                      ; 00596ef0
        ;   XREF to: 00596e31 (CONDITIONAL_JUMP)  ; LAB_00596e31
    CMP EAX,0x4b9                       ; 00596ef6
    JZ 0x00596e65                       ; 00596efb
        ;   XREF to: 00596e65 (CONDITIONAL_JUMP)  ; LAB_00596e65
    JMP 0x00596a94                      ; 00596f01
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    JBE 0x00596d2d                      ; 00596f06
        ;   XREF to: 00596d2d (CONDITIONAL_JUMP)  ; LAB_00596d2d
        ;   Label: LAB_00596f06
    CMP EAX,0x4b2                       ; 00596f0c
    JBE 0x00596d61                      ; 00596f11
        ;   XREF to: 00596d61 (CONDITIONAL_JUMP)  ; LAB_00596d61
    MOV EDI,dword ptr [ESI + 0xbdc4]    ; 00596f17
    PUSH EDI                            ; 00596f1d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00596f1e
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00596f23
    TEST EAX,EAX                        ; 00596f26
    JNZ 0x00596a94                      ; 00596f28
        ;   XREF to: 00596a94 (CONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x5d9590                       ; 00596f2e | = "baal_attack.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00596f33
    PUSH EBX                            ; 00596f39
    CALL dword ptr [EAX + 0x2c]         ; 00596f3a
    ADD ESP,0x8                         ; 00596f3d
    MOV dword ptr [ESI + 0xbdc4],EAX    ; 00596f40
    JMP 0x00596a94                      ; 00596f46
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    JBE 0x00596cbd                      ; 00596f4b
        ;   XREF to: 00596cbd (CONDITIONAL_JUMP)  ; LAB_00596cbd
        ;   Label: LAB_00596f4b
    CMP EAX,0x4b0                       ; 00596f51
    JZ 0x00596cf6                       ; 00596f56
        ;   XREF to: 00596cf6 (CONDITIONAL_JUMP)  ; LAB_00596cf6
    JMP 0x00596a94                      ; 00596f5c
        ;   XREF to: 00596a94 (UNCONDITIONAL_JUMP)  ; LAB_00596a94
    PUSH 0x1                            ; 00596f61
        ;   Label: LAB_00596f61
    PUSH 0x0                            ; 00596f63
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00596f65
    PUSH EAX                            ; 00596f68
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00596f69
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596f6e
    PUSH EBX                            ; 00596f71
    PUSH 0x5d95ff                       ; 00596f72 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 00596f77 | g_CConsolePtr
    PUSH EDX                            ; 00596f7d | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00596f7e
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00596f83
    JMP 0x00596b0f                      ; 00596f86
        ;   XREF to: 00596b0f (UNCONDITIONAL_JUMP)  ; LAB_00596b0f
    JBE 0x00596aff                      ; 00596f8b
        ;   XREF to: 00596aff (CONDITIONAL_JUMP)  ; LAB_00596aff
        ;   Label: LAB_00596f8b
    CMP EAX,0x3                         ; 00596f91
    JZ 0x00596f61                       ; 00596f94
        ;   XREF to: 00596f61 (CONDITIONAL_JUMP)  ; LAB_00596f61
    PUSH 0x1                            ; 00596f96
        ;   Label: LAB_00596f96
    PUSH 0x0                            ; 00596f98
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00596f9a
    PUSH ECX                            ; 00596f9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00596f9e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00596fa3
    JMP 0x00596b0f                      ; 00596fa6
        ;   XREF to: 00596b0f (UNCONDITIONAL_JUMP)  ; LAB_00596b0f
    MOV ESI,dword ptr [EBX + 0xcdd0]    ; 00596fab
        ;   Label: caseD_9
    TEST ESI,ESI                        ; 00596fb1
    JNZ 0x00596b24                      ; 00596fb3
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xdc],0x0      ; 00596fb9
    JNZ 0x00596b24                      ; 00596fc0
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH ESI                            ; 00596fc6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00596fc7
    PUSH EAX                            ; 00596fca
    LEA ESI,[EBP + 0xffffff52]          ; 00596fcb
    LEA EDI,[EBP + 0x12]                ; 00596fd1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0 ; 00596fd4
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_0054dbd0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    ADD ESP,0x8                         ; 00596fd9
    LEA EAX,[EBP + 0x12]                ; 00596fdc
    LEA ESI,[EBP + 0xffffff52]          ; 00596fdf
    PUSH EAX                            ; 00596fe5
    MOVSD ES:EDI,ESI                    ; 00596fe6
    MOVSD ES:EDI,ESI                    ; 00596fe7
    MOVSD ES:EDI,ESI                    ; 00596fe8
    PUSH EBX                            ; 00596fe9
    LEA ESI,[EBP + 0xffffff5e]          ; 00596fea
    CALL core_actor.cpp_FUN_00408b80    ; 00596ff0
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00596ff5
    PUSH 0x0                            ; 00596ff8
    LEA EAX,[EBP + -0x2a]               ; 00596ffa
    LEA EDI,[EBP + -0x2a]               ; 00596ffd
    PUSH EAX                            ; 00597000
    MOV EDX,dword ptr [0x005fed24]      ; 00597001 | g_CGorePtr
    LEA ESI,[EBP + 0xffffff5e]          ; 00597007
    PUSH EDX                            ; 0059700d
    MOVSD ES:EDI,ESI                    ; 0059700e
    MOVSD ES:EDI,ESI                    ; 0059700f
    MOVSD ES:EDI,ESI                    ; 00597010
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 00597011
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 00597016
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00597019
    JMP 0x00596b24                      ; 00597023
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,[0x01d5ba14]                ; 00597028 | DAT_01d5ba14
        ;   Label: caseD_0
    MOV EDX,dword ptr [EBP + 0x5a]      ; 0059702d
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00597030
    LEA EDI,[EBP + -0x72]               ; 00597037
    LEA ESI,[EBP + -0x4e]               ; 0059703a
    FLD float ptr [EAX + 0x24]          ; 0059703d
    FLD float ptr [EAX + 0x28]          ; 00597040
    FLD float ptr [EAX + 0x20]          ; 00597043
    LEA EAX,[EBP + -0x72]               ; 00597046
    FSUB float ptr [EDX]                ; 00597049
    FXCH ST2                            ; 0059704b
    FSUB float ptr [EDX + 0x4]          ; 0059704d
    FXCH                                ; 00597050
    FSUB float ptr [EDX + 0x8]          ; 00597052
    FXCH ST2                            ; 00597055
    FSTP float ptr [EBP + -0x4e]        ; 00597057
    FSTP float ptr [EBP + -0x4a]        ; 0059705a
    FSTP float ptr [EBP + -0x46]        ; 0059705d
    MOVSD ES:EDI,ESI                    ; 00597060
    MOVSD ES:EDI,ESI                    ; 00597061
    MOVSD ES:EDI,ESI                    ; 00597062
    PUSH EAX                            ; 00597063
    LEA ESI,[EBP + -0x1e]               ; 00597064
    LEA EDI,[EBP + -0x7e]               ; 00597067
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0059706a
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0x1e]               ; 0059706f
    MOVSD ES:EDI,ESI                    ; 00597072
    MOVSD ES:EDI,ESI                    ; 00597073
    MOVSD ES:EDI,ESI                    ; 00597074
    ADD ESP,0x4                         ; 00597075
    FLD float ptr [EBP + -0x7a]         ; 00597078
    FSUB float ptr [EBX + 0x34]         ; 0059707b
    SUB ESP,0x4                         ; 0059707e
    FSTP float ptr [ESP]                ; 00597081
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 00597084
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    FLD float ptr [EBP + -0x7e]         ; 00597089
    ADD ESP,0x4                         ; 0059708c
    MOV dword ptr [EBP + 0x76],EAX      ; 0059708f
    SUB ESP,0x4                         ; 00597092
    FSUB float ptr [EBX + 0x30]         ; 00597095
    FLD float ptr [EBP + 0x76]          ; 00597098
    FXCH                                ; 0059709b
    FSTP float ptr [ESP]                ; 0059709d
    FSTP float ptr [EBP + 0x46]         ; 005970a0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 005970a3
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    FLD float ptr [EBX + 0x34]          ; 005970a8
    FLD float ptr [EBX + 0x30]          ; 005970ab
    MOV dword ptr [EBP + 0x76],EAX      ; 005970ae
    ADD ESP,0x4                         ; 005970b1
    FLD float ptr [EBP + 0x76]          ; 005970b4
    FXCH ST2                            ; 005970b7
    FADD float ptr [EBP + 0x46]         ; 005970b9
    PUSH EBX                            ; 005970bc
    FXCH                                ; 005970bd
    FADDP ST2,ST0                       ; 005970bf
    FSTP float ptr [EBX + 0x34]         ; 005970c1
    FSTP float ptr [EBX + 0x30]         ; 005970c4
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0 ; 005970c7
        ;   XREF to: 004088f0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_004088f0(CDemonActor * this_ptr)
    FLD float ptr [EBX + 0xcde0]        ; 005970cc
    FLDZ                                ; 005970d2
    ADD ESP,0x4                         ; 005970d4
    FCOMPP                              ; 005970d7
    FNSTSW AX                           ; 005970d9
    SAHF                                ; 005970db
    JC 0x00596b24                       ; 005970dc
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x66]          ; 005970e2
    FCOMP double ptr [0x005d9679]       ; 005970e5 | DAT_005d9679
    FNSTSW AX                           ; 005970eb
    SAHF                                ; 005970ed
    JBE 0x005970fb                      ; 005970ee
        ;   XREF to: 005970fb (CONDITIONAL_JUMP)  ; LAB_005970fb
    PUSH 0x0                            ; 005970f0
    PUSH EBX                            ; 005970f2
    CALL core_baal.cpp_FUN_00597be0     ; 005970f3
        ;   XREF to: 00597be0 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597be0()
    ADD ESP,0x8                         ; 005970f8
    MOV EAX,[0x01d5ba14]                ; 005970fb | DAT_01d5ba14
        ;   Label: LAB_005970fb
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00597100
    PUSH EAX                            ; 00597107
    MOV EDX,dword ptr [EAX + 0x154]     ; 00597108
    CALL dword ptr [EDX + 0x10c]        ; 0059710e
    ADD ESP,0x4                         ; 00597114
    TEST EAX,EAX                        ; 00597117
    JNZ 0x00596b24                      ; 00597119
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0xffffff4a]    ; 0059711f
    FMUL ST0                            ; 00597125
    FLD float ptr [EBP + 0xffffff46]    ; 00597127
    FMUL ST0                            ; 0059712d
    FADDP                               ; 0059712f
    FLD float ptr [EBP + 0xffffff4e]    ; 00597131
    FMUL ST0                            ; 00597137
    FADDP                               ; 00597139
    FSTP float ptr [EBP + 0x4e]         ; 0059713b
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0059713e
    MOV ECX,dword ptr [0x01d1a0a4]      ; 00597141 | DAT_01d1a0a4
    SAR EAX,0x1                         ; 00597147
    ADD EAX,ECX                         ; 00597149
    MOV dword ptr [EBP + 0x52],EAX      ; 0059714b
    FLD float ptr [EBP + 0x52]          ; 0059714e
    FLD float ptr [0x005e76c8]          ; 00597151 | DAT_005e76c8
    FADD double ptr [0x005d9681]        ; 00597157 | DAT_005d9681
    FCOMPP                              ; 0059715d
    FNSTSW AX                           ; 0059715f
    SAHF                                ; 00597161
    JC 0x00597172                       ; 00597162
        ;   XREF to: 00597172 (CONDITIONAL_JUMP)  ; LAB_00597172
    PUSH EBX                            ; 00597164
    CALL core_baal.cpp_FUN_00597700     ; 00597165
        ;   XREF to: 00597700 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597700()
    ADD ESP,0x4                         ; 0059716a
    JMP 0x00596b24                      ; 0059716d
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x66]          ; 00597172
        ;   Label: LAB_00597172
    FCOMP double ptr [0x005d9659]       ; 00597175 | DAT_005d9659
    FNSTSW AX                           ; 0059717b
    SAHF                                ; 0059717d
    JBE 0x005971cd                      ; 0059717e
        ;   XREF to: 005971cd (CONDITIONAL_JUMP)  ; LAB_005971cd
    PUSH 0x64                           ; 00597180
        ;   Label: LAB_00597180
    PUSH 0x0                            ; 00597182
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00597184
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00597189
    CMP EAX,0x50                        ; 0059718c
    JLE 0x005971db                      ; 0059718f
        ;   XREF to: 005971db (CONDITIONAL_JUMP)  ; LAB_005971db
    XOR ESI,ESI                         ; 00597191
        ;   Label: LAB_00597191
    XOR EDI,EDI                         ; 00597193
    MOV EAX,[0x00603b28]                ; 00597195 | g_CDemonSetPtr
        ;   Label: LAB_00597195
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 0059719a | g_CDemonSetInstance.actor_count
    JGE 0x00596b24                      ; 005971a0
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    MOV ECX,dword ptr [0x007e1774]      ; 005971a6 | DAT_007e1774
    PUSH ECX                            ; 005971ac
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 005971ad | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 005971b4
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 005971b5
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005971ba
    MOV dword ptr [EBX + 0xd0b8],EAX    ; 005971bd
    TEST EAX,EAX                        ; 005971c3
    JNZ 0x005971e9                      ; 005971c5
        ;   XREF to: 005971e9 (CONDITIONAL_JUMP)  ; LAB_005971e9
    INC EDI                             ; 005971c7
        ;   Label: LAB_005971c7
    ADD ESI,0x4                         ; 005971c8
    JMP 0x00597195                      ; 005971cb
        ;   XREF to: 00597195 (UNCONDITIONAL_JUMP)  ; LAB_00597195
    CMP dword ptr [EBX + 0xd07c],0x0    ; 005971cd
        ;   Label: LAB_005971cd
    JNZ 0x00597180                      ; 005971d4
        ;   XREF to: 00597180 (CONDITIONAL_JUMP)  ; LAB_00597180
    JMP 0x00596b24                      ; 005971d6
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xd07c],0x0    ; 005971db
        ;   Label: LAB_005971db
    JNZ 0x00597191                      ; 005971e2
        ;   XREF to: 00597191 (CONDITIONAL_JUMP)  ; LAB_00597191
    JMP 0x00596b24                      ; 005971e4
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH EAX                            ; 005971e9
        ;   Label: LAB_005971e9
    MOV EDX,dword ptr [EAX + 0x154]     ; 005971ea
    CALL dword ptr [EDX + 0x10c]        ; 005971f0
    ADD ESP,0x4                         ; 005971f6
    TEST EAX,EAX                        ; 005971f9
    JG 0x005971c7                       ; 005971fb
        ;   XREF to: 005971c7 (CONDITIONAL_JUMP)  ; LAB_005971c7
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 005971fd
    MOV EDX,dword ptr [EAX + 0xd0e4]    ; 00597203
    CMP EDX,0x1                         ; 00597209
    JNZ 0x005971c7                      ; 0059720c
        ;   XREF to: 005971c7 (CONDITIONAL_JUMP)  ; LAB_005971c7
    PUSH EDX                            ; 0059720e
    PUSH EDX                            ; 0059720f
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00597210
    PUSH ECX                            ; 00597213
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597214
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597219
    MOV dword ptr [EBX + 0xd07c],0x1    ; 0059721c
    JMP 0x00596b24                      ; 00597226
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x5d9629                       ; 0059722b | = "Walking...\n"
        ;   Label: caseD_1
    MOV EDX,dword ptr [0x005f1690]      ; 00597230 | g_CConsolePtr
    PUSH EDX                            ; 00597236 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00597237
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0059723c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0059723f
    PUSH dword ptr [EBP + 0x92]         ; 00597245
    PUSH EBX                            ; 0059724b
    CALL dword ptr [EAX + 0x144]        ; 0059724c
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 00597252
    ADD ESP,0x8                         ; 00597258
    TEST ECX,ECX                        ; 0059725b
    JNZ 0x005972a0                      ; 0059725d
        ;   XREF to: 005972a0 (CONDITIONAL_JUMP)  ; LAB_005972a0
    MOV EAX,[0x01d5ba14]                ; 0059725f | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00597264
    PUSH EAX                            ; 0059726b
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059726c
    CALL dword ptr [EDX + 0x10c]        ; 00597272
    ADD ESP,0x4                         ; 00597278
    TEST EAX,EAX                        ; 0059727b
    JZ 0x005972a0                       ; 0059727d
        ;   XREF to: 005972a0 (CONDITIONAL_JUMP)  ; LAB_005972a0
    MOV EAX,[0x005fe9dc]                ; 0059727f | g_CGamePtr
    MOV dword ptr [EAX + 0x244],0x1     ; 00597284 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d5ba14]                ; 0059728e | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00597293
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0059729a
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 005972a0
        ;   Label: LAB_005972a0
    TEST ESI,ESI                        ; 005972a6
    JNZ 0x005972d5                      ; 005972a8
        ;   XREF to: 005972d5 (CONDITIONAL_JUMP)  ; LAB_005972d5
    PUSH dword ptr [EBP + 0x92]         ; 005972aa
    PUSH EBX                            ; 005972b0
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 005972b1
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005972b6
    TEST EAX,EAX                        ; 005972b9
    JNZ 0x00596b24                      ; 005972bb
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH 0x1                            ; 005972c1
    PUSH ESI                            ; 005972c3
    MOV EDX,dword ptr [EBP + 0x6e]      ; 005972c4
    PUSH EDX                            ; 005972c7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 005972c8
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005972cd
    JMP 0x00596b24                      ; 005972d0
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    FLD float ptr [EBP + 0x66]          ; 005972d5
        ;   Label: LAB_005972d5
    FCOMP double ptr [0x005d9659]       ; 005972d8 | DAT_005d9659
    FNSTSW AX                           ; 005972de
    SAHF                                ; 005972e0
    JBE 0x00597334                      ; 005972e1
        ;   XREF to: 00597334 (CONDITIONAL_JUMP)  ; LAB_00597334
    PUSH 0x64                           ; 005972e3
        ;   Label: LAB_005972e3
    PUSH 0x0                            ; 005972e5
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 005972e7
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 005972ec
    CMP EAX,0x62                        ; 005972ef
    JLE 0x005973be                      ; 005972f2
        ;   XREF to: 005973be (CONDITIONAL_JUMP)  ; LAB_005973be
    XOR ESI,ESI                         ; 005972f8
        ;   Label: LAB_005972f8
    XOR EDI,EDI                         ; 005972fa
    MOV EAX,[0x00603b28]                ; 005972fc | g_CDemonSetPtr
        ;   Label: LAB_005972fc
    CMP EDI,dword ptr [EAX + 0x14d164]  ; 00597301 | g_CDemonSetInstance.actor_count
    JGE 0x0059733d                      ; 00597307
        ;   XREF to: 0059733d (CONDITIONAL_JUMP)  ; LAB_0059733d
    MOV ECX,dword ptr [0x007e1774]      ; 00597309 | DAT_007e1774
    PUSH ECX                            ; 0059730f
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x14d168] ; 00597310 | g_CDemonSetInstance.actors[0]
    PUSH EDX                            ; 00597317
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 00597318
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0059731d
    MOV dword ptr [EBX + 0xd0b8],EAX    ; 00597320
    TEST EAX,EAX                        ; 00597326
    JNZ 0x005973d0                      ; 00597328
        ;   XREF to: 005973d0 (CONDITIONAL_JUMP)  ; LAB_005973d0
    INC EDI                             ; 0059732e
        ;   Label: LAB_0059732e
    ADD ESI,0x4                         ; 0059732f
    JMP 0x005972fc                      ; 00597332
        ;   XREF to: 005972fc (UNCONDITIONAL_JUMP)  ; LAB_005972fc
    CMP dword ptr [EBX + 0xd07c],0x0    ; 00597334
        ;   Label: LAB_00597334
    JNZ 0x005972e3                      ; 0059733b
        ;   XREF to: 005972e3 (CONDITIONAL_JUMP)  ; LAB_005972e3
    MOV EDX,dword ptr [EBX + 0xd07c]    ; 0059733d
        ;   Label: LAB_0059733d
    TEST EDX,EDX                        ; 00597343
    JNZ 0x00596b24                      ; 00597345
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    MOV EAX,dword ptr [EBP + 0x72]      ; 0059734b
    PUSH 0x3eb2b8c2                     ; 0059734e
    MOV dword ptr [EAX + 0x8],EDX       ; 00597353
    PUSH 0x3e4ccccd                     ; 00597356
    MOV ECX,dword ptr [EAX + 0x8]       ; 0059735b
    MOV dword ptr [EAX + 0x4],ECX       ; 0059735e
    MOV ECX,dword ptr [EAX + 0x4]       ; 00597361
    MOV dword ptr [EAX],ECX             ; 00597364
    MOV EAX,[0x005e76c8]                ; 00597366 | DAT_005e76c8
    MOV dword ptr [EBP + -0x5a],EDX     ; 0059736b
    MOV dword ptr [EBP + -0x52],EAX     ; 0059736e
    LEA EAX,[EBP + -0x5a]               ; 00597371
    MOV dword ptr [EBP + -0x56],EDX     ; 00597374
    PUSH EAX                            ; 00597377
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 00597378
    PUSH EAX                            ; 0059737e
    MOV EDX,dword ptr [EAX + 0x154]     ; 0059737f
    CALL dword ptr [EDX + 0xc4]         ; 00597385
    ADD ESP,0x4                         ; 0059738b
    PUSH EAX                            ; 0059738e
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0059738f
    ADD EAX,0x20                        ; 00597395
    PUSH EAX                            ; 00597398
    PUSH EBX                            ; 00597399
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0059739a
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0059739f
    TEST EAX,EAX                        ; 005973a2
    JL 0x00597473                       ; 005973a4
        ;   XREF to: 00597473 (CONDITIONAL_JUMP)  ; LAB_00597473
    JLE 0x00596b24                      ; 005973aa
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EBX                            ; 005973b0
    CALL core_baal.cpp_FUN_00597700     ; 005973b1
        ;   XREF to: 00597700 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597700()
    ADD ESP,0x4                         ; 005973b6
    JMP 0x00596b24                      ; 005973b9
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    CMP dword ptr [EBX + 0xd07c],0x0    ; 005973be
        ;   Label: LAB_005973be
    JNZ 0x005972f8                      ; 005973c5
        ;   XREF to: 005972f8 (CONDITIONAL_JUMP)  ; LAB_005972f8
    JMP 0x0059733d                      ; 005973cb
        ;   XREF to: 0059733d (UNCONDITIONAL_JUMP)  ; LAB_0059733d
    PUSH EAX                            ; 005973d0
        ;   Label: LAB_005973d0
    MOV EDX,dword ptr [EAX + 0x154]     ; 005973d1
    CALL dword ptr [EDX + 0x10c]        ; 005973d7
    ADD ESP,0x4                         ; 005973dd
    TEST EAX,EAX                        ; 005973e0
    JG 0x0059732e                       ; 005973e2
        ;   XREF to: 0059732e (CONDITIONAL_JUMP)  ; LAB_0059732e
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 005973e8
    MOV EDX,dword ptr [EAX + 0xd0e4]    ; 005973ee
    CMP EDX,0x1                         ; 005973f4
    JNZ 0x0059732e                      ; 005973f7
        ;   XREF to: 0059732e (CONDITIONAL_JUMP)  ; LAB_0059732e
    PUSH 0x3e32b8c2                     ; 005973fd
    MOV EAX,dword ptr [EBP + 0x72]      ; 00597402
    PUSH 0x40000000                     ; 00597405
    MOV dword ptr [EBX + 0xd07c],EDX    ; 0059740a
    MOV EDI,0x40000000                  ; 00597410
    MOV dword ptr [EAX + 0x8],0x0       ; 00597415
    XOR ECX,ECX                         ; 0059741c
    MOV EDX,dword ptr [EAX + 0x8]       ; 0059741e
    MOV dword ptr [EAX + 0x4],EDX       ; 00597421
    MOV EDX,dword ptr [EAX + 0x4]       ; 00597424
    MOV dword ptr [EAX],EDX             ; 00597427
    LEA EAX,[EBP + -0x36]               ; 00597429
    MOV dword ptr [EBP + -0x36],ECX     ; 0059742c
    MOV dword ptr [EBP + -0x32],ECX     ; 0059742f
    MOV dword ptr [EBP + -0x2e],EDI     ; 00597432
    PUSH EAX                            ; 00597435
    MOV EAX,dword ptr [EBX + 0xd0b8]    ; 00597436
    PUSH ECX                            ; 0059743c
    ADD EAX,0xd068                      ; 0059743d
    PUSH EAX                            ; 00597442
    PUSH EBX                            ; 00597443
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 00597444
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00597449
    TEST EAX,EAX                        ; 0059744c
    JLE 0x0059733d                      ; 0059744e
        ;   XREF to: 0059733d (CONDITIONAL_JUMP)  ; LAB_0059733d
    PUSH 0x1                            ; 00597454
    PUSH 0xa                            ; 00597456
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00597458
    PUSH EAX                            ; 0059745b
    MOV dword ptr [EBX + 0xd07c],0x0    ; 0059745c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597466
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0059746b
    JMP 0x0059733d                      ; 0059746e
        ;   XREF to: 0059733d (UNCONDITIONAL_JUMP)  ; LAB_0059733d
    PUSH EBX                            ; 00597473
        ;   Label: LAB_00597473
    PUSH 0x5d9635                       ; 00597474 | = "%s gave up chase - I'm confused\n"
    MOV EDI,dword ptr [0x005f1690]      ; 00597479 | g_CConsolePtr
    PUSH EDI                            ; 0059747f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00597480
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00597485
    PUSH 0x1                            ; 00597488
    PUSH 0x0                            ; 0059748a
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059748c
    PUSH EAX                            ; 0059748f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597490
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597495
    JMP 0x00596b24                      ; 00597498
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    TEST dword ptr [EBX + 0xce5c],0x7fffffff ; 0059749d
        ;   Label: caseD_5
    JNZ 0x005974e3                      ; 005974a7
        ;   XREF to: 005974e3 (CONDITIONAL_JUMP)  ; caseD_4
    MOV dword ptr [EBX + 0xce5c],0x41a00000 ; 005974a9
    PUSH dword ptr [EBP + 0x92]         ; 005974b3
        ;   Label: LAB_005974b3
    MOV EAX,dword ptr [EBX + 0x154]     ; 005974b9
    PUSH EBX                            ; 005974bf
    CALL dword ptr [EAX + 0x144]        ; 005974c0
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 005974c6
    ADD ESP,0x8                         ; 005974cc
    TEST EDX,EDX                        ; 005974cf
    JNZ 0x00597513                      ; 005974d1
        ;   XREF to: 00597513 (CONDITIONAL_JUMP)  ; LAB_00597513
    PUSH 0x1                            ; 005974d3
    PUSH EBX                            ; 005974d5
    CALL core_baal.cpp_FUN_00597be0     ; 005974d6
        ;   XREF to: 00597be0 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597be0()
    ADD ESP,0x8                         ; 005974db
    JMP 0x00596b24                      ; 005974de
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    TEST dword ptr [EBX + 0xce5c],0x7fffffff ; 005974e3
        ;   Label: caseD_4
    JNZ 0x005974fb                      ; 005974ed
        ;   XREF to: 005974fb (CONDITIONAL_JUMP)  ; caseD_3
    MOV dword ptr [EBX + 0xce5c],0x41700000 ; 005974ef
    JMP 0x005974b3                      ; 005974f9
        ;   XREF to: 005974b3 (UNCONDITIONAL_JUMP)  ; LAB_005974b3
    TEST dword ptr [EBX + 0xce5c],0x7fffffff ; 005974fb
        ;   Label: caseD_3
    JNZ 0x005974b3                      ; 00597505
        ;   XREF to: 005974b3 (CONDITIONAL_JUMP)  ; LAB_005974b3
    MOV dword ptr [EBX + 0xce5c],0x41200000 ; 00597507
    JMP 0x005974b3                      ; 00597511
        ;   XREF to: 005974b3 (UNCONDITIONAL_JUMP)  ; LAB_005974b3
    FLD float ptr [0x005e76c8]          ; 00597513 | DAT_005e76c8
        ;   Label: LAB_00597513
    FADD double ptr [0x005d9669]        ; 00597519 | DAT_005d9669
    FLD float ptr [EBP + 0x66]          ; 0059751f
    FCOMPP                              ; 00597522
    FNSTSW AX                           ; 00597524
    SAHF                                ; 00597526
    JBE 0x00597556                      ; 00597527
        ;   XREF to: 00597556 (CONDITIONAL_JUMP)  ; LAB_00597556
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00597529
    PUSH ECX                            ; 0059752c
    CALL core_motion.cpp_FUN_004fc930   ; 0059752d
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 00597532
    ADD ESP,0x4                         ; 00597535
    FLD float ptr [EBP + 0x76]          ; 00597538
    FCOMP double ptr [0x005d9671]       ; 0059753b | DAT_005d9671
    FNSTSW AX                           ; 00597541
    SAHF                                ; 00597543
    JBE 0x00597556                      ; 00597544
        ;   XREF to: 00597556 (CONDITIONAL_JUMP)  ; LAB_00597556
    PUSH 0x1                            ; 00597546
    PUSH EBX                            ; 00597548
    CALL core_baal.cpp_FUN_00597be0     ; 00597549
        ;   XREF to: 00597be0 (UNCONDITIONAL_CALL)  ; undefined core_baal.cpp_FUN_00597be0()
    ADD ESP,0x8                         ; 0059754e
    JMP 0x00596b24                      ; 00597551
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EDI,dword ptr [EBP + 0x6e]      ; 00597556
        ;   Label: LAB_00597556
    PUSH EDI                            ; 00597559
    CALL core_motion.cpp_FUN_004fc930   ; 0059755a
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059755f
    ADD ESP,0x4                         ; 00597562
    FLD float ptr [EBP + 0x76]          ; 00597565
    FLD1                                ; 00597568
    FCOMPP                              ; 0059756a
    FNSTSW AX                           ; 0059756c
    SAHF                                ; 0059756e
    JNC 0x00596b24                      ; 0059756f
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    PUSH EDI                            ; 00597575
    CALL core_motion.cpp_FUN_004fc930   ; 00597576
        ;   XREF to: 004fc930 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_004fc930(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0059757b
    ADD ESP,0x4                         ; 0059757e
    FLD float ptr [EBP + 0x76]          ; 00597581
    FCOMP float ptr [0x005d9661]        ; 00597584 | DAT_005d9661
    FNSTSW AX                           ; 0059758a
    SAHF                                ; 0059758c
    JNC 0x00596b24                      ; 0059758d
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    LEA EAX,[EBP + 0xfffffef2]          ; 00597593
    PUSH EAX                            ; 00597599
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0059759a
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV EAX,dword ptr [EBX + 0xce5c]    ; 0059759f
    ADD ESP,0x4                         ; 005975a5
    MOV dword ptr [EBP + 0xfffffef6],EAX ; 005975a8
    MOV dword ptr [EBP + 0xffffff26],EBX ; 005975ae
    MOV dword ptr [EBP + 0xffffff2a],EBX ; 005975b4
    CMP ESI,0x5                         ; 005975ba
    JZ 0x0059767a                       ; 005975bd
        ;   XREF to: 0059767a (CONDITIONAL_JUMP)  ; LAB_0059767a
    LEA EAX,[EBP + 0xfffffef2]          ; 005975c3
    MOV ECX,dword ptr [EBX + 0xd078]    ; 005975c9
    PUSH EAX                            ; 005975cf
    IMUL EAX,ECX,0x30                   ; 005975d0
    ADD EAX,dword ptr [EBP + 0x56]      ; 005975d3
    PUSH 0x40200000                     ; 005975d6
    PUSH EAX                            ; 005975db
    PUSH 0x2cfd900                      ; 005975dc | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff76]          ; 005975e1
    LEA EDI,[EBP + -0x12]               ; 005975e7
    CALL core_xform.cpp_FUN_00583260    ; 005975ea
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 005975ef
    LEA EAX,[EBP + -0x12]               ; 005975f2
    LEA ESI,[EBP + 0xffffff76]          ; 005975f5
    PUSH EAX                            ; 005975fb
    MOVSD ES:EDI,ESI                    ; 005975fc
    MOVSD ES:EDI,ESI                    ; 005975fd
    MOVSD ES:EDI,ESI                    ; 005975fe
    PUSH EBX                            ; 005975ff
    LEA ESI,[EBP + 0x6]                 ; 00597600
    CALL core_actor.cpp_FUN_00408b80    ; 00597603
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00597608
    LEA EAX,[EBP + -0x6]                ; 0059760b
    PUSH EAX                            ; 0059760e
    LEA EDI,[EBP + -0x6]                ; 0059760f
    LEA ESI,[EBP + 0x6]                 ; 00597612
    PUSH EBX                            ; 00597615
    MOVSD ES:EDI,ESI                    ; 00597616
    MOVSD ES:EDI,ESI                    ; 00597617
    MOVSD ES:EDI,ESI                    ; 00597618
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00597619
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0059761e
    MOV EAX,[0x01d5ba14]                ; 00597621 | DAT_01d5ba14
        ;   Label: LAB_00597621
    MOV dword ptr [EBX + 0xce5c],0x0    ; 00597626
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00597630
    PUSH EAX                            ; 00597637
    MOV EDX,dword ptr [EAX + 0x154]     ; 00597638
    CALL dword ptr [EDX + 0x10c]        ; 0059763e
    ADD ESP,0x4                         ; 00597644
    TEST EAX,EAX                        ; 00597647
    JZ 0x0059765b                       ; 00597649
        ;   XREF to: 0059765b (CONDITIONAL_JUMP)  ; LAB_0059765b
    PUSH 0x1                            ; 0059764b
    PUSH 0x0                            ; 0059764d
    MOV EDI,dword ptr [EBP + 0x6e]      ; 0059764f
    PUSH EDI                            ; 00597652
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00597653
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597658
    PUSH 0x1                            ; 0059765b
        ;   Label: LAB_0059765b
    PUSH 0x0                            ; 0059765d
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0059765f
    PUSH EAX                            ; 00597662
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 00597663
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0059766d
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00597672
    JMP 0x00596b24                      ; 00597675
        ;   XREF to: 00596b24 (UNCONDITIONAL_JUMP)  ; caseD_8
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0059767a
        ;   Label: LAB_0059767a
    TEST EDX,EDX                        ; 00597680
    JZ 0x00597621                       ; 00597682
        ;   XREF to: 00597621 (CONDITIONAL_JUMP)  ; LAB_00597621
    PUSH 0x2                            ; 00597684
    MOV EAX,EDX                         ; 00597686
    PUSH EAX                            ; 00597688
    MOV EDX,dword ptr [EDX + 0x154]     ; 00597689
    CALL dword ptr [EDX + 0x78]         ; 0059768f
    ADD ESP,0x8                         ; 00597692
    JMP 0x00597621                      ; 00597695
        ;   XREF to: 00597621 (UNCONDITIONAL_JUMP)  ; LAB_00597621
    MOV ECX,dword ptr [EBP + 0x6e]      ; 00597697
        ;   Label: LAB_00597697
    PUSH ECX                            ; 0059769a
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0059769b
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005976a0
    ADD ESP,0x4                         ; 005976a3
    CMP EAX,0x9                         ; 005976a6
    JA 0x00596b24                       ; 005976a9
        ;   XREF to: 00596b24 (CONDITIONAL_JUMP)  ; caseD_8
    JMP dword ptr [EAX*0x4 + 0x596878]  ; 005976af | caseD_0 | caseD_2 | caseD_3
        ;   Label: switchD
    MOV dword ptr [EBX + 0xcde0],0xbf800000 ; 005976b6
        ;   Label: LAB_005976b6
    JMP 0x00596b58                      ; 005976c0
        ;   XREF to: 00596b58 (UNCONDITIONAL_JUMP)  ; LAB_00596b58
    PUSH EBX                            ; 005976c5
        ;   Label: LAB_005976c5
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 005976c6
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005976cb
    MOV EDI,dword ptr [EBP + 0x6e]      ; 005976ce
    PUSH EDI                            ; 005976d1
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 005976d2
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005976d7
    PUSH dword ptr [EBP + 0x92]         ; 005976da
    PUSH EBX                            ; 005976e0
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 005976e1
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005976e6
    LEA ESP,[EBP + 0x7a]                ; 005976e9
    POP EBP                             ; 005976ec
    POP EDI                             ; 005976ed
    POP ESI                             ; 005976ee
    POP EBX                             ; 005976ef
    RET                                 ; 005976f0

