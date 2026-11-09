; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_werewolf_cpp_FUN_0057f6f0(CWerewolf *param_1,int param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_005d7bce
;   TerminatedCString s_werewolf_hurt_wav_005d7be0
;   undefined4 DAT_005d7bf3
;   undefined4 DAT_005d7bfb
;   undefined4 DAT_005d7c03
;   undefined4 DAT_005fc5a0
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   undefined4 g_CDemonSetInstance.field1420892_0x15ae5c
;
; Called Functions:
;   core_actor.cpp_FUN_00408b80
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_FUN_00489b80
;   core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_werewolf.cpp_FUN_0057ee30
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0057f6f0
        ;   Label: core_werewolf.cpp_FUN_0057f6f0
    PUSH ESI                            ; 0057f6f1
    PUSH EDI                            ; 0057f6f2
    PUSH EBP                            ; 0057f6f3
    MOV EBP,ESP                         ; 0057f6f4
    SUB ESP,0x28                        ; 0057f6f6
    AND ESP,0xfffffff8                  ; 0057f6f9
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f6fc
    MOV EDX,dword ptr [EAX + 0xd070]    ; 0057f6ff
    PUSH EDX                            ; 0057f705
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0057f706
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057f70b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057f70e
    CMP dword ptr [EAX + 0x30],0x6c     ; 0057f711
    JZ 0x0057f82a                       ; 0057f715
        ;   XREF to: 0057f82a (CONDITIONAL_JUMP)  ; LAB_0057f82a
    CMP dword ptr [EAX + 0x28],0x3      ; 0057f71b
    JZ 0x0057f85d                       ; 0057f71f
        ;   XREF to: 0057f85d (CONDITIONAL_JUMP)  ; LAB_0057f85d
    LEA EAX,[EAX]                       ; 0057f725
    LEA EDX,[EDX]                       ; 0057f72b
    MOV EBX,EBX                         ; 0057f72e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057f730
        ;   Label: LAB_0057f730
    FLD float ptr [EAX + 0x4]           ; 0057f733
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f736
    FSUBR float ptr [EAX + 0x2538]      ; 0057f739
    LEA EBX,[EAX + 0x158]               ; 0057f73f
    FST float ptr [EAX + 0x2538]        ; 0057f745
    FLDZ                                ; 0057f74b
    FCOMPP                              ; 0057f74d
    FNSTSW AX                           ; 0057f74f
    SAHF                                ; 0057f751
    JC 0x0057f8de                       ; 0057f752
        ;   XREF to: 0057f8de (CONDITIONAL_JUMP)  ; LAB_0057f8de
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f758
    PUSH EBX                            ; 0057f75b
    MOV dword ptr [EAX + 0x2538],0x0    ; 0057f75c
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0057f766
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057f76b
    ADD ESP,0x4                         ; 0057f76e
    CMP EAX,0xd                         ; 0057f771
    JZ 0x0057f813                       ; 0057f774
        ;   XREF to: 0057f813 (CONDITIONAL_JUMP)  ; LAB_0057f813
    CMP EAX,0xc                         ; 0057f77a
    JZ 0x0057f813                       ; 0057f77d
        ;   XREF to: 0057f813 (CONDITIONAL_JUMP)  ; LAB_0057f813
    PUSH 0x1                            ; 0057f783
    PUSH 0xc                            ; 0057f785
    PUSH EBX                            ; 0057f787
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f788
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f78d
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f790
    CMP dword ptr [EAX + 0xd054],0x0    ; 0057f793
    JNZ 0x0057f7cc                      ; 0057f79a
        ;   XREF to: 0057f7cc (CONDITIONAL_JUMP)  ; LAB_0057f7cc
    MOV EAX,[0x00603b28]                ; 0057f79c | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15ae5c],0x0  ; 0057f7a1 | g_CDemonSetInstance.field1420892_0x15ae5c
    JZ 0x0057f7cc                       ; 0057f7a8
        ;   XREF to: 0057f7cc (CONDITIONAL_JUMP)  ; LAB_0057f7cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f7aa
    FLD float ptr [EAX + 0x20]          ; 0057f7ad
    FST double ptr [ESP]                ; 0057f7b0
    FCOMP double ptr [0x005d7bfb]       ; 0057f7b3 | DAT_005d7bfb
    FNSTSW AX                           ; 0057f7b9
    SAHF                                ; 0057f7bb
    JBE 0x0057f8bd                      ; 0057f7bc
        ;   XREF to: 0057f8bd (CONDITIONAL_JUMP)  ; LAB_0057f8bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f7c2
    MOV dword ptr [EAX + 0x34],0xbfc90fdb ; 0057f7c5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f7cc
        ;   Label: LAB_0057f7cc
    MOV ESI,dword ptr [EAX + 0xd078]    ; 0057f7cf
    PUSH ESI                            ; 0057f7d5
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0057f7d6
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0057f7db
    PUSH 0x5d7bce                       ; 0057f7de | = "werewolf-die?.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057f7e3
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f7e6
    PUSH EDI                            ; 0057f7e9
    MOV EAX,dword ptr [EAX + 0x154]     ; 0057f7ea
    CALL dword ptr [EAX + 0x2c]         ; 0057f7f0
    ADD ESP,0x8                         ; 0057f7f3
    PUSH 0x41c80000                     ; 0057f7f6
    MOV dword ptr [EDI + 0xd078],EAX    ; 0057f7fb
    PUSH 0x32                           ; 0057f801
    MOV EAX,dword ptr [EDI + 0x154]     ; 0057f803
    PUSH EDI                            ; 0057f809
    CALL dword ptr [EAX + 0xa8]         ; 0057f80a
    ADD ESP,0xc                         ; 0057f810
    MOV ECX,dword ptr [EBP + 0x18]      ; 0057f813
        ;   Label: LAB_0057f813
    PUSH ECX                            ; 0057f816
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057f817
    PUSH EBX                            ; 0057f81a
    CALL core_enemy.cpp_FUN_00489b80    ; 0057f81b
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0057f820
    MOV ESP,EBP                         ; 0057f823
    POP EBP                             ; 0057f825
    POP EDI                             ; 0057f826
    POP ESI                             ; 0057f827
    POP EBX                             ; 0057f828
    RET                                 ; 0057f829
    MOV EDI,dword ptr [EBP + 0x14]      ; 0057f82a
        ;   Label: LAB_0057f82a
    PUSH EDI                            ; 0057f82d
    CALL core_werewolf.cpp_FUN_0057ee30 ; 0057f82e
        ;   XREF to: 0057ee30 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_FUN_0057ee30(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0057f833
    PUSH 0x1                            ; 0057f836
    PUSH 0x16                           ; 0057f838
    LEA EAX,[EDI + 0x158]               ; 0057f83a
    PUSH EAX                            ; 0057f840
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f841
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f846
    MOV EAX,dword ptr [EBP + 0x18]      ; 0057f849
    PUSH EAX                            ; 0057f84c
    PUSH EDI                            ; 0057f84d
    CALL core_enemy.cpp_FUN_00489b80    ; 0057f84e
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0057f853
    MOV ESP,EBP                         ; 0057f856
    POP EBP                             ; 0057f858
    POP EDI                             ; 0057f859
    POP ESI                             ; 0057f85a
    POP EBX                             ; 0057f85b
    RET                                 ; 0057f85c
    FLD float ptr [EAX + 0x4]           ; 0057f85d
        ;   Label: LAB_0057f85d
    ADD EAX,0x1c                        ; 0057f860
    FLD ST0                             ; 0057f863
    FMUL double ptr [0x005d7bf3]        ; 0057f865 | DAT_005d7bf3
    PUSH EAX                            ; 0057f86b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0057f86c
    LEA EDI,[ESP + 0x18]                ; 0057f86f
    PUSH ESI                            ; 0057f873
    FSTP ST1                            ; 0057f874
    LEA ESI,[ESP + 0x10]                ; 0057f876
    FSTP float ptr [EAX + -0x18]        ; 0057f87a
    CALL core_actor.cpp_FUN_00408b80    ; 0057f87d
        ;   XREF to: 00408b80 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b80()
    LEA ESI,[ESP + 0x10]                ; 0057f882
    ADD ESP,0x8                         ; 0057f886
    XOR EBX,EBX                         ; 0057f889
    MOVSD ES:EDI,ESI                    ; 0057f88b
    MOVSD ES:EDI,ESI                    ; 0057f88c
    MOVSD ES:EDI,ESI                    ; 0057f88d
    MOV ESI,0x4000                      ; 0057f88e
    PUSH 0xffff                         ; 0057f893
        ;   Label: LAB_0057f893
    PUSH 0x0                            ; 0057f898
    PUSH ESI                            ; 0057f89a
    PUSH ESI                            ; 0057f89b
    PUSH 0x0                            ; 0057f89c
    LEA EAX,[ESP + 0x28]                ; 0057f89e
    PUSH EAX                            ; 0057f8a2
    MOV ECX,dword ptr [0x005fc5a0]      ; 0057f8a3 | DAT_005fc5a0
    PUSH ECX                            ; 0057f8a9
    INC EBX                             ; 0057f8aa
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0 ; 0057f8ab
        ;   XREF to: 004a23c0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004a23c0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0057f8b0
    CMP EBX,0x5                         ; 0057f8b3
    JL 0x0057f893                       ; 0057f8b6
        ;   XREF to: 0057f893 (CONDITIONAL_JUMP)  ; LAB_0057f893
    JMP 0x0057f730                      ; 0057f8b8
        ;   XREF to: 0057f730 (UNCONDITIONAL_JUMP)  ; LAB_0057f730
    FLD double ptr [ESP]                ; 0057f8bd
        ;   Label: LAB_0057f8bd
    FCOMP double ptr [0x005d7c03]       ; 0057f8c0 | DAT_005d7c03
    FNSTSW AX                           ; 0057f8c6
    SAHF                                ; 0057f8c8
    JNC 0x0057f7cc                      ; 0057f8c9
        ;   XREF to: 0057f7cc (CONDITIONAL_JUMP)  ; LAB_0057f7cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f8cf
    MOV dword ptr [EAX + 0x34],0x3fc90fdb ; 0057f8d2
    JMP 0x0057f7cc                      ; 0057f8d9
        ;   XREF to: 0057f7cc (UNCONDITIONAL_JUMP)  ; LAB_0057f7cc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f8de
        ;   Label: LAB_0057f8de
    CMP dword ptr [EAX + 0xd054],0x2    ; 0057f8e1
    JZ 0x0057f959                       ; 0057f8e8
        ;   XREF to: 0057f959 (CONDITIONAL_JUMP)  ; LAB_0057f959
    PUSH EBX                            ; 0057f8ea
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0057f8eb
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057f8f0
    ADD ESP,0x4                         ; 0057f8f3
    CMP EAX,0xe                         ; 0057f8f6
    JNZ 0x0057f999                      ; 0057f8f9
        ;   XREF to: 0057f999 (CONDITIONAL_JUMP)  ; LAB_0057f999
    PUSH 0x2                            ; 0057f8ff
        ;   Label: LAB_0057f8ff
    PUSH 0x0                            ; 0057f901
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0057f903
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0057f908
    MOV EBX,EAX                         ; 0057f90b
    TEST EAX,EAX                        ; 0057f90d
    JNZ 0x0057f926                      ; 0057f90f
        ;   XREF to: 0057f926 (CONDITIONAL_JUMP)  ; LAB_0057f926
    PUSH 0x1                            ; 0057f911
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f913
    PUSH 0x9                            ; 0057f916
    ADD EAX,0x158                       ; 0057f918
    PUSH EAX                            ; 0057f91d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f91e
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f923
    CMP EBX,0x1                         ; 0057f926
        ;   Label: LAB_0057f926
    JNZ 0x0057f93f                      ; 0057f929
        ;   XREF to: 0057f93f (CONDITIONAL_JUMP)  ; LAB_0057f93f
    PUSH EBX                            ; 0057f92b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f92c
    PUSH 0xa                            ; 0057f92f
    ADD EAX,0x158                       ; 0057f931
    PUSH EAX                            ; 0057f936
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f937
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f93c
    CMP EBX,0x2                         ; 0057f93f
        ;   Label: LAB_0057f93f
    JNZ 0x0057f959                      ; 0057f942
        ;   XREF to: 0057f959 (CONDITIONAL_JUMP)  ; LAB_0057f959
    PUSH 0x1                            ; 0057f944
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f946
    PUSH 0xb                            ; 0057f949
    ADD EAX,0x158                       ; 0057f94b
        ;   Label: LAB_0057f94b
    PUSH EAX                            ; 0057f950
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f951
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f956
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f959
        ;   Label: LAB_0057f959
    MOV EDI,dword ptr [EAX + 0xd078]    ; 0057f95c
    PUSH EDI                            ; 0057f962
    CALL sound_sndmain.cpp_FUN_00556700 ; 0057f963
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0057f968
    TEST EAX,EAX                        ; 0057f96b
    JNZ 0x0057f813                      ; 0057f96d
        ;   XREF to: 0057f813 (CONDITIONAL_JUMP)  ; LAB_0057f813
    PUSH 0x5d7be0                       ; 0057f973 | = "werewolf-hurt?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 0057f978
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f97b
    PUSH EDX                            ; 0057f97e
    MOV EAX,dword ptr [EAX + 0x154]     ; 0057f97f
    CALL dword ptr [EAX + 0x2c]         ; 0057f985
    ADD ESP,0x8                         ; 0057f988
    MOV EBX,dword ptr [EBP + 0x14]      ; 0057f98b
    MOV dword ptr [EBX + 0xd078],EAX    ; 0057f98e
    JMP 0x0057f813                      ; 0057f994
        ;   XREF to: 0057f813 (UNCONDITIONAL_JUMP)  ; LAB_0057f813
    CMP EAX,0xf                         ; 0057f999
        ;   Label: LAB_0057f999
    JZ 0x0057f8ff                       ; 0057f99c
        ;   XREF to: 0057f8ff (CONDITIONAL_JUMP)  ; LAB_0057f8ff
    TEST EAX,EAX                        ; 0057f9a2
    JNZ 0x0057f9fb                      ; 0057f9a4
        ;   XREF to: 0057f9fb (CONDITIONAL_JUMP)  ; LAB_0057f9fb
    PUSH 0x2                            ; 0057f9a6
        ;   Label: LAB_0057f9a6
    PUSH 0x0                            ; 0057f9a8
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0057f9aa
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0057f9af
    MOV EBX,EAX                         ; 0057f9b2
    TEST EAX,EAX                        ; 0057f9b4
    JNZ 0x0057f9cd                      ; 0057f9b6
        ;   XREF to: 0057f9cd (CONDITIONAL_JUMP)  ; LAB_0057f9cd
    PUSH 0x1                            ; 0057f9b8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f9ba
    PUSH 0x10                           ; 0057f9bd
    ADD EAX,0x158                       ; 0057f9bf
    PUSH EAX                            ; 0057f9c4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f9c5
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f9ca
    CMP EBX,0x1                         ; 0057f9cd
        ;   Label: LAB_0057f9cd
    JNZ 0x0057f9e6                      ; 0057f9d0
        ;   XREF to: 0057f9e6 (CONDITIONAL_JUMP)  ; LAB_0057f9e6
    PUSH EBX                            ; 0057f9d2
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f9d3
    PUSH 0x11                           ; 0057f9d6
    ADD EAX,0x158                       ; 0057f9d8
    PUSH EAX                            ; 0057f9dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0057f9de
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057f9e3
    CMP EBX,0x2                         ; 0057f9e6
        ;   Label: LAB_0057f9e6
    JNZ 0x0057f959                      ; 0057f9e9
        ;   XREF to: 0057f959 (CONDITIONAL_JUMP)  ; LAB_0057f959
    PUSH 0x1                            ; 0057f9ef
    MOV EAX,dword ptr [EBP + 0x14]      ; 0057f9f1
    PUSH 0x12                           ; 0057f9f4
    JMP 0x0057f94b                      ; 0057f9f6
        ;   XREF to: 0057f94b (UNCONDITIONAL_JUMP)  ; LAB_0057f94b
    CMP EAX,0x1                         ; 0057f9fb
        ;   Label: LAB_0057f9fb
    JZ 0x0057f9a6                       ; 0057f9fe
        ;   XREF to: 0057f9a6 (CONDITIONAL_JUMP)  ; LAB_0057f9a6
    CMP EAX,0x2                         ; 0057fa00
    JZ 0x0057f9a6                       ; 0057fa03
        ;   XREF to: 0057f9a6 (CONDITIONAL_JUMP)  ; LAB_0057f9a6
    CMP EAX,0x13                        ; 0057fa05
    JZ 0x0057f9a6                       ; 0057fa08
        ;   XREF to: 0057f9a6 (CONDITIONAL_JUMP)  ; LAB_0057f9a6
    CMP EAX,0x3                         ; 0057fa0a
    JZ 0x0057f9a6                       ; 0057fa0d
        ;   XREF to: 0057f9a6 (CONDITIONAL_JUMP)  ; LAB_0057f9a6
    CMP EAX,0x4                         ; 0057fa0f
    JZ 0x0057f9a6                       ; 0057fa12
        ;   XREF to: 0057f9a6 (CONDITIONAL_JUMP)  ; LAB_0057f9a6
    JMP 0x0057f959                      ; 0057fa14
        ;   XREF to: 0057f959 (UNCONDITIONAL_JUMP)  ; LAB_0057f959

