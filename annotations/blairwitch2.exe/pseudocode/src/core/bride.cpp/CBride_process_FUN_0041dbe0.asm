; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_process_FUN_0041dbe0(CBride *this_ptr,float delta_time)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; Referenced Globals:
;   TerminatedCString s_ub_attack_wav_005cc81a
;   TerminatedCString s_ub_howl_wav_005cc829
;   TerminatedCString s_ub_attack_wav_005cc836
;   undefined4 DAT_005cc849
;   undefined4 DAT_005cc851
;   undefined4 DAT_005cc859
;   undefined4 DAT_005cc861
;   undefined4 DAT_005cc869
;   undefined4 DAT_005cc871
;   undefined4 DAT_005cc879
;   undefined4 DAT_005cc881
;   undefined4 DAT_005f3c7c
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 DAT_007bcc94
;   undefined4 DAT_007bccdc
;   ... and 6 more
;
; Called Functions:
;   core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90
;   core_charactr.cpp_CCharacter_isOnGround_FUN_00424430
;   core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00
;   core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000
;   core_charactr.cpp_FUN_00423a10
;   core_charactr.cpp_FUN_00423a60
;   core_charactr.cpp_FUN_00426f30
;   core_charactr.cpp_FUN_00427060
;   core_charactr.cpp_FUN_0042b2a0
;   ... and 12 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041dbe0
        ;   Label: core_bride.cpp_CBride_process_FUN_0041dbe0
    PUSH ESI                            ; 0041dbe1
    PUSH EDI                            ; 0041dbe2
    PUSH EBP                            ; 0041dbe3
    MOV EBP,ESP                         ; 0041dbe4
    SUB ESP,0x26c                       ; 0041dbe6
    SUB EBP,0x7a                        ; 0041dbec
    MOV EBX,dword ptr [EBP + 0x8e]      ; 0041dbef
    PUSH dword ptr [EBP + 0x92]         ; 0041dbf5
    PUSH EBX                            ; 0041dbfb
    CALL core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0 ; 0041dbfc
        ;   XREF to: 004244b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processCharacter_FUN_004244b0(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041dc01
    TEST EAX,EAX                        ; 0041dc04
    JZ 0x0041e7ef                       ; 0041dc06
        ;   XREF to: 0041e7ef (CONDITIONAL_JUMP)  ; LAB_0041e7ef
    FLD float ptr [EBX + 0x10b1c]       ; 0041dc0c
    FLDZ                                ; 0041dc12
    FCOMPP                              ; 0041dc14
    FNSTSW AX                           ; 0041dc16
    SAHF                                ; 0041dc18
    JA 0x0041dc2d                       ; 0041dc19
        ;   XREF to: 0041dc2d (CONDITIONAL_JUMP)  ; LAB_0041dc2d
    FLD float ptr [EBX + 0x10b1c]       ; 0041dc1b
    FSUB float ptr [EBP + 0x92]         ; 0041dc21
    FSTP float ptr [EBX + 0x10b1c]      ; 0041dc27
    LEA ESI,[EBX + 0x2b4]               ; 0041dc2d
        ;   Label: LAB_0041dc2d
    MOV EDX,0xbf800000                  ; 0041dc33
    PUSH ESI                            ; 0041dc38
    MOV dword ptr [EBP + 0x72],EDX      ; 0041dc39
    CALL core_motion.cpp_FUN_005035c0   ; 0041dc3c
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041dc41
    ADD ESP,0x4                         ; 0041dc44
    CMP EAX,0x5                         ; 0041dc47
    JNC 0x0041e514                      ; 0041dc4a
        ;   XREF to: 0041e514 (CONDITIONAL_JUMP)  ; LAB_0041e514
    TEST EAX,EAX                        ; 0041dc50
    JBE 0x0041de12                      ; 0041dc52
        ;   XREF to: 0041de12 (CONDITIONAL_JUMP)  ; LAB_0041de12
    CMP EAX,0x1                         ; 0041dc58
    JNZ 0x0041dd2a                      ; 0041dc5b
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBX + 0x10b1c]       ; 0041dc61
    FLDZ                                ; 0041dc67
    FCOMPP                              ; 0041dc69
    FNSTSW AX                           ; 0041dc6b
    SAHF                                ; 0041dc6d
    JC 0x0041dcb2                       ; 0041dc6e
        ;   XREF to: 0041dcb2 (CONDITIONAL_JUMP)  ; LAB_0041dcb2
    PUSH 0x41a00000                     ; 0041dc70
    PUSH 0x41200000                     ; 0041dc75
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041dc7a
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    ADD ESP,0x8                         ; 0041dc7f
    PUSH 0x1                            ; 0041dc82
    MOV dword ptr [EBP + 0x76],EAX      ; 0041dc84
    PUSH 0x3                            ; 0041dc87
    FLD float ptr [EBP + 0x76]          ; 0041dc89
    PUSH ESI                            ; 0041dc8c
    FSTP float ptr [EBX + 0x10b1c]      ; 0041dc8d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041dc93
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041dc98
    MOV ESI,dword ptr [EBX + 0x10b20]   ; 0041dc9b
    PUSH ESI                            ; 0041dca1
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041dca2
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041dca7
    TEST EAX,EAX                        ; 0041dcaa
    JZ 0x0041deba                       ; 0041dcac
        ;   XREF to: 0041deba (CONDITIONAL_JUMP)  ; LAB_0041deba
    FLD float ptr [EBX + 0x10a60]       ; 0041dcb2
        ;   Label: LAB_0041dcb2
    FMUL double ptr [0x005cc869]        ; 0041dcb8 | DAT_005cc869
    FLD float ptr [EBP + 0x92]          ; 0041dcbe
    FMUL float ptr [EBX + 0x10a60]      ; 0041dcc4
    FLD float ptr [EBP + 0x92]          ; 0041dcca
    FMULP ST2                           ; 0041dcd0
    SUB ESP,0x4                         ; 0041dcd2
    FXCH                                ; 0041dcd5
    FSTP float ptr [EBX + 0x2594]       ; 0041dcd7
    FSTP float ptr [ESP]                ; 0041dcdd
    PUSH EBX                            ; 0041dce0
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0041dce1
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0041dce6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041dce9
    PUSH dword ptr [EBP + 0x92]         ; 0041dcef
    PUSH EBX                            ; 0041dcf5
    CALL dword ptr [EAX + 0x150]        ; 0041dcf6
    ADD ESP,0x8                         ; 0041dcfc
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041dcff
    LEA ESI,[EBX + 0x2b4]               ; 0041dd05
    TEST EAX,EAX                        ; 0041dd0b
    JNZ 0x0041deff                      ; 0041dd0d
        ;   XREF to: 0041deff (CONDITIONAL_JUMP)  ; LAB_0041deff
    PUSH dword ptr [EBP + 0x92]         ; 0041dd13
    PUSH EBX                            ; 0041dd19
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0041dd1a
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041dd1f
    TEST EAX,EAX                        ; 0041dd22
    JZ 0x0041deee                       ; 0041dd24
        ;   XREF to: 0041deee (CONDITIONAL_JUMP)  ; LAB_0041deee
    CMP dword ptr [EBX + 0x10a78],0x0   ; 0041dd2a
        ;   Label: LAB_0041dd2a
    JNZ 0x0041e531                      ; 0041dd31
        ;   XREF to: 0041e531 (CONDITIONAL_JUMP)  ; LAB_0041e531
    LEA EAX,[EBX + 0x2508]              ; 0041dd37
        ;   Label: LAB_0041dd37
    MOV dword ptr [EAX + 0x8],0x0       ; 0041dd3d
    FLD float ptr [EBP + 0x92]          ; 0041dd44
    MOV EDX,dword ptr [EAX + 0x8]       ; 0041dd4a
    MOV dword ptr [EAX + 0x4],EDX       ; 0041dd4d
    MOV EDX,dword ptr [EAX + 0x4]       ; 0041dd50
    MOV dword ptr [EAX],EDX             ; 0041dd53
    FMUL float ptr [EBX + 0x10a60]      ; 0041dd55
    LEA ESI,[EBX + 0x2b4]               ; 0041dd5b
    FSTP float ptr [EBP + 0x66]         ; 0041dd61
    FLD float ptr [EBP + 0x66]          ; 0041dd64
        ;   Label: LAB_0041dd64
    FLDZ                                ; 0041dd67
    FCOMPP                              ; 0041dd69
    FNSTSW AX                           ; 0041dd6b
    SAHF                                ; 0041dd6d
    JNC 0x0041e5e5                      ; 0041dd6e
        ;   XREF to: 0041e5e5 (CONDITIONAL_JUMP)  ; LAB_0041e5e5
    LEA EAX,[EBP + 0x66]                ; 0041dd74
    PUSH EAX                            ; 0041dd77
    PUSH ESI                            ; 0041dd78
    CALL core_motion.cpp_CMotionController_advance_FUN_005030c0 ; 0041dd79
        ;   XREF to: 005030c0 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_005030c0(CMotionController * this_ptr, float * delta_time)
    ADD ESP,0x8                         ; 0041dd7e
    CMP EAX,0x11                        ; 0041dd81
    JZ 0x0041dd64                       ; 0041dd84
        ;   XREF to: 0041dd64 (CONDITIONAL_JUMP)  ; LAB_0041dd64
    PUSH EAX                            ; 0041dd86
    PUSH EBX                            ; 0041dd87
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00 ; 0041dd88
        ;   XREF to: 0042aa00 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042aa00(CCharacter * this_ptr, int bone_index)
    ADD ESP,0x8                         ; 0041dd8d
    JMP 0x0041dd64                      ; 0041dd90
        ;   XREF to: 0041dd64 (UNCONDITIONAL_JUMP)  ; LAB_0041dd64
    MOV ECX,dword ptr [EBX + 0x10a64]   ; 0041dd92
        ;   Label: LAB_0041dd92
    TEST ECX,ECX                        ; 0041dd98
    JNZ 0x0041dd2a                      ; 0041dd9a
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH ECX                            ; 0041dd9c
    PUSH ESI                            ; 0041dd9d
    LEA ESI,[EBP + -0x4e]               ; 0041dd9e
    LEA EDI,[EBP + 0xffffff3a]          ; 0041dda1
    CALL core_skeleton.cpp_FUN_005469a0 ; 0041dda7
        ;   XREF to: 005469a0 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_005469a0()
    ADD ESP,0x8                         ; 0041ddac
    LEA EAX,[EBP + 0xffffff3a]          ; 0041ddaf
    LEA ESI,[EBP + -0x4e]               ; 0041ddb5
    PUSH EAX                            ; 0041ddb8
    MOVSD ES:EDI,ESI                    ; 0041ddb9
    MOVSD ES:EDI,ESI                    ; 0041ddba
    MOVSD ES:EDI,ESI                    ; 0041ddbb
    PUSH EBX                            ; 0041ddbc
    LEA ESI,[EBP + -0x42]               ; 0041ddbd
    LEA EDI,[EBP + 0xffffff2e]          ; 0041ddc0
    CALL core_actor.cpp_FUN_00408d70    ; 0041ddc6
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041ddcb
    LEA ESI,[EBP + -0x42]               ; 0041ddce
    LEA EAX,[EBP + 0xffffff2e]          ; 0041ddd1
    PUSH 0x0                            ; 0041ddd7
    MOVSD ES:EDI,ESI                    ; 0041ddd9
    MOVSD ES:EDI,ESI                    ; 0041ddda
    MOVSD ES:EDI,ESI                    ; 0041dddb
    PUSH EAX                            ; 0041dddc
    MOV ESI,dword ptr [0x006167e0]      ; 0041dddd | g_CGorePtr
    PUSH ESI                            ; 0041dde3
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0 ; 0041dde4
        ;   XREF to: 004c9ad0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004c9ad0(CGore * this_ptr, CVector3f * position, EBloodType blood_type)
    ADD ESP,0xc                         ; 0041dde9
    PUSH 0x41c80000                     ; 0041ddec
    PUSH 0x32                           ; 0041ddf1
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041ddf3
    PUSH EBX                            ; 0041ddf9
    CALL dword ptr [EAX + 0xb0]         ; 0041ddfa
    ADD ESP,0xc                         ; 0041de00
    MOV dword ptr [EBX + 0x10a64],0x1   ; 0041de03
    JMP 0x0041dd2a                      ; 0041de0d
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH dword ptr [EBP + 0x92]         ; 0041de12
        ;   Label: LAB_0041de12
    PUSH EBX                            ; 0041de18
    CALL core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970 ; 0041de19
        ;   XREF to: 00488970 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_updatePatrol_FUN_00488970(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 0041de1e
    TEST EAX,EAX                        ; 0041de21
    JZ 0x0041de3d                       ; 0041de23
        ;   XREF to: 0041de3d (CONDITIONAL_JUMP)  ; LAB_0041de3d
    PUSH 0x1                            ; 0041de25
    PUSH 0x1                            ; 0041de27
    LEA EAX,[EBX + 0x2b4]               ; 0041de29
    PUSH EAX                            ; 0041de2f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041de30
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041de35
    JMP 0x0041dd2a                      ; 0041de38
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH dword ptr [EBP + 0x92]         ; 0041de3d
        ;   Label: LAB_0041de3d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041de43
    PUSH EBX                            ; 0041de49
    CALL dword ptr [EAX + 0x150]        ; 0041de4a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041de50
    ADD ESP,0x8                         ; 0041de56
    TEST EAX,EAX                        ; 0041de59
    JZ 0x0041dd2a                       ; 0041de5b
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x1                            ; 0041de61
    PUSH 0x1                            ; 0041de63
    PUSH ESI                            ; 0041de65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041de66
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041de6b
    MOV EDX,dword ptr [EBX + 0x10b20]   ; 0041de6e
    PUSH EDX                            ; 0041de74
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041de75
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041de7a
    TEST EAX,EAX                        ; 0041de7d
    JNZ 0x0041dd2a                      ; 0041de7f
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV ECX,dword ptr [EBX + 0x10b24]   ; 0041de85
    PUSH ECX                            ; 0041de8b
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041de8c
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041de91
    TEST EAX,EAX                        ; 0041de94
    JNZ 0x0041dd2a                      ; 0041de96
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EDX,0x5cc81a                    ; 0041de9c | = "ub-attack?.wav"
    PUSH EDX                            ; 0041dea1 | = "ub-attack?.wav"
    MOV ESI,dword ptr [EBX + 0x2b0]     ; 0041dea2
    PUSH EBX                            ; 0041dea8
    CALL dword ptr [ESI + 0x34]         ; 0041dea9
    ADD ESP,0x8                         ; 0041deac
    MOV dword ptr [EBX + 0x10b24],EAX   ; 0041deaf
    JMP 0x0041dd2a                      ; 0041deb5
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EDI,dword ptr [EBX + 0x10b24]   ; 0041deba
        ;   Label: LAB_0041deba
    PUSH EDI                            ; 0041dec0
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041dec1
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041dec6
    TEST EAX,EAX                        ; 0041dec9
    JNZ 0x0041dcb2                      ; 0041decb
        ;   XREF to: 0041dcb2 (CONDITIONAL_JUMP)  ; LAB_0041dcb2
    PUSH 0x5cc829                       ; 0041ded1 | = "ub-howl?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041ded6
    PUSH EBX                            ; 0041dedc
    CALL dword ptr [EAX + 0x34]         ; 0041dedd
    ADD ESP,0x8                         ; 0041dee0
    MOV dword ptr [EBX + 0x10b24],EAX   ; 0041dee3
    JMP 0x0041dcb2                      ; 0041dee9
        ;   XREF to: 0041dcb2 (UNCONDITIONAL_JUMP)  ; LAB_0041dcb2
    PUSH 0x1                            ; 0041deee
        ;   Label: LAB_0041deee
    PUSH EAX                            ; 0041def0
    PUSH ESI                            ; 0041def1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041def2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041def7
    JMP 0x0041dd2a                      ; 0041defa
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x3e32b8c2                     ; 0041deff
        ;   Label: LAB_0041deff
    PUSH 0x3f800000                     ; 0041df04
    MOV EAX,[0x005f3c7c]                ; 0041df09 | DAT_005f3c7c
    XOR EDX,EDX                         ; 0041df0e
    MOV dword ptr [EBP + 0xffffff0a],EDX ; 0041df10
    MOV dword ptr [EBP + 0xffffff12],EAX ; 0041df16
    LEA EAX,[EBP + 0xffffff0a]          ; 0041df1c
    MOV dword ptr [EBP + 0xffffff0e],EDX ; 0041df22
    PUSH EAX                            ; 0041df28
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041df29
    PUSH EAX                            ; 0041df2f
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0041df30
    CALL dword ptr [EDX + 0xcc]         ; 0041df36
    ADD ESP,0x4                         ; 0041df3c
    PUSH EAX                            ; 0041df3f
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041df40
    ADD EAX,0x20                        ; 0041df46
    PUSH EAX                            ; 0041df49
    PUSH EBX                            ; 0041df4a
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0041df4b
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041df50
    TEST EAX,EAX                        ; 0041df53
    JL 0x0041dffb                       ; 0041df55
        ;   XREF to: 0041dffb (CONDITIONAL_JUMP)  ; LAB_0041dffb
    JLE 0x0041dd2a                      ; 0041df5b
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBX + 0x10a74]       ; 0041df61
    FLDZ                                ; 0041df67
    FCOMPP                              ; 0041df69
    FNSTSW AX                           ; 0041df6b
    SAHF                                ; 0041df6d
    JC 0x0041dd2a                       ; 0041df6e
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041df74
    PUSH EAX                            ; 0041df7a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0041df7b
    CALL dword ptr [EDX + 0xfc]         ; 0041df81
    ADD ESP,0x4                         ; 0041df87
    TEST EAX,EAX                        ; 0041df8a
    JNZ 0x0041dd2a                      ; 0041df8c
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x3f000000                     ; 0041df92
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0041df97
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0041df9c
    TEST EAX,EAX                        ; 0041df9f
    JZ 0x0041e00d                       ; 0041dfa1
        ;   XREF to: 0041e00d (CONDITIONAL_JUMP)  ; LAB_0041e00d
    PUSH 0x1                            ; 0041dfa3
    PUSH 0x5                            ; 0041dfa5
    PUSH ESI                            ; 0041dfa7
        ;   Label: LAB_0041dfa7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041dfa8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041dfad
    MOV ESI,dword ptr [EBX + 0x10b20]   ; 0041dfb0
    PUSH ESI                            ; 0041dfb6
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041dfb7
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041dfbc
    TEST EAX,EAX                        ; 0041dfbf
    JNZ 0x0041dd2a                      ; 0041dfc1
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EDI,dword ptr [EBX + 0x10b24]   ; 0041dfc7
    PUSH EDI                            ; 0041dfcd
    CALL sound_sndmain.cpp_FUN_00550b70 ; 0041dfce
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0041dfd3
    TEST EAX,EAX                        ; 0041dfd6
    JNZ 0x0041dd2a                      ; 0041dfd8
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x5cc836                       ; 0041dfde | = "ub-attack?.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0041dfe3
    PUSH EBX                            ; 0041dfe9
    CALL dword ptr [EAX + 0x34]         ; 0041dfea
    ADD ESP,0x8                         ; 0041dfed
    MOV dword ptr [EBX + 0x10b24],EAX   ; 0041dff0
    JMP 0x0041dd2a                      ; 0041dff6
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x1                            ; 0041dffb
        ;   Label: LAB_0041dffb
    PUSH 0x0                            ; 0041dffd
    PUSH ESI                            ; 0041dfff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e000
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e005
    JMP 0x0041dd2a                      ; 0041e008
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x1                            ; 0041e00d
        ;   Label: LAB_0041e00d
    PUSH 0x6                            ; 0041e00f
    JMP 0x0041dfa7                      ; 0041e011
        ;   XREF to: 0041dfa7 (UNCONDITIONAL_JUMP)  ; LAB_0041dfa7
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0041e013
        ;   Label: LAB_0041e013
    TEST EDI,EDI                        ; 0041e019
    JNZ 0x0041e02f                      ; 0041e01b
        ;   XREF to: 0041e02f (CONDITIONAL_JUMP)  ; LAB_0041e02f
    PUSH 0x1                            ; 0041e01d
    PUSH 0x1                            ; 0041e01f
    PUSH ESI                            ; 0041e021
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e022
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e027
    JMP 0x0041dd2a                      ; 0041e02a
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH EDI                            ; 0041e02f
        ;   Label: LAB_0041e02f
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0041e030
    CALL dword ptr [EDX + 0xfc]         ; 0041e036
    ADD ESP,0x4                         ; 0041e03c
    TEST EAX,EAX                        ; 0041e03f
    JZ 0x0041e055                       ; 0041e041
        ;   XREF to: 0041e055 (CONDITIONAL_JUMP)  ; LAB_0041e055
    PUSH 0x1                            ; 0041e043
    PUSH 0x1                            ; 0041e045
    PUSH ESI                            ; 0041e047
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e048
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e04d
    JMP 0x0041dd2a                      ; 0041e050
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x3f000000                     ; 0041e055
        ;   Label: LAB_0041e055
    PUSH 0x3e4ccccd                     ; 0041e05a
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e05f
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e064
    ADD ESP,0x8                         ; 0041e067
    FLD float ptr [EBP + 0x76]          ; 0041e06a
    PUSH ESI                            ; 0041e06d
    FSTP float ptr [EBX + 0x10a74]      ; 0041e06e
    CALL core_motion.cpp_FUN_00503e60   ; 0041e074
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e079
    ADD ESP,0x4                         ; 0041e07c
    MOV EAX,dword ptr [EBP + 0x76]      ; 0041e07f
    MOV dword ptr [EBP + 0x6a],EAX      ; 0041e082
    FLD float ptr [EBP + 0x6a]          ; 0041e085
    FST double ptr [EBP + 0x56]         ; 0041e088
    FCOMP double ptr [0x005cc869]       ; 0041e08b | DAT_005cc869
    FNSTSW AX                           ; 0041e091
    SAHF                                ; 0041e093
    JA 0x0041dd2a                       ; 0041e094
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EAX,[0x005f3c7c]                ; 0041e09a | DAT_005f3c7c
    FLD1                                ; 0041e09f
    MOV dword ptr [EBP + 0x72],EAX      ; 0041e0a1
    FCOMP double ptr [EBP + 0x56]       ; 0041e0a4
    FNSTSW AX                           ; 0041e0a7
    SAHF                                ; 0041e0a9
    JA 0x0041e18c                       ; 0041e0aa
        ;   XREF to: 0041e18c (CONDITIONAL_JUMP)  ; LAB_0041e18c
    FLD double ptr [EBP + 0x56]         ; 0041e0b0
    FCOMP double ptr [0x005cc851]       ; 0041e0b3 | DAT_005cc851
    FNSTSW AX                           ; 0041e0b9
    SAHF                                ; 0041e0bb
    JA 0x0041e18c                       ; 0041e0bc
        ;   XREF to: 0041e18c (CONDITIONAL_JUMP)  ; LAB_0041e18c
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 0041e0c2
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0041e0c8
    JZ 0x0041dd2a                       ; 0041e0d0
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    LEA EAX,[EBP + 0xfffffe0e]          ; 0041e0d6
    PUSH EAX                            ; 0041e0dc
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041e0dd
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041e0e2
    PUSH 0x41700000                     ; 0041e0e5
    PUSH 0x40e00000                     ; 0041e0ea
    LEA ESI,[EBP + 0xffffff46]          ; 0041e0ef
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e0f5
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e0fa
    ADD ESP,0x8                         ; 0041e0fd
    LEA EAX,[EBP + 0xfffffe0e]          ; 0041e100
    MOV EDX,dword ptr [0x007bcce4]      ; 0041e106 | DAT_007bcce4
    PUSH EAX                            ; 0041e10c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041e10d
    MOV dword ptr [EBP + 0xfffffe42],EBX ; 0041e114
    SUB EAX,EDX                         ; 0041e11a
    MOV dword ptr [EBP + 0xfffffe46],EBX ; 0041e11c
    SHL EAX,0x4                         ; 0041e122
    LEA EDX,[EBX + 0x1134]              ; 0041e125
    PUSH 0x3ecccccd                     ; 0041e12b
    ADD EAX,EDX                         ; 0041e130
    LEA EDI,[EBP + 0xffffff6a]          ; 0041e132
    PUSH EAX                            ; 0041e138
    FLD float ptr [EBP + 0x76]          ; 0041e139
    PUSH 0x7bcc94                       ; 0041e13c | DAT_007bcc94
    FSTP float ptr [EBP + 0xfffffe12]   ; 0041e141
    CALL core_xform.cpp_FUN_00591530    ; 0041e147
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0041e14c
    LEA EAX,[EBP + 0xffffff6a]          ; 0041e14f
    LEA ESI,[EBP + 0xffffff46]          ; 0041e155
    PUSH EAX                            ; 0041e15b
    MOVSD ES:EDI,ESI                    ; 0041e15c
    MOVSD ES:EDI,ESI                    ; 0041e15d
    MOVSD ES:EDI,ESI                    ; 0041e15e
    PUSH EBX                            ; 0041e15f
    LEA ESI,[EBP + 0xfffffefe]          ; 0041e160
    CALL core_actor.cpp_FUN_00408d70    ; 0041e166
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041e16b
    LEA EAX,[EBP + -0x1e]               ; 0041e16e
    PUSH EAX                            ; 0041e171
    LEA EDI,[EBP + -0x1e]               ; 0041e172
    LEA ESI,[EBP + 0xfffffefe]          ; 0041e175
    PUSH EBX                            ; 0041e17b
    MOVSD ES:EDI,ESI                    ; 0041e17c
    MOVSD ES:EDI,ESI                    ; 0041e17d
    MOVSD ES:EDI,ESI                    ; 0041e17e
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0041e17f
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0041e184
    JMP 0x0041dd2a                      ; 0041e187
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBP + 0x6a]          ; 0041e18c
        ;   Label: LAB_0041e18c
    FST double ptr [EBP + 0x3e]         ; 0041e18f
    FCOMP double ptr [0x005cc869]       ; 0041e192 | DAT_005cc869
    FNSTSW AX                           ; 0041e198
    SAHF                                ; 0041e19a
    JC 0x0041dd2a                       ; 0041e19b
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD double ptr [EBP + 0x3e]         ; 0041e1a1
    FCOMP double ptr [0x005cc871]       ; 0041e1a4 | DAT_005cc871
    FNSTSW AX                           ; 0041e1aa
    SAHF                                ; 0041e1ac
    JA 0x0041dd2a                       ; 0041e1ad
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 0041e1b3
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0041e1b9
    JZ 0x0041dd2a                       ; 0041e1c1
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    LEA EAX,[EBP + 0xfffffec2]          ; 0041e1c7
    PUSH EAX                            ; 0041e1cd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041e1ce
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041e1d3
    PUSH 0x41700000                     ; 0041e1d6
    PUSH 0x40e00000                     ; 0041e1db
    LEA ESI,[EBP + -0x7e]               ; 0041e1e0
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e1e3
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e1e8
    ADD ESP,0x8                         ; 0041e1eb
    LEA EAX,[EBP + 0xfffffec2]          ; 0041e1ee
    MOV EDX,dword ptr [0x007bcce0]      ; 0041e1f4 | DAT_007bcce0
    PUSH EAX                            ; 0041e1fa
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041e1fb
    MOV dword ptr [EBP + 0xfffffef6],EBX ; 0041e202
    SUB EAX,EDX                         ; 0041e208
    MOV dword ptr [EBP + 0xfffffefa],EBX ; 0041e20a
    SHL EAX,0x4                         ; 0041e210
    LEA EDX,[EBX + 0x1134]              ; 0041e213
    PUSH 0x3ecccccd                     ; 0041e219
    ADD EAX,EDX                         ; 0041e21e
    LEA EDI,[EBP + 0x12]                ; 0041e220
    PUSH EAX                            ; 0041e223
    FLD float ptr [EBP + 0x76]          ; 0041e224
    PUSH 0x7bcc94                       ; 0041e227 | DAT_007bcc94
    FSTP float ptr [EBP + 0xfffffec6]   ; 0041e22c
    CALL core_xform.cpp_FUN_00591530    ; 0041e232
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0041e237
    LEA EAX,[EBP + 0x12]                ; 0041e23a
    LEA ESI,[EBP + -0x7e]               ; 0041e23d
    PUSH EAX                            ; 0041e240
    MOVSD ES:EDI,ESI                    ; 0041e241
    MOVSD ES:EDI,ESI                    ; 0041e242
    MOVSD ES:EDI,ESI                    ; 0041e243
    PUSH EBX                            ; 0041e244
    LEA ESI,[EBP + -0x66]               ; 0041e245
    CALL core_actor.cpp_FUN_00408d70    ; 0041e248
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041e24d
    LEA EAX,[EBP + 0xffffff5e]          ; 0041e250
    PUSH EAX                            ; 0041e256
    LEA EDI,[EBP + 0xffffff5e]          ; 0041e257
    LEA ESI,[EBP + -0x66]               ; 0041e25d
    PUSH EBX                            ; 0041e260
    MOVSD ES:EDI,ESI                    ; 0041e261
    MOVSD ES:EDI,ESI                    ; 0041e262
    MOVSD ES:EDI,ESI                    ; 0041e263
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0041e264
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0041e269
    JMP 0x0041dd2a                      ; 0041e26c
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EDI,dword ptr [EBX + 0x10a78]   ; 0041e271
        ;   Label: LAB_0041e271
    TEST EDI,EDI                        ; 0041e277
    JNZ 0x0041e28d                      ; 0041e279
        ;   XREF to: 0041e28d (CONDITIONAL_JUMP)  ; LAB_0041e28d
    PUSH 0x1                            ; 0041e27b
    PUSH 0x1                            ; 0041e27d
    PUSH ESI                            ; 0041e27f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e280
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e285
    JMP 0x0041dd2a                      ; 0041e288
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH EDI                            ; 0041e28d
        ;   Label: LAB_0041e28d
    MOV EDX,dword ptr [EDI + 0x2b0]     ; 0041e28e
    CALL dword ptr [EDX + 0xfc]         ; 0041e294
    ADD ESP,0x4                         ; 0041e29a
    TEST EAX,EAX                        ; 0041e29d
    JZ 0x0041e2b3                       ; 0041e29f
        ;   XREF to: 0041e2b3 (CONDITIONAL_JUMP)  ; LAB_0041e2b3
    PUSH 0x1                            ; 0041e2a1
    PUSH 0x1                            ; 0041e2a3
    PUSH ESI                            ; 0041e2a5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e2a6
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e2ab
    JMP 0x0041dd2a                      ; 0041e2ae
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    PUSH 0x3f000000                     ; 0041e2b3
        ;   Label: LAB_0041e2b3
    PUSH 0x3e4ccccd                     ; 0041e2b8
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e2bd
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e2c2
    ADD ESP,0x8                         ; 0041e2c5
    FLD float ptr [EBP + 0x76]          ; 0041e2c8
    PUSH ESI                            ; 0041e2cb
    FSTP float ptr [EBX + 0x10a74]      ; 0041e2cc
    CALL core_motion.cpp_FUN_00503e60   ; 0041e2d2
        ;   XREF to: 00503e60 (UNCONDITIONAL_CALL)  ; float core_motion.cpp_FUN_00503e60(CMotionController * this_ptr)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e2d7
    ADD ESP,0x4                         ; 0041e2da
    MOV EAX,dword ptr [EBP + 0x76]      ; 0041e2dd
    MOV dword ptr [EBP + 0x6e],EAX      ; 0041e2e0
    FLD float ptr [EBP + 0x6e]          ; 0041e2e3
    FST double ptr [EBP + 0x36]         ; 0041e2e6
    FCOMP double ptr [0x005cc849]       ; 0041e2e9 | DAT_005cc849
    FNSTSW AX                           ; 0041e2ef
    SAHF                                ; 0041e2f1
    JA 0x0041dd2a                       ; 0041e2f2
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    MOV EAX,[0x005f3c7c]                ; 0041e2f8 | DAT_005f3c7c
    FLD1                                ; 0041e2fd
    MOV dword ptr [EBP + 0x72],EAX      ; 0041e2ff
    FCOMP double ptr [EBP + 0x36]       ; 0041e302
    FNSTSW AX                           ; 0041e305
    SAHF                                ; 0041e307
    JA 0x0041e3de                       ; 0041e308
        ;   XREF to: 0041e3de (CONDITIONAL_JUMP)  ; LAB_0041e3de
    FLD double ptr [EBP + 0x36]         ; 0041e30e
    FCOMP double ptr [0x005cc851]       ; 0041e311 | DAT_005cc851
    FNSTSW AX                           ; 0041e317
    SAHF                                ; 0041e319
    JA 0x0041e3de                       ; 0041e31a
        ;   XREF to: 0041e3de (CONDITIONAL_JUMP)  ; LAB_0041e3de
    MOV EAX,dword ptr [EBX + 0x10b04]   ; 0041e320
        ;   Label: LAB_0041e320
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0041e326
    JZ 0x0041dd2a                       ; 0041e32e
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    LEA EAX,[EBP + 0xfffffe4a]          ; 0041e334
    PUSH EAX                            ; 0041e33a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041e33b
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041e340
    PUSH 0x41700000                     ; 0041e343
    PUSH 0x40e00000                     ; 0041e348
    LEA ESI,[EBP + -0x12]               ; 0041e34d
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e350
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e355
    ADD ESP,0x8                         ; 0041e358
    LEA EAX,[EBP + 0xfffffe4a]          ; 0041e35b
    MOV EDX,dword ptr [0x007bcce4]      ; 0041e361 | DAT_007bcce4
    PUSH EAX                            ; 0041e367
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041e368
    MOV dword ptr [EBP + 0xfffffe7e],EBX ; 0041e36f
    SUB EAX,EDX                         ; 0041e375
    MOV dword ptr [EBP + 0xfffffe82],EBX ; 0041e377
    SHL EAX,0x4                         ; 0041e37d
    LEA EDX,[EBX + 0x1134]              ; 0041e380
    PUSH 0x3ecccccd                     ; 0041e386
    ADD EAX,EDX                         ; 0041e38b
    LEA EDI,[EBP + 0x1e]                ; 0041e38d
    PUSH EAX                            ; 0041e390
    FLD float ptr [EBP + 0x76]          ; 0041e391
    PUSH 0x7bcc94                       ; 0041e394 | DAT_007bcc94
    FSTP float ptr [EBP + 0xfffffe4e]   ; 0041e399
    CALL core_xform.cpp_FUN_00591530    ; 0041e39f
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0041e3a4
    LEA EAX,[EBP + 0x1e]                ; 0041e3a7
    LEA ESI,[EBP + -0x12]               ; 0041e3aa
    PUSH EAX                            ; 0041e3ad
    MOVSD ES:EDI,ESI                    ; 0041e3ae
    MOVSD ES:EDI,ESI                    ; 0041e3af
    MOVSD ES:EDI,ESI                    ; 0041e3b0
    PUSH EBX                            ; 0041e3b1
    LEA ESI,[EBP + 0xffffff52]          ; 0041e3b2
    CALL core_actor.cpp_FUN_00408d70    ; 0041e3b8
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041e3bd
    LEA EAX,[EBP + -0x36]               ; 0041e3c0
    PUSH EAX                            ; 0041e3c3
    LEA EDI,[EBP + -0x36]               ; 0041e3c4
    LEA ESI,[EBP + 0xffffff52]          ; 0041e3c7
    PUSH EBX                            ; 0041e3cd
    MOVSD ES:EDI,ESI                    ; 0041e3ce
    MOVSD ES:EDI,ESI                    ; 0041e3cf
    MOVSD ES:EDI,ESI                    ; 0041e3d0
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0041e3d1
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0041e3d6
    JMP 0x0041dd2a                      ; 0041e3d9
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBP + 0x6e]          ; 0041e3de
        ;   Label: LAB_0041e3de
    FST double ptr [EBP + 0x4e]         ; 0041e3e1
    FCOMP double ptr [0x005cc859]       ; 0041e3e4 | DAT_005cc859
    FNSTSW AX                           ; 0041e3ea
    SAHF                                ; 0041e3ec
    JC 0x0041e401                       ; 0041e3ed
        ;   XREF to: 0041e401 (CONDITIONAL_JUMP)  ; LAB_0041e401
    FLD double ptr [EBP + 0x4e]         ; 0041e3ef
    FCOMP double ptr [0x005cc861]       ; 0041e3f2 | DAT_005cc861
    FNSTSW AX                           ; 0041e3f8
    SAHF                                ; 0041e3fa
    JBE 0x0041e320                      ; 0041e3fb
        ;   XREF to: 0041e320 (CONDITIONAL_JUMP)  ; LAB_0041e320
    FLD float ptr [EBP + 0x6e]          ; 0041e401
        ;   Label: LAB_0041e401
    FST double ptr [EBP + 0x46]         ; 0041e404
    FCOMP double ptr [0x005cc869]       ; 0041e407 | DAT_005cc869
    FNSTSW AX                           ; 0041e40d
    SAHF                                ; 0041e40f
    JC 0x0041e4e8                       ; 0041e410
        ;   XREF to: 0041e4e8 (CONDITIONAL_JUMP)  ; LAB_0041e4e8
    FLD double ptr [EBP + 0x46]         ; 0041e416
    FCOMP double ptr [0x005cc871]       ; 0041e419 | DAT_005cc871
    FNSTSW AX                           ; 0041e41f
    SAHF                                ; 0041e421
    JA 0x0041e4e8                       ; 0041e422
        ;   XREF to: 0041e4e8 (CONDITIONAL_JUMP)  ; LAB_0041e4e8
    MOV EAX,dword ptr [EBX + 0x10afc]   ; 0041e428
        ;   Label: LAB_0041e428
    CMP dword ptr [EBX + EAX*0x4 + 0x23f4],0x0 ; 0041e42e
    JZ 0x0041dd2a                       ; 0041e436
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    LEA EAX,[EBP + 0xfffffe86]          ; 0041e43c
    PUSH EAX                            ; 0041e442
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0 ; 0041e443
        ;   XREF to: 004222d0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_004222d0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 0041e448
    PUSH 0x41700000                     ; 0041e44b
    PUSH 0x40e00000                     ; 0041e450
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0041e455
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + 0x76],EAX      ; 0041e45a
    ADD ESP,0x8                         ; 0041e45d
    LEA EAX,[EBP + 0xfffffe86]          ; 0041e460
    MOV EDX,dword ptr [0x007bcce0]      ; 0041e466 | DAT_007bcce0
    PUSH EAX                            ; 0041e46c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0041e46d
    LEA ESI,[EBP + 0xffffff76]          ; 0041e474
    SUB EAX,EDX                         ; 0041e47a
    MOV dword ptr [EBP + 0xfffffeba],EBX ; 0041e47c
    MOV EDX,EAX                         ; 0041e482
    MOV dword ptr [EBP + 0xfffffebe],EBX ; 0041e484
    SHL EDX,0x4                         ; 0041e48a
    LEA EAX,[EBX + 0x1134]              ; 0041e48d
    PUSH 0x3ecccccd                     ; 0041e493
    ADD EAX,EDX                         ; 0041e498
    LEA EDI,[EBP + -0x6]                ; 0041e49a
    PUSH EAX                            ; 0041e49d
    FLD float ptr [EBP + 0x76]          ; 0041e49e
    PUSH 0x7bcc94                       ; 0041e4a1 | DAT_007bcc94
    FSTP float ptr [EBP + 0xfffffe8a]   ; 0041e4a6
    CALL core_xform.cpp_FUN_00591530    ; 0041e4ac
        ;   XREF to: 00591530 (UNCONDITIONAL_CALL)  ; undefined core_xform.cpp_FUN_00591530()
    ADD ESP,0x8                         ; 0041e4b1
    LEA EAX,[EBP + -0x6]                ; 0041e4b4
    LEA ESI,[EBP + 0xffffff76]          ; 0041e4b7
    PUSH EAX                            ; 0041e4bd
    MOVSD ES:EDI,ESI                    ; 0041e4be
    MOVSD ES:EDI,ESI                    ; 0041e4bf
    MOVSD ES:EDI,ESI                    ; 0041e4c0
    PUSH EBX                            ; 0041e4c1
    LEA ESI,[EBP + -0x72]               ; 0041e4c2
    CALL core_actor.cpp_FUN_00408d70    ; 0041e4c5
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    ADD ESP,0x8                         ; 0041e4ca
    LEA EAX,[EBP + 0x6]                 ; 0041e4cd
    PUSH EAX                            ; 0041e4d0
    LEA EDI,[EBP + 0x6]                 ; 0041e4d1
    LEA ESI,[EBP + -0x72]               ; 0041e4d4
    PUSH EBX                            ; 0041e4d7
    MOVSD ES:EDI,ESI                    ; 0041e4d8
    MOVSD ES:EDI,ESI                    ; 0041e4d9
    MOVSD ES:EDI,ESI                    ; 0041e4da
    CALL core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110 ; 0041e4db
        ;   XREF to: 00488110 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_testAttackRadius_FUN_00488110(CEnemy * this_ptr, CVector3f * point, float radius, SDamageInfo * damage_info)
    ADD ESP,0x10                        ; 0041e4e0
    JMP 0x0041dd2a                      ; 0041e4e3
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBP + 0x6e]          ; 0041e4e8
        ;   Label: LAB_0041e4e8
    FST double ptr [EBP + 0x5e]         ; 0041e4eb
    FCOMP double ptr [0x005cc879]       ; 0041e4ee | DAT_005cc879
    FNSTSW AX                           ; 0041e4f4
    SAHF                                ; 0041e4f6
    JC 0x0041dd2a                       ; 0041e4f7
        ;   XREF to: 0041dd2a (CONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD double ptr [EBP + 0x5e]         ; 0041e4fd
    FCOMP double ptr [0x005cc849]       ; 0041e500 | DAT_005cc849
    FNSTSW AX                           ; 0041e506
    SAHF                                ; 0041e508
    JBE 0x0041e428                      ; 0041e509
        ;   XREF to: 0041e428 (CONDITIONAL_JUMP)  ; LAB_0041e428
    JMP 0x0041dd2a                      ; 0041e50f
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    JBE 0x0041e013                      ; 0041e514
        ;   XREF to: 0041e013 (CONDITIONAL_JUMP)  ; LAB_0041e013
        ;   Label: LAB_0041e514
    CMP EAX,0x6                         ; 0041e51a
    JBE 0x0041e271                      ; 0041e51d
        ;   XREF to: 0041e271 (CONDITIONAL_JUMP)  ; LAB_0041e271
    CMP EAX,0xe                         ; 0041e523
    JZ 0x0041dd92                       ; 0041e526
        ;   XREF to: 0041dd92 (CONDITIONAL_JUMP)  ; LAB_0041dd92
    JMP 0x0041dd2a                      ; 0041e52c
        ;   XREF to: 0041dd2a (UNCONDITIONAL_JUMP)  ; LAB_0041dd2a
    FLD float ptr [EBP + 0x72]          ; 0041e531
        ;   Label: LAB_0041e531
    FLDZ                                ; 0041e534
    FCOMPP                              ; 0041e536
    FNSTSW AX                           ; 0041e538
    SAHF                                ; 0041e53a
    JA 0x0041dd37                       ; 0041e53b
        ;   XREF to: 0041dd37 (CONDITIONAL_JUMP)  ; LAB_0041dd37
    FLD float ptr [EBX + 0x10a60]       ; 0041e541
    FLD float ptr [EBP + 0x92]          ; 0041e547
    FLD ST0                             ; 0041e54d
    FMUL double ptr [0x005cc881]        ; 0041e54f | DAT_005cc881
    FXCH                                ; 0041e555
    FMUL float ptr [EBX + 0x10a60]      ; 0041e557
    FXCH                                ; 0041e55d
    FMULP ST2                           ; 0041e55f
    SUB ESP,0x4                         ; 0041e561
    FXCH                                ; 0041e564
    FSTP float ptr [EBX + 0x2594]       ; 0041e566
    FSTP float ptr [ESP]                ; 0041e56c
    PUSH EBX                            ; 0041e56f
    CALL core_charactr.cpp_FUN_0042b2a0 ; 0041e570
        ;   XREF to: 0042b2a0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_0042b2a0()
    ADD ESP,0x8                         ; 0041e575
    XOR EDI,EDI                         ; 0041e578
    MOV EAX,dword ptr [EBP + 0x72]      ; 0041e57a
    PUSH 0x3f060a92                     ; 0041e57d
    MOV dword ptr [EBP + -0x5a],EDI     ; 0041e582
    PUSH 0x40400000                     ; 0041e585
    MOV dword ptr [EBP + -0x52],EAX     ; 0041e58a
    LEA EAX,[EBP + -0x5a]               ; 0041e58d
    MOV dword ptr [EBP + -0x56],EDI     ; 0041e590
    PUSH EAX                            ; 0041e593
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041e594
    PUSH EAX                            ; 0041e59a
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0041e59b
    CALL dword ptr [EDX + 0xcc]         ; 0041e5a1
    ADD ESP,0x4                         ; 0041e5a7
    PUSH EAX                            ; 0041e5aa
    MOV EAX,dword ptr [EBX + 0x10a78]   ; 0041e5ab
    ADD EAX,0x20                        ; 0041e5b1
    PUSH EAX                            ; 0041e5b4
    PUSH EBX                            ; 0041e5b5
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000 ; 0041e5b6
        ;   XREF to: 00423000 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_00423000(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 0041e5bb
    CMP EAX,0x1                         ; 0041e5be
    JZ 0x0041dd37                       ; 0041e5c1
        ;   XREF to: 0041dd37 (CONDITIONAL_JUMP)  ; LAB_0041dd37
    PUSH 0x1                            ; 0041e5c7
    PUSH 0x1                            ; 0041e5c9
    LEA EAX,[EBX + 0x2b4]               ; 0041e5cb
    PUSH EAX                            ; 0041e5d1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0041e5d2
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041e5d7
    MOV dword ptr [EBX + 0x2578],EDI    ; 0041e5da
    JMP 0x0041dd37                      ; 0041e5e0
        ;   XREF to: 0041dd37 (UNCONDITIONAL_JUMP)  ; LAB_0041dd37
    FLD float ptr [EBX + 0x10a74]       ; 0041e5e5
        ;   Label: LAB_0041e5e5
    FLDZ                                ; 0041e5eb
    FCOMPP                              ; 0041e5ed
    FNSTSW AX                           ; 0041e5ef
    SAHF                                ; 0041e5f1
    JNC 0x0041e606                      ; 0041e5f2
        ;   XREF to: 0041e606 (CONDITIONAL_JUMP)  ; LAB_0041e606
    FLD float ptr [EBX + 0x10a74]       ; 0041e5f4
    FSUB float ptr [EBP + 0x92]         ; 0041e5fa
    FSTP float ptr [EBX + 0x10a74]      ; 0041e600
    FLD float ptr [EBX + 0x2578]        ; 0041e606
        ;   Label: LAB_0041e606
    FADD float ptr [EBX + 0x34]         ; 0041e60c
    PUSH EBX                            ; 0041e60f
    FSTP float ptr [EBX + 0x34]         ; 0041e610
    CALL core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0 ; 0041e613
        ;   XREF to: 00408ae0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_updateOrientationMatrix_FUN_00408ae0(CDemonActor * this_ptr)
    ADD ESP,0x4                         ; 0041e618
    PUSH EBX                            ; 0041e61b
    CALL core_charactr.cpp_CCharacter_isOnGround_FUN_00424430 ; 0041e61c
        ;   XREF to: 00424430 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_isOnGround_FUN_00424430(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0041e621
    TEST EAX,EAX                        ; 0041e624
    JZ 0x0041e70e                       ; 0041e626
        ;   XREF to: 0041e70e (CONDITIONAL_JUMP)  ; LAB_0041e70e
    PUSH dword ptr [EBP + 0x92]         ; 0041e62c
    PUSH EBX                            ; 0041e632
    CALL core_charactr.cpp_FUN_00423a10 ; 0041e633
        ;   XREF to: 00423a10 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00423a10()
    LEA EAX,[EBX + 0x2588]              ; 0041e638
    FLD float ptr [EAX]                 ; 0041e63e
    FMUL float ptr [EBP + 0x92]         ; 0041e640
    FLD float ptr [EAX + 0x4]           ; 0041e646
    FMUL float ptr [EBP + 0x92]         ; 0041e649
    FLD float ptr [EAX + 0x8]           ; 0041e64f
    FMUL float ptr [EBP + 0x92]         ; 0041e652
    LEA EDI,[EBP + -0x2a]               ; 0041e658
    LEA ESI,[EBP + 0x2a]                ; 0041e65b
    LEA EDX,[EBX + 0x257c]              ; 0041e65e
    ADD ESP,0x8                         ; 0041e664
    LEA EAX,[EBX + 0x2b4]               ; 0041e667
    FXCH ST2                            ; 0041e66d
    FSTP float ptr [EBP + 0x2a]         ; 0041e66f
    FSTP float ptr [EBP + 0x2e]         ; 0041e672
    FSTP float ptr [EBP + 0x32]         ; 0041e675
    MOVSD ES:EDI,ESI                    ; 0041e678
    MOVSD ES:EDI,ESI                    ; 0041e679
    MOVSD ES:EDI,ESI                    ; 0041e67a
    PUSH EAX                            ; 0041e67b
    FLD float ptr [EBP + -0x2a]         ; 0041e67c
    FLD float ptr [EBP + -0x26]         ; 0041e67f
    FLD float ptr [EBP + -0x22]         ; 0041e682
    LEA EDI,[EBP + 0xffffff22]          ; 0041e685
    LEA ESI,[EBP + 0xffffff16]          ; 0041e68b
    FXCH ST2                            ; 0041e691
    FADD float ptr [EDX]                ; 0041e693
    FXCH                                ; 0041e695
    FADD float ptr [EDX + 0x4]          ; 0041e697
    FXCH ST2                            ; 0041e69a
    FADD float ptr [EDX + 0x8]          ; 0041e69c
    FXCH                                ; 0041e69f
    FSTP float ptr [EBP + 0xffffff16]   ; 0041e6a1
    FXCH                                ; 0041e6a7
    FSTP float ptr [EBP + 0xffffff1a]   ; 0041e6a9
    FSTP float ptr [EBP + 0xffffff1e]   ; 0041e6af
    MOVSD ES:EDI,ESI                    ; 0041e6b5
    MOVSD ES:EDI,ESI                    ; 0041e6b6
    MOVSD ES:EDI,ESI                    ; 0041e6b7
    CALL core_motion.cpp_FUN_005035c0   ; 0041e6b8
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0041e6bd
    ADD ESP,0x4                         ; 0041e6c0
    CMP EAX,0x1                         ; 0041e6c3
    JZ 0x0041e6fe                       ; 0041e6c6
        ;   XREF to: 0041e6fe (CONDITIONAL_JUMP)  ; LAB_0041e6fe
    LEA EAX,[EBX + 0x2508]              ; 0041e6c8
    FLD float ptr [EBP + 0xffffff22]    ; 0041e6ce
    FADD float ptr [EAX]                ; 0041e6d4
    FLD float ptr [EBP + 0xffffff26]    ; 0041e6d6
    FXCH                                ; 0041e6dc
    FSTP float ptr [EBP + 0xffffff22]   ; 0041e6de
    FADD float ptr [EAX + 0x4]          ; 0041e6e4
    FLD float ptr [EBP + 0xffffff2a]    ; 0041e6e7
    FXCH                                ; 0041e6ed
    FSTP float ptr [EBP + 0xffffff26]   ; 0041e6ef
    FADD float ptr [EAX + 0x8]          ; 0041e6f5
    FSTP float ptr [EBP + 0xffffff2a]   ; 0041e6f8
    LEA EAX,[EBP + 0xffffff22]          ; 0041e6fe
        ;   Label: LAB_0041e6fe
    PUSH EAX                            ; 0041e704
    PUSH EBX                            ; 0041e705
    CALL core_charactr.cpp_FUN_00423a60 ; 0041e706
        ;   XREF to: 00423a60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00423a60(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 0041e70b
    LEA EAX,[EBX + 0x2b4]               ; 0041e70e
        ;   Label: LAB_0041e70e
    PUSH EAX                            ; 0041e714
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00 ; 0041e715
        ;   XREF to: 00544f00 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_00544f00(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 0041e71a
    PUSH dword ptr [EBP + 0x92]         ; 0041e71d
    PUSH EBX                            ; 0041e723
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90 ; 0041e724
        ;   XREF to: 00429e90 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_00429e90(CCharacter * this_ptr, float delta_time)
    MOV EDX,dword ptr [EBX + 0x10a64]   ; 0041e729
    ADD ESP,0x8                         ; 0041e72f
    TEST EDX,EDX                        ; 0041e732
    JNZ 0x0041e7ef                      ; 0041e734
        ;   XREF to: 0041e7ef (CONDITIONAL_JUMP)  ; LAB_0041e7ef
    MOV ECX,dword ptr [0x007bccf0]      ; 0041e73a | DAT_007bccf0
    PUSH 0x3e4ccccd                     ; 0041e740
    PUSH ECX                            ; 0041e745
    MOV ESI,dword ptr [EBX + 0x10af8]   ; 0041e746
    PUSH ESI                            ; 0041e74c
    PUSH EBX                            ; 0041e74d
    CALL core_charactr.cpp_FUN_00427060 ; 0041e74e
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10af8]   ; 0041e753
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 0041e759
    ADD ESP,0x10                        ; 0041e760
    TEST EDI,EDI                        ; 0041e763
    JZ 0x0041e782                       ; 0041e765
        ;   XREF to: 0041e782 (CONDITIONAL_JUMP)  ; LAB_0041e782
    MOV EAX,[0x007bcce8]                ; 0041e767 | DAT_007bcce8
    PUSH 0x3e4ccccd                     ; 0041e76c
    PUSH EAX                            ; 0041e771
    MOV EDX,dword ptr [EBX + 0x10afc]   ; 0041e772
    PUSH EDX                            ; 0041e778
    PUSH EBX                            ; 0041e779
    CALL core_charactr.cpp_FUN_00427060 ; 0041e77a
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 0041e77f
    MOV ECX,dword ptr [0x007bccf4]      ; 0041e782 | DAT_007bccf4
        ;   Label: LAB_0041e782
    PUSH 0x3e4ccccd                     ; 0041e788
    PUSH ECX                            ; 0041e78d
    MOV ESI,dword ptr [EBX + 0x10b00]   ; 0041e78e
    PUSH ESI                            ; 0041e794
    PUSH EBX                            ; 0041e795
    CALL core_charactr.cpp_FUN_00427060 ; 0041e796
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    MOV EAX,dword ptr [EBX + 0x10b00]   ; 0041e79b
    MOV EDI,dword ptr [EBX + EAX*0x4 + 0x23f4] ; 0041e7a1
    ADD ESP,0x10                        ; 0041e7a8
    TEST EDI,EDI                        ; 0041e7ab
    JZ 0x0041e7ca                       ; 0041e7ad
        ;   XREF to: 0041e7ca (CONDITIONAL_JUMP)  ; LAB_0041e7ca
    MOV EAX,[0x007bccec]                ; 0041e7af | DAT_007bccec
    PUSH 0x3e4ccccd                     ; 0041e7b4
    PUSH EAX                            ; 0041e7b9
    MOV EDX,dword ptr [EBX + 0x10b04]   ; 0041e7ba
    PUSH EDX                            ; 0041e7c0
    PUSH EBX                            ; 0041e7c1
    CALL core_charactr.cpp_FUN_00427060 ; 0041e7c2
        ;   XREF to: 00427060 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00427060()
    ADD ESP,0x10                        ; 0041e7c7
    MOV ECX,dword ptr [0x007bccdc]      ; 0041e7ca | DAT_007bccdc
        ;   Label: LAB_0041e7ca
    PUSH 0x3f333333                     ; 0041e7d0
    PUSH ECX                            ; 0041e7d5
    MOV ESI,dword ptr [EBX + 0x10b18]   ; 0041e7d6
    PUSH ESI                            ; 0041e7dc
    PUSH EBX                            ; 0041e7dd
    CALL core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130 ; 0041e7de
        ;   XREF to: 00427130 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_spawnBloodAtBone_FUN_00427130(CCharacter * this_ptr, int part_index, int bone_index, float chance)
    ADD ESP,0x10                        ; 0041e7e3
    PUSH EBX                            ; 0041e7e6
    CALL core_charactr.cpp_FUN_00426f30 ; 0041e7e7
        ;   XREF to: 00426f30 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_00426f30()
    ADD ESP,0x4                         ; 0041e7ec
    LEA ESP,[EBP + 0x7a]                ; 0041e7ef
        ;   Label: LAB_0041e7ef
    POP EBP                             ; 0041e7f2
    POP EDI                             ; 0041e7f3
    POP ESI                             ; 0041e7f4
    POP EBX                             ; 0041e7f5
    RET                                 ; 0041e7f6

