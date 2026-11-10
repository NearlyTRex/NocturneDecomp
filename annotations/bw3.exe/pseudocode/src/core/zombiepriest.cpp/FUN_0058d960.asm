; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_zombiepriest_cpp_FUN_0058d960(CEnemy *param_1,float param_2)
;
;
; Referenced Globals:
;   undefined1* switchdataD_0058d938 = 0058e22c
;   TerminatedCString s_mob_scream_wav_005d8b65
;   TerminatedCString s_s_confused_while_walking_005d8b75
;   undefined4 DAT_005d8ba0
;   undefined4 DAT_005d8ba8
;   undefined4 DAT_005d8bb0
;   undefined4 DAT_005e7048
;   undefined4 DAT_005e704c
;   undefined4 DAT_005e7058
;   CConsole* g_CConsolePtr = 007f7ea4
;   undefined4 DAT_005fba60
;   CGore* g_CGorePtr = 01d22e44
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d5ba14
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0
;   core_charactr.cpp_CCharacter_processWalking_FUN_00431660
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0
;   core_charactr.cpp_FUN_0042c1e0
;   core_charactr.cpp_FUN_0042c230
;   core_charactr.cpp_FUN_0042cd30
;   core_charactr.cpp_FUN_004319d0
;   core_charactr.cpp_FUN_00434850
;   core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0
;   ... and 18 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d960
        ;   Label: core_zombiepriest.cpp_FUN_0058d960
    PUSH ESI                            ; 0058d961
    PUSH EDI                            ; 0058d962
    PUSH EBP                            ; 0058d963
    MOV EBP,ESP                         ; 0058d964
    SUB ESP,0x258                       ; 0058d966
    SUB EBP,0x7a                        ; 0058d96c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0058d96f
    PUSH dword ptr [EBP + 0x92]         ; 0058d975
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058d97b
    PUSH EBX                            ; 0058d981
    CALL dword ptr [EAX + 0x148]        ; 0058d982
    ADD ESP,0x8                         ; 0058d988
    TEST EAX,EAX                        ; 0058d98b
    JZ 0x0058de63                       ; 0058d98d
        ;   XREF to: 0058de63 (CONDITIONAL_JUMP)  ; LAB_0058de63
    MOV EAX,dword ptr [EBX + 0xd108]    ; 0058d993
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058d999
    JZ 0x0058dad7                       ; 0058d9a1
        ;   XREF to: 0058dad7 (CONDITIONAL_JUMP)  ; LAB_0058dad7
    CMP dword ptr [EBX + 0xbc68],0x0    ; 0058d9a7
        ;   Label: LAB_0058d9a7
    JZ 0x0058d9ba                       ; 0058d9ae
        ;   XREF to: 0058d9ba (CONDITIONAL_JUMP)  ; LAB_0058d9ba
    MOV dword ptr [EBX + 0xbc6c],0x0    ; 0058d9b0
    CMP dword ptr [EBX + 0x33a0],0x0    ; 0058d9ba
        ;   Label: LAB_0058d9ba
    JLE 0x0058da16                      ; 0058d9c1
        ;   XREF to: 0058da16 (CONDITIONAL_JUMP)  ; LAB_0058da16
    PUSH 0x0                            ; 0058d9c3
    PUSH 0x1                            ; 0058d9c5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058d9c7
    PUSH EBX                            ; 0058d9cd
    CALL dword ptr [EAX + 0x128]        ; 0058d9ce
    ADD ESP,0xc                         ; 0058d9d4
    PUSH 0x0                            ; 0058d9d7
    PUSH 0x0                            ; 0058d9d9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058d9db
    PUSH EBX                            ; 0058d9e1
    CALL dword ptr [EAX + 0x128]        ; 0058d9e2
    ADD ESP,0xc                         ; 0058d9e8
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058d9eb
    PUSH EBX                            ; 0058d9f1
    CALL dword ptr [EAX + 0x10c]        ; 0058d9f2
    ADD ESP,0x4                         ; 0058d9f8
    TEST EAX,EAX                        ; 0058d9fb
    JNZ 0x0058da16                      ; 0058d9fd
        ;   XREF to: 0058da16 (CONDITIONAL_JUMP)  ; LAB_0058da16
    MOV EAX,dword ptr [EBX + 0xd0dc]    ; 0058d9ff
    PUSH EAX                            ; 0058da05
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058da06
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058da0b
    TEST EAX,EAX                        ; 0058da0e
    JZ 0x0058db19                       ; 0058da10
        ;   XREF to: 0058db19 (CONDITIONAL_JUMP)  ; LAB_0058db19
    FLD float ptr [EBX + 0xd110]        ; 0058da16
        ;   Label: LAB_0058da16
    FSUB float ptr [EBP + 0x92]         ; 0058da1c
    FST float ptr [EBX + 0xd110]        ; 0058da22
    FLDZ                                ; 0058da28
    FCOMPP                              ; 0058da2a
    FNSTSW AX                           ; 0058da2c
    SAHF                                ; 0058da2e
    JBE 0x0058da3b                      ; 0058da2f
        ;   XREF to: 0058da3b (CONDITIONAL_JUMP)  ; LAB_0058da3b
    MOV dword ptr [EBX + 0xd110],0x0    ; 0058da31
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058da3b
        ;   Label: LAB_0058da3b
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058da41
    TEST ECX,ECX                        ; 0058da48
    JZ 0x0058db4d                       ; 0058da4a
        ;   XREF to: 0058db4d (CONDITIONAL_JUMP)  ; LAB_0058db4d
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058da50
        ;   Label: LAB_0058da50
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058da56
    TEST ESI,ESI                        ; 0058da5d
    JZ 0x0058db65                       ; 0058da5f
        ;   XREF to: 0058db65 (CONDITIONAL_JUMP)  ; LAB_0058db65
    CMP dword ptr [EBX + 0xd06c],0x0    ; 0058da65
        ;   Label: LAB_0058da65
    JZ 0x0058db7c                       ; 0058da6c
        ;   XREF to: 0058db7c (CONDITIONAL_JUMP)  ; LAB_0058db7c
    LEA EAX,[EBX + 0x249c]              ; 0058da72
        ;   Label: LAB_0058da72
    MOV dword ptr [EAX + 0x8],0x0       ; 0058da78
    FLD float ptr [EBP + 0x92]          ; 0058da7f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058da85
    MOV dword ptr [EAX + 0x4],EDX       ; 0058da88
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058da8b
    MOV dword ptr [EAX],EDX             ; 0058da8e
    LEA EAX,[EBX + 0x158]               ; 0058da90
    FMUL float ptr [EBX + 0xcdcc]       ; 0058da96
    MOV dword ptr [EBP + 0x72],EAX      ; 0058da9c
    FSTP float ptr [EBP + 0x4a]         ; 0058da9f
    MOV EDI,dword ptr [EBP + 0x72]      ; 0058daa2
    FLD float ptr [EBP + 0x4a]          ; 0058daa5
        ;   Label: LAB_0058daa5
    FLDZ                                ; 0058daa8
    FCOMPP                              ; 0058daaa
    FNSTSW AX                           ; 0058daac
    SAHF                                ; 0058daae
    JNC 0x0058dbd8                      ; 0058daaf
        ;   XREF to: 0058dbd8 (CONDITIONAL_JUMP)  ; LAB_0058dbd8
    LEA EAX,[EBP + 0x4a]                ; 0058dab5
    PUSH EAX                            ; 0058dab8
    PUSH EDI                            ; 0058dab9
    CALL core_motion.cpp_CMotionController_advance_FUN_004fbb70 ; 0058daba
        ;   XREF to: 004fbb70 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_004fbb70(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0058dabf
    CMP EAX,0x64                        ; 0058dac2
    JZ 0x0058dba8                       ; 0058dac5
        ;   XREF to: 0058dba8 (CONDITIONAL_JUMP)  ; LAB_0058dba8
    PUSH EAX                            ; 0058dacb
    PUSH EBX                            ; 0058dacc
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0 ; 0058dacd
        ;   XREF to: 00433fb0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00433fb0(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0058dad2
    JMP 0x0058daa5                      ; 0058dad5
        ;   XREF to: 0058daa5 (UNCONDITIONAL_JUMP)  ; LAB_0058daa5
    LEA EAX,[EBP + 0xfffffe5e]          ; 0058dad7
        ;   Label: LAB_0058dad7
    PUSH EAX                            ; 0058dadd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0058dade
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    MOV ECX,0x4479f99a                  ; 0058dae3
    ADD ESP,0x4                         ; 0058dae8
    LEA EAX,[EBP + 0xfffffe5e]          ; 0058daeb
    MOV dword ptr [EBP + 0xfffffe92],EBX ; 0058daf1
    PUSH EAX                            ; 0058daf7
    MOV dword ptr [EBP + 0xfffffe96],EBX ; 0058daf8
    MOV dword ptr [EBP + 0xfffffe62],ECX ; 0058dafe
    PUSH EBX                            ; 0058db04
    MOV EDX,dword ptr [EBX + 0x154]     ; 0058db05
    CALL dword ptr [EDX + 0x108]        ; 0058db0b
    ADD ESP,0x8                         ; 0058db11
    JMP 0x0058d9a7                      ; 0058db14
        ;   XREF to: 0058d9a7 (UNCONDITIONAL_JUMP)  ; LAB_0058d9a7
    MOV EDX,dword ptr [EBX + 0xd0d4]    ; 0058db19
        ;   Label: LAB_0058db19
    PUSH EDX                            ; 0058db1f
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058db20
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058db25
    TEST EAX,EAX                        ; 0058db28
    JNZ 0x0058da16                      ; 0058db2a
        ;   XREF to: 0058da16 (CONDITIONAL_JUMP)  ; LAB_0058da16
    PUSH 0x5d8b65                       ; 0058db30 | = "mob-scream?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058db35
    PUSH EBX                            ; 0058db3b
    CALL dword ptr [EAX + 0x2c]         ; 0058db3c
    ADD ESP,0x8                         ; 0058db3f
    MOV dword ptr [EBX + 0xd0dc],EAX    ; 0058db42
    JMP 0x0058da16                      ; 0058db48
        ;   XREF to: 0058da16 (UNCONDITIONAL_JUMP)  ; LAB_0058da16
    PUSH ECX                            ; 0058db4d
        ;   Label: LAB_0058db4d
    PUSH 0x1                            ; 0058db4e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058db50
    PUSH EBX                            ; 0058db56
    CALL dword ptr [EAX + 0x128]        ; 0058db57
    ADD ESP,0xc                         ; 0058db5d
    JMP 0x0058da50                      ; 0058db60
        ;   XREF to: 0058da50 (UNCONDITIONAL_JUMP)  ; LAB_0058da50
    PUSH ESI                            ; 0058db65
        ;   Label: LAB_0058db65
    PUSH ESI                            ; 0058db66
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058db67
    PUSH EBX                            ; 0058db6d
    CALL dword ptr [EAX + 0x128]        ; 0058db6e
    ADD ESP,0xc                         ; 0058db74
    JMP 0x0058da65                      ; 0058db77
        ;   XREF to: 0058da65 (UNCONDITIONAL_JUMP)  ; LAB_0058da65
    LEA EAX,[EBX + 0xd070]              ; 0058db7c
        ;   Label: LAB_0058db7c
    PUSH EAX                            ; 0058db82
    MOV EAX,[0x005fba60]                ; 0058db83 | DAT_005fba60
    PUSH EAX                            ; 0058db88
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0 ; 0058db89
        ;   XREF to: 00491aa0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_00491aa0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0058db8e
    TEST EAX,EAX                        ; 0058db91
    JZ 0x0058da72                       ; 0058db93
        ;   XREF to: 0058da72 (CONDITIONAL_JUMP)  ; LAB_0058da72
    MOV dword ptr [EBX + 0xd06c],0x1    ; 0058db99
    JMP 0x0058da72                      ; 0058dba3
        ;   XREF to: 0058da72 (UNCONDITIONAL_JUMP)  ; LAB_0058da72
    MOV EAX,dword ptr [EBX + 0xd060]    ; 0058dba8
        ;   Label: LAB_0058dba8
    TEST EAX,EAX                        ; 0058dbae
    JZ 0x0058daa5                       ; 0058dbb0
        ;   XREF to: 0058daa5 (CONDITIONAL_JUMP)  ; LAB_0058daa5
    PUSH 0x0                            ; 0058dbb6
    PUSH 0x3e4ccccd                     ; 0058dbb8
    PUSH EAX                            ; 0058dbbd
    PUSH 0x1                            ; 0058dbbe
    PUSH EBX                            ; 0058dbc0
    MOV dword ptr [EBX + 0xd060],0x0    ; 0058dbc1
    CALL core_charactr.cpp_FUN_004319d0 ; 0058dbcb
        ;   XREF to: 004319d0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004319d0()
    ADD ESP,0x14                        ; 0058dbd0
    JMP 0x0058daa5                      ; 0058dbd3
        ;   XREF to: 0058daa5 (UNCONDITIONAL_JUMP)  ; LAB_0058daa5
    FLD float ptr [EBP + 0x92]          ; 0058dbd8
        ;   Label: LAB_0058dbd8
    FMUL float ptr [EBX + 0xcdcc]       ; 0058dbde
    SUB ESP,0x4                         ; 0058dbe4
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0058dbe7
    MOV dword ptr [EBX + 0x2524],EAX    ; 0058dbed
    FSTP float ptr [ESP]                ; 0058dbf3
    PUSH EBX                            ; 0058dbf6
    CALL core_charactr.cpp_FUN_00434850 ; 0058dbf7
        ;   XREF to: 00434850 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00434850()
    ADD ESP,0x8                         ; 0058dbfc
    MOV EDX,dword ptr [EBP + 0x72]      ; 0058dbff
    PUSH EDX                            ; 0058dc02
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058dc03
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0058dc08
    PUSH dword ptr [EBP + 0x92]         ; 0058dc0b
    PUSH EBX                            ; 0058dc11
    MOV ESI,dword ptr [EAX + 0x24]      ; 0058dc12
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00431660 ; 0058dc15
        ;   XREF to: 00431660 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00431660(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058dc1a
    TEST EAX,EAX                        ; 0058dc1d
    JZ 0x0058e8b6                       ; 0058dc1f
        ;   XREF to: 0058e8b6 (CONDITIONAL_JUMP)  ; LAB_0058e8b6
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0058dc25
    CMP EAX,0x2                         ; 0058dc2b
    JNC 0x0058de92                      ; 0058dc2e
        ;   XREF to: 0058de92 (CONDITIONAL_JUMP)  ; LAB_0058de92
    CMP EAX,0x1                         ; 0058dc34
    JNZ 0x0058de9d                      ; 0058dc37
        ;   XREF to: 0058de9d (CONDITIONAL_JUMP)  ; LAB_0058de9d
    PUSH 0x1                            ; 0058dc3d
        ;   Label: LAB_0058dc3d
    PUSH 0x1                            ; 0058dc3f
    LEA EAX,[EBX + 0x158]               ; 0058dc41
        ;   Label: LAB_0058dc41
    PUSH EAX                            ; 0058dc47
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058dc48
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058dc4d
        ;   Label: LAB_0058dc4d
    LEA EAX,[EBX + 0x249c]              ; 0058dc50
    MOV dword ptr [EAX + 0x8],0x0       ; 0058dc56
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058dc5d
    MOV dword ptr [EAX + 0x4],EDX       ; 0058dc60
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058dc63
    MOV dword ptr [EAX],EDX             ; 0058dc66
    FLD float ptr [EBX + 0xcde0]        ; 0058dc68
        ;   Label: caseD_3
    FLDZ                                ; 0058dc6e
    FCOMPP                              ; 0058dc70
    FNSTSW AX                           ; 0058dc72
    SAHF                                ; 0058dc74
    JNC 0x0058dc89                      ; 0058dc75
        ;   XREF to: 0058dc89 (CONDITIONAL_JUMP)  ; LAB_0058dc89
    FLD float ptr [EBX + 0xcde0]        ; 0058dc77
    FSUB float ptr [EBP + 0x92]         ; 0058dc7d
    FSTP float ptr [EBX + 0xcde0]       ; 0058dc83
    PUSH EBX                            ; 0058dc89
        ;   Label: LAB_0058dc89
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0 ; 0058dc8a
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042ccf0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058dc8f
    TEST EAX,EAX                        ; 0058dc92
    JZ 0x0058ddc0                       ; 0058dc94
        ;   XREF to: 0058ddc0 (CONDITIONAL_JUMP)  ; LAB_0058ddc0
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058dc9a
    TEST ECX,ECX                        ; 0058dca0
    JZ 0x0058dcce                       ; 0058dca2
        ;   XREF to: 0058dcce (CONDITIONAL_JUMP)  ; LAB_0058dcce
    PUSH ECX                            ; 0058dca4
    MOV EDX,dword ptr [ECX + 0x154]     ; 0058dca5
    CALL dword ptr [EDX + 0xf4]         ; 0058dcab
    ADD ESP,0x4                         ; 0058dcb1
    CMP EAX,EBX                         ; 0058dcb4
    JNZ 0x0058dcce                      ; 0058dcb6
        ;   XREF to: 0058dcce (CONDITIONAL_JUMP)  ; LAB_0058dcce
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0058dcb8
    PUSH ESI                            ; 0058dcbe
    MOV EDI,dword ptr [0x00603b28]      ; 0058dcbf | g_CDemonSetPtr
    PUSH EDI                            ; 0058dcc5 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10 ; 0058dcc6
        ;   XREF to: 0053ec10 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_0053ec10(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0058dccb
    PUSH dword ptr [EBP + 0x92]         ; 0058dcce
        ;   Label: LAB_0058dcce
    PUSH EBX                            ; 0058dcd4
    CALL core_charactr.cpp_FUN_0042c1e0 ; 0058dcd5
        ;   XREF to: 0042c1e0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042c1e0()
    LEA ECX,[EBX + 0x2518]              ; 0058dcda
    FLD float ptr [ECX]                 ; 0058dce0
    FMUL float ptr [EBP + 0x92]         ; 0058dce2
    FLD float ptr [ECX + 0x4]           ; 0058dce8
    FMUL float ptr [EBP + 0x92]         ; 0058dceb
    FLD float ptr [ECX + 0x8]           ; 0058dcf1
    FMUL float ptr [EBP + 0x92]         ; 0058dcf4
    LEA EDI,[EBP + -0x16]               ; 0058dcfa
    LEA ESI,[EBP + 0x1a]                ; 0058dcfd
    FXCH ST2                            ; 0058dd00
    FSTP float ptr [EBP + 0x1a]         ; 0058dd02
    FSTP float ptr [EBP + 0x1e]         ; 0058dd05
    FSTP float ptr [EBP + 0x22]         ; 0058dd08
    MOVSD ES:EDI,ESI                    ; 0058dd0b
    MOVSD ES:EDI,ESI                    ; 0058dd0c
    MOVSD ES:EDI,ESI                    ; 0058dd0d
    LEA EDX,[EBX + 0x250c]              ; 0058dd0e
    FLD float ptr [EBP + -0x16]         ; 0058dd14
    FLD float ptr [EBP + -0x12]         ; 0058dd17
    FLD float ptr [EBP + -0xe]          ; 0058dd1a
    LEA EDI,[EBP + 0xfffffed6]          ; 0058dd1d
    LEA ESI,[EBP + -0x52]               ; 0058dd23
    FXCH ST2                            ; 0058dd26
    FADD float ptr [EDX]                ; 0058dd28
    FXCH                                ; 0058dd2a
    FADD float ptr [EDX + 0x4]          ; 0058dd2c
    FXCH ST2                            ; 0058dd2f
    FADD float ptr [EDX + 0x8]          ; 0058dd31
    FXCH                                ; 0058dd34
    FSTP float ptr [EBP + -0x52]        ; 0058dd36
    FXCH                                ; 0058dd39
    FSTP float ptr [EBP + -0x4e]        ; 0058dd3b
    FSTP float ptr [EBP + -0x4a]        ; 0058dd3e
    MOVSD ES:EDI,ESI                    ; 0058dd41
    MOVSD ES:EDI,ESI                    ; 0058dd42
    MOVSD ES:EDI,ESI                    ; 0058dd43
    LEA EAX,[EBX + 0x249c]              ; 0058dd44
    FLD float ptr [EBP + 0xfffffed6]    ; 0058dd4a
    FLD float ptr [EBP + 0xfffffeda]    ; 0058dd50
    FLD float ptr [EBP + 0xfffffede]    ; 0058dd56
    LEA EDI,[EBP + 0x32]                ; 0058dd5c
    LEA ESI,[EBP + 0xfffffeb2]          ; 0058dd5f
    FXCH ST2                            ; 0058dd65
    FADD float ptr [EAX]                ; 0058dd67
    FXCH                                ; 0058dd69
    FADD float ptr [EAX + 0x4]          ; 0058dd6b
    FXCH ST2                            ; 0058dd6e
    FADD float ptr [EAX + 0x8]          ; 0058dd70
    FXCH                                ; 0058dd73
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0058dd75
    FXCH                                ; 0058dd7b
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0058dd7d
    FSTP float ptr [EBP + 0xfffffeba]   ; 0058dd83
    MOVSD ES:EDI,ESI                    ; 0058dd89
    MOVSD ES:EDI,ESI                    ; 0058dd8a
    MOVSD ES:EDI,ESI                    ; 0058dd8b
    MOV dword ptr [EDX + 0x8],0x0       ; 0058dd8c
    MOV ECX,dword ptr [EDX + 0x8]       ; 0058dd93
    MOV dword ptr [EDX + 0x4],ECX       ; 0058dd96
    MOV ECX,dword ptr [EDX + 0x4]       ; 0058dd99
    MOV dword ptr [EDX],ECX             ; 0058dd9c
    MOV dword ptr [EAX + 0x8],0x0       ; 0058dd9e
    ADD ESP,0x8                         ; 0058dda5
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058dda8
    MOV dword ptr [EAX + 0x4],EDX       ; 0058ddab
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058ddae
    MOV dword ptr [EAX],EDX             ; 0058ddb1
    LEA EAX,[EBP + 0x32]                ; 0058ddb3
    PUSH EAX                            ; 0058ddb6
    PUSH EBX                            ; 0058ddb7
    CALL core_charactr.cpp_FUN_0042c230 ; 0058ddb8
        ;   XREF to: 0042c230 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042c230(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0058ddbd
    MOV EAX,[0x02d0c150]                ; 0058ddc0 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0058ddc0
    PUSH EAX                            ; 0058ddc5
    MOV EDX,dword ptr [EBX + 0x2628]    ; 0058ddc6
    PUSH EDX                            ; 0058ddcc
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058ddcd
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0058ddd2
    TEST EAX,EAX                        ; 0058ddd5
    JZ 0x0058ddec                       ; 0058ddd7
        ;   XREF to: 0058ddec (CONDITIONAL_JUMP)  ; LAB_0058ddec
    PUSH dword ptr [EBP + 0x92]         ; 0058ddd9
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058dddf
    PUSH EAX                            ; 0058dde5
    CALL dword ptr [EDX + 0xc]          ; 0058dde6
    ADD ESP,0x8                         ; 0058dde9
    MOV ECX,dword ptr [0x02d0c150]      ; 0058ddec | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0058ddec
    PUSH ECX                            ; 0058ddf2
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 0058ddf3
    PUSH ESI                            ; 0058ddf9
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058ddfa
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0058ddff
    TEST EAX,EAX                        ; 0058de02
    JZ 0x0058de19                       ; 0058de04
        ;   XREF to: 0058de19 (CONDITIONAL_JUMP)  ; LAB_0058de19
    PUSH dword ptr [EBP + 0x92]         ; 0058de06
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058de0c
    PUSH EAX                            ; 0058de12
    CALL dword ptr [EDX + 0xc]          ; 0058de13
    ADD ESP,0x8                         ; 0058de16
    PUSH EBX                            ; 0058de19
        ;   Label: LAB_0058de19
    CALL core_charactr.cpp_FUN_0042cd30 ; 0058de1a
        ;   XREF to: 0042cd30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042cd30(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0058de1f
    LEA EAX,[EBX + 0x158]               ; 0058de22
    PUSH EAX                            ; 0058de28
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130 ; 0058de29
        ;   XREF to: 0054c130 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0054c130(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0058de2e
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058de31
    PUSH EBX                            ; 0058de37
    CALL dword ptr [EAX + 0x10c]        ; 0058de38
    ADD ESP,0x4                         ; 0058de3e
    TEST EAX,EAX                        ; 0058de41
    JNZ 0x0058de54                      ; 0058de43
        ;   XREF to: 0058de54 (CONDITIONAL_JUMP)  ; LAB_0058de54
    PUSH dword ptr [EBP + 0x92]         ; 0058de45
    PUSH EBX                            ; 0058de4b
    CALL core_zombiepriest.cpp_FUN_0058e8d0 ; 0058de4c
        ;   XREF to: 0058e8d0 (UNCONDITIONAL_CALL)  ; undefined core_zombiepriest.cpp_FUN_0058e8d0()
    ADD ESP,0x8                         ; 0058de51
    PUSH dword ptr [EBP + 0x92]         ; 0058de54
        ;   Label: LAB_0058de54
    PUSH EBX                            ; 0058de5a
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350 ; 0058de5b
        ;   XREF to: 00433350 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433350(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058de60
    LEA ESP,[EBP + 0x7a]                ; 0058de63
        ;   Label: LAB_0058de63
    POP EBP                             ; 0058de66
    POP EDI                             ; 0058de67
    POP ESI                             ; 0058de68
    POP EBX                             ; 0058de69
    RET                                 ; 0058de6a
    PUSH 0x1                            ; 0058de6b
        ;   Label: LAB_0058de6b
    PUSH 0x0                            ; 0058de6d
    MOV EAX,dword ptr [EBP + 0x72]      ; 0058de6f
    PUSH EAX                            ; 0058de72
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058de73
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058de78
    PUSH EBX                            ; 0058de7b
    PUSH 0x5d8b75                       ; 0058de7c | = "%s confused while walking to scriptDe..."
    MOV EDX,dword ptr [0x005f1690]      ; 0058de81 | g_CConsolePtr
    PUSH EDX                            ; 0058de87 | g_CConsoleInstance
    CALL engine_console.cpp_FUN_00441ff0 ; 0058de88
        ;   XREF to: 00441ff0 (UNCONDITIONAL_CALL)  ; undefined engine_console.cpp_FUN_00441ff0()
    JMP 0x0058dc4d                      ; 0058de8d
        ;   XREF to: 0058dc4d (UNCONDITIONAL_JUMP)  ; LAB_0058dc4d
    JBE 0x0058dc3d                      ; 0058de92
        ;   XREF to: 0058dc3d (CONDITIONAL_JUMP)  ; LAB_0058dc3d
        ;   Label: LAB_0058de92
    CMP EAX,0x3                         ; 0058de98
    JZ 0x0058de6b                       ; 0058de9b
        ;   XREF to: 0058de6b (CONDITIONAL_JUMP)  ; LAB_0058de6b
    PUSH 0x1                            ; 0058de9d
        ;   Label: LAB_0058de9d
    PUSH 0x0                            ; 0058de9f
    JMP 0x0058dc41                      ; 0058dea1
        ;   XREF to: 0058dc41 (UNCONDITIONAL_JUMP)  ; LAB_0058dc41
    LEA EAX,[EBP + 0xfffffe22]          ; 0058dea6
        ;   Label: caseD_9
    PUSH EAX                            ; 0058deac
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0 ; 0058dead
        ;   XREF to: 0042abb0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042abb0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0058deb2
    PUSH 0x41700000                     ; 0058deb5
    PUSH 0x40e00000                     ; 0058deba
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058debf
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058dec4
    MOV dword ptr [EBP + 0xfffffe56],EBX ; 0058dec7
    MOV dword ptr [EBP + 0xfffffe5a],EBX ; 0058decd
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058ded3
    MOV dword ptr [EBP + 0xfffffe26],EAX ; 0058ded6
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058dedc
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058dee2
    ADD ESP,0x8                         ; 0058dee9
    TEST ECX,ECX                        ; 0058deec
    JZ 0x0058df6a                       ; 0058deee
        ;   XREF to: 0058df6a (CONDITIONAL_JUMP)  ; LAB_0058df6a
    LEA EAX,[EBP + 0xfffffe22]          ; 0058def0
    MOV EDX,dword ptr [0x02d24974]      ; 0058def6 | DAT_02d24974
    PUSH EAX                            ; 0058defc
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058defd
    SUB EAX,EDX                         ; 0058df04
    MOV EDX,EAX                         ; 0058df06
    SHL EDX,0x4                         ; 0058df08
    LEA EAX,[EBX + 0xfd8]               ; 0058df0b
    ADD EAX,EDX                         ; 0058df11
    PUSH 0x3ecccccd                     ; 0058df13
    PUSH EAX                            ; 0058df18
    PUSH 0x2cfd900                      ; 0058df19 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff42]          ; 0058df1e
    LEA EDI,[EBP + -0x6a]               ; 0058df24
    CALL core_xform.cpp_FUN_00583260    ; 0058df27
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0058df2c
    LEA EAX,[EBP + -0x6a]               ; 0058df2f
    LEA ESI,[EBP + 0xffffff42]          ; 0058df32
    PUSH EAX                            ; 0058df38
    MOVSD ES:EDI,ESI                    ; 0058df39
    MOVSD ES:EDI,ESI                    ; 0058df3a
    MOVSD ES:EDI,ESI                    ; 0058df3b
    PUSH EBX                            ; 0058df3c
    LEA ESI,[EBP + 0xfffffebe]          ; 0058df3d
    CALL core_actor.cpp_FUN_00408b80    ; 0058df43
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0058df48
    LEA EAX,[EBP + 0xfffffea6]          ; 0058df4b
    PUSH EAX                            ; 0058df51
    LEA EDI,[EBP + 0xfffffea6]          ; 0058df52
    LEA ESI,[EBP + 0xfffffebe]          ; 0058df58
    PUSH EBX                            ; 0058df5e
    MOVSD ES:EDI,ESI                    ; 0058df5f
    MOVSD ES:EDI,ESI                    ; 0058df60
    MOVSD ES:EDI,ESI                    ; 0058df61
    CALL core_enemy.cpp_FUN_004893f0    ; 0058df62
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0058df67
    PUSH 0x41700000                     ; 0058df6a
        ;   Label: LAB_0058df6a
    PUSH 0x40e00000                     ; 0058df6f
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058df74
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0058df79
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058df7c
    MOV dword ptr [EBP + 0xfffffe26],EAX ; 0058df7f
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058df85
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058df8b
    ADD ESP,0x8                         ; 0058df92
    TEST ESI,ESI                        ; 0058df95
    JZ 0x0058dc68                       ; 0058df97
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe22]          ; 0058df9d
    MOV EDX,dword ptr [0x02d24978]      ; 0058dfa3 | DAT_02d24978
    PUSH EAX                            ; 0058dfa9
    LEA EAX,[EDX*0x4 + 0x0]             ; 0058dfaa
    SUB EAX,EDX                         ; 0058dfb1
    SHL EAX,0x4                         ; 0058dfb3
    LEA EDX,[EBX + 0xfd8]               ; 0058dfb6
    ADD EAX,EDX                         ; 0058dfbc
    PUSH 0x3ecccccd                     ; 0058dfbe
    PUSH EAX                            ; 0058dfc3
    PUSH 0x2cfd900                      ; 0058dfc4 | DAT_02cfd900
    LEA ESI,[EBP + 0xffffff1e]          ; 0058dfc9
    LEA EDI,[EBP + 0xfffffeee]          ; 0058dfcf
    CALL core_xform.cpp_FUN_00583260    ; 0058dfd5
        ;   XREF to: 00583260 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00583260()
    ADD ESP,0x8                         ; 0058dfda
    LEA EAX,[EBP + 0xfffffeee]          ; 0058dfdd
    LEA ESI,[EBP + 0xffffff1e]          ; 0058dfe3
    PUSH EAX                            ; 0058dfe9
    MOVSD ES:EDI,ESI                    ; 0058dfea
    MOVSD ES:EDI,ESI                    ; 0058dfeb
    MOVSD ES:EDI,ESI                    ; 0058dfec
    PUSH EBX                            ; 0058dfed
    LEA ESI,[EBP + 0xe]                 ; 0058dfee
    CALL core_actor.cpp_FUN_00408b80    ; 0058dff1
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0058dff6
    LEA EAX,[EBP + 0xfffffefa]          ; 0058dff9
    PUSH EAX                            ; 0058dfff
    LEA EDI,[EBP + 0xfffffefa]          ; 0058e000
    LEA ESI,[EBP + 0xe]                 ; 0058e006
    PUSH EBX                            ; 0058e009
    MOVSD ES:EDI,ESI                    ; 0058e00a
    MOVSD ES:EDI,ESI                    ; 0058e00b
    MOVSD ES:EDI,ESI                    ; 0058e00c
    CALL core_enemy.cpp_FUN_004893f0    ; 0058e00d
        ;   XREF to: 004893f0 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_004893f0()
    ADD ESP,0x10                        ; 0058e012
    JMP 0x0058dc68                      ; 0058e015
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e01a
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058e020
    PUSH EBX                            ; 0058e026
    CALL dword ptr [EAX + 0x144]        ; 0058e027
    MOV ESI,dword ptr [EBX + 0xcde4]    ; 0058e02d
    ADD ESP,0x8                         ; 0058e033
    TEST ESI,ESI                        ; 0058e036
    JNZ 0x0058e092                      ; 0058e038
        ;   XREF to: 0058e092 (CONDITIONAL_JUMP)  ; LAB_0058e092
    FLD float ptr [EBX + 0xd10c]        ; 0058e03a
        ;   Label: LAB_0058e03a
    FCOMP double ptr [0x005d8ba0]       ; 0058e040 | DAT_005d8ba0
    FNSTSW AX                           ; 0058e046
    SAHF                                ; 0058e048
    JNC 0x0058e18e                      ; 0058e049
        ;   XREF to: 0058e18e (CONDITIONAL_JUMP)  ; LAB_0058e18e
    CMP dword ptr [EBX + 0xd06c],0x0    ; 0058e04f
        ;   Label: LAB_0058e04f
    JZ 0x0058e1a6                       ; 0058e056
        ;   XREF to: 0058e1a6 (CONDITIONAL_JUMP)  ; LAB_0058e1a6
    PUSH 0x40a00000                     ; 0058e05c
    PUSH 0x40800000                     ; 0058e061
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 0058e066
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
        ;   Label: LAB_0058e066
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e06b
    ADD ESP,0x8                         ; 0058e06e
    MOV EAX,dword ptr [EBP + 0x76]      ; 0058e071
    MOV dword ptr [EBX + 0xd110],EAX    ; 0058e074
    PUSH 0x1                            ; 0058e07a
    PUSH 0x0                            ; 0058e07c
    LEA EAX,[EBX + 0x158]               ; 0058e07e
    PUSH EAX                            ; 0058e084
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e085
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e08a
    JMP 0x0058dc68                      ; 0058e08d
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV EDI,dword ptr [0x02d0c150]      ; 0058e092 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0058e092
    PUSH EDI                            ; 0058e098
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058e099
    PUSH EAX                            ; 0058e09f
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058e0a0
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 0058e0a5
    ADD ESP,0x8                         ; 0058e0a7
    MOV EDI,EAX                         ; 0058e0aa
    TEST EAX,EAX                        ; 0058e0ac
    JZ 0x0058e105                       ; 0058e0ae
        ;   XREF to: 0058e105 (CONDITIONAL_JUMP)  ; LAB_0058e105
    MOV EDX,dword ptr [0x00603b28]      ; 0058e0b0 | g_CDemonSetPtr
    PUSH EDX                            ; 0058e0b6 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0058e0b7
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e0bc
    MOV EAX,dword ptr [ESI + 0x568]     ; 0058e0bf
    MOV dword ptr [ESI + 0x304],EBX     ; 0058e0c5
    MOV dword ptr [EBP + 0x56],EAX      ; 0058e0cb
    PUSH ESI                            ; 0058e0ce
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058e0cf
    MOV dword ptr [ESI + 0x568],0x64    ; 0058e0d5
    CALL dword ptr [EAX + 0xe8]         ; 0058e0df
    ADD ESP,0x4                         ; 0058e0e5
    TEST EAX,EAX                        ; 0058e0e8
    JZ 0x0058e0fc                       ; 0058e0ea
        ;   XREF to: 0058e0fc (CONDITIONAL_JUMP)  ; LAB_0058e0fc
    PUSH ESI                            ; 0058e0ec
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058e0ed
    CALL dword ptr [EAX + 0xe4]         ; 0058e0f3
    ADD ESP,0x4                         ; 0058e0f9
    MOV EAX,dword ptr [EBP + 0x56]      ; 0058e0fc
        ;   Label: LAB_0058e0fc
    MOV dword ptr [EDI + 0x568],EAX     ; 0058e0ff
    MOV ECX,dword ptr [0x02d0c150]      ; 0058e105 | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0058e105
    PUSH ECX                            ; 0058e10b
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 0058e10c
    PUSH ESI                            ; 0058e112
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058e113
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    MOV ESI,EAX                         ; 0058e118
    ADD ESP,0x8                         ; 0058e11a
    MOV EDI,EAX                         ; 0058e11d
    TEST EAX,EAX                        ; 0058e11f
    JZ 0x0058e03a                       ; 0058e121
        ;   XREF to: 0058e03a (CONDITIONAL_JUMP)  ; LAB_0058e03a
    MOV EAX,[0x00603b28]                ; 0058e127 | g_CDemonSetPtr
    PUSH EAX                            ; 0058e12c | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0 ; 0058e12d
        ;   XREF to: 0053ebe0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_0053ebe0(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0058e132
    MOV EAX,dword ptr [ESI + 0x568]     ; 0058e135
    MOV dword ptr [ESI + 0x304],EBX     ; 0058e13b
    MOV dword ptr [EBP + 0x4e],EAX      ; 0058e141
    PUSH ESI                            ; 0058e144
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058e145
    MOV dword ptr [ESI + 0x568],0x64    ; 0058e14b
    CALL dword ptr [EAX + 0xe8]         ; 0058e155
    ADD ESP,0x4                         ; 0058e15b
    TEST EAX,EAX                        ; 0058e15e
    JNZ 0x0058e170                      ; 0058e160
        ;   XREF to: 0058e170 (CONDITIONAL_JUMP)  ; LAB_0058e170
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0058e162
    MOV dword ptr [EDI + 0x568],EAX     ; 0058e165
    JMP 0x0058e03a                      ; 0058e16b
        ;   XREF to: 0058e03a (UNCONDITIONAL_JUMP)  ; LAB_0058e03a
    PUSH ESI                            ; 0058e170
        ;   Label: LAB_0058e170
    MOV EAX,dword ptr [ESI + 0x154]     ; 0058e171
    CALL dword ptr [EAX + 0xe4]         ; 0058e177
    ADD ESP,0x4                         ; 0058e17d
    MOV EAX,dword ptr [EBP + 0x4e]      ; 0058e180
    MOV dword ptr [EDI + 0x568],EAX     ; 0058e183
    JMP 0x0058e03a                      ; 0058e189
        ;   XREF to: 0058e03a (UNCONDITIONAL_JUMP)  ; LAB_0058e03a
    FLD float ptr [EBX + 0xd110]        ; 0058e18e
        ;   Label: LAB_0058e18e
    FLDZ                                ; 0058e194
    FCOMPP                              ; 0058e196
    FNSTSW AX                           ; 0058e198
    SAHF                                ; 0058e19a
    JNC 0x0058e04f                      ; 0058e19b
        ;   XREF to: 0058e04f (CONDITIONAL_JUMP)  ; LAB_0058e04f
    JMP 0x0058dc68                      ; 0058e1a1
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x40800000                     ; 0058e1a6
        ;   Label: LAB_0058e1a6
    PUSH 0x40000000                     ; 0058e1ab
    JMP 0x0058e066                      ; 0058e1b0
        ;   XREF to: 0058e066 (UNCONDITIONAL_JUMP)  ; LAB_0058e066
    CMP dword ptr [EBX + 0xcdd0],0x0    ; 0058e1b5
        ;   Label: caseD_5
    JNZ 0x0058dc68                      ; 0058e1bc
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    MOV EAX,dword ptr [EBX + 0xdc]      ; 0058e1c2
    TEST EAX,EAX                        ; 0058e1c8
    JNZ 0x0058dc68                      ; 0058e1ca
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0058e1d0
    MOV EDX,dword ptr [EBP + 0x72]      ; 0058e1d1
    PUSH EDX                            ; 0058e1d4
    LEA ESI,[EBP + 0xffffff06]          ; 0058e1d5
    LEA EDI,[EBP + -0x22]               ; 0058e1db
    CALL core_skeleton.cpp_FUN_0054dbd0 ; 0058e1de
        ;   XREF to: 0054dbd0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_0054dbd0()
    ADD ESP,0x8                         ; 0058e1e3
    LEA EAX,[EBP + -0x22]               ; 0058e1e6
    LEA ESI,[EBP + 0xffffff06]          ; 0058e1e9
    PUSH EAX                            ; 0058e1ef
    MOVSD ES:EDI,ESI                    ; 0058e1f0
    MOVSD ES:EDI,ESI                    ; 0058e1f1
    MOVSD ES:EDI,ESI                    ; 0058e1f2
    PUSH EBX                            ; 0058e1f3
    LEA ESI,[EBP + -0xa]                ; 0058e1f4
    CALL core_actor.cpp_FUN_00408b80    ; 0058e1f7
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    ADD ESP,0x8                         ; 0058e1fc
    PUSH 0x0                            ; 0058e1ff
    LEA EAX,[EBP + -0x46]               ; 0058e201
    LEA EDI,[EBP + -0x46]               ; 0058e204
    PUSH EAX                            ; 0058e207
    MOV ECX,dword ptr [0x005fed24]      ; 0058e208 | g_CGorePtr
    LEA ESI,[EBP + -0xa]                ; 0058e20e
    PUSH ECX                            ; 0058e211
    MOVSD ES:EDI,ESI                    ; 0058e212
    MOVSD ES:EDI,ESI                    ; 0058e213
    MOVSD ES:EDI,ESI                    ; 0058e214
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004cec40 ; 0058e215
        ;   XREF to: 004cec40 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004cec40(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0058e21a
    MOV dword ptr [EBX + 0xcdd0],0x1    ; 0058e21d
    JMP 0x0058dc68                      ; 0058e227
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xd06c],0x0    ; 0058e22c
        ;   Label: caseD_0
    JZ 0x0058e26a                       ; 0058e233
        ;   XREF to: 0058e26a (CONDITIONAL_JUMP)  ; LAB_0058e26a
    MOV EAX,[0x01d5ba14]                ; 0058e235 | DAT_01d5ba14
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 0058e23a
    FLD float ptr [EBX + 0xd10c]        ; 0058e241
    MOV dword ptr [EBX + 0xcde4],EAX    ; 0058e247
    FCOMP double ptr [0x005d8ba0]       ; 0058e24d | DAT_005d8ba0
    FNSTSW AX                           ; 0058e253
    SAHF                                ; 0058e255
    JBE 0x0058dc68                      ; 0058e256
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 0058e25c
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_0058f4a0 ; 0058e25d
        ;   XREF to: 0058f4a0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_0058f4a0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0058e262
    JMP 0x0058dc68                      ; 0058e265
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e26a
        ;   Label: LAB_0058e26a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058e270
    PUSH EBX                            ; 0058e276
    CALL dword ptr [EAX + 0x144]        ; 0058e277
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058e27d
    ADD ESP,0x8                         ; 0058e283
    TEST ECX,ECX                        ; 0058e286
    JZ 0x0058e3bb                       ; 0058e288
        ;   XREF to: 0058e3bb (CONDITIONAL_JUMP)  ; LAB_0058e3bb
    MOV ESI,dword ptr [EBX + 0xd068]    ; 0058e28e
    TEST ESI,ESI                        ; 0058e294
    JZ 0x0058e305                       ; 0058e296
        ;   XREF to: 0058e305 (CONDITIONAL_JUMP)  ; LAB_0058e305
    CMP dword ptr [EBX + 0xd064],0x0    ; 0058e298
    JNZ 0x0058e406                      ; 0058e29f
        ;   XREF to: 0058e406 (CONDITIONAL_JUMP)  ; LAB_0058e406
    LEA EDX,[EBX + 0x20]                ; 0058e2a5
    LEA EDI,[EBP + 0xffffff4e]          ; 0058e2a8
    FLD float ptr [EDX]                 ; 0058e2ae
    FLD float ptr [EDX + 0x4]           ; 0058e2b0
    FLD float ptr [EDX + 0x8]           ; 0058e2b3
    FXCH ST2                            ; 0058e2b6
    FSUB float ptr [ESI + 0x20]         ; 0058e2b8
    FXCH                                ; 0058e2bb
    FSUB float ptr [ESI + 0x24]         ; 0058e2bd
    FXCH ST2                            ; 0058e2c0
    FSUB float ptr [ESI + 0x28]         ; 0058e2c2
    FXCH                                ; 0058e2c5
    FSTP float ptr [EBP + -0x3a]        ; 0058e2c7
    FXCH                                ; 0058e2ca
    FSTP float ptr [EBP + -0x36]        ; 0058e2cc
    LEA ESI,[EBP + -0x3a]               ; 0058e2cf
    FSTP float ptr [EBP + -0x32]        ; 0058e2d2
    MOVSD ES:EDI,ESI                    ; 0058e2d5
    MOVSD ES:EDI,ESI                    ; 0058e2d6
    MOVSD ES:EDI,ESI                    ; 0058e2d7
    FLD float ptr [EBP + 0xffffff52]    ; 0058e2d8
    FMUL ST0                            ; 0058e2de
    FLD float ptr [EBP + 0xffffff4e]    ; 0058e2e0
    FMUL ST0                            ; 0058e2e6
    FADDP                               ; 0058e2e8
    FLD float ptr [EBP + 0xffffff56]    ; 0058e2ea
    FMUL ST0                            ; 0058e2f0
    FADDP                               ; 0058e2f2
    FSQRT                               ; 0058e2f4
    FCOMP double ptr [0x005d8bb0]       ; 0058e2f6 | DAT_005d8bb0
    FNSTSW AX                           ; 0058e2fc
    SAHF                                ; 0058e2fe
    JA 0x0058e3e7                       ; 0058e2ff
        ;   XREF to: 0058e3e7 (CONDITIONAL_JUMP)  ; LAB_0058e3e7
    LEA EDI,[EBP + 0xfffffeca]          ; 0058e305
        ;   Label: LAB_0058e305
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058e30b
    LEA ESI,[EBP + -0x2e]               ; 0058e311
    LEA EDX,[EBX + 0x20]                ; 0058e314
    FLD float ptr [EAX + 0x20]          ; 0058e317
    FLD float ptr [EAX + 0x24]          ; 0058e31a
    FLD float ptr [EAX + 0x28]          ; 0058e31d
    FXCH ST2                            ; 0058e320
    FSUB float ptr [EDX]                ; 0058e322
    FXCH                                ; 0058e324
    FSUB float ptr [EDX + 0x4]          ; 0058e326
    FXCH ST2                            ; 0058e329
    FSUB float ptr [EDX + 0x8]          ; 0058e32b
    FXCH                                ; 0058e32e
    FSTP float ptr [EBP + -0x2e]        ; 0058e330
    FXCH                                ; 0058e333
    FSTP float ptr [EBP + -0x2a]        ; 0058e335
    FSTP float ptr [EBP + -0x26]        ; 0058e338
    MOVSD ES:EDI,ESI                    ; 0058e33b
    MOVSD ES:EDI,ESI                    ; 0058e33c
    MOVSD ES:EDI,ESI                    ; 0058e33d
    FLD float ptr [EBP + 0xfffffece]    ; 0058e33e
    FMUL ST0                            ; 0058e344
    FLD float ptr [EBP + 0xfffffeca]    ; 0058e346
    FMUL ST0                            ; 0058e34c
    FADDP                               ; 0058e34e
    FLD float ptr [EBP + 0xfffffed2]    ; 0058e350
    FMUL ST0                            ; 0058e356
    FADDP                               ; 0058e358
    FSQRT                               ; 0058e35a
    FLD float ptr [0x005e7048]          ; 0058e35c | DAT_005e7048
    FLD1                                ; 0058e362
    FADDP                               ; 0058e364
    FXCH                                ; 0058e366
    FSTP float ptr [EBP + 0x6e]         ; 0058e368
    LEA EAX,[EBX + 0x158]               ; 0058e36b
    FLD float ptr [EBP + 0x6e]          ; 0058e371
    MOV dword ptr [EBP + 0x66],EAX      ; 0058e374
    FCOMPP                              ; 0058e377
    FNSTSW AX                           ; 0058e379
    SAHF                                ; 0058e37b
    JC 0x0058e415                       ; 0058e37c
        ;   XREF to: 0058e415 (CONDITIONAL_JUMP)  ; LAB_0058e415
    FLD float ptr [EBP + 0x6e]          ; 0058e382
    FCOMP float ptr [EBX + 0xcddc]      ; 0058e385
    FNSTSW AX                           ; 0058e38b
    SAHF                                ; 0058e38d
    JNC 0x0058dc68                      ; 0058e38e
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBP + 0x6e]          ; 0058e394
    FCOMP float ptr [0x005e7058]        ; 0058e397 | DAT_005e7058
    FNSTSW AX                           ; 0058e39d
    SAHF                                ; 0058e39f
    JNC 0x0058e499                      ; 0058e3a0
        ;   XREF to: 0058e499 (CONDITIONAL_JUMP)  ; LAB_0058e499
    PUSH 0x1                            ; 0058e3a6
    PUSH 0x1                            ; 0058e3a8
    MOV EDX,dword ptr [EBP + 0x66]      ; 0058e3aa
    PUSH EDX                            ; 0058e3ad
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e3ae
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e3b3
    JMP 0x0058dc68                      ; 0058e3b6
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e3bb
        ;   Label: LAB_0058e3bb
    PUSH EBX                            ; 0058e3c1
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0058e3c2
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058e3c7
    TEST EAX,EAX                        ; 0058e3ca
    JZ 0x0058dc68                       ; 0058e3cc
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e3d2
    PUSH 0x1                            ; 0058e3d4
    MOV EDI,dword ptr [EBP + 0x72]      ; 0058e3d6
    PUSH EDI                            ; 0058e3d9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e3da
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e3df
    JMP 0x0058dc68                      ; 0058e3e2
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e3e7
        ;   Label: LAB_0058e3e7
    PUSH 0x8                            ; 0058e3e9
    MOV ESI,dword ptr [EBP + 0x72]      ; 0058e3eb
    PUSH ESI                            ; 0058e3ee
    MOV dword ptr [EBX + 0xd064],0x1    ; 0058e3ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e3f9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e3fe
    JMP 0x0058dc68                      ; 0058e401
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EBX + 0xd064],0x0    ; 0058e406
        ;   Label: LAB_0058e406
    JMP 0x0058e305                      ; 0058e410
        ;   XREF to: 0058e305 (UNCONDITIONAL_JUMP)  ; LAB_0058e305
    LEA EAX,[EBP + 0xfffffeca]          ; 0058e415
        ;   Label: LAB_0058e415
    PUSH EAX                            ; 0058e41b
    LEA ESI,[EBP + 0xffffff36]          ; 0058e41c
    LEA EDI,[EBP + 0xffffff2a]          ; 0058e422
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0058e428
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0xffffff36]          ; 0058e42d
    MOVSD ES:EDI,ESI                    ; 0058e433
    MOVSD ES:EDI,ESI                    ; 0058e434
    MOVSD ES:EDI,ESI                    ; 0058e435
    ADD ESP,0x4                         ; 0058e436
    FLD float ptr [EBP + 0xffffff2e]    ; 0058e439
    FSUB float ptr [EBX + 0x34]         ; 0058e43f
    SUB ESP,0x4                         ; 0058e442
    FSTP float ptr [ESP]                ; 0058e445
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0058e448
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e44d
    FLD float ptr [EBP + 0x76]          ; 0058e450
    FABS                                ; 0058e453
    ADD ESP,0x4                         ; 0058e455
    FCOMP double ptr [0x005d8ba8]       ; 0058e458 | DAT_005d8ba8
    FNSTSW AX                           ; 0058e45e
    SAHF                                ; 0058e460
    JNC 0x0058dc68                      ; 0058e461
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xcde0]        ; 0058e467
    FLDZ                                ; 0058e46d
    FCOMPP                              ; 0058e46f
    FNSTSW AX                           ; 0058e471
    SAHF                                ; 0058e473
    JC 0x0058dc68                       ; 0058e474
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e47a
    PUSH 0x9                            ; 0058e47c
    MOV ECX,dword ptr [EBP + 0x66]      ; 0058e47e
    PUSH ECX                            ; 0058e481
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e482
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e487
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 0058e48a
    JMP 0x0058dc68                      ; 0058e494
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e499
        ;   Label: LAB_0058e499
    PUSH 0x8                            ; 0058e49b
    MOV EAX,dword ptr [EBP + 0x66]      ; 0058e49d
    PUSH EAX                            ; 0058e4a0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e4a1
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e4a6
    JMP 0x0058dc68                      ; 0058e4a9
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e4ae
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058e4b4
    PUSH EBX                            ; 0058e4ba
    CALL dword ptr [EAX + 0x144]        ; 0058e4bb
    ADD ESP,0x8                         ; 0058e4c1
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058e4c4
    LEA ESI,[EBX + 0x158]               ; 0058e4ca
    TEST ECX,ECX                        ; 0058e4d0
    JZ 0x0058e572                       ; 0058e4d2
        ;   XREF to: 0058e572 (CONDITIONAL_JUMP)  ; LAB_0058e572
    CMP dword ptr [EBX + 0xd064],0x0    ; 0058e4d8
    JZ 0x0058e5b9                       ; 0058e4df
        ;   XREF to: 0058e5b9 (CONDITIONAL_JUMP)  ; LAB_0058e5b9
    PUSH 0x3e32b8c2                     ; 0058e4e5
    LEA EAX,[EBX + 0x249c]              ; 0058e4ea
    PUSH 0x3f000000                     ; 0058e4f0
    MOV dword ptr [EAX + 0x8],0x0       ; 0058e4f5
    XOR EDI,EDI                         ; 0058e4fc
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058e4fe
    MOV dword ptr [EAX + 0x4],EDX       ; 0058e501
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058e504
    MOV dword ptr [EAX],EDX             ; 0058e507
    MOV EAX,[0x005e7048]                ; 0058e509 | DAT_005e7048
    MOV dword ptr [EBP + 0xfffffe9a],EDI ; 0058e50e
    MOV dword ptr [EBP + 0xfffffea2],EAX ; 0058e514
    LEA EAX,[EBP + 0xfffffe9a]          ; 0058e51a
    MOV dword ptr [EBP + 0xfffffe9e],EDI ; 0058e520
    PUSH EAX                            ; 0058e526
    MOV EAX,dword ptr [EBX + 0xd068]    ; 0058e527
    PUSH EAX                            ; 0058e52d
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058e52e
    CALL dword ptr [EDX + 0xc4]         ; 0058e534
    ADD ESP,0x4                         ; 0058e53a
    PUSH EAX                            ; 0058e53d
    MOV EAX,dword ptr [EBX + 0xd068]    ; 0058e53e
    ADD EAX,0x20                        ; 0058e544
    PUSH EAX                            ; 0058e547
    PUSH EBX                            ; 0058e548
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0058e549
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0058e54e
    TEST EAX,EAX                        ; 0058e551
    JG 0x0058e5a8                       ; 0058e553
        ;   XREF to: 0058e5a8 (CONDITIONAL_JUMP)  ; LAB_0058e5a8
    JGE 0x0058dc68                      ; 0058e555
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e55b
    PUSH EDI                            ; 0058e55d
    PUSH ESI                            ; 0058e55e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e55f
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e564
    MOV dword ptr [EBX + 0xd068],EDI    ; 0058e567
    JMP 0x0058dc68                      ; 0058e56d
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e572
        ;   Label: LAB_0058e572
    PUSH EBX                            ; 0058e578
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0 ; 0058e579
        ;   XREF to: 00489ff0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00489ff0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0058e57e
    TEST EAX,EAX                        ; 0058e581
    JZ 0x0058e597                       ; 0058e583
        ;   XREF to: 0058e597 (CONDITIONAL_JUMP)  ; LAB_0058e597
    PUSH 0x1                            ; 0058e585
    PUSH 0x1                            ; 0058e587
    PUSH ESI                            ; 0058e589
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e58a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e58f
    JMP 0x0058dc68                      ; 0058e592
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e597
        ;   Label: LAB_0058e597
    PUSH EAX                            ; 0058e599
    PUSH ESI                            ; 0058e59a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e59b
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e5a0
    JMP 0x0058dc68                      ; 0058e5a3
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e5a8
        ;   Label: LAB_0058e5a8
    PUSH EDI                            ; 0058e5aa
    PUSH ESI                            ; 0058e5ab
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e5ac
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e5b1
    JMP 0x0058dc68                      ; 0058e5b4
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0058e5b9
        ;   Label: LAB_0058e5b9
    PUSH EBX                            ; 0058e5bf
    CALL unkafter_zombiepr.cpp_FUN_0058efb0 ; 0058e5c0
        ;   XREF to: 0058efb0 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombiepr.cpp_FUN_0058efb0()
    ADD ESP,0x8                         ; 0058e5c5
    TEST EAX,EAX                        ; 0058e5c8
    JNZ 0x0058dc68                      ; 0058e5ca
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [0x005e7048]          ; 0058e5d0 | DAT_005e7048
    FLD1                                ; 0058e5d6
    FADDP                               ; 0058e5d8
    MOV EAX,dword ptr [EBX + 0x2628]    ; 0058e5da
    FSTP float ptr [EBP + 0x5a]         ; 0058e5e0
    TEST EAX,EAX                        ; 0058e5e3
    JZ 0x0058e7dd                       ; 0058e5e5
        ;   XREF to: 0058e7dd (CONDITIONAL_JUMP)  ; LAB_0058e7dd
    MOV EAX,[0x005e704c]                ; 0058e5eb | DAT_005e704c
        ;   Label: LAB_0058e5eb
    MOV dword ptr [EBP + 0x5a],EAX      ; 0058e5f0
    PUSH 0x3e32b8c2                     ; 0058e5f3
        ;   Label: LAB_0058e5f3
    LEA EAX,[EBX + 0x249c]              ; 0058e5f8
    PUSH 0x3f000000                     ; 0058e5fe
    MOV dword ptr [EAX + 0x8],0x0       ; 0058e603
    XOR ECX,ECX                         ; 0058e60a
    MOV EDX,dword ptr [EAX + 0x8]       ; 0058e60c
    MOV dword ptr [EAX + 0x4],EDX       ; 0058e60f
    MOV EDX,dword ptr [EAX + 0x4]       ; 0058e612
    MOV dword ptr [EAX],EDX             ; 0058e615
    MOV EAX,[0x005e7048]                ; 0058e617 | DAT_005e7048
    MOV dword ptr [EBP + -0x5e],ECX     ; 0058e61c
    MOV dword ptr [EBP + 0x5e],EAX      ; 0058e61f
    MOV dword ptr [EBP + -0x56],EAX     ; 0058e622
    LEA EAX,[EBP + -0x5e]               ; 0058e625
    MOV dword ptr [EBP + -0x5a],ECX     ; 0058e628
    PUSH EAX                            ; 0058e62b
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058e62c
    PUSH EAX                            ; 0058e632
    MOV EDX,dword ptr [EAX + 0x154]     ; 0058e633
    CALL dword ptr [EDX + 0xc4]         ; 0058e639
    ADD ESP,0x4                         ; 0058e63f
    PUSH EAX                            ; 0058e642
    MOV EAX,dword ptr [EBX + 0xcde4]    ; 0058e643
    ADD EAX,0x20                        ; 0058e649
    PUSH EAX                            ; 0058e64c
    PUSH EBX                            ; 0058e64d
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0 ; 0058e64e
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0058e653
    TEST EAX,EAX                        ; 0058e656
    JL 0x0058dc68                       ; 0058e658
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + 0x3e]                ; 0058e65e
    LEA EDX,[EBX + 0x20]                ; 0058e661
    LEA ESI,[EBP + 0x2]                 ; 0058e664
    MOV ECX,dword ptr [EBX + 0xcde4]    ; 0058e667
    FLD float ptr [EDX]                 ; 0058e66d
    FLD float ptr [EDX + 0x4]           ; 0058e66f
    FLD float ptr [EDX + 0x8]           ; 0058e672
    FXCH ST2                            ; 0058e675
    FSUB float ptr [ECX + 0x20]         ; 0058e677
    FXCH                                ; 0058e67a
    FSUB float ptr [ECX + 0x24]         ; 0058e67c
    FXCH ST2                            ; 0058e67f
    FSUB float ptr [ECX + 0x28]         ; 0058e681
    FXCH                                ; 0058e684
    FSTP float ptr [EBP + 0x2]          ; 0058e686
    FXCH                                ; 0058e689
    FSTP float ptr [EBP + 0x6]          ; 0058e68b
    FSTP float ptr [EBP + 0xa]          ; 0058e68e
    MOVSD ES:EDI,ESI                    ; 0058e691
    MOVSD ES:EDI,ESI                    ; 0058e692
    MOVSD ES:EDI,ESI                    ; 0058e693
    FLD float ptr [EBP + 0x3e]          ; 0058e694
    FMUL ST0                            ; 0058e697
    FLD float ptr [EBP + 0x46]          ; 0058e699
    FMUL ST0                            ; 0058e69c
    FADDP                               ; 0058e69e
    FSQRT                               ; 0058e6a0
    XOR EDI,EDI                         ; 0058e6a2
    ADD ECX,0x20                        ; 0058e6a4
    MOV dword ptr [EBP + 0x42],EDI      ; 0058e6a7
    FSTP float ptr [EBP + 0x6a]         ; 0058e6aa
    MOV EAX,dword ptr [EBP + 0x6a]      ; 0058e6ad
    FLD float ptr [EBP + 0x6a]          ; 0058e6b0
    MOV dword ptr [EBP + 0x52],EAX      ; 0058e6b3
    FCOMP float ptr [EBP + 0x5a]        ; 0058e6b6
    FNSTSW AX                           ; 0058e6b9
    SAHF                                ; 0058e6bb
    JA 0x0058e7b3                       ; 0058e6bc
        ;   XREF to: 0058e7b3 (CONDITIONAL_JUMP)  ; LAB_0058e7b3
    FLD float ptr [EBX + 0xcde0]        ; 0058e6c2
    FLDZ                                ; 0058e6c8
    FCOMPP                              ; 0058e6ca
    FNSTSW AX                           ; 0058e6cc
    SAHF                                ; 0058e6ce
    JC 0x0058e7b3                       ; 0058e6cf
        ;   XREF to: 0058e7b3 (CONDITIONAL_JUMP)  ; LAB_0058e7b3
    LEA EAX,[EBX + 0x158]               ; 0058e6d5
    MOV dword ptr [EBP + 0x62],EAX      ; 0058e6db
    CMP dword ptr [EBX + 0x25b0],0x0    ; 0058e6de
    JZ 0x0058e81a                       ; 0058e6e5
        ;   XREF to: 0058e81a (CONDITIONAL_JUMP)  ; LAB_0058e81a
    FLD float ptr [EBP + 0x5e]          ; 0058e6eb
    FLD1                                ; 0058e6ee
    FADDP                               ; 0058e6f0
    FLD float ptr [EBP + 0x6a]          ; 0058e6f2
    FCOMPP                              ; 0058e6f5
    FNSTSW AX                           ; 0058e6f7
    SAHF                                ; 0058e6f9
    JNC 0x0058e7ef                      ; 0058e6fa
        ;   XREF to: 0058e7ef (CONDITIONAL_JUMP)  ; LAB_0058e7ef
    FLD float ptr [ECX]                 ; 0058e700
    FLD float ptr [ECX + 0x4]           ; 0058e702
    FLD float ptr [ECX + 0x8]           ; 0058e705
    LEA EDI,[EBP + 0xfffffee2]          ; 0058e708
    LEA ESI,[EBP + 0xffffff12]          ; 0058e70e
    LEA EAX,[EBP + 0xfffffee2]          ; 0058e714
    FXCH ST2                            ; 0058e71a
    FSUB float ptr [EDX]                ; 0058e71c
    FXCH                                ; 0058e71e
    FSUB float ptr [EDX + 0x4]          ; 0058e720
    FXCH ST2                            ; 0058e723
    FSUB float ptr [EDX + 0x8]          ; 0058e725
    FXCH                                ; 0058e728
    FSTP float ptr [EBP + 0xffffff12]   ; 0058e72a
    FXCH                                ; 0058e730
    FSTP float ptr [EBP + 0xffffff16]   ; 0058e732
    FSTP float ptr [EBP + 0xffffff1a]   ; 0058e738
    MOVSD ES:EDI,ESI                    ; 0058e73e
    MOVSD ES:EDI,ESI                    ; 0058e73f
    MOVSD ES:EDI,ESI                    ; 0058e740
    PUSH EAX                            ; 0058e741
    LEA ESI,[EBP + 0x26]                ; 0058e742
    LEA EDI,[EBP + 0xffffff7e]          ; 0058e745
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0058e74b
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + 0x26]                ; 0058e750
    MOVSD ES:EDI,ESI                    ; 0058e753
    MOVSD ES:EDI,ESI                    ; 0058e754
    MOVSD ES:EDI,ESI                    ; 0058e755
    ADD ESP,0x4                         ; 0058e756
    FLD float ptr [EBP + -0x7e]         ; 0058e759
    FSUB float ptr [EBX + 0x34]         ; 0058e75c
    SUB ESP,0x4                         ; 0058e75f
    FSTP float ptr [ESP]                ; 0058e762
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0058e765
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e76a
    FLD float ptr [EBP + 0x76]          ; 0058e76d
    FABS                                ; 0058e770
    ADD ESP,0x4                         ; 0058e772
    FCOMP double ptr [0x005d8ba8]       ; 0058e775 | DAT_005d8ba8
    FNSTSW AX                           ; 0058e77b
    SAHF                                ; 0058e77d
    JNC 0x0058e7a9                      ; 0058e77e
        ;   XREF to: 0058e7a9 (CONDITIONAL_JUMP)  ; LAB_0058e7a9
    FLD float ptr [EBX + 0xcde0]        ; 0058e780
    FLDZ                                ; 0058e786
    FCOMPP                              ; 0058e788
    FNSTSW AX                           ; 0058e78a
    SAHF                                ; 0058e78c
    JC 0x0058e7a9                       ; 0058e78d
        ;   XREF to: 0058e7a9 (CONDITIONAL_JUMP)  ; LAB_0058e7a9
    PUSH 0x1                            ; 0058e78f
    PUSH 0x9                            ; 0058e791
    MOV ECX,dword ptr [EBP + 0x62]      ; 0058e793
    PUSH ECX                            ; 0058e796
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e797
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e79c
    MOV dword ptr [EBX + 0xcde0],0x40000000 ; 0058e79f
    MOV dword ptr [EBX + 0xcde0],0x3f800000 ; 0058e7a9
        ;   Label: LAB_0058e7a9
    FLD float ptr [EBP + 0x52]          ; 0058e7b3
        ;   Label: LAB_0058e7b3
    FCOMP float ptr [EBX + 0xcddc]      ; 0058e7b6
    FNSTSW AX                           ; 0058e7bc
    SAHF                                ; 0058e7be
    JBE 0x0058dc68                      ; 0058e7bf
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0058e7c5
    PUSH 0x0                            ; 0058e7c7
    LEA EAX,[EBX + 0x158]               ; 0058e7c9
    PUSH EAX                            ; 0058e7cf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e7d0
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e7d5
    JMP 0x0058dc68                      ; 0058e7d8
        ;   XREF to: 0058dc68 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0x25b0],0x0    ; 0058e7dd
        ;   Label: LAB_0058e7dd
    JNZ 0x0058e5eb                      ; 0058e7e4
        ;   XREF to: 0058e5eb (CONDITIONAL_JUMP)  ; LAB_0058e5eb
    JMP 0x0058e5f3                      ; 0058e7ea
        ;   XREF to: 0058e5f3 (UNCONDITIONAL_JUMP)  ; LAB_0058e5f3
    FLD float ptr [EBX + 0xd10c]        ; 0058e7ef
        ;   Label: LAB_0058e7ef
    FCOMP double ptr [0x005d8ba0]       ; 0058e7f5 | DAT_005d8ba0
    FNSTSW AX                           ; 0058e7fb
    SAHF                                ; 0058e7fd
    JBE 0x0058e7a9                      ; 0058e7fe
        ;   XREF to: 0058e7a9 (CONDITIONAL_JUMP)  ; LAB_0058e7a9
    FLD float ptr [EBX + 0xd110]        ; 0058e800
    FLDZ                                ; 0058e806
    FCOMPP                              ; 0058e808
    FNSTSW AX                           ; 0058e80a
    SAHF                                ; 0058e80c
    JC 0x0058e7a9                       ; 0058e80d
        ;   XREF to: 0058e7a9 (CONDITIONAL_JUMP)  ; LAB_0058e7a9
    PUSH EBX                            ; 0058e80f
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_0058f4a0 ; 0058e810
        ;   XREF to: 0058f4a0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_0058f4a0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0058e815
    JMP 0x0058e7a9                      ; 0058e818
        ;   XREF to: 0058e7a9 (UNCONDITIONAL_JUMP)  ; LAB_0058e7a9
    FLD float ptr [ECX]                 ; 0058e81a
        ;   Label: LAB_0058e81a
    FLD float ptr [ECX + 0x4]           ; 0058e81c
    FLD float ptr [ECX + 0x8]           ; 0058e81f
    LEA EDI,[EBP + 0xffffff66]          ; 0058e822
    LEA ESI,[EBP + 0xffffff5a]          ; 0058e828
    LEA EAX,[EBP + 0xffffff66]          ; 0058e82e
    FXCH ST2                            ; 0058e834
    FSUB float ptr [EDX]                ; 0058e836
    FXCH                                ; 0058e838
    FSUB float ptr [EDX + 0x4]          ; 0058e83a
    FXCH ST2                            ; 0058e83d
    FSUB float ptr [EDX + 0x8]          ; 0058e83f
    FXCH                                ; 0058e842
    FSTP float ptr [EBP + 0xffffff5a]   ; 0058e844
    FXCH                                ; 0058e84a
    FSTP float ptr [EBP + 0xffffff5e]   ; 0058e84c
    FSTP float ptr [EBP + 0xffffff62]   ; 0058e852
    MOVSD ES:EDI,ESI                    ; 0058e858
    MOVSD ES:EDI,ESI                    ; 0058e859
    MOVSD ES:EDI,ESI                    ; 0058e85a
    PUSH EAX                            ; 0058e85b
    LEA ESI,[EBP + -0x76]               ; 0058e85c
    LEA EDI,[EBP + 0xffffff72]          ; 0058e85f
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250 ; 0058e865
        ;   XREF to: 00576250 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_00576250()
    LEA ESI,[EBP + -0x76]               ; 0058e86a
    MOVSD ES:EDI,ESI                    ; 0058e86d
    MOVSD ES:EDI,ESI                    ; 0058e86e
    MOVSD ES:EDI,ESI                    ; 0058e86f
    ADD ESP,0x4                         ; 0058e870
    FLD float ptr [EBP + 0xffffff76]    ; 0058e873
    FSUB float ptr [EBX + 0x34]         ; 0058e879
    SUB ESP,0x4                         ; 0058e87c
    FSTP float ptr [ESP]                ; 0058e87f
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0 ; 0058e882
        ;   XREF to: 0040cfa0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_normalizeAngleToPi_FUN_0040cfa0()
    MOV dword ptr [EBP + 0x76],EAX      ; 0058e887
    FLD float ptr [EBP + 0x76]          ; 0058e88a
    FABS                                ; 0058e88d
    ADD ESP,0x4                         ; 0058e88f
    FCOMP double ptr [0x005d8ba8]       ; 0058e892 | DAT_005d8ba8
    FNSTSW AX                           ; 0058e898
    SAHF                                ; 0058e89a
    JNC 0x0058e7a9                      ; 0058e89b
        ;   XREF to: 0058e7a9 (CONDITIONAL_JUMP)  ; LAB_0058e7a9
    PUSH 0x1                            ; 0058e8a1
    PUSH 0x9                            ; 0058e8a3
    MOV EDX,dword ptr [EBP + 0x62]      ; 0058e8a5
    PUSH EDX                            ; 0058e8a8
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058e8a9
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058e8ae
    JMP 0x0058e7a9                      ; 0058e8b1
        ;   XREF to: 0058e7a9 (UNCONDITIONAL_JUMP)  ; LAB_0058e7a9
    CMP ESI,0x9                         ; 0058e8b6
        ;   Label: LAB_0058e8b6
    JA 0x0058dc68                       ; 0058e8b9
        ;   XREF to: 0058dc68 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [ESI*0x4 + 0x58d938]  ; 0058e8bf | caseD_0 | caseD_8 | caseD_6
        ;   Label: switchD

