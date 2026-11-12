; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_process_FUN_0051ce40(CMobster *this_ptr,float delta_time)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   undefined1* switchdataD_0051ce10 = 0051d7af
;   TerminatedCString s_mob_scream_wav_005e9dc2
;   TerminatedCString s_s_confused_while_walking_005e9dd2
;   undefined4 DAT_005e9e02
;   undefined4 DAT_005e9e0a
;   undefined4 DAT_005e9e12
;   undefined4 DAT_00603d58
;   undefined4 DAT_00603d5c
;   undefined4 DAT_00603d68
;   CConsole* g_CConsolePtr = 007db5f0
;   undefined4 DAT_0061b4d0
;   CGore* g_CGorePtr = 01cd0e3c
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   CConsole g_CConsoleInstance
;   undefined4 DAT_01d06ab4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd60
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80
;   core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120
;   core_charactr.cpp_CCharacter_preProcess_FUN_0042e160
;   core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0
;   core_charactr.cpp_CCharacter_processMotion_FUN_00434a80
;   core_charactr.cpp_CCharacter_processWalking_FUN_00432240
;   core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0
;   core_charactr.cpp_FUN_0042d700
;   core_charactr.cpp_FUN_0042d750
;   ... and 25 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051ce40
        ;   Label: core_mobster.cpp_CMobster_process_FUN_0051ce40
    PUSH ESI                            ; 0051ce41
    PUSH EDI                            ; 0051ce42
    PUSH EBP                            ; 0051ce43
    MOV EBP,ESP                         ; 0051ce44
    SUB ESP,0x258                       ; 0051ce46
    SUB EBP,0x7a                        ; 0051ce4c
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0051ce4f
    PUSH dword ptr [EBP + 0x92]         ; 0051ce55
    PUSH EBX                            ; 0051ce5b
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0 ; 0051ce5c
        ;   XREF to: 0042e1a0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_0042e1a0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ce61
    TEST EAX,EAX                        ; 0051ce64
    JNZ 0x0051ce93                      ; 0051ce66
        ;   XREF to: 0051ce93 (CONDITIONAL_JUMP)  ; LAB_0051ce93
    CMP dword ptr [EBX + 0xc28c],0x0    ; 0051ce68
    JNZ 0x0051ce79                      ; 0051ce6f
        ;   XREF to: 0051ce79 (CONDITIONAL_JUMP)  ; LAB_0051ce79
    LEA ESP,[EBP + 0x7a]                ; 0051ce71
        ;   Label: LAB_0051ce71
    POP EBP                             ; 0051ce74
    POP EDI                             ; 0051ce75
    POP ESI                             ; 0051ce76
    POP EBX                             ; 0051ce77
    RET                                 ; 0051ce78
    PUSH EBX                            ; 0051ce79
        ;   Label: LAB_0051ce79
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_0051cc20 ; 0051ce7a
        ;   XREF to: 0051cc20 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_positionOnVehicle_FUN_0051cc20(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051ce7f
    PUSH dword ptr [EBP + 0x92]         ; 0051ce82
    PUSH EBX                            ; 0051ce88
    CALL core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0 ; 0051ce89
        ;   XREF to: 004328f0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_updateCarriedObjects_FUN_004328f0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051ce8e
    JMP 0x0051ce71                      ; 0051ce91
        ;   XREF to: 0051ce71 (UNCONDITIONAL_JUMP)  ; LAB_0051ce71
    MOV EAX,dword ptr [EBX + 0xc334]    ; 0051ce93
        ;   Label: LAB_0051ce93
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0051ce99
    JZ 0x0051d00b                       ; 0051cea1
        ;   XREF to: 0051d00b (CONDITIONAL_JUMP)  ; LAB_0051d00b
    CMP dword ptr [EBX + 0xb9e8],0x0    ; 0051cea7
        ;   Label: LAB_0051cea7
    JZ 0x0051ceba                       ; 0051ceae
        ;   XREF to: 0051ceba (CONDITIONAL_JUMP)  ; LAB_0051ceba
    MOV dword ptr [EBX + 0xb9ec],0x0    ; 0051ceb0
    CMP dword ptr [EBX + 0x3120],0x0    ; 0051ceba
        ;   Label: LAB_0051ceba
    JLE 0x0051cf25                      ; 0051cec1
        ;   XREF to: 0051cf25 (CONDITIONAL_JUMP)  ; LAB_0051cf25
    PUSH 0x0                            ; 0051cec3
    PUSH 0x1                            ; 0051cec5
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051cec7
    PUSH EBX                            ; 0051cecd
    CALL dword ptr [EAX + 0x128]        ; 0051cece
    ADD ESP,0xc                         ; 0051ced4
    PUSH 0x0                            ; 0051ced7
    PUSH 0x0                            ; 0051ced9
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051cedb
    PUSH EBX                            ; 0051cee1
    CALL dword ptr [EAX + 0x128]        ; 0051cee2
    ADD ESP,0xc                         ; 0051cee8
    MOV EAX,dword ptr [EBX + 0xc300]    ; 0051ceeb
    PUSH EAX                            ; 0051cef1
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0051cef2
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0051cef7
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051cefa
    PUSH EBX                            ; 0051cf00
    CALL dword ptr [EAX + 0x10c]        ; 0051cf01
    ADD ESP,0x4                         ; 0051cf07
    TEST EAX,EAX                        ; 0051cf0a
    JNZ 0x0051cf25                      ; 0051cf0c
        ;   XREF to: 0051cf25 (CONDITIONAL_JUMP)  ; LAB_0051cf25
    MOV EDX,dword ptr [EBX + 0xc308]    ; 0051cf0e
    PUSH EDX                            ; 0051cf14
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0051cf15
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0051cf1a
    TEST EAX,EAX                        ; 0051cf1d
    JZ 0x0051d04d                       ; 0051cf1f
        ;   XREF to: 0051d04d (CONDITIONAL_JUMP)  ; LAB_0051d04d
    FLD float ptr [EBX + 0xc33c]        ; 0051cf25
        ;   Label: LAB_0051cf25
    FSUB float ptr [EBP + 0x92]         ; 0051cf2b
    FST float ptr [EBX + 0xc33c]        ; 0051cf31
    FLDZ                                ; 0051cf37
    FCOMPP                              ; 0051cf39
    FNSTSW AX                           ; 0051cf3b
    SAHF                                ; 0051cf3d
    JBE 0x0051cf4a                      ; 0051cf3e
        ;   XREF to: 0051cf4a (CONDITIONAL_JUMP)  ; LAB_0051cf4a
    MOV dword ptr [EBX + 0xc33c],0x0    ; 0051cf40
    FLD float ptr [EBX + 0xc280]        ; 0051cf4a
        ;   Label: LAB_0051cf4a
    FSUB float ptr [EBP + 0x92]         ; 0051cf50
    FST float ptr [EBX + 0xc280]        ; 0051cf56
    FLDZ                                ; 0051cf5c
    FCOMPP                              ; 0051cf5e
    FNSTSW AX                           ; 0051cf60
    SAHF                                ; 0051cf62
    JBE 0x0051cf6f                      ; 0051cf63
        ;   XREF to: 0051cf6f (CONDITIONAL_JUMP)  ; LAB_0051cf6f
    MOV dword ptr [EBX + 0xc280],0x0    ; 0051cf65
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051cf6f
        ;   Label: LAB_0051cf6f
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051cf75
    TEST ESI,ESI                        ; 0051cf7c
    JZ 0x0051d081                       ; 0051cf7e
        ;   XREF to: 0051d081 (CONDITIONAL_JUMP)  ; LAB_0051d081
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051cf84
        ;   Label: LAB_0051cf84
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051cf8a
    TEST EDI,EDI                        ; 0051cf91
    JZ 0x0051d099                       ; 0051cf93
        ;   XREF to: 0051d099 (CONDITIONAL_JUMP)  ; LAB_0051d099
    CMP dword ptr [EBX + 0xc294],0x0    ; 0051cf99
        ;   Label: LAB_0051cf99
    JZ 0x0051d0b0                       ; 0051cfa0
        ;   XREF to: 0051d0b0 (CONDITIONAL_JUMP)  ; LAB_0051d0b0
    LEA EAX,[EBX + 0x249c]              ; 0051cfa6
        ;   Label: LAB_0051cfa6
    MOV dword ptr [EAX + 0x8],0x0       ; 0051cfac
    FLD float ptr [EBP + 0x92]          ; 0051cfb3
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051cfb9
    MOV dword ptr [EAX + 0x4],EDX       ; 0051cfbc
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051cfbf
    MOV dword ptr [EAX],EDX             ; 0051cfc2
    LEA EAX,[EBX + 0x158]               ; 0051cfc4
    FMUL float ptr [EBX + 0xc1d0]       ; 0051cfca
    MOV dword ptr [EBP + 0x6a],EAX      ; 0051cfd0
    FSTP float ptr [EBP + 0x4a]         ; 0051cfd3
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0051cfd6
    FLD float ptr [EBP + 0x4a]          ; 0051cfd9
        ;   Label: LAB_0051cfd9
    FLDZ                                ; 0051cfdc
    FCOMPP                              ; 0051cfde
    FNSTSW AX                           ; 0051cfe0
    SAHF                                ; 0051cfe2
    JNC 0x0051d111                      ; 0051cfe3
        ;   XREF to: 0051d111 (CONDITIONAL_JUMP)  ; LAB_0051d111
    LEA EAX,[EBP + 0x4a]                ; 0051cfe9
    PUSH EAX                            ; 0051cfec
    PUSH EDI                            ; 0051cfed
    CALL core_motion.cpp_CMotionController_advance_FUN_00524270 ; 0051cfee
        ;   XREF to: 00524270 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_00524270(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0051cff3
    CMP EAX,0x64                        ; 0051cff6
    JZ 0x0051d0dd                       ; 0051cff9
        ;   XREF to: 0051d0dd (CONDITIONAL_JUMP)  ; LAB_0051d0dd
    PUSH EAX                            ; 0051cfff
    PUSH EBX                            ; 0051d000
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_00434a80 ; 0051d001
        ;   XREF to: 00434a80 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_00434a80(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0051d006
    JMP 0x0051cfd9                      ; 0051d009
        ;   XREF to: 0051cfd9 (UNCONDITIONAL_JUMP)  ; LAB_0051cfd9
    LEA EAX,[EBP + 0xfffffe22]          ; 0051d00b
        ;   Label: LAB_0051d00b
    PUSH EAX                            ; 0051d011
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0051d012
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    MOV ECX,0x4479f99a                  ; 0051d017
    ADD ESP,0x4                         ; 0051d01c
    LEA EAX,[EBP + 0xfffffe22]          ; 0051d01f
    MOV dword ptr [EBP + 0xfffffe56],EBX ; 0051d025
    PUSH EAX                            ; 0051d02b
    MOV dword ptr [EBP + 0xfffffe5a],EBX ; 0051d02c
    MOV dword ptr [EBP + 0xfffffe26],ECX ; 0051d032
    PUSH EBX                            ; 0051d038
    MOV EDX,dword ptr [EBX + 0x154]     ; 0051d039
    CALL dword ptr [EDX + 0x108]        ; 0051d03f
    ADD ESP,0x8                         ; 0051d045
    JMP 0x0051cea7                      ; 0051d048
        ;   XREF to: 0051cea7 (UNCONDITIONAL_JUMP)  ; LAB_0051cea7
    MOV ECX,dword ptr [EBX + 0xc2fc]    ; 0051d04d
        ;   Label: LAB_0051d04d
    PUSH ECX                            ; 0051d053
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0051d054
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0051d059
    TEST EAX,EAX                        ; 0051d05c
    JNZ 0x0051cf25                      ; 0051d05e
        ;   XREF to: 0051cf25 (CONDITIONAL_JUMP)  ; LAB_0051cf25
    PUSH 0x5e9dc2                       ; 0051d064 | = "mob-scream?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d069
    PUSH EBX                            ; 0051d06f
    CALL dword ptr [EAX + 0x2c]         ; 0051d070
    ADD ESP,0x8                         ; 0051d073
    MOV dword ptr [EBX + 0xc308],EAX    ; 0051d076
    JMP 0x0051cf25                      ; 0051d07c
        ;   XREF to: 0051cf25 (UNCONDITIONAL_JUMP)  ; LAB_0051cf25
    PUSH ESI                            ; 0051d081
        ;   Label: LAB_0051d081
    PUSH 0x1                            ; 0051d082
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d084
    PUSH EBX                            ; 0051d08a
    CALL dword ptr [EAX + 0x128]        ; 0051d08b
    ADD ESP,0xc                         ; 0051d091
    JMP 0x0051cf84                      ; 0051d094
        ;   XREF to: 0051cf84 (UNCONDITIONAL_JUMP)  ; LAB_0051cf84
    PUSH EDI                            ; 0051d099
        ;   Label: LAB_0051d099
    PUSH EDI                            ; 0051d09a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d09b
    PUSH EBX                            ; 0051d0a1
    CALL dword ptr [EAX + 0x128]        ; 0051d0a2
    ADD ESP,0xc                         ; 0051d0a8
    JMP 0x0051cf99                      ; 0051d0ab
        ;   XREF to: 0051cf99 (UNCONDITIONAL_JUMP)  ; LAB_0051cf99
    LEA EAX,[EBX + 0xc298]              ; 0051d0b0
        ;   Label: LAB_0051d0b0
    PUSH EAX                            ; 0051d0b6
    MOV EDX,dword ptr [0x0061b4d0]      ; 0051d0b7 | DAT_0061b4d0
    PUSH EDX                            ; 0051d0bd
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30 ; 0051d0be
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004a6c30(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 0051d0c3
    TEST EAX,EAX                        ; 0051d0c6
    JZ 0x0051cfa6                       ; 0051d0c8
        ;   XREF to: 0051cfa6 (CONDITIONAL_JUMP)  ; LAB_0051cfa6
    MOV dword ptr [EBX + 0xc294],0x1    ; 0051d0ce
    JMP 0x0051cfa6                      ; 0051d0d8
        ;   XREF to: 0051cfa6 (UNCONDITIONAL_JUMP)  ; LAB_0051cfa6
    MOV EAX,dword ptr [EBX + 0xc274]    ; 0051d0dd
        ;   Label: LAB_0051d0dd
    TEST EAX,EAX                        ; 0051d0e3
    JZ 0x0051cfd9                       ; 0051d0e5
        ;   XREF to: 0051cfd9 (CONDITIONAL_JUMP)  ; LAB_0051cfd9
    PUSH 0x0                            ; 0051d0eb
    PUSH 0x3e4ccccd                     ; 0051d0ed
    PUSH EAX                            ; 0051d0f2
    MOV EDX,0x1                         ; 0051d0f3
    PUSH EDX                            ; 0051d0f8
    PUSH EBX                            ; 0051d0f9
    MOV dword ptr [EBX + 0xc274],0x0    ; 0051d0fa
    CALL core_charactr.cpp_FUN_004325b0 ; 0051d104
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 0051d109
    JMP 0x0051cfd9                      ; 0051d10c
        ;   XREF to: 0051cfd9 (UNCONDITIONAL_JUMP)  ; LAB_0051cfd9
    FLD float ptr [EBP + 0x92]          ; 0051d111
        ;   Label: LAB_0051d111
    FMUL float ptr [EBX + 0xc1d0]       ; 0051d117
    SUB ESP,0x4                         ; 0051d11d
    MOV EAX,dword ptr [EBX + 0x24a4]    ; 0051d120
    MOV dword ptr [EBX + 0x2524],EAX    ; 0051d126
    FSTP float ptr [ESP]                ; 0051d12c
    PUSH EBX                            ; 0051d12f
    CALL core_charactr.cpp_FUN_00435320 ; 0051d130
        ;   XREF to: 00435320 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00435320()
    ADD ESP,0x8                         ; 0051d135
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0051d138
    PUSH ESI                            ; 0051d13b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0051d13c
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 0051d141
    PUSH dword ptr [EBP + 0x92]         ; 0051d144
    PUSH EBX                            ; 0051d14a
    MOV ESI,dword ptr [EAX + 0x24]      ; 0051d14b
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_00432240 ; 0051d14e
        ;   XREF to: 00432240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_00432240(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051d153
    TEST EAX,EAX                        ; 0051d156
    JZ 0x0051dec8                       ; 0051d158
        ;   XREF to: 0051dec8 (CONDITIONAL_JUMP)  ; LAB_0051dec8
    MOV EAX,dword ptr [EBX + 0x273c]    ; 0051d15e
    CMP EAX,0x2                         ; 0051d164
    JNC 0x0051d3e0                      ; 0051d167
        ;   XREF to: 0051d3e0 (CONDITIONAL_JUMP)  ; LAB_0051d3e0
    CMP EAX,0x1                         ; 0051d16d
    JNZ 0x0051d3eb                      ; 0051d170
        ;   XREF to: 0051d3eb (CONDITIONAL_JUMP)  ; LAB_0051d3eb
    PUSH 0x1                            ; 0051d176
        ;   Label: LAB_0051d176
    PUSH 0x1                            ; 0051d178
    LEA EAX,[EBX + 0x158]               ; 0051d17a
        ;   Label: LAB_0051d17a
    PUSH EAX                            ; 0051d180
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d181
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d186
        ;   Label: LAB_0051d186
    LEA EAX,[EBX + 0x249c]              ; 0051d189
    MOV dword ptr [EAX + 0x8],0x0       ; 0051d18f
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051d196
    MOV dword ptr [EAX + 0x4],EDX       ; 0051d199
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051d19c
    MOV dword ptr [EAX],EDX             ; 0051d19f
    FLD float ptr [EBX + 0xc1e4]        ; 0051d1a1
        ;   Label: caseD_3
    FLDZ                                ; 0051d1a7
    FCOMPP                              ; 0051d1a9
    FNSTSW AX                           ; 0051d1ab
    SAHF                                ; 0051d1ad
    JNC 0x0051d1c2                      ; 0051d1ae
        ;   XREF to: 0051d1c2 (CONDITIONAL_JUMP)  ; LAB_0051d1c2
    FLD float ptr [EBX + 0xc1e4]        ; 0051d1b0
    FSUB float ptr [EBP + 0x92]         ; 0051d1b6
    FSTP float ptr [EBX + 0xc1e4]       ; 0051d1bc
    CMP dword ptr [EBX + 0xc28c],0x0    ; 0051d1c2
        ;   Label: LAB_0051d1c2
    JNZ 0x0051ded8                      ; 0051d1c9
        ;   XREF to: 0051ded8 (CONDITIONAL_JUMP)  ; LAB_0051ded8
    PUSH EBX                            ; 0051d1cf
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120 ; 0051d1d0
        ;   XREF to: 0042e120 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_0042e120(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0051d1d5
    TEST EAX,EAX                        ; 0051d1d8
    JZ 0x0051d30f                       ; 0051d1da
        ;   XREF to: 0051d30f (CONDITIONAL_JUMP)  ; LAB_0051d30f
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0051d1e0
    TEST ECX,ECX                        ; 0051d1e6
    JZ 0x0051d214                       ; 0051d1e8
        ;   XREF to: 0051d214 (CONDITIONAL_JUMP)  ; LAB_0051d214
    PUSH ECX                            ; 0051d1ea
    MOV EDX,dword ptr [ECX + 0x154]     ; 0051d1eb
    CALL dword ptr [EDX + 0xf4]         ; 0051d1f1
    ADD ESP,0x4                         ; 0051d1f7
    CMP EAX,EBX                         ; 0051d1fa
    JNZ 0x0051d214                      ; 0051d1fc
        ;   XREF to: 0051d214 (CONDITIONAL_JUMP)  ; LAB_0051d214
    MOV ESI,dword ptr [EBX + 0xc1e8]    ; 0051d1fe
    PUSH ESI                            ; 0051d204
    MOV EDI,dword ptr [0x00622c18]      ; 0051d205 | g_CDemonSetPtr
    PUSH EDI                            ; 0051d20b | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_00559250 ; 0051d20c
        ;   XREF to: 00559250 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_00559250(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 0051d211
    PUSH dword ptr [EBP + 0x92]         ; 0051d214
        ;   Label: LAB_0051d214
    PUSH EBX                            ; 0051d21a
    CALL core_charactr.cpp_FUN_0042d700 ; 0051d21b
        ;   XREF to: 0042d700 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042d700()
    LEA ECX,[EBX + 0x2518]              ; 0051d220
    FLD float ptr [ECX]                 ; 0051d226
    FMUL float ptr [EBP + 0x92]         ; 0051d228
    FLD float ptr [ECX + 0x4]           ; 0051d22e
    FMUL float ptr [EBP + 0x92]         ; 0051d231
    FLD float ptr [ECX + 0x8]           ; 0051d237
    FMUL float ptr [EBP + 0x92]         ; 0051d23a
    LEA EDI,[EBP + 0xfffffee2]          ; 0051d240
    LEA ESI,[EBP + 0xfffffe9a]          ; 0051d246
    FXCH ST2                            ; 0051d24c
    FSTP float ptr [EBP + 0xfffffe9a]   ; 0051d24e
    FSTP float ptr [EBP + 0xfffffe9e]   ; 0051d254
    FSTP float ptr [EBP + 0xfffffea2]   ; 0051d25a
    MOVSD ES:EDI,ESI                    ; 0051d260
    MOVSD ES:EDI,ESI                    ; 0051d261
    MOVSD ES:EDI,ESI                    ; 0051d262
    LEA EAX,[EBX + 0x250c]              ; 0051d263
    FLD float ptr [EBP + 0xfffffee2]    ; 0051d269
    FLD float ptr [EBP + 0xfffffee6]    ; 0051d26f
    FLD float ptr [EBP + 0xfffffeea]    ; 0051d275
    LEA EDI,[EBP + 0xffffff7e]          ; 0051d27b
    LEA ESI,[EBP + -0x22]               ; 0051d281
    FXCH ST2                            ; 0051d284
    FADD float ptr [EAX]                ; 0051d286
    FXCH                                ; 0051d288
    FADD float ptr [EAX + 0x4]          ; 0051d28a
    FXCH ST2                            ; 0051d28d
    FADD float ptr [EAX + 0x8]          ; 0051d28f
    FXCH                                ; 0051d292
    FSTP float ptr [EBP + -0x22]        ; 0051d294
    FXCH                                ; 0051d297
    FSTP float ptr [EBP + -0x1e]        ; 0051d299
    FSTP float ptr [EBP + -0x1a]        ; 0051d29c
    MOVSD ES:EDI,ESI                    ; 0051d29f
    MOVSD ES:EDI,ESI                    ; 0051d2a0
    MOVSD ES:EDI,ESI                    ; 0051d2a1
    LEA EDX,[EBX + 0x249c]              ; 0051d2a2
    FLD float ptr [EBP + 0xffffff7e]    ; 0051d2a8
    FLD float ptr [EBP + -0x7e]         ; 0051d2ae
    FLD float ptr [EBP + -0x7a]         ; 0051d2b1
    LEA EDI,[EBP + 0xffffff06]          ; 0051d2b4
    LEA ESI,[EBP + 0x2]                 ; 0051d2ba
    FXCH ST2                            ; 0051d2bd
    FADD float ptr [EDX]                ; 0051d2bf
    FXCH                                ; 0051d2c1
    FADD float ptr [EDX + 0x4]          ; 0051d2c3
    FXCH ST2                            ; 0051d2c6
    FADD float ptr [EDX + 0x8]          ; 0051d2c8
    FXCH                                ; 0051d2cb
    FSTP float ptr [EBP + 0x2]          ; 0051d2cd
    FXCH                                ; 0051d2d0
    FSTP float ptr [EBP + 0x6]          ; 0051d2d2
    FSTP float ptr [EBP + 0xa]          ; 0051d2d5
    MOVSD ES:EDI,ESI                    ; 0051d2d8
    MOVSD ES:EDI,ESI                    ; 0051d2d9
    MOVSD ES:EDI,ESI                    ; 0051d2da
    MOV dword ptr [EAX + 0x8],0x0       ; 0051d2db
    ADD ESP,0x8                         ; 0051d2e2
    MOV ECX,dword ptr [EAX + 0x8]       ; 0051d2e5
    MOV dword ptr [EAX + 0x4],ECX       ; 0051d2e8
    MOV ECX,dword ptr [EAX + 0x4]       ; 0051d2eb
    MOV dword ptr [EAX],ECX             ; 0051d2ee
    MOV dword ptr [EDX + 0x8],0x0       ; 0051d2f0
    LEA EAX,[EBP + 0xffffff06]          ; 0051d2f7
    FLD float ptr [EDX + 0x8]           ; 0051d2fd
    PUSH EAX                            ; 0051d300
    FST float ptr [EDX + 0x4]           ; 0051d301
    PUSH EBX                            ; 0051d304
    FSTP float ptr [EDX]                ; 0051d305
    CALL core_charactr.cpp_FUN_0042d750 ; 0051d307
        ;   XREF to: 0042d750 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_0042d750(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0051d30c
    MOV EAX,[0x02c99770]                ; 0051d30f | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0051d30f
    PUSH EAX                            ; 0051d314
    MOV EDX,dword ptr [EBX + 0x2628]    ; 0051d315
    PUSH EDX                            ; 0051d31b
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051d31c
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051d321
    TEST EAX,EAX                        ; 0051d324
    JZ 0x0051d33b                       ; 0051d326
        ;   XREF to: 0051d33b (CONDITIONAL_JUMP)  ; LAB_0051d33b
    PUSH dword ptr [EBP + 0x92]         ; 0051d328
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051d32e
    PUSH EAX                            ; 0051d334
    CALL dword ptr [EDX + 0xc]          ; 0051d335
    ADD ESP,0x8                         ; 0051d338
    MOV ECX,dword ptr [0x02c99770]      ; 0051d33b | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0051d33b
    PUSH ECX                            ; 0051d341
    MOV ESI,dword ptr [EBX + 0x25b0]    ; 0051d342
    PUSH ESI                            ; 0051d348
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051d349
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051d34e
    TEST EAX,EAX                        ; 0051d351
    JZ 0x0051d368                       ; 0051d353
        ;   XREF to: 0051d368 (CONDITIONAL_JUMP)  ; LAB_0051d368
    PUSH dword ptr [EBP + 0x92]         ; 0051d355
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051d35b
    PUSH EAX                            ; 0051d361
    CALL dword ptr [EDX + 0xc]          ; 0051d362
    ADD ESP,0x8                         ; 0051d365
    PUSH EBX                            ; 0051d368
        ;   Label: LAB_0051d368
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_0042e160 ; 0051d369
        ;   XREF to: 0042e160 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_0042e160(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0051d36e
    LEA EAX,[EBX + 0x158]               ; 0051d371
    PUSH EAX                            ; 0051d377
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0 ; 0051d378
        ;   XREF to: 005675a0 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_005675a0(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0051d37d
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d380
    PUSH EBX                            ; 0051d386
    CALL dword ptr [EAX + 0x10c]        ; 0051d387
    ADD ESP,0x4                         ; 0051d38d
    TEST EAX,EAX                        ; 0051d390
    JNZ 0x0051d3a3                      ; 0051d392
        ;   XREF to: 0051d3a3 (CONDITIONAL_JUMP)  ; LAB_0051d3a3
    PUSH dword ptr [EBP + 0x92]         ; 0051d394
    PUSH EBX                            ; 0051d39a
    CALL core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0 ; 0051d39b
        ;   XREF to: 0051def0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_aimTommyGun_FUN_0051def0(CMobster * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051d3a0
    PUSH dword ptr [EBP + 0x92]         ; 0051d3a3
        ;   Label: LAB_0051d3a3
    PUSH EBX                            ; 0051d3a9
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80 ; 0051d3aa
        ;   XREF to: 00433e80 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00433e80(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051d3af
    LEA ESP,[EBP + 0x7a]                ; 0051d3b2
    POP EBP                             ; 0051d3b5
    POP EDI                             ; 0051d3b6
    POP ESI                             ; 0051d3b7
    POP EBX                             ; 0051d3b8
    RET                                 ; 0051d3b9
    PUSH 0x1                            ; 0051d3ba
        ;   Label: LAB_0051d3ba
    PUSH 0x0                            ; 0051d3bc
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0051d3be
    PUSH EDI                            ; 0051d3c1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d3c2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d3c7
    PUSH EBX                            ; 0051d3ca
    PUSH 0x5e9dd2                       ; 0051d3cb | = "%s confused while walking to scriptDe..."
    MOV EAX,[0x00611100]                ; 0051d3d0 | g_CConsolePtr
    PUSH EAX                            ; 0051d3d5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00445430 ; 0051d3d6
        ;   XREF to: 00445430 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00445430(CConsole * this_ptr, char * format)
    JMP 0x0051d186                      ; 0051d3db
        ;   XREF to: 0051d186 (UNCONDITIONAL_JUMP)  ; LAB_0051d186
    JBE 0x0051d176                      ; 0051d3e0
        ;   XREF to: 0051d176 (CONDITIONAL_JUMP)  ; LAB_0051d176
        ;   Label: LAB_0051d3e0
    CMP EAX,0x3                         ; 0051d3e6
    JZ 0x0051d3ba                       ; 0051d3e9
        ;   XREF to: 0051d3ba (CONDITIONAL_JUMP)  ; LAB_0051d3ba
    PUSH 0x1                            ; 0051d3eb
        ;   Label: LAB_0051d3eb
    PUSH 0x0                            ; 0051d3ed
    JMP 0x0051d17a                      ; 0051d3ef
        ;   XREF to: 0051d17a (UNCONDITIONAL_JUMP)  ; LAB_0051d17a
    LEA EAX,[EBP + 0xfffffe5e]          ; 0051d3f4
        ;   Label: caseD_9
    PUSH EAX                            ; 0051d3fa
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010 ; 0051d3fb
        ;   XREF to: 0042c010 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_0042c010(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0051d400
    PUSH 0x41700000                     ; 0051d403
    PUSH 0x40e00000                     ; 0051d408
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0051d40d
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051d412
    MOV dword ptr [EBP + 0xfffffe92],EBX ; 0051d415
    MOV dword ptr [EBP + 0xfffffe96],EBX ; 0051d41b
    MOV EAX,dword ptr [EBP + 0x76]      ; 0051d421
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 0051d424
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051d42a
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051d430
    ADD ESP,0x8                         ; 0051d437
    TEST EDI,EDI                        ; 0051d43a
    JZ 0x0051d4b6                       ; 0051d43c
        ;   XREF to: 0051d4b6 (CONDITIONAL_JUMP)  ; LAB_0051d4b6
    LEA EAX,[EBP + 0xfffffe5e]          ; 0051d43e
    MOV EDX,dword ptr [0x01d33c04]      ; 0051d444 | DAT_01d33c04
    PUSH EAX                            ; 0051d44a
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d44b
    SUB EAX,EDX                         ; 0051d452
    SHL EAX,0x4                         ; 0051d454
    LEA EDX,[EBX + 0xfd8]               ; 0051d457
    ADD EAX,EDX                         ; 0051d45d
    PUSH 0x3ecccccd                     ; 0051d45f
    PUSH EAX                            ; 0051d464
    PUSH 0x2c8af28                      ; 0051d465 | DAT_02c8af28
    LEA ESI,[EBP + 0xfffffea6]          ; 0051d46a
    LEA EDI,[EBP + 0x1a]                ; 0051d470
    CALL core_xform.cpp_FUN_005b5080    ; 0051d473
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0051d478
    LEA EAX,[EBP + 0x1a]                ; 0051d47b
    LEA ESI,[EBP + 0xfffffea6]          ; 0051d47e
    PUSH EAX                            ; 0051d484
    MOVSD ES:EDI,ESI                    ; 0051d485
    MOVSD ES:EDI,ESI                    ; 0051d486
    MOVSD ES:EDI,ESI                    ; 0051d487
    PUSH EBX                            ; 0051d488
    LEA ESI,[EBP + 0xfffffebe]          ; 0051d489
    CALL core_actor.cpp_FUN_00408b40    ; 0051d48f
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0051d494
    LEA EAX,[EBP + 0xffffff1e]          ; 0051d497
    PUSH EAX                            ; 0051d49d
    LEA EDI,[EBP + 0xffffff1e]          ; 0051d49e
    LEA ESI,[EBP + 0xfffffebe]          ; 0051d4a4
    PUSH EBX                            ; 0051d4aa
    MOVSD ES:EDI,ESI                    ; 0051d4ab
    MOVSD ES:EDI,ESI                    ; 0051d4ac
    MOVSD ES:EDI,ESI                    ; 0051d4ad
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0051d4ae
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0051d4b3
    PUSH 0x41700000                     ; 0051d4b6
        ;   Label: LAB_0051d4b6
    PUSH 0x40e00000                     ; 0051d4bb
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0051d4c0
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051d4c5
    MOV EAX,dword ptr [EBP + 0x76]      ; 0051d4c8
    MOV dword ptr [EBP + 0xfffffe62],EAX ; 0051d4cb
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051d4d1
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051d4d7
    ADD ESP,0x8                         ; 0051d4de
    TEST EDX,EDX                        ; 0051d4e1
    JZ 0x0051d1a1                       ; 0051d4e3
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EAX,[EBP + 0xfffffe5e]          ; 0051d4e9
    MOV EDX,dword ptr [0x01d33c08]      ; 0051d4ef | DAT_01d33c08
    PUSH EAX                            ; 0051d4f5
    LEA EAX,[EDX*0x4 + 0x0]             ; 0051d4f6
    SUB EAX,EDX                         ; 0051d4fd
    SHL EAX,0x4                         ; 0051d4ff
    LEA EDX,[EBX + 0xfd8]               ; 0051d502
    ADD EAX,EDX                         ; 0051d508
    PUSH 0x3ecccccd                     ; 0051d50a
    PUSH EAX                            ; 0051d50f
    PUSH 0x2c8af28                      ; 0051d510 | DAT_02c8af28
    LEA ESI,[EBP + 0x32]                ; 0051d515
    LEA EDI,[EBP + 0xfffffeee]          ; 0051d518
    CALL core_xform.cpp_FUN_005b5080    ; 0051d51e
        ;   XREF to: 005b5080 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_005b5080()
    ADD ESP,0x8                         ; 0051d523
    LEA EAX,[EBP + 0xfffffeee]          ; 0051d526
    LEA ESI,[EBP + 0x32]                ; 0051d52c
    PUSH EAX                            ; 0051d52f
    MOVSD ES:EDI,ESI                    ; 0051d530
    MOVSD ES:EDI,ESI                    ; 0051d531
    MOVSD ES:EDI,ESI                    ; 0051d532
    PUSH EBX                            ; 0051d533
    LEA ESI,[EBP + 0xffffff36]          ; 0051d534
    CALL core_actor.cpp_FUN_00408b40    ; 0051d53a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0051d53f
    LEA EAX,[EBP + 0xfffffefa]          ; 0051d542
    PUSH EAX                            ; 0051d548
    LEA EDI,[EBP + 0xfffffefa]          ; 0051d549
    LEA ESI,[EBP + 0xffffff36]          ; 0051d54f
    PUSH EBX                            ; 0051d555
    MOVSD ES:EDI,ESI                    ; 0051d556
    MOVSD ES:EDI,ESI                    ; 0051d557
    MOVSD ES:EDI,ESI                    ; 0051d558
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770 ; 0051d559
        ;   XREF to: 004a0770 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_004a0770(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0051d55e
    JMP 0x0051d1a1                      ; 0051d561
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xc280]        ; 0051d566
        ;   Label: caseD_a
    FLDZ                                ; 0051d56c
    FCOMPP                              ; 0051d56e
    FNSTSW AX                           ; 0051d570
    SAHF                                ; 0051d572
    JC 0x0051d1a1                       ; 0051d573
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 0051d579
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0 ; 0051d57a
        ;   XREF to: 0051eac0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051d57f
    JMP 0x0051d1a1                      ; 0051d582
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051d587
        ;   Label: caseD_2
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d58d
    PUSH EBX                            ; 0051d593
    CALL dword ptr [EAX + 0x144]        ; 0051d594
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0051d59a
    ADD ESP,0x8                         ; 0051d5a0
    TEST EDX,EDX                        ; 0051d5a3
    JNZ 0x0051d61f                      ; 0051d5a5
        ;   XREF to: 0051d61f (CONDITIONAL_JUMP)  ; LAB_0051d61f
    FLD float ptr [EBX + 0xc338]        ; 0051d5a7
        ;   Label: LAB_0051d5a7
    FCOMP double ptr [0x005e9e02]       ; 0051d5ad | DAT_005e9e02
    FNSTSW AX                           ; 0051d5b3
    SAHF                                ; 0051d5b5
    JNC 0x0051d70d                      ; 0051d5b6
        ;   XREF to: 0051d70d (CONDITIONAL_JUMP)  ; LAB_0051d70d
    CMP dword ptr [EBX + 0xc294],0x0    ; 0051d5bc
        ;   Label: LAB_0051d5bc
    JZ 0x0051d725                       ; 0051d5c3
        ;   XREF to: 0051d725 (CONDITIONAL_JUMP)  ; LAB_0051d725
    PUSH 0x40a00000                     ; 0051d5c9
    PUSH 0x40800000                     ; 0051d5ce
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00 ; 0051d5d3
        ;   XREF to: 0040cc00 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc00(float min_value, float max_value)
        ;   Label: LAB_0051d5d3
    MOV dword ptr [EBP + 0x76],EAX      ; 0051d5d8
    ADD ESP,0x8                         ; 0051d5db
    MOV EAX,dword ptr [EBP + 0x76]      ; 0051d5de
    MOV dword ptr [EBX + 0xc33c],EAX    ; 0051d5e1
    PUSH 0x1                            ; 0051d5e7
    PUSH 0x0                            ; 0051d5e9
    LEA EAX,[EBX + 0x158]               ; 0051d5eb
    PUSH EAX                            ; 0051d5f1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d5f2
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d5f7
    PUSH 0x3e99999a                     ; 0051d5fa
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051d5ff
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051d604
    TEST EAX,EAX                        ; 0051d607
    JZ 0x0051d1a1                       ; 0051d609
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3                            ; 0051d60f
    PUSH EBX                            ; 0051d611
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_0051f330 ; 0051d612
        ;   XREF to: 0051f330 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_0051f330(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 0051d617
    JMP 0x0051d1a1                      ; 0051d61a
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV ECX,dword ptr [0x02c99770]      ; 0051d61f | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0051d61f
    PUSH ECX                            ; 0051d625
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0051d626
    PUSH ESI                            ; 0051d62c
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051d62d
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 0051d632
    ADD ESP,0x8                         ; 0051d634
    MOV EDI,EAX                         ; 0051d637
    TEST EAX,EAX                        ; 0051d639
    JZ 0x0051d68b                       ; 0051d63b
        ;   XREF to: 0051d68b (CONDITIONAL_JUMP)  ; LAB_0051d68b
    MOV EAX,[0x00622c18]                ; 0051d63d | g_CDemonSetPtr
    PUSH EAX                            ; 0051d642 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0051d643
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    MOV EAX,dword ptr [ESI + 0x568]     ; 0051d648
    ADD ESP,0x4                         ; 0051d64e
    MOV dword ptr [EBP + 0x62],EAX      ; 0051d651
    PUSH ESI                            ; 0051d654
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051d655
    MOV dword ptr [ESI + 0x568],0x64    ; 0051d65b
    CALL dword ptr [EAX + 0xe8]         ; 0051d665
    ADD ESP,0x4                         ; 0051d66b
    TEST EAX,EAX                        ; 0051d66e
    JZ 0x0051d682                       ; 0051d670
        ;   XREF to: 0051d682 (CONDITIONAL_JUMP)  ; LAB_0051d682
    PUSH ESI                            ; 0051d672
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051d673
    CALL dword ptr [EAX + 0xe4]         ; 0051d679
    ADD ESP,0x4                         ; 0051d67f
    MOV EAX,dword ptr [EBP + 0x62]      ; 0051d682
        ;   Label: LAB_0051d682
    MOV dword ptr [EDI + 0x568],EAX     ; 0051d685
    MOV EDX,dword ptr [0x02c99770]      ; 0051d68b | g_CWeaponClassInfo.name_hash
        ;   Label: LAB_0051d68b
    PUSH EDX                            ; 0051d691
    MOV ECX,dword ptr [EBX + 0x25b0]    ; 0051d692
    PUSH ECX                            ; 0051d698
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051d699
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    MOV ESI,EAX                         ; 0051d69e
    ADD ESP,0x8                         ; 0051d6a0
    MOV dword ptr [EBP + 0x72],EAX      ; 0051d6a3
    TEST EAX,EAX                        ; 0051d6a6
    JZ 0x0051d5a7                       ; 0051d6a8
        ;   XREF to: 0051d5a7 (CONDITIONAL_JUMP)  ; LAB_0051d5a7
    MOV EDI,dword ptr [0x00622c18]      ; 0051d6ae | g_CDemonSetPtr
    PUSH EDI                            ; 0051d6b4 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_init_FUN_00559220 ; 0051d6b5
        ;   XREF to: 00559220 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_init_FUN_00559220(CDemonSet * this_ptr)
    ADD ESP,0x4                         ; 0051d6ba
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051d6bd
    PUSH ESI                            ; 0051d6c3
    MOV EDI,dword ptr [ESI + 0x568]     ; 0051d6c4
    MOV dword ptr [ESI + 0x568],0x64    ; 0051d6ca
    CALL dword ptr [EAX + 0xe8]         ; 0051d6d4
    ADD ESP,0x4                         ; 0051d6da
    TEST EAX,EAX                        ; 0051d6dd
    JNZ 0x0051d6ef                      ; 0051d6df
        ;   XREF to: 0051d6ef (CONDITIONAL_JUMP)  ; LAB_0051d6ef
    MOV EAX,dword ptr [EBP + 0x72]      ; 0051d6e1
    MOV dword ptr [EAX + 0x568],EDI     ; 0051d6e4
    JMP 0x0051d5a7                      ; 0051d6ea
        ;   XREF to: 0051d5a7 (UNCONDITIONAL_JUMP)  ; LAB_0051d5a7
    PUSH ESI                            ; 0051d6ef
        ;   Label: LAB_0051d6ef
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051d6f0
    CALL dword ptr [EAX + 0xe4]         ; 0051d6f6
    ADD ESP,0x4                         ; 0051d6fc
    MOV EAX,dword ptr [EBP + 0x72]      ; 0051d6ff
    MOV dword ptr [EAX + 0x568],EDI     ; 0051d702
    JMP 0x0051d5a7                      ; 0051d708
        ;   XREF to: 0051d5a7 (UNCONDITIONAL_JUMP)  ; LAB_0051d5a7
    FLD float ptr [EBX + 0xc33c]        ; 0051d70d
        ;   Label: LAB_0051d70d
    FLDZ                                ; 0051d713
    FCOMPP                              ; 0051d715
    FNSTSW AX                           ; 0051d717
    SAHF                                ; 0051d719
    JNC 0x0051d5bc                      ; 0051d71a
        ;   XREF to: 0051d5bc (CONDITIONAL_JUMP)  ; LAB_0051d5bc
    JMP 0x0051d1a1                      ; 0051d720
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x40800000                     ; 0051d725
        ;   Label: LAB_0051d725
    PUSH 0x40000000                     ; 0051d72a
    JMP 0x0051d5d3                      ; 0051d72f
        ;   XREF to: 0051d5d3 (UNCONDITIONAL_JUMP)  ; LAB_0051d5d3
    CMP dword ptr [EBX + 0xc1d4],0x0    ; 0051d734
        ;   Label: caseD_5
    JNZ 0x0051d1a1                      ; 0051d73b
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xdc],0x0      ; 0051d741
    JNZ 0x0051d1a1                      ; 0051d748
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EAX                            ; 0051d74e
    MOV EDI,dword ptr [EBP + 0x6a]      ; 0051d74f
    PUSH EDI                            ; 0051d752
    LEA ESI,[EBP + 0xfffffeca]          ; 0051d753
    CALL core_skeleton.cpp_FUN_00569040 ; 0051d759
        ;   XREF to: 00569040 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569040()
    LEA EDI,[EBP + -0xa]                ; 0051d75e
    ADD ESP,0x8                         ; 0051d761
    LEA EAX,[EBP + -0xa]                ; 0051d764
    LEA ESI,[EBP + 0xfffffeca]          ; 0051d767
    PUSH EAX                            ; 0051d76d
    MOVSD ES:EDI,ESI                    ; 0051d76e
    MOVSD ES:EDI,ESI                    ; 0051d76f
    MOVSD ES:EDI,ESI                    ; 0051d770
    PUSH EBX                            ; 0051d771
    LEA ESI,[EBP + 0xfffffed6]          ; 0051d772
    CALL core_actor.cpp_FUN_00408b40    ; 0051d778
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 0051d77d
    PUSH 0x0                            ; 0051d780
    LEA EAX,[EBP + -0x16]               ; 0051d782
    LEA EDI,[EBP + -0x16]               ; 0051d785
    PUSH EAX                            ; 0051d788
    MOV EAX,[0x0061dca4]                ; 0051d789 | g_CGorePtr
    LEA ESI,[EBP + 0xfffffed6]          ; 0051d78e
    PUSH EAX                            ; 0051d794
    MOVSD ES:EDI,ESI                    ; 0051d795
    MOVSD ES:EDI,ESI                    ; 0051d796
    MOVSD ES:EDI,ESI                    ; 0051d797
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004e62e0 ; 0051d798
        ;   XREF to: 004e62e0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004e62e0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0051d79d
    MOV dword ptr [EBX + 0xc1d4],0x1    ; 0051d7a0
    JMP 0x0051d1a1                      ; 0051d7aa
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    CMP dword ptr [EBX + 0xc294],0x0    ; 0051d7af
        ;   Label: caseD_0
    JZ 0x0051d7ed                       ; 0051d7b6
        ;   XREF to: 0051d7ed (CONDITIONAL_JUMP)  ; LAB_0051d7ed
    MOV EAX,[0x01d06ab4]                ; 0051d7b8 | DAT_01d06ab4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051d7bd
    FLD float ptr [EBX + 0xc338]        ; 0051d7c4
    MOV dword ptr [EBX + 0xc1e8],EAX    ; 0051d7ca
    FCOMP double ptr [0x005e9e02]       ; 0051d7d0 | DAT_005e9e02
    FNSTSW AX                           ; 0051d7d6
    SAHF                                ; 0051d7d8
    JBE 0x0051d1a1                      ; 0051d7d9
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH EBX                            ; 0051d7df
        ;   Label: LAB_0051d7df
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0 ; 0051d7e0
        ;   XREF to: 0051eac0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051d7e5
    JMP 0x0051d1a1                      ; 0051d7e8
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051d7ed
        ;   Label: LAB_0051d7ed
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051d7f3
    PUSH EBX                            ; 0051d7f9
    CALL dword ptr [EAX + 0x144]        ; 0051d7fa
    MOV ECX,dword ptr [EBX + 0xc1e8]    ; 0051d800
    ADD ESP,0x8                         ; 0051d806
    TEST ECX,ECX                        ; 0051d809
    JZ 0x0051d8d5                       ; 0051d80b
        ;   XREF to: 0051d8d5 (CONDITIONAL_JUMP)  ; LAB_0051d8d5
    MOV ESI,dword ptr [EBX + 0xc288]    ; 0051d811
    TEST ESI,ESI                        ; 0051d817
    JZ 0x0051d890                       ; 0051d819
        ;   XREF to: 0051d890 (CONDITIONAL_JUMP)  ; LAB_0051d890
    CMP dword ptr [EBX + 0xc284],0x0    ; 0051d81b
    JNZ 0x0051d920                      ; 0051d822
        ;   XREF to: 0051d920 (CONDITIONAL_JUMP)  ; LAB_0051d920
    LEA EAX,[EBX + 0x20]                ; 0051d828
    LEA EDI,[EBP + 0xffffff66]          ; 0051d82b
    FLD float ptr [EAX]                 ; 0051d831
    FLD float ptr [EAX + 0x4]           ; 0051d833
    FLD float ptr [EAX + 0x8]           ; 0051d836
    FXCH ST2                            ; 0051d839
    FSUB float ptr [ESI + 0x20]         ; 0051d83b
    FXCH                                ; 0051d83e
    FSUB float ptr [ESI + 0x24]         ; 0051d840
    FXCH ST2                            ; 0051d843
    FSUB float ptr [ESI + 0x28]         ; 0051d845
    FXCH                                ; 0051d848
    FSTP float ptr [EBP + 0xfffffeb2]   ; 0051d84a
    FXCH                                ; 0051d850
    FSTP float ptr [EBP + 0xfffffeb6]   ; 0051d852
    LEA ESI,[EBP + 0xfffffeb2]          ; 0051d858
    FSTP float ptr [EBP + 0xfffffeba]   ; 0051d85e
    MOVSD ES:EDI,ESI                    ; 0051d864
    MOVSD ES:EDI,ESI                    ; 0051d865
    MOVSD ES:EDI,ESI                    ; 0051d866
    FLD float ptr [EBP + 0xffffff6a]    ; 0051d867
    FMUL ST0                            ; 0051d86d
    FLD float ptr [EBP + 0xffffff66]    ; 0051d86f
    FMUL ST0                            ; 0051d875
    FADDP                               ; 0051d877
    FLD float ptr [EBP + 0xffffff6e]    ; 0051d879
    FMUL ST0                            ; 0051d87f
    FADDP                               ; 0051d881
    FSQRT                               ; 0051d883
    FCOMP double ptr [0x005e9e12]       ; 0051d885 | DAT_005e9e12
    FNSTSW AX                           ; 0051d88b
    SAHF                                ; 0051d88d
    JA 0x0051d901                       ; 0051d88e
        ;   XREF to: 0051d901 (CONDITIONAL_JUMP)  ; LAB_0051d901
    CMP dword ptr [EBX + 0xc28c],0x0    ; 0051d890
        ;   Label: LAB_0051d890
    JZ 0x0051d92f                       ; 0051d897
        ;   XREF to: 0051d92f (CONDITIONAL_JUMP)  ; LAB_0051d92f
    FLD float ptr [EBX + 0xc338]        ; 0051d89d
    FCOMP double ptr [0x005e9e02]       ; 0051d8a3 | DAT_005e9e02
    FNSTSW AX                           ; 0051d8a9
    SAHF                                ; 0051d8ab
    JBE 0x0051d1a1                      ; 0051d8ac
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x3e800000                     ; 0051d8b2
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051d8b7
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051d8bc
    TEST EAX,EAX                        ; 0051d8bf
    JZ 0x0051d7df                       ; 0051d8c1
        ;   XREF to: 0051d7df (CONDITIONAL_JUMP)  ; LAB_0051d7df
    PUSH EBX                            ; 0051d8c7
    CALL core_mobster.cpp_CMobster_dismountVehicle_FUN_0051cd10 ; 0051d8c8
        ;   XREF to: 0051cd10 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_dismountVehicle_FUN_0051cd10(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051d8cd
    JMP 0x0051d1a1                      ; 0051d8d0
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051d8d5
        ;   Label: LAB_0051d8d5
    PUSH EBX                            ; 0051d8db
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0051d8dc
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051d8e1
    TEST EAX,EAX                        ; 0051d8e4
    JZ 0x0051d1a1                       ; 0051d8e6
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051d8ec
    PUSH 0x1                            ; 0051d8ee
    MOV ESI,dword ptr [EBP + 0x6a]      ; 0051d8f0
    PUSH ESI                            ; 0051d8f3
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d8f4
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d8f9
    JMP 0x0051d1a1                      ; 0051d8fc
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051d901
        ;   Label: LAB_0051d901
    PUSH 0x8                            ; 0051d903
    MOV ECX,dword ptr [EBP + 0x6a]      ; 0051d905
    PUSH ECX                            ; 0051d908
    MOV dword ptr [EBX + 0xc284],0x1    ; 0051d909
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d913
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d918
    JMP 0x0051d1a1                      ; 0051d91b
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    MOV dword ptr [EBX + 0xc284],0x0    ; 0051d920
        ;   Label: LAB_0051d920
    JMP 0x0051d890                      ; 0051d92a
        ;   XREF to: 0051d890 (UNCONDITIONAL_JUMP)  ; LAB_0051d890
    LEA EDI,[EBP + 0x26]                ; 0051d92f
        ;   Label: LAB_0051d92f
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0051d932
    LEA ESI,[EBP + 0x3e]                ; 0051d938
    LEA EAX,[EBX + 0x20]                ; 0051d93b
    FLD float ptr [EDX + 0x20]          ; 0051d93e
    FLD float ptr [EDX + 0x24]          ; 0051d941
    FLD float ptr [EDX + 0x28]          ; 0051d944
    FXCH ST2                            ; 0051d947
    FSUB float ptr [EAX]                ; 0051d949
    FXCH                                ; 0051d94b
    FSUB float ptr [EAX + 0x4]          ; 0051d94d
    FXCH ST2                            ; 0051d950
    FSUB float ptr [EAX + 0x8]          ; 0051d952
    FXCH                                ; 0051d955
    FSTP float ptr [EBP + 0x3e]         ; 0051d957
    FXCH                                ; 0051d95a
    FSTP float ptr [EBP + 0x42]         ; 0051d95c
    FSTP float ptr [EBP + 0x46]         ; 0051d95f
    MOVSD ES:EDI,ESI                    ; 0051d962
    MOVSD ES:EDI,ESI                    ; 0051d963
    MOVSD ES:EDI,ESI                    ; 0051d964
    FLD float ptr [EBP + 0x2a]          ; 0051d965
    FMUL ST0                            ; 0051d968
    FLD float ptr [EBP + 0x26]          ; 0051d96a
    FMUL ST0                            ; 0051d96d
    FADDP                               ; 0051d96f
    FLD float ptr [EBP + 0x2e]          ; 0051d971
    FMUL ST0                            ; 0051d974
    FADDP                               ; 0051d976
    FSQRT                               ; 0051d978
    FLD float ptr [0x00603d58]          ; 0051d97a | DAT_00603d58
    FLD1                                ; 0051d980
    FADDP                               ; 0051d982
    FXCH                                ; 0051d984
    FSTP float ptr [EBP + 0x6e]         ; 0051d986
    MOV EAX,dword ptr [EBP + 0x6e]      ; 0051d989
    FLD float ptr [EBP + 0x6e]          ; 0051d98c
    MOV dword ptr [EBP + 0x5a],EAX      ; 0051d98f
    FCOMPP                              ; 0051d992
    FNSTSW AX                           ; 0051d994
    SAHF                                ; 0051d996
    JNC 0x0051da0a                      ; 0051d997
        ;   XREF to: 0051da0a (CONDITIONAL_JUMP)  ; LAB_0051da0a
    LEA EAX,[EBP + 0x26]                ; 0051d999
    PUSH EAX                            ; 0051d99c
    LEA ESI,[EBP + 0xffffff5a]          ; 0051d99d
    LEA EDI,[EBP + 0xe]                 ; 0051d9a3
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0051d9a6
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xffffff5a]          ; 0051d9ab
    MOVSD ES:EDI,ESI                    ; 0051d9b1
    MOVSD ES:EDI,ESI                    ; 0051d9b2
    MOVSD ES:EDI,ESI                    ; 0051d9b3
    ADD ESP,0x4                         ; 0051d9b4
    FLD float ptr [EBP + 0x12]          ; 0051d9b7
    FSUB float ptr [EBX + 0x34]         ; 0051d9ba
    SUB ESP,0x4                         ; 0051d9bd
    FSTP float ptr [ESP]                ; 0051d9c0
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0051d9c3
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051d9c8
    FLD float ptr [EBP + 0x76]          ; 0051d9cb
    FABS                                ; 0051d9ce
    ADD ESP,0x4                         ; 0051d9d0
    FCOMP double ptr [0x005e9e0a]       ; 0051d9d3 | DAT_005e9e0a
    FNSTSW AX                           ; 0051d9d9
    SAHF                                ; 0051d9db
    JNC 0x0051da0a                      ; 0051d9dc
        ;   XREF to: 0051da0a (CONDITIONAL_JUMP)  ; LAB_0051da0a
    FLD float ptr [EBX + 0xc1e4]        ; 0051d9de
    FLDZ                                ; 0051d9e4
    FCOMPP                              ; 0051d9e6
    FNSTSW AX                           ; 0051d9e8
    SAHF                                ; 0051d9ea
    JC 0x0051da0a                       ; 0051d9eb
        ;   XREF to: 0051da0a (CONDITIONAL_JUMP)  ; LAB_0051da0a
    PUSH 0x1                            ; 0051d9ed
    PUSH 0x9                            ; 0051d9ef
    LEA EAX,[EBX + 0x158]               ; 0051d9f1
    PUSH EAX                            ; 0051d9f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051d9f8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051d9fd
    MOV dword ptr [EBX + 0xc1e4],0x40000000 ; 0051da00
    FLD float ptr [EBP + 0x5a]          ; 0051da0a
        ;   Label: LAB_0051da0a
    FCOMP float ptr [EBX + 0xc1e0]      ; 0051da0d
    FNSTSW AX                           ; 0051da13
    SAHF                                ; 0051da15
    JNC 0x0051da39                      ; 0051da16
        ;   XREF to: 0051da39 (CONDITIONAL_JUMP)  ; LAB_0051da39
    FLD float ptr [EBP + 0x5a]          ; 0051da18
    LEA EDX,[EBX + 0x158]               ; 0051da1b
    FCOMP float ptr [0x00603d68]        ; 0051da21 | DAT_00603d68
    FNSTSW AX                           ; 0051da27
    SAHF                                ; 0051da29
    JNC 0x0051da51                      ; 0051da2a
        ;   XREF to: 0051da51 (CONDITIONAL_JUMP)  ; LAB_0051da51
    PUSH 0x1                            ; 0051da2c
    PUSH 0x1                            ; 0051da2e
    PUSH EDX                            ; 0051da30
        ;   Label: LAB_0051da30
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051da31
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051da36
    CMP dword ptr [EBX + 0xc278],0x0    ; 0051da39
        ;   Label: LAB_0051da39
    JZ 0x0051da57                       ; 0051da40
        ;   XREF to: 0051da57 (CONDITIONAL_JUMP)  ; LAB_0051da57
    MOV dword ptr [EBX + 0xc278],0x1    ; 0051da42
        ;   Label: LAB_0051da42
    JMP 0x0051d1a1                      ; 0051da4c
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051da51
        ;   Label: LAB_0051da51
    PUSH 0x8                            ; 0051da53
    JMP 0x0051da30                      ; 0051da55
        ;   XREF to: 0051da30 (UNCONDITIONAL_JUMP)  ; LAB_0051da30
    PUSH 0x3f333333                     ; 0051da57
        ;   Label: LAB_0051da57
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051da5c
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051da61
    TEST EAX,EAX                        ; 0051da64
    JZ 0x0051da42                       ; 0051da66
        ;   XREF to: 0051da42 (CONDITIONAL_JUMP)  ; LAB_0051da42
    PUSH 0x1                            ; 0051da68
    PUSH EBX                            ; 0051da6a
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_0051f330 ; 0051da6b
        ;   XREF to: 0051f330 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_0051f330(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 0051da70
    MOV dword ptr [EBX + 0xc278],0x1    ; 0051da73
    JMP 0x0051d1a1                      ; 0051da7d
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051da82
        ;   Label: caseD_1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051da88
    PUSH EBX                            ; 0051da8e
    CALL dword ptr [EAX + 0x144]        ; 0051da8f
    ADD ESP,0x8                         ; 0051da95
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0051da98
    LEA ESI,[EBX + 0x158]               ; 0051da9e
    TEST EDX,EDX                        ; 0051daa4
    JZ 0x0051db3a                       ; 0051daa6
        ;   XREF to: 0051db3a (CONDITIONAL_JUMP)  ; LAB_0051db3a
    CMP dword ptr [EBX + 0xc284],0x0    ; 0051daac
    JZ 0x0051db81                       ; 0051dab3
        ;   XREF to: 0051db81 (CONDITIONAL_JUMP)  ; LAB_0051db81
    PUSH 0x3e32b8c2                     ; 0051dab9
    LEA EAX,[EBX + 0x249c]              ; 0051dabe
    PUSH 0x3f000000                     ; 0051dac4
    MOV dword ptr [EAX + 0x8],0x0       ; 0051dac9
    XOR EDI,EDI                         ; 0051dad0
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051dad2
    MOV dword ptr [EAX + 0x4],EDX       ; 0051dad5
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051dad8
    MOV dword ptr [EAX],EDX             ; 0051dadb
    MOV EAX,[0x00603d58]                ; 0051dadd | DAT_00603d58
    MOV dword ptr [EBP + -0x6a],EDI     ; 0051dae2
    MOV dword ptr [EBP + -0x62],EAX     ; 0051dae5
    LEA EAX,[EBP + -0x6a]               ; 0051dae8
    MOV dword ptr [EBP + -0x66],EDI     ; 0051daeb
    PUSH EAX                            ; 0051daee
    MOV EAX,dword ptr [EBX + 0xc288]    ; 0051daef
    PUSH EAX                            ; 0051daf5
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051daf6
    CALL dword ptr [EDX + 0xc4]         ; 0051dafc
    ADD ESP,0x4                         ; 0051db02
    PUSH EAX                            ; 0051db05
    MOV EAX,dword ptr [EBX + 0xc288]    ; 0051db06
    ADD EAX,0x20                        ; 0051db0c
    PUSH EAX                            ; 0051db0f
    PUSH EBX                            ; 0051db10
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0051db11
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0051db16
    TEST EAX,EAX                        ; 0051db19
    JG 0x0051db70                       ; 0051db1b
        ;   XREF to: 0051db70 (CONDITIONAL_JUMP)  ; LAB_0051db70
    JGE 0x0051d1a1                      ; 0051db1d
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051db23
    PUSH EDI                            ; 0051db25
    PUSH ESI                            ; 0051db26
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051db27
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051db2c
    MOV dword ptr [EBX + 0xc288],EDI    ; 0051db2f
    JMP 0x0051d1a1                      ; 0051db35
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051db3a
        ;   Label: LAB_0051db3a
    PUSH EBX                            ; 0051db40
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0 ; 0051db41
        ;   XREF to: 004a0fe0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_004a0fe0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051db46
    TEST EAX,EAX                        ; 0051db49
    JZ 0x0051db5f                       ; 0051db4b
        ;   XREF to: 0051db5f (CONDITIONAL_JUMP)  ; LAB_0051db5f
    PUSH 0x1                            ; 0051db4d
    PUSH 0x1                            ; 0051db4f
    PUSH ESI                            ; 0051db51
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051db52
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051db57
    JMP 0x0051d1a1                      ; 0051db5a
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051db5f
        ;   Label: LAB_0051db5f
    PUSH EAX                            ; 0051db61
    PUSH ESI                            ; 0051db62
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051db63
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051db68
    JMP 0x0051d1a1                      ; 0051db6b
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051db70
        ;   Label: LAB_0051db70
    PUSH EDI                            ; 0051db72
    PUSH ESI                            ; 0051db73
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051db74
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051db79
    JMP 0x0051d1a1                      ; 0051db7c
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    PUSH dword ptr [EBP + 0x92]         ; 0051db81
        ;   Label: LAB_0051db81
    PUSH EBX                            ; 0051db87
    CALL core_mobster.cpp_FUN_0051e5d0  ; 0051db88
        ;   XREF to: 0051e5d0 (UNCONDITIONAL_CALL)  ; int core_mobster.cpp_FUN_0051e5d0(CMobster * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0051db8d
    TEST EAX,EAX                        ; 0051db90
    JNZ 0x0051d1a1                      ; 0051db92
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [0x00603d58]          ; 0051db98 | DAT_00603d58
    FLD1                                ; 0051db9e
    FADDP                               ; 0051dba0
    MOV ESI,dword ptr [EBX + 0x2628]    ; 0051dba2
    FSTP float ptr [EBP + 0x52]         ; 0051dba8
    TEST ESI,ESI                        ; 0051dbab
    JZ 0x0051dbb7                       ; 0051dbad
        ;   XREF to: 0051dbb7 (CONDITIONAL_JUMP)  ; LAB_0051dbb7
    MOV EAX,[0x00603d5c]                ; 0051dbaf | DAT_00603d5c
    MOV dword ptr [EBP + 0x52],EAX      ; 0051dbb4
    PUSH 0x3e32b8c2                     ; 0051dbb7
        ;   Label: LAB_0051dbb7
    LEA EAX,[EBX + 0x249c]              ; 0051dbbc
    PUSH 0x3f000000                     ; 0051dbc2
    MOV dword ptr [EAX + 0x8],0x0       ; 0051dbc7
    XOR EDI,EDI                         ; 0051dbce
    MOV EDX,dword ptr [EAX + 0x8]       ; 0051dbd0
    MOV dword ptr [EAX + 0x4],EDX       ; 0051dbd3
    MOV EDX,dword ptr [EAX + 0x4]       ; 0051dbd6
    MOV dword ptr [EAX],EDX             ; 0051dbd9
    MOV EAX,[0x00603d58]                ; 0051dbdb | DAT_00603d58
    MOV dword ptr [EBP + -0x46],EDI     ; 0051dbe0
    MOV dword ptr [EBP + 0x56],EAX      ; 0051dbe3
    MOV dword ptr [EBP + -0x3e],EAX     ; 0051dbe6
    LEA EAX,[EBP + -0x46]               ; 0051dbe9
    MOV dword ptr [EBP + -0x42],EDI     ; 0051dbec
    PUSH EAX                            ; 0051dbef
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0051dbf0
    PUSH EAX                            ; 0051dbf6
    MOV EDX,dword ptr [EAX + 0x154]     ; 0051dbf7
    CALL dword ptr [EDX + 0xc4]         ; 0051dbfd
    ADD ESP,0x4                         ; 0051dc03
    PUSH EAX                            ; 0051dc06
    MOV EAX,dword ptr [EBX + 0xc1e8]    ; 0051dc07
    ADD EAX,0x20                        ; 0051dc0d
    PUSH EAX                            ; 0051dc10
    PUSH EBX                            ; 0051dc11
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0 ; 0051dc12
        ;   XREF to: 0042ccf0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_0042ccf0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0051dc17
    TEST EAX,EAX                        ; 0051dc1a
    JL 0x0051d1a1                       ; 0051dc1c
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    LEA EDI,[EBP + -0x3a]               ; 0051dc22
    LEA ECX,[EBX + 0x20]                ; 0051dc25
    LEA ESI,[EBP + 0xffffff4e]          ; 0051dc28
    MOV EDX,dword ptr [EBX + 0xc1e8]    ; 0051dc2e
    FLD float ptr [ECX]                 ; 0051dc34
    FLD float ptr [ECX + 0x4]           ; 0051dc36
    FLD float ptr [ECX + 0x8]           ; 0051dc39
    FXCH ST2                            ; 0051dc3c
    FSUB float ptr [EDX + 0x20]         ; 0051dc3e
    FXCH                                ; 0051dc41
    FSUB float ptr [EDX + 0x24]         ; 0051dc43
    FXCH ST2                            ; 0051dc46
    FSUB float ptr [EDX + 0x28]         ; 0051dc48
    FXCH                                ; 0051dc4b
    FSTP float ptr [EBP + 0xffffff4e]   ; 0051dc4d
    FXCH                                ; 0051dc53
    FSTP float ptr [EBP + 0xffffff52]   ; 0051dc55
    FSTP float ptr [EBP + 0xffffff56]   ; 0051dc5b
    MOVSD ES:EDI,ESI                    ; 0051dc61
    MOVSD ES:EDI,ESI                    ; 0051dc62
    MOVSD ES:EDI,ESI                    ; 0051dc63
    FLD float ptr [EBP + -0x3a]         ; 0051dc64
    FMUL ST0                            ; 0051dc67
    FLD float ptr [EBP + -0x32]         ; 0051dc69
    FMUL ST0                            ; 0051dc6c
    FADDP                               ; 0051dc6e
    FSQRT                               ; 0051dc70
    XOR ESI,ESI                         ; 0051dc72
    ADD EDX,0x20                        ; 0051dc74
    MOV dword ptr [EBP + -0x36],ESI     ; 0051dc77
    FSTP float ptr [EBP + 0x66]         ; 0051dc7a
    MOV EAX,dword ptr [EBP + 0x66]      ; 0051dc7d
    FLD float ptr [EBP + 0x66]          ; 0051dc80
    MOV dword ptr [EBP + 0x4e],EAX      ; 0051dc83
    FCOMP float ptr [EBP + 0x52]        ; 0051dc86
    FNSTSW AX                           ; 0051dc89
    SAHF                                ; 0051dc8b
    JA 0x0051dd81                       ; 0051dc8c
        ;   XREF to: 0051dd81 (CONDITIONAL_JUMP)  ; LAB_0051dd81
    FLD float ptr [EBX + 0xc1e4]        ; 0051dc92
    FLDZ                                ; 0051dc98
    FCOMPP                              ; 0051dc9a
    FNSTSW AX                           ; 0051dc9c
    SAHF                                ; 0051dc9e
    JC 0x0051dd81                       ; 0051dc9f
        ;   XREF to: 0051dd81 (CONDITIONAL_JUMP)  ; LAB_0051dd81
    LEA EAX,[EBX + 0x158]               ; 0051dca5
    MOV EDI,dword ptr [EBX + 0x2628]    ; 0051dcab
    MOV dword ptr [EBP + 0x5e],EAX      ; 0051dcb1
    TEST EDI,EDI                        ; 0051dcb4
    JZ 0x0051de3e                       ; 0051dcb6
        ;   XREF to: 0051de3e (CONDITIONAL_JUMP)  ; LAB_0051de3e
    FLD float ptr [EBP + 0x56]          ; 0051dcbc
    FLD1                                ; 0051dcbf
    FADDP                               ; 0051dcc1
    FLD float ptr [EBP + 0x66]          ; 0051dcc3
    FCOMPP                              ; 0051dcc6
    FNSTSW AX                           ; 0051dcc8
    SAHF                                ; 0051dcca
    JNC 0x0051ddab                      ; 0051dccb
        ;   XREF to: 0051ddab (CONDITIONAL_JUMP)  ; LAB_0051ddab
    FLD float ptr [EDX]                 ; 0051dcd1
    FLD float ptr [EDX + 0x4]           ; 0051dcd3
    FLD float ptr [EDX + 0x8]           ; 0051dcd6
    LEA EDI,[EBP + 0xffffff12]          ; 0051dcd9
    LEA ESI,[EBP + -0x5e]               ; 0051dcdf
    LEA EAX,[EBP + 0xffffff12]          ; 0051dce2
    FXCH ST2                            ; 0051dce8
    FSUB float ptr [ECX]                ; 0051dcea
    FXCH                                ; 0051dcec
    FSUB float ptr [ECX + 0x4]          ; 0051dcee
    FXCH ST2                            ; 0051dcf1
    FSUB float ptr [ECX + 0x8]          ; 0051dcf3
    FXCH                                ; 0051dcf6
    FSTP float ptr [EBP + -0x5e]        ; 0051dcf8
    FXCH                                ; 0051dcfb
    FSTP float ptr [EBP + -0x5a]        ; 0051dcfd
    FSTP float ptr [EBP + -0x56]        ; 0051dd00
    MOVSD ES:EDI,ESI                    ; 0051dd03
    MOVSD ES:EDI,ESI                    ; 0051dd04
    MOVSD ES:EDI,ESI                    ; 0051dd05
    PUSH EAX                            ; 0051dd06
    LEA ESI,[EBP + 0xffffff42]          ; 0051dd07
    LEA EDI,[EBP + 0xffffff2a]          ; 0051dd0d
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0051dd13
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + 0xffffff42]          ; 0051dd18
    MOVSD ES:EDI,ESI                    ; 0051dd1e
    MOVSD ES:EDI,ESI                    ; 0051dd1f
    MOVSD ES:EDI,ESI                    ; 0051dd20
    ADD ESP,0x4                         ; 0051dd21
    FLD float ptr [EBP + 0xffffff2e]    ; 0051dd24
    FSUB float ptr [EBX + 0x34]         ; 0051dd2a
    SUB ESP,0x4                         ; 0051dd2d
    FSTP float ptr [ESP]                ; 0051dd30
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0051dd33
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051dd38
    FLD float ptr [EBP + 0x76]          ; 0051dd3b
    FABS                                ; 0051dd3e
    ADD ESP,0x4                         ; 0051dd40
    FCOMP double ptr [0x005e9e0a]       ; 0051dd43 | DAT_005e9e0a
    FNSTSW AX                           ; 0051dd49
    SAHF                                ; 0051dd4b
    JNC 0x0051dd77                      ; 0051dd4c
        ;   XREF to: 0051dd77 (CONDITIONAL_JUMP)  ; LAB_0051dd77
    FLD float ptr [EBX + 0xc1e4]        ; 0051dd4e
    FLDZ                                ; 0051dd54
    FCOMPP                              ; 0051dd56
    FNSTSW AX                           ; 0051dd58
    SAHF                                ; 0051dd5a
    JC 0x0051dd77                       ; 0051dd5b
        ;   XREF to: 0051dd77 (CONDITIONAL_JUMP)  ; LAB_0051dd77
    PUSH 0x1                            ; 0051dd5d
    PUSH 0x9                            ; 0051dd5f
    MOV ECX,dword ptr [EBP + 0x5e]      ; 0051dd61
    PUSH ECX                            ; 0051dd64
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051dd65
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051dd6a
    MOV dword ptr [EBX + 0xc1e4],0x40000000 ; 0051dd6d
    MOV dword ptr [EBX + 0xc1e4],0x3f800000 ; 0051dd77
        ;   Label: LAB_0051dd77
    FLD float ptr [EBP + 0x4e]          ; 0051dd81
        ;   Label: LAB_0051dd81
    FCOMP float ptr [EBX + 0xc1e0]      ; 0051dd84
    FNSTSW AX                           ; 0051dd8a
    SAHF                                ; 0051dd8c
    JBE 0x0051d1a1                      ; 0051dd8d
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    PUSH 0x1                            ; 0051dd93
    PUSH 0x0                            ; 0051dd95
    LEA EAX,[EBX + 0x158]               ; 0051dd97
    PUSH EAX                            ; 0051dd9d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051dd9e
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051dda3
    JMP 0x0051d1a1                      ; 0051dda6
        ;   XREF to: 0051d1a1 (UNCONDITIONAL_JUMP)  ; caseD_7
    FLD float ptr [EBX + 0xc338]        ; 0051ddab
        ;   Label: LAB_0051ddab
    FCOMP double ptr [0x005e9e02]       ; 0051ddb1 | DAT_005e9e02
    FNSTSW AX                           ; 0051ddb7
    SAHF                                ; 0051ddb9
    JBE 0x0051dd77                      ; 0051ddba
        ;   XREF to: 0051dd77 (CONDITIONAL_JUMP)  ; LAB_0051dd77
    FLD float ptr [EBX + 0xc33c]        ; 0051ddbc
    FLDZ                                ; 0051ddc2
    FCOMPP                              ; 0051ddc4
    FNSTSW AX                           ; 0051ddc6
    SAHF                                ; 0051ddc8
    JC 0x0051dd77                       ; 0051ddc9
        ;   XREF to: 0051dd77 (CONDITIONAL_JUMP)  ; LAB_0051dd77
    PUSH 0x3e99999a                     ; 0051ddcb
    MOV dword ptr [EBX + 0xc280],ESI    ; 0051ddd0
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051ddd6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051dddb
    TEST EAX,EAX                        ; 0051ddde
    JZ 0x0051dded                       ; 0051dde0
        ;   XREF to: 0051dded (CONDITIONAL_JUMP)  ; LAB_0051dded
    PUSH 0x2                            ; 0051dde2
    PUSH EBX                            ; 0051dde4
    CALL core_mobster.cpp_CMobster_playTaunt_FUN_0051f330 ; 0051dde5
        ;   XREF to: 0051f330 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_playTaunt_FUN_0051f330(CMobster * this_ptr, int taunt_category)
    ADD ESP,0x8                         ; 0051ddea
    FLD float ptr [EBX + 0xc280]        ; 0051dded
        ;   Label: LAB_0051dded
    FLDZ                                ; 0051ddf3
    FCOMPP                              ; 0051ddf5
    FNSTSW AX                           ; 0051ddf7
    SAHF                                ; 0051ddf9
    JNC 0x0051de30                      ; 0051ddfa
        ;   XREF to: 0051de30 (CONDITIONAL_JUMP)  ; LAB_0051de30
    MOV EDX,dword ptr [EBX + 0x25b0]    ; 0051ddfc
    LEA EAX,[EBX + 0x158]               ; 0051de02
    TEST EDX,EDX                        ; 0051de08
    JZ 0x0051de1e                       ; 0051de0a
        ;   XREF to: 0051de1e (CONDITIONAL_JUMP)  ; LAB_0051de1e
    PUSH 0x1                            ; 0051de0c
    PUSH 0xb                            ; 0051de0e
    PUSH EAX                            ; 0051de10
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051de11
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051de16
    JMP 0x0051dd77                      ; 0051de19
        ;   XREF to: 0051dd77 (UNCONDITIONAL_JUMP)  ; LAB_0051dd77
    PUSH 0x1                            ; 0051de1e
        ;   Label: LAB_0051de1e
    PUSH 0xa                            ; 0051de20
    PUSH EAX                            ; 0051de22
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051de23
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051de28
    JMP 0x0051dd77                      ; 0051de2b
        ;   XREF to: 0051dd77 (UNCONDITIONAL_JUMP)  ; LAB_0051dd77
    PUSH EBX                            ; 0051de30
        ;   Label: LAB_0051de30
    CALL core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0 ; 0051de31
        ;   XREF to: 0051eac0 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_startFiringAttack_FUN_0051eac0(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051de36
    JMP 0x0051dd77                      ; 0051de39
        ;   XREF to: 0051dd77 (UNCONDITIONAL_JUMP)  ; LAB_0051dd77
    FLD float ptr [EDX]                 ; 0051de3e
        ;   Label: LAB_0051de3e
    FLD float ptr [EDX + 0x4]           ; 0051de40
    FLD float ptr [EDX + 0x8]           ; 0051de43
    LEA EDI,[EBP + -0x52]               ; 0051de46
    LEA ESI,[EBP + -0x76]               ; 0051de49
    LEA EAX,[EBP + -0x52]               ; 0051de4c
    FXCH ST2                            ; 0051de4f
    FSUB float ptr [ECX]                ; 0051de51
    FXCH                                ; 0051de53
    FSUB float ptr [ECX + 0x4]          ; 0051de55
    FXCH ST2                            ; 0051de58
    FSUB float ptr [ECX + 0x8]          ; 0051de5a
    FXCH                                ; 0051de5d
    FSTP float ptr [EBP + -0x76]        ; 0051de5f
    FXCH                                ; 0051de62
    FSTP float ptr [EBP + -0x72]        ; 0051de64
    FSTP float ptr [EBP + -0x6e]        ; 0051de67
    MOVSD ES:EDI,ESI                    ; 0051de6a
    MOVSD ES:EDI,ESI                    ; 0051de6b
    MOVSD ES:EDI,ESI                    ; 0051de6c
    PUSH EAX                            ; 0051de6d
    LEA ESI,[EBP + -0x2e]               ; 0051de6e
    LEA EDI,[EBP + 0xffffff72]          ; 0051de71
    CALL core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520 ; 0051de77
        ;   XREF to: 005a7520 (UNCONDITIONAL_CALL)  ; undefined core_vecdir.cpp_convertDirectionVectorToEulerAngles_FUN_005a7520()
    LEA ESI,[EBP + -0x2e]               ; 0051de7c
    MOVSD ES:EDI,ESI                    ; 0051de7f
    MOVSD ES:EDI,ESI                    ; 0051de80
    MOVSD ES:EDI,ESI                    ; 0051de81
    ADD ESP,0x4                         ; 0051de82
    FLD float ptr [EBP + 0xffffff76]    ; 0051de85
    FSUB float ptr [EBX + 0x34]         ; 0051de8b
    SUB ESP,0x4                         ; 0051de8e
    FSTP float ptr [ESP]                ; 0051de91
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd60 ; 0051de94
        ;   XREF to: 0040cd60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd60(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 0051de99
    FLD float ptr [EBP + 0x76]          ; 0051de9c
    FABS                                ; 0051de9f
    ADD ESP,0x4                         ; 0051dea1
    FCOMP double ptr [0x005e9e0a]       ; 0051dea4 | DAT_005e9e0a
    FNSTSW AX                           ; 0051deaa
    SAHF                                ; 0051deac
    JNC 0x0051dd77                      ; 0051dead
        ;   XREF to: 0051dd77 (CONDITIONAL_JUMP)  ; LAB_0051dd77
    PUSH 0x1                            ; 0051deb3
    PUSH 0x9                            ; 0051deb5
    MOV EAX,dword ptr [EBP + 0x5e]      ; 0051deb7
    PUSH EAX                            ; 0051deba
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051debb
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051dec0
    JMP 0x0051dd77                      ; 0051dec3
        ;   XREF to: 0051dd77 (UNCONDITIONAL_JUMP)  ; LAB_0051dd77
    CMP ESI,0xb                         ; 0051dec8
        ;   Label: LAB_0051dec8
    JA 0x0051d1a1                       ; 0051decb
        ;   XREF to: 0051d1a1 (CONDITIONAL_JUMP)  ; caseD_7
    JMP dword ptr [ESI*0x4 + 0x51ce10]  ; 0051ded1 | caseD_0 | caseD_8 | caseD_6
        ;   Label: switchD
    PUSH EBX                            ; 0051ded8
        ;   Label: LAB_0051ded8
    CALL core_mobster.cpp_CMobster_positionOnVehicle_FUN_0051cc20 ; 0051ded9
        ;   XREF to: 0051cc20 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_positionOnVehicle_FUN_0051cc20(CMobster * this_ptr)
    ADD ESP,0x4                         ; 0051dede
    JMP 0x0051d30f                      ; 0051dee1
        ;   XREF to: 0051d30f (UNCONDITIONAL_JUMP)  ; LAB_0051d30f

