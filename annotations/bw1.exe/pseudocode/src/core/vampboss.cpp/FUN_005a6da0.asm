; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_vampboss_cpp_FUN_005a6da0(void *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_voicuhurt_wav_005f8e8c
;   TerminatedCString s_VampireBossBitesIt_005f8e9a
;   TerminatedCString s_voicudeath_wav_2_5_005f8ead
;   undefined4 DAT_005f8ec8
;   undefined4 DAT_005f8ed0
;   undefined4 DAT_0061b4d0
;   undefined4 DAT_0061c010
;   undefined4 DAT_0061f650
;   undefined4 DAT_006236b8
;   undefined4 g_CHeroClassInfo.name_hash
;   undefined4 g_CMeleeClassInfo.name_hash
;   undefined4 DAT_01d2c900
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_FUN_0040cc60
;   core_charactr.cpp_FUN_004325b0
;   core_event.cpp_CEventList_executeCommands_FUN_004a1b70
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_inv.cpp_FUN_004f8c40
;   core_inv.cpp_FUN_004f8d00
;   core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_sound.cpp_CSound_playSound_FUN_0057d880
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a6da0
        ;   Label: core_vampboss.cpp_FUN_005a6da0
    PUSH ESI                            ; 005a6da1
    PUSH EDI                            ; 005a6da2
    PUSH EBP                            ; 005a6da3
    SUB ESP,0x20                        ; 005a6da4
    MOV EBP,dword ptr [ESP + 0x34]      ; 005a6da7
    CMP dword ptr [EBP + 0x27b0],0x0    ; 005a6dab
    JNZ 0x005a6e55                      ; 005a6db2
        ;   XREF to: 005a6e55 (CONDITIONAL_JUMP)  ; LAB_005a6e55
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a6db8
    CMP dword ptr [EAX + 0x28],0x7      ; 005a6dbc
    JZ 0x005a6e5d                       ; 005a6dc0
        ;   XREF to: 005a6e5d (CONDITIONAL_JUMP)  ; LAB_005a6e5d
    LEA EAX,[EAX]                       ; 005a6dc6
    LEA EDX,[EDX]                       ; 005a6dcc
    MOV EAX,dword ptr [EBP + 0xbe79c]   ; 005a6dd0
        ;   Label: LAB_005a6dd0
    TEST EAX,EAX                        ; 005a6dd6
    JBE 0x005a6ef2                      ; 005a6dd8
        ;   XREF to: 005a6ef2 (CONDITIONAL_JUMP)  ; LAB_005a6ef2
    CMP EAX,0x2                         ; 005a6dde
    JNZ 0x005a6ffb                      ; 005a6de1
        ;   XREF to: 005a6ffb (CONDITIONAL_JUMP)  ; LAB_005a6ffb
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a6de7
    FLD float ptr [EAX + 0x4]           ; 005a6deb
    FSUBR float ptr [EBP + 0x2538]      ; 005a6dee
    FST float ptr [EBP + 0x2538]        ; 005a6df4
    FCOMP double ptr [0x005f8ed0]       ; 005a6dfa | DAT_005f8ed0
    FNSTSW AX                           ; 005a6e00
    SAHF                                ; 005a6e02
    JNC 0x005a6e0f                      ; 005a6e03
        ;   XREF to: 005a6e0f (CONDITIONAL_JUMP)  ; LAB_005a6e0f
    MOV dword ptr [EBP + 0x2538],0x41c7fdf4 ; 005a6e05
    PUSH 0x2                            ; 005a6e0f
        ;   Label: LAB_005a6e0f
    PUSH 0x0                            ; 005a6e11
    CALL core_actor.cpp_FUN_0040cc60    ; 005a6e13
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 005a6e18
    LEA EBX,[EBP + 0xc268]              ; 005a6e1b
    TEST EAX,EAX                        ; 005a6e21
    JBE 0x005a6eb9                      ; 005a6e23
        ;   XREF to: 005a6eb9 (CONDITIONAL_JUMP)  ; LAB_005a6eb9
    CMP EAX,0x1                         ; 005a6e29
    JNZ 0x005a6ec2                      ; 005a6e2c
        ;   XREF to: 005a6ec2 (CONDITIONAL_JUMP)  ; LAB_005a6ec2
    PUSH EAX                            ; 005a6e32
    PUSH 0x4                            ; 005a6e33
    PUSH EBX                            ; 005a6e35
        ;   Label: LAB_005a6e35
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a6e36
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005a6e36
    ADD ESP,0xc                         ; 005a6e3b
    MOV EDX,dword ptr [EBP + 0xbf3dc]   ; 005a6e3e
    PUSH EDX                            ; 005a6e44
    CALL sound_sndmain.cpp_FUN_005735a0 ; 005a6e45
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 005a6e4a
    TEST EAX,EAX                        ; 005a6e4d
    JZ 0x005a6ed2                       ; 005a6e4f
        ;   XREF to: 005a6ed2 (CONDITIONAL_JUMP)  ; LAB_005a6ed2
    ADD ESP,0x20                        ; 005a6e55
        ;   Label: LAB_005a6e55
    POP EBP                             ; 005a6e58
    POP EDI                             ; 005a6e59
    POP ESI                             ; 005a6e5a
    POP EBX                             ; 005a6e5b
    RET                                 ; 005a6e5c
    FLD float ptr [EAX + 0x4]           ; 005a6e5d
        ;   Label: LAB_005a6e5d
    ADD EAX,0x1c                        ; 005a6e60
    FLD ST0                             ; 005a6e63
    FMUL double ptr [0x005f8ec8]        ; 005a6e65 | DAT_005f8ec8
    PUSH EAX                            ; 005a6e6b
    LEA ESI,[ESP + 0x10]                ; 005a6e6c
    LEA EDI,[ESP + 0x4]                 ; 005a6e70
    PUSH EBP                            ; 005a6e74
    FSTP ST1                            ; 005a6e75
    FSTP float ptr [EAX + -0x18]        ; 005a6e77
    CALL core_actor.cpp_FUN_00408b40    ; 005a6e7a
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[ESP + 0x14]                ; 005a6e7f
    ADD ESP,0x8                         ; 005a6e83
    XOR EBX,EBX                         ; 005a6e86
    MOVSD ES:EDI,ESI                    ; 005a6e88
    MOVSD ES:EDI,ESI                    ; 005a6e89
    MOVSD ES:EDI,ESI                    ; 005a6e8a
    MOV EDI,0x4000                      ; 005a6e8b
    XOR ESI,ESI                         ; 005a6e90
    PUSH 0xffff                         ; 005a6e92
        ;   Label: LAB_005a6e92
    PUSH ESI                            ; 005a6e97
    PUSH EDI                            ; 005a6e98
    PUSH EDI                            ; 005a6e99
    PUSH ESI                            ; 005a6e9a
    LEA EAX,[ESP + 0x14]                ; 005a6e9b
    PUSH EAX                            ; 005a6e9f
    MOV EAX,[0x0061c010]                ; 005a6ea0 | DAT_0061c010
    PUSH EAX                            ; 005a6ea5
    INC EBX                             ; 005a6ea6
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 005a6ea7
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 005a6eac
    CMP EBX,0x5                         ; 005a6eaf
    JL 0x005a6e92                       ; 005a6eb2
        ;   XREF to: 005a6e92 (CONDITIONAL_JUMP)  ; LAB_005a6e92
    JMP 0x005a6dd0                      ; 005a6eb4
        ;   XREF to: 005a6dd0 (UNCONDITIONAL_JUMP)  ; LAB_005a6dd0
    PUSH 0x1                            ; 005a6eb9
        ;   Label: LAB_005a6eb9
    PUSH 0x3                            ; 005a6ebb
    JMP 0x005a6e35                      ; 005a6ebd
        ;   XREF to: 005a6e35 (UNCONDITIONAL_JUMP)  ; LAB_005a6e35
    PUSH 0x1                            ; 005a6ec2
        ;   Label: LAB_005a6ec2
    PUSH 0x5                            ; 005a6ec4
    LEA EAX,[EBP + 0xc268]              ; 005a6ec6
    PUSH EAX                            ; 005a6ecc
    JMP 0x005a6e36                      ; 005a6ecd
        ;   XREF to: 005a6e36 (UNCONDITIONAL_JUMP)  ; LAB_005a6e36
    PUSH 0x5f8e8c                       ; 005a6ed2 | = "voicuhurt.wav"
        ;   Label: LAB_005a6ed2
    MOV EAX,dword ptr [EBP + 0x154]     ; 005a6ed7
    PUSH EBP                            ; 005a6edd
    CALL dword ptr [EAX + 0x2c]         ; 005a6ede
    ADD ESP,0x8                         ; 005a6ee1
    MOV dword ptr [EBP + 0xbf3dc],EAX   ; 005a6ee4
    ADD ESP,0x20                        ; 005a6eea
    POP EBP                             ; 005a6eed
    POP EDI                             ; 005a6eee
    POP ESI                             ; 005a6eef
    POP EBX                             ; 005a6ef0
    RET                                 ; 005a6ef1
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a6ef2
        ;   Label: LAB_005a6ef2
    CMP dword ptr [EAX + 0x28],0x1      ; 005a6ef6
    JNZ 0x005a6e55                      ; 005a6efa
        ;   XREF to: 005a6e55 (CONDITIONAL_JUMP)  ; LAB_005a6e55
    MOV EBX,dword ptr [0x01d1e2dc]      ; 005a6f00 | g_CMeleeClassInfo.name_hash
    PUSH EBX                            ; 005a6f06
    MOV ESI,dword ptr [EAX + 0x34]      ; 005a6f07
    PUSH ESI                            ; 005a6f0a
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a6f0b
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    MOV EBX,EAX                         ; 005a6f10
    ADD ESP,0x8                         ; 005a6f12
    MOV EDI,EAX                         ; 005a6f15
    TEST EAX,EAX                        ; 005a6f17
    JZ 0x005a6e55                       ; 005a6f19
        ;   XREF to: 005a6e55 (CONDITIONAL_JUMP)  ; LAB_005a6e55
    PUSH 0x1                            ; 005a6f1f
    PUSH 0xa                            ; 005a6f21
    LEA EAX,[EBP + 0x158]               ; 005a6f23
    PUSH EAX                            ; 005a6f29
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 005a6f2a
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005a6f2f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005a6f32
    PUSH EBX                            ; 005a6f38
    CALL dword ptr [EAX + 0x94]         ; 005a6f39
    MOV ESI,EAX                         ; 005a6f3f
    ADD ESP,0x4                         ; 005a6f41
    TEST EAX,EAX                        ; 005a6f44
    JZ 0x005a6f9e                       ; 005a6f46
        ;   XREF to: 005a6f9e (CONDITIONAL_JUMP)  ; LAB_005a6f9e
    PUSH 0x0                            ; 005a6f48
    PUSH EBX                            ; 005a6f4a
    MOV EAX,dword ptr [EAX + 0x154]     ; 005a6f4b
    PUSH ESI                            ; 005a6f51
    CALL dword ptr [EAX + 0x90]         ; 005a6f52
    ADD ESP,0xc                         ; 005a6f58
    MOV EAX,[0x01d06b10]                ; 005a6f5b | g_CHeroClassInfo.name_hash
    PUSH EAX                            ; 005a6f60
    PUSH ESI                            ; 005a6f61
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 005a6f62
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 005a6f67
    TEST EAX,EAX                        ; 005a6f6a
    JZ 0x005a6f9e                       ; 005a6f6c
        ;   XREF to: 005a6f9e (CONDITIONAL_JUMP)  ; LAB_005a6f9e
    PUSH EBX                            ; 005a6f6e
    LEA ESI,[EAX + 0x1fae8]             ; 005a6f6f
    PUSH ESI                            ; 005a6f75
    CALL core_inv.cpp_FUN_004f8c40      ; 005a6f76
        ;   XREF to: 004f8c40 (UNCONDITIONAL_CALL)  ; CDemonActor * core_inv.cpp_FUN_004f8c40(CInventory * this_ptr, char * item_name)
    ADD ESP,0x8                         ; 005a6f7b
    CMP EAX,EBX                         ; 005a6f7e
    JNZ 0x005a6f9e                      ; 005a6f80
        ;   XREF to: 005a6f9e (CONDITIONAL_JUMP)  ; LAB_005a6f9e
    PUSH 0x0                            ; 005a6f82
    PUSH EBX                            ; 005a6f84
    PUSH ESI                            ; 005a6f85
    CALL core_inv.cpp_FUN_004f8d00      ; 005a6f86
        ;   XREF to: 004f8d00 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_FUN_004f8d00(CInventory * this_ptr, CDemonActor * item_to_remove, int should_delete_actor)
    ADD ESP,0xc                         ; 005a6f8b
    PUSH EBX                            ; 005a6f8e
    MOV EDX,dword ptr [0x0061f650]      ; 005a6f8f | DAT_0061f650
    PUSH EDX                            ; 005a6f95 | DAT_01d2c900
    CALL core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160 ; 005a6f96
        ;   XREF to: 0051b160 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_addActorToList_FUN_0051b160(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005a6f9b
    PUSH 0x0                            ; 005a6f9e
        ;   Label: LAB_005a6f9e
    PUSH 0x3e4ccccd                     ; 005a6fa0
    PUSH EDI                            ; 005a6fa5
    PUSH 0x0                            ; 005a6fa6
    PUSH EBP                            ; 005a6fa8
    CALL core_charactr.cpp_FUN_004325b0 ; 005a6fa9
        ;   XREF to: 004325b0 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_FUN_004325b0()
    ADD ESP,0x14                        ; 005a6fae
    PUSH 0x5f8e9a                       ; 005a6fb1 | = "VampireBossBitesIt"
    MOV ECX,dword ptr [0x0061b4d0]      ; 005a6fb6 | DAT_0061b4d0
    PUSH ECX                            ; 005a6fbc
    CALL core_event.cpp_CEventList_executeCommands_FUN_004a1b70 ; 005a6fbd
        ;   XREF to: 004a1b70 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_004a1b70(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 005a6fc2
    MOV EBX,dword ptr [EBP + 0xbf3dc]   ; 005a6fc5
    PUSH EBX                            ; 005a6fcb
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 005a6fcc
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 005a6fd1
    PUSH 0x5f8ead                       ; 005a6fd4 | = "voicudeath.wav @ 2.5"
    PUSH EBP                            ; 005a6fd9
    MOV ESI,dword ptr [0x006236b8]      ; 005a6fda | DAT_006236b8
    PUSH ESI                            ; 005a6fe0
    CALL core_sound.cpp_CSound_playSound_FUN_0057d880 ; 005a6fe1
        ;   XREF to: 0057d880 (UNCONDITIONAL_CALL)  ; uint core_sound.cpp_CSound_playSound_FUN_0057d880(CSound * this_ptr, void * user_data, char * sound_name)
    ADD ESP,0xc                         ; 005a6fe6
    MOV dword ptr [EBP + 0x2538],0x0    ; 005a6fe9
    ADD ESP,0x20                        ; 005a6ff3
    POP EBP                             ; 005a6ff6
    POP EDI                             ; 005a6ff7
    POP ESI                             ; 005a6ff8
    POP EBX                             ; 005a6ff9
    RET                                 ; 005a6ffa
    MOV EAX,dword ptr [ESP + 0x38]      ; 005a6ffb
        ;   Label: LAB_005a6ffb
    MOV dword ptr [EAX + 0x4],0x0       ; 005a6fff
    ADD ESP,0x20                        ; 005a7006
    POP EBP                             ; 005a7009
    POP EDI                             ; 005a700a
    POP ESI                             ; 005a700b
    POP EBX                             ; 005a700c
    RET                                 ; 005a700d

