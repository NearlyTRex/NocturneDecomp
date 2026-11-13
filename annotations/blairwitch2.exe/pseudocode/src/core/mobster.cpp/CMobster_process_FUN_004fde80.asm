; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_process_FUN_004fde80(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_004fde50 = 004fe7ef
;   TerminatedCString s_mob_scream_wav_005ded75
;   TerminatedCString s_s_confused_while_walking_005ded85
;   undefined4 DAT_005dedb5
;   undefined4 DAT_005dedbd
;   undefined4 DAT_005dedc5
;   undefined4 DAT_005fa228
;   undefined4 DAT_005fa22c
;   undefined4 DAT_005fa238
;   CConsole* g_CConsolePtr = 007c158c
;   undefined4 DAT_006141f0
;   CGore* g_CGorePtr = 01cb8284
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01cedef4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10
;   core_charactr.cpp_CCharacter_preProcess_FUN_00424470
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_processWalking_FUN_004287f0
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fde80
        ;   Label: core_mobster.cpp_CMobster_process_FUN_004fde80
    PUSH ESI                            ; 004fde81
    PUSH EDI                            ; 004fde82
    PUSH EBP                            ; 004fde83
    MOV EBP,ESP                         ; 004fde84
    SUB ESP,0x258                       ; 004fde86
    SUB EBP,0x7a                        ; 004fde8c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 004fde8f
    PUSH dword ptr [EBP + 0x92]         ; 004fde95
    PUSH EBX                            ; 004fde9b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 004fde9c
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fdea1
    TEST EAX,EAX                        ; 004fdea4
    JNZ 0x004fded3                      ; 004fdea6
        ;   XREF to: 004fded3 (CONDITIONAL_JUMP)  ; LAB_004fded3
    CMP dword ptr [EBX + 0x10b1c],0x0   ; 004fdea8
    JNZ 0x004fdeb9                      ; 004fdeaf
        ;   XREF to: 004fdeb9 (CONDITIONAL_JUMP)  ; LAB_004fdeb9
    LEA ESP,[EBP + 0x7a]                ; 004fdeb1
        ;   Label: LAB_004fdeb1
    POP EBP                             ; 004fdeb4
    POP EDI                             ; 004fdeb5
    POP ESI                             ; 004fdeb6
    POP EBX                             ; 004fdeb7
    RET                                 ; 004fdeb8
    PUSH EBX                            ; 004fdeb9
        ;   Label: LAB_004fdeb9
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60 ; 004fdeba
        ;   XREF to: 004fdc60 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fdebf
    PUSH dword ptr [EBP + 0x92]         ; 004fdec2
    PUSH EBX                            ; 004fdec8
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30 ; 004fdec9
        ;   XREF to: 00428e30 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_00428e30(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fdece
    JMP 0x004fdeb1                      ; 004fded1
        ;   XREF to: 004fdeb1 (UNCONDITIONAL_JUMP)  ; LAB_004fdeb1
    MOV EAX,dword ptr [EBX + 0x10bc4]   ; 004fded3
        ;   Label: LAB_004fded3
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 004fded9
    JZ 0x004fe04b                       ; 004fdee1
        ;   XREF to: 004fe04b (CONDITIONAL_JUMP)  ; LAB_004fe04b
    CMP dword ptr [EBX + 0x10224],0x0   ; 004fdee7
        ;   Label: LAB_004fdee7
    JZ 0x004fdefa                       ; 004fdeee
        ;   XREF to: 004fdefa (CONDITIONAL_JUMP)  ; LAB_004fdefa
    MOV dword ptr [EBX + 0x10228],0x0   ; 004fdef0
    CMP dword ptr [EBX + 0x3564],0x0    ; 004fdefa
        ;   Label: LAB_004fdefa
    JLE 0x004fdf65                      ; 004fdf01
        ;   XREF to: 004fdf65 (CONDITIONAL_JUMP)  ; LAB_004fdf65
    PUSH 0x0                            ; 004fdf03
    PUSH 0x1                            ; 004fdf05
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fdf07
    PUSH EBX                            ; 004fdf0d
    CALL dword ptr [EAX + 0x130]        ; 004fdf0e
    ADD ESP,0xc                         ; 004fdf14
    PUSH 0x0                            ; 004fdf17
    PUSH 0x0                            ; 004fdf19
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fdf1b
    PUSH EBX                            ; 004fdf21
    CALL dword ptr [EAX + 0x130]        ; 004fdf22
    ADD ESP,0xc                         ; 004fdf28
    MOV EAX,dword ptr [EBX + 0x10b90]   ; 004fdf2b
    PUSH EAX                            ; 004fdf31
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 004fdf32
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 004fdf37
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fdf3a
    PUSH EBX                            ; 004fdf40
    CALL dword ptr [EAX + 0x114]        ; 004fdf41
    ADD ESP,0x4                         ; 004fdf47
    TEST EAX,EAX                        ; 004fdf4a
    JNZ 0x004fdf65                      ; 004fdf4c
        ;   XREF to: 004fdf65 (CONDITIONAL_JUMP)  ; LAB_004fdf65
    MOV EDX,dword ptr [EBX + 0x10b98]   ; 004fdf4e
    PUSH EDX                            ; 004fdf54
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 004fdf55
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004fdf5a
    TEST EAX,EAX                        ; 004fdf5d
    JZ 0x004fe08d                       ; 004fdf5f
        ;   XREF to: 004fe08d (CONDITIONAL_JUMP)  ; LAB_004fe08d
    FLD float ptr [EBX + 0x10bcc]       ; 004fdf65
        ;   Label: LAB_004fdf65
    FSUB float ptr [EBP + 0x92]         ; 004fdf6b
    FST float ptr [EBX + 0x10bcc]       ; 004fdf71
    FLDZ                                ; 004fdf77
    FCOMPP                              ; 004fdf79
    FNSTSW AX                           ; 004fdf7b
    SAHF                                ; 004fdf7d
    JBE 0x004fdf8a                      ; 004fdf7e
        ;   XREF to: 004fdf8a (CONDITIONAL_JUMP)  ; LAB_004fdf8a
    MOV dword ptr [EBX + 0x10bcc],0x0   ; 004fdf80
    FLD float ptr [EBX + 0x10b10]       ; 004fdf8a
        ;   Label: LAB_004fdf8a
    FSUB float ptr [EBP + 0x92]         ; 004fdf90
    FST float ptr [EBX + 0x10b10]       ; 004fdf96
    FLDZ                                ; 004fdf9c
    FCOMPP                              ; 004fdf9e
    FNSTSW AX                           ; 004fdfa0
    SAHF                                ; 004fdfa2
    JBE 0x004fdfaf                      ; 004fdfa3
        ;   XREF to: 004fdfaf (CONDITIONAL_JUMP)  ; LAB_004fdfaf
    MOV dword ptr [EBX + 0x10b10],0x0   ; 004fdfa5
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 004fdfaf
        ;   Label: LAB_004fdfaf
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004fdfb5
    TEST ESI,ESI                        ; 004fdfbc
    JZ 0x004fe0c1                       ; 004fdfbe
        ;   XREF to: 004fe0c1 (CONDITIONAL_JUMP)  ; LAB_004fe0c1
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 004fdfc4
        ;   Label: LAB_004fdfc4
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004fdfca
    TEST EDI,EDI                        ; 004fdfd1
    JZ 0x004fe0d9                       ; 004fdfd3
        ;   XREF to: 004fe0d9 (CONDITIONAL_JUMP)  ; LAB_004fe0d9
    CMP dword ptr [EBX + 0x10b24],0x0   ; 004fdfd9
        ;   Label: LAB_004fdfd9
    JZ 0x004fe0f0                       ; 004fdfe0
        ;   XREF to: 004fe0f0 (CONDITIONAL_JUMP)  ; LAB_004fe0f0
    LEA EAX,[EBX + 0x2508]              ; 004fdfe6
        ;   Label: LAB_004fdfe6
    MOV dword ptr [EAX + 0x8],0x0       ; 004fdfec
    FLD float ptr [EBP + 0x92]          ; 004fdff3
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fdff9
    MOV dword ptr [EAX + 0x4],EDX       ; 004fdffc
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fdfff
    MOV dword ptr [EAX],EDX             ; 004fe002
    LEA EAX,[EBX + 0x2b4]               ; 004fe004
    FMUL float ptr [EBX + 0x10a60]      ; 004fe00a
    MOV dword ptr [EBP + 0x6a],EAX      ; 004fe010
    FSTP float ptr [EBP + 0x4a]         ; 004fe013
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004fe016
    FLD float ptr [EBP + 0x4a]          ; 004fe019
        ;   Label: LAB_004fe019
    FLDZ                                ; 004fe01c
    FCOMPP                              ; 004fe01e
    FNSTSW AX                           ; 004fe020
    SAHF                                ; 004fe022
    JNC 0x004fe151                      ; 004fe023
        ;   XREF to: 004fe151 (CONDITIONAL_JUMP)  ; LAB_004fe151
    LEA EAX,[EBP + 0x4a]                ; 004fe029
    PUSH EAX                            ; 004fe02c
    PUSH EDI                            ; 004fe02d
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 004fe02e
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 004fe033
    CMP EAX,0x64                        ; 004fe036
    JZ 0x004fe11d                       ; 004fe039
        ;   XREF to: 004fe11d (CONDITIONAL_JUMP)  ; LAB_004fe11d
    PUSH EAX                            ; 004fe03f
    PUSH EBX                            ; 004fe040
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 004fe041
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 004fe046
    JMP 0x004fe019                      ; 004fe049
        ;   XREF to: 004fe019 (UNCONDITIONAL_JUMP)  ; LAB_004fe019
    LEA EAX,[EBP + 0xfffffe22]          ; 004fe04b
        ;   Label: LAB_004fe04b
    PUSH EAX                            ; 004fe051
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004fe052
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    MOV ECX,0x4479f99a                  ; 004fe057
    ADD ESP,0x4                         ; 004fe05c
    LEA EAX,[EBP + 0xfffffe22]          ; 004fe05f
    MOV dword ptr [EBP + 0xfffffe56],EBX ; 004fe065
    PUSH EAX                            ; 004fe06b
    MOV dword ptr [EBP + 0xfffffe5a],EBX ; 004fe06c
    MOV dword ptr [EBP + 0xfffffe26],ECX ; 004fe072
    PUSH EBX                            ; 004fe078
    MOV EDX,dword ptr [EBX + 0x2b0]     ; 004fe079
    CALL dword ptr [EDX + 0x110]        ; 004fe07f
    ADD ESP,0x8                         ; 004fe085
    JMP 0x004fdee7                      ; 004fe088
        ;   XREF to: 004fdee7 (UNCONDITIONAL_JUMP)  ; LAB_004fdee7
    MOV ECX,dword ptr [EBX + 0x10b8c]   ; 004fe08d
        ;   Label: LAB_004fe08d
    PUSH ECX                            ; 004fe093
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 004fe094
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 004fe099
    TEST EAX,EAX                        ; 004fe09c
    JNZ 0x004fdf65                      ; 004fe09e
        ;   XREF to: 004fdf65 (CONDITIONAL_JUMP)  ; LAB_004fdf65
    PUSH 0x5ded75                       ; 004fe0a4 | = "mob-scream?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe0a9
    PUSH EBX                            ; 004fe0af
    CALL dword ptr [EAX + 0x34]         ; 004fe0b0
    ADD ESP,0x8                         ; 004fe0b3
    MOV dword ptr [EBX + 0x10b98],EAX   ; 004fe0b6
    JMP 0x004fdf65                      ; 004fe0bc
        ;   XREF to: 004fdf65 (UNCONDITIONAL_JUMP)  ; LAB_004fdf65
    PUSH ESI                            ; 004fe0c1
        ;   Label: LAB_004fe0c1
    PUSH 0x1                            ; 004fe0c2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe0c4
    PUSH EBX                            ; 004fe0ca
    CALL dword ptr [EAX + 0x130]        ; 004fe0cb
    ADD ESP,0xc                         ; 004fe0d1
    JMP 0x004fdfc4                      ; 004fe0d4
        ;   XREF to: 004fdfc4 (UNCONDITIONAL_JUMP)  ; LAB_004fdfc4
    PUSH EDI                            ; 004fe0d9
        ;   Label: LAB_004fe0d9
    PUSH EDI                            ; 004fe0da
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe0db
    PUSH EBX                            ; 004fe0e1
    CALL dword ptr [EAX + 0x130]        ; 004fe0e2
    ADD ESP,0xc                         ; 004fe0e8
    JMP 0x004fdfd9                      ; 004fe0eb
        ;   XREF to: 004fdfd9 (UNCONDITIONAL_JUMP)  ; LAB_004fdfd9
    LEA EAX,[EBX + 0x10b28]             ; 004fe0f0
        ;   Label: LAB_004fe0f0
    PUSH EAX                            ; 004fe0f6
    MOV EDX,dword ptr [0x006141f0]      ; 004fe0f7 | DAT_006141f0
    PUSH EDX                            ; 004fe0fd
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_0048e340 ; 004fe0fe
        ;   XREF to: 0048e340 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_0048e340(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 004fe103
    TEST EAX,EAX                        ; 004fe106
    JZ 0x004fdfe6                       ; 004fe108
        ;   XREF to: 004fdfe6 (CONDITIONAL_JUMP)  ; LAB_004fdfe6
    MOV dword ptr [EBX + 0x10b24],0x1   ; 004fe10e
    JMP 0x004fdfe6                      ; 004fe118
        ;   XREF to: 004fdfe6 (UNCONDITIONAL_JUMP)  ; LAB_004fdfe6
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 004fe11d
        ;   Label: LAB_004fe11d
    TEST EAX,EAX                        ; 004fe123
    JZ 0x004fe019                       ; 004fe125
        ;   XREF to: 004fe019 (CONDITIONAL_JUMP)  ; LAB_004fe019
    PUSH 0x0                            ; 004fe12b
    PUSH 0x3e4ccccd                     ; 004fe12d
    PUSH EAX                            ; 004fe132
    MOV EDX,0x1                         ; 004fe133
    PUSH EDX                            ; 004fe138
    PUSH EBX                            ; 004fe139
    MOV dword ptr [EBX + 0x10b04],0x0   ; 004fe13a
    CALL core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10 ; 004fe144
        ;   XREF to: 00428b10 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_pickupObjectNow_FUN_00428b10(CCharacter * this_ptr, int param_2, int param_3, undefined4 param_4, ...)
    ADD ESP,0x14                        ; 004fe149
    JMP 0x004fe019                      ; 004fe14c
        ;   XREF to: 004fe019 (UNCONDITIONAL_JUMP)  ; LAB_004fe019
    FLD float ptr [EBP + 0x92]          ; 004fe151
        ;   Label: LAB_004fe151
    FMUL float ptr [EBX + 0x10a60]      ; 004fe157
    SUB ESP,0x4                         ; 004fe15d
    MOV EAX,dword ptr [EBX + 0x2510]    ; 004fe160
    MOV dword ptr [EBX + 0x2594],EAX    ; 004fe166
    FSTP float ptr [ESP]                ; 004fe16c
    PUSH EBX                            ; 004fe16f
    CALL core_charactr.cpp_FUN_0042b2a0 ; 004fe170
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 004fe175
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004fe178
    PUSH ESI                            ; 004fe17b
    CALL core_motion.cpp_FUN_005035c0   ; 004fe17c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    ADD ESP,0x4                         ; 004fe181
    PUSH dword ptr [EBP + 0x92]         ; 004fe184
    PUSH EBX                            ; 004fe18a
    MOV ESI,dword ptr [EAX + 0x24]      ; 004fe18b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_004287f0 ; 004fe18e
        ;   XREF to: 004287f0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_004287f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe193
    TEST EAX,EAX                        ; 004fe196
    JZ 0x004fef08                       ; 004fe198
        ;   XREF to: 004fef08 (CONDITIONAL_JUMP)  ; LAB_004fef08
    MOV EAX,dword ptr [EBX + 0x27ac]    ; 004fe19e
    CMP EAX,0x2                         ; 004fe1a4
    JNC 0x004fe420                      ; 004fe1a7
        ;   XREF to: 004fe420 (CONDITIONAL_JUMP)  ; LAB_004fe420
    CMP EAX,0x1                         ; 004fe1ad
    JNZ 0x004fe42b                      ; 004fe1b0
        ;   XREF to: 004fe42b (CONDITIONAL_JUMP)  ; LAB_004fe42b
    PUSH 0x1                            ; 004fe1b6
        ;   Label: LAB_004fe1b6
    PUSH 0x1                            ; 004fe1b8
    LEA EAX,[EBX + 0x2b4]               ; 004fe1ba
        ;   Label: LAB_004fe1ba
    PUSH EAX                            ; 004fe1c0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fe1c1
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe1c6
        ;   Label: LAB_004fe1c6
    LEA EAX,[EBX + 0x2508]              ; 004fe1c9
    MOV dword ptr [EAX + 0x8],0x0       ; 004fe1cf
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fe1d6
    MOV dword ptr [EAX + 0x4],EDX       ; 004fe1d9
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fe1dc
    MOV dword ptr [EAX],EDX             ; 004fe1df
    FLD float ptr [EBX + 0x10a74]       ; 004fe1e1
        ;   Label: caseD_3
    FLDZ                                ; 004fe1e7
    FCOMPP                              ; 004fe1e9
    FNSTSW AX                           ; 004fe1eb
    SAHF                                ; 004fe1ed
    JNC 0x004fe202                      ; 004fe1ee
        ;   XREF to: 004fe202 (CONDITIONAL_JUMP)  ; LAB_004fe202
    FLD float ptr [EBX + 0x10a74]       ; 004fe1f0
    FSUB float ptr [EBP + 0x92]         ; 004fe1f6
    FSTP float ptr [EBX + 0x10a74]      ; 004fe1fc
    CMP dword ptr [EBX + 0x10b1c],0x0   ; 004fe202
        ;   Label: LAB_004fe202
    JNZ 0x004fef18                      ; 004fe209
        ;   XREF to: 004fef18 (CONDITIONAL_JUMP)  ; LAB_004fef18
    PUSH EBX                            ; 004fe20f
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 004fe210
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fe215
    TEST EAX,EAX                        ; 004fe218
    JZ 0x004fe34f                       ; 004fe21a
        ;   XREF to: 004fe34f (CONDITIONAL_JUMP)  ; LAB_004fe34f
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004fe220
    TEST ECX,ECX                        ; 004fe226
    JZ 0x004fe254                       ; 004fe228
        ;   XREF to: 004fe254 (CONDITIONAL_JUMP)  ; LAB_004fe254
    PUSH ECX                            ; 004fe22a
    MOV EDX,dword ptr [ECX + 0x2b0]     ; 004fe22b
    CALL dword ptr [EDX + 0xfc]         ; 004fe231
    ADD ESP,0x4                         ; 004fe237
    CMP EAX,EBX                         ; 004fe23a
    JNZ 0x004fe254                      ; 004fe23c
        ;   XREF to: 004fe254 (CONDITIONAL_JUMP)  ; LAB_004fe254
    MOV ESI,dword ptr [EBX + 0x10a78]   ; 004fe23e
    PUSH ESI                            ; 004fe244
    MOV EDI,dword ptr [0x0061b5a8]      ; 004fe245 | g_CDemonSetPtr
    PUSH EDI                            ; 004fe24b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30 ; 004fe24c
        ;   XREF to: 00537e30 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00537e30(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004fe251
    PUSH dword ptr [EBP + 0x92]         ; 004fe254
        ;   Label: LAB_004fe254
    PUSH EBX                            ; 004fe25a
    CALL core_charactr.cpp_FUN_00423a10 ; 004fe25b
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA ECX,[EBX + 0x2588]              ; 004fe260
    FLD float ptr [ECX]                 ; 004fe266
    FMUL float ptr [EBP + 0x92]         ; 004fe268
    FLD float ptr [ECX + 0x4]           ; 004fe26e
    FMUL float ptr [EBP + 0x92]         ; 004fe271
    FLD float ptr [ECX + 0x8]           ; 004fe277
    FMUL float ptr [EBP + 0x92]         ; 004fe27a
    LEA EDI,[EBP + 0xfffffee2]          ; 004fe280
    LEA ESI,[EBP + 0xfffffe9a]          ; 004fe286
    FXCH ST2                            ; 004fe28c
    FSTP float ptr [EBP + 0xfffffe9a]   ; 004fe28e
    FSTP float ptr [EBP + 0xfffffe9e]   ; 004fe294
    FSTP float ptr [EBP + 0xfffffea2]   ; 004fe29a
    MOVSD ES:EDI,ESI                    ; 004fe2a0
    MOVSD ES:EDI,ESI                    ; 004fe2a1
    MOVSD ES:EDI,ESI                    ; 004fe2a2
    LEA EAX,[EBX + 0x257c]              ; 004fe2a3
    FLD float ptr [EBP + 0xfffffee2]    ; 004fe2a9
    FLD float ptr [EBP + 0xfffffee6]    ; 004fe2af
    FLD float ptr [EBP + 0xfffffeea]    ; 004fe2b5
    LEA EDI,[EBP + 0xffffff7e]          ; 004fe2bb
    LEA ESI,[EBP + -0x22]               ; 004fe2c1
    FXCH ST2                            ; 004fe2c4
    FADD float ptr [EAX]                ; 004fe2c6
    FXCH                                ; 004fe2c8
    FADD float ptr [EAX + 0x4]          ; 004fe2ca
    FXCH ST2                            ; 004fe2cd
    FADD float ptr [EAX + 0x8]          ; 004fe2cf
    FXCH                                ; 004fe2d2
    FSTP float ptr [EBP + -0x22]        ; 004fe2d4
    FXCH                                ; 004fe2d7
    FSTP float ptr [EBP + -0x1e]        ; 004fe2d9
    FSTP float ptr [EBP + -0x1a]        ; 004fe2dc
    MOVSD ES:EDI,ESI                    ; 004fe2df
    MOVSD ES:EDI,ESI                    ; 004fe2e0
    MOVSD ES:EDI,ESI                    ; 004fe2e1
    LEA EDX,[EBX + 0x2508]              ; 004fe2e2
    FLD float ptr [EBP + 0xffffff7e]    ; 004fe2e8
    FLD float ptr [EBP + -0x7e]         ; 004fe2ee
    FLD float ptr [EBP + -0x7a]         ; 004fe2f1
    LEA EDI,[EBP + 0xffffff06]          ; 004fe2f4
    LEA ESI,[EBP + 0x2]                 ; 004fe2fa
    FXCH ST2                            ; 004fe2fd
    FADD float ptr [EDX]                ; 004fe2ff
    FXCH                                ; 004fe301
    FADD float ptr [EDX + 0x4]          ; 004fe303
    FXCH ST2                            ; 004fe306
    FADD float ptr [EDX + 0x8]          ; 004fe308
    FXCH                                ; 004fe30b
    FSTP float ptr [EBP + 0x2]          ; 004fe30d
    FXCH                                ; 004fe310
    FSTP float ptr [EBP + 0x6]          ; 004fe312
    FSTP float ptr [EBP + 0xa]          ; 004fe315
    MOVSD ES:EDI,ESI                    ; 004fe318
    MOVSD ES:EDI,ESI                    ; 004fe319
    MOVSD ES:EDI,ESI                    ; 004fe31a
    MOV dword ptr [EAX + 0x8],0x0       ; 004fe31b
    ADD ESP,0x8                         ; 004fe322
    MOV ECX,dword ptr [EAX + 0x8]       ; 004fe325
    MOV dword ptr [EAX + 0x4],ECX       ; 004fe328
    MOV ECX,dword ptr [EAX + 0x4]       ; 004fe32b
    MOV dword ptr [EAX],ECX             ; 004fe32e
    MOV dword ptr [EDX + 0x8],0x0       ; 004fe330
    LEA EAX,[EBP + 0xffffff06]          ; 004fe337
    FLD float ptr [EDX + 0x8]           ; 004fe33d
    PUSH EAX                            ; 004fe340
    FST float ptr [EDX + 0x4]           ; 004fe341
    PUSH EBX                            ; 004fe344
    FSTP float ptr [EDX]                ; 004fe345
    CALL core_charactr.cpp_FUN_00423a60 ; 004fe347
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 004fe34c
    MOV EAX,[0x02661f38]                ; 004fe34f | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe34f
    PUSH EAX                            ; 004fe354
    MOV EDX,dword ptr [EBX + 0x2698]    ; 004fe355
    PUSH EDX                            ; 004fe35b
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fe35c
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe361
    TEST EAX,EAX                        ; 004fe364
    JZ 0x004fe37b                       ; 004fe366
        ;   XREF to: 004fe37b (CONDITIONAL_JUMP)  ; LAB_004fe37b
    PUSH dword ptr [EBP + 0x92]         ; 004fe368
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004fe36e
    PUSH EAX                            ; 004fe374
    CALL dword ptr [EDX + 0x14]         ; 004fe375
    ADD ESP,0x8                         ; 004fe378
    MOV ECX,dword ptr [0x02661f38]      ; 004fe37b | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe37b
    PUSH ECX                            ; 004fe381
    MOV ESI,dword ptr [EBX + 0x2620]    ; 004fe382
    PUSH ESI                            ; 004fe388
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fe389
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 004fe38e
    TEST EAX,EAX                        ; 004fe391
    JZ 0x004fe3a8                       ; 004fe393
        ;   XREF to: 004fe3a8 (CONDITIONAL_JUMP)  ; LAB_004fe3a8
    PUSH dword ptr [EBP + 0x92]         ; 004fe395
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004fe39b
    PUSH EAX                            ; 004fe3a1
    CALL dword ptr [EDX + 0x14]         ; 004fe3a2
    ADD ESP,0x8                         ; 004fe3a5
    PUSH EBX                            ; 004fe3a8
        ;   Label: LAB_004fe3a8
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00424470 ; 004fe3a9
        ;   XREF to: 00424470 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00424470(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004fe3ae
    LEA EAX,[EBX + 0x2b4]               ; 004fe3b1
    PUSH EAX                            ; 004fe3b7
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 004fe3b8
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 004fe3bd
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe3c0
    PUSH EBX                            ; 004fe3c6
    CALL dword ptr [EAX + 0x114]        ; 004fe3c7
    ADD ESP,0x4                         ; 004fe3cd
    TEST EAX,EAX                        ; 004fe3d0
    JNZ 0x004fe3e3                      ; 004fe3d2
        ;   XREF to: 004fe3e3 (CONDITIONAL_JUMP)  ; LAB_004fe3e3
    PUSH dword ptr [EBP + 0x92]         ; 004fe3d4
    PUSH EBX                            ; 004fe3da
    CALL core_mobster.cpp_CMobster_aimTommyGun_FUN_004fef30 ; 004fe3db
        ;   XREF to: 004fef30 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_aimTommyGun_FUN_004fef30(CMobster * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe3e0
    PUSH dword ptr [EBP + 0x92]         ; 004fe3e3
        ;   Label: LAB_004fe3e3
    PUSH EBX                            ; 004fe3e9
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 004fe3ea
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe3ef
    LEA ESP,[EBP + 0x7a]                ; 004fe3f2
    POP EBP                             ; 004fe3f5
    POP EDI                             ; 004fe3f6
    POP ESI                             ; 004fe3f7
    POP EBX                             ; 004fe3f8
    RET                                 ; 004fe3f9
    PUSH 0x1                            ; 004fe3fa
        ;   Label: LAB_004fe3fa
    PUSH 0x0                            ; 004fe3fc
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004fe3fe
    PUSH EDI                            ; 004fe401
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fe402
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe407
    PUSH EBX                            ; 004fe40a
    PUSH 0x5ded85                       ; 004fe40b | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00609ed0]                ; 004fe410 | g_CConsolePtr
    PUSH EAX                            ; 004fe415 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 004fe416
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    JMP 0x004fe1c6                      ; 004fe41b
        ;   XREF to: 004fe1c6 (UNCONDITIONAL_JUMP)  ; LAB_004fe1c6
    JBE 0x004fe1b6                      ; 004fe420
        ;   XREF to: 004fe1b6 (CONDITIONAL_JUMP)  ; LAB_004fe1b6
        ;   Label: LAB_004fe420
    CMP EAX,0x3                         ; 004fe426
    JZ 0x004fe3fa                       ; 004fe429
        ;   XREF to: 004fe3fa (CONDITIONAL_JUMP)  ; LAB_004fe3fa
    PUSH 0x1                            ; 004fe42b
        ;   Label: LAB_004fe42b
    PUSH 0x0                            ; 004fe42d
    JMP 0x004fe1ba                      ; 004fe42f
        ;   XREF to: 004fe1ba (UNCONDITIONAL_JUMP)  ; LAB_004fe1ba
    LEA EAX,[EBP + 0xfffffe5e]          ; 004fe434
        ;   Label: caseD_9
    PUSH EAX                            ; 004fe43a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 004fe43b
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 004fe440
    PUSH 0x41700000                     ; 004fe443
    PUSH 0x40e00000                     ; 004fe448
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004fe44d
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe452
    MOV dword ptr [EBP + 0xfffffe92],EBX ; 004fe455
    MOV dword ptr [EBP + 0xfffffe96],EBX ; 004fe45b
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fe461
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 004fe464
    MOV EAX,dword ptr [EBX + 0x10ba0]   ; 004fe46a
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004fe470
    ADD ESP,0x8                         ; 004fe477
    TEST EDI,EDI                        ; 004fe47a
    JZ 0x004fe4f6                       ; 004fe47c
        ;   XREF to: 004fe4f6 (CONDITIONAL_JUMP)  ; LAB_004fe4f6
    LEA EAX,[EBP + 0xfffffe5e]          ; 004fe47e
    MOV EDX,dword ptr [0x01d1c714]      ; 004fe484 | DAT_01d1c714
    PUSH EAX                            ; 004fe48a
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fe48b
    SUB EAX,EDX                         ; 004fe492
    SHL EAX,0x4                         ; 004fe494
    LEA EDX,[EBX + 0x1134]              ; 004fe497
    ADD EAX,EDX                         ; 004fe49d
    PUSH 0x3ecccccd                     ; 004fe49f
    PUSH EAX                            ; 004fe4a4
    PUSH 0x265370c                      ; 004fe4a5 | DAT_0265370c
    LEA ESI,[EBP + 0xfffffea6]          ; 004fe4aa
    LEA EDI,[EBP + 0x1a]                ; 004fe4b0
    CALL core_xform.cpp_FUN_00591530    ; 004fe4b3
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004fe4b8
    LEA EAX,[EBP + 0x1a]                ; 004fe4bb
    LEA ESI,[EBP + 0xfffffea6]          ; 004fe4be
    PUSH EAX                            ; 004fe4c4
    MOVSD ES:EDI,ESI                    ; 004fe4c5
    MOVSD ES:EDI,ESI                    ; 004fe4c6
    MOVSD ES:EDI,ESI                    ; 004fe4c7
    PUSH EBX                            ; 004fe4c8
    LEA ESI,[EBP + 0xfffffebe]          ; 004fe4c9
    CALL core_actor.cpp_FUN_00408d70    ; 004fe4cf
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004fe4d4
    LEA EAX,[EBP + 0xffffff1e]          ; 004fe4d7
    PUSH EAX                            ; 004fe4dd
    LEA EDI,[EBP + 0xffffff1e]          ; 004fe4de
    LEA ESI,[EBP + 0xfffffebe]          ; 004fe4e4
    PUSH EBX                            ; 004fe4ea
    MOVSD ES:EDI,ESI                    ; 004fe4eb
    MOVSD ES:EDI,ESI                    ; 004fe4ec
    MOVSD ES:EDI,ESI                    ; 004fe4ed
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004fe4ee
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004fe4f3
    PUSH 0x41700000                     ; 004fe4f6
        ;   Label: LAB_004fe4f6
    PUSH 0x40e00000                     ; 004fe4fb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004fe500
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe505
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fe508
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 004fe50b
    MOV EAX,dword ptr [EBX + 0x10ba8]   ; 004fe511
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 004fe517
    ADD ESP,0x8                         ; 004fe51e
    TEST EDX,EDX                        ; 004fe521
    JZ 0x004fe1e1                       ; 004fe523
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe5e]          ; 004fe529
    MOV EDX,dword ptr [0x01d1c718]      ; 004fe52f | DAT_01d1c718
    PUSH EAX                            ; 004fe535
    LEA EAX,[EDX*0x4 + 0x0]             ; 004fe536
    SUB EAX,EDX                         ; 004fe53d
    SHL EAX,0x4                         ; 004fe53f
    LEA EDX,[EBX + 0x1134]              ; 004fe542
    ADD EAX,EDX                         ; 004fe548
    PUSH 0x3ecccccd                     ; 004fe54a
    PUSH EAX                            ; 004fe54f
    PUSH 0x265370c                      ; 004fe550 | DAT_0265370c
    LEA ESI,[EBP + 0x32]                ; 004fe555
    LEA EDI,[EBP + 0xfffffeee]          ; 004fe558
    CALL core_xform.cpp_FUN_00591530    ; 004fe55e
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 004fe563
    LEA EAX,[EBP + 0xfffffeee]          ; 004fe566
    LEA ESI,[EBP + 0x32]                ; 004fe56c
    PUSH EAX                            ; 004fe56f
    MOVSD ES:EDI,ESI                    ; 004fe570
    MOVSD ES:EDI,ESI                    ; 004fe571
    MOVSD ES:EDI,ESI                    ; 004fe572
    PUSH EBX                            ; 004fe573
    LEA ESI,[EBP + 0xffffff36]          ; 004fe574
    CALL core_actor.cpp_FUN_00408d70    ; 004fe57a
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004fe57f
    LEA EAX,[EBP + 0xfffffefa]          ; 004fe582
    PUSH EAX                            ; 004fe588
    LEA EDI,[EBP + 0xfffffefa]          ; 004fe589
    LEA ESI,[EBP + 0xffffff36]          ; 004fe58f
    PUSH EBX                            ; 004fe595
    MOVSD ES:EDI,ESI                    ; 004fe596
    MOVSD ES:EDI,ESI                    ; 004fe597
    MOVSD ES:EDI,ESI                    ; 004fe598
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 004fe599
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 004fe59e
    JMP 0x004fe1e1                      ; 004fe5a1
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0x10b10]       ; 004fe5a6
        ;   Label: caseD_a
    FLDZ                                ; 004fe5ac
    FCOMPP                              ; 004fe5ae
    FNSTSW AX                           ; 004fe5b0
    SAHF                                ; 004fe5b2
    JC 0x004fe1e1                       ; 004fe5b3
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 004fe5b9
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00 ; 004fe5ba
        ;   XREF to: 004ffb00 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fe5bf
    JMP 0x004fe1e1                      ; 004fe5c2
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004fe5c7
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe5cd
    PUSH EBX                            ; 004fe5d3
    CALL dword ptr [EAX + 0x150]        ; 004fe5d4
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004fe5da
    ADD ESP,0x8                         ; 004fe5e0
    TEST EDX,EDX                        ; 004fe5e3
    JNZ 0x004fe65f                      ; 004fe5e5
        ;   XREF to: 004fe65f (CONDITIONAL_JUMP)  ; LAB_004fe65f
    FLD float ptr [EBX + 0x10bc8]       ; 004fe5e7
        ;   Label: LAB_004fe5e7
    FCOMP double ptr [0x005dedb5]       ; 004fe5ed | DAT_005dedb5
    FNSTSW AX                           ; 004fe5f3
    SAHF                                ; 004fe5f5
    JNC 0x004fe74d                      ; 004fe5f6
        ;   XREF to: 004fe74d (CONDITIONAL_JUMP)  ; LAB_004fe74d
    CMP dword ptr [EBX + 0x10b24],0x0   ; 004fe5fc
        ;   Label: LAB_004fe5fc
    JZ 0x004fe765                       ; 004fe603
        ;   XREF to: 004fe765 (CONDITIONAL_JUMP)  ; LAB_004fe765
    PUSH 0x40a00000                     ; 004fe609
    PUSH 0x40800000                     ; 004fe60e
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 004fe613
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
        ;   Label: LAB_004fe613
    MOV dword ptr [EBP + 0x76],EAX      ; 004fe618
    ADD ESP,0x8                         ; 004fe61b
    MOV EAX,dword ptr [EBP + 0x76]      ; 004fe61e
    MOV dword ptr [EBX + 0x10bcc],EAX   ; 004fe621
    PUSH 0x1                            ; 004fe627
    PUSH 0x0                            ; 004fe629
    LEA EAX,[EBX + 0x2b4]               ; 004fe62b
    PUSH EAX                            ; 004fe631
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fe632
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe637
    PUSH 0x3e99999a                     ; 004fe63a
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004fe63f
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004fe644
    TEST EAX,EAX                        ; 004fe647
    JZ 0x004fe1e1                       ; 004fe649
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3                            ; 004fe64f
    PUSH EBX                            ; 004fe651
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_00500370 ; 004fe652
        ;   XREF to: 00500370 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_00500370(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 004fe657
    JMP 0x004fe1e1                      ; 004fe65a
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [0x02661f38]      ; 004fe65f | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe65f
    PUSH ECX                            ; 004fe665
    MOV ESI,dword ptr [EBX + 0x2698]    ; 004fe666
    PUSH ESI                            ; 004fe66c
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fe66d
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004fe672
    ADD ESP,0x8                         ; 004fe674
    MOV EDI,EAX                         ; 004fe677
    TEST EAX,EAX                        ; 004fe679
    JZ 0x004fe6cb                       ; 004fe67b
        ;   XREF to: 004fe6cb (CONDITIONAL_JUMP)  ; LAB_004fe6cb
    MOV EAX,[0x0061b5a8]                ; 004fe67d | g_CDemonSetPtr
    PUSH EAX                            ; 004fe682 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004fe683
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    MOV EAX,dword ptr [ESI + 0x6c4]     ; 004fe688
    ADD ESP,0x4                         ; 004fe68e
    MOV dword ptr [EBP + 0x62],EAX      ; 004fe691
    PUSH ESI                            ; 004fe694
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fe695
    MOV dword ptr [ESI + 0x6c4],0x64    ; 004fe69b
    CALL dword ptr [EAX + 0xf0]         ; 004fe6a5
    ADD ESP,0x4                         ; 004fe6ab
    TEST EAX,EAX                        ; 004fe6ae
    JZ 0x004fe6c2                       ; 004fe6b0
        ;   XREF to: 004fe6c2 (CONDITIONAL_JUMP)  ; LAB_004fe6c2
    PUSH ESI                            ; 004fe6b2
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fe6b3
    CALL dword ptr [EAX + 0xec]         ; 004fe6b9
    ADD ESP,0x4                         ; 004fe6bf
    MOV EAX,dword ptr [EBP + 0x62]      ; 004fe6c2
        ;   Label: LAB_004fe6c2
    MOV dword ptr [EDI + 0x6c4],EAX     ; 004fe6c5
    MOV EDX,dword ptr [0x02661f38]      ; 004fe6cb | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_004fe6cb
    PUSH EDX                            ; 004fe6d1
    MOV ECX,dword ptr [EBX + 0x2620]    ; 004fe6d2
    PUSH ECX                            ; 004fe6d8
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 004fe6d9
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 004fe6de
    ADD ESP,0x8                         ; 004fe6e0
    MOV dword ptr [EBP + 0x72],EAX      ; 004fe6e3
    TEST EAX,EAX                        ; 004fe6e6
    JZ 0x004fe5e7                       ; 004fe6e8
        ;   XREF to: 004fe5e7 (CONDITIONAL_JUMP)  ; LAB_004fe5e7
    MOV EDI,dword ptr [0x0061b5a8]      ; 004fe6ee | g_CDemonSetPtr
    PUSH EDI                            ; 004fe6f4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00537e00 ; 004fe6f5
        ;   XREF to: 00537e00 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00537e00(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 004fe6fa
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fe6fd
    PUSH ESI                            ; 004fe703
    MOV EDI,dword ptr [ESI + 0x6c4]     ; 004fe704
    MOV dword ptr [ESI + 0x6c4],0x64    ; 004fe70a
    CALL dword ptr [EAX + 0xf0]         ; 004fe714
    ADD ESP,0x4                         ; 004fe71a
    TEST EAX,EAX                        ; 004fe71d
    JNZ 0x004fe72f                      ; 004fe71f
        ;   XREF to: 004fe72f (CONDITIONAL_JUMP)  ; LAB_004fe72f
    MOV EAX,dword ptr [EBP + 0x72]      ; 004fe721
    MOV dword ptr [EAX + 0x6c4],EDI     ; 004fe724
    JMP 0x004fe5e7                      ; 004fe72a
        ;   XREF to: 004fe5e7 (UNCONDITIONAL_JUMP)  ; LAB_004fe5e7
    PUSH ESI                            ; 004fe72f
        ;   Label: LAB_004fe72f
    MOV EAX,dword ptr [ESI + 0x2b0]     ; 004fe730
    CALL dword ptr [EAX + 0xec]         ; 004fe736
    ADD ESP,0x4                         ; 004fe73c
    MOV EAX,dword ptr [EBP + 0x72]      ; 004fe73f
    MOV dword ptr [EAX + 0x6c4],EDI     ; 004fe742
    JMP 0x004fe5e7                      ; 004fe748
        ;   XREF to: 004fe5e7 (UNCONDITIONAL_JUMP)  ; LAB_004fe5e7
    FLD float ptr [EBX + 0x10bcc]       ; 004fe74d
        ;   Label: LAB_004fe74d
    FLDZ                                ; 004fe753
    FCOMPP                              ; 004fe755
    FNSTSW AX                           ; 004fe757
    SAHF                                ; 004fe759
    JNC 0x004fe5fc                      ; 004fe75a
        ;   XREF to: 004fe5fc (CONDITIONAL_JUMP)  ; LAB_004fe5fc
    JMP 0x004fe1e1                      ; 004fe760
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x40800000                     ; 004fe765
        ;   Label: LAB_004fe765
    PUSH 0x40000000                     ; 004fe76a
    JMP 0x004fe613                      ; 004fe76f
        ;   XREF to: 004fe613 (UNCONDITIONAL_JUMP)  ; LAB_004fe613
    CMP dword ptr [EBX + 0x10a64],0x0   ; 004fe774
        ;   Label: caseD_5
    JNZ 0x004fe1e1                      ; 004fe77b
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 004fe781
    JNZ 0x004fe1e1                      ; 004fe788
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 004fe78e
    MOV EDI,dword ptr [EBP + 0x6a]      ; 004fe78f
    PUSH EDI                            ; 004fe792
    LEA ESI,[EBP + 0xfffffeca]          ; 004fe793
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0 ; 004fe799
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneModelPosition_FUN_005469a0(CDeformableModelInstance * this_ptr, int bone_index, CVector3f * out_position)
    LEA EDI,[EBP + -0xa]                ; 004fe79e
    ADD ESP,0x8                         ; 004fe7a1
    LEA EAX,[EBP + -0xa]                ; 004fe7a4
    LEA ESI,[EBP + 0xfffffeca]          ; 004fe7a7
    PUSH EAX                            ; 004fe7ad
    MOVSD ES:EDI,ESI                    ; 004fe7ae
    MOVSD ES:EDI,ESI                    ; 004fe7af
    MOVSD ES:EDI,ESI                    ; 004fe7b0
    PUSH EBX                            ; 004fe7b1
    LEA ESI,[EBP + 0xfffffed6]          ; 004fe7b2
    CALL core_actor.cpp_FUN_00408d70    ; 004fe7b8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 004fe7bd
    PUSH 0x0                            ; 004fe7c0
    LEA EAX,[EBP + -0x16]               ; 004fe7c2
    LEA EDI,[EBP + -0x16]               ; 004fe7c5
    PUSH EAX                            ; 004fe7c8
    MOV EAX,[0x006167e0]                ; 004fe7c9 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffed6]          ; 004fe7ce
    PUSH EAX                            ; 004fe7d4
    MOVSD ES:EDI,ESI                    ; 004fe7d5
    MOVSD ES:EDI,ESI                    ; 004fe7d6
    MOVSD ES:EDI,ESI                    ; 004fe7d7
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 004fe7d8
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 004fe7dd
    MOV dword ptr [EBX + 0x10a64],0x1   ; 004fe7e0
    JMP 0x004fe1e1                      ; 004fe7ea
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0x10b24],0x0   ; 004fe7ef
        ;   Label: caseD_0
    JZ 0x004fe82d                       ; 004fe7f6
        ;   XREF to: 004fe82d (CONDITIONAL_JUMP)  ; LAB_004fe82d
    MOV EAX,[0x01cedef4]                ; 004fe7f8 | DAT_01cedef4
    MOV EAX,dword ptr [EAX*0x4 + 0x1cedee4] ; 004fe7fd
    FLD float ptr [EBX + 0x10bc8]       ; 004fe804
    MOV dword ptr [EBX + 0x10a78],EAX   ; 004fe80a
    FCOMP double ptr [0x005dedb5]       ; 004fe810 | DAT_005dedb5
    FNSTSW AX                           ; 004fe816
    SAHF                                ; 004fe818
    JBE 0x004fe1e1                      ; 004fe819
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 004fe81f
        ;   Label: LAB_004fe81f
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00 ; 004fe820
        ;   XREF to: 004ffb00 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fe825
    JMP 0x004fe1e1                      ; 004fe828
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004fe82d
        ;   Label: LAB_004fe82d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004fe833
    PUSH EBX                            ; 004fe839
    CALL dword ptr [EAX + 0x150]        ; 004fe83a
    MOV ECX,dword ptr [EBX + 0x10a78]   ; 004fe840
    ADD ESP,0x8                         ; 004fe846
    TEST ECX,ECX                        ; 004fe849
    JZ 0x004fe915                       ; 004fe84b
        ;   XREF to: 004fe915 (CONDITIONAL_JUMP)  ; LAB_004fe915
    MOV ESI,dword ptr [EBX + 0x10b18]   ; 004fe851
    TEST ESI,ESI                        ; 004fe857
    JZ 0x004fe8d0                       ; 004fe859
        ;   XREF to: 004fe8d0 (CONDITIONAL_JUMP)  ; LAB_004fe8d0
    CMP dword ptr [EBX + 0x10b14],0x0   ; 004fe85b
    JNZ 0x004fe960                      ; 004fe862
        ;   XREF to: 004fe960 (CONDITIONAL_JUMP)  ; LAB_004fe960
    LEA EAX,[EBX + 0x20]                ; 004fe868
    LEA EDI,[EBP + 0xffffff66]          ; 004fe86b
    FLD float ptr [EAX]                 ; 004fe871
    FLD float ptr [EAX + 0x4]           ; 004fe873
    FLD float ptr [EAX + 0x8]           ; 004fe876
    FXCH ST2                            ; 004fe879
    FSUB float ptr [ESI + 0x20]         ; 004fe87b
    FXCH                                ; 004fe87e
    FSUB float ptr [ESI + 0x24]         ; 004fe880
    FXCH ST2                            ; 004fe883
    FSUB float ptr [ESI + 0x28]         ; 004fe885
    FXCH                                ; 004fe888
    FSTP float ptr [EBP + 0xfffffeb2]   ; 004fe88a
    FXCH                                ; 004fe890
    FSTP float ptr [EBP + 0xfffffeb6]   ; 004fe892
    LEA ESI,[EBP + 0xfffffeb2]          ; 004fe898
    FSTP float ptr [EBP + 0xfffffeba]   ; 004fe89e
    MOVSD ES:EDI,ESI                    ; 004fe8a4
    MOVSD ES:EDI,ESI                    ; 004fe8a5
    MOVSD ES:EDI,ESI                    ; 004fe8a6
    FLD float ptr [EBP + 0xffffff6a]    ; 004fe8a7
    FMUL ST0                            ; 004fe8ad
    FLD float ptr [EBP + 0xffffff66]    ; 004fe8af
    FMUL ST0                            ; 004fe8b5
    FADDP                               ; 004fe8b7
    FLD float ptr [EBP + 0xffffff6e]    ; 004fe8b9
    FMUL ST0                            ; 004fe8bf
    FADDP                               ; 004fe8c1
    FSQRT                               ; 004fe8c3
    FCOMP double ptr [0x005dedc5]       ; 004fe8c5 | DAT_005dedc5
    FNSTSW AX                           ; 004fe8cb
    SAHF                                ; 004fe8cd
    JA 0x004fe941                       ; 004fe8ce
        ;   XREF to: 004fe941 (CONDITIONAL_JUMP)  ; LAB_004fe941
    CMP dword ptr [EBX + 0x10b1c],0x0   ; 004fe8d0
        ;   Label: LAB_004fe8d0
    JZ 0x004fe96f                       ; 004fe8d7
        ;   XREF to: 004fe96f (CONDITIONAL_JUMP)  ; LAB_004fe96f
    FLD float ptr [EBX + 0x10bc8]       ; 004fe8dd
    FCOMP double ptr [0x005dedb5]       ; 004fe8e3 | DAT_005dedb5
    FNSTSW AX                           ; 004fe8e9
    SAHF                                ; 004fe8eb
    JBE 0x004fe1e1                      ; 004fe8ec
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3e800000                     ; 004fe8f2
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004fe8f7
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004fe8fc
    TEST EAX,EAX                        ; 004fe8ff
    JZ 0x004fe81f                       ; 004fe901
        ;   XREF to: 004fe81f (CONDITIONAL_JUMP)  ; LAB_004fe81f
    PUSH EBX                            ; 004fe907
    CALL core_mobster.cpp_CMobster_dismountVehicle_FUN_004fdd50 ; 004fe908
        ;   XREF to: 004fdd50 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_dismountVehicle_FUN_004fdd50(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fe90d
    JMP 0x004fe1e1                      ; 004fe910
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004fe915
        ;   Label: LAB_004fe915
    PUSH EBX                            ; 004fe91b
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004fe91c
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004fe921
    TEST EAX,EAX                        ; 004fe924
    JZ 0x004fe1e1                       ; 004fe926
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004fe92c
    PUSH 0x1                            ; 004fe92e
    MOV ESI,dword ptr [EBP + 0x6a]      ; 004fe930
    PUSH ESI                            ; 004fe933
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fe934
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe939
    JMP 0x004fe1e1                      ; 004fe93c
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004fe941
        ;   Label: LAB_004fe941
    PUSH 0x8                            ; 004fe943
    MOV ECX,dword ptr [EBP + 0x6a]      ; 004fe945
    PUSH ECX                            ; 004fe948
    MOV dword ptr [EBX + 0x10b14],0x1   ; 004fe949
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fe953
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fe958
    JMP 0x004fe1e1                      ; 004fe95b
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EBX + 0x10b14],0x0   ; 004fe960
        ;   Label: LAB_004fe960
    JMP 0x004fe8d0                      ; 004fe96a
        ;   XREF to: 004fe8d0 (UNCONDITIONAL_JUMP)  ; LAB_004fe8d0
    LEA EDI,[EBP + 0x26]                ; 004fe96f
        ;   Label: LAB_004fe96f
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004fe972
    LEA ESI,[EBP + 0x3e]                ; 004fe978
    LEA EAX,[EBX + 0x20]                ; 004fe97b
    FLD float ptr [EDX + 0x20]          ; 004fe97e
    FLD float ptr [EDX + 0x24]          ; 004fe981
    FLD float ptr [EDX + 0x28]          ; 004fe984
    FXCH ST2                            ; 004fe987
    FSUB float ptr [EAX]                ; 004fe989
    FXCH                                ; 004fe98b
    FSUB float ptr [EAX + 0x4]          ; 004fe98d
    FXCH ST2                            ; 004fe990
    FSUB float ptr [EAX + 0x8]          ; 004fe992
    FXCH                                ; 004fe995
    FSTP float ptr [EBP + 0x3e]         ; 004fe997
    FXCH                                ; 004fe99a
    FSTP float ptr [EBP + 0x42]         ; 004fe99c
    FSTP float ptr [EBP + 0x46]         ; 004fe99f
    MOVSD ES:EDI,ESI                    ; 004fe9a2
    MOVSD ES:EDI,ESI                    ; 004fe9a3
    MOVSD ES:EDI,ESI                    ; 004fe9a4
    FLD float ptr [EBP + 0x2a]          ; 004fe9a5
    FMUL ST0                            ; 004fe9a8
    FLD float ptr [EBP + 0x26]          ; 004fe9aa
    FMUL ST0                            ; 004fe9ad
    FADDP                               ; 004fe9af
    FLD float ptr [EBP + 0x2e]          ; 004fe9b1
    FMUL ST0                            ; 004fe9b4
    FADDP                               ; 004fe9b6
    FSQRT                               ; 004fe9b8
    FLD float ptr [0x005fa228]          ; 004fe9ba | DAT_005fa228
    FLD1                                ; 004fe9c0
    FADDP                               ; 004fe9c2
    FXCH                                ; 004fe9c4
    FSTP float ptr [EBP + 0x6e]         ; 004fe9c6
    MOV EAX,dword ptr [EBP + 0x6e]      ; 004fe9c9
    FLD float ptr [EBP + 0x6e]          ; 004fe9cc
    MOV dword ptr [EBP + 0x5a],EAX      ; 004fe9cf
    FCOMPP                              ; 004fe9d2
    FNSTSW AX                           ; 004fe9d4
    SAHF                                ; 004fe9d6
    JNC 0x004fea4a                      ; 004fe9d7
        ;   XREF to: 004fea4a (CONDITIONAL_JUMP)  ; LAB_004fea4a
    LEA EAX,[EBP + 0x26]                ; 004fe9d9
    PUSH EAX                            ; 004fe9dc
    LEA ESI,[EBP + 0xffffff5a]          ; 004fe9dd
    LEA EDI,[EBP + 0xe]                 ; 004fe9e3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004fe9e6
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff5a]          ; 004fe9eb
    MOVSD ES:EDI,ESI                    ; 004fe9f1
    MOVSD ES:EDI,ESI                    ; 004fe9f2
    MOVSD ES:EDI,ESI                    ; 004fe9f3
    ADD ESP,0x4                         ; 004fe9f4
    FLD float ptr [EBP + 0x12]          ; 004fe9f7
    FSUB float ptr [EBX + 0x34]         ; 004fe9fa
    SUB ESP,0x4                         ; 004fe9fd
    FSTP float ptr [ESP]                ; 004fea00
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004fea03
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fea08
    FLD float ptr [EBP + 0x76]          ; 004fea0b
    FABS                                ; 004fea0e
    ADD ESP,0x4                         ; 004fea10
    FCOMP double ptr [0x005dedbd]       ; 004fea13 | DAT_005dedbd
    FNSTSW AX                           ; 004fea19
    SAHF                                ; 004fea1b
    JNC 0x004fea4a                      ; 004fea1c
        ;   XREF to: 004fea4a (CONDITIONAL_JUMP)  ; LAB_004fea4a
    FLD float ptr [EBX + 0x10a74]       ; 004fea1e
    FLDZ                                ; 004fea24
    FCOMPP                              ; 004fea26
    FNSTSW AX                           ; 004fea28
    SAHF                                ; 004fea2a
    JC 0x004fea4a                       ; 004fea2b
        ;   XREF to: 004fea4a (CONDITIONAL_JUMP)  ; LAB_004fea4a
    PUSH 0x1                            ; 004fea2d
    PUSH 0x9                            ; 004fea2f
    LEA EAX,[EBX + 0x2b4]               ; 004fea31
    PUSH EAX                            ; 004fea37
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fea38
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fea3d
    MOV dword ptr [EBX + 0x10a74],0x40000000 ; 004fea40
    FLD float ptr [EBP + 0x5a]          ; 004fea4a
        ;   Label: LAB_004fea4a
    FCOMP float ptr [EBX + 0x10a70]     ; 004fea4d
    FNSTSW AX                           ; 004fea53
    SAHF                                ; 004fea55
    JNC 0x004fea79                      ; 004fea56
        ;   XREF to: 004fea79 (CONDITIONAL_JUMP)  ; LAB_004fea79
    FLD float ptr [EBP + 0x5a]          ; 004fea58
    LEA EDX,[EBX + 0x2b4]               ; 004fea5b
    FCOMP float ptr [0x005fa238]        ; 004fea61 | DAT_005fa238
    FNSTSW AX                           ; 004fea67
    SAHF                                ; 004fea69
    JNC 0x004fea91                      ; 004fea6a
        ;   XREF to: 004fea91 (CONDITIONAL_JUMP)  ; LAB_004fea91
    PUSH 0x1                            ; 004fea6c
    PUSH 0x1                            ; 004fea6e
    PUSH EDX                            ; 004fea70
        ;   Label: LAB_004fea70
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fea71
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fea76
    CMP dword ptr [EBX + 0x10b08],0x0   ; 004fea79
        ;   Label: LAB_004fea79
    JZ 0x004fea97                       ; 004fea80
        ;   XREF to: 004fea97 (CONDITIONAL_JUMP)  ; LAB_004fea97
    MOV dword ptr [EBX + 0x10b08],0x1   ; 004fea82
        ;   Label: LAB_004fea82
    JMP 0x004fe1e1                      ; 004fea8c
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004fea91
        ;   Label: LAB_004fea91
    PUSH 0x8                            ; 004fea93
    JMP 0x004fea70                      ; 004fea95
        ;   XREF to: 004fea70 (UNCONDITIONAL_JUMP)  ; LAB_004fea70
    PUSH 0x3f333333                     ; 004fea97
        ;   Label: LAB_004fea97
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004fea9c
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004feaa1
    TEST EAX,EAX                        ; 004feaa4
    JZ 0x004fea82                       ; 004feaa6
        ;   XREF to: 004fea82 (CONDITIONAL_JUMP)  ; LAB_004fea82
    PUSH 0x1                            ; 004feaa8
    PUSH EBX                            ; 004feaaa
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_00500370 ; 004feaab
        ;   XREF to: 00500370 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_00500370(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 004feab0
    MOV dword ptr [EBX + 0x10b08],0x1   ; 004feab3
    JMP 0x004fe1e1                      ; 004feabd
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004feac2
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004feac8
    PUSH EBX                            ; 004feace
    CALL dword ptr [EAX + 0x150]        ; 004feacf
    ADD ESP,0x8                         ; 004fead5
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004fead8
    LEA ESI,[EBX + 0x2b4]               ; 004feade
    TEST EDX,EDX                        ; 004feae4
    JZ 0x004feb7a                       ; 004feae6
        ;   XREF to: 004feb7a (CONDITIONAL_JUMP)  ; LAB_004feb7a
    CMP dword ptr [EBX + 0x10b14],0x0   ; 004feaec
    JZ 0x004febc1                       ; 004feaf3
        ;   XREF to: 004febc1 (CONDITIONAL_JUMP)  ; LAB_004febc1
    PUSH 0x3e32b8c2                     ; 004feaf9
    LEA EAX,[EBX + 0x2508]              ; 004feafe
    PUSH 0x3f000000                     ; 004feb04
    MOV dword ptr [EAX + 0x8],0x0       ; 004feb09
    XOR EDI,EDI                         ; 004feb10
    MOV EDX,dword ptr [EAX + 0x8]       ; 004feb12
    MOV dword ptr [EAX + 0x4],EDX       ; 004feb15
    MOV EDX,dword ptr [EAX + 0x4]       ; 004feb18
    MOV dword ptr [EAX],EDX             ; 004feb1b
    MOV EAX,[0x005fa228]                ; 004feb1d | DAT_005fa228
    MOV dword ptr [EBP + -0x6a],EDI     ; 004feb22
    MOV dword ptr [EBP + -0x62],EAX     ; 004feb25
    LEA EAX,[EBP + -0x6a]               ; 004feb28
    MOV dword ptr [EBP + -0x66],EDI     ; 004feb2b
    PUSH EAX                            ; 004feb2e
    MOV EAX,dword ptr [EBX + 0x10b18]   ; 004feb2f
    PUSH EAX                            ; 004feb35
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004feb36
    CALL dword ptr [EDX + 0xcc]         ; 004feb3c
    ADD ESP,0x4                         ; 004feb42
    PUSH EAX                            ; 004feb45
    MOV EAX,dword ptr [EBX + 0x10b18]   ; 004feb46
    ADD EAX,0x20                        ; 004feb4c
    PUSH EAX                            ; 004feb4f
    PUSH EBX                            ; 004feb50
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004feb51
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004feb56
    TEST EAX,EAX                        ; 004feb59
    JG 0x004febb0                       ; 004feb5b
        ;   XREF to: 004febb0 (CONDITIONAL_JUMP)  ; LAB_004febb0
    JGE 0x004fe1e1                      ; 004feb5d
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004feb63
    PUSH EDI                            ; 004feb65
    PUSH ESI                            ; 004feb66
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004feb67
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004feb6c
    MOV dword ptr [EBX + 0x10b18],EDI   ; 004feb6f
    JMP 0x004fe1e1                      ; 004feb75
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004feb7a
        ;   Label: LAB_004feb7a
    PUSH EBX                            ; 004feb80
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 004feb81
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004feb86
    TEST EAX,EAX                        ; 004feb89
    JZ 0x004feb9f                       ; 004feb8b
        ;   XREF to: 004feb9f (CONDITIONAL_JUMP)  ; LAB_004feb9f
    PUSH 0x1                            ; 004feb8d
    PUSH 0x1                            ; 004feb8f
    PUSH ESI                            ; 004feb91
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004feb92
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004feb97
    JMP 0x004fe1e1                      ; 004feb9a
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004feb9f
        ;   Label: LAB_004feb9f
    PUSH EAX                            ; 004feba1
    PUSH ESI                            ; 004feba2
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004feba3
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004feba8
    JMP 0x004fe1e1                      ; 004febab
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004febb0
        ;   Label: LAB_004febb0
    PUSH EDI                            ; 004febb2
    PUSH ESI                            ; 004febb3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004febb4
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004febb9
    JMP 0x004fe1e1                      ; 004febbc
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 004febc1
        ;   Label: LAB_004febc1
    PUSH EBX                            ; 004febc7
    CALL core_mobster.cpp_CMobster_processWeaponPickup_FUN_004ff610 ; 004febc8
        ;   XREF to: 004ff610 (UNCONDITIONAL_CALL)  ; int core_mobster.cpp_CMobster_processWeaponPickup_FUN_004ff610(CMobster * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 004febcd
    TEST EAX,EAX                        ; 004febd0
    JNZ 0x004fe1e1                      ; 004febd2
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [0x005fa228]          ; 004febd8 | DAT_005fa228
    FLD1                                ; 004febde
    FADDP                               ; 004febe0
    MOV ESI,dword ptr [EBX + 0x2698]    ; 004febe2
    FSTP float ptr [EBP + 0x52]         ; 004febe8
    TEST ESI,ESI                        ; 004febeb
    JZ 0x004febf7                       ; 004febed
        ;   XREF to: 004febf7 (CONDITIONAL_JUMP)  ; LAB_004febf7
    MOV EAX,[0x005fa22c]                ; 004febef | DAT_005fa22c
    MOV dword ptr [EBP + 0x52],EAX      ; 004febf4
    PUSH 0x3e32b8c2                     ; 004febf7
        ;   Label: LAB_004febf7
    LEA EAX,[EBX + 0x2508]              ; 004febfc
    PUSH 0x3f000000                     ; 004fec02
    MOV dword ptr [EAX + 0x8],0x0       ; 004fec07
    XOR EDI,EDI                         ; 004fec0e
    MOV EDX,dword ptr [EAX + 0x8]       ; 004fec10
    MOV dword ptr [EAX + 0x4],EDX       ; 004fec13
    MOV EDX,dword ptr [EAX + 0x4]       ; 004fec16
    MOV dword ptr [EAX],EDX             ; 004fec19
    MOV EAX,[0x005fa228]                ; 004fec1b | DAT_005fa228
    MOV dword ptr [EBP + -0x46],EDI     ; 004fec20
    MOV dword ptr [EBP + 0x56],EAX      ; 004fec23
    MOV dword ptr [EBP + -0x3e],EAX     ; 004fec26
    LEA EAX,[EBP + -0x46]               ; 004fec29
    MOV dword ptr [EBP + -0x42],EDI     ; 004fec2c
    PUSH EAX                            ; 004fec2f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004fec30
    PUSH EAX                            ; 004fec36
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 004fec37
    CALL dword ptr [EDX + 0xcc]         ; 004fec3d
    ADD ESP,0x4                         ; 004fec43
    PUSH EAX                            ; 004fec46
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 004fec47
    ADD EAX,0x20                        ; 004fec4d
    PUSH EAX                            ; 004fec50
    PUSH EBX                            ; 004fec51
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 004fec52
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 004fec57
    TEST EAX,EAX                        ; 004fec5a
    JL 0x004fe1e1                       ; 004fec5c
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + -0x3a]               ; 004fec62
    LEA ECX,[EBX + 0x20]                ; 004fec65
    LEA ESI,[EBP + 0xffffff4e]          ; 004fec68
    MOV EDX,dword ptr [EBX + 0x10a78]   ; 004fec6e
    FLD float ptr [ECX]                 ; 004fec74
    FLD float ptr [ECX + 0x4]           ; 004fec76
    FLD float ptr [ECX + 0x8]           ; 004fec79
    FXCH ST2                            ; 004fec7c
    FSUB float ptr [EDX + 0x20]         ; 004fec7e
    FXCH                                ; 004fec81
    FSUB float ptr [EDX + 0x24]         ; 004fec83
    FXCH ST2                            ; 004fec86
    FSUB float ptr [EDX + 0x28]         ; 004fec88
    FXCH                                ; 004fec8b
    FSTP float ptr [EBP + 0xffffff4e]   ; 004fec8d
    FXCH                                ; 004fec93
    FSTP float ptr [EBP + 0xffffff52]   ; 004fec95
    FSTP float ptr [EBP + 0xffffff56]   ; 004fec9b
    MOVSD ES:EDI,ESI                    ; 004feca1
    MOVSD ES:EDI,ESI                    ; 004feca2
    MOVSD ES:EDI,ESI                    ; 004feca3
    FLD float ptr [EBP + -0x3a]         ; 004feca4
    FMUL ST0                            ; 004feca7
    FLD float ptr [EBP + -0x32]         ; 004feca9
    FMUL ST0                            ; 004fecac
    FADDP                               ; 004fecae
    FSQRT                               ; 004fecb0
    XOR ESI,ESI                         ; 004fecb2
    ADD EDX,0x20                        ; 004fecb4
    MOV dword ptr [EBP + -0x36],ESI     ; 004fecb7
    FSTP float ptr [EBP + 0x66]         ; 004fecba
    MOV EAX,dword ptr [EBP + 0x66]      ; 004fecbd
    FLD float ptr [EBP + 0x66]          ; 004fecc0
    MOV dword ptr [EBP + 0x4e],EAX      ; 004fecc3
    FCOMP float ptr [EBP + 0x52]        ; 004fecc6
    FNSTSW AX                           ; 004fecc9
    SAHF                                ; 004feccb
    JA 0x004fedc1                       ; 004feccc
        ;   XREF to: 004fedc1 (CONDITIONAL_JUMP)  ; LAB_004fedc1
    FLD float ptr [EBX + 0x10a74]       ; 004fecd2
    FLDZ                                ; 004fecd8
    FCOMPP                              ; 004fecda
    FNSTSW AX                           ; 004fecdc
    SAHF                                ; 004fecde
    JC 0x004fedc1                       ; 004fecdf
        ;   XREF to: 004fedc1 (CONDITIONAL_JUMP)  ; LAB_004fedc1
    LEA EAX,[EBX + 0x2b4]               ; 004fece5
    MOV EDI,dword ptr [EBX + 0x2698]    ; 004feceb
    MOV dword ptr [EBP + 0x5e],EAX      ; 004fecf1
    TEST EDI,EDI                        ; 004fecf4
    JZ 0x004fee7e                       ; 004fecf6
        ;   XREF to: 004fee7e (CONDITIONAL_JUMP)  ; LAB_004fee7e
    FLD float ptr [EBP + 0x56]          ; 004fecfc
    FLD1                                ; 004fecff
    FADDP                               ; 004fed01
    FLD float ptr [EBP + 0x66]          ; 004fed03
    FCOMPP                              ; 004fed06
    FNSTSW AX                           ; 004fed08
    SAHF                                ; 004fed0a
    JNC 0x004fedeb                      ; 004fed0b
        ;   XREF to: 004fedeb (CONDITIONAL_JUMP)  ; LAB_004fedeb
    FLD float ptr [EDX]                 ; 004fed11
    FLD float ptr [EDX + 0x4]           ; 004fed13
    FLD float ptr [EDX + 0x8]           ; 004fed16
    LEA EDI,[EBP + 0xffffff12]          ; 004fed19
    LEA ESI,[EBP + -0x5e]               ; 004fed1f
    LEA EAX,[EBP + 0xffffff12]          ; 004fed22
    FXCH ST2                            ; 004fed28
    FSUB float ptr [ECX]                ; 004fed2a
    FXCH                                ; 004fed2c
    FSUB float ptr [ECX + 0x4]          ; 004fed2e
    FXCH ST2                            ; 004fed31
    FSUB float ptr [ECX + 0x8]          ; 004fed33
    FXCH                                ; 004fed36
    FSTP float ptr [EBP + -0x5e]        ; 004fed38
    FXCH                                ; 004fed3b
    FSTP float ptr [EBP + -0x5a]        ; 004fed3d
    FSTP float ptr [EBP + -0x56]        ; 004fed40
    MOVSD ES:EDI,ESI                    ; 004fed43
    MOVSD ES:EDI,ESI                    ; 004fed44
    MOVSD ES:EDI,ESI                    ; 004fed45
    PUSH EAX                            ; 004fed46
    LEA ESI,[EBP + 0xffffff42]          ; 004fed47
    LEA EDI,[EBP + 0xffffff2a]          ; 004fed4d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004fed53
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + 0xffffff42]          ; 004fed58
    MOVSD ES:EDI,ESI                    ; 004fed5e
    MOVSD ES:EDI,ESI                    ; 004fed5f
    MOVSD ES:EDI,ESI                    ; 004fed60
    ADD ESP,0x4                         ; 004fed61
    FLD float ptr [EBP + 0xffffff2e]    ; 004fed64
    FSUB float ptr [EBX + 0x34]         ; 004fed6a
    SUB ESP,0x4                         ; 004fed6d
    FSTP float ptr [ESP]                ; 004fed70
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004fed73
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004fed78
    FLD float ptr [EBP + 0x76]          ; 004fed7b
    FABS                                ; 004fed7e
    ADD ESP,0x4                         ; 004fed80
    FCOMP double ptr [0x005dedbd]       ; 004fed83 | DAT_005dedbd
    FNSTSW AX                           ; 004fed89
    SAHF                                ; 004fed8b
    JNC 0x004fedb7                      ; 004fed8c
        ;   XREF to: 004fedb7 (CONDITIONAL_JUMP)  ; LAB_004fedb7
    FLD float ptr [EBX + 0x10a74]       ; 004fed8e
    FLDZ                                ; 004fed94
    FCOMPP                              ; 004fed96
    FNSTSW AX                           ; 004fed98
    SAHF                                ; 004fed9a
    JC 0x004fedb7                       ; 004fed9b
        ;   XREF to: 004fedb7 (CONDITIONAL_JUMP)  ; LAB_004fedb7
    PUSH 0x1                            ; 004fed9d
    PUSH 0x9                            ; 004fed9f
    MOV ECX,dword ptr [EBP + 0x5e]      ; 004feda1
    PUSH ECX                            ; 004feda4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004feda5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fedaa
    MOV dword ptr [EBX + 0x10a74],0x40000000 ; 004fedad
    MOV dword ptr [EBX + 0x10a74],0x3f800000 ; 004fedb7
        ;   Label: LAB_004fedb7
    FLD float ptr [EBP + 0x4e]          ; 004fedc1
        ;   Label: LAB_004fedc1
    FCOMP float ptr [EBX + 0x10a70]     ; 004fedc4
    FNSTSW AX                           ; 004fedca
    SAHF                                ; 004fedcc
    JBE 0x004fe1e1                      ; 004fedcd
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 004fedd3
    PUSH 0x0                            ; 004fedd5
    LEA EAX,[EBX + 0x2b4]               ; 004fedd7
    PUSH EAX                            ; 004feddd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fedde
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fede3
    JMP 0x004fe1e1                      ; 004fede6
        ;   XREF to: 004fe1e1 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0x10bc8]       ; 004fedeb
        ;   Label: LAB_004fedeb
    FCOMP double ptr [0x005dedb5]       ; 004fedf1 | DAT_005dedb5
    FNSTSW AX                           ; 004fedf7
    SAHF                                ; 004fedf9
    JBE 0x004fedb7                      ; 004fedfa
        ;   XREF to: 004fedb7 (CONDITIONAL_JUMP)  ; LAB_004fedb7
    FLD float ptr [EBX + 0x10bcc]       ; 004fedfc
    FLDZ                                ; 004fee02
    FCOMPP                              ; 004fee04
    FNSTSW AX                           ; 004fee06
    SAHF                                ; 004fee08
    JC 0x004fedb7                       ; 004fee09
        ;   XREF to: 004fedb7 (CONDITIONAL_JUMP)  ; LAB_004fedb7
    PUSH 0x3e99999a                     ; 004fee0b
    MOV dword ptr [EBX + 0x10b10],ESI   ; 004fee10
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 004fee16
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 004fee1b
    TEST EAX,EAX                        ; 004fee1e
    JZ 0x004fee2d                       ; 004fee20
        ;   XREF to: 004fee2d (CONDITIONAL_JUMP)  ; LAB_004fee2d
    PUSH 0x2                            ; 004fee22
    PUSH EBX                            ; 004fee24
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_00500370 ; 004fee25
        ;   XREF to: 00500370 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_00500370(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 004fee2a
    FLD float ptr [EBX + 0x10b10]       ; 004fee2d
        ;   Label: LAB_004fee2d
    FLDZ                                ; 004fee33
    FCOMPP                              ; 004fee35
    FNSTSW AX                           ; 004fee37
    SAHF                                ; 004fee39
    JNC 0x004fee70                      ; 004fee3a
        ;   XREF to: 004fee70 (CONDITIONAL_JUMP)  ; LAB_004fee70
    MOV EDX,dword ptr [EBX + 0x2620]    ; 004fee3c
    LEA EAX,[EBX + 0x2b4]               ; 004fee42
    TEST EDX,EDX                        ; 004fee48
    JZ 0x004fee5e                       ; 004fee4a
        ;   XREF to: 004fee5e (CONDITIONAL_JUMP)  ; LAB_004fee5e
    PUSH 0x1                            ; 004fee4c
    PUSH 0xb                            ; 004fee4e
    PUSH EAX                            ; 004fee50
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fee51
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fee56
    JMP 0x004fedb7                      ; 004fee59
        ;   XREF to: 004fedb7 (UNCONDITIONAL_JUMP)  ; LAB_004fedb7
    PUSH 0x1                            ; 004fee5e
        ;   Label: LAB_004fee5e
    PUSH 0xa                            ; 004fee60
    PUSH EAX                            ; 004fee62
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004fee63
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fee68
    JMP 0x004fedb7                      ; 004fee6b
        ;   XREF to: 004fedb7 (UNCONDITIONAL_JUMP)  ; LAB_004fedb7
    PUSH EBX                            ; 004fee70
        ;   Label: LAB_004fee70
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00 ; 004fee71
        ;   XREF to: 004ffb00 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_004ffb00(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fee76
    JMP 0x004fedb7                      ; 004fee79
        ;   XREF to: 004fedb7 (UNCONDITIONAL_JUMP)  ; LAB_004fedb7
    FLD float ptr [EDX]                 ; 004fee7e
        ;   Label: LAB_004fee7e
    FLD float ptr [EDX + 0x4]           ; 004fee80
    FLD float ptr [EDX + 0x8]           ; 004fee83
    LEA EDI,[EBP + -0x52]               ; 004fee86
    LEA ESI,[EBP + -0x76]               ; 004fee89
    LEA EAX,[EBP + -0x52]               ; 004fee8c
    FXCH ST2                            ; 004fee8f
    FSUB float ptr [ECX]                ; 004fee91
    FXCH                                ; 004fee93
    FSUB float ptr [ECX + 0x4]          ; 004fee95
    FXCH ST2                            ; 004fee98
    FSUB float ptr [ECX + 0x8]          ; 004fee9a
    FXCH                                ; 004fee9d
    FSTP float ptr [EBP + -0x76]        ; 004fee9f
    FXCH                                ; 004feea2
    FSTP float ptr [EBP + -0x72]        ; 004feea4
    FSTP float ptr [EBP + -0x6e]        ; 004feea7
    MOVSD ES:EDI,ESI                    ; 004feeaa
    MOVSD ES:EDI,ESI                    ; 004feeab
    MOVSD ES:EDI,ESI                    ; 004feeac
    PUSH EAX                            ; 004feead
    LEA ESI,[EBP + -0x2e]               ; 004feeae
    LEA EDI,[EBP + 0xffffff72]          ; 004feeb1
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0 ; 004feeb7
        ;   XREF to: 005838f0 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005838f0()
    LEA ESI,[EBP + -0x2e]               ; 004feebc
    MOVSD ES:EDI,ESI                    ; 004feebf
    MOVSD ES:EDI,ESI                    ; 004feec0
    MOVSD ES:EDI,ESI                    ; 004feec1
    ADD ESP,0x4                         ; 004feec2
    FLD float ptr [EBP + 0xffffff76]    ; 004feec5
    FSUB float ptr [EBX + 0x34]         ; 004feecb
    SUB ESP,0x4                         ; 004feece
    FSTP float ptr [ESP]                ; 004feed1
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0 ; 004feed4
        ;   XREF to: 0040d0c0 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040d0c0(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 004feed9
    FLD float ptr [EBP + 0x76]          ; 004feedc
    FABS                                ; 004feedf
    ADD ESP,0x4                         ; 004feee1
    FCOMP double ptr [0x005dedbd]       ; 004feee4 | DAT_005dedbd
    FNSTSW AX                           ; 004feeea
    SAHF                                ; 004feeec
    JNC 0x004fedb7                      ; 004feeed
        ;   XREF to: 004fedb7 (CONDITIONAL_JUMP)  ; LAB_004fedb7
    PUSH 0x1                            ; 004feef3
    PUSH 0x9                            ; 004feef5
    MOV EAX,dword ptr [EBP + 0x5e]      ; 004feef7
    PUSH EAX                            ; 004feefa
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 004feefb
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004fef00
    JMP 0x004fedb7                      ; 004fef03
        ;   XREF to: 004fedb7 (UNCONDITIONAL_JUMP)  ; LAB_004fedb7
    CMP ESI,0xb                         ; 004fef08
        ;   Label: LAB_004fef08
    JA 0x004fe1e1                       ; 004fef0b
        ;   XREF to: 004fe1e1 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [ESI*0x4 + 0x4fde50]  ; 004fef11 | caseD_0 | caseD_8 | caseD_6
        ;   Label: switchD
    PUSH EBX                            ; 004fef18
        ;   Label: LAB_004fef18
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60 ; 004fef19
        ;   XREF to: 004fdc60 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_positionOnVehicle_FUN_004fdc60(CMobster * this_ptr)
    ADD ESP,0x4                         ; 004fef1e
    JMP 0x004fe34f                      ; 004fef21
        ;   XREF to: 004fe34f (UNCONDITIONAL_JUMP)  ; LAB_004fe34f

