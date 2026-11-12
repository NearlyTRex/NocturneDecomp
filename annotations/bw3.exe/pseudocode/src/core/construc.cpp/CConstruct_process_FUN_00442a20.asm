; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_construc_cpp_CConstruct_process_FUN_00442a20(CConstruct *this_ptr,float delta_time)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004429d4 = 004437ea
;   TerminatedCString s_ConstructDead_005b954d
;   TerminatedCString s_stick_heartbeat_wav_2_005b955b
;   TerminatedCString s_stick_heartbeat_wav_5_005b9574
;   TerminatedCString s_ConstructKilled_005b958d
;   TerminatedCString s_stick_die_wav_005b959d
;   TerminatedCString s_stick_stump_wav_2_005b95ab
;   TerminatedCString s_stick_leg1_wav_2_005b95c1
;   TerminatedCString s_s_confused_while_walking_005b95d5
;   TerminatedCString s_stick_die_wav_005b95ff
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005b960d
;   TerminatedCString s_stick_attack_wav_005b962e
;   TerminatedCString s_stick_attack1_wav_005b9640
;   TerminatedCString s_stick_leaps_wav_005b9652
;   TerminatedCString s_stick_walk_growl1_wav_005b9662
;   ... and 23 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_00434850
;   ... and 26 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00442a20
        ;   Label: core_construc.cpp_CConstruct_process_FUN_00442a20
    PUSH ESI                            ; 00442a21
    PUSH EDI                            ; 00442a22
    PUSH EBP                            ; 00442a23
    MOV EBP,ESP                         ; 00442a24
    SUB ESP,0x2d0                       ; 00442a26
    SUB EBP,0x7a                        ; 00442a2c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00442a2f
    LEA EAX,[EBX + 0x158]               ; 00442a35
    PUSH EAX                            ; 00442a3b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00442a3c
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00442a41
    ADD ESP,0x4                         ; 00442a44
    MOV dword ptr [EBP + 0x52],EAX      ; 00442a47
    LEA EAX,[EBX + 0xd114]              ; 00442a4a
    PUSH EAX                            ; 00442a50
    MOV EDX,dword ptr [0x005fba60]      ; 00442a51 | DAT_005fba60
    PUSH EDX                            ; 00442a57
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00442a58
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00442a5d
    TEST EAX,EAX                        ; 00442a60
    JNZ 0x00442d7f                      ; 00442a62
        ;   XREF to: 00442d7f (CONDITIONAL_JUMP)  ; LAB_00442d7f
    MOV EAX,0x3e800000                  ; 00442a68
        ;   Label: LAB_00442a68
    MOV EDI,0x3f800000                  ; 00442a6d
    MOV ECX,dword ptr [EBX + 0xcdd0]    ; 00442a72
    MOV dword ptr [EBP + 0x56],EAX      ; 00442a78
    MOV dword ptr [EBP + 0x4e],EDI      ; 00442a7b
    MOV dword ptr [EBP + 0x5a],EDI      ; 00442a7e
    TEST ECX,ECX                        ; 00442a81
    JNZ 0x00442bf6                      ; 00442a83
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    MOV ESI,dword ptr [EBX + 0xd844]    ; 00442a89
    TEST ESI,ESI                        ; 00442a8f
    JNZ 0x00442e6c                      ; 00442a91
        ;   XREF to: 00442e6c (CONDITIONAL_JUMP)  ; LAB_00442e6c
    CMP dword ptr [EBP + 0x52],0xc      ; 00442a97
    JZ 0x00442bf6                       ; 00442a9b
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    MOV EAX,dword ptr [EBX + 0xd0f4]    ; 00442aa1
    PUSH EAX                            ; 00442aa7
    CALL sound_sndmain.cpp_FUN_00556700 ; 00442aa8
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00442aad
    TEST EAX,EAX                        ; 00442ab0
    JZ 0x00442df0                       ; 00442ab2
        ;   XREF to: 00442df0 (CONDITIONAL_JUMP)  ; LAB_00442df0
    MOV ESI,dword ptr [0x007f8e64]      ; 00442ab8 | DAT_007f8e64
        ;   Label: LAB_00442ab8
    PUSH ESI                            ; 00442abe
    LEA EAX,[EBX + 0x158]               ; 00442abf
    LEA EDI,[EBP + 0xfffffe06]          ; 00442ac5
    PUSH EAX                            ; 00442acb
    LEA ESI,[EBP + 0xffffff62]          ; 00442acc
    MOV dword ptr [EBP + 0x76],EAX      ; 00442ad2
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00442ad5
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00442ada
    LEA EAX,[EBP + 0xfffffe06]          ; 00442add
    LEA ESI,[EBP + 0xffffff62]          ; 00442ae3
    PUSH EAX                            ; 00442ae9
    MOVSD ES:EDI,ESI                    ; 00442aea
    MOVSD ES:EDI,ESI                    ; 00442aeb
    MOVSD ES:EDI,ESI                    ; 00442aec
    PUSH EBX                            ; 00442aed
    LEA ESI,[EBP + 0xffffff6e]          ; 00442aee
    LEA EDI,[EBP + -0x62]               ; 00442af4
    CALL core_actor.cpp_FUN_00408b80    ; 00442af7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[EBP + 0xffffff6e]          ; 00442afc
    ADD ESP,0x8                         ; 00442b02
    MOV EAX,[0x007f8e68]                ; 00442b05 | DAT_007f8e68
    MOV EDX,dword ptr [EBP + 0x76]      ; 00442b0a
    PUSH EAX                            ; 00442b0d
    MOVSD ES:EDI,ESI                    ; 00442b0e
    MOVSD ES:EDI,ESI                    ; 00442b0f
    MOVSD ES:EDI,ESI                    ; 00442b10
    PUSH EDX                            ; 00442b11
    LEA ESI,[EBP + 0xffffff1a]          ; 00442b12
    LEA EDI,[EBP + 0xfffffec6]          ; 00442b18
    CALL core_skeleton.cpp_FUN_0054dcc0 ; 00442b1e
        ;   XREF to: 0054dcc0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dcc0()
    ADD ESP,0x8                         ; 00442b23
    LEA EAX,[EBP + 0xfffffec6]          ; 00442b26
    LEA ESI,[EBP + 0xffffff1a]          ; 00442b2c
    PUSH EAX                            ; 00442b32
    MOVSD ES:EDI,ESI                    ; 00442b33
    MOVSD ES:EDI,ESI                    ; 00442b34
    MOVSD ES:EDI,ESI                    ; 00442b35
    PUSH EBX                            ; 00442b36
    LEA ESI,[EBP + 0xffffff32]          ; 00442b37
    LEA EDI,[EBP + -0x2]                ; 00442b3d
    CALL core_actor.cpp_FUN_00408b80    ; 00442b40
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    FLD float ptr [EBP + -0x62]         ; 00442b45
    LEA ESI,[EBP + 0xffffff32]          ; 00442b48
    FLD float ptr [EBP + -0x5e]         ; 00442b4e
    MOVSD ES:EDI,ESI                    ; 00442b51
    MOVSD ES:EDI,ESI                    ; 00442b52
    MOVSD ES:EDI,ESI                    ; 00442b53
    FLD float ptr [EBP + -0x5a]         ; 00442b54
    LEA EDI,[EBP + 0xfffffe72]          ; 00442b57
    LEA ESI,[EBP + -0x6e]               ; 00442b5d
    FXCH ST2                            ; 00442b60
    FADD float ptr [EBP + -0x2]         ; 00442b62
    FXCH                                ; 00442b65
    FADD float ptr [EBP + 0x2]          ; 00442b67
    FXCH ST2                            ; 00442b6a
    FADD float ptr [EBP + 0x6]          ; 00442b6c
    FXCH                                ; 00442b6f
    FSTP float ptr [EBP + -0x6e]        ; 00442b71
    FXCH                                ; 00442b74
    FSTP float ptr [EBP + -0x6a]        ; 00442b76
    FSTP float ptr [EBP + -0x66]        ; 00442b79
    MOVSD ES:EDI,ESI                    ; 00442b7c
    MOVSD ES:EDI,ESI                    ; 00442b7d
    MOVSD ES:EDI,ESI                    ; 00442b7e
    FLD float ptr [0x005b9679]          ; 00442b7f | DAT_005b9679
    FLD float ptr [EBP + 0xfffffe72]    ; 00442b85
    FMUL ST1                            ; 00442b8b
    FLD float ptr [EBP + 0xfffffe76]    ; 00442b8d
    FMUL ST2                            ; 00442b93
    FLD float ptr [EBP + 0xfffffe7a]    ; 00442b95
    FMULP ST3                           ; 00442b9b
    LEA EDI,[EBP + 0xfffffe12]          ; 00442b9d
    LEA ESI,[EBP + 0xfffffe8a]          ; 00442ba3
    FXCH                                ; 00442ba9
    FSTP float ptr [EBP + 0xfffffe8a]   ; 00442bab
    FSTP float ptr [EBP + 0xfffffe8e]   ; 00442bb1
    FSTP float ptr [EBP + 0xfffffe92]   ; 00442bb7
    MOVSD ES:EDI,ESI                    ; 00442bbd
    MOVSD ES:EDI,ESI                    ; 00442bbe
    MOVSD ES:EDI,ESI                    ; 00442bbf
    MOV ECX,dword ptr [EBX + 0xd85c]    ; 00442bc0
    ADD ESP,0x8                         ; 00442bc6
    CMP ECX,0x1                         ; 00442bc9
    JNZ 0x00442e1d                      ; 00442bcc
        ;   XREF to: 00442e1d (CONDITIONAL_JUMP)  ; LAB_00442e1d
    PUSH 0x5f16c4                       ; 00442bd2 | DAT_005f16c4
    PUSH dword ptr [EBP + 0x4e]         ; 00442bd7
    PUSH dword ptr [EBP + 0x56]         ; 00442bda
    LEA EAX,[EBP + 0xfffffe12]          ; 00442bdd
    PUSH dword ptr [EBP + 0x5a]         ; 00442be3
        ;   Label: LAB_00442be3
    PUSH EAX                            ; 00442be6
    MOV ECX,dword ptr [0x005fc5a0]      ; 00442be7 | DAT_005fc5a0
    PUSH ECX                            ; 00442bed
    CALL core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0 ; 00442bee
        ;   XREF to: 004a3cf0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createTrailSegment_FUN_004a3cf0(CFireEffect * this_ptr, CVector3f * position, float size, float alpha, ...)
        ;   Label: LAB_00442bee
    ADD ESP,0x18                        ; 00442bf3
    PUSH dword ptr [EBP + 0x92]         ; 00442bf6
        ;   Label: LAB_00442bf6
    MOV EAX,dword ptr [EBX + 0x154]     ; 00442bfc
    PUSH EBX                            ; 00442c02
    CALL dword ptr [EAX + 0x148]        ; 00442c03
    ADD ESP,0x8                         ; 00442c09
    TEST EAX,EAX                        ; 00442c0c
    JZ 0x00442f6c                       ; 00442c0e
        ;   XREF to: 00442f6c (CONDITIONAL_JUMP)  ; LAB_00442f6c
    FLD float ptr [EBX + 0x2538]        ; 00442c14
    FLDZ                                ; 00442c1a
    FCOMPP                              ; 00442c1c
    FNSTSW AX                           ; 00442c1e
    SAHF                                ; 00442c20
    JNC 0x00442fa0                      ; 00442c21
        ;   XREF to: 00442fa0 (CONDITIONAL_JUMP)  ; LAB_00442fa0
    MOV ESI,dword ptr [EBX + 0xd848]    ; 00442c27
    TEST ESI,ESI                        ; 00442c2d
    JLE 0x00442fa0                      ; 00442c2f
        ;   XREF to: 00442fa0 (CONDITIONAL_JUMP)  ; LAB_00442fa0
    LEA EAX,[ESI*0x8 + 0x0]             ; 00442c35
    LEA EDX,[EBX + 0xd184]              ; 00442c3c
    ADD EAX,ESI                         ; 00442c42
    MOV EAX,dword ptr [EDX + EAX*0x8 + 0x44] ; 00442c44
    MOV dword ptr [EBP + 0x4a],EAX      ; 00442c48
    TEST EAX,EAX                        ; 00442c4b
    JZ 0x00442fa0                       ; 00442c4d
        ;   XREF to: 00442fa0 (CONDITIONAL_JUMP)  ; LAB_00442fa0
    MOV EDX,dword ptr [EBP + 0x4a]      ; 00442c53
    MOV EAX,dword ptr [EAX + 0x154]     ; 00442c56
    PUSH EDX                            ; 00442c5c
    CALL dword ptr [EAX + 0x94]         ; 00442c5d
    MOV EDX,dword ptr [0x01d5ba14]      ; 00442c63 | DAT_01d5ba14
    MOV ECX,dword ptr [EDX*0x4 + 0x1d5ba04] ; 00442c69
    ADD ESP,0x4                         ; 00442c70
    CMP EAX,ECX                         ; 00442c73
    JNZ 0x00442fa0                      ; 00442c75
        ;   XREF to: 00442fa0 (CONDITIONAL_JUMP)  ; LAB_00442fa0
    LEA EAX,[EBX + 0xd114]              ; 00442c7b
    PUSH EAX                            ; 00442c81
    MOV ESI,dword ptr [0x005fba60]      ; 00442c82 | DAT_005fba60
    PUSH ESI                            ; 00442c88
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00442c89
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00442c8e
    PUSH 0x5b958d                       ; 00442c91 | = "ConstructKilled"
    MOV EDI,dword ptr [0x005fba60]      ; 00442c96 | DAT_005fba60
    PUSH EDI                            ; 00442c9c
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00442c9d
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00442ca2
    MOV EAX,dword ptr [EBX + 0xd104]    ; 00442ca5
    PUSH EAX                            ; 00442cab
    CALL sound_sndmain.cpp_FUN_00556700 ; 00442cac
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00442cb1
    TEST EAX,EAX                        ; 00442cb4
    JZ 0x00442f83                       ; 00442cb6
        ;   XREF to: 00442f83 (CONDITIONAL_JUMP)  ; LAB_00442f83
    MOV ECX,0x3f800000                  ; 00442cbc
        ;   Label: LAB_00442cbc
    PUSH 0x4000                         ; 00442cc1
    LEA EAX,[EBP + 0xfffffeae]          ; 00442cc6
    MOV EDI,dword ptr [EBP + 0x4a]      ; 00442ccc
    PUSH EAX                            ; 00442ccf
    XOR EDX,EDX                         ; 00442cd0
    ADD EDI,0x20                        ; 00442cd2
    PUSH 0x3f000000                     ; 00442cd5
    XOR ESI,ESI                         ; 00442cda
    PUSH EDI                            ; 00442cdc
    MOV EAX,[0x005fc5a0]                ; 00442cdd | DAT_005fc5a0
    MOV dword ptr [EBP + 0xfffffeae],EDX ; 00442ce2
    PUSH EAX                            ; 00442ce8
    MOV dword ptr [EBP + 0xfffffeb2],ECX ; 00442ce9
    MOV dword ptr [EBP + 0xfffffeb6],EDX ; 00442cef
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560 ; 00442cf5
        ;   XREF to: 004a2560 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_004a2560(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00442cfa
    PUSH 0x3e4ccccd                     ; 00442cfd
        ;   Label: LAB_00442cfd
    PUSH 0x3f800000                     ; 00442d02
    PUSH 0x88b8                         ; 00442d07
    PUSH 0x1                            ; 00442d0c
    MOV EAX,0x3f800000                  ; 00442d0e
    PUSH 0xffdc                         ; 00442d13
    MOV dword ptr [EBP + 0xfffffe5e],EAX ; 00442d18
    PUSH 0xfa0                          ; 00442d1e
    LEA EAX,[EBP + 0xfffffe5a]          ; 00442d23
    XOR ECX,ECX                         ; 00442d29
    PUSH EAX                            ; 00442d2b
    MOV dword ptr [EBP + 0xfffffe5a],ECX ; 00442d2c
    PUSH EDI                            ; 00442d32
    MOV dword ptr [EBP + 0xfffffe62],ECX ; 00442d33
    MOV ECX,dword ptr [0x005fc5a0]      ; 00442d39 | DAT_005fc5a0
    PUSH ECX                            ; 00442d3f
    INC ESI                             ; 00442d40
    CALL core_fire.cpp_CFireEffect_createFirefly_FUN_004a29d0 ; 00442d41
        ;   XREF to: 004a29d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createFirefly_FUN_004a29d0(CFireEffect * this_ptr, undefined4 param_2, undefined4 param_3, int param_4, ...)
    ADD ESP,0x24                        ; 00442d46
    CMP ESI,0xa                         ; 00442d49
    JL 0x00442cfd                       ; 00442d4c
        ;   XREF to: 00442cfd (CONDITIONAL_JUMP)  ; LAB_00442cfd
    MOV EAX,[0x01d5ba14]                ; 00442d4e | DAT_01d5ba14
    MOV ESI,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00442d53
    PUSH ESI                            ; 00442d5a
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0 ; 00442d5b
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(CCharacter * this_ptr)
    MOV EAX,dword ptr [EBP + 0x4a]      ; 00442d60
    MOV dword ptr [EAX + 0x70],0x2      ; 00442d63
    ADD ESP,0x4                         ; 00442d6a
    MOV dword ptr [EBX + 0xd844],0x3    ; 00442d6d
    LEA ESP,[EBP + 0x7a]                ; 00442d77
        ;   Label: LAB_00442d77
    POP EBP                             ; 00442d7a
    POP EDI                             ; 00442d7b
    POP ESI                             ; 00442d7c
    POP EBX                             ; 00442d7d
    RET                                 ; 00442d7e
    MOV dword ptr [EBX + 0x2538],0x0    ; 00442d7f
        ;   Label: LAB_00442d7f
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 00442d89
    MOV ECX,dword ptr [EBX + 0xd844]    ; 00442d93
    MOV dword ptr [EBX + 0xd850],0x0    ; 00442d99
    TEST ECX,ECX                        ; 00442da3
    JNZ 0x00442dc4                      ; 00442da5
        ;   XREF to: 00442dc4 (CONDITIONAL_JUMP)  ; LAB_00442dc4
    PUSH EBX                            ; 00442da7
    CALL core_construc.cpp_FUN_00444110 ; 00442da8
        ;   XREF to: 00444110 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_00444110()
    ADD ESP,0x4                         ; 00442dad
    PUSH 0x5b954d                       ; 00442db0 | = "ConstructDead"
    MOV ESI,dword ptr [0x005fba60]      ; 00442db5 | DAT_005fba60
    PUSH ESI                            ; 00442dbb
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00442dbc
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00442dc1
    PUSH 0x0                            ; 00442dc4
        ;   Label: LAB_00442dc4
    PUSH 0xb                            ; 00442dc6
    LEA EAX,[EBX + 0x158]               ; 00442dc8
    PUSH EAX                            ; 00442dce
    MOV dword ptr [EBX + 0xd844],0x1    ; 00442dcf
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420 ; 00442dd9
        ;   XREF to: 004fc420 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_004fc420(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00442dde
    MOV dword ptr [EBX + 0xd848],0xffffffff ; 00442de1
    JMP 0x00442a68                      ; 00442deb
        ;   XREF to: 00442a68 (UNCONDITIONAL_JUMP)  ; LAB_00442a68
    PUSH 0x5b955b                       ; 00442df0 | = "stick-heartbeat.wav @ .2"
        ;   Label: LAB_00442df0
    MOV EAX,dword ptr [EBX + 0x154]     ; 00442df5
    PUSH EBX                            ; 00442dfb
    CALL dword ptr [EAX + 0x2c]         ; 00442dfc
    MOV EDX,0x3f800000                  ; 00442dff
    MOV ECX,0x3ecccccd                  ; 00442e04
    ADD ESP,0x8                         ; 00442e09
    MOV dword ptr [EBX + 0xd0f4],EAX    ; 00442e0c
    MOV dword ptr [EBP + 0x5a],EDX      ; 00442e12
    MOV dword ptr [EBP + 0x56],ECX      ; 00442e15
    JMP 0x00442ab8                      ; 00442e18
        ;   XREF to: 00442ab8 (UNCONDITIONAL_JUMP)  ; LAB_00442ab8
    CMP ECX,0x2                         ; 00442e1d
        ;   Label: LAB_00442e1d
    JZ 0x00442e4b                       ; 00442e20
        ;   XREF to: 00442e4b (CONDITIONAL_JUMP)  ; LAB_00442e4b
    CMP ECX,0x3                         ; 00442e22
    JNZ 0x00442bf6                      ; 00442e25
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    PUSH 0x5f16f4                       ; 00442e2b | DAT_005f16f4
    PUSH dword ptr [EBP + 0x4e]         ; 00442e30
    PUSH dword ptr [EBP + 0x56]         ; 00442e33
    LEA EAX,[EBP + 0xfffffe12]          ; 00442e36
    PUSH dword ptr [EBP + 0x5a]         ; 00442e3c
    PUSH EAX                            ; 00442e3f
    MOV EAX,[0x005fc5a0]                ; 00442e40 | DAT_005fc5a0
    PUSH EAX                            ; 00442e45
    JMP 0x00442bee                      ; 00442e46
        ;   XREF to: 00442bee (UNCONDITIONAL_JUMP)  ; LAB_00442bee
    PUSH 0x5f16dc                       ; 00442e4b | DAT_005f16dc
        ;   Label: LAB_00442e4b
    PUSH dword ptr [EBP + 0x4e]         ; 00442e50
    PUSH dword ptr [EBP + 0x56]         ; 00442e53
    LEA EAX,[EBP + 0xfffffe12]          ; 00442e56
    PUSH dword ptr [EBP + 0x5a]         ; 00442e5c
    PUSH EAX                            ; 00442e5f
    MOV EDX,dword ptr [0x005fc5a0]      ; 00442e60 | DAT_005fc5a0
    PUSH EDX                            ; 00442e66
    JMP 0x00442bee                      ; 00442e67
        ;   XREF to: 00442bee (UNCONDITIONAL_JUMP)  ; LAB_00442bee
    CMP ESI,0x1                         ; 00442e6c
        ;   Label: LAB_00442e6c
    JNZ 0x00442bf6                      ; 00442e6f
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    MOV EAX,dword ptr [EBX + 0xd0f4]    ; 00442e75
    PUSH EAX                            ; 00442e7b
    CALL sound_sndmain.cpp_FUN_00556700 ; 00442e7c
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00442e81
    TEST EAX,EAX                        ; 00442e84
    JZ 0x00442ef4                       ; 00442e86
        ;   XREF to: 00442ef4 (CONDITIONAL_JUMP)  ; LAB_00442ef4
    MOV EDX,dword ptr [EBX + 0xd848]    ; 00442e88
        ;   Label: LAB_00442e88
    LEA EAX,[EDX*0x8 + 0x0]             ; 00442e8e
    ADD EAX,EDX                         ; 00442e95
    LEA EDX,[EBX + 0xd184]              ; 00442e97
    MOV EDX,dword ptr [EDX + EAX*0x8 + 0x44] ; 00442e9d
    TEST EDX,EDX                        ; 00442ea1
    JZ 0x00442bf6                       ; 00442ea3
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    LEA EAX,[EBP + 0xffffff0e]          ; 00442ea9
    ADD EDX,0x20                        ; 00442eaf
    CMP EAX,EDX                         ; 00442eb2
    JNZ 0x00442f19                      ; 00442eb4
        ;   XREF to: 00442f19 (CONDITIONAL_JUMP)  ; LAB_00442f19
    MOV ESI,dword ptr [EBX + 0xd85c]    ; 00442eb6
        ;   Label: LAB_00442eb6
    CMP ESI,0x1                         ; 00442ebc
    JZ 0x00442f35                       ; 00442ebf
        ;   XREF to: 00442f35 (CONDITIONAL_JUMP)  ; LAB_00442f35
    CMP ESI,0x2                         ; 00442ec1
    JZ 0x00442f56                       ; 00442ec4
        ;   XREF to: 00442f56 (CONDITIONAL_JUMP)  ; LAB_00442f56
    CMP ESI,0x3                         ; 00442eca
    JNZ 0x00442bf6                      ; 00442ecd
        ;   XREF to: 00442bf6 (CONDITIONAL_JUMP)  ; LAB_00442bf6
    PUSH 0x5f16f4                       ; 00442ed3 | DAT_005f16f4
    PUSH dword ptr [EBP + 0x4e]         ; 00442ed8
    PUSH dword ptr [EBP + 0x56]         ; 00442edb
    LEA EAX,[EBP + 0xffffff0e]          ; 00442ede
    PUSH dword ptr [EBP + 0x5a]         ; 00442ee4
    PUSH EAX                            ; 00442ee7
    MOV EDX,dword ptr [0x005fc5a0]      ; 00442ee8 | DAT_005fc5a0
    PUSH EDX                            ; 00442eee
    JMP 0x00442bee                      ; 00442eef
        ;   XREF to: 00442bee (UNCONDITIONAL_JUMP)  ; LAB_00442bee
    PUSH 0x5b9574                       ; 00442ef4 | = "stick-heartbeat.wav @ .5"
        ;   Label: LAB_00442ef4
    MOV EAX,dword ptr [EBX + 0x154]     ; 00442ef9
    PUSH EBX                            ; 00442eff
    CALL dword ptr [EAX + 0x2c]         ; 00442f00
    MOV ECX,0x3ecccccd                  ; 00442f03
    ADD ESP,0x8                         ; 00442f08
    MOV dword ptr [EBX + 0xd0f4],EAX    ; 00442f0b
    MOV dword ptr [EBP + 0x56],ECX      ; 00442f11
    JMP 0x00442e88                      ; 00442f14
        ;   XREF to: 00442e88 (UNCONDITIONAL_JUMP)  ; LAB_00442e88
    MOV EAX,dword ptr [EDX]             ; 00442f19
        ;   Label: LAB_00442f19
    MOV dword ptr [EBP + 0xffffff0e],EAX ; 00442f1b
    MOV EAX,dword ptr [EDX + 0x4]       ; 00442f21
    MOV dword ptr [EBP + 0xffffff12],EAX ; 00442f24
    MOV EAX,dword ptr [EDX + 0x8]       ; 00442f2a
    MOV dword ptr [EBP + 0xffffff16],EAX ; 00442f2d
    JMP 0x00442eb6                      ; 00442f33
        ;   XREF to: 00442eb6 (UNCONDITIONAL_JUMP)  ; LAB_00442eb6
    PUSH 0x5f16c4                       ; 00442f35 | DAT_005f16c4
        ;   Label: LAB_00442f35
    PUSH dword ptr [EBP + 0x4e]         ; 00442f3a
    PUSH dword ptr [EBP + 0x56]         ; 00442f3d
    LEA EAX,[EBP + 0xffffff0e]          ; 00442f40
    PUSH dword ptr [EBP + 0x5a]         ; 00442f46
    PUSH EAX                            ; 00442f49
    MOV ESI,dword ptr [0x005fc5a0]      ; 00442f4a | DAT_005fc5a0
    PUSH ESI                            ; 00442f50
    JMP 0x00442bee                      ; 00442f51
        ;   XREF to: 00442bee (UNCONDITIONAL_JUMP)  ; LAB_00442bee
    PUSH 0x5f16dc                       ; 00442f56 | DAT_005f16dc
        ;   Label: LAB_00442f56
    PUSH dword ptr [EBP + 0x4e]         ; 00442f5b
    PUSH dword ptr [EBP + 0x56]         ; 00442f5e
    LEA EAX,[EBP + 0xffffff0e]          ; 00442f61
    JMP 0x00442be3                      ; 00442f67
        ;   XREF to: 00442be3 (UNCONDITIONAL_JUMP)  ; LAB_00442be3
    MOV EDX,dword ptr [EBX + 0xd0f0]    ; 00442f6c
        ;   Label: LAB_00442f6c
    PUSH EDX                            ; 00442f72
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00442f73
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00442f78
    LEA ESP,[EBP + 0x7a]                ; 00442f7b
    POP EBP                             ; 00442f7e
    POP EDI                             ; 00442f7f
    POP ESI                             ; 00442f80
    POP EBX                             ; 00442f81
    RET                                 ; 00442f82
    PUSH 0x5b959d                       ; 00442f83 | = "stick-die.wav"
        ;   Label: LAB_00442f83
    MOV EAX,dword ptr [EBX + 0x154]     ; 00442f88
    PUSH EBX                            ; 00442f8e
    CALL dword ptr [EAX + 0x2c]         ; 00442f8f
    ADD ESP,0x8                         ; 00442f92
    MOV dword ptr [EBX + 0xd104],EAX    ; 00442f95
    JMP 0x00442cbc                      ; 00442f9b
        ;   XREF to: 00442cbc (UNCONDITIONAL_JUMP)  ; LAB_00442cbc
    CMP dword ptr [EBX + 0xd844],0x1    ; 00442fa0
        ;   Label: LAB_00442fa0
    JNZ 0x00442fea                      ; 00442fa7
        ;   XREF to: 00442fea (CONDITIONAL_JUMP)  ; LAB_00442fea
    FLD float ptr [EBX + 0x2538]        ; 00442fa9
    FLDZ                                ; 00442faf
    FCOMPP                              ; 00442fb1
    FNSTSW AX                           ; 00442fb3
    SAHF                                ; 00442fb5
    JNC 0x00442fea                      ; 00442fb6
        ;   XREF to: 00442fea (CONDITIONAL_JUMP)  ; LAB_00442fea
    FLD float ptr [EBX + 0xd850]        ; 00442fb8
    FADD float ptr [EBP + 0x92]         ; 00442fbe
    FST float ptr [EBX + 0xd850]        ; 00442fc4
    FCOMP float ptr [EBX + 0xd178]      ; 00442fca
    FNSTSW AX                           ; 00442fd0
    SAHF                                ; 00442fd2
    JBE 0x00442d77                      ; 00442fd3
        ;   XREF to: 00442d77 (CONDITIONAL_JUMP)  ; LAB_00442d77
    PUSH EBX                            ; 00442fd9
    CALL core_construc.cpp_FUN_004443d0 ; 00442fda
        ;   XREF to: 004443d0 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_004443d0()
    ADD ESP,0x4                         ; 00442fdf
    LEA ESP,[EBP + 0x7a]                ; 00442fe2
    POP EBP                             ; 00442fe5
    POP EDI                             ; 00442fe6
    POP ESI                             ; 00442fe7
    POP EBX                             ; 00442fe8
    RET                                 ; 00442fe9
    CMP dword ptr [EBX + 0xd844],0x2    ; 00442fea
        ;   Label: LAB_00442fea
    JNZ 0x00443306                      ; 00442ff1
        ;   XREF to: 00443306 (CONDITIONAL_JUMP)  ; LAB_00443306
    MOV EDX,dword ptr [EBX + 0xd848]    ; 00442ff7
    LEA EAX,[EDX*0x8 + 0x0]             ; 00442ffd
    ADD EDX,EAX                         ; 00443004
    SHL EDX,0x3                         ; 00443006
    LEA EAX,[EBX + 0xd184]              ; 00443009
    MOV EAX,dword ptr [EDX + EAX*0x1 + 0x44] ; 0044300f
    TEST EAX,EAX                        ; 00443013
    JZ 0x00443043                       ; 00443015
        ;   XREF to: 00443043 (CONDITIONAL_JUMP)  ; LAB_00443043
    PUSH EAX                            ; 00443017
    MOV EDX,dword ptr [EAX + 0x154]     ; 00443018
    CALL dword ptr [EDX + 0x94]         ; 0044301e
    MOV EDX,dword ptr [0x01d5ba14]      ; 00443024 | DAT_01d5ba14
    SHL EDX,0x2                         ; 0044302a
    MOV ECX,dword ptr [EDX + 0x1d5ba04] ; 0044302d
    ADD ESP,0x4                         ; 00443033
    CMP EAX,ECX                         ; 00443036
    JNZ 0x00443043                      ; 00443038
        ;   XREF to: 00443043 (CONDITIONAL_JUMP)  ; LAB_00443043
    PUSH ECX                            ; 0044303a
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0 ; 0044303b
        ;   XREF to: 00431ce0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00431ce0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00443040
    FLD float ptr [EBP + 0x92]          ; 00443043
        ;   Label: LAB_00443043
    FDIV float ptr [0x005dd6f8]         ; 00443049 | DAT_005dd6f8
    FADD float ptr [EBX + 0xd850]       ; 0044304f
    FST float ptr [EBX + 0xd850]        ; 00443055
    FLD1                                ; 0044305b
    FCOMPP                              ; 0044305d
    FNSTSW AX                           ; 0044305f
    SAHF                                ; 00443061
    JBE 0x00443297                      ; 00443062
        ;   XREF to: 00443297 (CONDITIONAL_JUMP)  ; LAB_00443297
    XOR EDX,EDX                         ; 00443068
    MOV ECX,dword ptr [EBX + 0xd180]    ; 0044306a
    MOV dword ptr [EBP + 0x6e],EDX      ; 00443070
    TEST ECX,ECX                        ; 00443073
    JLE 0x00442d77                      ; 00443075
        ;   XREF to: 00442d77 (CONDITIONAL_JUMP)  ; LAB_00442d77
    LEA EAX,[EBX + 0xd184]              ; 0044307b
    MOV dword ptr [EBP + 0x5e],EAX      ; 00443081
    LEA EAX,[EBX + 0xd850]              ; 00443084
    MOV dword ptr [EBP + 0x62],EAX      ; 0044308a
    LEA EAX,[EBX + 0xd19c]              ; 0044308d
    MOV dword ptr [EBP + 0x66],EAX      ; 00443093
    LEA EAX,[EBX + 0xd1ac]              ; 00443096
    MOV dword ptr [EBP + 0x6a],EAX      ; 0044309c
    LEA EAX,[EBX + 0xd1bc]              ; 0044309f
    MOV dword ptr [EBP + 0x72],EAX      ; 004430a5
    IMUL EAX,dword ptr [EBP + 0x6e],0x48 ; 004430a8
        ;   Label: LAB_004430a8
    ADD EAX,dword ptr [EBP + 0x5e]      ; 004430ac
    LEA ESI,[EBP + -0x26]               ; 004430af
    FLD float ptr [EAX]                 ; 004430b2
    MOV EDX,dword ptr [EAX + 0x44]      ; 004430b4
    FLD float ptr [EAX + 0x4]           ; 004430b7
    MOV dword ptr [EBP + 0x46],EDX      ; 004430ba
    MOV EDX,dword ptr [EBP + 0x72]      ; 004430bd
    FLD float ptr [EAX + 0x8]           ; 004430c0
    LEA EDI,[EBP + 0xfffffe2a]          ; 004430c3
    FXCH ST2                            ; 004430c9
    FSUB float ptr [EDX]                ; 004430cb
    FXCH                                ; 004430cd
    FSUB float ptr [EDX + 0x4]          ; 004430cf
    FXCH ST2                            ; 004430d2
    FSUB float ptr [EDX + 0x8]          ; 004430d4
    FXCH                                ; 004430d7
    FSTP float ptr [EBP + -0x26]        ; 004430d9
    FXCH                                ; 004430dc
    FSTP float ptr [EBP + -0x22]        ; 004430de
    FSTP float ptr [EBP + -0x1e]        ; 004430e1
    MOVSD ES:EDI,ESI                    ; 004430e4
    MOVSD ES:EDI,ESI                    ; 004430e5
    MOVSD ES:EDI,ESI                    ; 004430e6
    MOV EAX,dword ptr [EBP + 0x62]      ; 004430e7
    FLD float ptr [EBP + 0xfffffe2a]    ; 004430ea
    FMUL float ptr [EAX]                ; 004430f0
    FLD float ptr [EBP + 0xfffffe2e]    ; 004430f2
    FMUL float ptr [EAX]                ; 004430f8
    FLD float ptr [EBP + 0xfffffe32]    ; 004430fa
    FMUL float ptr [EAX]                ; 00443100
    LEA EDI,[EBP + -0x3e]               ; 00443102
    LEA ESI,[EBP + 0x22]                ; 00443105
    FXCH ST2                            ; 00443108
    FSTP float ptr [EBP + 0x22]         ; 0044310a
    FSTP float ptr [EBP + 0x26]         ; 0044310d
    FSTP float ptr [EBP + 0x2a]         ; 00443110
    MOVSD ES:EDI,ESI                    ; 00443113
    MOVSD ES:EDI,ESI                    ; 00443114
    MOVSD ES:EDI,ESI                    ; 00443115
    FLD float ptr [EDX]                 ; 00443116
    FLD float ptr [EDX + 0x4]           ; 00443118
    FLD float ptr [EDX + 0x8]           ; 0044311b
    LEA EDI,[EBP + 0xffffff56]          ; 0044311e
    LEA ESI,[EBP + 0xfffffeea]          ; 00443124
    FXCH ST2                            ; 0044312a
    FADD float ptr [EBP + -0x3e]        ; 0044312c
    FXCH                                ; 0044312f
    FADD float ptr [EBP + -0x3a]        ; 00443131
    FXCH ST2                            ; 00443134
    FADD float ptr [EBP + -0x36]        ; 00443136
    FXCH                                ; 00443139
    FSTP float ptr [EBP + 0xfffffeea]   ; 0044313b
    FXCH                                ; 00443141
    FSTP float ptr [EBP + 0xfffffeee]   ; 00443143
    FSTP float ptr [EBP + 0xfffffef2]   ; 00443149
    MOVSD ES:EDI,ESI                    ; 0044314f
    MOVSD ES:EDI,ESI                    ; 00443150
    MOVSD ES:EDI,ESI                    ; 00443151
    MOV EAX,dword ptr [EBP + 0x6a]      ; 00443152
    PUSH dword ptr [EBX + 0xd850]       ; 00443155
    PUSH EAX                            ; 0044315b
    MOV EDX,dword ptr [EBP + 0x66]      ; 0044315c
    PUSH EDX                            ; 0044315f
    LEA ESI,[EBP + 0xfffffde6]          ; 00443160
    LEA EDI,[EBP + 0xfffffdf6]          ; 00443166
    CALL core_xform.cpp_slerpQuaternion_FUN_00585b20 ; 0044316c
        ;   XREF to: 00585b20 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00585b20()
    LEA ESI,[EBP + 0xfffffde6]          ; 00443171
    LEA EAX,[EBP + 0xfffffdf6]          ; 00443177
    ADD ESP,0xc                         ; 0044317d
    MOVSD ES:EDI,ESI                    ; 00443180
    MOVSD ES:EDI,ESI                    ; 00443181
    MOVSD ES:EDI,ESI                    ; 00443182
    MOVSD ES:EDI,ESI                    ; 00443183
    PUSH EAX                            ; 00443184
    LEA ESI,[EBP + 0xfffffeba]          ; 00443185
    LEA EDI,[EBP + 0xfffffe7e]          ; 0044318b
    CALL core_xform.cpp_FUN_00585de0    ; 00443191
        ;   XREF to: 00585de0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00585de0()
    LEA ESI,[EBP + 0xfffffeba]          ; 00443196
    MOVSD ES:EDI,ESI                    ; 0044319c
    MOVSD ES:EDI,ESI                    ; 0044319d
    MOVSD ES:EDI,ESI                    ; 0044319e
    FLD float ptr [EBX + 0xd850]        ; 0044319f
    FMUL double ptr [0x005b969d]        ; 004431a5 | DAT_005b969d
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 004431ab
    FLD float ptr [EBP + 0xfffffe7e]    ; 004431b1
    FXCH                                ; 004431b7
    FADD ST0,ST1                        ; 004431b9
    MOV ESI,dword ptr [EBP + 0x46]      ; 004431bb
    FSTP ST1                            ; 004431be
    FSTP float ptr [EBP + 0xfffffe7e]   ; 004431c0
    MOV dword ptr [ESI + 0x20],EAX      ; 004431c6
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 004431c9
    MOV dword ptr [ESI + 0x24],EAX      ; 004431cf
    MOV EAX,dword ptr [EBP + 0xffffff5e] ; 004431d2
    LEA EDX,[ESI + 0x30]                ; 004431d8
    MOV dword ptr [ESI + 0x28],EAX      ; 004431db
    LEA EAX,[EBP + 0xfffffe7e]          ; 004431de
    ADD ESP,0x4                         ; 004431e4
    CMP EDX,EAX                         ; 004431e7
    JNZ 0x00443278                      ; 004431e9
        ;   XREF to: 00443278 (CONDITIONAL_JUMP)  ; LAB_00443278
    LEA EAX,[EBP + 0xffffff56]          ; 004431ef
        ;   Label: LAB_004431ef
    LEA EDX,[ESI + 0xcd0]               ; 004431f5
    CMP EDX,EAX                         ; 004431fb
    JZ 0x00443219                       ; 004431fd
        ;   XREF to: 00443219 (CONDITIONAL_JUMP)  ; LAB_00443219
    MOV EAX,dword ptr [EBP + 0xffffff56] ; 004431ff
    MOV dword ptr [EDX],EAX             ; 00443205
    MOV EAX,dword ptr [EBP + 0xffffff5a] ; 00443207
    MOV dword ptr [EDX + 0x4],EAX       ; 0044320d
    MOV EAX,dword ptr [EBP + 0xffffff5e] ; 00443210
    MOV dword ptr [EDX + 0x8],EAX       ; 00443216
    LEA EAX,[EBP + 0xfffffe7e]          ; 00443219
        ;   Label: LAB_00443219
    LEA EDX,[ESI + 0xcdc]               ; 0044321f
    CMP EDX,EAX                         ; 00443225
    JZ 0x00443243                       ; 00443227
        ;   XREF to: 00443243 (CONDITIONAL_JUMP)  ; LAB_00443243
    MOV EAX,dword ptr [EBP + 0xfffffe7e] ; 00443229
    MOV dword ptr [EDX],EAX             ; 0044322f
    MOV EAX,dword ptr [EBP + 0xfffffe82] ; 00443231
    MOV dword ptr [EDX + 0x4],EAX       ; 00443237
    MOV EAX,dword ptr [EBP + 0xfffffe86] ; 0044323a
    MOV dword ptr [EDX + 0x8],EAX       ; 00443240
    MOV ESI,dword ptr [EBP + 0x66]      ; 00443243
        ;   Label: LAB_00443243
    MOV EDI,dword ptr [EBP + 0x6a]      ; 00443246
    MOV EAX,dword ptr [EBP + 0x72]      ; 00443249
    MOV EDX,dword ptr [EBP + 0x6e]      ; 0044324c
    MOV ECX,dword ptr [EBX + 0xd180]    ; 0044324f
    ADD ESI,0x48                        ; 00443255
    ADD EDI,0x48                        ; 00443258
    ADD EAX,0x48                        ; 0044325b
    INC EDX                             ; 0044325e
    MOV dword ptr [EBP + 0x66],ESI      ; 0044325f
    MOV dword ptr [EBP + 0x6a],EDI      ; 00443262
    MOV dword ptr [EBP + 0x72],EAX      ; 00443265
    MOV dword ptr [EBP + 0x6e],EDX      ; 00443268
    CMP EDX,ECX                         ; 0044326b
    JGE 0x00442d77                      ; 0044326d
        ;   XREF to: 00442d77 (CONDITIONAL_JUMP)  ; LAB_00442d77
    JMP 0x004430a8                      ; 00443273
        ;   XREF to: 004430a8 (UNCONDITIONAL_JUMP)  ; LAB_004430a8
    MOV EAX,dword ptr [EBP + 0xfffffe7e] ; 00443278
        ;   Label: LAB_00443278
    MOV dword ptr [EDX],EAX             ; 0044327e
    MOV EAX,dword ptr [EBP + 0xfffffe82] ; 00443280
    MOV dword ptr [EDX + 0x4],EAX       ; 00443286
    MOV EAX,dword ptr [EBP + 0xfffffe86] ; 00443289
    MOV dword ptr [EDX + 0x8],EAX       ; 0044328f
    JMP 0x004431ef                      ; 00443292
        ;   XREF to: 004431ef (UNCONDITIONAL_JUMP)  ; LAB_004431ef
    LEA EAX,[EBX + 0x158]               ; 00443297
        ;   Label: LAB_00443297
    PUSH EAX                            ; 0044329d
    XOR EDI,EDI                         ; 0044329e
    CALL core_skeleton.cpp_FUN_0054e670 ; 004432a0
        ;   XREF to: 0054e670 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054e670()
    MOV EAX,dword ptr [EBX + 0xd180]    ; 004432a5
    ADD ESP,0x4                         ; 004432ab
    TEST EAX,EAX                        ; 004432ae
    JLE 0x004432f0                      ; 004432b0
        ;   XREF to: 004432f0 (CONDITIONAL_JUMP)  ; LAB_004432f0
    MOV ESI,EBX                         ; 004432b2
    PUSH 0x1                            ; 004432b4
        ;   Label: LAB_004432b4
    MOV ECX,dword ptr [ESI + 0xd1c8]    ; 004432b6
    PUSH ECX                            ; 004432bc
    MOV EAX,[0x00600530]                ; 004432bd | DAT_00600530
    PUSH EAX                            ; 004432c2 | DAT_01d81080
    ADD ESI,0x48                        ; 004432c3
    CALL core_mission.cpp_FUN_004f6f10  ; 004432c6
        ;   XREF to: 004f6f10 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f10()
    MOV dword ptr [ESI + 0xd180],0x0    ; 004432cb
    INC EDI                             ; 004432d5
    MOV EDX,dword ptr [EBX + 0xd180]    ; 004432d6
    ADD ESP,0xc                         ; 004432dc
    CMP EDI,EDX                         ; 004432df
    JL 0x004432b4                       ; 004432e1
        ;   XREF to: 004432b4 (CONDITIONAL_JUMP)  ; LAB_004432b4
    LEA EAX,[EAX]                       ; 004432e3
    LEA EDX,[EDX]                       ; 004432e9
    NOP                                 ; 004432ef
    MOV dword ptr [EBX + 0xd844],0x0    ; 004432f0
        ;   Label: LAB_004432f0
    FILD dword ptr [EBX + 0xd17c]       ; 004432fa
    FSTP float ptr [EBX + 0x2538]       ; 00443300
    LEA EAX,[EBX + 0x249c]              ; 00443306
        ;   Label: LAB_00443306
    MOV dword ptr [EAX + 0x8],0x0       ; 0044330c
    FLD float ptr [EBP + 0x92]          ; 00443313
    MOV EDX,dword ptr [EAX + 0x8]       ; 00443319
    MOV dword ptr [EAX + 0x4],EDX       ; 0044331c
    MOV EDX,dword ptr [EAX + 0x4]       ; 0044331f
    MOV dword ptr [EAX],EDX             ; 00443322
    FMUL float ptr [EBX + 0xcdcc]       ; 00443324
    FMUL float ptr [EBX + 0xd858]       ; 0044332a
    LEA EDI,[EBX + 0x158]               ; 00443330
    FSTP float ptr [EBP + 0x36]         ; 00443336
    FLD float ptr [EBP + 0x36]          ; 00443339
        ;   Label: LAB_00443339
    FLDZ                                ; 0044333c
    FCOMPP                              ; 0044333e
    FNSTSW AX                           ; 00443340
    SAHF                                ; 00443342
    JNC 0x004433d9                      ; 00443343
        ;   XREF to: 004433d9 (CONDITIONAL_JUMP)  ; LAB_004433d9
    LEA EAX,[EBP + 0x36]                ; 00443349
    PUSH EAX                            ; 0044334c
    PUSH EDI                            ; 0044334d
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0044334e
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00443353
    MOV ESI,EAX                         ; 00443356
    CMP EAX,0x1                         ; 00443358
    JNC 0x004433c3                      ; 0044335b
        ;   XREF to: 004433c3 (CONDITIONAL_JUMP)  ; LAB_004433c3
    PUSH ESI                            ; 0044335d
        ;   Label: LAB_0044335d
    PUSH EBX                            ; 0044335e
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0044335f
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00443364
    JMP 0x00443339                      ; 00443367
        ;   XREF to: 00443339 (UNCONDITIONAL_JUMP)  ; LAB_00443339
    MOV EDX,dword ptr [EBX + 0xd0f8]    ; 00443369
        ;   Label: LAB_00443369
    PUSH EDX                            ; 0044336f
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443370
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443375
    TEST EAX,EAX                        ; 00443378
    JZ 0x004433a9                       ; 0044337a
        ;   XREF to: 004433a9 (CONDITIONAL_JUMP)  ; LAB_004433a9
    MOV ECX,dword ptr [EBX + 0xd0fc]    ; 0044337c
        ;   Label: LAB_0044337c
    PUSH ECX                            ; 00443382
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443383
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443388
    TEST EAX,EAX                        ; 0044338b
    JNZ 0x0044335d                      ; 0044338d
        ;   XREF to: 0044335d (CONDITIONAL_JUMP)  ; LAB_0044335d
    PUSH 0x5b95c1                       ; 0044338f | = "stick-leg1.wav @ .2"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443394
    PUSH EBX                            ; 0044339a
    CALL dword ptr [EAX + 0x2c]         ; 0044339b
    ADD ESP,0x8                         ; 0044339e
    MOV dword ptr [EBX + 0xd0fc],EAX    ; 004433a1
    JMP 0x0044335d                      ; 004433a7
        ;   XREF to: 0044335d (UNCONDITIONAL_JUMP)  ; LAB_0044335d
    PUSH 0x5b95ab                       ; 004433a9 | = "stick-stump?.wav @ .2"
        ;   Label: LAB_004433a9
    MOV EAX,dword ptr [EBX + 0x154]     ; 004433ae
    PUSH EBX                            ; 004433b4
    CALL dword ptr [EAX + 0x2c]         ; 004433b5
    ADD ESP,0x8                         ; 004433b8
    MOV dword ptr [EBX + 0xd0f8],EAX    ; 004433bb
    JMP 0x0044337c                      ; 004433c1
        ;   XREF to: 0044337c (UNCONDITIONAL_JUMP)  ; LAB_0044337c
    JBE 0x00443369                      ; 004433c3
        ;   XREF to: 00443369 (CONDITIONAL_JUMP)  ; LAB_00443369
        ;   Label: LAB_004433c3
    CMP EAX,0x7                         ; 004433c5
    JZ 0x0044337c                       ; 004433c8
        ;   XREF to: 0044337c (CONDITIONAL_JUMP)  ; LAB_0044337c
    PUSH ESI                            ; 004433ca
    PUSH EBX                            ; 004433cb
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 004433cc
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004433d1
    JMP 0x00443339                      ; 004433d4
        ;   XREF to: 00443339 (UNCONDITIONAL_JUMP)  ; LAB_00443339
    FLD float ptr [EBP + 0x92]          ; 004433d9
        ;   Label: LAB_004433d9
    FMUL float ptr [EBX + 0xcdcc]       ; 004433df
    SUB ESP,0x4                         ; 004433e5
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 004433e8
    MOV dword ptr [EBX + 0x2524],EAX    ; 004433ee
    FSTP float ptr [ESP]                ; 004433f4
    PUSH EBX                            ; 004433f7
    CALL core_charactr.cpp_FUN_00434850 ; 004433f8
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 004433fd
    PUSH dword ptr [EBP + 0x92]         ; 00443400
    PUSH EBX                            ; 00443406
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 00443407
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0044340c
    TEST EAX,EAX                        ; 0044340f
    JZ 0x00443c4e                       ; 00443411
        ;   XREF to: 00443c4e (CONDITIONAL_JUMP)  ; LAB_00443c4e
    MOV EAX,dword ptr [EBX + 0x273c]    ; 00443417
    CMP EAX,0x2                         ; 0044341d
    JNC 0x00443669                      ; 00443420
        ;   XREF to: 00443669 (CONDITIONAL_JUMP)  ; LAB_00443669
    CMP EAX,0x1                         ; 00443426
    JNZ 0x00443674                      ; 00443429
        ;   XREF to: 00443674 (CONDITIONAL_JUMP)  ; LAB_00443674
    PUSH 0x1                            ; 0044342f
        ;   Label: LAB_0044342f
    PUSH 0x3                            ; 00443431
    LEA EAX,[EBX + 0x158]               ; 00443433
        ;   Label: LAB_00443433
    PUSH EAX                            ; 00443439
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044343a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044343f
        ;   Label: LAB_0044343f
    LEA EAX,[EBX + 0x249c]              ; 00443442
    MOV dword ptr [EAX + 0x8],0x0       ; 00443448
    MOV EDX,dword ptr [EAX + 0x8]       ; 0044344f
    MOV dword ptr [EAX + 0x4],EDX       ; 00443452
    MOV EDX,dword ptr [EAX + 0x4]       ; 00443455
    MOV dword ptr [EAX],EDX             ; 00443458
    FLD float ptr [EBX + 0xcde0]        ; 0044345a
        ;   Label: caseD_7
    FLDZ                                ; 00443460
    FCOMPP                              ; 00443462
    FNSTSW AX                           ; 00443464
    SAHF                                ; 00443466
    JNC 0x0044347b                      ; 00443467
        ;   XREF to: 0044347b (CONDITIONAL_JUMP)  ; LAB_0044347b
    FLD float ptr [EBX + 0xcde0]        ; 00443469
    FSUB float ptr [EBP + 0x92]         ; 0044346f
    FSTP float ptr [EBX + 0xcde0]       ; 00443475
    PUSH EBX                            ; 0044347b
        ;   Label: LAB_0044347b
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 0044347c
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00443481
    TEST EAX,EAX                        ; 00443484
    JZ 0x00443597                       ; 00443486
        ;   XREF to: 00443597 (CONDITIONAL_JUMP)  ; LAB_00443597
    CMP dword ptr [EBP + 0x52],0xc      ; 0044348c
    JZ 0x00443597                       ; 00443490
        ;   XREF to: 00443597 (CONDITIONAL_JUMP)  ; LAB_00443597
    PUSH dword ptr [EBP + 0x92]         ; 00443496
    PUSH EBX                            ; 0044349c
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0044349d
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    LEA ECX,[EBX + 0x2518]              ; 004434a2
    FLD float ptr [ECX]                 ; 004434a8
    FMUL float ptr [EBP + 0x92]         ; 004434aa
    FLD float ptr [ECX + 0x4]           ; 004434b0
    FMUL float ptr [EBP + 0x92]         ; 004434b3
    FLD float ptr [ECX + 0x8]           ; 004434b9
    FMUL float ptr [EBP + 0x92]         ; 004434bc
    LEA EDI,[EBP + 0xfffffede]          ; 004434c2
    LEA ESI,[EBP + 0x16]                ; 004434c8
    FXCH ST2                            ; 004434cb
    FSTP float ptr [EBP + 0x16]         ; 004434cd
    FSTP float ptr [EBP + 0x1a]         ; 004434d0
    FSTP float ptr [EBP + 0x1e]         ; 004434d3
    MOVSD ES:EDI,ESI                    ; 004434d6
    MOVSD ES:EDI,ESI                    ; 004434d7
    MOVSD ES:EDI,ESI                    ; 004434d8
    LEA EAX,[EBX + 0x250c]              ; 004434d9
    FLD float ptr [EBP + 0xfffffede]    ; 004434df
    FLD float ptr [EBP + 0xfffffee2]    ; 004434e5
    FLD float ptr [EBP + 0xfffffee6]    ; 004434eb
    LEA EDI,[EBP + -0x4a]               ; 004434f1
    LEA ESI,[EBP + 0xfffffe42]          ; 004434f4
    FXCH ST2                            ; 004434fa
    FADD float ptr [EAX]                ; 004434fc
    FXCH                                ; 004434fe
    FADD float ptr [EAX + 0x4]          ; 00443500
    FXCH ST2                            ; 00443503
    FADD float ptr [EAX + 0x8]          ; 00443505
    FXCH                                ; 00443508
    FSTP float ptr [EBP + 0xfffffe42]   ; 0044350a
    FXCH                                ; 00443510
    FSTP float ptr [EBP + 0xfffffe46]   ; 00443512
    FSTP float ptr [EBP + 0xfffffe4a]   ; 00443518
    MOVSD ES:EDI,ESI                    ; 0044351e
    MOVSD ES:EDI,ESI                    ; 0044351f
    MOVSD ES:EDI,ESI                    ; 00443520
    LEA EDX,[EBX + 0x249c]              ; 00443521
    FLD float ptr [EBP + -0x4a]         ; 00443527
    FLD float ptr [EBP + -0x46]         ; 0044352a
    FLD float ptr [EBP + -0x42]         ; 0044352d
    LEA EDI,[EBP + 0xfffffed2]          ; 00443530
    LEA ESI,[EBP + 0xfffffe96]          ; 00443536
    FXCH ST2                            ; 0044353c
    FADD float ptr [EDX]                ; 0044353e
    FXCH                                ; 00443540
    FADD float ptr [EDX + 0x4]          ; 00443542
    FXCH ST2                            ; 00443545
    FADD float ptr [EDX + 0x8]          ; 00443547
    FXCH                                ; 0044354a
    FSTP float ptr [EBP + 0xfffffe96]   ; 0044354c
    FXCH                                ; 00443552
    FSTP float ptr [EBP + 0xfffffe9a]   ; 00443554
    FSTP float ptr [EBP + 0xfffffe9e]   ; 0044355a
    MOVSD ES:EDI,ESI                    ; 00443560
    MOVSD ES:EDI,ESI                    ; 00443561
    MOVSD ES:EDI,ESI                    ; 00443562
    MOV dword ptr [EAX + 0x8],0x0       ; 00443563
    ADD ESP,0x8                         ; 0044356a
    MOV ECX,dword ptr [EAX + 0x8]       ; 0044356d
    MOV dword ptr [EAX + 0x4],ECX       ; 00443570
    MOV ECX,dword ptr [EAX + 0x4]       ; 00443573
    MOV dword ptr [EAX],ECX             ; 00443576
    MOV dword ptr [EDX + 0x8],0x0       ; 00443578
    LEA EAX,[EBP + 0xfffffed2]          ; 0044357f
    FLD float ptr [EDX + 0x8]           ; 00443585
    PUSH EAX                            ; 00443588
    FST float ptr [EDX + 0x4]           ; 00443589
    PUSH EBX                            ; 0044358c
    FSTP float ptr [EDX]                ; 0044358d
    CALL core_charactr.cpp_FUN_0042c230 ; 0044358f
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 00443594
    PUSH EBX                            ; 00443597
        ;   Label: LAB_00443597
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30 ; 00443598
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0044359d
    LEA EAX,[EBX + 0x158]               ; 004435a0
    PUSH EAX                            ; 004435a6
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 004435a7
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004435ac
    PUSH dword ptr [EBP + 0x92]         ; 004435af
    PUSH EBX                            ; 004435b5
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 004435b6
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    MOV ECX,dword ptr [EBP + 0x52]      ; 004435bb
    ADD ESP,0x8                         ; 004435be
    CMP ECX,0x3                         ; 004435c1
    JNZ 0x00443c63                      ; 004435c4
        ;   XREF to: 00443c63 (CONDITIONAL_JUMP)  ; LAB_00443c63
    PUSH 0x42c80000                     ; 004435ca
        ;   Label: LAB_004435ca
    SUB ESP,0x8                         ; 004435cf
    FLD float ptr [EBX + 0x28]          ; 004435d2
    FSTP double ptr [ESP]               ; 004435d5
    SUB ESP,0x8                         ; 004435d8
    FLD float ptr [EBX + 0x24]          ; 004435db
    FSTP double ptr [ESP]               ; 004435de
    SUB ESP,0x8                         ; 004435e1
    FLD float ptr [EBX + 0x20]          ; 004435e4
    FSTP double ptr [ESP]               ; 004435e7
    CALL sound_sndmain.cpp_FUN_00557170 ; 004435ea
        ;   XREF to: 00557170 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_00557170()
    ADD ESP,0x1c                        ; 004435ef
    TEST EAX,EAX                        ; 004435f2
    JZ 0x00443c6c                       ; 004435f4
        ;   XREF to: 00443c6c (CONDITIONAL_JUMP)  ; LAB_00443c6c
    MOV EAX,dword ptr [EBX + 0xd0f0]    ; 004435fa
    PUSH EAX                            ; 00443600
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443601
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443606
    TEST EAX,EAX                        ; 00443609
    JNZ 0x00442d77                      ; 0044360b
        ;   XREF to: 00442d77 (CONDITIONAL_JUMP)  ; LAB_00442d77
    PUSH 0x3e99999a                     ; 00443611
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 00443616
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0044361b
    TEST EAX,EAX                        ; 0044361e
    JZ 0x00442d77                       ; 00443620
        ;   XREF to: 00442d77 (CONDITIONAL_JUMP)  ; LAB_00442d77
    PUSH 0x5b9662                       ; 00443626 | = "stick-walk_growl1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044362b
    PUSH EBX                            ; 00443631
    CALL dword ptr [EAX + 0x2c]         ; 00443632
    ADD ESP,0x8                         ; 00443635
    MOV dword ptr [EBX + 0xd0f0],EAX    ; 00443638
    LEA ESP,[EBP + 0x7a]                ; 0044363e
    POP EBP                             ; 00443641
    POP EDI                             ; 00443642
    POP ESI                             ; 00443643
    POP EBX                             ; 00443644
    RET                                 ; 00443645
    PUSH 0x1                            ; 00443646
        ;   Label: LAB_00443646
    PUSH 0x0                            ; 00443648
    PUSH EDI                            ; 0044364a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044364b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443650
    PUSH EBX                            ; 00443653
    PUSH 0x5b95d5                       ; 00443654 | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x005f1690]                ; 00443659 | g_CConsolePtr
    PUSH EAX                            ; 0044365e | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 0044365f
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    JMP 0x0044343f                      ; 00443664
        ;   XREF to: 0044343f (UNCONDITIONAL_JUMP)  ; LAB_0044343f
    JBE 0x0044342f                      ; 00443669
        ;   XREF to: 0044342f (CONDITIONAL_JUMP)  ; LAB_0044342f
        ;   Label: LAB_00443669
    CMP EAX,0x3                         ; 0044366f
    JZ 0x00443646                       ; 00443672
        ;   XREF to: 00443646 (CONDITIONAL_JUMP)  ; LAB_00443646
    PUSH 0x1                            ; 00443674
        ;   Label: LAB_00443674
    PUSH 0x2                            ; 00443676
    PUSH 0x0                            ; 00443678
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0044367a
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0044367f
    PUSH EAX                            ; 00443682
    JMP 0x00443433                      ; 00443683
        ;   XREF to: 00443433 (UNCONDITIONAL_JUMP)  ; LAB_00443433
    LEA EAX,[EBP + 0xfffffdaa]          ; 00443688
        ;   Label: caseD_5
    PUSH EAX                            ; 0044368e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0044368f
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00443694
    PUSH 0x41700000                     ; 00443697
    PUSH 0x40e00000                     ; 0044369c
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 004436a1
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004436a6
    FLD float ptr [EBP + 0x76]          ; 004436a9
    FMUL float ptr [EBX + 0xd858]       ; 004436ac
    ADD ESP,0x8                         ; 004436b2
    LEA EAX,[EBP + 0xfffffdaa]          ; 004436b5
    MOV EDX,dword ptr [0x007f8e6c]      ; 004436bb | DAT_007f8e6c
    PUSH EAX                            ; 004436c1
    LEA EAX,[EDX*0x4 + 0x0]             ; 004436c2
    MOV dword ptr [EBP + 0xfffffdde],EBX ; 004436c9
    SUB EAX,EDX                         ; 004436cf
    MOV dword ptr [EBP + 0xfffffde2],EBX ; 004436d1
    SHL EAX,0x4                         ; 004436d7
    LEA EDX,[EBX + 0xfd8]               ; 004436da
    ADD EAX,EDX                         ; 004436e0
    PUSH 0x3f800000                     ; 004436e2
    PUSH EAX                            ; 004436e7
    LEA ESI,[EBP + 0xfffffe66]          ; 004436e8
    LEA EDI,[EBP + -0x32]               ; 004436ee
    PUSH 0x2cfd900                      ; 004436f1 | DAT_02cfd900
    FSTP float ptr [EBP + 0xfffffdae]   ; 004436f6
    MOV dword ptr [EBP + 0x76],EDX      ; 004436fc
    CALL core_xform.cpp_FUN_00583260    ; 004436ff
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00443704
    LEA EAX,[EBP + -0x32]               ; 00443707
    LEA ESI,[EBP + 0xfffffe66]          ; 0044370a
    PUSH EAX                            ; 00443710
    MOVSD ES:EDI,ESI                    ; 00443711
    MOVSD ES:EDI,ESI                    ; 00443712
    MOVSD ES:EDI,ESI                    ; 00443713
    PUSH EBX                            ; 00443714
    LEA ESI,[EBP + 0xfffffe1e]          ; 00443715
    CALL core_actor.cpp_FUN_00408b80    ; 0044371b
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 00443720
    LEA EAX,[EBP + -0x1a]               ; 00443723
    PUSH EAX                            ; 00443726
    LEA EDI,[EBP + -0x1a]               ; 00443727
    LEA ESI,[EBP + 0xfffffe1e]          ; 0044372a
    PUSH EBX                            ; 00443730
    MOVSD ES:EDI,ESI                    ; 00443731
    MOVSD ES:EDI,ESI                    ; 00443732
    MOVSD ES:EDI,ESI                    ; 00443733
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 00443734
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00443739
    LEA EAX,[EBP + 0xfffffdaa]          ; 0044373c
    MOV EDX,dword ptr [0x007f8e74]      ; 00443742 | DAT_007f8e74
    PUSH EAX                            ; 00443748
    LEA EAX,[EDX*0x4 + 0x0]             ; 00443749
    SUB EAX,EDX                         ; 00443750
    MOV ECX,dword ptr [EBP + 0x76]      ; 00443752
    SHL EAX,0x4                         ; 00443755
    ADD EAX,ECX                         ; 00443758
    PUSH 0x3f800000                     ; 0044375a
    PUSH EAX                            ; 0044375f
    PUSH 0x2cfd900                      ; 00443760 | DAT_02cfd900
    LEA ESI,[EBP + 0xfffffe36]          ; 00443765
    LEA EDI,[EBP + -0xe]                ; 0044376b
    CALL core_xform.cpp_FUN_00583260    ; 0044376e
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 00443773
    LEA EAX,[EBP + -0xe]                ; 00443776
    LEA ESI,[EBP + 0xfffffe36]          ; 00443779
    PUSH EAX                            ; 0044377f
    MOVSD ES:EDI,ESI                    ; 00443780
    MOVSD ES:EDI,ESI                    ; 00443781
    MOVSD ES:EDI,ESI                    ; 00443782
    PUSH EBX                            ; 00443783
    LEA ESI,[EBP + 0xfffffe4e]          ; 00443784
    CALL core_actor.cpp_FUN_00408b80    ; 0044378a
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0044378f
    LEA EAX,[EBP + 0xffffff3e]          ; 00443792
    PUSH EAX                            ; 00443798
    LEA EDI,[EBP + 0xffffff3e]          ; 00443799
    LEA ESI,[EBP + 0xfffffe4e]          ; 0044379f
    PUSH EBX                            ; 004437a5
    MOVSD ES:EDI,ESI                    ; 004437a6
    MOVSD ES:EDI,ESI                    ; 004437a7
    MOVSD ES:EDI,ESI                    ; 004437a8
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0 ; 004437a9
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004893f0(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004437ae
    JMP 0x0044345a                      ; 004437b1
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xd854],0x0    ; 004437b6
        ;   Label: caseD_b
    JNZ 0x0044345a                      ; 004437bd
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5b95ff                       ; 004437c3 | = "stick-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 004437c8
    PUSH EBX                            ; 004437ce
    CALL dword ptr [EAX + 0x2c]         ; 004437cf
    MOV dword ptr [EBX + 0xd854],0x1    ; 004437d2
    ADD ESP,0x8                         ; 004437dc
    MOV dword ptr [EBX + 0xd104],EAX    ; 004437df
    JMP 0x0044345a                      ; 004437e5
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004437ea
        ;   Label: caseD_0
    PUSH EBX                            ; 004437f0
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 004437f1
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004437f6
    LEA ESI,[EBX + 0x158]               ; 004437f9
    TEST EAX,EAX                        ; 004437ff
    JZ 0x00443815                       ; 00443801
        ;   XREF to: 00443815 (CONDITIONAL_JUMP)  ; LAB_00443815
    PUSH 0x1                            ; 00443803
    PUSH 0x3                            ; 00443805
    PUSH ESI                            ; 00443807
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443808
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0044380d
    JMP 0x0044345a                      ; 00443810
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00443815
        ;   Label: LAB_00443815
    MOV EAX,dword ptr [EBX + 0x154]     ; 0044381b
    PUSH EBX                            ; 00443821
    CALL dword ptr [EAX + 0x144]        ; 00443822
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00443828
    ADD ESP,0x8                         ; 0044382e
    TEST EDI,EDI                        ; 00443831
    JZ 0x0044345a                       ; 00443833
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00443839
    PUSH 0x3                            ; 0044383b
    PUSH ESI                            ; 0044383d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0044383e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443843
    JMP 0x0044345a                      ; 00443846
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0044384b
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443851
    PUSH EBX                            ; 00443857
    CALL dword ptr [EAX + 0x144]        ; 00443858
    ADD ESP,0x8                         ; 0044385e
    LEA EAX,[EBX + 0x158]               ; 00443861
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 00443867
    MOV dword ptr [EBP + 0x42],EAX      ; 0044386d
    TEST ESI,ESI                        ; 00443870
    JNZ 0x0044389f                      ; 00443872
        ;   XREF to: 0044389f (CONDITIONAL_JUMP)  ; LAB_0044389f
    PUSH dword ptr [EBP + 0x92]         ; 00443874
    PUSH EBX                            ; 0044387a
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0044387b
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00443880
    TEST EAX,EAX                        ; 00443883
    JNZ 0x0044345a                      ; 00443885
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 0044388b
    PUSH ESI                            ; 0044388d
    MOV ESI,dword ptr [EBP + 0x42]      ; 0044388e
    PUSH ESI                            ; 00443891
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443892
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443897
    JMP 0x0044345a                      ; 0044389a
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 0044389f
        ;   Label: LAB_0044389f
    FLD float ptr [0x005dd6ec]          ; 004438a4 | DAT_005dd6ec
    PUSH 0x3f000000                     ; 004438aa
    MOV EAX,[0x005dd6ec]                ; 004438af | DAT_005dd6ec
    XOR EDI,EDI                         ; 004438b4
    MOV dword ptr [EBP + 0xfffffea2],EDI ; 004438b6
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 004438bc
    LEA EAX,[EBP + 0xfffffea2]          ; 004438c2
    MOV dword ptr [EBP + 0xfffffea6],EDI ; 004438c8
    PUSH EAX                            ; 004438ce
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004438cf
    FADD double ptr [0x005b968d]        ; 004438d5 | DAT_005b968d
    PUSH EAX                            ; 004438db
    MOV EDX,dword ptr [EAX + 0x154]     ; 004438dc
    FSTP float ptr [EBP + 0x3a]         ; 004438e2
    CALL dword ptr [EDX + 0xc4]         ; 004438e5
    ADD ESP,0x4                         ; 004438eb
    PUSH EAX                            ; 004438ee
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 004438ef
    ADD EAX,0x20                        ; 004438f5
    PUSH EAX                            ; 004438f8
    PUSH EBX                            ; 004438f9
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 004438fa
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004438ff
    TEST EAX,EAX                        ; 00443902
    JL 0x00443a6e                       ; 00443904
        ;   XREF to: 00443a6e (CONDITIONAL_JUMP)  ; LAB_00443a6e
    LEA EDI,[EBP + 0xffffff26]          ; 0044390a
    LEA ECX,[EBX + 0x20]                ; 00443910
    LEA ESI,[EBP + 0xfffffef6]          ; 00443913
    MOV EDX,dword ptr [EBX + 0xcde4]    ; 00443919
    FLD float ptr [ECX]                 ; 0044391f
    FLD float ptr [ECX + 0x4]           ; 00443921
    FLD float ptr [ECX + 0x8]           ; 00443924
    FXCH ST2                            ; 00443927
    FSUB float ptr [EDX + 0x20]         ; 00443929
    FXCH                                ; 0044392c
    FSUB float ptr [EDX + 0x24]         ; 0044392e
    FXCH ST2                            ; 00443931
    FSUB float ptr [EDX + 0x28]         ; 00443933
    FXCH                                ; 00443936
    FSTP float ptr [EBP + 0xfffffef6]   ; 00443938
    FXCH                                ; 0044393e
    FSTP float ptr [EBP + 0xfffffefa]   ; 00443940
    FSTP float ptr [EBP + 0xfffffefe]   ; 00443946
    MOVSD ES:EDI,ESI                    ; 0044394c
    MOVSD ES:EDI,ESI                    ; 0044394d
    MOVSD ES:EDI,ESI                    ; 0044394e
    FLD float ptr [EBP + 0xffffff26]    ; 0044394f
    FMUL ST0                            ; 00443955
    FLD float ptr [EBP + 0xffffff2e]    ; 00443957
    FMUL ST0                            ; 0044395d
    FADDP                               ; 0044395f
    FSQRT                               ; 00443961
    ADD EDX,0x20                        ; 00443963
    FLD float ptr [EBX + 0xcde0]        ; 00443966
    XOR ESI,ESI                         ; 0044396c
    FLDZ                                ; 0044396e
    MOV dword ptr [EBP + 0xffffff2a],ESI ; 00443970
    FXCH ST2                            ; 00443976
    FSTP float ptr [EBP + 0x3e]         ; 00443978
    FXCH                                ; 0044397b
    FCOMPP                              ; 0044397d
    FNSTSW AX                           ; 0044397f
    SAHF                                ; 00443981
    JC 0x0044345a                       ; 00443982
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBP + 0x3e]          ; 00443988
    FCOMP float ptr [EBP + 0x3a]        ; 0044398b
    FNSTSW AX                           ; 0044398e
    SAHF                                ; 00443990
    JA 0x0044345a                       ; 00443991
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EDX]                 ; 00443997
    FLD float ptr [EDX + 0x4]           ; 00443999
    FLD float ptr [EDX + 0x8]           ; 0044399c
    LEA EDI,[EBP + 0xa]                 ; 0044399f
    LEA ESI,[EBP + -0x7a]               ; 004439a2
    LEA EAX,[EBP + 0xa]                 ; 004439a5
    FXCH ST2                            ; 004439a8
    FSUB float ptr [ECX]                ; 004439aa
    FXCH                                ; 004439ac
    FSUB float ptr [ECX + 0x4]          ; 004439ae
    FXCH ST2                            ; 004439b1
    FSUB float ptr [ECX + 0x8]          ; 004439b3
    FXCH                                ; 004439b6
    FSTP float ptr [EBP + -0x7a]        ; 004439b8
    FXCH                                ; 004439bb
    FSTP float ptr [EBP + -0x76]        ; 004439bd
    FSTP float ptr [EBP + -0x72]        ; 004439c0
    MOVSD ES:EDI,ESI                    ; 004439c3
    MOVSD ES:EDI,ESI                    ; 004439c4
    MOVSD ES:EDI,ESI                    ; 004439c5
    PUSH EAX                            ; 004439c6
    LEA ESI,[EBP + 0xffffff02]          ; 004439c7
    LEA EDI,[EBP + 0xffffff4a]          ; 004439cd
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 004439d3
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xffffff02]          ; 004439d8
    MOVSD ES:EDI,ESI                    ; 004439de
    MOVSD ES:EDI,ESI                    ; 004439df
    MOVSD ES:EDI,ESI                    ; 004439e0
    ADD ESP,0x4                         ; 004439e1
    FLD float ptr [EBP + 0xffffff4e]    ; 004439e4
    FSUB float ptr [EBX + 0x34]         ; 004439ea
    SUB ESP,0x4                         ; 004439ed
    FSTP float ptr [ESP]                ; 004439f0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 004439f3
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004439f8
    FLD float ptr [EBP + 0x76]          ; 004439fb
    FABS                                ; 004439fe
    ADD ESP,0x4                         ; 00443a00
    FCOMP double ptr [0x005b9695]       ; 00443a03 | DAT_005b9695
    FNSTSW AX                           ; 00443a09
    SAHF                                ; 00443a0b
    JNC 0x0044345a                      ; 00443a0c
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00443a12
    PUSH 0x1                            ; 00443a14
    PUSH 0x0                            ; 00443a16
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00443a18
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00443a1d
    ADD EAX,0x5                         ; 00443a20
    PUSH EAX                            ; 00443a23
    MOV EDI,dword ptr [EBP + 0x42]      ; 00443a24
    PUSH EDI                            ; 00443a27
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443a28
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443a2d
    MOV EAX,dword ptr [EBX + 0xd108]    ; 00443a30
    PUSH EAX                            ; 00443a36
    MOV dword ptr [EBX + 0xcde0],0x40200000 ; 00443a37
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443a41
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443a46
    TEST EAX,EAX                        ; 00443a49
    JNZ 0x0044345a                      ; 00443a4b
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5b962e                       ; 00443a51 | = "stick-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443a56
    PUSH EBX                            ; 00443a5c
    CALL dword ptr [EAX + 0x2c]         ; 00443a5d
    ADD ESP,0x8                         ; 00443a60
    MOV dword ptr [EBX + 0xd108],EAX    ; 00443a63
    JMP 0x0044345a                      ; 00443a69
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH EBX                            ; 00443a6e
        ;   Label: LAB_00443a6e
    PUSH 0x5b960d                       ; 00443a6f | = "%s gave up chase - I'm confused\n"
    MOV EDX,dword ptr [0x005f1690]      ; 00443a74 | g_CConsolePtr
    PUSH EDX                            ; 00443a7a | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441ff0 ; 00443a7b
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441ff0(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 00443a80
    PUSH 0x1                            ; 00443a83
    PUSH EDI                            ; 00443a85
    MOV ECX,dword ptr [EBP + 0x42]      ; 00443a86
    PUSH ECX                            ; 00443a89
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443a8a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443a8f
    JMP 0x0044345a                      ; 00443a92
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,[0x01d5ba14]                ; 00443a97 | DAT_01d5ba14
        ;   Label: caseD_c
    MOV EDX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 00443a9c
    LEA EAX,[EBX + 0x20]                ; 00443aa3
    LEA EDI,[EBP + -0x56]               ; 00443aa6
    LEA ESI,[EBP + 0xffffff7a]          ; 00443aa9
    FLD float ptr [EAX]                 ; 00443aaf
    FLD float ptr [EAX + 0x4]           ; 00443ab1
    FLD float ptr [EAX + 0x8]           ; 00443ab4
    FXCH ST2                            ; 00443ab7
    FSUB float ptr [EDX + 0x20]         ; 00443ab9
    FXCH                                ; 00443abc
    FSUB float ptr [EDX + 0x24]         ; 00443abe
    FXCH ST2                            ; 00443ac1
    FSUB float ptr [EDX + 0x28]         ; 00443ac3
    FXCH                                ; 00443ac6
    FSTP float ptr [EBP + 0xffffff7a]   ; 00443ac8
    FXCH                                ; 00443ace
    FSTP float ptr [EBP + 0xffffff7e]   ; 00443ad0
    FSTP float ptr [EBP + -0x7e]        ; 00443ad6
    MOVSD ES:EDI,ESI                    ; 00443ad9
    MOVSD ES:EDI,ESI                    ; 00443ada
    MOVSD ES:EDI,ESI                    ; 00443adb
    FLD float ptr [EBP + -0x52]         ; 00443adc
    FMUL ST0                            ; 00443adf
    FLD float ptr [EBP + -0x56]         ; 00443ae1
    FMUL ST0                            ; 00443ae4
    FADDP                               ; 00443ae6
    FLD float ptr [EBP + -0x4e]         ; 00443ae8
    FMUL ST0                            ; 00443aeb
    FADDP                               ; 00443aed
    FSQRT                               ; 00443aef
    FLD float ptr [EBX + 0xcddc]        ; 00443af1
    FMUL float ptr [0x005b9685]         ; 00443af7 | DAT_005b9685
    FXCH                                ; 00443afd
    FCOMPP                              ; 00443aff
    FNSTSW AX                           ; 00443b01
    SAHF                                ; 00443b03
    JNC 0x0044345a                      ; 00443b04
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00443b0a
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443b10
    PUSH EBX                            ; 00443b16
    CALL dword ptr [EAX + 0x144]        ; 00443b17
    MOV EDI,dword ptr [EBX + 0xcde4]    ; 00443b1d
    ADD ESP,0x8                         ; 00443b23
    TEST EDI,EDI                        ; 00443b26
    JZ 0x00443bba                       ; 00443b28
        ;   XREF to: 00443bba (CONDITIONAL_JUMP)  ; LAB_00443bba
    PUSH 0x1                            ; 00443b2e
        ;   Label: LAB_00443b2e
    PUSH 0xe                            ; 00443b30
    LEA EAX,[EBX + 0x158]               ; 00443b32
    PUSH EAX                            ; 00443b38
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443b39
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443b3e
    MOV EDX,dword ptr [EBX + 0xd104]    ; 00443b41
    PUSH EDX                            ; 00443b47
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443b48
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443b4d
    TEST EAX,EAX                        ; 00443b50
    JNZ 0x0044345a                      ; 00443b52
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    MOV ECX,dword ptr [EBX + 0xd108]    ; 00443b58
    PUSH ECX                            ; 00443b5e
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443b5f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443b64
    TEST EAX,EAX                        ; 00443b67
    JNZ 0x0044345a                      ; 00443b69
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    MOV ESI,dword ptr [EBX + 0xd100]    ; 00443b6f
    PUSH ESI                            ; 00443b75
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443b76
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443b7b
    TEST EAX,EAX                        ; 00443b7e
    JNZ 0x0044345a                      ; 00443b80
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    MOV EDI,dword ptr [EBX + 0xd100]    ; 00443b86
    PUSH EDI                            ; 00443b8c
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443b8d
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443b92
    TEST EAX,EAX                        ; 00443b95
    JNZ 0x0044345a                      ; 00443b97
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5b9640                       ; 00443b9d | = "stick-attack1.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443ba2
    PUSH EBX                            ; 00443ba8
    CALL dword ptr [EAX + 0x2c]         ; 00443ba9
    ADD ESP,0x8                         ; 00443bac
    MOV dword ptr [EBX + 0xd100],EAX    ; 00443baf
    JMP 0x0044345a                      ; 00443bb5
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBX + 0xd054]              ; 00443bba
        ;   Label: LAB_00443bba
    PUSH EAX                            ; 00443bc0
    MOV EAX,[0x005fba60]                ; 00443bc1 | DAT_005fba60
    PUSH EAX                            ; 00443bc6
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 00443bc7
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00443bcc
    TEST EAX,EAX                        ; 00443bcf
    JNZ 0x00443b2e                      ; 00443bd1
        ;   XREF to: 00443b2e (CONDITIONAL_JUMP)  ; LAB_00443b2e
    JMP 0x0044345a                      ; 00443bd7
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0x2504]        ; 00443bdc
        ;   Label: caseD_e
    FADD double ptr [0x005b967d]        ; 00443be2 | DAT_005b967d
    FLD float ptr [EBX + 0x24]          ; 00443be8
    FCOMPP                              ; 00443beb
    FNSTSW AX                           ; 00443bed
    SAHF                                ; 00443bef
    JNC 0x0044345a                      ; 00443bf0
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00443bf6
    PUSH 0xf                            ; 00443bf8
    PUSH EDI                            ; 00443bfa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00443bfb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00443c00
    JMP 0x0044345a                      ; 00443c03
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV ESI,dword ptr [EBX + 0xd10c]    ; 00443c08
        ;   Label: caseD_f
    PUSH ESI                            ; 00443c0e
    CALL sound_sndmain.cpp_FUN_00556700 ; 00443c0f
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00443c14
    TEST EAX,EAX                        ; 00443c17
    JNZ 0x00443c33                      ; 00443c19
        ;   XREF to: 00443c33 (CONDITIONAL_JUMP)  ; LAB_00443c33
    PUSH 0x5b9652                       ; 00443c1b | = "stick-leaps.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443c20
    PUSH EBX                            ; 00443c26
    CALL dword ptr [EAX + 0x2c]         ; 00443c27
    ADD ESP,0x8                         ; 00443c2a
    MOV dword ptr [EBX + 0xd10c],EAX    ; 00443c2d
    PUSH dword ptr [EBP + 0x92]         ; 00443c33
        ;   Label: LAB_00443c33
    MOV EAX,dword ptr [EBX + 0x154]     ; 00443c39
    PUSH EBX                            ; 00443c3f
    CALL dword ptr [EAX + 0x144]        ; 00443c40
    ADD ESP,0x8                         ; 00443c46
    JMP 0x0044345a                      ; 00443c49
        ;   XREF to: 0044345a (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV ECX,dword ptr [EBP + 0x52]      ; 00443c4e
        ;   Label: LAB_00443c4e
    CMP ECX,0xf                         ; 00443c51
    JA 0x0044345a                       ; 00443c54
        ;   XREF to: 0044345a (CONDITIONAL_JUMP)  ; caseD_d
    MOV EAX,ECX                         ; 00443c5a
    JMP dword ptr [EAX*0x4 + 0x4429d4]  ; 00443c5c | caseD_2 | caseD_4 | caseD_6
        ;   Label: switchD
    CMP ECX,0x4                         ; 00443c63
        ;   Label: LAB_00443c63
    JZ 0x004435ca                       ; 00443c66
        ;   XREF to: 004435ca (CONDITIONAL_JUMP)  ; LAB_004435ca
    MOV EDI,dword ptr [EBX + 0xd0f0]    ; 00443c6c
        ;   Label: LAB_00443c6c
    PUSH EDI                            ; 00443c72
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00443c73
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 00443c78
    LEA ESP,[EBP + 0x7a]                ; 00443c7b
    POP EBP                             ; 00443c7e
    POP EDI                             ; 00443c7f
    POP ESI                             ; 00443c80
    POP EBX                             ; 00443c81
    RET                                 ; 00443c82

