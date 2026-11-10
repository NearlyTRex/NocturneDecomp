; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_conveyor_cpp_CConstruct_process_FUN_00436e80(CConstruct *this_ptr,float delta_time)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_00436e38 = 00437753
;   TerminatedCString s_ConstructKilled_005cdd60
;   TerminatedCString s_s_confused_while_walking_005cdd70
;   TerminatedCString s_s_gave_up_chase_I_m_conf_005cdd9a
;   TerminatedCString s_batman_attack_wav_005cddbb
;   TerminatedCString s_batman_alert_wav_005cddce
;   TerminatedCString s_boneGuy_walkloop_wav_005cdddf
;   undefined4 DAT_005cddfb
;   undefined4 DAT_005cde03
;   undefined4 DAT_005cde0b
;   undefined4 DAT_005cde13
;   undefined4 DAT_005cde1b
;   undefined4 DAT_005f469c
;   undefined4 DAT_005f46a8
;   CConsole* g_CConsolePtr = 007c158c
;   ... and 9 more
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_0042b2a0
;   ... and 27 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00436e80
        ;   Label: core_conveyor.cpp_CConstruct_process_FUN_00436e80
    PUSH ESI                            ; 00436e81
    PUSH EDI                            ; 00436e82
    PUSH EBP                            ; 00436e83
    MOV EBP,ESP                         ; 00436e84
    SUB ESP,0x204                       ; 00436e86
    SUB EBP,0x7a                        ; 00436e8c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 00436e8f
    LEA EAX,[EBX + 0x10ba8]             ; 00436e95
    PUSH EAX                            ; 00436e9b
    MOV EDX,dword ptr [0x006141f0]      ; 00436e9c | DAT_006141f0
    PUSH EDX                            ; 00436ea2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00436ea3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00436ea8
    TEST EAX,EAX                        ; 00436eab
    JZ 0x00436ef3                       ; 00436ead
        ;   XREF to: 00436ef3 (CONDITIONAL_JUMP)  ; LAB_00436ef3
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00436eaf
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00436eb9
    MOV ECX,dword ptr [EBX + 0x112d8]   ; 00436ec3
    MOV dword ptr [EBX + 0x112dc],0x0   ; 00436ec9
    TEST ECX,ECX                        ; 00436ed3
    JNZ 0x00436ee0                      ; 00436ed5
        ;   XREF to: 00436ee0 (CONDITIONAL_JUMP)  ; LAB_00436ee0
    PUSH EBX                            ; 00436ed7
    CALL core_construc.cpp_FUN_00438060 ; 00436ed8
        ;   XREF to: 00438060 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_00438060()
    ADD ESP,0x4                         ; 00436edd
    PUSH 0x0                            ; 00436ee0
        ;   Label: LAB_00436ee0
    PUSH 0xb                            ; 00436ee2
    LEA EAX,[EBX + 0x2b4]               ; 00436ee4
    PUSH EAX                            ; 00436eea
    CALL core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980 ; 00436eeb
        ;   XREF to: 00503980 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotion_FUN_00503980(CMotionController * this_ptr, int target_motion_index, float target_frame_number)
    ADD ESP,0xc                         ; 00436ef0
    PUSH dword ptr [EBP + 0x92]         ; 00436ef3
        ;   Label: LAB_00436ef3
    PUSH EBX                            ; 00436ef9
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 00436efa
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00436eff
    TEST EAX,EAX                        ; 00436f02
    JZ 0x00437161                       ; 00436f04
        ;   XREF to: 00437161 (CONDITIONAL_JUMP)  ; LAB_00437161
    CMP dword ptr [EBX + 0x112d8],0x1   ; 00436f0a
    JNZ 0x00436f4c                      ; 00436f11
        ;   XREF to: 00436f4c (CONDITIONAL_JUMP)  ; LAB_00436f4c
    FLD float ptr [EBX + 0x25a8]        ; 00436f13
    FLDZ                                ; 00436f19
    FCOMPP                              ; 00436f1b
    FNSTSW AX                           ; 00436f1d
    SAHF                                ; 00436f1f
    JNC 0x00436f4c                      ; 00436f20
        ;   XREF to: 00436f4c (CONDITIONAL_JUMP)  ; LAB_00436f4c
    FLD float ptr [EBX + 0x112dc]       ; 00436f22
    FADD float ptr [EBP + 0x92]         ; 00436f28
    FST float ptr [EBX + 0x112dc]       ; 00436f2e
    FCOMP float ptr [EBX + 0x10c0c]     ; 00436f34
    FNSTSW AX                           ; 00436f3a
    SAHF                                ; 00436f3c
    JBE 0x00437178                      ; 00436f3d
        ;   XREF to: 00437178 (CONDITIONAL_JUMP)  ; LAB_00437178
    PUSH EBX                            ; 00436f43
    CALL core_construc.cpp_FUN_004382a0 ; 00436f44
        ;   XREF to: 004382a0 (UNCONDITIONAL_CALL)  ; undefined core_construc.cpp_FUN_004382a0()
    ADD ESP,0x4                         ; 00436f49
    CMP dword ptr [EBX + 0x112d8],0x2   ; 00436f4c
        ;   Label: LAB_00436f4c
    JNZ 0x004372e6                      ; 00436f53
        ;   XREF to: 004372e6 (CONDITIONAL_JUMP)  ; LAB_004372e6
    FLD float ptr [EBP + 0x92]          ; 00436f59
    FDIV float ptr [0x005f46a8]         ; 00436f5f | DAT_005f46a8
    FADD float ptr [EBX + 0x112dc]      ; 00436f65
    FST float ptr [EBX + 0x112dc]       ; 00436f6b
    FLD1                                ; 00436f71
    FCOMPP                              ; 00436f73
    FNSTSW AX                           ; 00436f75
    SAHF                                ; 00436f77
    JBE 0x00437283                      ; 00436f78
        ;   XREF to: 00437283 (CONDITIONAL_JUMP)  ; LAB_00437283
    XOR ESI,ESI                         ; 00436f7e
    MOV EDI,dword ptr [EBX + 0x10c14]   ; 00436f80
    MOV dword ptr [EBP + 0x66],ESI      ; 00436f86
    TEST EDI,EDI                        ; 00436f89
    JLE 0x00437159                      ; 00436f8b
        ;   XREF to: 00437159 (CONDITIONAL_JUMP)  ; LAB_00437159
    LEA EAX,[EBX + 0x10c18]             ; 00436f91
    MOV dword ptr [EBP + 0x56],EAX      ; 00436f97
    LEA EAX,[EBX + 0x112dc]             ; 00436f9a
    MOV dword ptr [EBP + 0x62],EAX      ; 00436fa0
    LEA EAX,[EBX + 0x10c30]             ; 00436fa3
    MOV dword ptr [EBP + 0x5e],EAX      ; 00436fa9
    LEA EAX,[EBX + 0x10c40]             ; 00436fac
    MOV dword ptr [EBP + 0x5a],EAX      ; 00436fb2
    LEA EAX,[EBX + 0x10c50]             ; 00436fb5
    MOV dword ptr [EBP + 0x6a],EAX      ; 00436fbb
    IMUL EAX,dword ptr [EBP + 0x66],0x48 ; 00436fbe
        ;   Label: LAB_00436fbe
    ADD EAX,dword ptr [EBP + 0x56]      ; 00436fc2
    LEA EDI,[EBP + -0x62]               ; 00436fc5
    FLD float ptr [EAX]                 ; 00436fc8
    MOV EDX,dword ptr [EAX + 0x44]      ; 00436fca
    FLD float ptr [EAX + 0x4]           ; 00436fcd
    MOV dword ptr [EBP + 0x4e],EDX      ; 00436fd0
    MOV EDX,dword ptr [EBP + 0x6a]      ; 00436fd3
    FLD float ptr [EAX + 0x8]           ; 00436fd6
    LEA ESI,[EBP + 0x2e]                ; 00436fd9
    FXCH ST2                            ; 00436fdc
    FSUB float ptr [EDX]                ; 00436fde
    FXCH                                ; 00436fe0
    FSUB float ptr [EDX + 0x4]          ; 00436fe2
    FXCH ST2                            ; 00436fe5
    FSUB float ptr [EDX + 0x8]          ; 00436fe7
    FXCH                                ; 00436fea
    FSTP float ptr [EBP + 0x2e]         ; 00436fec
    FXCH                                ; 00436fef
    FSTP float ptr [EBP + 0x32]         ; 00436ff1
    FSTP float ptr [EBP + 0x36]         ; 00436ff4
    MOVSD ES:EDI,ESI                    ; 00436ff7
    MOVSD ES:EDI,ESI                    ; 00436ff8
    MOVSD ES:EDI,ESI                    ; 00436ff9
    MOV EAX,dword ptr [EBP + 0x62]      ; 00436ffa
    FLD float ptr [EBP + -0x62]         ; 00436ffd
    FMUL float ptr [EAX]                ; 00437000
    FLD float ptr [EBP + -0x5e]         ; 00437002
    FMUL float ptr [EAX]                ; 00437005
    FLD float ptr [EBP + -0x5a]         ; 00437007
    FMUL float ptr [EAX]                ; 0043700a
    LEA EDI,[EBP + 0x16]                ; 0043700c
    LEA ESI,[EBP + 0x22]                ; 0043700f
    FXCH ST2                            ; 00437012
    FSTP float ptr [EBP + 0x22]         ; 00437014
    FSTP float ptr [EBP + 0x26]         ; 00437017
    FSTP float ptr [EBP + 0x2a]         ; 0043701a
    MOVSD ES:EDI,ESI                    ; 0043701d
    MOVSD ES:EDI,ESI                    ; 0043701e
    MOVSD ES:EDI,ESI                    ; 0043701f
    FLD float ptr [EDX]                 ; 00437020
    FLD float ptr [EDX + 0x4]           ; 00437022
    FLD float ptr [EDX + 0x8]           ; 00437025
    LEA EDI,[EBP + -0x6e]               ; 00437028
    LEA ESI,[EBP + -0x3e]               ; 0043702b
    FXCH ST2                            ; 0043702e
    FADD float ptr [EBP + 0x16]         ; 00437030
    FXCH                                ; 00437033
    FADD float ptr [EBP + 0x1a]         ; 00437035
    FXCH ST2                            ; 00437038
    FADD float ptr [EBP + 0x1e]         ; 0043703a
    FXCH                                ; 0043703d
    FSTP float ptr [EBP + -0x3e]        ; 0043703f
    FXCH                                ; 00437042
    FSTP float ptr [EBP + -0x3a]        ; 00437044
    FSTP float ptr [EBP + -0x36]        ; 00437047
    MOVSD ES:EDI,ESI                    ; 0043704a
    MOVSD ES:EDI,ESI                    ; 0043704b
    MOVSD ES:EDI,ESI                    ; 0043704c
    MOV EDI,dword ptr [EBP + 0x5a]      ; 0043704d
    PUSH dword ptr [EBX + 0x112dc]      ; 00437050
    PUSH EDI                            ; 00437056
    MOV EAX,dword ptr [EBP + 0x5e]      ; 00437057
    PUSH EAX                            ; 0043705a
    LEA ESI,[EBP + 0xfffffec2]          ; 0043705b
    LEA EDI,[EBP + 0xfffffeb2]          ; 00437061
    CALL core_xform.cpp_slerpQuaternion_FUN_00593df0 ; 00437067
        ;   XREF to: 00593df0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_slerpQuaternion_FUN_00593df0()
    LEA ESI,[EBP + 0xfffffec2]          ; 0043706c
    LEA EAX,[EBP + 0xfffffeb2]          ; 00437072
    ADD ESP,0xc                         ; 00437078
    MOVSD ES:EDI,ESI                    ; 0043707b
    MOVSD ES:EDI,ESI                    ; 0043707c
    MOVSD ES:EDI,ESI                    ; 0043707d
    MOVSD ES:EDI,ESI                    ; 0043707e
    PUSH EAX                            ; 0043707f
    LEA ESI,[EBP + 0xffffff0e]          ; 00437080
    LEA EDI,[EBP + 0xfffffeea]          ; 00437086
    CALL core_xform.cpp_FUN_005940b0    ; 0043708c
        ;   XREF to: 005940b0 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005940b0()
    LEA ESI,[EBP + 0xffffff0e]          ; 00437091
    MOVSD ES:EDI,ESI                    ; 00437097
    MOVSD ES:EDI,ESI                    ; 00437098
    MOVSD ES:EDI,ESI                    ; 00437099
    FLD float ptr [EBX + 0x112dc]       ; 0043709a
    FMUL double ptr [0x005cde1b]        ; 004370a0 | DAT_005cde1b
    MOV EAX,dword ptr [EBP + -0x6e]     ; 004370a6
    FLD float ptr [EBP + 0xfffffeea]    ; 004370a9
    FXCH                                ; 004370af
    FADD ST0,ST1                        ; 004370b1
    MOV ESI,dword ptr [EBP + 0x4e]      ; 004370b3
    FSTP ST1                            ; 004370b6
    FSTP float ptr [EBP + 0xfffffeea]   ; 004370b8
    MOV dword ptr [ESI + 0x20],EAX      ; 004370be
    MOV EAX,dword ptr [EBP + -0x6a]     ; 004370c1
    MOV dword ptr [ESI + 0x24],EAX      ; 004370c4
    MOV EAX,dword ptr [EBP + -0x66]     ; 004370c7
    LEA EDX,[ESI + 0x30]                ; 004370ca
    MOV dword ptr [ESI + 0x28],EAX      ; 004370cd
    LEA EAX,[EBP + 0xfffffeea]          ; 004370d0
    ADD ESP,0x4                         ; 004370d6
    CMP EDX,EAX                         ; 004370d9
    JNZ 0x00437264                      ; 004370db
        ;   XREF to: 00437264 (CONDITIONAL_JUMP)  ; LAB_00437264
    LEA EAX,[EBP + -0x6e]               ; 004370e1
        ;   Label: LAB_004370e1
    LEA EDX,[ESI + 0x10e0]              ; 004370e4
    CMP EDX,EAX                         ; 004370ea
    JZ 0x004370ff                       ; 004370ec
        ;   XREF to: 004370ff (CONDITIONAL_JUMP)  ; LAB_004370ff
    MOV EAX,dword ptr [EBP + -0x6e]     ; 004370ee
    MOV dword ptr [EDX],EAX             ; 004370f1
    MOV EAX,dword ptr [EBP + -0x6a]     ; 004370f3
    MOV dword ptr [EDX + 0x4],EAX       ; 004370f6
    MOV EAX,dword ptr [EBP + -0x66]     ; 004370f9
    MOV dword ptr [EDX + 0x8],EAX       ; 004370fc
    LEA EAX,[EBP + 0xfffffeea]          ; 004370ff
        ;   Label: LAB_004370ff
    LEA EDX,[ESI + 0x10ec]              ; 00437105
    CMP EDX,EAX                         ; 0043710b
    JZ 0x00437129                       ; 0043710d
        ;   XREF to: 00437129 (CONDITIONAL_JUMP)  ; LAB_00437129
    MOV EAX,dword ptr [EBP + 0xfffffeea] ; 0043710f
    MOV dword ptr [EDX],EAX             ; 00437115
    MOV EAX,dword ptr [EBP + 0xfffffeee] ; 00437117
    MOV dword ptr [EDX + 0x4],EAX       ; 0043711d
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 00437120
    MOV dword ptr [EDX + 0x8],EAX       ; 00437126
    MOV ECX,dword ptr [EBP + 0x5e]      ; 00437129
        ;   Label: LAB_00437129
    MOV ESI,dword ptr [EBP + 0x5a]      ; 0043712c
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0043712f
    MOV EAX,dword ptr [EBP + 0x66]      ; 00437132
    MOV EDX,dword ptr [EBX + 0x10c14]   ; 00437135
    ADD ECX,0x48                        ; 0043713b
    ADD ESI,0x48                        ; 0043713e
    ADD EDI,0x48                        ; 00437141
    INC EAX                             ; 00437144
    MOV dword ptr [EBP + 0x5e],ECX      ; 00437145
    MOV dword ptr [EBP + 0x5a],ESI      ; 00437148
    MOV dword ptr [EBP + 0x6a],EDI      ; 0043714b
    MOV dword ptr [EBP + 0x66],EAX      ; 0043714e
    CMP EAX,EDX                         ; 00437151
    JL 0x00436fbe                       ; 00437153
        ;   XREF to: 00436fbe (CONDITIONAL_JUMP)  ; LAB_00436fbe
    LEA ESP,[EBP + 0x7a]                ; 00437159
        ;   Label: LAB_00437159
    POP EBP                             ; 0043715c
    POP EDI                             ; 0043715d
    POP ESI                             ; 0043715e
    POP EBX                             ; 0043715f
    RET                                 ; 00437160
    MOV EAX,dword ptr [EBX + 0x10b5c]   ; 00437161
        ;   Label: LAB_00437161
    PUSH EAX                            ; 00437167
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00437168
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0043716d
    LEA ESP,[EBP + 0x7a]                ; 00437170
    POP EBP                             ; 00437173
    POP EDI                             ; 00437174
    POP ESI                             ; 00437175
    POP EBX                             ; 00437176
    RET                                 ; 00437177
    MOV EDX,dword ptr [EBX + 0x112e0]   ; 00437178
        ;   Label: LAB_00437178
    LEA EAX,[EDX*0x8 + 0x0]             ; 0043717e
    ADD EDX,EAX                         ; 00437185
    SHL EDX,0x3                         ; 00437187
    LEA EAX,[EBX + 0x10c18]             ; 0043718a
    MOV ESI,dword ptr [EDX + EAX*0x1 + 0x44] ; 00437190
    TEST ESI,ESI                        ; 00437194
    JZ 0x00437159                       ; 00437196
        ;   XREF to: 00437159 (CONDITIONAL_JUMP)  ; LAB_00437159
    PUSH ESI                            ; 00437198
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 00437199
    CALL dword ptr [EAX + 0x9c]         ; 0043719f
    MOV EDX,dword ptr [0x01cedef4]      ; 004371a5 | DAT_01cedef4
    MOV EDI,dword ptr [EDX*0x4 + 0x1cedee4] ; 004371ab
    ADD ESP,0x4                         ; 004371b2
    CMP EAX,EDI                         ; 004371b5
    JNZ 0x00437159                      ; 004371b7
        ;   XREF to: 00437159 (CONDITIONAL_JUMP)  ; LAB_00437159
    ADD EBX,0x10ba8                     ; 004371b9
    PUSH EBX                            ; 004371bf
    MOV EAX,[0x006141f0]                ; 004371c0 | DAT_006141f0
    PUSH EAX                            ; 004371c5
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004371c6
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004371cb
    PUSH 0x5cdd60                       ; 004371ce | = "ConstructKilled"
    MOV EDX,dword ptr [0x006141f0]      ; 004371d3 | DAT_006141f0
    PUSH EDX                            ; 004371d9
    CALL core_event.cpp_CEventList_executeCommands_FUN_004894f0 ; 004371da
        ;   XREF to: 004894f0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004894f0(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 004371df
    PUSH 0xffff                         ; 004371e2
    LEA EAX,[EBP + -0x56]               ; 004371e7
    MOV EBX,0x40400000                  ; 004371ea
    PUSH EAX                            ; 004371ef
    LEA EDI,[ESI + 0x20]                ; 004371f0
    MOV dword ptr [EBP + -0x52],EBX     ; 004371f3
    PUSH 0x3f000000                     ; 004371f6
    XOR ECX,ECX                         ; 004371fb
    PUSH EDI                            ; 004371fd
    MOV EAX,[0x00614d30]                ; 004371fe | DAT_00614d30
    MOV dword ptr [EBP + -0x56],ECX     ; 00437203
    PUSH EAX                            ; 00437206
    MOV dword ptr [EBP + -0x4e],ECX     ; 00437207
    XOR EBX,EBX                         ; 0043720a
    CALL core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230 ; 0043720c
        ;   XREF to: 0049d230 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSmokeParticle_FUN_0049d230(CFireEffect * this_ptr, CVector3f * position, float drag_factor, CVector3f * wind_influence, ...)
    ADD ESP,0x14                        ; 00437211
    XOR ESI,ESI                         ; 00437214
    PUSH 0x3ecccccd                     ; 00437216
        ;   Label: LAB_00437216
    PUSH 0x3f800000                     ; 0043721b
    PUSH 0xffff                         ; 00437220
    PUSH ESI                            ; 00437225
    PUSH 0x10000                        ; 00437226
    PUSH 0x4000                         ; 0043722b
    PUSH ESI                            ; 00437230
    PUSH EDI                            ; 00437231
    MOV EDX,dword ptr [0x00614d30]      ; 00437232 | DAT_00614d30
    PUSH EDX                            ; 00437238
    INC EBX                             ; 00437239
    CALL core_fire.cpp_FUN_0049d6a0     ; 0043723a
        ;   XREF to: 0049d6a0 (UNCONDITIONAL_CALL)  ; undefined core_fire.cpp_FUN_0049d6a0()
    ADD ESP,0x24                        ; 0043723f
    CMP EBX,0xa                         ; 00437242
    JL 0x00437216                       ; 00437245
        ;   XREF to: 00437216 (CONDITIONAL_JUMP)  ; LAB_00437216
    MOV EAX,[0x01cedef4]                ; 00437247 | DAT_01cedef4
    MOV ECX,dword ptr [EAX*0x4 + 0x1cedee4] ; 0043724c
    PUSH ECX                            ; 00437253
    CALL core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00 ; 00437254
        ;   XREF to: 00428e00 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dropAllCarriedObjects_FUN_00428e00(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00437259
    LEA ESP,[EBP + 0x7a]                ; 0043725c
    POP EBP                             ; 0043725f
    POP EDI                             ; 00437260
    POP ESI                             ; 00437261
    POP EBX                             ; 00437262
    RET                                 ; 00437263
    MOV EAX,dword ptr [EBP + 0xfffffeea] ; 00437264
        ;   Label: LAB_00437264
    MOV dword ptr [EDX],EAX             ; 0043726a
    MOV EAX,dword ptr [EBP + 0xfffffeee] ; 0043726c
    MOV dword ptr [EDX + 0x4],EAX       ; 00437272
    MOV EAX,dword ptr [EBP + 0xfffffef2] ; 00437275
    MOV dword ptr [EDX + 0x8],EAX       ; 0043727b
    JMP 0x004370e1                      ; 0043727e
        ;   XREF to: 004370e1 (UNCONDITIONAL_JUMP)  ; LAB_004370e1
    LEA EAX,[EBX + 0x2b4]               ; 00437283
        ;   Label: LAB_00437283
    PUSH EAX                            ; 00437289
    XOR EDI,EDI                         ; 0043728a
    CALL core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440 ; 0043728c
        ;   XREF to: 00547440 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_showAllParts_FUN_00547440(CDeformableModelInstance * this_ptr)
    MOV ECX,dword ptr [EBX + 0x10c14]   ; 00437291
    ADD ESP,0x4                         ; 00437297
    TEST ECX,ECX                        ; 0043729a
    JLE 0x004372d0                      ; 0043729c
        ;   XREF to: 004372d0 (CONDITIONAL_JUMP)  ; LAB_004372d0
    MOV ESI,EBX                         ; 0043729e
    PUSH 0x1                            ; 004372a0
        ;   Label: LAB_004372a0
    MOV EAX,dword ptr [ESI + 0x10c5c]   ; 004372a2
    PUSH EAX                            ; 004372a8
    MOV EDX,dword ptr [0x00618170]      ; 004372a9 | DAT_00618170
    PUSH EDX                            ; 004372af | DAT_01d182f0
    ADD ESI,0x48                        ; 004372b0
    CALL core_mission.cpp_FUN_004fc7b0  ; 004372b3
        ;   XREF to: 004fc7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004fc7b0()
    MOV dword ptr [ESI + 0x10c14],0x0   ; 004372b8
    INC EDI                             ; 004372c2
    MOV ECX,dword ptr [EBX + 0x10c14]   ; 004372c3
    ADD ESP,0xc                         ; 004372c9
    CMP EDI,ECX                         ; 004372cc
    JL 0x004372a0                       ; 004372ce
        ;   XREF to: 004372a0 (CONDITIONAL_JUMP)  ; LAB_004372a0
    MOV dword ptr [EBX + 0x112d8],0x0   ; 004372d0
        ;   Label: LAB_004372d0
    FILD dword ptr [EBX + 0x10c10]      ; 004372da
    FSTP float ptr [EBX + 0x25a8]       ; 004372e0
    LEA EAX,[EBX + 0x2508]              ; 004372e6
        ;   Label: LAB_004372e6
    MOV dword ptr [EAX + 0x8],0x0       ; 004372ec
    FLD float ptr [EBP + 0x92]          ; 004372f3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004372f9
    MOV dword ptr [EAX + 0x4],EDX       ; 004372fc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004372ff
    MOV dword ptr [EAX],EDX             ; 00437302
    FMUL float ptr [EBX + 0x10a60]      ; 00437304
    LEA ESI,[EBX + 0x2b4]               ; 0043730a
    FSTP float ptr [EBP + 0x42]         ; 00437310
    FLD float ptr [EBP + 0x42]          ; 00437313
        ;   Label: LAB_00437313
    FLDZ                                ; 00437316
    FCOMPP                              ; 00437318
    FNSTSW AX                           ; 0043731a
    SAHF                                ; 0043731c
    JNC 0x00437338                      ; 0043731d
        ;   XREF to: 00437338 (CONDITIONAL_JUMP)  ; LAB_00437338
    LEA EAX,[EBP + 0x42]                ; 0043731f
    PUSH EAX                            ; 00437322
    PUSH ESI                            ; 00437323
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 00437324
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 00437329
    PUSH EAX                            ; 0043732c
    PUSH EBX                            ; 0043732d
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0043732e
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 00437333
    JMP 0x00437313                      ; 00437336
        ;   XREF to: 00437313 (UNCONDITIONAL_JUMP)  ; LAB_00437313
    FLD float ptr [EBP + 0x92]          ; 00437338
        ;   Label: LAB_00437338
    FMUL float ptr [EBX + 0x10a60]      ; 0043733e
    SUB ESP,0x4                         ; 00437344
    MOV EAX,dword ptr [EBX + 0x2510]    ; 00437347
    MOV dword ptr [EBX + 0x2594],EAX    ; 0043734d
    FSTP float ptr [ESP]                ; 00437353
    PUSH EBX                            ; 00437356
    CALL core_charactr.cpp_FUN_0042b2a0 ; 00437357
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0043735c
    PUSH ESI                            ; 0043735f
    CALL core_motion.cpp_FUN_005035c0   ; 00437360
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 00437365
    PUSH dword ptr [EBP + 0x92]         ; 00437368
    MOV EDI,dword ptr [EAX + 0x24]      ; 0043736e
    PUSH EBX                            ; 00437371
    MOV dword ptr [EBP + 0x72],EDI      ; 00437372
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 00437375
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043737a
    TEST EAX,EAX                        ; 0043737d
    JZ 0x00437b3f                       ; 0043737f
        ;   XREF to: 00437b3f (CONDITIONAL_JUMP)  ; LAB_00437b3f
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 00437385
    CMP EAX,0x2                         ; 0043738b
    JNC 0x004375e9                      ; 0043738e
        ;   XREF to: 004375e9 (CONDITIONAL_JUMP)  ; LAB_004375e9
    CMP EAX,0x1                         ; 00437394
    JNZ 0x004375f4                      ; 00437397
        ;   XREF to: 004375f4 (CONDITIONAL_JUMP)  ; LAB_004375f4
    PUSH 0x1                            ; 0043739d
        ;   Label: LAB_0043739d
    PUSH 0x3                            ; 0043739f
    LEA EAX,[EBX + 0x2b4]               ; 004373a1
        ;   Label: LAB_004373a1
    PUSH EAX                            ; 004373a7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004373a8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004373ad
        ;   Label: LAB_004373ad
    LEA EAX,[EBX + 0x2508]              ; 004373b0
    MOV dword ptr [EAX + 0x8],0x0       ; 004373b6
    MOV EDX,dword ptr [EAX + 0x8]       ; 004373bd
    MOV dword ptr [EAX + 0x4],EDX       ; 004373c0
    MOV EDX,dword ptr [EAX + 0x4]       ; 004373c3
    MOV dword ptr [EAX],EDX             ; 004373c6
    FLD float ptr [EBX + 0x10a74]       ; 004373c8
        ;   Label: caseD_7
    FLDZ                                ; 004373ce
    FCOMPP                              ; 004373d0
    FNSTSW AX                           ; 004373d2
    SAHF                                ; 004373d4
    JNC 0x004373e9                      ; 004373d5
        ;   XREF to: 004373e9 (CONDITIONAL_JUMP)  ; LAB_004373e9
    FLD float ptr [EBX + 0x10a74]       ; 004373d7
    FSUB float ptr [EBP + 0x92]         ; 004373dd
    FSTP float ptr [EBX + 0x10a74]      ; 004373e3
    PUSH EBX                            ; 004373e9
        ;   Label: LAB_004373e9
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 004373ea
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004373ef
    TEST EAX,EAX                        ; 004373f2
    JZ 0x004374fc                       ; 004373f4
        ;   XREF to: 004374fc (CONDITIONAL_JUMP)  ; LAB_004374fc
    CMP dword ptr [EBP + 0x72],0xc      ; 004373fa
    JZ 0x004374fc                       ; 004373fe
        ;   XREF to: 004374fc (CONDITIONAL_JUMP)  ; LAB_004374fc
    PUSH dword ptr [EBP + 0x92]         ; 00437404
    PUSH EBX                            ; 0043740a
    CALL core_charactr.cpp_FUN_00423a10 ; 0043740b
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA ECX,[EBX + 0x2588]              ; 00437410
    FLD float ptr [ECX]                 ; 00437416
    FMUL float ptr [EBP + 0x92]         ; 00437418
    FLD float ptr [ECX + 0x4]           ; 0043741e
    FMUL float ptr [EBP + 0x92]         ; 00437421
    FLD float ptr [ECX + 0x8]           ; 00437427
    FMUL float ptr [EBP + 0x92]         ; 0043742a
    LEA EDI,[EBP + 0xffffff56]          ; 00437430
    LEA ESI,[EBP + 0xffffff6e]          ; 00437436
    FXCH ST2                            ; 0043743c
    FSTP float ptr [EBP + 0xffffff6e]   ; 0043743e
    FSTP float ptr [EBP + 0xffffff72]   ; 00437444
    FSTP float ptr [EBP + 0xffffff76]   ; 0043744a
    MOVSD ES:EDI,ESI                    ; 00437450
    MOVSD ES:EDI,ESI                    ; 00437451
    MOVSD ES:EDI,ESI                    ; 00437452
    LEA EDX,[EBX + 0x257c]              ; 00437453
    FLD float ptr [EBP + 0xffffff56]    ; 00437459
    FLD float ptr [EBP + 0xffffff5a]    ; 0043745f
    FLD float ptr [EBP + 0xffffff5e]    ; 00437465
    LEA EDI,[EBP + -0x7a]               ; 0043746b
    LEA ESI,[EBP + -0x26]               ; 0043746e
    FXCH ST2                            ; 00437471
    FADD float ptr [EDX]                ; 00437473
    FXCH                                ; 00437475
    FADD float ptr [EDX + 0x4]          ; 00437477
    FXCH ST2                            ; 0043747a
    FADD float ptr [EDX + 0x8]          ; 0043747c
    FXCH                                ; 0043747f
    FSTP float ptr [EBP + -0x26]        ; 00437481
    FXCH                                ; 00437484
    FSTP float ptr [EBP + -0x22]        ; 00437486
    FSTP float ptr [EBP + -0x1e]        ; 00437489
    MOVSD ES:EDI,ESI                    ; 0043748c
    MOVSD ES:EDI,ESI                    ; 0043748d
    MOVSD ES:EDI,ESI                    ; 0043748e
    LEA EAX,[EBX + 0x2508]              ; 0043748f
    FLD float ptr [EBP + -0x7a]         ; 00437495
    FLD float ptr [EBP + -0x76]         ; 00437498
    FLD float ptr [EBP + -0x72]         ; 0043749b
    LEA EDI,[EBP + 0xffffff1a]          ; 0043749e
    LEA ESI,[EBP + -0x2]                ; 004374a4
    FXCH ST2                            ; 004374a7
    FADD float ptr [EAX]                ; 004374a9
    FXCH                                ; 004374ab
    FADD float ptr [EAX + 0x4]          ; 004374ad
    FXCH ST2                            ; 004374b0
    FADD float ptr [EAX + 0x8]          ; 004374b2
    FXCH                                ; 004374b5
    FSTP float ptr [EBP + -0x2]         ; 004374b7
    FXCH                                ; 004374ba
    FSTP float ptr [EBP + 0x2]          ; 004374bc
    FSTP float ptr [EBP + 0x6]          ; 004374bf
    MOVSD ES:EDI,ESI                    ; 004374c2
    MOVSD ES:EDI,ESI                    ; 004374c3
    MOVSD ES:EDI,ESI                    ; 004374c4
    MOV dword ptr [EDX + 0x8],0x0       ; 004374c5
    MOV ECX,dword ptr [EDX + 0x8]       ; 004374cc
    MOV dword ptr [EDX + 0x4],ECX       ; 004374cf
    MOV ECX,dword ptr [EDX + 0x4]       ; 004374d2
    MOV dword ptr [EDX],ECX             ; 004374d5
    MOV dword ptr [EAX + 0x8],0x0       ; 004374d7
    ADD ESP,0x8                         ; 004374de
    MOV EDX,dword ptr [EAX + 0x8]       ; 004374e1
    MOV dword ptr [EAX + 0x4],EDX       ; 004374e4
    MOV EDX,dword ptr [EAX + 0x4]       ; 004374e7
    MOV dword ptr [EAX],EDX             ; 004374ea
    LEA EAX,[EBP + 0xffffff1a]          ; 004374ec
    PUSH EAX                            ; 004374f2
    PUSH EBX                            ; 004374f3
    CALL core_charactr.cpp_FUN_00423a60 ; 004374f4
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004374f9
    PUSH EBX                            ; 004374fc
        ;   Label: LAB_004374fc
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004374fd
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00437502
    LEA EAX,[EBX + 0x2b4]               ; 00437505
    PUSH EAX                            ; 0043750b
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0043750c
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 00437511
    PUSH dword ptr [EBP + 0x92]         ; 00437514
    PUSH EBX                            ; 0043751a
    MOV ESI,dword ptr [EBP + 0x72]      ; 0043751b
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0043751e
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 00437523
    CMP ESI,0x3                         ; 00437526
    JNZ 0x00437b4f                      ; 00437529
        ;   XREF to: 00437b4f (CONDITIONAL_JUMP)  ; LAB_00437b4f
    PUSH 0x42c80000                     ; 0043752f
        ;   Label: LAB_0043752f
    SUB ESP,0x8                         ; 00437534
    FLD float ptr [EBX + 0x28]          ; 00437537
    FSTP double ptr [ESP]               ; 0043753a
    SUB ESP,0x8                         ; 0043753d
    FLD float ptr [EBX + 0x24]          ; 00437540
    FSTP double ptr [ESP]               ; 00437543
    SUB ESP,0x8                         ; 00437546
    FLD float ptr [EBX + 0x20]          ; 00437549
    FSTP double ptr [ESP]               ; 0043754c
    CALL sound_sndmain.cpp_FUN_005515e0 ; 0043754f
        ;   XREF to: 005515e0 (UNCONDITIONAL_CALL)  ; undefined sound_sndmain.cpp_FUN_005515e0()
    ADD ESP,0x1c                        ; 00437554
    TEST EAX,EAX                        ; 00437557
    JZ 0x00437b58                       ; 00437559
        ;   XREF to: 00437b58 (CONDITIONAL_JUMP)  ; LAB_00437b58
    MOV EDX,dword ptr [EBX + 0x10b5c]   ; 0043755f
    PUSH EDX                            ; 00437565
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437566
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0043756b
    TEST EAX,EAX                        ; 0043756e
    JNZ 0x00437159                      ; 00437570
        ;   XREF to: 00437159 (CONDITIONAL_JUMP)  ; LAB_00437159
    CALL sound_sndmain.cpp_pushSfxOptions_FUN_00550450 ; 00437576
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_pushSfxOptions_FUN_00550450()
    PUSH 0x2                            ; 0043757b
    PUSH 0x3f800000                     ; 0043757d
    PUSH 0x0                            ; 00437582
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00437584
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 00437589
    MOV dword ptr [EBP + 0x76],EAX      ; 0043758c
    SUB ESP,0x8                         ; 0043758f
    FLD float ptr [EBP + 0x76]          ; 00437592
    FSTP double ptr [ESP]               ; 00437595
    CALL sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0 ; 00437598
        ;   XREF to: 005503e0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_setNextSfxTriggerTime_FUN_005503e0(double trigger_time, int trigger_id)
    ADD ESP,0xc                         ; 0043759d
    PUSH 0x5cdddf                       ; 004375a0 | = "boneGuy-walkloop.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004375a5
    PUSH EBX                            ; 004375ab
    CALL dword ptr [EAX + 0x38]         ; 004375ac
    ADD ESP,0x8                         ; 004375af
    MOV dword ptr [EBX + 0x10b5c],EAX   ; 004375b2
    CALL sound_sndmain.cpp_popSfxOptions_FUN_005504d0 ; 004375b8
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; void sound_sndmain.cpp_popSfxOptions_FUN_005504d0()
    LEA ESP,[EBP + 0x7a]                ; 004375bd
    POP EBP                             ; 004375c0
    POP EDI                             ; 004375c1
    POP ESI                             ; 004375c2
    POP EBX                             ; 004375c3
    RET                                 ; 004375c4
    PUSH 0x1                            ; 004375c5
        ;   Label: LAB_004375c5
    PUSH 0x0                            ; 004375c7
    PUSH ESI                            ; 004375c9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004375ca
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004375cf
    PUSH EBX                            ; 004375d2
    PUSH 0x5cdd70                       ; 004375d3 | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x00609ed0]      ; 004375d8 | g_CConsolePtr
    PUSH EDX                            ; 004375de | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004375df
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    JMP 0x004373ad                      ; 004375e4
        ;   XREF to: 004373ad (UNCONDITIONAL_JUMP)  ; LAB_004373ad
    JBE 0x0043739d                      ; 004375e9
        ;   XREF to: 0043739d (CONDITIONAL_JUMP)  ; LAB_0043739d
        ;   Label: LAB_004375e9
    CMP EAX,0x3                         ; 004375ef
    JZ 0x004375c5                       ; 004375f2
        ;   XREF to: 004375c5 (CONDITIONAL_JUMP)  ; LAB_004375c5
    PUSH 0x1                            ; 004375f4
        ;   Label: LAB_004375f4
    PUSH 0x2                            ; 004375f6
    PUSH 0x0                            ; 004375f8
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 004375fa
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 004375ff
    PUSH EAX                            ; 00437602
    JMP 0x004373a1                      ; 00437603
        ;   XREF to: 004373a1 (UNCONDITIONAL_JUMP)  ; LAB_004373a1
    LEA EAX,[EBP + 0xfffffe76]          ; 00437608
        ;   Label: caseD_5
    PUSH EAX                            ; 0043760e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0043760f
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 00437614
    PUSH 0x41700000                     ; 00437617
    PUSH 0x40e00000                     ; 0043761c
    LEA ESI,[EBP + 0xffffff32]          ; 00437621
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 00437627
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0043762c
    ADD ESP,0x8                         ; 0043762f
    LEA EAX,[EBP + 0xfffffe76]          ; 00437632
    MOV EDX,dword ptr [0x007c2560]      ; 00437638 | DAT_007c2560
    PUSH EAX                            ; 0043763e
    LEA EAX,[EDX*0x4 + 0x0]             ; 0043763f
    MOV dword ptr [EBP + 0xfffffeaa],EBX ; 00437646
    SUB EAX,EDX                         ; 0043764c
    MOV dword ptr [EBP + 0xfffffeae],EBX ; 0043764e
    SHL EAX,0x4                         ; 00437654
    LEA EDX,[EBX + 0x1134]              ; 00437657
    PUSH 0x3ecccccd                     ; 0043765d
    ADD EAX,EDX                         ; 00437662
    LEA EDI,[EBP + 0xffffff02]          ; 00437664
    PUSH EAX                            ; 0043766a
    FLD float ptr [EBP + 0x76]          ; 0043766b
    PUSH 0x265370c                      ; 0043766e | DAT_0265370c
    FSTP float ptr [EBP + 0xfffffe7a]   ; 00437673
    MOV dword ptr [EBP + 0x76],EDX      ; 00437679
    CALL core_xform.cpp_FUN_00591530    ; 0043767c
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 00437681
    LEA EAX,[EBP + 0xffffff02]          ; 00437684
    LEA ESI,[EBP + 0xffffff32]          ; 0043768a
    PUSH EAX                            ; 00437690
    MOVSD ES:EDI,ESI                    ; 00437691
    MOVSD ES:EDI,ESI                    ; 00437692
    MOVSD ES:EDI,ESI                    ; 00437693
    PUSH EBX                            ; 00437694
    LEA ESI,[EBP + 0xfffffede]          ; 00437695
    CALL core_actor.cpp_FUN_00408d70    ; 0043769b
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004376a0
    LEA EAX,[EBP + -0x1a]               ; 004376a3
    PUSH EAX                            ; 004376a6
    LEA EDI,[EBP + -0x1a]               ; 004376a7
    LEA ESI,[EBP + 0xfffffede]          ; 004376aa
    PUSH EBX                            ; 004376b0
    MOVSD ES:EDI,ESI                    ; 004376b1
    MOVSD ES:EDI,ESI                    ; 004376b2
    MOVSD ES:EDI,ESI                    ; 004376b3
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004376b4
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004376b9
    LEA EAX,[EBP + 0xfffffe76]          ; 004376bc
    MOV EDX,dword ptr [0x007c2554]      ; 004376c2 | DAT_007c2554
    PUSH EAX                            ; 004376c8
    LEA EAX,[EDX*0x4 + 0x0]             ; 004376c9
    SUB EAX,EDX                         ; 004376d0
    MOV ECX,dword ptr [EBP + 0x76]      ; 004376d2
    SHL EAX,0x4                         ; 004376d5
    ADD EAX,ECX                         ; 004376d8
    PUSH 0x3ecccccd                     ; 004376da
    PUSH EAX                            ; 004376df
    PUSH 0x265370c                      ; 004376e0 | DAT_0265370c
    LEA ESI,[EBP + 0xffffff62]          ; 004376e5
    LEA EDI,[EBP + 0xa]                 ; 004376eb
    CALL core_xform.cpp_FUN_00591530    ; 004376ee
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004376f3
    LEA EAX,[EBP + 0xa]                 ; 004376f6
    LEA ESI,[EBP + 0xffffff62]          ; 004376f9
    PUSH EAX                            ; 004376ff
    MOVSD ES:EDI,ESI                    ; 00437700
    MOVSD ES:EDI,ESI                    ; 00437701
    MOVSD ES:EDI,ESI                    ; 00437702
    PUSH EBX                            ; 00437703
    LEA ESI,[EBP + -0xe]                ; 00437704
    CALL core_actor.cpp_FUN_00408d70    ; 00437707
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0043770c
    LEA EAX,[EBP + -0x32]               ; 0043770f
    PUSH EAX                            ; 00437712
    LEA EDI,[EBP + -0x32]               ; 00437713
    LEA ESI,[EBP + -0xe]                ; 00437716
    PUSH EBX                            ; 00437719
    MOVSD ES:EDI,ESI                    ; 0043771a
    MOVSD ES:EDI,ESI                    ; 0043771b
    MOVSD ES:EDI,ESI                    ; 0043771c
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0043771d
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 00437722
    JMP 0x004373c8                      ; 00437725
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0x10a64],0x0   ; 0043772a
        ;   Label: caseD_b
    JNZ 0x004373c8                      ; 00437731
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    CMP dword ptr [EBX + 0xdc],0x0      ; 00437737
    JNZ 0x004373c8                      ; 0043773e
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    MOV dword ptr [EBX + 0x10a64],0x1   ; 00437744
    JMP 0x004373c8                      ; 0043774e
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00437753
        ;   Label: caseD_0
    PUSH EBX                            ; 00437759
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0043775a
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0043775f
    LEA ESI,[EBX + 0x2b4]               ; 00437762
    TEST EAX,EAX                        ; 00437768
    JZ 0x0043777e                       ; 0043776a
        ;   XREF to: 0043777e (CONDITIONAL_JUMP)  ; LAB_0043777e
    PUSH 0x1                            ; 0043776c
    PUSH 0x3                            ; 0043776e
    PUSH ESI                            ; 00437770
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437771
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437776
    JMP 0x004373c8                      ; 00437779
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 0043777e
        ;   Label: LAB_0043777e
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437784
    PUSH EBX                            ; 0043778a
    CALL dword ptr [EAX + 0x150]        ; 0043778b
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00437791
    ADD ESP,0x8                         ; 00437797
    TEST EAX,EAX                        ; 0043779a
    JZ 0x004373c8                       ; 0043779c
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004377a2
    PUSH 0x3                            ; 004377a4
    PUSH ESI                            ; 004377a6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004377a7
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004377ac
    JMP 0x004373c8                      ; 004377af
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 004377b4
        ;   Label: caseD_3
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004377ba
    PUSH EBX                            ; 004377c0
    CALL dword ptr [EAX + 0x150]        ; 004377c1
    ADD ESP,0x8                         ; 004377c7
    LEA EAX,[EBX + 0x2b4]               ; 004377ca
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004377d0
    MOV dword ptr [EBP + 0x52],EAX      ; 004377d6
    TEST ESI,ESI                        ; 004377d9
    JNZ 0x00437808                      ; 004377db
        ;   XREF to: 00437808 (CONDITIONAL_JUMP)  ; LAB_00437808
    PUSH dword ptr [EBP + 0x92]         ; 004377dd
    PUSH EBX                            ; 004377e3
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004377e4
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004377e9
    TEST EAX,EAX                        ; 004377ec
    JNZ 0x004373c8                      ; 004377ee
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004377f4
    PUSH ESI                            ; 004377f6
    MOV EDI,dword ptr [EBP + 0x52]      ; 004377f7
    PUSH EDI                            ; 004377fa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004377fb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437800
    JMP 0x004373c8                      ; 00437803
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x3e32b8c2                     ; 00437808
        ;   Label: LAB_00437808
    FLD float ptr [0x005f469c]          ; 0043780d | DAT_005f469c
    PUSH 0x3f000000                     ; 00437813
    MOV EAX,[0x005f469c]                ; 00437818 | DAT_005f469c
    XOR EDI,EDI                         ; 0043781d
    MOV dword ptr [EBP + 0xfffffed2],EDI ; 0043781f
    MOV dword ptr [EBP + 0xfffffeda],EAX ; 00437825
    LEA EAX,[EBP + 0xfffffed2]          ; 0043782b
    MOV dword ptr [EBP + 0xfffffed6],EDI ; 00437831
    PUSH EAX                            ; 00437837
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00437838
    FADD double ptr [0x005cde03]        ; 0043783e | DAT_005cde03
    PUSH EAX                            ; 00437844
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 00437845
    FSTP float ptr [EBP + 0x46]         ; 0043784b
    CALL dword ptr [EDX + 0xcc]         ; 0043784e
    ADD ESP,0x4                         ; 00437854
    PUSH EAX                            ; 00437857
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 00437858
    ADD EAX,0x20                        ; 0043785e
    PUSH EAX                            ; 00437861
    PUSH EBX                            ; 00437862
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 00437863
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 00437868
    TEST EAX,EAX                        ; 0043786b
    JL 0x004379e7                       ; 0043786d
        ;   XREF to: 004379e7 (CONDITIONAL_JUMP)  ; LAB_004379e7
    LEA EDI,[EBP + 0xfffffef6]          ; 00437873
    LEA EDX,[EBX + 0x20]                ; 00437879
    LEA ESI,[EBP + -0x4a]               ; 0043787c
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 0043787f
    FLD float ptr [EDX]                 ; 00437885
    FLD float ptr [EDX + 0x4]           ; 00437887
    FLD float ptr [EDX + 0x8]           ; 0043788a
    FXCH ST2                            ; 0043788d
    FSUB float ptr [ECX + 0x20]         ; 0043788f
    FXCH                                ; 00437892
    FSUB float ptr [ECX + 0x24]         ; 00437894
    FXCH ST2                            ; 00437897
    FSUB float ptr [ECX + 0x28]         ; 00437899
    FXCH                                ; 0043789c
    FSTP float ptr [EBP + -0x4a]        ; 0043789e
    FXCH                                ; 004378a1
    FSTP float ptr [EBP + -0x46]        ; 004378a3
    FSTP float ptr [EBP + -0x42]        ; 004378a6
    MOVSD ES:EDI,ESI                    ; 004378a9
    MOVSD ES:EDI,ESI                    ; 004378aa
    MOVSD ES:EDI,ESI                    ; 004378ab
    FLD float ptr [EBP + 0xfffffef6]    ; 004378ac
    FMUL ST0                            ; 004378b2
    FLD float ptr [EBP + 0xfffffefe]    ; 004378b4
    FMUL ST0                            ; 004378ba
    FADDP                               ; 004378bc
    FSQRT                               ; 004378be
    XOR ESI,ESI                         ; 004378c0
    ADD ECX,0x20                        ; 004378c2
    MOV dword ptr [EBP + 0xfffffefa],ESI ; 004378c5
    FSTP float ptr [EBP + 0x6e]         ; 004378cb
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004378ce
    FLD float ptr [EBP + 0x6e]          ; 004378d1
    MOV dword ptr [EBP + 0x4a],EAX      ; 004378d4
    FCOMP float ptr [EBP + 0x46]        ; 004378d7
    FNSTSW AX                           ; 004378da
    SAHF                                ; 004378dc
    JA 0x004379b7                       ; 004378dd
        ;   XREF to: 004379b7 (CONDITIONAL_JUMP)  ; LAB_004379b7
    FLD float ptr [EBX + 0x10a74]       ; 004378e3
    FLDZ                                ; 004378e9
    FCOMPP                              ; 004378eb
    FNSTSW AX                           ; 004378ed
    SAHF                                ; 004378ef
    JC 0x004379b7                       ; 004378f0
        ;   XREF to: 004379b7 (CONDITIONAL_JUMP)  ; LAB_004379b7
    FLD float ptr [ECX]                 ; 004378f6
    FLD float ptr [ECX + 0x4]           ; 004378f8
    FLD float ptr [ECX + 0x8]           ; 004378fb
    LEA EDI,[EBP + 0xffffff26]          ; 004378fe
    LEA ESI,[EBP + 0xffffff7a]          ; 00437904
    LEA EAX,[EBP + 0xffffff26]          ; 0043790a
    FXCH ST2                            ; 00437910
    FSUB float ptr [EDX]                ; 00437912
    FXCH                                ; 00437914
    FSUB float ptr [EDX + 0x4]          ; 00437916
    FXCH ST2                            ; 00437919
    FSUB float ptr [EDX + 0x8]          ; 0043791b
    FXCH                                ; 0043791e
    FSTP float ptr [EBP + 0xffffff7a]   ; 00437920
    FXCH                                ; 00437926
    FSTP float ptr [EBP + 0xffffff7e]   ; 00437928
    FSTP float ptr [EBP + -0x7e]        ; 0043792e
    MOVSD ES:EDI,ESI                    ; 00437931
    MOVSD ES:EDI,ESI                    ; 00437932
    MOVSD ES:EDI,ESI                    ; 00437933
    PUSH EAX                            ; 00437934
    LEA ESI,[EBP + 0xffffff4a]          ; 00437935
    LEA EDI,[EBP + 0xffffff3e]          ; 0043793b
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 00437941
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff4a]          ; 00437946
    MOVSD ES:EDI,ESI                    ; 0043794c
    MOVSD ES:EDI,ESI                    ; 0043794d
    MOVSD ES:EDI,ESI                    ; 0043794e
    ADD ESP,0x4                         ; 0043794f
    FLD float ptr [EBP + 0xffffff42]    ; 00437952
    FSUB float ptr [EBX + 0x34]         ; 00437958
    SUB ESP,0x4                         ; 0043795b
    FSTP float ptr [ESP]                ; 0043795e
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 00437961
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0()
    MOV dword ptr [EBP + 0x76],EAX      ; 00437966
    FLD float ptr [EBP + 0x76]          ; 00437969
    FABS                                ; 0043796c
    ADD ESP,0x4                         ; 0043796e
    FCOMP double ptr [0x005cde0b]       ; 00437971 | DAT_005cde0b
    FNSTSW AX                           ; 00437977
    SAHF                                ; 00437979
    JNC 0x004379b7                      ; 0043797a
        ;   XREF to: 004379b7 (CONDITIONAL_JUMP)  ; LAB_004379b7
    PUSH 0x1                            ; 0043797c
    PUSH 0x1                            ; 0043797e
    PUSH 0x0                            ; 00437980
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 00437982
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00437987
    ADD EAX,0x5                         ; 0043798a
    PUSH EAX                            ; 0043798d
    MOV EDI,dword ptr [EBP + 0x52]      ; 0043798e
    PUSH EDI                            ; 00437991
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437992
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437997
    MOV EAX,dword ptr [EBX + 0x10b9c]   ; 0043799a
    PUSH EAX                            ; 004379a0
    MOV dword ptr [EBX + 0x10a74],0x40200000 ; 004379a1
    CALL sound_sndmain.cpp_FUN_00550b70 ; 004379ab
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004379b0
    TEST EAX,EAX                        ; 004379b3
    JZ 0x00437a10                       ; 004379b5
        ;   XREF to: 00437a10 (CONDITIONAL_JUMP)  ; LAB_00437a10
    FLD float ptr [EBX + 0x10a70]       ; 004379b7
        ;   Label: LAB_004379b7
    FMUL float ptr [0x005cde13]         ; 004379bd | DAT_005cde13
    FCOMP float ptr [EBP + 0x4a]        ; 004379c3
    FNSTSW AX                           ; 004379c6
    SAHF                                ; 004379c8
    JNC 0x004373c8                      ; 004379c9
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 004379cf
    PUSH 0x0                            ; 004379d1
    LEA EAX,[EBX + 0x2b4]               ; 004379d3
    PUSH EAX                            ; 004379d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004379da
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004379df
    JMP 0x004373c8                      ; 004379e2
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH EBX                            ; 004379e7
        ;   Label: LAB_004379e7
    PUSH 0x5cdd9a                       ; 004379e8 | = "%s gave up chase - I'm confused\n"
    MOV ECX,dword ptr [0x00609ed0]      ; 004379ed | g_CConsolePtr
    PUSH ECX                            ; 004379f3 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00436710 ; 004379f4
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00436710()
    ADD ESP,0xc                         ; 004379f9
    PUSH 0x1                            ; 004379fc
    PUSH EDI                            ; 004379fe
    MOV ESI,dword ptr [EBP + 0x52]      ; 004379ff
    PUSH ESI                            ; 00437a02
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437a03
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437a08
    JMP 0x004373c8                      ; 00437a0b
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    MOV EDX,dword ptr [EBX + 0x10ba0]   ; 00437a10
        ;   Label: LAB_00437a10
    PUSH EDX                            ; 00437a16
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437a17
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437a1c
    TEST EAX,EAX                        ; 00437a1f
    JNZ 0x004379b7                      ; 00437a21
        ;   XREF to: 004379b7 (CONDITIONAL_JUMP)  ; LAB_004379b7
    PUSH 0x5cddbb                       ; 00437a23 | = "batman-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437a28
    PUSH EBX                            ; 00437a2e
    CALL dword ptr [EAX + 0x34]         ; 00437a2f
    ADD ESP,0x8                         ; 00437a32
    MOV dword ptr [EBX + 0x10ba0],EAX   ; 00437a35
    JMP 0x004379b7                      ; 00437a3b
        ;   XREF to: 004379b7 (UNCONDITIONAL_JUMP)  ; LAB_004379b7
    PUSH dword ptr [EBP + 0x92]         ; 00437a40
        ;   Label: caseD_c
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437a46
    PUSH EBX                            ; 00437a4c
    CALL dword ptr [EAX + 0x150]        ; 00437a4d
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 00437a53
    ADD ESP,0x8                         ; 00437a59
    TEST ESI,ESI                        ; 00437a5c
    JZ 0x00437ad5                       ; 00437a5e
        ;   XREF to: 00437ad5 (CONDITIONAL_JUMP)  ; LAB_00437ad5
    PUSH 0x1                            ; 00437a60
        ;   Label: LAB_00437a60
    PUSH 0xe                            ; 00437a62
    LEA EAX,[EBX + 0x2b4]               ; 00437a64
    PUSH EAX                            ; 00437a6a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437a6b
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437a70
    MOV EAX,dword ptr [EBX + 0x10b9c]   ; 00437a73
    PUSH EAX                            ; 00437a79
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437a7a
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437a7f
    TEST EAX,EAX                        ; 00437a82
    JNZ 0x004373c8                      ; 00437a84
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    MOV EDX,dword ptr [EBX + 0x10ba0]   ; 00437a8a
    PUSH EDX                            ; 00437a90
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437a91
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437a96
    TEST EAX,EAX                        ; 00437a99
    JNZ 0x004373c8                      ; 00437a9b
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    MOV ECX,dword ptr [EBX + 0x10b98]   ; 00437aa1
    PUSH ECX                            ; 00437aa7
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00437aa8
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 00437aad
    TEST EAX,EAX                        ; 00437ab0
    JNZ 0x004373c8                      ; 00437ab2
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x5cddce                       ; 00437ab8 | = "batman-alert.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437abd
    PUSH EBX                            ; 00437ac3
    CALL dword ptr [EAX + 0x34]         ; 00437ac4
    ADD ESP,0x8                         ; 00437ac7
    MOV dword ptr [EBX + 0x10b98],EAX   ; 00437aca
    JMP 0x004373c8                      ; 00437ad0
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    LEA EAX,[EBX + 0x10af8]             ; 00437ad5
        ;   Label: LAB_00437ad5
    PUSH EAX                            ; 00437adb
    MOV EDI,dword ptr [0x006141f0]      ; 00437adc | DAT_006141f0
    PUSH EDI                            ; 00437ae2
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 00437ae3
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 00437ae8
    TEST EAX,EAX                        ; 00437aeb
    JNZ 0x00437a60                      ; 00437aed
        ;   XREF to: 00437a60 (CONDITIONAL_JUMP)  ; LAB_00437a60
    JMP 0x004373c8                      ; 00437af3
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    FLD float ptr [EBX + 0x2574]        ; 00437af8
        ;   Label: caseD_e
    FADD double ptr [0x005cddfb]        ; 00437afe | DAT_005cddfb
    FLD float ptr [EBX + 0x24]          ; 00437b04
    FCOMPP                              ; 00437b07
    FNSTSW AX                           ; 00437b09
    SAHF                                ; 00437b0b
    JNC 0x004373c8                      ; 00437b0c
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    PUSH 0x1                            ; 00437b12
    PUSH 0xf                            ; 00437b14
    PUSH ESI                            ; 00437b16
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00437b17
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00437b1c
    JMP 0x004373c8                      ; 00437b1f
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    PUSH dword ptr [EBP + 0x92]         ; 00437b24
        ;   Label: caseD_f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00437b2a
    PUSH EBX                            ; 00437b30
    CALL dword ptr [EAX + 0x150]        ; 00437b31
    ADD ESP,0x8                         ; 00437b37
    JMP 0x004373c8                      ; 00437b3a
        ;   XREF to: 004373c8 (UNCONDITIONAL_JUMP)  ; caseD_d
    CMP EDI,0xf                         ; 00437b3f
        ;   Label: LAB_00437b3f
    JA 0x004373c8                       ; 00437b42
        ;   XREF to: 004373c8 (CONDITIONAL_JUMP)  ; caseD_d
    JMP dword ptr [EDI*0x4 + 0x436e38]  ; 00437b48 | caseD_2 | caseD_4 | caseD_6
        ;   Label: switchD
    CMP ESI,0x4                         ; 00437b4f
        ;   Label: LAB_00437b4f
    JZ 0x0043752f                       ; 00437b52
        ;   XREF to: 0043752f (CONDITIONAL_JUMP)  ; LAB_0043752f
    MOV EAX,dword ptr [EBX + 0x10b5c]   ; 00437b58
        ;   Label: LAB_00437b58
    PUSH EAX                            ; 00437b5e
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 00437b5f
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 00437b64
    LEA ESP,[EBP + 0x7a]                ; 00437b67
    POP EBP                             ; 00437b6a
    POP EDI                             ; 00437b6b
    POP ESI                             ; 00437b6c
    POP EBX                             ; 00437b6d
    RET                                 ; 00437b6e

