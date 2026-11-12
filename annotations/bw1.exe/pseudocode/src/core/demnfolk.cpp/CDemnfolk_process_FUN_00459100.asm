; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_CDemnfolk_process_FUN_00459100(CDemnfolk *this_ptr,float delta_time)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00459038 = 0045a497
;   TerminatedCString s_s_picked_up_s_using_hand_005d7efb
;   TerminatedCString s_core_demnfolk_cpp_005d7f1a
;   undefined4 DAT_005d7f2f
;   TerminatedCString s_s_lugging_s_005d7f34
;   TerminatedCString s_core_demnfolk_cpp_005d7f43
;   undefined4 DAT_005d7f58
;   TerminatedCString s_s_tossing_s_005d7f5d
;   TerminatedCString s_fall_wav_005d7f6c
;   TerminatedCString s_s_confused_while_walking_005d7f77
;   TerminatedCString s_s_rising_from_the_grave_005d7fa1
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005d7fbb
;   TerminatedCString s_s_tossing_005d7fdc
;   TerminatedCString s_s_lugging_005d7fe8
;   TerminatedCString s_s_gave_up_swing_005d7ff4
;   ... and 39 more
;
; Called Functions:
;   core_actor.cpp_CVector3f_ctor_FUN_0040cfe0
;   core_actor.cpp_FUN_00408ac0
;   core_actor.cpp_FUN_00408b00
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_00408bb0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60
;   ... and 35 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00459100
        ;   Label: core_demnfolk.cpp_CDemnfolk_process_FUN_00459100
    PUSH ESI                            ; 00459101
    PUSH EDI                            ; 00459102
    PUSH EBP                            ; 00459103
    MOV EBP,ESP                         ; 00459104
    SUB ESP,0x534                       ; 00459106
    SUB EBP,0x7a                        ; 0045910c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0045910f
    PUSH dword ptr [EBP + 0x92]         ; 00459115
    PUSH EBX                            ; 0045911b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0045911c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00459121
    TEST EAX,EAX                        ; 00459124
    JZ 0x0045922e                       ; 00459126
        ;   XREF to: 0045922e (CONDITIONAL_JUMP)  ; LAB_0045922e
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045912c
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00459132
    JZ 0x00459245                       ; 0045913a
        ;   XREF to: 00459245 (CONDITIONAL_JUMP)  ; LAB_00459245
    MOV ECX,dword ptr [EBX + 0x26fc]    ; 00459140
        ;   Label: LAB_00459140
    TEST ECX,ECX                        ; 00459146
    JNZ 0x00459275                      ; 00459148
        ;   XREF to: 00459275 (CONDITIONAL_JUMP)  ; LAB_00459275
    MOV ESI,dword ptr [EBX + 0xc358]    ; 0045914e
    PUSH ESI                            ; 00459154
    CALL sound_sndmain.cpp_FUN_005735a0 ; 00459155
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045915a
    TEST EAX,EAX                        ; 0045915d
    JZ 0x0045919c                       ; 0045915f
        ;   XREF to: 0045919c (CONDITIONAL_JUMP)  ; LAB_0045919c
    MOV EAX,[0x0061d95c]                ; 00459161 | g_CGamePtr
    CMP dword ptr [EAX + 0x280],0x1     ; 00459166 | g_CGameInstance.slow_motion_mode
    JNZ 0x004592d5                      ; 0045916d
        ;   XREF to: 004592d5 (CONDITIONAL_JUMP)  ; LAB_004592d5
    FLD1                                ; 00459173
    FSUB float ptr [EAX + 0x284]        ; 00459175 | g_CGameInstance.slow_motion_timer
    FLD double ptr [0x005d801b]         ; 0045917b | DAT_005d801b
    FXCH                                ; 00459181
    FMUL ST1                            ; 00459183
    FADDP                               ; 00459185
    MOV EDX,dword ptr [EBX + 0xc358]    ; 00459187
    FSTP float ptr [EBP + -0x1e]        ; 0045918d
    PUSH dword ptr [EBP + -0x1e]        ; 00459190
    PUSH EDX                            ; 00459193
    CALL sound_sndmain.cpp_FUN_00573980 ; 00459194
        ;   XREF to: 00573980 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00573980(uint sfx_handle, float base_frequency)
        ;   Label: LAB_00459194
    ADD ESP,0x8                         ; 00459199
    FLD float ptr [EBX + 0xc344]        ; 0045919c
        ;   Label: LAB_0045919c
    FLDZ                                ; 004591a2
    FCOMPP                              ; 004591a4
    FNSTSW AX                           ; 004591a6
    SAHF                                ; 004591a8
    JC 0x004592e6                       ; 004591a9
        ;   XREF to: 004592e6 (CONDITIONAL_JUMP)  ; LAB_004592e6
    FLD float ptr [EBP + 0x92]          ; 004591af
        ;   Label: LAB_004591af
    LEA EAX,[EBP + 0xfffffc2a]          ; 004591b5
    FMUL float ptr [EBX + 0xc1d0]       ; 004591bb
    ADD EAX,0xc                         ; 004591c1
    FMUL float ptr [EBX + 0xc368]       ; 004591c4
    MOV dword ptr [EBP + 0x2a],EAX      ; 004591ca
    LEA EAX,[EBP + 0xfffffb82]          ; 004591cd
    ADD EAX,0xc                         ; 004591d3
    MOV dword ptr [EBP + 0x6],EAX       ; 004591d6
    LEA EAX,[EBX + 0x158]               ; 004591d9
    FSTP float ptr [EBP + -0x12]        ; 004591df
    MOV dword ptr [EBP + 0x62],EAX      ; 004591e2
    FLD float ptr [EBP + -0x12]         ; 004591e5
        ;   Label: LAB_004591e5
    FLDZ                                ; 004591e8
    FCOMPP                              ; 004591ea
    FNSTSW AX                           ; 004591ec
    SAHF                                ; 004591ee
    JNC 0x00459c88                      ; 004591ef
        ;   XREF to: 00459c88 (CONDITIONAL_JUMP)  ; LAB_00459c88
    LEA EAX,[EBP + -0x12]               ; 004591f5
    PUSH EAX                            ; 004591f8
    MOV EAX,dword ptr [EBP + 0x62]      ; 004591f9
    PUSH EAX                            ; 004591fc
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 004591fd
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00459202
    MOV ESI,EAX                         ; 00459205
    CMP EAX,0xb                         ; 00459207
    JNC 0x00459c2b                      ; 0045920a
        ;   XREF to: 00459c2b (CONDITIONAL_JUMP)  ; LAB_00459c2b
    CMP EAX,0x5                         ; 00459210
    JNC 0x00459c6a                      ; 00459213
        ;   XREF to: 00459c6a (CONDITIONAL_JUMP)  ; LAB_00459c6a
    CMP EAX,0x2                         ; 00459219
    JZ 0x004596a4                       ; 0045921c
        ;   XREF to: 004596a4 (CONDITIONAL_JUMP)  ; LAB_004596a4
    PUSH ESI                            ; 00459222
    PUSH EBX                            ; 00459223
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00459224
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00459229
    JMP 0x004591e5                      ; 0045922c
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV ESI,dword ptr [EBX + 0xc350]    ; 0045922e
        ;   Label: LAB_0045922e
    PUSH ESI                            ; 00459234
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00459235
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0045923a
    LEA ESP,[EBP + 0x7a]                ; 0045923d
        ;   Label: LAB_0045923d
    POP EBP                             ; 00459240
    POP EDI                             ; 00459241
    POP ESI                             ; 00459242
    POP EBX                             ; 00459243
    RET                                 ; 00459244
    PUSH EBX                            ; 00459245
        ;   Label: LAB_00459245
    MOV EAX,dword ptr [EBX + 0x154]     ; 00459246
    CALL dword ptr [EAX + 0x10c]        ; 0045924c
    ADD ESP,0x4                         ; 00459252
    TEST EAX,EAX                        ; 00459255
    JNZ 0x00459140                      ; 00459257
        ;   XREF to: 00459140 (CONDITIONAL_JUMP)  ; LAB_00459140
    PUSH 0x1                            ; 0045925d
    PUSH 0x18                           ; 0045925f
    LEA EAX,[EBX + 0x158]               ; 00459261
    PUSH EAX                            ; 00459267
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00459268
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045926d
    JMP 0x00459140                      ; 00459270
        ;   XREF to: 00459140 (UNCONDITIONAL_JUMP)  ; LAB_00459140
    MOV EAX,dword ptr [ECX + 0x154]     ; 00459275
        ;   Label: LAB_00459275
    PUSH 0x0                            ; 0045927b
    MOV dword ptr [EBP + 0x76],EAX      ; 0045927d
    LEA EAX,[EBX + 0x158]               ; 00459280
    PUSH EAX                            ; 00459286
    LEA ESI,[EBP + 0xfffffee2]          ; 00459287
    MOV dword ptr [EBP + 0x3a],ECX      ; 0045928d
    CALL core_skeleton.cpp_FUN_00569130 ; 00459290
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    ADD ESP,0x8                         ; 00459295
    LEA EAX,[EBP + 0xfffffde6]          ; 00459298
    PUSH EAX                            ; 0045929e
    LEA EDI,[EBP + 0xfffffde6]          ; 0045929f
    LEA ESI,[EBP + 0xfffffee2]          ; 004592a5
    PUSH EBX                            ; 004592ab
    MOV ECX,dword ptr [EBP + 0x3a]      ; 004592ac
    MOV EAX,dword ptr [EBP + 0x76]      ; 004592af
    PUSH ECX                            ; 004592b2
    MOVSD ES:EDI,ESI                    ; 004592b3
    MOVSD ES:EDI,ESI                    ; 004592b4
    MOVSD ES:EDI,ESI                    ; 004592b5
    CALL dword ptr [EAX + 0x110]        ; 004592b6
    ADD ESP,0xc                         ; 004592bc
    TEST EAX,EAX                        ; 004592bf
    JNZ 0x0045923d                      ; 004592c1
        ;   XREF to: 0045923d (CONDITIONAL_JUMP)  ; LAB_0045923d
    MOV dword ptr [EBX + 0x26fc],EAX    ; 004592c7
    LEA ESP,[EBP + 0x7a]                ; 004592cd
    POP EBP                             ; 004592d0
    POP EDI                             ; 004592d1
    POP ESI                             ; 004592d2
    POP EBX                             ; 004592d3
    RET                                 ; 004592d4
    MOV EAX,dword ptr [EBX + 0xc358]    ; 004592d5
        ;   Label: LAB_004592d5
    PUSH 0x3f800000                     ; 004592db
    PUSH EAX                            ; 004592e0
    JMP 0x00459194                      ; 004592e1
        ;   XREF to: 00459194 (UNCONDITIONAL_JUMP)  ; LAB_00459194
    FLD float ptr [EBX + 0xc344]        ; 004592e6
        ;   Label: LAB_004592e6
    FSUB float ptr [EBP + 0x92]         ; 004592ec
    FSTP float ptr [EBX + 0xc344]       ; 004592f2
    JMP 0x004591af                      ; 004592f8
        ;   XREF to: 004591af (UNCONDITIONAL_JUMP)  ; LAB_004591af
    MOV EAX,0x1                         ; 004592fd
        ;   Label: LAB_004592fd
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 00459302
    MOV dword ptr [EBP + -0xa],EAX      ; 00459308
    TEST EDX,EDX                        ; 0045930b
    JNZ 0x0045931d                      ; 0045930d
        ;   XREF to: 0045931d (CONDITIONAL_JUMP)  ; LAB_0045931d
    PUSH EBX                            ; 0045930f
        ;   Label: LAB_0045930f
    CALL core_demnfolk.cpp_FUN_0045d060 ; 00459310
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 00459315
    JMP 0x004591e5                      ; 00459318
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV EAX,[0x005fe698]                ; 0045931d | DAT_005fe698
        ;   Label: LAB_0045931d
    MOV dword ptr [EBP + 0xfffffe1e],EAX ; 00459322
    LEA EAX,[EBP + 0xfffffe16]          ; 00459328
    LEA ESI,[EBP + 0xfffffe82]          ; 0045932e
    PUSH EAX                            ; 00459334
    LEA EDI,[EBP + 0xfffffc7e]          ; 00459335
    XOR ECX,ECX                         ; 0045933b
    PUSH EBX                            ; 0045933d
    MOV dword ptr [EBP + 0xfffffe16],ECX ; 0045933e
    MOV dword ptr [EBP + 0xfffffe1a],ECX ; 00459344
    CALL core_actor.cpp_FUN_00408b40    ; 0045934a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe82]          ; 0045934f
    MOVSD ES:EDI,ESI                    ; 00459355
    MOVSD ES:EDI,ESI                    ; 00459356
    MOVSD ES:EDI,ESI                    ; 00459357
    FLD float ptr [EBP + 0xfffffc7e]    ; 00459358
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045935e
    FLD float ptr [EBP + 0xfffffc82]    ; 00459364
    FXCH                                ; 0045936a
    FSUB float ptr [EAX + 0x20]         ; 0045936c
    FLD float ptr [EBP + 0xfffffc86]    ; 0045936f
    FXCH                                ; 00459375
    FSTP float ptr [EBP + 0xfffffe0a]   ; 00459377
    FXCH                                ; 0045937d
    FSUB float ptr [EAX + 0x24]         ; 0045937f
    LEA EDI,[EBP + 0xffffff72]          ; 00459382
    FSTP float ptr [EBP + 0xfffffe0e]   ; 00459388
    FSUB float ptr [EAX + 0x28]         ; 0045938e
    LEA ESI,[EBP + 0xfffffe0a]          ; 00459391
    FSTP float ptr [EBP + 0xfffffe12]   ; 00459397
    MOVSD ES:EDI,ESI                    ; 0045939d
    MOVSD ES:EDI,ESI                    ; 0045939e
    MOVSD ES:EDI,ESI                    ; 0045939f
    FLD float ptr [EBP + 0xffffff72]    ; 004593a0
    FMUL ST0                            ; 004593a6
    FLD float ptr [EBP + 0xffffff7a]    ; 004593a8
    FMUL ST0                            ; 004593ae
    FADDP                               ; 004593b0
    FSQRT                               ; 004593b2
    XOR EDI,EDI                         ; 004593b4
    ADD ESP,0x8                         ; 004593b6
    MOV dword ptr [EBP + 0xffffff76],EDI ; 004593b9
    FLD1                                ; 004593bf
    FCOMPP                              ; 004593c1
    FNSTSW AX                           ; 004593c3
    SAHF                                ; 004593c5
    JC 0x0045930f                       ; 004593c6
        ;   XREF to: 0045930f (CONDITIONAL_JUMP)  ; LAB_0045930f
    MOV EDX,0x40800000                  ; 004593cc
    LEA EAX,[EBP + 0xfffffd7a]          ; 004593d1
    LEA ESI,[EBP + 0xfffffdaa]          ; 004593d7
    PUSH EAX                            ; 004593dd
    MOV dword ptr [EBP + 0xfffffd7a],EDI ; 004593de
    MOV dword ptr [EBP + 0xfffffd82],EDI ; 004593e4
    PUSH EBX                            ; 004593ea
    LEA EDI,[EBP + 0xfffffcae]          ; 004593eb
    MOV dword ptr [EBP + 0xfffffd7e],EDX ; 004593f1
    CALL core_actor.cpp_FUN_00408b40    ; 004593f7
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffdaa]          ; 004593fc
    MOVSD ES:EDI,ESI                    ; 00459402
    MOVSD ES:EDI,ESI                    ; 00459403
    MOVSD ES:EDI,ESI                    ; 00459404
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 00459405
    LEA EDI,[EBP + 0xfffffed6]          ; 0045940b
    LEA ESI,[ESI + 0x20]                ; 00459411
    MOVSD ES:EDI,ESI                    ; 00459414
    MOVSD ES:EDI,ESI                    ; 00459415
    MOVSD ES:EDI,ESI                    ; 00459416
    ADD ESP,0x8                         ; 00459417
    MOV ESI,dword ptr [0x00622c18]      ; 0045941a | g_CDemonSetPtr
    MOV EAX,dword ptr [EBP + 0xfffffcb2] ; 00459420
    PUSH ESI                            ; 00459426 | g_CDemonSetInstance
    MOV dword ptr [EBP + 0xfffffeda],EAX ; 00459427
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0045942d
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 00459432
    PUSH EBX                            ; 00459435
    MOV EDI,dword ptr [0x00622c18]      ; 00459436 | g_CDemonSetPtr
    PUSH EDI                            ; 0045943c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0045943d
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459442
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459445
    PUSH EAX                            ; 0045944b
    MOV EDX,dword ptr [0x00622c18]      ; 0045944c | g_CDemonSetPtr
    PUSH EDX                            ; 00459452 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 00459453
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 00459458
    LEA EAX,[EBP + 0xfffffed6]          ; 0045945b
    PUSH EAX                            ; 00459461
    LEA EAX,[EBP + 0xfffffcae]          ; 00459462
    PUSH EAX                            ; 00459468
    MOV ECX,dword ptr [0x00622c18]      ; 00459469 | g_CDemonSetPtr
    PUSH ECX                            ; 0045946f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230 ; 00459470
        ;   XREF to: 00557230 (UNCONDITIONAL_CALL)  ; int core_setcolid.cpp_CDemonSet_testLineOcclusion_FUN_00557230(CDemonSet * this_ptr, CVector3f * start_pos, CVector3f * end_pos)
    ADD ESP,0xc                         ; 00459475
    TEST EAX,EAX                        ; 00459478
    JZ 0x00459481                       ; 0045947a
        ;   XREF to: 00459481 (CONDITIONAL_JUMP)  ; LAB_00459481
    XOR ESI,ESI                         ; 0045947c
    MOV dword ptr [EBP + -0xa],ESI      ; 0045947e
    MOV EDI,dword ptr [0x00622c18]      ; 00459481 | g_CDemonSetPtr
        ;   Label: LAB_00459481
    PUSH EDI                            ; 00459487 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 00459488
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EAX,dword ptr [EBP + -0xa]      ; 0045948d
    ADD ESP,0x4                         ; 00459490
    TEST EAX,EAX                        ; 00459493
    JZ 0x004594b8                       ; 00459495
        ;   XREF to: 004594b8 (CONDITIONAL_JUMP)  ; LAB_004594b8
    PUSH 0x0                            ; 00459497
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459499
    PUSH EBX                            ; 0045949f
    MOV ESI,dword ptr [EAX + 0x154]     ; 004594a0
    PUSH EAX                            ; 004594a6
    CALL dword ptr [ESI + 0xec]         ; 004594a7
    ADD ESP,0xc                         ; 004594ad
    TEST EAX,EAX                        ; 004594b0
    JZ 0x0045930f                       ; 004594b2
        ;   XREF to: 0045930f (CONDITIONAL_JUMP)  ; LAB_0045930f
    CMP dword ptr [EBP + -0xa],0x0      ; 004594b8
        ;   Label: LAB_004594b8
    JNZ 0x004591e5                      ; 004594bc
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH EBX                            ; 004594c2
    CALL core_demnfolk.cpp_FUN_0045d060 ; 004594c3
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 004594c8
    JMP 0x004591e5                      ; 004594cb
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 004594d0
        ;   Label: LAB_004594d0
    JNZ 0x004594e7                      ; 004594d7
        ;   XREF to: 004594e7 (CONDITIONAL_JUMP)  ; LAB_004594e7
    PUSH EBX                            ; 004594d9
    CALL core_demnfolk.cpp_FUN_0045d060 ; 004594da
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 004594df
    JMP 0x004591e5                      ; 004594e2
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV EDI,dword ptr [EBX + 0xc2fc]    ; 004594e7
        ;   Label: LAB_004594e7
    PUSH EDI                            ; 004594ed
    MOV EAX,dword ptr [EBP + 0x62]      ; 004594ee
    PUSH EAX                            ; 004594f1
    LEA ESI,[EBP + 0xfffffc42]          ; 004594f2
    LEA EDI,[EBP + -0x52]               ; 004594f8
    CALL core_skeleton.cpp_FUN_00569040 ; 004594fb
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00459500
    LEA EAX,[EBP + -0x52]               ; 00459503
    LEA ESI,[EBP + 0xfffffc42]          ; 00459506
    PUSH EAX                            ; 0045950c
    MOVSD ES:EDI,ESI                    ; 0045950d
    MOVSD ES:EDI,ESI                    ; 0045950e
    MOVSD ES:EDI,ESI                    ; 0045950f
    PUSH EBX                            ; 00459510
    LEA ESI,[EBP + 0xfffffc72]          ; 00459511
    LEA EDI,[EBP + 0xfffffd4a]          ; 00459517
    CALL core_actor.cpp_FUN_00408b40    ; 0045951d
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffc72]          ; 00459522
    MOVSD ES:EDI,ESI                    ; 00459528
    MOVSD ES:EDI,ESI                    ; 00459529
    MOVSD ES:EDI,ESI                    ; 0045952a
    MOV EDX,dword ptr [EBX + 0xc338]    ; 0045952b
    ADD ESP,0x8                         ; 00459531
    TEST EDX,EDX                        ; 00459534
    JL 0x00459560                       ; 00459536
        ;   XREF to: 00459560 (CONDITIONAL_JUMP)  ; LAB_00459560
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459538
    PUSH EAX                            ; 0045953e
    MOV ESI,dword ptr [EAX + 0x154]     ; 0045953f
    CALL dword ptr [ESI + 0xf4]         ; 00459545
    ADD ESP,0x4                         ; 0045954b
    CMP EAX,EBX                         ; 0045954e
    JZ 0x00459599                       ; 00459550
        ;   XREF to: 00459599 (CONDITIONAL_JUMP)  ; LAB_00459599
    PUSH EBX                            ; 00459552
    CALL core_demnfolk.cpp_FUN_0045d060 ; 00459553
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 00459558
    JMP 0x004591e5                      ; 0045955b
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459560
        ;   Label: LAB_00459560
    FLD float ptr [EBP + 0xfffffd4a]    ; 00459566
    FSUB float ptr [EAX + 0x20]         ; 0045956c
    FMUL ST0                            ; 0045956f
    FLD float ptr [EBP + 0xfffffd52]    ; 00459571
    FSUB float ptr [EAX + 0x28]         ; 00459577
    FMUL ST0                            ; 0045957a
    FADDP                               ; 0045957c
    FSQRT                               ; 0045957e
    FCOMP double ptr [0x005d80a3]       ; 00459580 | DAT_005d80a3
    FNSTSW AX                           ; 00459586
    SAHF                                ; 00459588
    JBE 0x00459599                      ; 00459589
        ;   XREF to: 00459599 (CONDITIONAL_JUMP)  ; LAB_00459599
    PUSH EBX                            ; 0045958b
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045958c
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 00459591
    JMP 0x004591e5                      ; 00459594
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    LEA EAX,[EBP + 0xfffffb46]          ; 00459599
        ;   Label: LAB_00459599
    PUSH EAX                            ; 0045959f
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 004595a0
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004595a5
    PUSH 0x41a00000                     ; 004595a8
    PUSH 0x41200000                     ; 004595ad
    LEA ESI,[EBP + 0xfffffb46]          ; 004595b2
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 004595b8
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004595bd
    ADD ESP,0x8                         ; 004595c0
    FLD float ptr [EBP + 0x76]          ; 004595c3
    FMUL float ptr [EBX + 0xc368]       ; 004595c6
    PUSH ESI                            ; 004595cc
    MOV dword ptr [EBP + 0xfffffb7a],EBX ; 004595cd
    MOV dword ptr [EBP + 0xfffffb7e],EBX ; 004595d3
    FSTP float ptr [EBP + 0xfffffb4a]   ; 004595d9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 004595df
    PUSH EAX                            ; 004595e5
    MOV EDI,dword ptr [EAX + 0x154]     ; 004595e6
    CALL dword ptr [EDI + 0x108]        ; 004595ec
    FLD float ptr [EBP + 0xfffffb4a]    ; 004595f2
    FLDZ                                ; 004595f8
    ADD ESP,0x8                         ; 004595fa
    FXCH                                ; 004595fd
    FSTP double ptr [EBP + -0x2a]       ; 004595ff
    FCOMP double ptr [EBP + -0x2a]      ; 00459602
    FNSTSW AX                           ; 00459605
    SAHF                                ; 00459607
    JNC 0x0045963f                      ; 00459608
        ;   XREF to: 0045963f (CONDITIONAL_JUMP)  ; LAB_0045963f
    FLD double ptr [EBP + -0x2a]        ; 0045960a
    FMUL double ptr [0x005d807b]        ; 0045960d | DAT_005d807b
    FMUL double ptr [0x005d8083]        ; 00459613 | DAT_005d8083
    PUSH 0x0                            ; 00459619
    CALL crt_math.c_round_FUN_005c03a0  ; 0045961b
        ;   XREF to: 005c03a0 (UNCONDITIONAL_CALL)  ; undefined crt_math.c_round_FUN_005c03a0()
    FISTP dword ptr [EBP + 0x56]        ; 00459620
    MOV ECX,dword ptr [EBP + 0x56]      ; 00459623
    PUSH ECX                            ; 00459626
    PUSH 0x0                            ; 00459627
    LEA EAX,[EBP + 0xfffffd4a]          ; 00459629
    PUSH EAX                            ; 0045962f
    MOV ESI,dword ptr [0x0061dca4]      ; 00459630 | g_CGorePtr
    PUSH ESI                            ; 00459636
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 00459637
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 0045963c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045963f
        ;   Label: LAB_0045963f
    PUSH EAX                            ; 00459645
    MOV ESI,dword ptr [EAX + 0x154]     ; 00459646
    CALL dword ptr [ESI + 0x10c]        ; 0045964c
    ADD ESP,0x4                         ; 00459652
    TEST EAX,EAX                        ; 00459655
    JLE 0x00459678                      ; 00459657
        ;   XREF to: 00459678 (CONDITIONAL_JUMP)  ; LAB_00459678
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459659
    PUSH EAX                            ; 0045965f
    MOV ESI,dword ptr [EAX + 0x154]     ; 00459660
    CALL dword ptr [ESI + 0xf0]         ; 00459666
    ADD ESP,0x4                         ; 0045966c
    PUSH EBX                            ; 0045966f
    CALL core_demnfolk.cpp_FUN_0045d060 ; 00459670
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 00459675
    MOV EDI,dword ptr [EBX + 0xc354]    ; 00459678
        ;   Label: LAB_00459678
    PUSH EDI                            ; 0045967e
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045967f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00459684
    TEST EAX,EAX                        ; 00459687
    JNZ 0x004591e5                      ; 00459689
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH EBX                            ; 0045968f
    MOV EAX,dword ptr [EBX + 0x154]     ; 00459690
    CALL dword ptr [EAX + 0x154]        ; 00459696
    ADD ESP,0x4                         ; 0045969c
    JMP 0x004591e5                      ; 0045969f
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV ECX,dword ptr [EBX + 0xc278]    ; 004596a4
        ;   Label: LAB_004596a4
    TEST ECX,ECX                        ; 004596aa
    JZ 0x004591e5                       ; 004596ac
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    MOV ESI,dword ptr [EBX + 0xc27c]    ; 004596b2
    PUSH ESI                            ; 004596b8
    PUSH EBX                            ; 004596b9
    MOV EDI,ECX                         ; 004596ba
    MOV dword ptr [EBX + 0xc278],0x0    ; 004596bc
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 004596c6
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    MOV ESI,EAX                         ; 004596cb
    ADD ESP,0x8                         ; 004596cd
    TEST EAX,EAX                        ; 004596d0
    JL 0x004591e5                       ; 004596d2
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH 0x0                            ; 004596d8
    PUSH 0x3e4ccccd                     ; 004596da
    PUSH EDI                            ; 004596df
    PUSH EAX                            ; 004596e0
    PUSH EBX                            ; 004596e1
    CALL core_charactr.cpp_FUN_004325b0 ; 004596e2
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 004596e7
    PUSH ESI                            ; 004596ea
    PUSH EDI                            ; 004596eb
    PUSH EBX                            ; 004596ec
    PUSH 0x5d7efb                       ; 004596ed | = "%s picked up %s using hand %d\n"
    MOV EDI,dword ptr [0x00611100]      ; 004596f2 | g_CConsolePtr
    PUSH EDI                            ; 004596f8 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004596f9
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0x14                        ; 004596fe
    JMP 0x004591e5                      ; 00459701
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH 0x2                            ; 00459706
        ;   Label: LAB_00459706
    PUSH EBX                            ; 00459708
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 00459709
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    ADD ESP,0x8                         ; 0045970e
    MOV ESI,EAX                         ; 00459711
    TEST EAX,EAX                        ; 00459713
    JL 0x0045978b                       ; 00459715
        ;   XREF to: 0045978b (CONDITIONAL_JUMP)  ; LAB_0045978b
    IMUL EAX,ESI,0x78                   ; 00459717
        ;   Label: LAB_00459717
    ADD EAX,EBX                         ; 0045971a
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 0045971c
    TEST EDX,EDX                        ; 00459722
    JZ 0x004591e5                       ; 00459724
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH EDX                            ; 0045972a
    PUSH EBX                            ; 0045972b
    PUSH 0x5d7f34                       ; 0045972c | = "%s lugging %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 00459731 | g_CConsolePtr
    PUSH EDI                            ; 00459737 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00459738
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    MOV EDX,0x40c00000                  ; 0045973d
    XOR EAX,EAX                         ; 00459742
    ADD ESP,0x10                        ; 00459744
    MOV dword ptr [EBP + 0xfffffe8e],EAX ; 00459747
    LEA EAX,[EBP + 0xfffffe8e]          ; 0045974d
    MOV ECX,0x41880000                  ; 00459753
    PUSH EAX                            ; 00459758
    MOV dword ptr [EBP + 0xfffffe92],EDX ; 00459759
    MOV dword ptr [EBP + 0xfffffe96],ECX ; 0045975f
    PUSH ESI                            ; 00459765
    MOV EDI,dword ptr [EBX + 0x154]     ; 00459766
    PUSH EBX                            ; 0045976c
    CALL dword ptr [EDI + 0x128]        ; 0045976d
    ADD ESP,0xc                         ; 00459773
    MOV EAX,dword ptr [EBX + 0x154]     ; 00459776
    PUSH EBX                            ; 0045977c
    CALL dword ptr [EAX + 0x148]        ; 0045977d
    ADD ESP,0x4                         ; 00459783
    JMP 0x004591e5                      ; 00459786
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV ECX,0x5d7f1a                    ; 0045978b | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_0045978b
    MOV EDI,0x24a                       ; 00459790
    PUSH 0x5d7f2f                       ; 00459795 | DAT_005d7f2f
    MOV dword ptr [0x01d1d400],ECX      ; 0045979a | DAT_01d1d400
    MOV dword ptr [0x01d1d404],EDI      ; 004597a0 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004597a6
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004597ab
    JMP 0x00459717                      ; 004597ae
        ;   XREF to: 00459717 (UNCONDITIONAL_JUMP)  ; LAB_00459717
    PUSH 0x3                            ; 004597b3
        ;   Label: LAB_004597b3
    PUSH EBX                            ; 004597b5
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 004597b6
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    ADD ESP,0x8                         ; 004597bb
    MOV dword ptr [EBP + 0x16],EAX      ; 004597be
    TEST EAX,EAX                        ; 004597c1
    JL 0x00459892                       ; 004597c3
        ;   XREF to: 00459892 (CONDITIONAL_JUMP)  ; LAB_00459892
    IMUL EAX,dword ptr [EBP + 0x16],0x78 ; 004597c9
        ;   Label: LAB_004597c9
    LEA EDX,[EBX + EAX*0x1]             ; 004597cd
    MOV ECX,dword ptr [EDX + 0x25b0]    ; 004597d0
    MOV dword ptr [EBP + 0x26],EDX      ; 004597d6
    TEST ECX,ECX                        ; 004597d9
    JZ 0x004591e5                       ; 004597db
        ;   XREF to: 004591e5 (CONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH ECX                            ; 004597e1
    PUSH EBX                            ; 004597e2
    PUSH 0x5d7f5d                       ; 004597e3 | = "%s tossing %s\n"
    MOV EDI,dword ptr [0x00611100]      ; 004597e8 | g_CConsolePtr
    PUSH EDI                            ; 004597ee | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 004597ef
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    XOR EAX,EAX                         ; 004597f4
    MOV ECX,0x3f800000                  ; 004597f6
    MOV dword ptr [EBP + 0xfffffd9e],EAX ; 004597fb
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 00459801
    MOV dword ptr [EBP + 0xfffffda6],ECX ; 00459807
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0045980d
    ADD ESP,0x10                        ; 00459813
    TEST ESI,ESI                        ; 00459816
    JNZ 0x004598b9                      ; 00459818
        ;   XREF to: 004598b9 (CONDITIONAL_JUMP)  ; LAB_004598b9
    FLD float ptr [0x005d8077]          ; 0045981e | DAT_005d8077
        ;   Label: LAB_0045981e
    FLD float ptr [EBP + 0xfffffd9e]    ; 00459824
    FMUL ST1                            ; 0045982a
    FLD float ptr [EBP + 0xfffffda2]    ; 0045982c
    FMUL ST2                            ; 00459832
    FLD float ptr [EBP + 0xfffffda6]    ; 00459834
    FMULP ST3                           ; 0045983a
    LEA ESI,[EBP + 0xfffffd9e]          ; 0045983c
    MOV EDX,dword ptr [EBP + 0x16]      ; 00459842
    PUSH ESI                            ; 00459845
    FXCH                                ; 00459846
    FSTP float ptr [EBP + 0xfffffd9e]   ; 00459848
    FSTP float ptr [EBP + 0xfffffda2]   ; 0045984e
    FSTP float ptr [EBP + 0xfffffda6]   ; 00459854
    FLD float ptr [EBP + 0xfffffda2]    ; 0045985a
    PUSH EDX                            ; 00459860
    FADD float ptr [0x005d809b]         ; 00459861 | DAT_005d809b
    PUSH EBX                            ; 00459867
    FSTP float ptr [EBP + 0xfffffda2]   ; 00459868
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045986e
    CALL dword ptr [EAX + 0x128]        ; 00459874
    ADD ESP,0xc                         ; 0045987a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045987d
    PUSH EBX                            ; 00459883
    CALL dword ptr [EAX + 0x148]        ; 00459884
    ADD ESP,0x4                         ; 0045988a
    JMP 0x004591e5                      ; 0045988d
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    MOV EDI,0x5d7f43                    ; 00459892 | = "..\\core\\demnfolk.cpp"
        ;   Label: LAB_00459892
    MOV EAX,0x261                       ; 00459897
    PUSH 0x5d7f58                       ; 0045989c | DAT_005d7f58
    MOV dword ptr [0x01d1d400],EDI      ; 004598a1 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004598a7 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004598ac
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004598b1
    JMP 0x004597c9                      ; 004598b4
        ;   XREF to: 004597c9 (UNCONDITIONAL_JUMP)  ; LAB_004597c9
    MOV EAX,dword ptr [EBP + 0x26]      ; 004598b9
        ;   Label: LAB_004598b9
    MOV EAX,dword ptr [EAX + 0x25b0]    ; 004598bc
    PUSH EAX                            ; 004598c2
    MOV EDI,dword ptr [EAX + 0x154]     ; 004598c3
    LEA ESI,[EBP + 0xfffffbca]          ; 004598c9
    CALL dword ptr [EDI + 0x1c]         ; 004598cf
    MOV ECX,0x6                         ; 004598d2
    LEA EDI,[EBP + 0xfffffc2a]          ; 004598d7
    LEA ESI,[EBP + 0xfffffbca]          ; 004598dd
    MOVSD.REP ES:EDI,ESI                ; 004598e3
    MOV EAX,dword ptr [EBP + 0x2a]      ; 004598e5
    FLD float ptr [EBP + 0xfffffc2e]    ; 004598e8
    FLD float ptr [EBP + 0xfffffc2a]    ; 004598ee
    FADD float ptr [EAX]                ; 004598f4
    FLD float ptr [EBP + 0xfffffc32]    ; 004598f6
    FXCH                                ; 004598fc
    FSTP float ptr [EBP + 0xfffffe46]   ; 004598fe
    FXCH                                ; 00459904
    FADD float ptr [EAX + 0x4]          ; 00459906
    LEA EDI,[EBP + 0xfffffc5a]          ; 00459909
    FSTP float ptr [EBP + 0xfffffe4a]   ; 0045990f
    FADD float ptr [EAX + 0x8]          ; 00459915
    LEA ESI,[EBP + 0xfffffe46]          ; 00459918
    FSTP float ptr [EBP + 0xfffffe4e]   ; 0045991e
    MOVSD ES:EDI,ESI                    ; 00459924
    MOVSD ES:EDI,ESI                    ; 00459925
    MOVSD ES:EDI,ESI                    ; 00459926
    FLD float ptr [EBP + 0xfffffc5a]    ; 00459927
    FMUL float ptr [0x005d8073]         ; 0045992d | DAT_005d8073
    FLD float ptr [EBP + 0xfffffc5e]    ; 00459933
    FMUL float ptr [0x005d8073]         ; 00459939 | DAT_005d8073
    ADD ESP,0x4                         ; 0045993f
    LEA EAX,[EBP + 0xfffffe76]          ; 00459942
    FLD float ptr [EBP + 0xfffffc62]    ; 00459948
    FMUL float ptr [0x005d8073]         ; 0045994e | DAT_005d8073
    PUSH EAX                            ; 00459954
    LEA EDI,[EBP + 0xfffffe76]          ; 00459955
    LEA ESI,[EBP + 0xfffffcde]          ; 0045995b
    MOV EAX,dword ptr [EBP + 0x26]      ; 00459961
    FXCH ST2                            ; 00459964
    FSTP float ptr [EBP + 0xfffffcde]   ; 00459966
    FSTP float ptr [EBP + 0xfffffce2]   ; 0045996c
    FSTP float ptr [EBP + 0xfffffce6]   ; 00459972
    MOVSD ES:EDI,ESI                    ; 00459978
    MOVSD ES:EDI,ESI                    ; 00459979
    MOVSD ES:EDI,ESI                    ; 0045997a
    MOV EDI,dword ptr [EAX + 0x25b0]    ; 0045997b
    PUSH EDI                            ; 00459981
    LEA ESI,[EBP + 0xfffffe2e]          ; 00459982
    LEA EDI,[EBP + 0xfffffd6e]          ; 00459988
    CALL core_actor.cpp_FUN_00408b40    ; 0045998e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xfffffe2e]          ; 00459993
    MOVSD ES:EDI,ESI                    ; 00459999
    MOVSD ES:EDI,ESI                    ; 0045999a
    MOVSD ES:EDI,ESI                    ; 0045999b
    ADD ESP,0x8                         ; 0045999c
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045999f
    PUSH EAX                            ; 004599a5
    MOV EDI,dword ptr [EAX + 0x154]     ; 004599a6
    LEA ESI,[EBP + 0xfffffb9a]          ; 004599ac
    CALL dword ptr [EDI + 0x1c]         ; 004599b2
    MOV ECX,0x6                         ; 004599b5
    LEA EDI,[EBP + 0xfffffb82]          ; 004599ba
    LEA ESI,[EBP + 0xfffffb9a]          ; 004599c0
    MOVSD.REP ES:EDI,ESI                ; 004599c6
    MOV EAX,dword ptr [EBP + 0x6]       ; 004599c8
    FLD float ptr [EBP + 0xfffffb86]    ; 004599cb
    FLD float ptr [EBP + 0xfffffb82]    ; 004599d1
    FADD float ptr [EAX]                ; 004599d7
    FLD float ptr [EBP + 0xfffffb8a]    ; 004599d9
    FXCH                                ; 004599df
    FSTP float ptr [EBP + 0xfffffca2]   ; 004599e1
    FXCH                                ; 004599e7
    FADD float ptr [EAX + 0x4]          ; 004599e9
    LEA EDI,[EBP + 0xfffffd3e]          ; 004599ec
    FSTP float ptr [EBP + 0xfffffca6]   ; 004599f2
    FADD float ptr [EAX + 0x8]          ; 004599f8
    LEA ESI,[EBP + 0xfffffca2]          ; 004599fb
    FSTP float ptr [EBP + 0xfffffcaa]   ; 00459a01
    MOVSD ES:EDI,ESI                    ; 00459a07
    MOVSD ES:EDI,ESI                    ; 00459a08
    MOVSD ES:EDI,ESI                    ; 00459a09
    FLD float ptr [EBP + 0xfffffd3e]    ; 00459a0a
    FMUL float ptr [0x005d8073]         ; 00459a10 | DAT_005d8073
    FLD float ptr [EBP + 0xfffffd42]    ; 00459a16
    FMUL float ptr [0x005d8073]         ; 00459a1c | DAT_005d8073
    FLD float ptr [EBP + 0xfffffd46]    ; 00459a22
    FMUL float ptr [0x005d8073]         ; 00459a28 | DAT_005d8073
    ADD ESP,0x4                         ; 00459a2e
    LEA EAX,[EBP + 0xfffffe3a]          ; 00459a31
    LEA EDI,[EBP + 0xfffffe3a]          ; 00459a37
    LEA ESI,[EBP + 0xffffff06]          ; 00459a3d
    FXCH ST2                            ; 00459a43
    FSTP float ptr [EBP + 0xffffff06]   ; 00459a45
    FSTP float ptr [EBP + 0xffffff0a]   ; 00459a4b
    FSTP float ptr [EBP + 0xffffff0e]   ; 00459a51
    MOVSD ES:EDI,ESI                    ; 00459a57
    MOVSD ES:EDI,ESI                    ; 00459a58
    MOVSD ES:EDI,ESI                    ; 00459a59
    PUSH EAX                            ; 00459a5a
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459a5b
    PUSH EAX                            ; 00459a61
    LEA ESI,[EBP + 0xffffff36]          ; 00459a62
    LEA EDI,[EBP + 0xfffffc4e]          ; 00459a68
    CALL core_actor.cpp_FUN_00408b40    ; 00459a6e
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + 0xffffff36]          ; 00459a73
    MOVSD ES:EDI,ESI                    ; 00459a79
    MOVSD ES:EDI,ESI                    ; 00459a7a
    MOVSD ES:EDI,ESI                    ; 00459a7b
    FLD float ptr [EBP + 0xfffffc4e]    ; 00459a7c
    FLD float ptr [EBP + 0xfffffc52]    ; 00459a82
    FLD float ptr [EBP + 0xfffffc56]    ; 00459a88
    LEA EDI,[EBP + 0xffffff2a]          ; 00459a8e
    LEA ESI,[EBP + -0x5e]               ; 00459a94
    FXCH ST2                            ; 00459a97
    FSUB float ptr [EBP + 0xfffffd6e]   ; 00459a99
    FXCH                                ; 00459a9f
    FSUB float ptr [EBP + 0xfffffd72]   ; 00459aa1
    FXCH ST2                            ; 00459aa7
    FSUB float ptr [EBP + 0xfffffd76]   ; 00459aa9
    FXCH                                ; 00459aaf
    FSTP float ptr [EBP + -0x5e]        ; 00459ab1
    FXCH                                ; 00459ab4
    FSTP float ptr [EBP + -0x5a]        ; 00459ab6
    FSTP float ptr [EBP + -0x56]        ; 00459ab9
    MOVSD ES:EDI,ESI                    ; 00459abc
    MOVSD ES:EDI,ESI                    ; 00459abd
    MOVSD ES:EDI,ESI                    ; 00459abe
    FLD float ptr [EBP + 0xffffff2e]    ; 00459abf
    FMUL ST0                            ; 00459ac5
    FLD float ptr [EBP + 0xffffff2a]    ; 00459ac7
    FMUL ST0                            ; 00459acd
    FADDP                               ; 00459acf
    FLD float ptr [EBP + 0xffffff32]    ; 00459ad1
    FMUL ST0                            ; 00459ad7
    FADDP                               ; 00459ad9
    FSQRT                               ; 00459adb
    ADD ESP,0x8                         ; 00459add
    FST float ptr [EBP + -0x16]         ; 00459ae0
    FLDZ                                ; 00459ae3
    FCOMPP                              ; 00459ae5
    FNSTSW AX                           ; 00459ae7
    SAHF                                ; 00459ae9
    JNC 0x0045981e                      ; 00459aea
        ;   XREF to: 0045981e (CONDITIONAL_JUMP)  ; LAB_0045981e
    LEA EAX,[EBP + 0xffffff2a]          ; 00459af0
    PUSH EAX                            ; 00459af6
    PUSH EBX                            ; 00459af7
    LEA ESI,[EBP + 0xfffffd02]          ; 00459af8
    LEA EDI,[EBP + 0xfffffcc6]          ; 00459afe
    CALL core_actor.cpp_FUN_00408b00    ; 00459b04
        ;   XREF to: 00408b00 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b00()
    LEA ESI,[EBP + 0xfffffd02]          ; 00459b09
    MOVSD ES:EDI,ESI                    ; 00459b0f
    MOVSD ES:EDI,ESI                    ; 00459b10
    MOVSD ES:EDI,ESI                    ; 00459b11
    FLD1                                ; 00459b12
    FLD float ptr [EBP + 0xfffffcc6]    ; 00459b14
    FXCH                                ; 00459b1a
    FDIV float ptr [EBP + -0x16]        ; 00459b1c
    FXCH                                ; 00459b1f
    FMUL ST1                            ; 00459b21
    FLD float ptr [EBP + 0xfffffcca]    ; 00459b23
    FMUL ST2                            ; 00459b29
    FLD float ptr [EBP + 0xfffffcce]    ; 00459b2b
    FMULP ST3                           ; 00459b31
    LEA EDI,[EBP + 0xfffffc66]          ; 00459b33
    LEA ESI,[EBP + 0xfffffdce]          ; 00459b39
    FXCH                                ; 00459b3f
    FSTP float ptr [EBP + 0xfffffdce]   ; 00459b41
    FSTP float ptr [EBP + 0xfffffdd2]   ; 00459b47
    FSTP float ptr [EBP + 0xfffffdd6]   ; 00459b4d
    MOVSD ES:EDI,ESI                    ; 00459b53
    MOVSD ES:EDI,ESI                    ; 00459b54
    MOVSD ES:EDI,ESI                    ; 00459b55
    LEA EAX,[EBP + 0xfffffc66]          ; 00459b56
    LEA ESI,[EBP + 0xfffffd9e]          ; 00459b5c
    ADD ESP,0x8                         ; 00459b62
    CMP ESI,EAX                         ; 00459b65
    JZ 0x0045981e                       ; 00459b67
        ;   XREF to: 0045981e (CONDITIONAL_JUMP)  ; LAB_0045981e
    MOV EAX,dword ptr [EBP + 0xfffffc66] ; 00459b6d
    MOV dword ptr [EBP + 0xfffffd9e],EAX ; 00459b73
    MOV EAX,dword ptr [EBP + 0xfffffc6a] ; 00459b79
    MOV dword ptr [EBP + 0xfffffda2],EAX ; 00459b7f
    MOV EAX,dword ptr [EBP + 0xfffffc6e] ; 00459b85
    MOV dword ptr [EBP + 0xfffffda6],EAX ; 00459b8b
    JMP 0x0045981e                      ; 00459b91
        ;   XREF to: 0045981e (UNCONDITIONAL_JUMP)  ; LAB_0045981e
    MOV EDX,dword ptr [EBX + 0xc2fc]    ; 00459b96
        ;   Label: LAB_00459b96
    PUSH EDX                            ; 00459b9c
    MOV ECX,dword ptr [EBP + 0x62]      ; 00459b9d
    PUSH ECX                            ; 00459ba0
    LEA ESI,[EBP + 0xffffff42]          ; 00459ba1
    LEA EDI,[EBP + 0xfffffcba]          ; 00459ba7
    CALL core_skeleton.cpp_FUN_00569040 ; 00459bad
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 00459bb2
    LEA EAX,[EBP + 0xfffffcba]          ; 00459bb5
    LEA ESI,[EBP + 0xffffff42]          ; 00459bbb
    PUSH EAX                            ; 00459bc1
    MOVSD ES:EDI,ESI                    ; 00459bc2
    MOVSD ES:EDI,ESI                    ; 00459bc3
    MOVSD ES:EDI,ESI                    ; 00459bc4
    PUSH EBX                            ; 00459bc5
    LEA ESI,[EBP + 0xfffffcd2]          ; 00459bc6
    CALL core_actor.cpp_FUN_00408b40    ; 00459bcc
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00459bd1
    PUSH 0x0                            ; 00459bd4
    LEA EDI,[EBP + 0xfffffd62]          ; 00459bd6
    PUSH 0x3                            ; 00459bdc
    LEA ESI,[EBP + 0xfffffcd2]          ; 00459bde
    LEA EAX,[EBP + 0xfffffd62]          ; 00459be4
    PUSH 0x0                            ; 00459bea
    MOVSD ES:EDI,ESI                    ; 00459bec
    MOVSD ES:EDI,ESI                    ; 00459bed
    MOVSD ES:EDI,ESI                    ; 00459bee
    PUSH EAX                            ; 00459bef
    MOV ESI,dword ptr [0x0061dca4]      ; 00459bf0 | g_CGorePtr
    PUSH ESI                            ; 00459bf6
    CALL core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060 ; 00459bf7
        ;   XREF to: 004e6060 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnBloodBurst_FUN_004e6060(CGore * this_ptr, CVector3f * position, CVector3f * direction, int count, ...)
    ADD ESP,0x14                        ; 00459bfc
    MOV EAX,dword ptr [EBX + 0x154]     ; 00459bff
    PUSH EBX                            ; 00459c05
    CALL dword ptr [EAX + 0x154]        ; 00459c06
    ADD ESP,0x4                         ; 00459c0c
    JMP 0x004591e5                      ; 00459c0f
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    PUSH 0x5d7f6c                       ; 00459c14 | = "fall-?.wav"
        ;   Label: LAB_00459c14
    MOV EAX,dword ptr [EBX + 0x154]     ; 00459c19
    PUSH EBX                            ; 00459c1f
    CALL dword ptr [EAX + 0x2c]         ; 00459c20
    ADD ESP,0x8                         ; 00459c23
    JMP 0x004591e5                      ; 00459c26
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    JBE 0x00459706                      ; 00459c2b
        ;   XREF to: 00459706 (CONDITIONAL_JUMP)  ; LAB_00459706
        ;   Label: LAB_00459c2b
    CMP EAX,0x65                        ; 00459c31
    JNC 0x00459c4e                      ; 00459c34
        ;   XREF to: 00459c4e (CONDITIONAL_JUMP)  ; LAB_00459c4e
    CMP EAX,0xc                         ; 00459c36
    JZ 0x004597b3                       ; 00459c39
        ;   XREF to: 004597b3 (CONDITIONAL_JUMP)  ; LAB_004597b3
    PUSH ESI                            ; 00459c3f
    PUSH EBX                            ; 00459c40
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00459c41
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00459c46
    JMP 0x004591e5                      ; 00459c49
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    JBE 0x00459c14                      ; 00459c4e
        ;   XREF to: 00459c14 (CONDITIONAL_JUMP)  ; LAB_00459c14
        ;   Label: LAB_00459c4e
    CMP EAX,0x29a                       ; 00459c50
    JZ 0x00459b96                       ; 00459c55
        ;   XREF to: 00459b96 (CONDITIONAL_JUMP)  ; LAB_00459b96
    PUSH ESI                            ; 00459c5b
    PUSH EBX                            ; 00459c5c
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00459c5d
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00459c62
    JMP 0x004591e5                      ; 00459c65
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    JBE 0x004592fd                      ; 00459c6a
        ;   XREF to: 004592fd (CONDITIONAL_JUMP)  ; LAB_004592fd
        ;   Label: LAB_00459c6a
    CMP EAX,0xa                         ; 00459c70
    JZ 0x004594d0                       ; 00459c73
        ;   XREF to: 004594d0 (CONDITIONAL_JUMP)  ; LAB_004594d0
    PUSH ESI                            ; 00459c79
    PUSH EBX                            ; 00459c7a
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 00459c7b
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00459c80
    JMP 0x004591e5                      ; 00459c83
        ;   XREF to: 004591e5 (UNCONDITIONAL_JUMP)  ; LAB_004591e5
    FLD float ptr [EBP + 0x92]          ; 00459c88
        ;   Label: LAB_00459c88
    FMUL float ptr [EBX + 0xc1d0]       ; 00459c8e
    SUB ESP,0x4                         ; 00459c94
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 00459c97
    MOV dword ptr [EBX + 0x2524],EAX    ; 00459c9d
    FSTP float ptr [ESP]                ; 00459ca3
    PUSH EBX                            ; 00459ca6
    CALL core_charactr.cpp_FUN_00435320 ; 00459ca7
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    MOV EAX,dword ptr [EBX + 0xc334]    ; 00459cac
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00459cb2
    ADD ESP,0x8                         ; 00459cb9
    TEST EDI,EDI                        ; 00459cbc
    JZ 0x00459ef5                       ; 00459cbe
        ;   XREF to: 00459ef5 (CONDITIONAL_JUMP)  ; LAB_00459ef5
    MOV EAX,dword ptr [EBX + 0xc340]    ; 00459cc4
        ;   Label: LAB_00459cc4
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00459cca
    JZ 0x00459f09                       ; 00459cd2
        ;   XREF to: 00459f09 (CONDITIONAL_JUMP)  ; LAB_00459f09
    LEA ESI,[EBX + 0x158]               ; 00459cd8
        ;   Label: LAB_00459cd8
    PUSH ESI                            ; 00459cde
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00459cdf
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00459ce4
    MOV EDI,dword ptr [EAX + 0x24]      ; 00459ce7
    PUSH dword ptr [EBP + 0x92]         ; 00459cea
    XOR EAX,EAX                         ; 00459cf0
    PUSH EBX                            ; 00459cf2
    MOV dword ptr [EBP + -0x1a],EAX     ; 00459cf3
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 00459cf6
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00459cfb
    TEST EAX,EAX                        ; 00459cfe
    JZ 0x0045aed0                       ; 00459d00
        ;   XREF to: 0045aed0 (CONDITIONAL_JUMP)  ; LAB_0045aed0
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00459d06
    CMP EAX,0x2                         ; 00459d0c
    JNC 0x00459f4c                      ; 00459d0f
        ;   XREF to: 00459f4c (CONDITIONAL_JUMP)  ; LAB_00459f4c
    CMP EAX,0x1                         ; 00459d15
    JNZ 0x00459f57                      ; 00459d18
        ;   XREF to: 00459f57 (CONDITIONAL_JUMP)  ; LAB_00459f57
    CMP EDI,0x4                         ; 00459d1e
        ;   Label: LAB_00459d1e
    JZ 0x00459d36                       ; 00459d21
        ;   XREF to: 00459d36 (CONDITIONAL_JUMP)  ; LAB_00459d36
    PUSH 0x1                            ; 00459d23
    PUSH 0x4                            ; 00459d25
    LEA EAX,[EBX + 0x158]               ; 00459d27
        ;   Label: LAB_00459d27
    PUSH EAX                            ; 00459d2d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00459d2e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459d33
        ;   Label: LAB_00459d33
    FLD float ptr [EBX + 0xc1e4]        ; 00459d36
        ;   Label: LAB_00459d36
    FLDZ                                ; 00459d3c
    FCOMPP                              ; 00459d3e
    FNSTSW AX                           ; 00459d40
    SAHF                                ; 00459d42
    JNC 0x00459d57                      ; 00459d43
        ;   XREF to: 00459d57 (CONDITIONAL_JUMP)  ; LAB_00459d57
    FLD float ptr [EBX + 0xc1e4]        ; 00459d45
    FSUB float ptr [EBP + 0x92]         ; 00459d4b
    FSTP float ptr [EBX + 0xc1e4]       ; 00459d51
    LEA EAX,[EBX + 0x158]               ; 00459d57
        ;   Label: LAB_00459d57
    PUSH EAX                            ; 00459d5d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00459d5e
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 00459d63
    MOV EAX,dword ptr [EAX + 0x24]      ; 00459d66
    LEA EDX,[EBX + 0x249c]              ; 00459d69
    MOV dword ptr [EBP + 0x6a],EAX      ; 00459d6f
    MOV dword ptr [EBP + 0x5e],EDX      ; 00459d72
    CMP EAX,0x24                        ; 00459d75
    JNZ 0x0045aefc                      ; 00459d78
        ;   XREF to: 0045aefc (CONDITIONAL_JUMP)  ; LAB_0045aefc
    MOV EAX,EDX                         ; 00459d7e
    MOV dword ptr [EDX + 0x8],0x0       ; 00459d80
    MOV ECX,dword ptr [EAX + 0x8]       ; 00459d87
    MOV dword ptr [EDX + 0x4],ECX       ; 00459d8a
    MOV ECX,dword ptr [EAX + 0x4]       ; 00459d8d
    MOV dword ptr [EDX],ECX             ; 00459d90
    PUSH EBX                            ; 00459d92
        ;   Label: LAB_00459d92
    MOV ESI,dword ptr [EBP + 0x6a]      ; 00459d93
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 00459d96
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00459d9b
    CMP ESI,0x24                        ; 00459d9e
    JZ 0x00459dc1                       ; 00459da1
        ;   XREF to: 00459dc1 (CONDITIONAL_JUMP)  ; LAB_00459dc1
    LEA EAX,[EBX + 0x158]               ; 00459da3
    PUSH EAX                            ; 00459da9
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 00459daa
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00459daf
    PUSH dword ptr [EBP + 0x92]         ; 00459db2
    PUSH EBX                            ; 00459db8
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 00459db9
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00459dbe
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 00459dc1
        ;   Label: LAB_00459dc1
    JNZ 0x00459ea6                      ; 00459dc8
        ;   XREF to: 00459ea6 (CONDITIONAL_JUMP)  ; LAB_00459ea6
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 00459dce
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00459dd4
    JZ 0x0045b0ac                       ; 00459ddc
        ;   XREF to: 0045b0ac (CONDITIONAL_JUMP)  ; LAB_0045b0ac
    MOV EDI,dword ptr [EBX + 0xc310]    ; 00459de2
    PUSH 0x3e4ccccd                     ; 00459de8
    PUSH EDI                            ; 00459ded
    MOV EAX,dword ptr [EBX + 0xc328]    ; 00459dee
    PUSH EAX                            ; 00459df4
    PUSH EBX                            ; 00459df5
    CALL core_charactr.cpp_FUN_00430a90 ; 00459df6
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc328]    ; 00459dfb
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00459e01
    ADD ESP,0x10                        ; 00459e08
    TEST EDX,EDX                        ; 00459e0b
    JZ 0x00459e2b                       ; 00459e0d
        ;   XREF to: 00459e2b (CONDITIONAL_JUMP)  ; LAB_00459e2b
    MOV ECX,dword ptr [EBX + 0xc308]    ; 00459e0f
    PUSH 0x3e4ccccd                     ; 00459e15
    PUSH ECX                            ; 00459e1a
    MOV ESI,dword ptr [EBX + 0xc32c]    ; 00459e1b
    PUSH ESI                            ; 00459e21
    PUSH EBX                            ; 00459e22
    CALL core_charactr.cpp_FUN_00430a90 ; 00459e23
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 00459e28
    MOV EDI,dword ptr [EBX + 0xc314]    ; 00459e2b
        ;   Label: LAB_00459e2b
    PUSH 0x3e4ccccd                     ; 00459e31
    PUSH EDI                            ; 00459e36
    MOV EAX,dword ptr [EBX + 0xc330]    ; 00459e37
    PUSH EAX                            ; 00459e3d
    PUSH EBX                            ; 00459e3e
    CALL core_charactr.cpp_FUN_00430a90 ; 00459e3f
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc330]    ; 00459e44
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00459e4a
    ADD ESP,0x10                        ; 00459e51
    TEST EDX,EDX                        ; 00459e54
    JZ 0x00459e74                       ; 00459e56
        ;   XREF to: 00459e74 (CONDITIONAL_JUMP)  ; LAB_00459e74
    MOV ECX,dword ptr [EBX + 0xc30c]    ; 00459e58
    PUSH 0x3e4ccccd                     ; 00459e5e
    PUSH ECX                            ; 00459e63
    MOV ESI,dword ptr [EBX + 0xc334]    ; 00459e64
    PUSH ESI                            ; 00459e6a
    PUSH EBX                            ; 00459e6b
    CALL core_charactr.cpp_FUN_00430a90 ; 00459e6c
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    ADD ESP,0x10                        ; 00459e71
    MOV EDI,dword ptr [EBX + 0xc2fc]    ; 00459e74
        ;   Label: LAB_00459e74
    PUSH 0x3f333333                     ; 00459e7a
    PUSH EDI                            ; 00459e7f
    MOV EAX,dword ptr [EBX + 0xc340]    ; 00459e80
    PUSH EAX                            ; 00459e86
        ;   Label: LAB_00459e86
    PUSH EBX                            ; 00459e87
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60 ; 00459e88
        ;   XREF to: 00430b60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00430b60(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 00459e8d
    CMP dword ptr [EBX + 0xc338],0x0    ; 00459e90
    JL 0x0045b0bd                       ; 00459e97
        ;   XREF to: 0045b0bd (CONDITIONAL_JUMP)  ; LAB_0045b0bd
    PUSH EBX                            ; 00459e9d
        ;   Label: LAB_00459e9d
    CALL core_charactr.cpp_FUN_00430960 ; 00459e9e
        ;   XREF to: 00430960 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430960()
    ADD ESP,0x4                         ; 00459ea3
    PUSH 0x1                            ; 00459ea6
        ;   Label: LAB_00459ea6
    PUSH EBX                            ; 00459ea8
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 00459ea9
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    MOV EDX,dword ptr [EBP + -0x1a]     ; 00459eae
    ADD ESP,0x8                         ; 00459eb1
    TEST EDX,EDX                        ; 00459eb4
    JZ 0x0045923d                       ; 00459eb6
        ;   XREF to: 0045923d (CONDITIONAL_JUMP)  ; LAB_0045923d
    TEST EAX,EAX                        ; 00459ebc
    JL 0x0045923d                       ; 00459ebe
        ;   XREF to: 0045923d (CONDITIONAL_JUMP)  ; LAB_0045923d
    SHL EAX,0x3                         ; 00459ec4
    MOV EDX,EAX                         ; 00459ec7
    SHL EAX,0x4                         ; 00459ec9
    SUB EAX,EDX                         ; 00459ecc
    ADD EAX,EBX                         ; 00459ece
    MOV ECX,dword ptr [EAX + 0x25b0]    ; 00459ed0
    TEST ECX,ECX                        ; 00459ed6
    JZ 0x0045923d                       ; 00459ed8
        ;   XREF to: 0045923d (CONDITIONAL_JUMP)  ; LAB_0045923d
    PUSH 0x2                            ; 00459ede
    MOV EDX,dword ptr [ECX + 0x154]     ; 00459ee0
    PUSH ECX                            ; 00459ee6
    CALL dword ptr [EDX + 0x78]         ; 00459ee7
    ADD ESP,0x8                         ; 00459eea
    LEA ESP,[EBP + 0x7a]                ; 00459eed
    POP EBP                             ; 00459ef0
    POP EDI                             ; 00459ef1
    POP ESI                             ; 00459ef2
    POP EBX                             ; 00459ef3
    RET                                 ; 00459ef4
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 00459ef5
        ;   Label: LAB_00459ef5
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00459efb
    JNZ 0x00459cc4                      ; 00459f03
        ;   XREF to: 00459cc4 (CONDITIONAL_JUMP)  ; LAB_00459cc4
    PUSH 0x1                            ; 00459f09
        ;   Label: LAB_00459f09
    PUSH 0x18                           ; 00459f0b
    LEA EAX,[EBX + 0x158]               ; 00459f0d
    PUSH EAX                            ; 00459f13
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00459f14
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459f19
    JMP 0x00459cd8                      ; 00459f1c
        ;   XREF to: 00459cd8 (UNCONDITIONAL_JUMP)  ; LAB_00459cd8
    PUSH 0x1                            ; 00459f21
        ;   Label: LAB_00459f21
    PUSH 0x2                            ; 00459f23
    LEA EAX,[EBX + 0x158]               ; 00459f25
    PUSH EAX                            ; 00459f2b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00459f2c
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00459f31
    PUSH EBX                            ; 00459f34
    MOV EAX,0x5d7f77                    ; 00459f35 | = "%s confused while walking to scriptDe..."
    PUSH EAX                            ; 00459f3a | = "%s confused while walking to scriptDe..."
    MOV EDI,dword ptr [0x00611100]      ; 00459f3b | g_CConsolePtr
    PUSH EDI                            ; 00459f41 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 00459f42
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x00459d33                      ; 00459f47
        ;   XREF to: 00459d33 (UNCONDITIONAL_JUMP)  ; LAB_00459d33
    JBE 0x00459d1e                      ; 00459f4c
        ;   XREF to: 00459d1e (CONDITIONAL_JUMP)  ; LAB_00459d1e
        ;   Label: LAB_00459f4c
    CMP EAX,0x3                         ; 00459f52
    JZ 0x00459f21                       ; 00459f55
        ;   XREF to: 00459f21 (CONDITIONAL_JUMP)  ; LAB_00459f21
    PUSH 0x1                            ; 00459f57
        ;   Label: LAB_00459f57
    PUSH 0x0                            ; 00459f59
    JMP 0x00459d27                      ; 00459f5b
        ;   XREF to: 00459d27 (UNCONDITIONAL_JUMP)  ; LAB_00459d27
    MOV EAX,[0x01d06ab4]                ; 00459f60 | DAT_01d06ab4
        ;   Label: caseD_2b
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 00459f65
    PUSH EAX                            ; 00459f6c
    MOV EDX,dword ptr [EAX + 0x154]     ; 00459f6d
    CALL dword ptr [EDX + 0x10c]        ; 00459f73
    ADD ESP,0x4                         ; 00459f79
    TEST EAX,EAX                        ; 00459f7c
    JZ 0x0045a059                       ; 00459f7e
        ;   XREF to: 0045a059 (CONDITIONAL_JUMP)  ; LAB_0045a059
    FLD float ptr [EBP + 0x6e]          ; 00459f84
        ;   Label: caseD_b
    FLDZ                                ; 00459f87
    FCOMPP                              ; 00459f89
    FNSTSW AX                           ; 00459f8b
    SAHF                                ; 00459f8d
    JA 0x00459d36                       ; 00459f8e
        ;   XREF to: 00459d36 (CONDITIONAL_JUMP)  ; LAB_00459d36
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 00459f94
    JZ 0x00459d36                       ; 00459f9b
        ;   XREF to: 00459d36 (CONDITIONAL_JUMP)  ; LAB_00459d36
    FLD float ptr [EBP + -0xe]          ; 00459fa1
    FMUL float ptr [EBX + 0xc1d0]       ; 00459fa4
    FLD float ptr [EBP + 0x92]          ; 00459faa
    FLD ST0                             ; 00459fb0
    FMUL float ptr [EBX + 0xc1d0]       ; 00459fb2
    FXCH ST2                            ; 00459fb8
    FMULP                               ; 00459fba
    SUB ESP,0x4                         ; 00459fbc
    FSTP float ptr [EBX + 0x2524]       ; 00459fbf
    FSTP float ptr [ESP]                ; 00459fc5
    PUSH EBX                            ; 00459fc8
    CALL core_charactr.cpp_FUN_00435320 ; 00459fc9
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 00459fce
    MOV EAX,dword ptr [EBP + 0x6e]      ; 00459fd1
    PUSH 0x3f490fdb                     ; 00459fd4
    XOR EDX,EDX                         ; 00459fd9
    PUSH 0x40400000                     ; 00459fdb
    MOV dword ptr [EBP + 0xfffffe52],EDX ; 00459fe0
    MOV dword ptr [EBP + 0xfffffe5a],EAX ; 00459fe6
    LEA EAX,[EBP + 0xfffffe52]          ; 00459fec
    MOV dword ptr [EBP + 0xfffffe56],EDX ; 00459ff2
    PUSH EAX                            ; 00459ff8
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 00459ff9
    PUSH EAX                            ; 00459fff
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045a000
    CALL dword ptr [EDX + 0xc4]         ; 0045a006
    ADD ESP,0x4                         ; 0045a00c
    PUSH EAX                            ; 0045a00f
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045a010
    ADD EAX,0x20                        ; 0045a016
    PUSH EAX                            ; 0045a019
    PUSH EBX                            ; 0045a01a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0045a01b
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0045a020
    CMP EAX,0x1                         ; 0045a023
    JZ 0x00459d36                       ; 0045a026
        ;   XREF to: 00459d36 (CONDITIONAL_JUMP)  ; LAB_00459d36
    PUSH EBX                            ; 0045a02c
    PUSH 0x5d8006                       ; 0045a02d | = "%s giving up attack\n"
    MOV ESI,dword ptr [0x00611100]      ; 0045a032 | g_CConsolePtr
    PUSH ESI                            ; 0045a038 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045a039
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045a03e
    PUSH EBX                            ; 0045a041
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045a042
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045a047
    MOV dword ptr [EBX + 0x2508],0x0    ; 0045a04a
    JMP 0x00459d36                      ; 0045a054
        ;   XREF to: 00459d36 (UNCONDITIONAL_JUMP)  ; LAB_00459d36
    PUSH dword ptr [EBP + 0x92]         ; 0045a059
        ;   Label: LAB_0045a059
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a05f
    PUSH EBX                            ; 0045a065
    CALL dword ptr [EAX + 0x144]        ; 0045a066
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0045a06c
    ADD ESP,0x8                         ; 0045a072
    TEST EDX,EDX                        ; 0045a075
    JZ 0x00459f84                       ; 0045a077
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x1                            ; 0045a07d
        ;   Label: LAB_0045a07d
    PUSH 0x3                            ; 0045a07f
    PUSH 0x0                            ; 0045a081
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0045a083
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045a088
    PUSH EAX                            ; 0045a08b
    LEA EAX,[EBX + 0x158]               ; 0045a08c
    PUSH EAX                            ; 0045a092
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a093
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a098
    JMP 0x00459f84                      ; 0045a09b
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBX + 0xc360]        ; 0045a0a0
        ;   Label: caseD_2f
    FSUB float ptr [EBP + 0x92]         ; 0045a0a6
    FST float ptr [EBX + 0xc360]        ; 0045a0ac
    FLDZ                                ; 0045a0b2
    FCOMPP                              ; 0045a0b4
    FNSTSW AX                           ; 0045a0b6
    SAHF                                ; 0045a0b8
    JC 0x00459f84                       ; 0045a0b9
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH dword ptr [EBP + 0x92]         ; 0045a0bf
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a0c5
    PUSH EBX                            ; 0045a0cb
    MOV dword ptr [EBX + 0xc360],0x0    ; 0045a0cc
    CALL dword ptr [EAX + 0x144]        ; 0045a0d6
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0045a0dc
    ADD ESP,0x8                         ; 0045a0e2
    TEST ESI,ESI                        ; 0045a0e5
    JZ 0x00459f84                       ; 0045a0e7
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    LEA EDX,[EBX + 0x20]                ; 0045a0ed
    FLD float ptr [EDX]                 ; 0045a0f0
    FSUB float ptr [ESI + 0x20]         ; 0045a0f2
    LEA EDI,[EBP + 0xfffffd32]          ; 0045a0f5
    FSTP float ptr [EBP + 0xfffffdfe]   ; 0045a0fb
    FLD float ptr [EDX + 0x4]           ; 0045a101
    FSUB float ptr [ESI + 0x24]         ; 0045a104
    LEA EAX,[EBP + 0xfffffd32]          ; 0045a107
    FSTP float ptr [EBP + 0xfffffe02]   ; 0045a10d
    FLD float ptr [EDX + 0x8]           ; 0045a113
    LEA EDX,[EBP + 0xffffff4e]          ; 0045a116
    FSUB float ptr [ESI + 0x28]         ; 0045a11c
    LEA ESI,[EBP + 0xfffffdfe]          ; 0045a11f
    FSTP float ptr [EBP + 0xfffffe06]   ; 0045a125
    MOVSD ES:EDI,ESI                    ; 0045a12b
    MOVSD ES:EDI,ESI                    ; 0045a12c
    MOVSD ES:EDI,ESI                    ; 0045a12d
    CMP EDX,EAX                         ; 0045a12e
    JZ 0x0045a156                       ; 0045a130
        ;   XREF to: 0045a156 (CONDITIONAL_JUMP)  ; LAB_0045a156
    MOV EAX,dword ptr [EBP + 0xfffffd32] ; 0045a132
    MOV dword ptr [EBP + 0xffffff4e],EAX ; 0045a138
    MOV EAX,dword ptr [EBP + 0xfffffd36] ; 0045a13e
    MOV dword ptr [EBP + 0xffffff52],EAX ; 0045a144
    MOV EAX,dword ptr [EBP + 0xfffffd3a] ; 0045a14a
    MOV dword ptr [EBP + 0xffffff56],EAX ; 0045a150
    FLD float ptr [EBP + 0xffffff52]    ; 0045a156
        ;   Label: LAB_0045a156
    FMUL ST0                            ; 0045a15c
    FLD float ptr [EBP + 0xffffff4e]    ; 0045a15e
    FMUL ST0                            ; 0045a164
    FADDP                               ; 0045a166
    FLD float ptr [EBP + 0xffffff56]    ; 0045a168
    FMUL ST0                            ; 0045a16e
    FADDP                               ; 0045a170
    FSTP float ptr [EBP + -0x6]         ; 0045a172
    MOV EAX,dword ptr [EBP + -0x6]      ; 0045a175
    MOV EDI,dword ptr [0x01cc804c]      ; 0045a178 | DAT_01cc804c
    SAR EAX,0x1                         ; 0045a17e
    ADD EAX,EDI                         ; 0045a180
    MOV dword ptr [EBP + -0x2],EAX      ; 0045a182
    FLD float ptr [EBP + -0x2]          ; 0045a185
    FCOMP double ptr [0x005d8023]       ; 0045a188 | DAT_005d8023
    FNSTSW AX                           ; 0045a18e
    SAHF                                ; 0045a190
    JA 0x00459f84                       ; 0045a191
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,dword ptr [EBX + 0x3000]    ; 0045a197
    MOV dword ptr [EBP + 0x72],EAX      ; 0045a19d
    FLD float ptr [EBP + 0x72]          ; 0045a1a0
    FCOMP float ptr [EBX + 0x2ffc]      ; 0045a1a3
    FNSTSW AX                           ; 0045a1a9
    SAHF                                ; 0045a1ab
    JNC 0x0045a1b7                      ; 0045a1ac
        ;   XREF to: 0045a1b7 (CONDITIONAL_JUMP)  ; LAB_0045a1b7
    MOV EAX,dword ptr [EBX + 0x2490]    ; 0045a1ae
    MOV dword ptr [EBP + 0x72],EAX      ; 0045a1b4
    FLD float ptr [EBP + 0x72]          ; 0045a1b7
        ;   Label: LAB_0045a1b7
    FCOMP float ptr [EBX + 0x2ffc]      ; 0045a1ba
    FNSTSW AX                           ; 0045a1c0
    SAHF                                ; 0045a1c2
    JC 0x0045a2a3                       ; 0045a1c3
        ;   XREF to: 0045a2a3 (CONDITIONAL_JUMP)  ; LAB_0045a2a3
    XOR ESI,ESI                         ; 0045a1c9
        ;   Label: LAB_0045a1c9
    MOV dword ptr [EBP + 0x76],ESI      ; 0045a1cb
        ;   Label: LAB_0045a1cb
    FILD dword ptr [EBP + 0x76]         ; 0045a1ce
    FMUL float ptr [0x005d808b]         ; 0045a1d1 | DAT_005d808b
    MOV EAX,[0x00622c18]                ; 0045a1d7 | g_CDemonSetPtr
    FMUL float ptr [0x005d808f]         ; 0045a1dc | DAT_005d808f
    PUSH EAX                            ; 0045a1e2 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x2]          ; 0045a1e3
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0045a1e6
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0045a1eb
    PUSH EBX                            ; 0045a1ee
    MOV EDX,dword ptr [0x00622c18]      ; 0045a1ef | g_CDemonSetPtr
    PUSH EDX                            ; 0045a1f5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0045a1f6
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    FLD float ptr [EBP + 0x2]           ; 0045a1fb
    FLD ST0                             ; 0045a1fe
    FCOS                                ; 0045a200
    FXCH                                ; 0045a202
    FSIN                                ; 0045a204
    FXCH                                ; 0045a206
    FLD double ptr [0x005d8093]         ; 0045a208 | DAT_005d8093
    FXCH                                ; 0045a20e
    FMUL ST1                            ; 0045a210
    FXCH ST2                            ; 0045a212
    FMULP                               ; 0045a214
    FLD float ptr [EBX + 0x24]          ; 0045a216
    ADD ESP,0x8                         ; 0045a219
    FADD float ptr [EBP + 0x72]         ; 0045a21c
    SUB ESP,0x4                         ; 0045a21f
    FSTP float ptr [ESP]                ; 0045a222
    FLD float ptr [EBX + 0x24]          ; 0045a225
    FADD float ptr [EBX + 0x2ffc]       ; 0045a228
    SUB ESP,0x4                         ; 0045a22e
    FSTP float ptr [ESP]                ; 0045a231
    PUSH dword ptr [EBX + 0x2ff0]       ; 0045a234
    SUB ESP,0x4                         ; 0045a23a
    FXCH                                ; 0045a23d
    FSTP float ptr [ESP]                ; 0045a23f
    SUB ESP,0x4                         ; 0045a242
    FSTP float ptr [ESP]                ; 0045a245
    PUSH dword ptr [EBX + 0x28]         ; 0045a248
    MOV ECX,dword ptr [0x00622c18]      ; 0045a24b | g_CDemonSetPtr
    PUSH dword ptr [EBX + 0x20]         ; 0045a251
    PUSH ECX                            ; 0045a254 | g_CDemonSetInstance
    CALL core_setcolid.cpp_FUN_00558450 ; 0045a255
        ;   XREF to: 00558450 (UNCONDITIONAL_CALL)  ; undefined core_setcolid.cpp_FUN_00558450()
    MOV EDI,dword ptr [0x00622c18]      ; 0045a25a | g_CDemonSetPtr
    MOV dword ptr [EBP + 0x76],EAX      ; 0045a260
    ADD ESP,0x20                        ; 0045a263
    FLD float ptr [EBP + 0x76]          ; 0045a266
    PUSH EDI                            ; 0045a269 | g_CDemonSetInstance
    FSTP float ptr [EBP + 0x46]         ; 0045a26a
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0045a26d
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    FLD float ptr [EBP + 0x46]          ; 0045a272
    FLD1                                ; 0045a275
    ADD ESP,0x4                         ; 0045a277
    FCOMPP                              ; 0045a27a
    FNSTSW AX                           ; 0045a27c
    SAHF                                ; 0045a27e
    JBE 0x0045a2b7                      ; 0045a27f
        ;   XREF to: 0045a2b7 (CONDITIONAL_JUMP)  ; LAB_0045a2b7
    CMP ESI,0x4                         ; 0045a281
        ;   Label: LAB_0045a281
    JGE 0x0045a07d                      ; 0045a284
        ;   XREF to: 0045a07d (CONDITIONAL_JUMP)  ; LAB_0045a07d
    MOV dword ptr [EBX + 0xc360],0x40400000 ; 0045a28a
    MOV dword ptr [EBX + 0xc1e8],0x0    ; 0045a294
    JMP 0x00459f84                      ; 0045a29e
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBX + 0x2ffc]        ; 0045a2a3
        ;   Label: LAB_0045a2a3
    FADD double ptr [0x005d801b]        ; 0045a2a9 | DAT_005d801b
    FSTP float ptr [EBP + 0x72]         ; 0045a2af
    JMP 0x0045a1c9                      ; 0045a2b2
        ;   XREF to: 0045a1c9 (UNCONDITIONAL_JUMP)  ; LAB_0045a1c9
    INC ESI                             ; 0045a2b7
        ;   Label: LAB_0045a2b7
    CMP ESI,0x4                         ; 0045a2b8
    JL 0x0045a1cb                       ; 0045a2bb
        ;   XREF to: 0045a1cb (CONDITIONAL_JUMP)  ; LAB_0045a1cb
    JMP 0x0045a281                      ; 0045a2c1
        ;   XREF to: 0045a281 (UNCONDITIONAL_JUMP)  ; LAB_0045a281
    LEA EAX,[EBX + 0xc288]              ; 0045a2c3
        ;   Label: caseD_24
    PUSH EAX                            ; 0045a2c9
    MOV ESI,dword ptr [0x0061b4d0]      ; 0045a2ca | DAT_0061b4d0
    PUSH ESI                            ; 0045a2d0
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0045a2d1
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0045a2d6
    TEST EAX,EAX                        ; 0045a2d9
    JZ 0x00459f84                       ; 0045a2db
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBX + 0xc35c]        ; 0045a2e1
    FSUB float ptr [EBP + 0x92]         ; 0045a2e7
    FST float ptr [EBX + 0xc35c]        ; 0045a2ed
    FLDZ                                ; 0045a2f3
    FCOMPP                              ; 0045a2f5
    FNSTSW AX                           ; 0045a2f7
    SAHF                                ; 0045a2f9
    JBE 0x00459f84                      ; 0045a2fa
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    FLD1                                ; 0045a300
    XOR EDI,EDI                         ; 0045a302
    LEA EAX,[EBX + 0x20]                ; 0045a304
    MOV dword ptr [EBP + 0xa],EDI       ; 0045a307
    MOV dword ptr [EBP + 0xe],EAX       ; 0045a30a
    FADD float ptr [EBX + 0xc35c]       ; 0045a30d
    MOV dword ptr [EBP + 0x66],EDI      ; 0045a313
    FSTP float ptr [EBX + 0xc35c]       ; 0045a316
    MOV EAX,[0x00622c18]                ; 0045a31c | g_CDemonSetPtr
        ;   Label: LAB_0045a31c
    MOV EDX,dword ptr [EBP + 0xa]       ; 0045a321
    CMP EDX,dword ptr [EAX + 0x14f0a8]  ; 0045a324 | g_CDemonSetInstance.character_count
    JGE 0x00459f84                      ; 0045a32a
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    ADD EAX,dword ptr [EBP + 0x66]      ; 0045a330
    PUSH EBX                            ; 0045a333
    MOV ESI,dword ptr [EAX + 0x14f0ac]  ; 0045a334
    PUSH ESI                            ; 0045a33a
    MOV EAX,dword ptr [ESI + 0x154]     ; 0045a33b
    CALL dword ptr [EAX + 0xe4]         ; 0045a341
    ADD ESP,0x8                         ; 0045a347
    TEST EAX,EAX                        ; 0045a34a
    JNZ 0x0045a360                      ; 0045a34c
        ;   XREF to: 0045a360 (CONDITIONAL_JUMP)  ; LAB_0045a360
    MOV EDI,dword ptr [EBP + 0xa]       ; 0045a34e
        ;   Label: LAB_0045a34e
    MOV ESI,dword ptr [EBP + 0x66]      ; 0045a351
    INC EDI                             ; 0045a354
    ADD ESI,0x4                         ; 0045a355
    MOV dword ptr [EBP + 0xa],EDI       ; 0045a358
    MOV dword ptr [EBP + 0x66],ESI      ; 0045a35b
    JMP 0x0045a31c                      ; 0045a35e
        ;   XREF to: 0045a31c (UNCONDITIONAL_JUMP)  ; LAB_0045a31c
    LEA EAX,[ESI + 0x20]                ; 0045a360
        ;   Label: LAB_0045a360
    MOV EDX,dword ptr [EBP + 0xe]       ; 0045a363
    FLD float ptr [EAX]                 ; 0045a366
    FSUB float ptr [EDX]                ; 0045a368
    FSTP float ptr [EBP + 0xfffffe6a]   ; 0045a36a
    FLD float ptr [EAX + 0x4]           ; 0045a370
    FSUB float ptr [EDX + 0x4]          ; 0045a373
    LEA EDI,[EBP + -0x76]               ; 0045a376
    FSTP float ptr [EBP + 0xfffffe6e]   ; 0045a379
    FLD float ptr [EAX + 0x8]           ; 0045a37f
    FSUB float ptr [EDX + 0x8]          ; 0045a382
    LEA ESI,[EBP + 0xfffffe6a]          ; 0045a385
    FSTP float ptr [EBP + 0xfffffe72]   ; 0045a38b
    MOVSD ES:EDI,ESI                    ; 0045a391
    MOVSD ES:EDI,ESI                    ; 0045a392
    MOVSD ES:EDI,ESI                    ; 0045a393
    FLD float ptr [EBP + -0x72]         ; 0045a394
    FABS                                ; 0045a397
    FCOMP double ptr [0x005d80ab]       ; 0045a399 | DAT_005d80ab
    FNSTSW AX                           ; 0045a39f
    SAHF                                ; 0045a3a1
    JA 0x0045a34e                       ; 0045a3a2
        ;   XREF to: 0045a34e (CONDITIONAL_JUMP)  ; LAB_0045a34e
    FLD float ptr [EBP + -0x76]         ; 0045a3a4
    FMUL ST0                            ; 0045a3a7
    FLD float ptr [EBP + -0x6e]         ; 0045a3a9
    FMUL ST0                            ; 0045a3ac
    FADDP                               ; 0045a3ae
    FSQRT                               ; 0045a3b0
    XOR EDI,EDI                         ; 0045a3b2
    MOV dword ptr [EBP + -0x72],EDI     ; 0045a3b4
    FCOMP float ptr [EBX + 0xc1e0]      ; 0045a3b7
    FNSTSW AX                           ; 0045a3bd
    SAHF                                ; 0045a3bf
    JA 0x0045a34e                       ; 0045a3c0
        ;   XREF to: 0045a34e (CONDITIONAL_JUMP)  ; LAB_0045a34e
    PUSH EBX                            ; 0045a3c2
    PUSH 0x5d7fa1                       ; 0045a3c3 | = "%s rising from the grave\n"
    MOV EAX,[0x00611100]                ; 0045a3c8 | g_CConsolePtr
    PUSH EAX                            ; 0045a3cd | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045a3ce
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045a3d3
    PUSH 0x1                            ; 0045a3d6
    PUSH 0x25                           ; 0045a3d8
    LEA EAX,[EBX + 0x158]               ; 0045a3da
    PUSH EAX                            ; 0045a3e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a3e1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EDX,dword ptr [EBX + 0xc280]    ; 0045a3e6
    ADD ESP,0xc                         ; 0045a3ec
    TEST EDX,EDX                        ; 0045a3ef
    JZ 0x0045a402                       ; 0045a3f1
        ;   XREF to: 0045a402 (CONDITIONAL_JUMP)  ; LAB_0045a402
    PUSH EDX                            ; 0045a3f3
    CALL core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0 ; 0045a3f4
        ;   XREF to: 004e6bf0 (UNCONDITIONAL_CALL)  ; void core_grave.cpp_CGrave_startAnimation_FUN_004e6bf0(CGrave * this_ptr)
    ADD ESP,0x4                         ; 0045a3f9
    MOV dword ptr [EBX + 0xc280],EDI    ; 0045a3fc
    MOV dword ptr [EBX + 0xc1e0],0x42c80000 ; 0045a402
        ;   Label: LAB_0045a402
    JMP 0x00459f84                      ; 0045a40c
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    MOV EDX,dword ptr [EBX + 0xc1d4]    ; 0045a411
        ;   Label: caseD_1a
    TEST EDX,EDX                        ; 0045a417
    JNZ 0x00459f84                      ; 0045a419
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    CMP dword ptr [EBX + 0xdc],0x0      ; 0045a41f
    JNZ 0x00459f84                      ; 0045a426
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EDX                            ; 0045a42c
    LEA EAX,[EBX + 0x158]               ; 0045a42d
    PUSH EAX                            ; 0045a433
    LEA ESI,[EBP + -0x46]               ; 0045a434
    LEA EDI,[EBP + 0xfffffc96]          ; 0045a437
    CALL core_skeleton.cpp_FUN_00569040 ; 0045a43d
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    ADD ESP,0x8                         ; 0045a442
    LEA EAX,[EBP + 0xfffffc96]          ; 0045a445
    LEA ESI,[EBP + -0x46]               ; 0045a44b
    PUSH EAX                            ; 0045a44e
    MOVSD ES:EDI,ESI                    ; 0045a44f
    MOVSD ES:EDI,ESI                    ; 0045a450
    MOVSD ES:EDI,ESI                    ; 0045a451
    PUSH EBX                            ; 0045a452
    LEA ESI,[EBP + 0xffffff5a]          ; 0045a453
    LEA EDI,[EBP + 0xffffff12]          ; 0045a459
    CALL core_actor.cpp_FUN_00408b40    ; 0045a45f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0045a464
    LEA ESI,[EBP + 0xffffff5a]          ; 0045a467
    LEA EAX,[EBP + 0xffffff12]          ; 0045a46d
    PUSH 0x0                            ; 0045a473
    MOVSD ES:EDI,ESI                    ; 0045a475
    MOVSD ES:EDI,ESI                    ; 0045a476
    MOVSD ES:EDI,ESI                    ; 0045a477
    PUSH EAX                            ; 0045a478
    MOV ESI,dword ptr [0x0061dca4]      ; 0045a479 | g_CGorePtr
    PUSH ESI                            ; 0045a47f
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 0045a480
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0045a485
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0045a488
    JMP 0x00459f84                      ; 0045a492
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBP + 0x92]          ; 0045a497
        ;   Label: caseD_0
    FMUL double ptr [0x005d806b]        ; 0045a49d | DAT_005d806b
    SUB ESP,0x4                         ; 0045a4a3
    FSTP float ptr [ESP]                ; 0045a4a6
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045a4a9
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045a4ae
    TEST EAX,EAX                        ; 0045a4b1
    JNZ 0x0045a07d                      ; 0045a4b3
        ;   XREF to: 0045a07d (CONDITIONAL_JUMP)  ; LAB_0045a07d
    PUSH dword ptr [EBP + 0x92]         ; 0045a4b9
    PUSH EBX                            ; 0045a4bf
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0045a4c0
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045a4c5
    TEST EAX,EAX                        ; 0045a4c8
    JZ 0x0045a4d5                       ; 0045a4ca
        ;   XREF to: 0045a4d5 (CONDITIONAL_JUMP)  ; LAB_0045a4d5
    PUSH EBX                            ; 0045a4cc
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045a4cd
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045a4d2
    PUSH dword ptr [EBP + 0x92]         ; 0045a4d5
        ;   Label: LAB_0045a4d5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a4db
    PUSH EBX                            ; 0045a4e1
    CALL dword ptr [EAX + 0x144]        ; 0045a4e2
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0045a4e8
    ADD ESP,0x8                         ; 0045a4ee
    TEST EDX,EDX                        ; 0045a4f1
    JZ 0x0045a537                       ; 0045a4f3
        ;   XREF to: 0045a537 (CONDITIONAL_JUMP)  ; LAB_0045a537
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 0045a4f5
        ;   Label: LAB_0045a4f5
    JZ 0x00459f84                       ; 0045a4fc
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045a502
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045a503
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045a508
    MOV ESI,dword ptr [EBX + 0xc350]    ; 0045a50b
    PUSH ESI                            ; 0045a511
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045a512
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045a517
    TEST EAX,EAX                        ; 0045a51a
    JNZ 0x00459f84                      ; 0045a51c
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045a522
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a523
    CALL dword ptr [EAX + 0x148]        ; 0045a529
    ADD ESP,0x4                         ; 0045a52f
    JMP 0x00459f84                      ; 0045a532
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,[0x01d06ab4]                ; 0045a537 | DAT_01d06ab4
        ;   Label: LAB_0045a537
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0045a53c
    PUSH EAX                            ; 0045a543
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045a544
    CALL dword ptr [EDX + 0x10c]        ; 0045a54a
    ADD ESP,0x4                         ; 0045a550
    TEST EAX,EAX                        ; 0045a553
    JZ 0x00459f84                       ; 0045a555
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,[0x0061d95c]                ; 0045a55b | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 0045a560 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d06ab4]                ; 0045a56a | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0045a56f
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 0045a576
    JMP 0x0045a4f5                      ; 0045a57c
        ;   XREF to: 0045a4f5 (UNCONDITIONAL_JUMP)  ; LAB_0045a4f5
    LEA ESI,[EBX + 0x158]               ; 0045a581
        ;   Label: caseD_5
    PUSH ESI                            ; 0045a587
    CALL core_motion.cpp_FUN_00525020   ; 0045a588
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0045a58d
    ADD ESP,0x4                         ; 0045a590
    FLD float ptr [EBP + 0x76]          ; 0045a593
    FCOMP double ptr [0x005d803b]       ; 0045a596 | DAT_005d803b
    FNSTSW AX                           ; 0045a59c
    SAHF                                ; 0045a59e
    JBE 0x00459f84                      ; 0045a59f
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x1                            ; 0045a5a5
    PUSH 0x4                            ; 0045a5a7
    PUSH ESI                            ; 0045a5a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a5aa
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a5af
    JMP 0x00459f84                      ; 0045a5b2
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x3e99999a                     ; 0045a5b7
        ;   Label: caseD_4
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045a5bc
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045a5c1
    TEST EAX,EAX                        ; 0045a5c4
    JZ 0x0045a5d8                       ; 0045a5c6
        ;   XREF to: 0045a5d8 (CONDITIONAL_JUMP)  ; LAB_0045a5d8
    PUSH EBX                            ; 0045a5c8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a5c9
    CALL dword ptr [EAX + 0x148]        ; 0045a5cf
    ADD ESP,0x4                         ; 0045a5d5
    PUSH dword ptr [EBP + 0x92]         ; 0045a5d8
        ;   Label: LAB_0045a5d8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a5de
    PUSH EBX                            ; 0045a5e4
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0045a5e5
    CALL dword ptr [EAX + 0x144]        ; 0045a5eb
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0045a5f1
    ADD ESP,0x8                         ; 0045a5f7
    TEST EDX,EDX                        ; 0045a5fa
    JNZ 0x0045a63f                      ; 0045a5fc
        ;   XREF to: 0045a63f (CONDITIONAL_JUMP)  ; LAB_0045a63f
    MOV EAX,[0x01d06ab4]                ; 0045a5fe | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0045a603
    PUSH EAX                            ; 0045a60a
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045a60b
    CALL dword ptr [EDX + 0x10c]        ; 0045a611
    ADD ESP,0x4                         ; 0045a617
    TEST EAX,EAX                        ; 0045a61a
    JZ 0x0045a63f                       ; 0045a61c
        ;   XREF to: 0045a63f (CONDITIONAL_JUMP)  ; LAB_0045a63f
    MOV EAX,[0x0061d95c]                ; 0045a61e | g_CGamePtr
    MOV dword ptr [EAX + 0x23c],0x1     ; 0045a623 | g_CGameInstance.player_hit_flag
    MOV EAX,[0x01d06ab4]                ; 0045a62d | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0045a632
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 0045a639
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0045a63f
        ;   Label: LAB_0045a63f
    LEA ESI,[EBX + 0x158]               ; 0045a645
    TEST ECX,ECX                        ; 0045a64b
    JZ 0x0045a684                       ; 0045a64d
        ;   XREF to: 0045a684 (CONDITIONAL_JUMP)  ; LAB_0045a684
    TEST EDI,EDI                        ; 0045a64f
    JNZ 0x0045a6b7                      ; 0045a651
        ;   XREF to: 0045a6b7 (CONDITIONAL_JUMP)  ; LAB_0045a6b7
    MOV EAX,dword ptr [EBX + 0xc350]    ; 0045a653
    PUSH EAX                            ; 0045a659
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0045a65a
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0045a65f
    TEST EAX,EAX                        ; 0045a662
    JNZ 0x0045a676                      ; 0045a664
        ;   XREF to: 0045a676 (CONDITIONAL_JUMP)  ; LAB_0045a676
    PUSH EBX                            ; 0045a666
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045a667
    CALL dword ptr [EAX + 0x148]        ; 0045a66d
    ADD ESP,0x4                         ; 0045a673
    PUSH EBX                            ; 0045a676
        ;   Label: LAB_0045a676
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045a677
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045a67c
    JMP 0x00459f84                      ; 0045a67f
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH dword ptr [EBP + 0x92]         ; 0045a684
        ;   Label: LAB_0045a684
    PUSH EBX                            ; 0045a68a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0045a68b
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0045a690
    TEST EAX,EAX                        ; 0045a693
    JNZ 0x00459f84                      ; 0045a695
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x1                            ; 0045a69b
    PUSH 0x3                            ; 0045a69d
    PUSH EAX                            ; 0045a69f
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0045a6a0
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045a6a5
    PUSH EAX                            ; 0045a6a8
    PUSH ESI                            ; 0045a6a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a6aa
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a6af
    JMP 0x00459f84                      ; 0045a6b2
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    TEST ECX,ECX                        ; 0045a6b7
        ;   Label: LAB_0045a6b7
    JZ 0x0045a7b9                       ; 0045a6b9
        ;   XREF to: 0045a7b9 (CONDITIONAL_JUMP)  ; LAB_0045a7b9
    PUSH ESI                            ; 0045a6bf
    CALL core_motion.cpp_FUN_00525020   ; 0045a6c0
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0045a6c5
    ADD ESP,0x4                         ; 0045a6c8
    FLD float ptr [EBP + 0x76]          ; 0045a6cb
    FCOMP double ptr [0x005d803b]       ; 0045a6ce | DAT_005d803b
    FNSTSW AX                           ; 0045a6d4
    SAHF                                ; 0045a6d6
    JBE 0x0045a7b9                      ; 0045a6d7
        ;   XREF to: 0045a7b9 (CONDITIONAL_JUMP)  ; LAB_0045a7b9
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045a6dd
    LEA EDX,[EBX + 0x20]                ; 0045a6e3
    FLD float ptr [EAX + 0x20]          ; 0045a6e6
    FSUB float ptr [EDX]                ; 0045a6e9
    LEA EDI,[EBP + 0xfffffebe]          ; 0045a6eb
    FSTP float ptr [EBP + 0xfffffefa]   ; 0045a6f1
    FLD float ptr [EAX + 0x24]          ; 0045a6f7
    FSUB float ptr [EDX + 0x4]          ; 0045a6fa
    LEA ESI,[EBP + 0xfffffefa]          ; 0045a6fd
    FSTP float ptr [EBP + 0xfffffefe]   ; 0045a703
    FLD float ptr [EAX + 0x28]          ; 0045a709
    FSUB float ptr [EDX + 0x8]          ; 0045a70c
    LEA EAX,[EBP + 0xfffffebe]          ; 0045a70f
    FSTP float ptr [EBP + 0xffffff02]   ; 0045a715
    LEA EDX,[EBP + 0xfffffeca]          ; 0045a71b
    MOVSD ES:EDI,ESI                    ; 0045a721
    MOVSD ES:EDI,ESI                    ; 0045a722
    MOVSD ES:EDI,ESI                    ; 0045a723
    CMP EDX,EAX                         ; 0045a724
    JZ 0x0045a74c                       ; 0045a726
        ;   XREF to: 0045a74c (CONDITIONAL_JUMP)  ; LAB_0045a74c
    MOV EAX,dword ptr [EBP + 0xfffffebe] ; 0045a728
    MOV dword ptr [EBP + 0xfffffeca],EAX ; 0045a72e
    MOV EAX,dword ptr [EBP + 0xfffffec2] ; 0045a734
    MOV dword ptr [EBP + 0xfffffece],EAX ; 0045a73a
    MOV EAX,dword ptr [EBP + 0xfffffec6] ; 0045a740
    MOV dword ptr [EBP + 0xfffffed2],EAX ; 0045a746
    FLD float ptr [EBP + 0xfffffece]    ; 0045a74c
        ;   Label: LAB_0045a74c
    FMUL ST0                            ; 0045a752
    FLD float ptr [EBP + 0xfffffeca]    ; 0045a754
    FMUL ST0                            ; 0045a75a
    FADDP                               ; 0045a75c
    FLD float ptr [EBP + 0xfffffed2]    ; 0045a75e
    FMUL ST0                            ; 0045a764
    FADDP                               ; 0045a766
    FSQRT                               ; 0045a768
    FST float ptr [EBP + 0x2e]          ; 0045a76a
    FCOMP float ptr [0x005d8043]        ; 0045a76d | DAT_005d8043
    FNSTSW AX                           ; 0045a773
    SAHF                                ; 0045a775
    JNC 0x0045a7b9                      ; 0045a776
        ;   XREF to: 0045a7b9 (CONDITIONAL_JUMP)  ; LAB_0045a7b9
    FLD float ptr [EBP + 0x2e]          ; 0045a778
    FCOMP float ptr [0x005d8047]        ; 0045a77b | DAT_005d8047
    FNSTSW AX                           ; 0045a781
    SAHF                                ; 0045a783
    JBE 0x0045a7b9                      ; 0045a784
        ;   XREF to: 0045a7b9 (CONDITIONAL_JUMP)  ; LAB_0045a7b9
    PUSH 0x3                            ; 0045a786
    PUSH 0x0                            ; 0045a788
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0045a78a
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045a78f
    CMP EAX,0x1                         ; 0045a792
    JNZ 0x0045a9f5                      ; 0045a795
        ;   XREF to: 0045a9f5 (CONDITIONAL_JUMP)  ; LAB_0045a9f5
    PUSH EAX                            ; 0045a79b
    FLD float ptr [EBX + 0x34]          ; 0045a79c
    PUSH 0xc                            ; 0045a79f
    LEA EAX,[EBX + 0x158]               ; 0045a7a1
    FADD float ptr [0x005d804b]         ; 0045a7a7 | DAT_005d804b
    PUSH EAX                            ; 0045a7ad
    FSTP float ptr [EBX + 0x34]         ; 0045a7ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a7b1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a7b6
    FLD float ptr [EBP + 0x92]          ; 0045a7b9
        ;   Label: LAB_0045a7b9
    FMUL double ptr [0x005d8053]        ; 0045a7bf | DAT_005d8053
    SUB ESP,0x4                         ; 0045a7c5
    FSTP float ptr [ESP]                ; 0045a7c8
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045a7cb
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045a7d0
    TEST EAX,EAX                        ; 0045a7d3
    JZ 0x0045a7ea                       ; 0045a7d5
        ;   XREF to: 0045a7ea (CONDITIONAL_JUMP)  ; LAB_0045a7ea
    PUSH 0x1                            ; 0045a7d7
    PUSH 0x4                            ; 0045a7d9
    LEA EAX,[EBX + 0x158]               ; 0045a7db
    PUSH EAX                            ; 0045a7e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a7e2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045a7e7
    XOR EAX,EAX                         ; 0045a7ea
        ;   Label: LAB_0045a7ea
    MOV dword ptr [EBP + 0x1a],EAX      ; 0045a7ec
    MOV EAX,dword ptr [EBX + 0xc32c]    ; 0045a7ef
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045a7f5
    JZ 0x0045a806                       ; 0045a7fd
        ;   XREF to: 0045a806 (CONDITIONAL_JUMP)  ; LAB_0045a806
    MOV dword ptr [EBP + 0x1a],0x1      ; 0045a7ff
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0045a806
        ;   Label: LAB_0045a806
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0045a80c
    JZ 0x0045a819                       ; 0045a814
        ;   XREF to: 0045a819 (CONDITIONAL_JUMP)  ; LAB_0045a819
    INC dword ptr [EBP + 0x1a]          ; 0045a816
    PUSH dword ptr [EBP + 0x92]         ; 0045a819
        ;   Label: LAB_0045a819
    PUSH EBX                            ; 0045a81f
    CALL core_demnfolk.cpp_FUN_0045b560 ; 0045a820
        ;   XREF to: 0045b560 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045b560()
    ADD ESP,0x8                         ; 0045a825
    TEST EAX,EAX                        ; 0045a828
    JNZ 0x00459f84                      ; 0045a82a
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x1                            ; 0045a830
    MOV EAX,[0x005fe698]                ; 0045a832 | DAT_005fe698
    PUSH EBX                            ; 0045a837
    MOV dword ptr [EBP + 0x1e],EAX      ; 0045a838
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 0045a83b
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    ADD ESP,0x8                         ; 0045a840
    MOV dword ptr [EBP + 0x22],EAX      ; 0045a843
    TEST EAX,EAX                        ; 0045a846
    JL 0x0045a917                       ; 0045a848
        ;   XREF to: 0045a917 (CONDITIONAL_JUMP)  ; LAB_0045a917
    SHL EAX,0x3                         ; 0045a84e
    MOV EDX,EAX                         ; 0045a851
    SHL EAX,0x4                         ; 0045a853
    SUB EAX,EDX                         ; 0045a856
    ADD EAX,EBX                         ; 0045a858
    MOV EDX,dword ptr [EAX + 0x25b0]    ; 0045a85a
    TEST EDX,EDX                        ; 0045a860
    JZ 0x0045a917                       ; 0045a862
        ;   XREF to: 0045a917 (CONDITIONAL_JUMP)  ; LAB_0045a917
    CMP dword ptr [EBX + 0xc27c],0x1    ; 0045a868
    JNZ 0x0045a917                      ; 0045a86f
        ;   XREF to: 0045a917 (CONDITIONAL_JUMP)  ; LAB_0045a917
    MOV ESI,0x3f800000                  ; 0045a875
    MOV EAX,EDX                         ; 0045a87a
    MOV dword ptr [EBP + 0x32],ESI      ; 0045a87c
    TEST EDX,EDX                        ; 0045a87f
    JZ 0x0045a911                       ; 0045a881
        ;   XREF to: 0045a911 (CONDITIONAL_JUMP)  ; LAB_0045a911
    PUSH EAX                            ; 0045a887
    MOV EDX,dword ptr [EDX + 0x154]     ; 0045a888
    LEA ESI,[EBP + 0xfffffbb2]          ; 0045a88e
    LEA EDI,[EBP + 0xfffffc12]          ; 0045a894
    CALL dword ptr [EDX + 0x1c]         ; 0045a89a
    MOV ECX,0x6                         ; 0045a89d
    LEA ESI,[EBP + 0xfffffbb2]          ; 0045a8a2
    LEA EAX,[EBP + 0xfffffd26]          ; 0045a8a8
    ADD ESP,0x4                         ; 0045a8ae
    MOVSD.REP ES:EDI,ESI                ; 0045a8b1
    PUSH EAX                            ; 0045a8b3
    LEA ESI,[EBP + 0xfffffc12]          ; 0045a8b4
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0045a8ba
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [ESI + 0xc]           ; 0045a8bf
    FSUB float ptr [EBP + 0xfffffc12]   ; 0045a8c2
    FSTP float ptr [EBP + 0xfffffd26]   ; 0045a8c8
    FLD float ptr [ESI + 0x10]          ; 0045a8ce
    FSUB float ptr [EBP + 0xfffffc16]   ; 0045a8d1
    LEA EDI,[EBP + 0xfffffdf2]          ; 0045a8d7
    FSTP float ptr [EBP + 0xfffffd2a]   ; 0045a8dd
    FLD float ptr [ESI + 0x14]          ; 0045a8e3
    FSUB float ptr [EBP + 0xfffffc1a]   ; 0045a8e6
    LEA ESI,[EBP + 0xfffffd26]          ; 0045a8ec
    FSTP float ptr [EBP + 0xfffffd2e]   ; 0045a8f2
    MOVSD ES:EDI,ESI                    ; 0045a8f8
    MOVSD ES:EDI,ESI                    ; 0045a8f9
    MOVSD ES:EDI,ESI                    ; 0045a8fa
    FLD float ptr [EBP + 0xfffffdfa]    ; 0045a8fb
    FMUL double ptr [0x005d801b]        ; 0045a901 | DAT_005d801b
    FLD1                                ; 0045a907
    FADDP                               ; 0045a909
    ADD ESP,0x4                         ; 0045a90b
    FSTP float ptr [EBP + 0x32]         ; 0045a90e
    MOV EAX,dword ptr [EBP + 0x32]      ; 0045a911
        ;   Label: LAB_0045a911
    MOV dword ptr [EBP + 0x1e],EAX      ; 0045a914
    PUSH 0x3eb2b8c2                     ; 0045a917
        ;   Label: LAB_0045a917
    PUSH 0x3f8ccccd                     ; 0045a91c
    XOR EDI,EDI                         ; 0045a921
    MOV EAX,dword ptr [EBP + 0x1e]      ; 0045a923
    MOV dword ptr [EBP + 0xfffffdc2],EDI ; 0045a926
    MOV dword ptr [EBP + 0xfffffdca],EAX ; 0045a92c
    LEA EAX,[EBP + 0xfffffdc2]          ; 0045a932
    MOV dword ptr [EBP + 0xfffffdc6],EDI ; 0045a938
    PUSH EAX                            ; 0045a93e
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045a93f
    PUSH EAX                            ; 0045a945
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045a946
    CALL dword ptr [EDX + 0xc4]         ; 0045a94c
    ADD ESP,0x4                         ; 0045a952
    PUSH EAX                            ; 0045a955
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045a956
    ADD EAX,0x20                        ; 0045a95c
    PUSH EAX                            ; 0045a95f
    PUSH EBX                            ; 0045a960
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0045a961
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    LEA EDX,[EBX + 0x158]               ; 0045a966
    ADD ESP,0x18                        ; 0045a96c
    MOV dword ptr [EBP + 0x5a],EDX      ; 0045a96f
    TEST EAX,EAX                        ; 0045a972
    JL 0x0045aa03                       ; 0045a974
        ;   XREF to: 0045aa03 (CONDITIONAL_JUMP)  ; LAB_0045aa03
    JLE 0x0045aa86                      ; 0045a97a
        ;   XREF to: 0045aa86 (CONDITIONAL_JUMP)  ; LAB_0045aa86
    CMP dword ptr [EBP + 0x1a],0x0      ; 0045a980
    JLE 0x00459f84                      ; 0045a984
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBX + 0xc1e4]        ; 0045a98a
    FLDZ                                ; 0045a990
    FCOMPP                              ; 0045a992
    FNSTSW AX                           ; 0045a994
    SAHF                                ; 0045a996
    JC 0x00459f84                       ; 0045a997
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045a99d
    PUSH EAX                            ; 0045a9a3
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045a9a4
    CALL dword ptr [EDX + 0xf4]         ; 0045a9aa
    ADD ESP,0x4                         ; 0045a9b0
    TEST EAX,EAX                        ; 0045a9b3
    JNZ 0x00459f84                      ; 0045a9b5
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,dword ptr [EBP + 0x22]      ; 0045a9bb
    TEST EAX,EAX                        ; 0045a9be
    JL 0x0045aa37                       ; 0045a9c0
        ;   XREF to: 0045aa37 (CONDITIONAL_JUMP)  ; LAB_0045aa37
    SHL EAX,0x3                         ; 0045a9c2
    MOV EDX,EAX                         ; 0045a9c5
    SHL EAX,0x4                         ; 0045a9c7
    SUB EAX,EDX                         ; 0045a9ca
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0045a9cc
    JZ 0x0045aa37                       ; 0045a9d4
        ;   XREF to: 0045aa37 (CONDITIONAL_JUMP)  ; LAB_0045aa37
    PUSH 0x1                            ; 0045a9d6
    PUSH 0xd                            ; 0045a9d8
    MOV ECX,dword ptr [EBP + 0x5a]      ; 0045a9da
    PUSH ECX                            ; 0045a9dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045a9de
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0045a9de
    ADD ESP,0xc                         ; 0045a9e3
    MOV dword ptr [EBX + 0xc1e4],0x3f4ccccd ; 0045a9e6
    JMP 0x00459f84                      ; 0045a9f0
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045a9f5
        ;   Label: LAB_0045a9f5
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045a9f6
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045a9fb
    JMP 0x0045a7b9                      ; 0045a9fe
        ;   XREF to: 0045a7b9 (UNCONDITIONAL_JUMP)  ; LAB_0045a7b9
    PUSH EBX                            ; 0045aa03
        ;   Label: LAB_0045aa03
    PUSH 0x5d7fbb                       ; 0045aa04 | = "%s gave up chase - I'm confused\n"
    MOV ESI,dword ptr [0x00611100]      ; 0045aa09 | g_CConsolePtr
    PUSH ESI                            ; 0045aa0f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045aa10
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045aa15
    PUSH 0x1                            ; 0045aa18
    PUSH 0x3                            ; 0045aa1a
    PUSH EDI                            ; 0045aa1c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0045aa1d
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045aa22
    PUSH EAX                            ; 0045aa25
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0045aa26
    PUSH EDI                            ; 0045aa29
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045aa2a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045aa2f
    JMP 0x00459f84                      ; 0045aa32
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045aa37
        ;   Label: LAB_0045aa37
    PUSH EAX                            ; 0045aa3d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045aa3e
    LEA ESI,[EBX + 0x158]               ; 0045aa44
    CALL dword ptr [EDX + 0x10c]        ; 0045aa4a
    ADD ESP,0x4                         ; 0045aa50
    TEST EAX,EAX                        ; 0045aa53
    JZ 0x0045aa7c                       ; 0045aa55
        ;   XREF to: 0045aa7c (CONDITIONAL_JUMP)  ; LAB_0045aa7c
    PUSH 0x3f000000                     ; 0045aa57
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0045aa5c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0045aa61
    TEST EAX,EAX                        ; 0045aa64
    JZ 0x0045aa72                       ; 0045aa66
        ;   XREF to: 0045aa72 (CONDITIONAL_JUMP)  ; LAB_0045aa72
    PUSH 0x1                            ; 0045aa68
    PUSH 0x2b                           ; 0045aa6a
    PUSH ESI                            ; 0045aa6c
    JMP 0x0045a9de                      ; 0045aa6d
        ;   XREF to: 0045a9de (UNCONDITIONAL_JUMP)  ; LAB_0045a9de
    PUSH 0x1                            ; 0045aa72
        ;   Label: LAB_0045aa72
    PUSH 0x2c                           ; 0045aa74
    PUSH ESI                            ; 0045aa76
    JMP 0x0045a9de                      ; 0045aa77
        ;   XREF to: 0045a9de (UNCONDITIONAL_JUMP)  ; LAB_0045a9de
    PUSH 0x1                            ; 0045aa7c
        ;   Label: LAB_0045aa7c
    PUSH 0xe                            ; 0045aa7e
    PUSH ESI                            ; 0045aa80
    JMP 0x0045a9de                      ; 0045aa81
        ;   XREF to: 0045a9de (UNCONDITIONAL_JUMP)  ; LAB_0045a9de
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 0045aa86
        ;   Label: LAB_0045aa86
    PUSH EDX                            ; 0045aa8c
    PUSH EBX                            ; 0045aa8d
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 0045aa8e
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    MOV dword ptr [EBP + 0x36],EAX      ; 0045aa93
    LEA EAX,[EBX + 0x20]                ; 0045aa96
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0045aa99
    FLD float ptr [EAX]                 ; 0045aa9f
    FSUB float ptr [EDX + 0x20]         ; 0045aaa1
    FSTP float ptr [EBP + 0xfffffd56]   ; 0045aaa4
    FLD float ptr [EAX + 0x4]           ; 0045aaaa
    FSUB float ptr [EDX + 0x24]         ; 0045aaad
    LEA EDI,[EBP + 0xfffffeb2]          ; 0045aab0
    FSTP float ptr [EBP + 0xfffffd5a]   ; 0045aab6
    FLD float ptr [EAX + 0x8]           ; 0045aabc
    FSUB float ptr [EDX + 0x28]         ; 0045aabf
    LEA ESI,[EBP + 0xfffffd56]          ; 0045aac2
    FSTP float ptr [EBP + 0xfffffd5e]   ; 0045aac8
    MOVSD ES:EDI,ESI                    ; 0045aace
    MOVSD ES:EDI,ESI                    ; 0045aacf
    MOVSD ES:EDI,ESI                    ; 0045aad0
    FLD float ptr [EBP + 0xfffffeb6]    ; 0045aad1
    FMUL ST0                            ; 0045aad7
    FLD float ptr [EBP + 0xfffffeb2]    ; 0045aad9
    FMUL ST0                            ; 0045aadf
    FADDP                               ; 0045aae1
    FLD float ptr [EBP + 0xfffffeba]    ; 0045aae3
    FMUL ST0                            ; 0045aae9
    FADDP                               ; 0045aaeb
    FSQRT                               ; 0045aaed
    ADD ESP,0x8                         ; 0045aaef
    ADD EDX,0x20                        ; 0045aaf2
    FCOMP double ptr [0x005d805b]       ; 0045aaf5 | DAT_005d805b
    FNSTSW AX                           ; 0045aafb
    SAHF                                ; 0045aafd
    JNC 0x00459f84                      ; 0045aafe
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EDX                            ; 0045ab04
    PUSH EBX                            ; 0045ab05
    LEA ESI,[EBP + 0xfffffdda]          ; 0045ab06
    LEA EDI,[EBP + 0xfffffd92]          ; 0045ab0c
    CALL core_actor.cpp_FUN_00408bb0    ; 0045ab12
        ;   XREF to: 00408bb0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408bb0()
    LEA ESI,[EBP + 0xfffffdda]          ; 0045ab17
    LEA EAX,[EBP + 0xfffffd92]          ; 0045ab1d
    ADD ESP,0x8                         ; 0045ab23
    MOVSD ES:EDI,ESI                    ; 0045ab26
    MOVSD ES:EDI,ESI                    ; 0045ab27
    MOVSD ES:EDI,ESI                    ; 0045ab28
    PUSH EAX                            ; 0045ab29
    LEA ESI,[EBP + 0xffffff66]          ; 0045ab2a
    LEA EDI,[EBP + 0xfffffd0e]          ; 0045ab30
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0045ab36
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xffffff66]          ; 0045ab3b
    MOVSD ES:EDI,ESI                    ; 0045ab41
    MOVSD ES:EDI,ESI                    ; 0045ab42
    MOVSD ES:EDI,ESI                    ; 0045ab43
    FLD float ptr [EBP + 0xfffffd12]    ; 0045ab44
    FABS                                ; 0045ab4a
    ADD ESP,0x4                         ; 0045ab4c
    FCOMP double ptr [0x005d8063]       ; 0045ab4f | DAT_005d8063
    FNSTSW AX                           ; 0045ab55
    SAHF                                ; 0045ab57
    JNC 0x00459f84                      ; 0045ab58
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV ECX,dword ptr [EBP + 0x36]      ; 0045ab5e
    TEST ECX,ECX                        ; 0045ab61
    JL 0x00459f84                       ; 0045ab63
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV ESI,dword ptr [EBX + 0xc27c]    ; 0045ab69
    CMP ESI,0x2                         ; 0045ab6f
    JC 0x00459f84                       ; 0045ab72
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    LEA EAX,[ECX*0x8 + 0x0]             ; 0045ab78
    MOV EDX,EAX                         ; 0045ab7f
    SHL EAX,0x4                         ; 0045ab81
    SUB EAX,EDX                         ; 0045ab84
    ADD EAX,EBX                         ; 0045ab86
    CMP ESI,0x2                         ; 0045ab88
    JA 0x0045abfb                       ; 0045ab8b
        ;   XREF to: 0045abfb (CONDITIONAL_JUMP)  ; LAB_0045abfb
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0045ab8d
    JZ 0x00459f84                       ; 0045ab94
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045ab9a
    PUSH 0x5d7fe8                       ; 0045ab9b | = "%s lugging\n"
    MOV ECX,dword ptr [0x00611100]      ; 0045aba0 | g_CConsolePtr
    PUSH ECX                            ; 0045aba6 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045aba7
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045abac
    PUSH 0x1                            ; 0045abaf
    PUSH 0x23                           ; 0045abb1
    MOV ESI,dword ptr [EBP + 0x5a]      ; 0045abb3
    PUSH ESI                            ; 0045abb6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045abb7
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045abbc
    JMP 0x00459f84                      ; 0045abbf
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0045abc4
        ;   Label: LAB_0045abc4
    JZ 0x00459f84                       ; 0045abcb
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045abd1
    PUSH 0x5d7fdc                       ; 0045abd2 | = "%s tossing\n"
    MOV EDI,dword ptr [0x00611100]      ; 0045abd7 | g_CConsolePtr
    PUSH EDI                            ; 0045abdd | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045abde
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045abe3
    PUSH 0x1                            ; 0045abe6
    PUSH 0x21                           ; 0045abe8
    MOV EAX,dword ptr [EBP + 0x5a]      ; 0045abea
    PUSH EAX                            ; 0045abed
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045abee
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045abf3
    JMP 0x00459f84                      ; 0045abf6
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    CMP ESI,0x3                         ; 0045abfb
        ;   Label: LAB_0045abfb
    JZ 0x0045abc4                       ; 0045abfe
        ;   XREF to: 0045abc4 (CONDITIONAL_JUMP)  ; LAB_0045abc4
    JMP 0x00459f84                      ; 0045ac00
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0045ac05
        ;   Label: caseD_e
    TEST EDI,EDI                        ; 0045ac0b
    JZ 0x0045a676                       ; 0045ac0d
        ;   XREF to: 0045a676 (CONDITIONAL_JUMP)  ; LAB_0045a676
    PUSH EDI                            ; 0045ac13
    MOV EDX,dword ptr [EDI + 0x154]     ; 0045ac14
    CALL dword ptr [EDX + 0x10c]        ; 0045ac1a
    ADD ESP,0x4                         ; 0045ac20
    TEST EAX,EAX                        ; 0045ac23
    JG 0x0045a676                       ; 0045ac25
        ;   XREF to: 0045a676 (CONDITIONAL_JUMP)  ; LAB_0045a676
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045ac2b
    PUSH EAX                            ; 0045ac31
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045ac32
    CALL dword ptr [EDX + 0xf4]         ; 0045ac38
    ADD ESP,0x4                         ; 0045ac3e
    TEST EAX,EAX                        ; 0045ac41
    JNZ 0x0045ac59                      ; 0045ac43
        ;   XREF to: 0045ac59 (CONDITIONAL_JUMP)  ; LAB_0045ac59
    MOV EAX,[0x005fe698]                ; 0045ac45 | DAT_005fe698
    MOV dword ptr [EBP + 0x6e],EAX      ; 0045ac4a
    MOV dword ptr [EBP + -0xe],0x40400000 ; 0045ac4d
    JMP 0x00459f84                      ; 0045ac54
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    CMP EAX,EBX                         ; 0045ac59
        ;   Label: LAB_0045ac59
    JZ 0x00459f84                       ; 0045ac5b
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045ac61
        ;   Label: LAB_0045ac61
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045ac62
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045ac67
    JMP 0x00459f84                      ; 0045ac6a
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    CMP dword ptr [EBX + 0xc1e8],0x0    ; 0045ac6f
        ;   Label: caseD_d
    JZ 0x0045ac61                       ; 0045ac76
        ;   XREF to: 0045ac61 (CONDITIONAL_JUMP)  ; LAB_0045ac61
    PUSH 0x1                            ; 0045ac78
    PUSH EBX                            ; 0045ac7a
    CALL core_demnfolk.cpp_FUN_0045bec0 ; 0045ac7b
        ;   XREF to: 0045bec0 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045bec0()
    ADD ESP,0x8                         ; 0045ac80
    MOV ESI,EAX                         ; 0045ac83
    TEST EAX,EAX                        ; 0045ac85
    JL 0x0045ae19                       ; 0045ac87
        ;   XREF to: 0045ae19 (CONDITIONAL_JUMP)  ; LAB_0045ae19
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045ac8d
    PUSH EAX                            ; 0045ac93
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045ac94
    CALL dword ptr [EDX + 0x10c]        ; 0045ac9a
    ADD ESP,0x4                         ; 0045aca0
    TEST EAX,EAX                        ; 0045aca3
    JG 0x0045ae19                       ; 0045aca5
        ;   XREF to: 0045ae19 (CONDITIONAL_JUMP)  ; LAB_0045ae19
    MOV EAX,ESI                         ; 0045acab
    SHL EAX,0x3                         ; 0045acad
    MOV EDX,EAX                         ; 0045acb0
    SHL EAX,0x4                         ; 0045acb2
    SUB EAX,EDX                         ; 0045acb5
    CMP dword ptr [EBX + EAX*0x1 + 0x25b0],0x0 ; 0045acb7
    JZ 0x0045ae19                       ; 0045acbf
        ;   XREF to: 0045ae19 (CONDITIONAL_JUMP)  ; LAB_0045ae19
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045acc5
    PUSH EAX                            ; 0045accb
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045accc
    CALL dword ptr [EDX + 0xf4]         ; 0045acd2
    ADD ESP,0x4                         ; 0045acd8
    TEST EAX,EAX                        ; 0045acdb
    JNZ 0x0045ae19                      ; 0045acdd
        ;   XREF to: 0045ae19 (CONDITIONAL_JUMP)  ; LAB_0045ae19
    MOV EAX,ESI                         ; 0045ace3
    SHL EAX,0x3                         ; 0045ace5
    MOV EDX,EAX                         ; 0045ace8
    SHL EAX,0x4                         ; 0045acea
    SUB EAX,EDX                         ; 0045aced
    MOV ESI,0x3f800000                  ; 0045acef
    MOV EAX,dword ptr [EBX + EAX*0x1 + 0x25b0] ; 0045acf4
    MOV dword ptr [EBP + 0x42],ESI      ; 0045acfb
    TEST EAX,EAX                        ; 0045acfe
    JZ 0x0045adc9                       ; 0045ad00
        ;   XREF to: 0045adc9 (CONDITIONAL_JUMP)  ; LAB_0045adc9
    PUSH EAX                            ; 0045ad06
    MOV EDX,dword ptr [EAX + 0x154]     ; 0045ad07
    LEA ESI,[EBP + 0xfffffbfa]          ; 0045ad0d
    LEA EDI,[EBP + 0xfffffbe2]          ; 0045ad13
    CALL dword ptr [EDX + 0x1c]         ; 0045ad19
    MOV ECX,0x6                         ; 0045ad1c
    LEA ESI,[EBP + 0xfffffbfa]          ; 0045ad21
    ADD ESP,0x4                         ; 0045ad27
    MOVSD.REP ES:EDI,ESI                ; 0045ad2a
    LEA EAX,[EBP + 0xfffffe22]          ; 0045ad2c
    LEA ESI,[EBP + 0xfffffbe2]          ; 0045ad32
    PUSH EAX                            ; 0045ad38
    LEA EDI,[ESI + 0xc]                 ; 0045ad39
    CALL core_actor.cpp_CVector3f_ctor_FUN_0040cfe0 ; 0045ad3c
        ;   XREF to: 0040cfe0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CVector3f_ctor_FUN_0040cfe0(CVector3f * this_ptr)
    FLD float ptr [EDI]                 ; 0045ad41
    FSUB float ptr [ESI]                ; 0045ad43
    FSTP float ptr [EBP + 0xfffffe22]   ; 0045ad45
    FLD float ptr [EDI + 0x4]           ; 0045ad4b
    FSUB float ptr [ESI + 0x4]          ; 0045ad4e
    FSTP float ptr [EBP + 0xfffffe26]   ; 0045ad51
    FLD float ptr [EDI + 0x8]           ; 0045ad57
    LEA EDI,[EBP + 0xfffffe5e]          ; 0045ad5a
    FSUB float ptr [ESI + 0x8]          ; 0045ad60
    LEA ESI,[EBP + 0xfffffe22]          ; 0045ad63
    FSTP float ptr [EBP + 0xfffffe2a]   ; 0045ad69
    MOVSD ES:EDI,ESI                    ; 0045ad6f
    MOVSD ES:EDI,ESI                    ; 0045ad70
    MOVSD ES:EDI,ESI                    ; 0045ad71
    LEA EDI,[EBP + 0xfffffeee]          ; 0045ad72
    LEA ESI,[EBP + 0xfffffe5e]          ; 0045ad78
    MOVSD ES:EDI,ESI                    ; 0045ad7e
    MOVSD ES:EDI,ESI                    ; 0045ad7f
    MOVSD ES:EDI,ESI                    ; 0045ad80
    LEA EDI,[EBP + 0xffffff1e]          ; 0045ad81
    LEA ESI,[EBP + 0xfffffeee]          ; 0045ad87
    MOVSD ES:EDI,ESI                    ; 0045ad8d
    MOVSD ES:EDI,ESI                    ; 0045ad8e
    MOVSD ES:EDI,ESI                    ; 0045ad8f
    LEA EDI,[EBP + 0xfffffd1a]          ; 0045ad90
    LEA ESI,[EBP + 0xffffff1e]          ; 0045ad96
    MOVSD ES:EDI,ESI                    ; 0045ad9c
    MOVSD ES:EDI,ESI                    ; 0045ad9d
    MOVSD ES:EDI,ESI                    ; 0045ad9e
    LEA EDI,[EBP + 0xfffffe9a]          ; 0045ad9f
    LEA ESI,[EBP + 0xfffffd1a]          ; 0045ada5
    MOVSD ES:EDI,ESI                    ; 0045adab
    MOVSD ES:EDI,ESI                    ; 0045adac
    MOVSD ES:EDI,ESI                    ; 0045adad
    FLD float ptr [EBP + 0xfffffea2]    ; 0045adae
    FMUL double ptr [0x005d801b]        ; 0045adb4 | DAT_005d801b
    FLD float ptr [EBP + 0x42]          ; 0045adba
    FXCH                                ; 0045adbd
    FADD ST0,ST1                        ; 0045adbf
    ADD ESP,0x4                         ; 0045adc1
    FSTP ST1                            ; 0045adc4
    FSTP float ptr [EBP + 0x42]         ; 0045adc6
    MOV EAX,dword ptr [EBP + 0x42]      ; 0045adc9
        ;   Label: LAB_0045adc9
    MOV dword ptr [EBP + 0x6e],EAX      ; 0045adcc
    LEA EAX,[EBX + 0x158]               ; 0045adcf
    PUSH EAX                            ; 0045add5
    CALL core_motion.cpp_FUN_00525020   ; 0045add6
        ;   XREF to: 00525020 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00525020(CMotionController * this_ptr)
    FLD1                                ; 0045addb
    MOV dword ptr [EBP + 0x76],EAX      ; 0045addd
    ADD ESP,0x4                         ; 0045ade0
    MOV EAX,dword ptr [EBP + 0x76]      ; 0045ade3
    MOV dword ptr [EBP + 0x3e],EAX      ; 0045ade6
    FLD float ptr [EBP + 0x3e]          ; 0045ade9
    FSTP double ptr [EBP + -0x3a]       ; 0045adec
    FCOMP double ptr [EBP + -0x3a]      ; 0045adef
    FNSTSW AX                           ; 0045adf2
    SAHF                                ; 0045adf4
    JA 0x00459f84                       ; 0045adf5
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    FLD double ptr [EBP + -0x3a]        ; 0045adfb
    FCOMP double ptr [0x005d8033]       ; 0045adfe | DAT_005d8033
    FNSTSW AX                           ; 0045ae04
    SAHF                                ; 0045ae06
    JA 0x00459f84                       ; 0045ae07
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    MOV dword ptr [EBP + -0x1a],0x1     ; 0045ae0d
    JMP 0x00459f84                      ; 0045ae14
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045ae19
        ;   Label: LAB_0045ae19
    PUSH 0x5d7ff4                       ; 0045ae1a | = "%s gave up swing\n"
    MOV EAX,[0x00611100]                ; 0045ae1f | g_CConsolePtr
    PUSH EAX                            ; 0045ae24 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0045ae25
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 0045ae2a
    PUSH EBX                            ; 0045ae2d
    CALL core_demnfolk.cpp_FUN_0045d060 ; 0045ae2e
        ;   XREF to: 0045d060 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_0045d060()
    ADD ESP,0x4                         ; 0045ae33
    JMP 0x00459f84                      ; 0045ae36
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH dword ptr [EBP + 0x92]         ; 0045ae3b
        ;   Label: caseD_2a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0045ae41
    PUSH EBX                            ; 0045ae47
    CALL dword ptr [EAX + 0x144]        ; 0045ae48
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0045ae4e
    ADD ESP,0x8                         ; 0045ae54
    TEST ECX,ECX                        ; 0045ae57
    JZ 0x00459f84                       ; 0045ae59
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    LEA EDI,[EBX + 0x20]                ; 0045ae5f
    MOV EDX,ECX                         ; 0045ae62
    LEA EAX,[ECX + 0x20]                ; 0045ae64
    FLD float ptr [EDI]                 ; 0045ae67
    FSUB float ptr [EAX]                ; 0045ae69
    FMUL ST0                            ; 0045ae6b
    FLD float ptr [EDI + 0x8]           ; 0045ae6d
    FSUB float ptr [EAX + 0x8]          ; 0045ae70
    FMUL ST0                            ; 0045ae73
    FADDP                               ; 0045ae75
    FSQRT                               ; 0045ae77
    FCOMP double ptr [0x005d802b]       ; 0045ae79 | DAT_005d802b
    FNSTSW AX                           ; 0045ae7f
    SAHF                                ; 0045ae81
    JA 0x00459f84                       ; 0045ae82
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    FLD float ptr [EBX + 0x24]          ; 0045ae88
    FSUB float ptr [ECX + 0x24]         ; 0045ae8b
    FABS                                ; 0045ae8e
    FCOMP double ptr [0x005d8033]       ; 0045ae90 | DAT_005d8033
    FNSTSW AX                           ; 0045ae96
    SAHF                                ; 0045ae98
    JA 0x00459f84                       ; 0045ae99
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    PUSH 0x1                            ; 0045ae9f
    PUSH 0x3                            ; 0045aea1
    PUSH 0x0                            ; 0045aea3
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0045aea5
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0045aeaa
    PUSH EAX                            ; 0045aead
    PUSH ESI                            ; 0045aeae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0045aeaf
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045aeb4
    JMP 0x00459f84                      ; 0045aeb7
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    PUSH EBX                            ; 0045aebc
        ;   Label: caseD_2d
    MOV EAX,[0x00622c18]                ; 0045aebd | g_CDemonSetPtr
    PUSH EAX                            ; 0045aec2 | g_CDemonSetInstance
    CALL core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060 ; 0045aec3
        ;   XREF to: 0054f060 (UNCONDITIONAL_CALL)  ; void core_set.cpp_CDemonSet_snapshotActorTransformState_FUN_0054f060(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045aec8
    JMP 0x00459f84                      ; 0045aecb
        ;   XREF to: 00459f84 (UNCONDITIONAL_JUMP)  ; caseD_30
    MOV EDX,0xbf800000                  ; 0045aed0
        ;   Label: LAB_0045aed0
    MOV ECX,0x3e99999a                  ; 0045aed5
    PUSH ESI                            ; 0045aeda
    MOV dword ptr [EBP + 0x6e],EDX      ; 0045aedb
    MOV dword ptr [EBP + -0xe],ECX      ; 0045aede
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0045aee1
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045aee6
    ADD ESP,0x4                         ; 0045aee9
    CMP EAX,0x30                        ; 0045aeec
    JA 0x00459f84                       ; 0045aeef
        ;   XREF to: 00459f84 (CONDITIONAL_JUMP)  ; caseD_30
    JMP dword ptr [EAX*0x4 + 0x459038]  ; 0045aef5 | caseD_3 | caseD_8 | caseD_a
        ;   Label: switchD
    CMP EAX,0x25                        ; 0045aefc
        ;   Label: LAB_0045aefc
    JNZ 0x0045af63                      ; 0045aeff
        ;   XREF to: 0045af63 (CONDITIONAL_JUMP)  ; LAB_0045af63
    PUSH EDX                            ; 0045af01
    PUSH EBX                            ; 0045af02
    LEA ESI,[EBP + 0xfffffcf6]          ; 0045af03
    LEA EDI,[EBP + 0xfffffc8a]          ; 0045af09
    CALL core_actor.cpp_FUN_00408ac0    ; 0045af0f
        ;   XREF to: 00408ac0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408ac0()
    LEA ESI,[EBP + 0xfffffcf6]          ; 0045af14
    LEA EAX,[EBX + 0x20]                ; 0045af1a
    MOVSD ES:EDI,ESI                    ; 0045af1d
    MOVSD ES:EDI,ESI                    ; 0045af1e
    MOVSD ES:EDI,ESI                    ; 0045af1f
    FLD float ptr [EAX]                 ; 0045af20
    FADD float ptr [EBP + 0xfffffc8a]   ; 0045af22
    FLD float ptr [EAX + 0x4]           ; 0045af28
    FXCH                                ; 0045af2b
    FSTP float ptr [EAX]                ; 0045af2d
    FADD float ptr [EBP + 0xfffffc8e]   ; 0045af2f
    FLD float ptr [EAX + 0x8]           ; 0045af35
    FXCH                                ; 0045af38
    FSTP float ptr [EAX + 0x4]          ; 0045af3a
    FADD float ptr [EBP + 0xfffffc92]   ; 0045af3d
    FSTP float ptr [EAX + 0x8]          ; 0045af43
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0045af46
    MOV dword ptr [EAX + 0x8],0x0       ; 0045af49
    ADD ESP,0x8                         ; 0045af50
    MOV EDX,dword ptr [EAX + 0x8]       ; 0045af53
    MOV dword ptr [EAX + 0x4],EDX       ; 0045af56
    MOV EDX,dword ptr [EAX + 0x4]       ; 0045af59
    MOV dword ptr [EAX],EDX             ; 0045af5c
    JMP 0x00459d92                      ; 0045af5e
        ;   XREF to: 00459d92 (UNCONDITIONAL_JUMP)  ; LAB_00459d92
    PUSH EBX                            ; 0045af63
        ;   Label: LAB_0045af63
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 0045af64
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0045af69
    TEST EAX,EAX                        ; 0045af6c
    JZ 0x00459d92                       ; 0045af6e
        ;   XREF to: 00459d92 (CONDITIONAL_JUMP)  ; LAB_00459d92
    MOV EDI,dword ptr [EBX + 0xc1e8]    ; 0045af74
    TEST EDI,EDI                        ; 0045af7a
    JZ 0x0045afa8                       ; 0045af7c
        ;   XREF to: 0045afa8 (CONDITIONAL_JUMP)  ; LAB_0045afa8
    PUSH EDI                            ; 0045af7e
    MOV EDX,dword ptr [EDI + 0x154]     ; 0045af7f
    CALL dword ptr [EDX + 0xf4]         ; 0045af85
    ADD ESP,0x4                         ; 0045af8b
    CMP EAX,EBX                         ; 0045af8e
    JNZ 0x0045afa8                      ; 0045af90
        ;   XREF to: 0045afa8 (CONDITIONAL_JUMP)  ; LAB_0045afa8
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0045af92
    PUSH EAX                            ; 0045af98
    MOV EDX,dword ptr [0x00622c18]      ; 0045af99 | g_CDemonSetPtr
    PUSH EDX                            ; 0045af9f | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0045afa0
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0045afa5
    PUSH dword ptr [EBP + 0x92]         ; 0045afa8
        ;   Label: LAB_0045afa8
    PUSH EBX                            ; 0045afae
    LEA ESI,[EBX + 0x2518]              ; 0045afaf
    CALL core_charactr.cpp_FUN_0042d700 ; 0045afb5
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    FLD float ptr [ESI]                 ; 0045afba
    FMUL float ptr [EBP + 0x92]         ; 0045afbc
    FSTP float ptr [EBP + 0xfffffd86]   ; 0045afc2
    FLD float ptr [ESI + 0x4]           ; 0045afc8
    FMUL float ptr [EBP + 0x92]         ; 0045afcb
    FSTP float ptr [EBP + 0xfffffd8a]   ; 0045afd1
    FLD float ptr [ESI + 0x8]           ; 0045afd7
    FMUL float ptr [EBP + 0x92]         ; 0045afda
    LEA EDI,[EBP + 0xfffffcea]          ; 0045afe0
    LEA ESI,[EBP + 0xfffffd86]          ; 0045afe6
    FSTP float ptr [EBP + 0xfffffd8e]   ; 0045afec
    MOVSD ES:EDI,ESI                    ; 0045aff2
    MOVSD ES:EDI,ESI                    ; 0045aff3
    MOVSD ES:EDI,ESI                    ; 0045aff4
    LEA EAX,[EBX + 0x250c]              ; 0045aff5
    FLD float ptr [EBP + 0xfffffcee]    ; 0045affb
    FLD float ptr [EBP + 0xfffffcea]    ; 0045b001
    FADD float ptr [EAX]                ; 0045b007
    FLD float ptr [EBP + 0xfffffcf2]    ; 0045b009
    FXCH                                ; 0045b00f
    FSTP float ptr [EBP + 0xfffffdb6]   ; 0045b011
    FXCH                                ; 0045b017
    FADD float ptr [EAX + 0x4]          ; 0045b019
    LEA EDI,[EBP + -0x6a]               ; 0045b01c
    FSTP float ptr [EBP + 0xfffffdba]   ; 0045b01f
    FADD float ptr [EAX + 0x8]          ; 0045b025
    LEA ESI,[EBP + 0xfffffdb6]          ; 0045b028
    FSTP float ptr [EBP + 0xfffffdbe]   ; 0045b02e
    MOVSD ES:EDI,ESI                    ; 0045b034
    MOVSD ES:EDI,ESI                    ; 0045b035
    MOVSD ES:EDI,ESI                    ; 0045b036
    LEA EDX,[EBX + 0x249c]              ; 0045b037
    FLD float ptr [EBP + -0x66]         ; 0045b03d
    FLD float ptr [EBP + -0x6a]         ; 0045b040
    FADD float ptr [EDX]                ; 0045b043
    FLD float ptr [EBP + -0x62]         ; 0045b045
    FXCH                                ; 0045b048
    FSTP float ptr [EBP + 0xfffffea6]   ; 0045b04a
    FXCH                                ; 0045b050
    FADD float ptr [EDX + 0x4]          ; 0045b052
    LEA EDI,[EBP + 0xffffff7e]          ; 0045b055
    FSTP float ptr [EBP + 0xfffffeaa]   ; 0045b05b
    FADD float ptr [EDX + 0x8]          ; 0045b061
    LEA ESI,[EBP + 0xfffffea6]          ; 0045b064
    FSTP float ptr [EBP + 0xfffffeae]   ; 0045b06a
    MOVSD ES:EDI,ESI                    ; 0045b070
    MOVSD ES:EDI,ESI                    ; 0045b071
    MOVSD ES:EDI,ESI                    ; 0045b072
    MOV dword ptr [EAX + 0x8],0x0       ; 0045b073
    ADD ESP,0x8                         ; 0045b07a
    MOV ECX,dword ptr [EAX + 0x8]       ; 0045b07d
    MOV dword ptr [EAX + 0x4],ECX       ; 0045b080
    MOV ECX,dword ptr [EAX + 0x4]       ; 0045b083
    MOV dword ptr [EAX],ECX             ; 0045b086
    MOV dword ptr [EDX + 0x8],0x0       ; 0045b088
    LEA EAX,[EBP + 0xffffff7e]          ; 0045b08f
    FLD float ptr [EDX + 0x8]           ; 0045b095
    PUSH EAX                            ; 0045b098
    FST float ptr [EDX + 0x4]           ; 0045b099
    PUSH EBX                            ; 0045b09c
    FSTP float ptr [EDX]                ; 0045b09d
    CALL core_charactr.cpp_FUN_0042d750 ; 0045b09f
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0045b0a4
    JMP 0x00459d92                      ; 0045b0a7
        ;   XREF to: 00459d92 (UNCONDITIONAL_JUMP)  ; LAB_00459d92
    MOV ECX,dword ptr [EBX + 0xc324]    ; 0045b0ac
        ;   Label: LAB_0045b0ac
    PUSH 0x3f000000                     ; 0045b0b2
    PUSH ECX                            ; 0045b0b7
    JMP 0x00459e86                      ; 0045b0b8
        ;   XREF to: 00459e86 (UNCONDITIONAL_JUMP)  ; LAB_00459e86
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045b0bd
        ;   Label: LAB_0045b0bd
    SHL EAX,0x2                         ; 0045b0c3
    ADD EAX,EBX                         ; 0045b0c6
    CMP dword ptr [EAX + 0x2298],0x0    ; 0045b0c8
    JZ 0x00459e9d                       ; 0045b0cf
        ;   XREF to: 00459e9d (CONDITIONAL_JUMP)  ; LAB_00459e9d
    MOV dword ptr [EAX + 0x2298],0x0    ; 0045b0d5
    MOV ESI,dword ptr [EBX + 0xc324]    ; 0045b0df
    PUSH 0x3e4ccccd                     ; 0045b0e5
    PUSH ESI                            ; 0045b0ea
    MOV EDI,dword ptr [EBX + 0xc33c]    ; 0045b0eb
    PUSH EDI                            ; 0045b0f1
    PUSH EBX                            ; 0045b0f2
    CALL core_charactr.cpp_FUN_00430a90 ; 0045b0f3
        ;   XREF to: 00430a90 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00430a90()
    MOV EAX,dword ptr [EBX + 0xc33c]    ; 0045b0f8
    ADD ESP,0x10                        ; 0045b0fe
    MOV dword ptr [EBX + EAX*0x4 + 0x2298],0x1 ; 0045b101
    JMP 0x00459e9d                      ; 0045b10c
        ;   XREF to: 00459e9d (UNCONDITIONAL_JUMP)  ; LAB_00459e9d

