; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_succubus.cpp_CSuccubus_process_FUN_005c6e90(CSuccubus * this_ptr, float delta_time)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined4       Stack[-0x74]:4  local_74
; undefined4       Stack[-0x70]:4  local_70
; undefined4       Stack[-0x6c]:4  local_6c
; undefined4       Stack[-0x68]:4  local_68
; undefined4       Stack[-0x64]:4  local_64
; undefined4       Stack[-0x60]:4  local_60
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x58]:4  local_58
; undefined4       Stack[-0x54]:4  local_54
; undefined4       Stack[-0x50]:4  local_50
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x48]:4  local_48
; undefined4       Stack[-0x44]:4  local_44
; undefined4       Stack[-0x40]:4  local_40
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x38]:4  local_38
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_s_confused_while_walking_00654125
;   TerminatedCString s_succubus_morph_wav_0065414f
;   TerminatedCString s_core_succubus_cpp_00654162
;   TerminatedCString s_hdwing_cth_00654177
;   undefined4 s_dwing.cth_00654178
;   undefined4 s_wing.cth_00654179
;   undefined4 s_ing.cth_0065417a
;   TerminatedCString s_succubusShutUp_00654182
;   double DOUBLE_006541a9 = 3.14159265350000
;   double DOUBLE_006541b1 = 32
;   float FLOAT_00663928 = 1.5
;   float FLOAT_00663934 = 15
;   float FLOAT_00663938 = 4
;   CConsole* g_CConsolePtr = 0083b1a4
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_FUN_00428f40
;   core_charactr.cpp_CCharacter_FUN_004297e0
;   core_charactr.cpp_CCharacter_FUN_00429820
;   core_charactr.cpp_CCharacter_FUN_00429870
;   core_charactr.cpp_CCharacter_FUN_0042ca70
;   core_charactr.cpp_CCharacter_FUN_0042ec40
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_cloth.cpp_FUN_0043c2d0
;   core_enemy.cpp_CEnemy_FUN_004a9fd0
;   core_event.cpp_CEventList_evaluateCondition_FUN_004adca0
;   core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0
;   core_mission.cpp_CDemonMission_FUN_00523b70
;   core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c6e90
        ;   Label: core_succubus.cpp_CSuccubus_process_FUN_005c6e90
    PUSH ESI                            ; 005c6e91
    PUSH EDI                            ; 005c6e92
    PUSH EBP                            ; 005c6e93
    MOV EBP,ESP                         ; 005c6e94
    SUB ESP,0x64                        ; 005c6e96
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c6e99
    PUSH dword ptr [EBP + 0x18]         ; 005c6e9c
    PUSH EBX                            ; 005c6e9f
    CALL core_charactr.cpp_CCharacter_FUN_00429870 ; 005c6ea0
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_00429870(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005c6ea5
    TEST EAX,EAX                        ; 005c6ea8
    JZ 0x005c72e4                       ; 005c6eaa
        ;   XREF to: 005c72e4 (CONDITIONAL_JUMP)  ; LAB_005c72e4
    LEA EAX,[EBX + 0x23ac]              ; 005c6eb0
    MOV dword ptr [EAX + 0x8],0x0       ; 005c6eb6
    FLD float ptr [EBP + 0x18]          ; 005c6ebd
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c6ec0
    MOV dword ptr [EAX + 0x4],EDX       ; 005c6ec3
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6ec6
    MOV dword ptr [EAX],EDX             ; 005c6ec9
    FMUL float ptr [EBX + 0xbe24]       ; 005c6ecb
    LEA ESI,[EBX + 0x158]               ; 005c6ed1
    FSTP float ptr [EBP + -0x14]        ; 005c6ed7
    FLD float ptr [EBP + -0x14]         ; 005c6eda
        ;   Label: LAB_005c6eda
    FLDZ                                ; 005c6edd
    FCOMPP                              ; 005c6edf
    FNSTSW AX                           ; 005c6ee1
    SAHF                                ; 005c6ee3
    JC 0x005c6f2b                       ; 005c6ee4
        ;   XREF to: 005c6f2b (CONDITIONAL_JUMP)  ; LAB_005c6f2b
    LEA EAX,[EBX + 0xe110]              ; 005c6ee6
    MOV dword ptr [EAX + 0x8],0x0       ; 005c6eec
    FLD float ptr [EBP + 0x18]          ; 005c6ef3
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c6ef6
    MOV dword ptr [EAX + 0x4],EDX       ; 005c6ef9
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6efc
    MOV dword ptr [EAX],EDX             ; 005c6eff
    FMUL float ptr [EBX + 0xbe24]       ; 005c6f01
    LEA ESI,[EBX + 0xbebc]              ; 005c6f07
    FSTP float ptr [EBP + -0x14]        ; 005c6f0d
    FLD float ptr [EBP + -0x14]         ; 005c6f10
        ;   Label: LAB_005c6f10
    FLDZ                                ; 005c6f13
    FCOMPP                              ; 005c6f15
    FNSTSW AX                           ; 005c6f17
    SAHF                                ; 005c6f19
    JNC 0x005c6f44                      ; 005c6f1a
        ;   XREF to: 005c6f44 (CONDITIONAL_JUMP)  ; LAB_005c6f44
    LEA EAX,[EBP + -0x14]               ; 005c6f1c
    PUSH EAX                            ; 005c6f1f
    PUSH ESI                            ; 005c6f20
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005c6f21
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005c6f26
    JMP 0x005c6f10                      ; 005c6f29
        ;   XREF to: 005c6f10 (UNCONDITIONAL_JUMP)  ; LAB_005c6f10
    LEA EAX,[EBP + -0x14]               ; 005c6f2b
        ;   Label: LAB_005c6f2b
    PUSH EAX                            ; 005c6f2e
    PUSH ESI                            ; 005c6f2f
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005c6f30
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005c6f35
    PUSH EAX                            ; 005c6f38
    PUSH EBX                            ; 005c6f39
    CALL core_charactr.cpp_CCharacter_FUN_0042ec40 ; 005c6f3a
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042ec40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005c6f3f
    JMP 0x005c6eda                      ; 005c6f42
        ;   XREF to: 005c6eda (UNCONDITIONAL_JUMP)  ; LAB_005c6eda
    FLD float ptr [EBX + 0xbe24]        ; 005c6f44
        ;   Label: LAB_005c6f44
    FLD float ptr [EBP + 0x18]          ; 005c6f4a
    FMUL double ptr [0x006541a9]        ; 005c6f4d | DOUBLE_006541a9
    FMULP                               ; 005c6f53
    FLD float ptr [EBX + 0x23b4]        ; 005c6f55
    LEA ESI,[EBX + 0x158]               ; 005c6f5b
    FSTP float ptr [EBX + 0x2434]       ; 005c6f61
    PUSH ESI                            ; 005c6f67
    FSTP float ptr [EBX + 0x2438]       ; 005c6f68
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c6f6e
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005c6f73
    PUSH dword ptr [EBP + 0x18]         ; 005c6f76
    PUSH EBX                            ; 005c6f79
    MOV EDI,dword ptr [EAX + 0x24]      ; 005c6f7a
    CALL core_charactr.cpp_CCharacter_FUN_0042ca70 ; 005c6f7d
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_0042ca70(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005c6f82
    TEST EAX,EAX                        ; 005c6f85
    JZ 0x005c7508                       ; 005c6f87
        ;   XREF to: 005c7508 (CONDITIONAL_JUMP)  ; LAB_005c7508
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005c6f8d
    CMP EAX,0x2                         ; 005c6f93
    JNC 0x005c730f                      ; 005c6f96
        ;   XREF to: 005c730f (CONDITIONAL_JUMP)  ; LAB_005c730f
    CMP EAX,0x1                         ; 005c6f9c
    JNZ 0x005c731a                      ; 005c6f9f
        ;   XREF to: 005c731a (CONDITIONAL_JUMP)  ; LAB_005c731a
    PUSH 0x1                            ; 005c6fa5
        ;   Label: LAB_005c6fa5
    PUSH 0x1                            ; 005c6fa7
    LEA EAX,[EBX + 0x158]               ; 005c6fa9
        ;   Label: LAB_005c6fa9
    PUSH EAX                            ; 005c6faf
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c6fb0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c6fb5
        ;   Label: LAB_005c6fb5
    LEA EAX,[EBX + 0x23ac]              ; 005c6fb8
    MOV dword ptr [EAX + 0x8],0x0       ; 005c6fbe
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c6fc5
    MOV dword ptr [EAX + 0x4],EDX       ; 005c6fc8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c6fcb
    MOV dword ptr [EAX],EDX             ; 005c6fce
    FLD float ptr [EBX + 0xbe38]        ; 005c6fd0
        ;   Label: LAB_005c6fd0
    FLDZ                                ; 005c6fd6
    FCOMPP                              ; 005c6fd8
    FNSTSW AX                           ; 005c6fda
    SAHF                                ; 005c6fdc
    JNC 0x005c6fee                      ; 005c6fdd
        ;   XREF to: 005c6fee (CONDITIONAL_JUMP)  ; LAB_005c6fee
    FLD float ptr [EBX + 0xbe38]        ; 005c6fdf
    FSUB float ptr [EBP + 0x18]         ; 005c6fe5
    FSTP float ptr [EBX + 0xbe38]       ; 005c6fe8
    PUSH EBX                            ; 005c6fee
        ;   Label: LAB_005c6fee
    CALL core_charactr.cpp_CCharacter_FUN_004297e0 ; 005c6fef
        ;   XREF to: 004297e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_FUN_004297e0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005c6ff4
    TEST EAX,EAX                        ; 005c6ff7
    JZ 0x005c70b4                       ; 005c6ff9
        ;   XREF to: 005c70b4 (CONDITIONAL_JUMP)  ; LAB_005c70b4
    FLD float ptr [EBP + 0x18]          ; 005c6fff
    FLD ST0                             ; 005c7002
    FMUL double ptr [0x006541b1]        ; 005c7004 | DOUBLE_006541b1
    FLD float ptr [EBX + 0x242c]        ; 005c700a
    FXCH                                ; 005c7010
    FSUBR ST0,ST1                       ; 005c7012
    LEA EDI,[EBX + 0x2428]              ; 005c7014
    FSTP ST1                            ; 005c701a
    FSTP float ptr [EBX + 0x242c]       ; 005c701c
    FLD float ptr [EDI]                 ; 005c7022
    FMUL ST1                            ; 005c7024
    FSTP float ptr [EBP + -0x4c]        ; 005c7026
    FLD float ptr [EDI + 0x4]           ; 005c7029
    FMUL ST1                            ; 005c702c
    LEA ESI,[EBX + 0x241c]              ; 005c702e
    FSTP float ptr [EBP + -0x48]        ; 005c7034
    FMUL float ptr [EDI + 0x8]          ; 005c7037
    LEA EAX,[EBX + 0x23ac]              ; 005c703a
    FLD float ptr [EBP + -0x4c]         ; 005c7040
    FXCH                                ; 005c7043
    FSTP float ptr [EBP + -0x44]        ; 005c7045
    FADD float ptr [ESI]                ; 005c7048
    FLD float ptr [EBP + -0x48]         ; 005c704a
    FXCH                                ; 005c704d
    FSTP float ptr [EBP + -0x40]        ; 005c704f
    FADD float ptr [ESI + 0x4]          ; 005c7052
    FLD float ptr [EBP + -0x44]         ; 005c7055
    FXCH                                ; 005c7058
    FSTP float ptr [EBP + -0x3c]        ; 005c705a
    FADD float ptr [ESI + 0x8]          ; 005c705d | DAT_00002424
    FLD float ptr [EBP + -0x40]         ; 005c7060
    FXCH                                ; 005c7063
    FSTP float ptr [EBP + -0x38]        ; 005c7065
    FADD float ptr [EAX]                ; 005c7068
    FLD float ptr [EBP + -0x3c]         ; 005c706a
    FXCH                                ; 005c706d
    FSTP float ptr [EBP + -0x34]        ; 005c706f
    FADD float ptr [EAX + 0x4]          ; 005c7072
    FLD float ptr [EBP + -0x38]         ; 005c7075
    FXCH                                ; 005c7078
    FSTP float ptr [EBP + -0x30]        ; 005c707a
    FADD float ptr [EAX + 0x8]          ; 005c707d
    FSTP float ptr [EBP + -0x2c]        ; 005c7080
    MOV dword ptr [ESI + 0x8],0x0       ; 005c7083 | DAT_00002424
    MOV EDX,dword ptr [ESI + 0x8]       ; 005c708a | DAT_00002424
    MOV dword ptr [ESI + 0x4],EDX       ; 005c708d
    MOV EDX,dword ptr [ESI + 0x4]       ; 005c7090
    MOV dword ptr [ESI],EDX             ; 005c7093
    MOV dword ptr [EAX + 0x8],0x0       ; 005c7095
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c709c
    MOV dword ptr [EAX + 0x4],EDX       ; 005c709f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c70a2
    MOV dword ptr [EAX],EDX             ; 005c70a5
    LEA EAX,[EBP + -0x34]               ; 005c70a7
    PUSH EAX                            ; 005c70aa
    PUSH EBX                            ; 005c70ab
    CALL core_charactr.cpp_CCharacter_FUN_00428f40 ; 005c70ac
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00428f40(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005c70b1
    PUSH EBX                            ; 005c70b4
        ;   Label: LAB_005c70b4
    CALL core_charactr.cpp_CCharacter_FUN_00429820 ; 005c70b5
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005c70ba
    LEA ESI,[EBX + 0x158]               ; 005c70bd
    PUSH ESI                            ; 005c70c3
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005c70c4
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005c70c9
    PUSH dword ptr [EBP + 0x18]         ; 005c70cc
    PUSH EBX                            ; 005c70cf
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005c70d0
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 005c70d5
    PUSH ESI                            ; 005c70d8
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c70d9
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005c70de
    MOV ESI,dword ptr [ESI + 0x8]       ; 005c70e1
    PUSH ESI                            ; 005c70e4
    PUSH EAX                            ; 005c70e5
    MOV dword ptr [EBP + -0xc],ESI      ; 005c70e6
    LEA ESI,[EBX + 0xbebc]              ; 005c70e9
    PUSH ESI                            ; 005c70ef
    MOV dword ptr [EBP + -0x10],EAX     ; 005c70f0
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 005c70f3
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005c70f8
    PUSH ESI                            ; 005c70fb
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005c70fc
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    MOV ESI,dword ptr [EBX + 0xe334]    ; 005c7101
    ADD ESP,0x4                         ; 005c7107
    TEST ESI,ESI                        ; 005c710a
    JZ 0x005c7269                       ; 005c710c
        ;   XREF to: 005c7269 (CONDITIONAL_JUMP)  ; LAB_005c7269
    FLD float ptr [EBX + 0xe338]        ; 005c7112
    FADD float ptr [EBP + 0x18]         ; 005c7118
    FST float ptr [EBX + 0xe338]        ; 005c711b
    FCOMP float ptr [0x00663938]        ; 005c7121 | FLOAT_00663938
    FNSTSW AX                           ; 005c7127
    SAHF                                ; 005c7129
    JBE 0x005c7269                      ; 005c712a
        ;   XREF to: 005c7269 (CONDITIONAL_JUMP)  ; LAB_005c7269
    PUSH 0x16c                          ; 005c7130
    PUSH 0x654162                       ; 005c7135 | = "..\\core\\succubus.cpp"
    PUSH 0xbef0                         ; 005c713a
    CALL shape_memdbg.cpp_debugAlloc_FUN_0050f1b0 ; 005c713f
        ;   XREF to: 0050f1b0 (UNCONDITIONAL_CALL)  ; void * shape_memdbg.cpp_debugAlloc_FUN_0050f1b0(int size, char * filename, int line_number)
    ADD ESP,0xc                         ; 005c7144
    TEST EAX,EAX                        ; 005c7147
    JZ 0x005c7154                       ; 005c7149
        ;   XREF to: 005c7154 (CONDITIONAL_JUMP)  ; LAB_005c7154
    PUSH EAX                            ; 005c714b
    CALL core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0 ; 005c714c
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; CHotDemon * core_hotdemon.cpp_CHotDemon_ctor_FUN_004f6ca0(CHotDemon * this_ptr)
    ADD ESP,0x4                         ; 005c7151
    MOV ESI,EAX                         ; 005c7154
        ;   Label: LAB_005c7154
    MOV dword ptr [EBP + -0x8],ESI      ; 005c7156
    TEST ESI,ESI                        ; 005c7159
    JZ 0x005c7269                       ; 005c715b
        ;   XREF to: 005c7269 (CONDITIONAL_JUMP)  ; LAB_005c7269
    PUSH ESI                            ; 005c7161
    MOV EDI,dword ptr [0x0067d550]      ; 005c7162 | g_CDemonMissionPtr
    PUSH EDI                            ; 005c7168 | g_CDemonMissionInstance
    MOV dword ptr [EBX + 0x70],0x2      ; 005c7169
    CALL core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700 ; 005c7170
        ;   XREF to: 00524700 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_initNewActorMaybe_FUN_00524700(CDemonMission * this_ptr)
    LEA EAX,[EBX + 0x20]                ; 005c7175
    LEA EDI,[ESI + 0x20]                ; 005c7178
    MOV EDX,dword ptr [EAX]             ; 005c717b
    MOV dword ptr [EDI],EDX             ; 005c717d
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c717f
    MOV dword ptr [EDI + 0x4],EDX       ; 005c7182
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c7185
    MOV dword ptr [EDI + 0x8],EDX       ; 005c7188
    MOV EAX,dword ptr [EAX + 0xc]       ; 005c718b
    ADD ESI,0x30                        ; 005c718e
    MOV dword ptr [EDI + 0xc],EAX       ; 005c7191
    LEA EAX,[EBX + 0x30]                ; 005c7194
    ADD ESP,0x8                         ; 005c7197
    CMP ESI,EAX                         ; 005c719a
    JZ 0x005c71ae                       ; 005c719c
        ;   XREF to: 005c71ae (CONDITIONAL_JUMP)  ; LAB_005c71ae
    MOV EDX,dword ptr [EAX]             ; 005c719e
    MOV dword ptr [ESI],EDX             ; 005c71a0
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c71a2
    MOV dword ptr [ESI + 0x4],EDX       ; 005c71a5
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c71a8
    MOV dword ptr [ESI + 0x8],EDX       ; 005c71ab
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c71ae
        ;   Label: LAB_005c71ae
    MOV ESI,0x654177                    ; 005c71b1 | = "hdwing.cth"
    MOV EDX,dword ptr [EBP + -0x8]      ; 005c71b6
    LEA EDI,[EAX + 0x2a98]              ; 005c71b9
    MOV dword ptr [EAX + 0x2a94],0x1    ; 005c71bf
    PUSH EDI                            ; 005c71c9
    MOV AL,byte ptr [ESI]               ; 005c71ca | = "hdwing.cth" | s_wing.cth_00654179
        ;   Label: LAB_005c71ca
    MOV byte ptr [EDI],AL               ; 005c71cc
    CMP AL,0x0                          ; 005c71ce
    JZ 0x005c71e2                       ; 005c71d0
        ;   XREF to: 005c71e2 (CONDITIONAL_JUMP)  ; LAB_005c71e2
    MOV AL,byte ptr [ESI + 0x1]         ; 005c71d2 | s_dwing.cth_00654178 | s_ing.cth_0065417a
    ADD ESI,0x2                         ; 005c71d5
    MOV byte ptr [EDI + 0x1],AL         ; 005c71d8
    ADD EDI,0x2                         ; 005c71db
    CMP AL,0x0                          ; 005c71de
    JNZ 0x005c71ca                      ; 005c71e0
        ;   XREF to: 005c71ca (CONDITIONAL_JUMP)  ; LAB_005c71ca
    POP EDI                             ; 005c71e2
        ;   Label: LAB_005c71e2
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c71e3
    PUSH EDX                            ; 005c71e6
    MOV EAX,dword ptr [EAX + 0x154]     ; 005c71e7
    CALL dword ptr [EAX]                ; 005c71ed
    ADD ESP,0x4                         ; 005c71ef
    MOV ECX,dword ptr [EBP + -0x10]     ; 005c71f2
    PUSH dword ptr [EBP + -0xc]         ; 005c71f5
    MOV ESI,dword ptr [EBP + -0x8]      ; 005c71f8
    PUSH ECX                            ; 005c71fb
    ADD ESI,0x158                       ; 005c71fc
    PUSH ESI                            ; 005c7202
    CALL core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0 ; 005c7203
        ;   XREF to: 0052ddb0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_jumpToMotionByName_FUN_0052ddb0(CMotionController * this_ptr, char * motion_name, float frame_number)
    ADD ESP,0xc                         ; 005c7208
    PUSH ESI                            ; 005c720b
    MOV ESI,dword ptr [EBP + -0x8]      ; 005c720c
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000 ; 005c720f
        ;   XREF to: 0059e000 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimationAndTransforms_FUN_0059e000(CDeformableModelInstance * this_ptr)
    MOV EAX,dword ptr [EBX + 0x108]     ; 005c7214
    MOV dword ptr [ESI + 0x108],EAX     ; 005c721a
    ADD ESP,0x4                         ; 005c7220
    MOV EAX,dword ptr [EBX + 0x10c]     ; 005c7223
    PUSH ESI                            ; 005c7229
    MOV dword ptr [ESI + 0x10c],EAX     ; 005c722a
    MOV EDI,dword ptr [0x0067d550]      ; 005c7230 | g_CDemonMissionPtr
    MOV EAX,dword ptr [EBX + 0x110]     ; 005c7236
    PUSH EDI                            ; 005c723c | g_CDemonMissionInstance
    MOV dword ptr [ESI + 0x110],EAX     ; 005c723d
    CALL core_mission.cpp_CDemonMission_FUN_00523b70 ; 005c7243
        ;   XREF to: 00523b70 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523b70(CDemonMission * this_ptr)
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c7248
    MOV EAX,dword ptr [EAX + 0x2c28]    ; 005c724b
    MOV ESI,dword ptr [EBX + 0xe304]    ; 005c7251
    MOV dword ptr [EBX + 0xe304],EAX    ; 005c7257
    MOV EAX,dword ptr [EBP + -0x8]      ; 005c725d
    ADD ESP,0x8                         ; 005c7260
    MOV dword ptr [EAX + 0x2c28],ESI    ; 005c7263
    CMP dword ptr [EBX + 0x2620],0x0    ; 005c7269
        ;   Label: LAB_005c7269
    JZ 0x005c7299                       ; 005c7270
        ;   XREF to: 005c7299 (CONDITIONAL_JUMP)  ; LAB_005c7299
    LEA EAX,[EBX + 0xbebc]              ; 005c7272
    PUSH EAX                            ; 005c7278
    PUSH dword ptr [EBX + 0x2414]       ; 005c7279
    LEA EAX,[EBX + 0x30]                ; 005c727f
    PUSH dword ptr [EBP + 0x18]         ; 005c7282
    PUSH EAX                            ; 005c7285
    LEA EAX,[EBX + 0x20]                ; 005c7286
    PUSH EAX                            ; 005c7289
    LEA EAX,[EBX + 0xe170]              ; 005c728a
    PUSH EAX                            ; 005c7290
    CALL core_cloth.cpp_FUN_0043c2d0    ; 005c7291
        ;   XREF to: 0043c2d0 (UNCONDITIONAL_CALL)  ; undefined core_cloth.cpp_FUN_0043c2d0()
    ADD ESP,0x18                        ; 005c7296
    PUSH 0x654182                       ; 005c7299 | = "succubusShutUp"
        ;   Label: LAB_005c7299
    MOV EDX,dword ptr [0x006793d0]      ; 005c729e | g_CEventListPtr
    PUSH EDX                            ; 005c72a4 | g_CEventListInstance
    CALL core_event.cpp_CEventList_evaluateCondition_FUN_004adca0 ; 005c72a5
        ;   XREF to: 004adca0 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_evaluateCondition_FUN_004adca0(CEventList * this_ptr, char * condition_expression)
    ADD ESP,0x8                         ; 005c72aa
    TEST EAX,EAX                        ; 005c72ad
    JNZ 0x005c752e                      ; 005c72af
        ;   XREF to: 005c752e (CONDITIONAL_JUMP)  ; LAB_005c752e
    MOV ECX,dword ptr [EBX + 0xe32c]    ; 005c72b5
    PUSH ECX                            ; 005c72bb
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005c72bc
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005c72c1
    TEST EAX,EAX                        ; 005c72c4
    JNZ 0x005c72e4                      ; 005c72c6
        ;   XREF to: 005c72e4 (CONDITIONAL_JUMP)  ; LAB_005c72e4
    FLD float ptr [EBX + 0xe330]        ; 005c72c8
    FSUB float ptr [EBP + 0x18]         ; 005c72ce
    FST float ptr [EBX + 0xe330]        ; 005c72d1
    FLDZ                                ; 005c72d7
    FCOMPP                              ; 005c72d9
    FNSTSW AX                           ; 005c72db
    SAHF                                ; 005c72dd
    JA 0x005c7544                       ; 005c72de
        ;   XREF to: 005c7544 (CONDITIONAL_JUMP)  ; LAB_005c7544
    MOV ESP,EBP                         ; 005c72e4
        ;   Label: LAB_005c72e4
    POP EBP                             ; 005c72e6
    POP EDI                             ; 005c72e7
    POP ESI                             ; 005c72e8
    POP EBX                             ; 005c72e9
    RET                                 ; 005c72ea
    PUSH 0x1                            ; 005c72eb
        ;   Label: LAB_005c72eb
    PUSH 0x0                            ; 005c72ed
    PUSH ESI                            ; 005c72ef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c72f0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c72f5
    PUSH EBX                            ; 005c72f8
    PUSH 0x654125                       ; 005c72f9 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 005c72fe | g_CConsolePtr
    PUSH ECX                            ; 005c7304 | g_ConsolePtr
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c7305
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005c6fb5                      ; 005c730a
        ;   XREF to: 005c6fb5 (UNCONDITIONAL_JUMP)  ; LAB_005c6fb5
    JBE 0x005c6fa5                      ; 005c730f
        ;   XREF to: 005c6fa5 (CONDITIONAL_JUMP)  ; LAB_005c6fa5
        ;   Label: LAB_005c730f
    CMP EAX,0x3                         ; 005c7315
    JZ 0x005c72eb                       ; 005c7318
        ;   XREF to: 005c72eb (CONDITIONAL_JUMP)  ; LAB_005c72eb
    PUSH 0x1                            ; 005c731a
        ;   Label: LAB_005c731a
    PUSH 0x0                            ; 005c731c
    JMP 0x005c6fa9                      ; 005c731e
        ;   XREF to: 005c6fa9 (UNCONDITIONAL_JUMP)  ; LAB_005c6fa9
    PUSH dword ptr [EBP + 0x18]         ; 005c7323
        ;   Label: LAB_005c7323
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c7326
    PUSH EBX                            ; 005c732c
    CALL dword ptr [EAX + 0x158]        ; 005c732d
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005c7333
    ADD ESP,0x8                         ; 005c7339
    TEST EDX,EDX                        ; 005c733c
    JZ 0x005c7391                       ; 005c733e
        ;   XREF to: 005c7391 (CONDITIONAL_JUMP)  ; LAB_005c7391
    LEA EDI,[EBX + 0x20]                ; 005c7340
    FLD float ptr [EDI]                 ; 005c7343
    FSUB float ptr [EDX + 0x20]         ; 005c7345
    FSTP float ptr [EBP + -0x28]        ; 005c7348
    FLD float ptr [EDI + 0x4]           ; 005c734b
    FSUB float ptr [EDX + 0x24]         ; 005c734e
    FST float ptr [EBP + -0x24]         ; 005c7351
    FMUL float ptr [EBP + -0x24]        ; 005c7354
    FLD float ptr [EBP + -0x28]         ; 005c7357
    FMUL ST0                            ; 005c735a
    FLD float ptr [EDI + 0x8]           ; 005c735c
    FSUB float ptr [EDX + 0x28]         ; 005c735f
    FXCH                                ; 005c7362
    FADDP ST2,ST0                       ; 005c7364
    FST float ptr [EBP + -0x20]         ; 005c7366
    FMUL float ptr [EBP + -0x20]        ; 005c7369
    FADDP                               ; 005c736c
    FSQRT                               ; 005c736e
    FCOMP float ptr [EBX + 0xbe34]      ; 005c7370
    FNSTSW AX                           ; 005c7376
    SAHF                                ; 005c7378
    JNC 0x005c6fd0                      ; 005c7379
        ;   XREF to: 005c6fd0 (CONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH 0x1                            ; 005c737f
    PUSH 0x1                            ; 005c7381
    PUSH ESI                            ; 005c7383
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c7384
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c7389
    JMP 0x005c6fd0                      ; 005c738c
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH dword ptr [EBP + 0x18]         ; 005c7391
        ;   Label: LAB_005c7391
    PUSH EBX                            ; 005c7394
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 005c7395
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 005c739a
    TEST EAX,EAX                        ; 005c739d
    JZ 0x005c6fd0                       ; 005c739f
        ;   XREF to: 005c6fd0 (CONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH 0x1                            ; 005c73a5
    PUSH 0x1                            ; 005c73a7
    PUSH ESI                            ; 005c73a9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c73aa
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c73af
    JMP 0x005c6fd0                      ; 005c73b2
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH dword ptr [EBP + 0x18]         ; 005c73b7
        ;   Label: LAB_005c73b7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c73ba
    PUSH EBX                            ; 005c73c0
    CALL dword ptr [EAX + 0x158]        ; 005c73c1
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005c73c7
    ADD ESP,0x8                         ; 005c73cd
    TEST EDX,EDX                        ; 005c73d0
    JNZ 0x005c740d                      ; 005c73d2
        ;   XREF to: 005c740d (CONDITIONAL_JUMP)  ; LAB_005c740d
    PUSH dword ptr [EBP + 0x18]         ; 005c73d4
    PUSH EBX                            ; 005c73d7
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 005c73d8
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr)
    ADD ESP,0x8                         ; 005c73dd
    LEA ESI,[EBX + 0x158]               ; 005c73e0
    TEST EAX,EAX                        ; 005c73e6
    JZ 0x005c73fc                       ; 005c73e8
        ;   XREF to: 005c73fc (CONDITIONAL_JUMP)  ; LAB_005c73fc
    PUSH 0x1                            ; 005c73ea
    PUSH 0x1                            ; 005c73ec
    PUSH ESI                            ; 005c73ee
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c73ef
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c73f4
    JMP 0x005c6fd0                      ; 005c73f7
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH 0x1                            ; 005c73fc
        ;   Label: LAB_005c73fc
    PUSH EAX                            ; 005c73fe
    PUSH ESI                            ; 005c73ff
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c7400
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c7405
    JMP 0x005c6fd0                      ; 005c7408
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    PUSH 0x3e32b8c2                     ; 005c740d
        ;   Label: LAB_005c740d
    LEA EAX,[EBX + 0x23ac]              ; 005c7412
    PUSH 0x3f000000                     ; 005c7418
    MOV dword ptr [EAX + 0x8],0x0       ; 005c741d
    XOR ECX,ECX                         ; 005c7424
    MOV EDX,dword ptr [EAX + 0x8]       ; 005c7426
    MOV dword ptr [EAX + 0x4],EDX       ; 005c7429
    MOV EDX,dword ptr [EAX + 0x4]       ; 005c742c
    MOV dword ptr [EAX],EDX             ; 005c742f
    MOV EAX,[0x00663928]                ; 005c7431 | FLOAT_00663928
    MOV dword ptr [EBP + -0x58],ECX     ; 005c7436
    MOV dword ptr [EBP + -0x50],EAX     ; 005c7439
    LEA EAX,[EBP + -0x58]               ; 005c743c
    MOV dword ptr [EBP + -0x54],ECX     ; 005c743f
    PUSH EAX                            ; 005c7442
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005c7443
    PUSH EAX                            ; 005c7449
    MOV ESI,dword ptr [EAX + 0x154]     ; 005c744a
    CALL dword ptr [ESI + 0xbc]         ; 005c7450
    ADD ESP,0x4                         ; 005c7456
    PUSH EAX                            ; 005c7459
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005c745a
    ADD EAX,0x20                        ; 005c7460
    PUSH EAX                            ; 005c7463
    PUSH EBX                            ; 005c7464
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005c7465
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 005c746a
    TEST EAX,EAX                        ; 005c746d
    JL 0x005c6fd0                       ; 005c746f
        ;   XREF to: 005c6fd0 (CONDITIONAL_JUMP)  ; LAB_005c6fd0
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005c7475
    LEA ESI,[EBX + 0x20]                ; 005c747b
    FLD float ptr [EAX + 0x20]          ; 005c747e
    FSUB float ptr [ESI]                ; 005c7481
    FSTP float ptr [EBP + -0x64]        ; 005c7483
    FLD float ptr [EAX + 0x24]          ; 005c7486
    FSUB float ptr [ESI + 0x4]          ; 005c7489
    FST float ptr [EBP + -0x60]         ; 005c748c
    FMUL float ptr [EBP + -0x60]        ; 005c748f
    FLD float ptr [EBP + -0x64]         ; 005c7492
    FMUL ST0                            ; 005c7495
    FLD float ptr [EAX + 0x28]          ; 005c7497
    FSUB float ptr [ESI + 0x8]          ; 005c749a
    FXCH                                ; 005c749d
    FADDP ST2,ST0                       ; 005c749f
    FST float ptr [EBP + -0x5c]         ; 005c74a1
    FMUL float ptr [EBP + -0x5c]        ; 005c74a4
    FADDP                               ; 005c74a7
    FSQRT                               ; 005c74a9
    FCOMP float ptr [0x00663934]        ; 005c74ab | FLOAT_00663934
    FNSTSW AX                           ; 005c74b1
    SAHF                                ; 005c74b3
    JNC 0x005c6fd0                      ; 005c74b4
        ;   XREF to: 005c6fd0 (CONDITIONAL_JUMP)  ; LAB_005c6fd0
    MOV EDI,dword ptr [EBX + 0xe334]    ; 005c74ba
    TEST EDI,EDI                        ; 005c74c0
    JNZ 0x005c6fd0                      ; 005c74c2
        ;   XREF to: 005c6fd0 (CONDITIONAL_JUMP)  ; LAB_005c6fd0
    MOV EAX,dword ptr [EBX + 0xe32c]    ; 005c74c8
    MOV dword ptr [EBX + 0xe334],0x1    ; 005c74ce
    PUSH EAX                            ; 005c74d8
    MOV dword ptr [EBX + 0xe338],EDI    ; 005c74d9
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005c74df
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005c74e4
    PUSH 0x65414f                       ; 005c74e7 | = "succubus-morph.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c74ec
    PUSH EBX                            ; 005c74f2
    MOV dword ptr [EBX + 0xe330],0x461c3f9a ; 005c74f3
    CALL dword ptr [EAX + 0x28]         ; 005c74fd
    ADD ESP,0x8                         ; 005c7500
    JMP 0x005c6fd0                      ; 005c7503
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    CMP EDI,0x1                         ; 005c7508
        ;   Label: LAB_005c7508
    JNC 0x005c751a                      ; 005c750b
        ;   XREF to: 005c751a (CONDITIONAL_JUMP)  ; LAB_005c751a
    TEST EDI,EDI                        ; 005c750d
    JZ 0x005c7323                       ; 005c750f
        ;   XREF to: 005c7323 (CONDITIONAL_JUMP)  ; LAB_005c7323
    JMP 0x005c6fd0                      ; 005c7515
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    JBE 0x005c73b7                      ; 005c751a
        ;   XREF to: 005c73b7 (CONDITIONAL_JUMP)  ; LAB_005c73b7
        ;   Label: LAB_005c751a
    CMP EDI,0x2                         ; 005c7520
    JZ 0x005c73b7                       ; 005c7523
        ;   XREF to: 005c73b7 (CONDITIONAL_JUMP)  ; LAB_005c73b7
    JMP 0x005c6fd0                      ; 005c7529
        ;   XREF to: 005c6fd0 (UNCONDITIONAL_JUMP)  ; LAB_005c6fd0
    MOV ESI,dword ptr [EBX + 0xe32c]    ; 005c752e
        ;   Label: LAB_005c752e
    PUSH ESI                            ; 005c7534
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005c7535
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005c753a
    MOV ESP,EBP                         ; 005c753d
    POP EBP                             ; 005c753f
    POP EDI                             ; 005c7540
    POP ESI                             ; 005c7541
    POP EBX                             ; 005c7542
    RET                                 ; 005c7543
    PUSH 0x41200000                     ; 005c7544
        ;   Label: LAB_005c7544
    PUSH 0x40a00000                     ; 005c7549
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005c754e
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)

