; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_process_FUN_005efde0(CWerewolf *this_ptr,float delta_time)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
; Local Variables:
; undefined1       Stack[-0x320]:1  local_320
; undefined4       Stack[-0x31c]:4  local_31c
; undefined4       Stack[-0x2ec]:4  local_2ec
; undefined4       Stack[-0x2e8]:4  local_2e8
; undefined1       Stack[-0x2e4]:1  local_2e4
; undefined4       Stack[-0x2e0]:4  local_2e0
; undefined4       Stack[-0x2b0]:4  local_2b0
; undefined4       Stack[-0x2ac]:4  local_2ac
; undefined1       Stack[-0x2a8]:1  local_2a8
; undefined4       Stack[-0x2a4]:4  local_2a4
; undefined4       Stack[-0x274]:4  local_274
; undefined4       Stack[-0x270]:4  local_270
; undefined1       Stack[-0x26c]:1  local_26c
; undefined4       Stack[-0x268]:4  local_268
; undefined4       Stack[-0x238]:4  local_238
; undefined4       Stack[-0x234]:4  local_234
; undefined1       Stack[-0x230]:1  local_230
; undefined4       Stack[-0x22c]:4  local_22c
; undefined4       Stack[-0x1fc]:4  local_1fc
; undefined4       Stack[-0x1f8]:4  local_1f8
; undefined1       Stack[-0x1f4]:1  local_1f4
; undefined4       Stack[-0x1e8]:4  local_1e8
; undefined4       Stack[-0x1e4]:4  local_1e4
; undefined4       Stack[-0x1e0]:4  local_1e0
; undefined4       Stack[-0x1dc]:4  local_1dc
; undefined4       Stack[-0x1d8]:4  local_1d8
; undefined4       Stack[-0x1d4]:4  local_1d4
; undefined1       Stack[-0x1d0]:1  local_1d0
; undefined4       Stack[-0x1c4]:4  local_1c4
; undefined4       Stack[-0x1c0]:4  local_1c0
; undefined4       Stack[-0x1bc]:4  local_1bc
; undefined1       Stack[-0x1b8]:1  local_1b8
; undefined1       Stack[-0x1ac]:1  local_1ac
; undefined1       Stack[-0x1a0]:1  local_1a0
; undefined4       Stack[-0x194]:4  local_194
; undefined4       Stack[-0x190]:4  local_190
; undefined4       Stack[-0x18c]:4  local_18c
; undefined1       Stack[-0x188]:1  local_188
; undefined1       Stack[-0x17c]:1  local_17c
; undefined1       Stack[-0x170]:1  local_170
; undefined4       Stack[-0x16c]:4  local_16c
; undefined1       Stack[-0x164]:1  local_164
; undefined1       Stack[-0x158]:1  local_158
; undefined1       Stack[-0x14c]:1  local_14c
; undefined1       Stack[-0x140]:1  local_140
; undefined4       Stack[-0x134]:4  local_134
; undefined4       Stack[-0x130]:4  local_130
; undefined4       Stack[-0x12c]:4  local_12c
; undefined1       Stack[-0x128]:1  local_128
; undefined1       Stack[-0x11c]:1  local_11c
; undefined4       Stack[-0x110]:4  local_110
; undefined4       Stack[-0x10c]:4  local_10c
; undefined4       Stack[-0x108]:4  local_108
; undefined4       Stack[-0x104]:4  local_104
; undefined4       Stack[-0x100]:4  local_100
; undefined4       Stack[-0xfc]:4  local_fc
; undefined1       Stack[-0xf8]:1  local_f8
; undefined4       Stack[-0xec]:4  local_ec
; undefined4       Stack[-0xe8]:4  local_e8
; undefined4       Stack[-0xe4]:4  local_e4
; undefined1       Stack[-0xe0]:1  local_e0
; undefined1       Stack[-0xd4]:1  local_d4
; undefined1       Stack[-0xc8]:1  local_c8
; undefined4       Stack[-0xbc]:4  local_bc
; undefined4       Stack[-0xb8]:4  local_b8
; undefined4       Stack[-0xb4]:4  local_b4
; undefined4       Stack[-0xb0]:4  local_b0
; undefined4       Stack[-0xac]:4  local_ac
; undefined4       Stack[-0xa8]:4  local_a8
; undefined1       Stack[-0xa4]:1  local_a4
; undefined1       Stack[-0x98]:1  local_98
; undefined1       Stack[-0x8c]:1  local_8c
; undefined4       Stack[-0x80]:4  local_80
; undefined4       Stack[-0x7c]:4  local_7c
; undefined4       Stack[-0x78]:4  local_78
; undefined1       Stack[-0x74]:1  local_74
; undefined1       Stack[-0x68]:1  local_68
; undefined1       Stack[-0x5c]:1  local_5c
; undefined1       Stack[-0x50]:1  local_50
; undefined4       Stack[-0x3c]:4  local_3c
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
; undefined1       Stack[-0x10]:1  local_10
;
; Referenced Globals:
;   undefined4 DAT_00002424
;   TerminatedCString s_s_confused_while_walking_00657ca1
;   TerminatedCString s_core_werewolf_cpp_00657ccb
;   TerminatedCString s_Alpha_werewolf_requires__00657ce0
;   TerminatedCString s_Phase_d_Timer_f_00657d04
;   TerminatedCString s_s_gave_up_chase_I_m_conf_00657d1a
;   TerminatedCString s_werewolf_eat_wav_00657d3b
;   double DOUBLE_00657d4c = 3.14159265350000
;   double DOUBLE_00657d54 = 4
;   double DOUBLE_00657d5c = 32
;   double DOUBLE_00657d64 = 5
;   float FLOAT_00657d6c = 2
;   double DOUBLE_00657d74 = 0.392699081687500
;   float FLOAT_00657d84 = 0.2617994
;   float FLOAT_00657d88 = -0.2617994
;   ... and 22 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10
;   core_actor.cpp_getRandomFloat_FUN_0040cc10
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_normalizeAngleToPi_FUN_0040cd70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0
;   core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40
;   core_charactr.cpp_CCharacter_preProcess_FUN_00429820
;   core_charactr.cpp_CCharacter_process_FUN_00429870
;   core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40
;   core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70
;   core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0
;   core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0
;   ... and 16 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005efde0
        ;   Label: core_werewolf.cpp_CWerewolf_process_FUN_005efde0
    PUSH ESI                            ; 005efde1
    PUSH EDI                            ; 005efde2
    PUSH EBP                            ; 005efde3
    MOV EBP,ESP                         ; 005efde4
    SUB ESP,0x310                       ; 005efde6
    SUB EBP,0x7a                        ; 005efdec
    MOV EBX,dword ptr [EBP + 0x8e]      ; 005efdef
    PUSH dword ptr [EBP + 0x92]         ; 005efdf5
    PUSH EBX                            ; 005efdfb
    CALL core_charactr.cpp_CCharacter_process_FUN_00429870 ; 005efdfc
        ;   XREF to: 00429870 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_process_FUN_00429870(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005efe01
    TEST EAX,EAX                        ; 005efe04
    JZ 0x005efe72                       ; 005efe06
        ;   XREF to: 005efe72 (CONDITIONAL_JUMP)  ; LAB_005efe72
    CMP dword ptr [EBX + 0xbebc],0x2    ; 005efe08
    JZ 0x005efe89                       ; 005efe0f
        ;   XREF to: 005efe89 (CONDITIONAL_JUMP)  ; LAB_005efe89
    LEA EAX,[EBX + 0x23ac]              ; 005efe11
        ;   Label: LAB_005efe11
    MOV dword ptr [EAX + 0x8],0x0       ; 005efe17
    FLD float ptr [EBP + 0x92]          ; 005efe1e
    MOV EDX,dword ptr [EAX + 0x8]       ; 005efe24
    MOV dword ptr [EAX + 0x4],EDX       ; 005efe27
    MOV EDX,dword ptr [EAX + 0x4]       ; 005efe2a
    MOV dword ptr [EAX],EDX             ; 005efe2d
    FMUL float ptr [EBX + 0xbe24]       ; 005efe2f
    LEA ESI,[EBX + 0x158]               ; 005efe35
    FSTP float ptr [EBP + 0x4e]         ; 005efe3b
    FLD float ptr [EBP + 0x4e]          ; 005efe3e
        ;   Label: LAB_005efe3e
    FLDZ                                ; 005efe41
    FCOMPP                              ; 005efe43
    FNSTSW AX                           ; 005efe45
    SAHF                                ; 005efe47
    JNC 0x005eff51                      ; 005efe48
        ;   XREF to: 005eff51 (CONDITIONAL_JUMP)  ; LAB_005eff51
    LEA EAX,[EBP + 0x4e]                ; 005efe4e
    PUSH EAX                            ; 005efe51
    PUSH ESI                            ; 005efe52
    CALL core_motion.cpp_CMotionController_advance_FUN_0052d610 ; 005efe53
        ;   XREF to: 0052d610 (UNCONDITIONAL_CALL)  ; int core_motion.cpp_CMotionController_advance_FUN_0052d610(CMotionController * this_ptr)
    ADD ESP,0x8                         ; 005efe58
    MOV EDI,EAX                         ; 005efe5b
    CMP EAX,0xa                         ; 005efe5d
    JNC 0x005eff35                      ; 005efe60
        ;   XREF to: 005eff35 (CONDITIONAL_JUMP)  ; LAB_005eff35
    PUSH EDI                            ; 005efe66
    PUSH EBX                            ; 005efe67
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005efe68
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 005efe6d
    JMP 0x005efe3e                      ; 005efe70
        ;   XREF to: 005efe3e (UNCONDITIONAL_JUMP)  ; LAB_005efe3e
    MOV ECX,dword ptr [EBX + 0xbee4]    ; 005efe72
        ;   Label: LAB_005efe72
    PUSH ECX                            ; 005efe78
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005efe79
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005efe7e
    LEA ESP,[EBP + 0x7a]                ; 005efe81
    POP EBP                             ; 005efe84
    POP EDI                             ; 005efe85
    POP ESI                             ; 005efe86
    POP EBX                             ; 005efe87
    RET                                 ; 005efe88
    FLD float ptr [EBX + 0xbefc]        ; 005efe89
        ;   Label: LAB_005efe89
    FLDZ                                ; 005efe8f
    FCOMPP                              ; 005efe91
    FNSTSW AX                           ; 005efe93
    SAHF                                ; 005efe95
    JA 0x005efe11                       ; 005efe96
        ;   XREF to: 005efe11 (CONDITIONAL_JUMP)  ; LAB_005efe11
    FLD float ptr [EBX + 0xbefc]        ; 005efe9c
    FSUB float ptr [EBP + 0x92]         ; 005efea2
    FSTP float ptr [EBX + 0xbefc]       ; 005efea8
    JMP 0x005efe11                      ; 005efeae
        ;   XREF to: 005efe11 (UNCONDITIONAL_JUMP)  ; LAB_005efe11
    MOV EAX,dword ptr [EBX + 0xbecc]    ; 005efeb3
        ;   Label: LAB_005efeb3
    PUSH EAX                            ; 005efeb9
    LEA EAX,[EBP + 0xffffff32]          ; 005efeba
    PUSH EAX                            ; 005efec0
    PUSH ESI                            ; 005efec1
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005efec2
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005efec7
    PUSH EAX                            ; 005efeca
    LEA EAX,[EBP + -0xe]                ; 005efecb
    PUSH EAX                            ; 005efece
    PUSH EBX                            ; 005efecf
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005efed0
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005efed5
    PUSH 0x41400000                     ; 005efed8
    PUSH 0x41000000                     ; 005efedd
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005efee2
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    PUSH 0x1                            ; 005eff1e
        ;   Label: LAB_005eff1e
    PUSH EBX                            ; 005eff20
    MOV EDI,dword ptr [0x0067d550]      ; 005eff21 | g_CDemonMissionPtr
    PUSH EDI                            ; 005eff27 | g_CDemonMissionInstance
    CALL core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0 ; 005eff28
        ;   XREF to: 005240a0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_markActorToDelete_FUN_005240a0(CDemonMission * this_ptr, CDemonActor * actor, uint flags)
    ADD ESP,0xc                         ; 005eff2d
    JMP 0x005efe3e                      ; 005eff30
        ;   XREF to: 005efe3e (UNCONDITIONAL_JUMP)  ; LAB_005efe3e
    JBE 0x005efeb3                      ; 005eff35
        ;   XREF to: 005efeb3 (CONDITIONAL_JUMP)  ; LAB_005efeb3
        ;   Label: LAB_005eff35
    CMP EAX,0x29a                       ; 005eff3b
    JZ 0x005eff1e                       ; 005eff40
        ;   XREF to: 005eff1e (CONDITIONAL_JUMP)  ; LAB_005eff1e
    PUSH EDI                            ; 005eff42
    PUSH EBX                            ; 005eff43
    CALL core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40 ; 005eff44
        ;   XREF to: 0042ec40 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processMotion_FUN_0042ec40(CCharacter * this_ptr, uint event_id)
    ADD ESP,0x8                         ; 005eff49
    JMP 0x005efe3e                      ; 005eff4c
        ;   XREF to: 005efe3e (UNCONDITIONAL_JUMP)  ; LAB_005efe3e
    FLD float ptr [EBX + 0xbe24]        ; 005eff51
        ;   Label: LAB_005eff51
    FLD float ptr [EBP + 0x92]          ; 005eff57
    FMUL double ptr [0x00657d4c]        ; 005eff5d | DOUBLE_00657d4c
    FMULP                               ; 005eff63
    FLD float ptr [EBX + 0x23b4]        ; 005eff65
    MOV ESI,dword ptr [EBX + 0xbebc]    ; 005eff6b
    FSTP float ptr [EBX + 0x2434]       ; 005eff71
    FSTP float ptr [EBX + 0x2438]       ; 005eff77
    CMP ESI,0x2                         ; 005eff7d
    JNZ 0x005eff98                      ; 005eff80
        ;   XREF to: 005eff98 (CONDITIONAL_JUMP)  ; LAB_005eff98
    FLD float ptr [EBX + 0x2438]        ; 005eff82
    FLD ST0                             ; 005eff88
    FMUL double ptr [0x00657d54]        ; 005eff8a | DOUBLE_00657d54
    FSTP ST1                            ; 005eff90
    FSTP float ptr [EBX + 0x2438]       ; 005eff92
    LEA ESI,[EBX + 0x158]               ; 005eff98
        ;   Label: LAB_005eff98
    PUSH ESI                            ; 005eff9e
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005eff9f
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    ADD ESP,0x4                         ; 005effa4
    PUSH dword ptr [EBP + 0x92]         ; 005effa7
    MOV EDI,dword ptr [EAX + 0x24]      ; 005effad
    PUSH EBX                            ; 005effb0
    MOV dword ptr [EBP + 0x72],EDI      ; 005effb1
    CALL core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70 ; 005effb4
        ;   XREF to: 0042ca70 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_processWalking_FUN_0042ca70(CCharacter * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005effb9
    TEST EAX,EAX                        ; 005effbc
    JZ 0x005f0296                       ; 005effbe
        ;   XREF to: 005f0296 (CONDITIONAL_JUMP)  ; LAB_005f0296
    MOV EAX,dword ptr [EBX + 0x25b0]    ; 005effc4
    CMP EAX,0x2                         ; 005effca
    JNC 0x005f0286                      ; 005effcd
        ;   XREF to: 005f0286 (CONDITIONAL_JUMP)  ; LAB_005f0286
    CMP EAX,0x1                         ; 005effd3
    JNZ 0x005f028d                      ; 005effd6
        ;   XREF to: 005f028d (CONDITIONAL_JUMP)  ; LAB_005f028d
    CMP EDI,0xe                         ; 005effdc
    JNZ 0x005f023a                      ; 005effdf
        ;   XREF to: 005f023a (CONDITIONAL_JUMP)  ; LAB_005f023a
    PUSH 0x1                            ; 005effe5
        ;   Label: LAB_005effe5
    PUSH 0xf                            ; 005effe7
    LEA EAX,[EBX + 0x158]               ; 005effe9
        ;   Label: LAB_005effe9
    PUSH EAX                            ; 005effef
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005efff0
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005efff0
    ADD ESP,0xc                         ; 005efff5
        ;   Label: LAB_005efff5
    LEA EAX,[EBX + 0x23ac]              ; 005efff8
        ;   Label: LAB_005efff8
    MOV dword ptr [EAX + 0x8],0x0       ; 005efffe
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f0005
    MOV dword ptr [EAX + 0x4],EDX       ; 005f0008
    MOV EDX,dword ptr [EAX + 0x4]       ; 005f000b
    MOV dword ptr [EAX],EDX             ; 005f000e
    CMP dword ptr [EBP + 0x72],0x13     ; 005f0010
        ;   Label: LAB_005f0010
    JNZ 0x005f1159                      ; 005f0014
        ;   XREF to: 005f1159 (CONDITIONAL_JUMP)  ; LAB_005f1159
    CMP dword ptr [EBX + 0x2620],0x0    ; 005f001a
    JZ 0x005f1159                       ; 005f0021
        ;   XREF to: 005f1159 (CONDITIONAL_JUMP)  ; LAB_005f1159
    MOV EAX,dword ptr [EBX + 0xbee4]    ; 005f0027
    PUSH EAX                            ; 005f002d
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005f002e
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005f0033
    TEST EAX,EAX                        ; 005f0036
    JZ 0x005f113c                       ; 005f0038
        ;   XREF to: 005f113c (CONDITIONAL_JUMP)  ; LAB_005f113c
    MOV EDX,0x3f800000                  ; 005f003e
        ;   Label: LAB_005f003e
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 005f0043
    MOV dword ptr [EBP + 0x6a],EDX      ; 005f0049
    TEST ECX,ECX                        ; 005f004c
    JNZ 0x005f0057                      ; 005f004e
        ;   XREF to: 005f0057 (CONDITIONAL_JUMP)  ; LAB_005f0057
    MOV dword ptr [EBP + 0x6a],0x3f400000 ; 005f0050
    MOV EDI,dword ptr [EBP + 0x72]      ; 005f0057
        ;   Label: LAB_005f0057
    CMP EDI,0xe                         ; 005f005a
    JNZ 0x005f116d                      ; 005f005d
        ;   XREF to: 005f116d (CONDITIONAL_JUMP)  ; LAB_005f116d
    FLD float ptr [EBP + 0x6a]          ; 005f0063
        ;   Label: LAB_005f0063
    FMUL double ptr [0x00657d94]        ; 005f0066 | DOUBLE_00657d94
    FSTP float ptr [EBX + 0x2de0]       ; 005f006c
        ;   Label: LAB_005f006c
    FLD float ptr [EBX + 0xbe38]        ; 005f0072
    FLDZ                                ; 005f0078
    FCOMPP                              ; 005f007a
    FNSTSW AX                           ; 005f007c
    SAHF                                ; 005f007e
    JNC 0x005f0093                      ; 005f007f
        ;   XREF to: 005f0093 (CONDITIONAL_JUMP)  ; LAB_005f0093
    FLD float ptr [EBX + 0xbe38]        ; 005f0081
    FSUB float ptr [EBP + 0x92]         ; 005f0087
    FSTP float ptr [EBX + 0xbe38]       ; 005f008d
    LEA EAX,[EBX + 0x158]               ; 005f0093
        ;   Label: LAB_005f0093
    PUSH EAX                            ; 005f0099
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f009a
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f009f
    ADD ESP,0x4                         ; 005f00a2
    CMP EAX,0xd                         ; 005f00a5
    JZ 0x005f1184                       ; 005f00a8
        ;   XREF to: 005f1184 (CONDITIONAL_JUMP)  ; LAB_005f1184
    TEST EAX,EAX                        ; 005f00ae
    JZ 0x005f1184                       ; 005f00b0
        ;   XREF to: 005f1184 (CONDITIONAL_JUMP)  ; LAB_005f1184
    CMP EAX,0xe                         ; 005f00b6
    JZ 0x005f1184                       ; 005f00b9
        ;   XREF to: 005f1184 (CONDITIONAL_JUMP)  ; LAB_005f1184
    CMP EAX,0x14                        ; 005f00bf
    JZ 0x005f1184                       ; 005f00c2
        ;   XREF to: 005f1184 (CONDITIONAL_JUMP)  ; LAB_005f1184
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005f00c8
        ;   Label: LAB_005f00c8
    TEST ECX,ECX                        ; 005f00ce
    JZ 0x005f00fc                       ; 005f00d0
        ;   XREF to: 005f00fc (CONDITIONAL_JUMP)  ; LAB_005f00fc
    PUSH ECX                            ; 005f00d2
    MOV EDX,dword ptr [ECX + 0x154]     ; 005f00d3
    CALL dword ptr [EDX + 0x108]        ; 005f00d9
    ADD ESP,0x4                         ; 005f00df
    CMP EAX,EBX                         ; 005f00e2
    JNZ 0x005f00fc                      ; 005f00e4
        ;   XREF to: 005f00fc (CONDITIONAL_JUMP)  ; LAB_005f00fc
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005f00e6
    PUSH ESI                            ; 005f00ec
    MOV EDI,dword ptr [0x006810c8]      ; 005f00ed | g_CDemonSetPtr
    PUSH EDI                            ; 005f00f3 | g_CDemonSetInstance
    CALL core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0 ; 005f00f4
        ;   XREF to: 005741b0 (UNCONDITIONAL_CALL)  ; void core_setcolid.cpp_CDemonSet_ignore_FUN_005741b0(CDemonSet * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 005f00f9
    FLD float ptr [EBP + 0x92]          ; 005f00fc
        ;   Label: LAB_005f00fc
    FLD ST0                             ; 005f0102
    FMUL double ptr [0x00657d5c]        ; 005f0104 | DOUBLE_00657d5c
    FLD float ptr [EBX + 0x242c]        ; 005f010a
    FXCH                                ; 005f0110
    FSUBR ST0,ST1                       ; 005f0112
    LEA EDI,[EBX + 0x2428]              ; 005f0114
    FSTP ST1                            ; 005f011a
    FSTP float ptr [EBX + 0x242c]       ; 005f011c
    FLD float ptr [EDI]                 ; 005f0122
    FMUL ST1                            ; 005f0124
    FSTP float ptr [EBP + -0x62]        ; 005f0126
    FLD float ptr [EDI + 0x4]           ; 005f0129
    FMUL ST1                            ; 005f012c
    LEA ESI,[EBX + 0x23ac]              ; 005f012e
    FSTP float ptr [EBP + -0x5e]        ; 005f0134
    FMUL float ptr [EDI + 0x8]          ; 005f0137
    LEA EAX,[EBX + 0x241c]              ; 005f013a
    FLD float ptr [EBP + -0x62]         ; 005f0140
    FXCH                                ; 005f0143
    FSTP float ptr [EBP + -0x5a]        ; 005f0145
    FADD float ptr [ESI]                ; 005f0148
    FLD float ptr [EBP + -0x5e]         ; 005f014a
    FXCH                                ; 005f014d
    FSTP float ptr [EBP + 0xa]          ; 005f014f
    FADD float ptr [ESI + 0x4]          ; 005f0152
    FLD float ptr [EBP + -0x5a]         ; 005f0155
    FXCH                                ; 005f0158
    FSTP float ptr [EBP + 0xe]          ; 005f015a
    FADD float ptr [ESI + 0x8]          ; 005f015d
    FLD float ptr [EBP + 0xa]           ; 005f0160
    FXCH                                ; 005f0163
    FSTP float ptr [EBP + 0x12]         ; 005f0165
    FADD float ptr [EAX]                ; 005f0168
    FLD float ptr [EBP + 0xe]           ; 005f016a
    FXCH                                ; 005f016d
    FSTP float ptr [EBP + 0xfffffec6]   ; 005f016f
    FADD float ptr [EAX + 0x4]          ; 005f0175
    FLD float ptr [EBP + 0x12]          ; 005f0178
    FXCH                                ; 005f017b
    FSTP float ptr [EBP + 0xfffffeca]   ; 005f017d
    FADD float ptr [EAX + 0x8]          ; 005f0183 | DAT_00002424
    FSTP float ptr [EBP + 0xfffffece]   ; 005f0186
    MOV dword ptr [ESI + 0x8],0x0       ; 005f018c
    MOV EDX,dword ptr [ESI + 0x8]       ; 005f0193
    MOV dword ptr [ESI + 0x4],EDX       ; 005f0196
    MOV EDX,dword ptr [ESI + 0x4]       ; 005f0199
    MOV dword ptr [ESI],EDX             ; 005f019c
    MOV dword ptr [EAX + 0x8],0x0       ; 005f019e | DAT_00002424
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f01a5 | DAT_00002424
    MOV dword ptr [EAX + 0x4],EDX       ; 005f01a8
    MOV EDX,dword ptr [EAX + 0x4]       ; 005f01ab
    MOV dword ptr [EAX],EDX             ; 005f01ae
    LEA EAX,[EBP + 0xfffffec6]          ; 005f01b0
    PUSH EAX                            ; 005f01b6
    PUSH EBX                            ; 005f01b7
    CALL core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40 ; 005f01b8
        ;   XREF to: 00428f40 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_moveAndCollide_FUN_00428f40(CCharacter * this_ptr, CVector3f * velocity)
    ADD ESP,0x8                         ; 005f01bd
    PUSH EBX                            ; 005f01c0
        ;   Label: LAB_005f01c0
    CALL core_charactr.cpp_CCharacter_preProcess_FUN_00429820 ; 005f01c1
        ;   XREF to: 00429820 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_preProcess_FUN_00429820(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 005f01c6
    LEA EAX,[EBX + 0x158]               ; 005f01c9
    PUSH EAX                            ; 005f01cf
    CALL core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020 ; 005f01d0
        ;   XREF to: 0059e020 (UNCONDITIONAL_CALL)  ; void core_skeleton.cpp_CDeformableModelInstance_updateAnimation_FUN_0059e020(CDeformableModelInstance * this_ptr)
    ADD ESP,0x4                         ; 005f01d5
    PUSH dword ptr [EBP + 0x92]         ; 005f01d8
    PUSH EBX                            ; 005f01de
    CALL core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0 ; 005f01df
        ;   XREF to: 0042dfc0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_applyGestureLookAt_FUN_0042dfc0(CCharacter * this_ptr, float delta_time, float param_3)
    ADD ESP,0x8                         ; 005f01e4
    PUSH EBX                            ; 005f01e7
    CALL core_werewolf.cpp_CWerewolf_FUN_005f1e40 ; 005f01e8
        ;   XREF to: 005f1e40 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f1e40(CWerewolf * this_ptr)
    FLD float ptr [EBP + 0x92]          ; 005f01ed
    FMUL double ptr [0x00657d9c]        ; 005f01f3 | DOUBLE_00657d9c
    FLD float ptr [EBX + 0xbf00]        ; 005f01f9
    FXCH                                ; 005f01ff
    FADD ST0,ST1                        ; 005f0201
    ADD ESP,0x4                         ; 005f0203
    FSTP ST1                            ; 005f0206
    FSTP float ptr [EBX + 0xbf00]       ; 005f0208
    LEA ESP,[EBP + 0x7a]                ; 005f020e
    POP EBP                             ; 005f0211
    POP EDI                             ; 005f0212
    POP ESI                             ; 005f0213
    POP EBX                             ; 005f0214
    RET                                 ; 005f0215
    PUSH 0x1                            ; 005f0216
        ;   Label: LAB_005f0216
    PUSH 0x0                            ; 005f0218
    PUSH ESI                            ; 005f021a
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f021b
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0220
    PUSH EBX                            ; 005f0223
    PUSH 0x657ca1                       ; 005f0224 | = "%s confused while walking to scriptDe..."
    MOV ECX,dword ptr [0x0066e8e0]      ; 005f0229 | g_CConsolePtr
    PUSH ECX                            ; 005f022f | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f0230
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    JMP 0x005efff5                      ; 005f0235
        ;   XREF to: 005efff5 (UNCONDITIONAL_JUMP)  ; LAB_005efff5
    CMP EDI,0xf                         ; 005f023a
        ;   Label: LAB_005f023a
    JZ 0x005effe5                       ; 005f023d
        ;   XREF to: 005effe5 (CONDITIONAL_JUMP)  ; LAB_005effe5
    PUSH EAX                            ; 005f0243
    PUSH EAX                            ; 005f0244
    PUSH ESI                            ; 005f0245
    JMP 0x005efff0                      ; 005f0246
        ;   XREF to: 005efff0 (UNCONDITIONAL_JUMP)  ; LAB_005efff0
    CMP EDI,0xe                         ; 005f024b
        ;   Label: LAB_005f024b
    JZ 0x005effe5                       ; 005f024e
        ;   XREF to: 005effe5 (CONDITIONAL_JUMP)  ; LAB_005effe5
    CMP EDI,0xf                         ; 005f0254
    JZ 0x005effe5                       ; 005f0257
        ;   XREF to: 005effe5 (CONDITIONAL_JUMP)  ; LAB_005effe5
    FLD float ptr [EBX + 0x2418]        ; 005f025d
    FABS                                ; 005f0263
    FLD float ptr [EBX + 0x2438]        ; 005f0265
    FCOMPP                              ; 005f026b
    FNSTSW AX                           ; 005f026d
    SAHF                                ; 005f026f
    JBE 0x005f027c                      ; 005f0270
        ;   XREF to: 005f027c (CONDITIONAL_JUMP)  ; LAB_005f027c
    PUSH 0x1                            ; 005f0272
    PUSH 0x8                            ; 005f0274
    PUSH ESI                            ; 005f0276
    JMP 0x005efff0                      ; 005f0277
        ;   XREF to: 005efff0 (UNCONDITIONAL_JUMP)  ; LAB_005efff0
    PUSH 0x1                            ; 005f027c
        ;   Label: LAB_005f027c
    PUSH 0x1                            ; 005f027e
    PUSH ESI                            ; 005f0280
    JMP 0x005efff0                      ; 005f0281
        ;   XREF to: 005efff0 (UNCONDITIONAL_JUMP)  ; LAB_005efff0
    JBE 0x005f024b                      ; 005f0286
        ;   XREF to: 005f024b (CONDITIONAL_JUMP)  ; LAB_005f024b
        ;   Label: LAB_005f0286
    CMP EAX,0x3                         ; 005f0288
    JZ 0x005f0216                       ; 005f028b
        ;   XREF to: 005f0216 (CONDITIONAL_JUMP)  ; LAB_005f0216
    PUSH 0x1                            ; 005f028d
        ;   Label: LAB_005f028d
    PUSH 0x0                            ; 005f028f
    JMP 0x005effe9                      ; 005f0291
        ;   XREF to: 005effe9 (UNCONDITIONAL_JUMP)  ; LAB_005effe9
    PUSH EBX                            ; 005f0296
        ;   Label: LAB_005f0296
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f0297
    CALL dword ptr [EAX + 0x120]        ; 005f029d
    ADD ESP,0x4                         ; 005f02a3
    TEST EAX,EAX                        ; 005f02a6
    JNZ 0x005f0456                      ; 005f02a8
        ;   XREF to: 005f0456 (CONDITIONAL_JUMP)  ; LAB_005f0456
    MOV EDX,dword ptr [0x02db87d0]      ; 005f02ae | g_LocalHeroIndex
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f02b4
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 005f02ba | g_HeroActors
    JNZ 0x005f0456                      ; 005f02c1
        ;   XREF to: 005f0456 (CONDITIONAL_JUMP)  ; LAB_005f0456
    LEA EAX,[EBP + 0xfffffde2]          ; 005f02c7
    PUSH EAX                            ; 005f02cd
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f02ce
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f02d3
    PUSH 0x41700000                     ; 005f02d6
    PUSH 0x40e00000                     ; 005f02db
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f02e0
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EDX,dword ptr [EBP + 0x72]      ; 005f0456
        ;   Label: LAB_005f0456
    MOV EAX,[0x02db87d0]                ; 005f0459 | g_LocalHeroIndex
    LEA ESI,[EBX + 0xfd8]               ; 005f045e
    SHL EAX,0x2                         ; 005f0464
    CMP EDX,0x4                         ; 005f0467
    JNC 0x005f100c                      ; 005f046a
        ;   XREF to: 005f100c (CONDITIONAL_JUMP)  ; LAB_005f100c
    CMP EDX,0x1                         ; 005f0470
    JNC 0x005f1057                      ; 005f0473
        ;   XREF to: 005f1057 (CONDITIONAL_JUMP)  ; LAB_005f1057
    TEST EDX,EDX                        ; 005f0479
    JNZ 0x005f0010                      ; 005f047b
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH dword ptr [EBP + 0x92]         ; 005f0481
        ;   Label: LAB_005f0481
    PUSH EBX                            ; 005f0487
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 005f0488
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005f048d
    TEST EAX,EAX                        ; 005f0490
    JZ 0x005f083d                       ; 005f0492
        ;   XREF to: 005f083d (CONDITIONAL_JUMP)  ; LAB_005f083d
    MOV EDX,dword ptr [EBP + 0x72]      ; 005f0498
    LEA EAX,[EBX + 0x158]               ; 005f049b
    CMP EDX,0xe                         ; 005f04a1
    JNZ 0x005f082b                      ; 005f04a4
        ;   XREF to: 005f082b (CONDITIONAL_JUMP)  ; LAB_005f082b
    PUSH 0x1                            ; 005f04aa
    PUSH 0xf                            ; 005f04ac
    PUSH EAX                            ; 005f04ae
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f04af
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f04b4
    JMP 0x005f0010                      ; 005f04b7
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    MOV EDI,dword ptr [EAX + 0x2db87c0] ; 005f04bc | g_HeroActors
        ;   Label: LAB_005f04bc
    CMP EDI,dword ptr [EBX + 0xbe3c]    ; 005f04c2
    JNZ 0x005f05e2                      ; 005f04c8
        ;   XREF to: 005f05e2 (CONDITIONAL_JUMP)  ; LAB_005f05e2
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f04ce
        ;   Label: LAB_005f04ce
    TEST EAX,EAX                        ; 005f04d4
    JZ 0x005f04ff                       ; 005f04d6
        ;   XREF to: 005f04ff (CONDITIONAL_JUMP)  ; LAB_005f04ff
    PUSH EAX                            ; 005f04d8
    MOV EDX,dword ptr [EAX + 0x154]     ; 005f04d9
    CALL dword ptr [EDX + 0x120]        ; 005f04df
    ADD ESP,0x4                         ; 005f04e5
    TEST EAX,EAX                        ; 005f04e8
    JZ 0x005f04ff                       ; 005f04ea
        ;   XREF to: 005f04ff (CONDITIONAL_JUMP)  ; LAB_005f04ff
    PUSH 0x1                            ; 005f04ec
    PUSH 0x7                            ; 005f04ee
    LEA EAX,[EBX + 0x158]               ; 005f04f0
    PUSH EAX                            ; 005f04f6
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f04f7
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f04fc
    MOV EDX,dword ptr [0x02db87d0]      ; 005f04ff | g_LocalHeroIndex
        ;   Label: LAB_005f04ff
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f0505
    CMP EAX,dword ptr [EDX*0x4 + 0x2db87c0] ; 005f050b | g_HeroActors
    JZ 0x005f05a4                       ; 005f0512
        ;   XREF to: 005f05a4 (CONDITIONAL_JUMP)  ; LAB_005f05a4
    LEA EAX,[EBP + 0xfffffda6]          ; 005f0518
    PUSH EAX                            ; 005f051e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f051f
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f0524
    PUSH 0x41700000                     ; 005f0527
    PUSH 0x40e00000                     ; 005f052c
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f0531
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f05a4
        ;   Label: LAB_005f05a4
    TEST EAX,EAX                        ; 005f05aa
    JZ 0x005f0010                       ; 005f05ac
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH EAX                            ; 005f05b2
    MOV EDX,dword ptr [EAX + 0x154]     ; 005f05b3
    CALL dword ptr [EDX + 0x120]        ; 005f05b9
    ADD ESP,0x4                         ; 005f05bf
    TEST EAX,EAX                        ; 005f05c2
    JZ 0x005f0010                       ; 005f05c4
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x1                            ; 005f05ca
    PUSH 0x7                            ; 005f05cc
    LEA EAX,[EBX + 0x158]               ; 005f05ce
    PUSH EAX                            ; 005f05d4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f05d5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f05da
    JMP 0x005f0010                      ; 005f05dd
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    LEA EAX,[EBP + 0xfffffe5a]          ; 005f05e2
        ;   Label: LAB_005f05e2
    PUSH EAX                            ; 005f05e8
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f05e9
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f05ee
    PUSH 0x41700000                     ; 005f05f1
    PUSH 0x40e00000                     ; 005f05f6
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f05fb
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    LEA EAX,[EBP + 0xfffffe1e]          ; 005f0704
        ;   Label: LAB_005f0704
    PUSH EAX                            ; 005f070a
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f070b
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f0710
    PUSH 0x41700000                     ; 005f0713
    PUSH 0x40e00000                     ; 005f0718
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f071d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV EAX,dword ptr [EBX + 0xbe28]    ; 005f07c7
        ;   Label: LAB_005f07c7
    TEST EAX,EAX                        ; 005f07cd
    JNZ 0x005f0010                      ; 005f07cf
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    CMP dword ptr [EBX + 0xdc],0x0      ; 005f07d5
    JNZ 0x005f0010                      ; 005f07dc
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH EAX                            ; 005f07e2
    LEA EAX,[EBP + 0xfffffede]          ; 005f07e3
    PUSH EAX                            ; 005f07e9
    PUSH EDI                            ; 005f07ea
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20 ; 005f07eb
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneWorldPosition_FUN_0059fa20(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 005f07f0
    PUSH EAX                            ; 005f07f3
    LEA EAX,[EBP + 0xfffffed2]          ; 005f07f4
    PUSH EAX                            ; 005f07fa
    PUSH EBX                            ; 005f07fb
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 005f07fc
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 005f0801
    PUSH 0x0                            ; 005f0804
    LEA EAX,[EBP + 0xfffffed2]          ; 005f0806
    PUSH EAX                            ; 005f080c
    MOV ECX,dword ptr [0x0067b9a0]      ; 005f080d | g_CGorePtr | g_CGoreInstance
    PUSH ECX                            ; 005f0813 | g_CGoreInstance
    CALL core_gore.cpp_CGore_createBloodPool_FUN_004ede30 ; 005f0814
        ;   XREF to: 004ede30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_createBloodPool_FUN_004ede30(CGore * this_ptr, CVector3f * position, int blood_type)
    ADD ESP,0xc                         ; 005f0819
    MOV dword ptr [EBX + 0xbe28],0x1    ; 005f081c
    JMP 0x005f0010                      ; 005f0826
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x1                            ; 005f082b
        ;   Label: LAB_005f082b
    PUSH 0x1                            ; 005f082d
    PUSH EAX                            ; 005f082f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0830
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0835
    JMP 0x005f0010                      ; 005f0838
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH dword ptr [EBP + 0x92]         ; 005f083d
        ;   Label: LAB_005f083d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f0843
    PUSH EBX                            ; 005f0849
    CALL dword ptr [EAX + 0x158]        ; 005f084a
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005f0850
    ADD ESP,0x8                         ; 005f0856
    TEST ECX,ECX                        ; 005f0859
    JZ 0x005f0010                       ; 005f085b
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    JZ 0x005f08c9                       ; 005f0861
        ;   XREF to: 005f08c9 (CONDITIONAL_JUMP)  ; LAB_005f08c9
    CMP dword ptr [EBX + 0xbee8],0x0    ; 005f0863
    JZ 0x005f08c9                       ; 005f086a
        ;   XREF to: 005f08c9 (CONDITIONAL_JUMP)  ; LAB_005f08c9
    MOV ESI,ECX                         ; 005f086c
    LEA EAX,[EBX + 0x20]                ; 005f086e
    FLD float ptr [ESI + 0x20]          ; 005f0871
    FSUB float ptr [EAX]                ; 005f0874
    FSTP float ptr [EBP + -0x26]        ; 005f0876
    FLD float ptr [ESI + 0x24]          ; 005f0879
    FSUB float ptr [EAX + 0x4]          ; 005f087c
    FST float ptr [EBP + -0x22]         ; 005f087f
    FMUL float ptr [EBP + -0x22]        ; 005f0882
    FLD float ptr [EBP + -0x26]         ; 005f0885
    FMUL ST0                            ; 005f0888
    FLD float ptr [ESI + 0x28]          ; 005f088a
    FSUB float ptr [EAX + 0x8]          ; 005f088d
    FXCH                                ; 005f0890
    FADDP ST2,ST0                       ; 005f0892
    FST float ptr [EBP + -0x1e]         ; 005f0894
    FMUL float ptr [EBP + -0x1e]        ; 005f0897
    FADDP                               ; 005f089a
    FSQRT                               ; 005f089c
    FST float ptr [EBP + 0x5e]          ; 005f089e
    FCOMP float ptr [EBX + 0xbe34]      ; 005f08a1
    FNSTSW AX                           ; 005f08a7
    SAHF                                ; 005f08a9
    JBE 0x005f08bb                      ; 005f08aa
        ;   XREF to: 005f08bb (CONDITIONAL_JUMP)  ; LAB_005f08bb
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 005f08ac
        ;   Label: LAB_005f08ac
    JMP 0x005f0010                      ; 005f08b6
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    FLD float ptr [EBP + 0x5e]          ; 005f08bb
        ;   Label: LAB_005f08bb
    FCOMP double ptr [0x00657d5c]       ; 005f08be | DOUBLE_00657d5c
    FNSTSW AX                           ; 005f08c4
    SAHF                                ; 005f08c6
    JA 0x005f08ac                       ; 005f08c7
        ;   XREF to: 005f08ac (CONDITIONAL_JUMP)  ; LAB_005f08ac
    MOV EAX,[0x03f87418]                ; 005f08c9 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005f08c9
    PUSH EAX                            ; 005f08ce
    MOV EDX,dword ptr [EBX + 0xbee8]    ; 005f08cf
    PUSH EDX                            ; 005f08d5
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f08d6
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005f08db
    TEST EAX,EAX                        ; 005f08de
    JZ 0x005f08e8                       ; 005f08e0
        ;   XREF to: 005f08e8 (CONDITIONAL_JUMP)  ; LAB_005f08e8
    CMP dword ptr [EBP + 0x72],0xe      ; 005f08e2
    JZ 0x005f092a                       ; 005f08e6
        ;   XREF to: 005f092a (CONDITIONAL_JUMP)  ; LAB_005f092a
    CMP dword ptr [EBX + 0xbe3c],0x0    ; 005f08e8
        ;   Label: LAB_005f08e8
    JZ 0x005f0010                       ; 005f08ef
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x3ecccccd                     ; 005f08f5
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005f08fa
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005f08ff
    TEST EAX,EAX                        ; 005f0902
    JNZ 0x005f0942                      ; 005f0904
        ;   XREF to: 005f0942 (CONDITIONAL_JUMP)  ; LAB_005f0942
    MOV EDI,dword ptr [EBP + 0x72]      ; 005f0906
        ;   Label: LAB_005f0906
    LEA EAX,[EBX + 0x158]               ; 005f0909
    CMP EDI,0xe                         ; 005f090f
    JNZ 0x005f082b                      ; 005f0912
        ;   XREF to: 005f082b (CONDITIONAL_JUMP)  ; LAB_005f082b
    PUSH 0x1                            ; 005f0918
    PUSH 0xf                            ; 005f091a
    PUSH EAX                            ; 005f091c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f091d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0922
    JMP 0x005f0010                      ; 005f0925
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x1                            ; 005f092a
        ;   Label: LAB_005f092a
    PUSH 0x0                            ; 005f092c
    LEA EAX,[EBX + 0x158]               ; 005f092e
    PUSH EAX                            ; 005f0934
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0935
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f093a
    JMP 0x005f0010                      ; 005f093d
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH EBX                            ; 005f0942
        ;   Label: LAB_005f0942
    CALL core_werewolf.cpp_CWerewolf_FUN_005f11e0 ; 005f0943
        ;   XREF to: 005f11e0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f11e0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005f0948
    JMP 0x005f0906                      ; 005f094b
        ;   XREF to: 005f0906 (UNCONDITIONAL_JUMP)  ; LAB_005f0906
    PUSH dword ptr [EBP + 0x92]         ; 005f094d
        ;   Label: LAB_005f094d
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f0953
    PUSH EBX                            ; 005f0959
    CALL dword ptr [EAX + 0x158]        ; 005f095a
    MOV EDX,dword ptr [EBX + 0xbe3c]    ; 005f0960
    ADD ESP,0x8                         ; 005f0966
    TEST EDX,EDX                        ; 005f0969
    JZ 0x005f09ee                       ; 005f096b
        ;   XREF to: 005f09ee (CONDITIONAL_JUMP)  ; LAB_005f09ee
    CMP dword ptr [EBX + 0xbee8],0x0    ; 005f0971
    JZ 0x005f0a1c                       ; 005f0978
        ;   XREF to: 005f0a1c (CONDITIONAL_JUMP)  ; LAB_005f0a1c
    MOV ESI,EDX                         ; 005f097e
    LEA EAX,[EBX + 0x20]                ; 005f0980
    FLD float ptr [ESI + 0x20]          ; 005f0983
    FSUB float ptr [EAX]                ; 005f0986
    FSTP float ptr [EBP + -0x7a]        ; 005f0988
    FLD float ptr [ESI + 0x24]          ; 005f098b
    FSUB float ptr [EAX + 0x4]          ; 005f098e
    FST float ptr [EBP + -0x76]         ; 005f0991
    FMUL float ptr [EBP + -0x76]        ; 005f0994
    FLD float ptr [EBP + -0x7a]         ; 005f0997
    FMUL ST0                            ; 005f099a
    FLD float ptr [ESI + 0x28]          ; 005f099c
    FSUB float ptr [EAX + 0x8]          ; 005f099f
    FXCH                                ; 005f09a2
    FADDP ST2,ST0                       ; 005f09a4
    FST float ptr [EBP + -0x72]         ; 005f09a6
    FMUL float ptr [EBP + -0x72]        ; 005f09a9
    FADDP                               ; 005f09ac
    FSQRT                               ; 005f09ae
    FST float ptr [EBP + 0x66]          ; 005f09b0
    FCOMP float ptr [EBX + 0xbe34]      ; 005f09b3
    FNSTSW AX                           ; 005f09b9
    SAHF                                ; 005f09bb
    JA 0x005f09cc                       ; 005f09bc
        ;   XREF to: 005f09cc (CONDITIONAL_JUMP)  ; LAB_005f09cc
    FLD float ptr [EBP + 0x66]          ; 005f09be
    FCOMP double ptr [0x00657d5c]       ; 005f09c1 | DOUBLE_00657d5c
    FNSTSW AX                           ; 005f09c7
    SAHF                                ; 005f09c9
    JBE 0x005f0a1c                      ; 005f09ca
        ;   XREF to: 005f0a1c (CONDITIONAL_JUMP)  ; LAB_005f0a1c
    PUSH 0x1                            ; 005f09cc
        ;   Label: LAB_005f09cc
    PUSH 0x0                            ; 005f09ce
    LEA EAX,[EBX + 0x158]               ; 005f09d0
    PUSH EAX                            ; 005f09d6
    MOV dword ptr [EBX + 0xbe3c],0x0    ; 005f09d7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f09e1
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f09e6
    JMP 0x005f0010                      ; 005f09e9
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH dword ptr [EBP + 0x92]         ; 005f09ee
        ;   Label: LAB_005f09ee
    PUSH EBX                            ; 005f09f4
    CALL core_enemy.cpp_CEnemy_FUN_004a9fd0 ; 005f09f5
        ;   XREF to: 004a9fd0 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_FUN_004a9fd0(CEnemy * this_ptr, float delta_time)
    ADD ESP,0x8                         ; 005f09fa
    TEST EAX,EAX                        ; 005f09fd
    JNZ 0x005f0010                      ; 005f09ff
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x1                            ; 005f0a05
    PUSH EAX                            ; 005f0a07
    LEA EAX,[EBX + 0x158]               ; 005f0a08
    PUSH EAX                            ; 005f0a0e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0a0f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0a14
    JMP 0x005f0010                      ; 005f0a17
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    MOV ESI,dword ptr [0x03f87418]      ; 005f0a1c | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005f0a1c
    PUSH ESI                            ; 005f0a22
    MOV EDI,dword ptr [EBX + 0xbee8]    ; 005f0a23
    PUSH EDI                            ; 005f0a29
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f0a2a
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005f0a2f
    TEST EAX,EAX                        ; 005f0a32
    JZ 0x005f0a40                       ; 005f0a34
        ;   XREF to: 005f0a40 (CONDITIONAL_JUMP)  ; LAB_005f0a40
    CMP dword ptr [EBP + 0x72],0xf      ; 005f0a36
    JZ 0x005f092a                       ; 005f0a3a
        ;   XREF to: 005f092a (CONDITIONAL_JUMP)  ; LAB_005f092a
    MOV EDX,dword ptr [EBX + 0xbebc]    ; 005f0a40
        ;   Label: LAB_005f0a40
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005f0a46
    CMP EDX,0x2                         ; 005f0a4c
    JNZ 0x005f0b72                      ; 005f0a4f
        ;   XREF to: 005f0b72 (CONDITIONAL_JUMP)  ; LAB_005f0b72
    CMP dword ptr [EBX + 0xbef0],0x0    ; 005f0a55
    JNZ 0x005f0cbf                      ; 005f0a5c
        ;   XREF to: 005f0cbf (CONDITIONAL_JUMP)  ; LAB_005f0cbf
    MOV EAX,0x657ccb                    ; 005f0a62 | = "..\\core\\werewolf.cpp"
        ;   Label: LAB_005f0a62
    MOV EDX,0x1ad                       ; 005f0a67
    PUSH 0x657ce0                       ; 005f0a6c | = "Alpha werewolf requires 2 waypoints"
    MOV [0x02f0ca48],EAX                ; 005f0a71 | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDX      ; 005f0a76 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 005f0a7c
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 005f0a81
    SUB ESP,0x8                         ; 005f0a84
        ;   Label: LAB_005f0a84
    FLD float ptr [EBX + 0xbefc]        ; 005f0a87
    FSTP double ptr [ESP]               ; 005f0a8d
    MOV ECX,dword ptr [EBX + 0xbef8]    ; 005f0a90
    PUSH ECX                            ; 005f0a96
    PUSH 0x657d04                       ; 005f0a97 | = "Phase: %d, Timer: %f\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005f0a9c | g_CConsolePtr
    PUSH EDI                            ; 005f0aa2 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f0aa3
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    MOV EAX,dword ptr [EBX + 0xbef8]    ; 005f0aa8
    ADD ESP,0x14                        ; 005f0aae
    CMP EAX,0x1                         ; 005f0ab1
    JNZ 0x005f0cd1                      ; 005f0ab4
        ;   XREF to: 005f0cd1 (CONDITIONAL_JUMP)  ; LAB_005f0cd1
    MOV EAX,dword ptr [EBX + 0xbef0]    ; 005f0aba
        ;   Label: LAB_005f0aba
    ADD EAX,0x20                        ; 005f0ac0
    PUSH EAX                            ; 005f0ac3
    LEA EAX,[EBP + -0x6e]               ; 005f0ac4
    PUSH EAX                            ; 005f0ac7
    MOV ECX,dword ptr [EBX + 0xbe3c]    ; 005f0ac8
    PUSH ECX                            ; 005f0ace
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005f0acf
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX + 0x8]           ; 005f0ad4
    FLDZ                                ; 005f0ad7
    ADD ESP,0xc                         ; 005f0ad9
    FCOMPP                              ; 005f0adc
    FNSTSW AX                           ; 005f0ade
    SAHF                                ; 005f0ae0
    JBE 0x005f0cdf                      ; 005f0ae1
        ;   XREF to: 005f0cdf (CONDITIONAL_JUMP)  ; LAB_005f0cdf
    MOV ESI,dword ptr [EBX + 0xbef0]    ; 005f0ae7
        ;   Label: LAB_005f0ae7
    MOV EDI,dword ptr [EBX + 0xbef8]    ; 005f0aed
        ;   Label: LAB_005f0aed
    CMP EDI,0x1                         ; 005f0af3
    JNZ 0x005f0dbe                      ; 005f0af6
        ;   XREF to: 005f0dbe (CONDITIONAL_JUMP)  ; LAB_005f0dbe
    LEA EDI,[ESI + 0x20]                ; 005f0afc
        ;   Label: LAB_005f0afc
    LEA EAX,[EBX + 0x20]                ; 005f0aff
    FLD float ptr [EDI]                 ; 005f0b02
    FSUB float ptr [EAX]                ; 005f0b04
    FSTP float ptr [EBP + 0xffffff56]   ; 005f0b06
    FLD float ptr [EDI + 0x4]           ; 005f0b0c
    FSUB float ptr [EAX + 0x4]          ; 005f0b0f
    FST float ptr [EBP + 0xffffff5a]    ; 005f0b12
    FMUL float ptr [EBP + 0xffffff5a]   ; 005f0b18
    FLD float ptr [EBP + 0xffffff56]    ; 005f0b1e
    FMUL ST0                            ; 005f0b24
    FLD float ptr [EDI + 0x8]           ; 005f0b26
    FSUB float ptr [EAX + 0x8]          ; 005f0b29
    FXCH                                ; 005f0b2c
    FADDP ST2,ST0                       ; 005f0b2e
    FST float ptr [EBP + 0xffffff5e]    ; 005f0b30
    FMUL float ptr [EBP + 0xffffff5e]   ; 005f0b36
    FADDP                               ; 005f0b3c
    FSQRT                               ; 005f0b3e
    FCOMP double ptr [0x00657d64]       ; 005f0b40 | DOUBLE_00657d64
    FNSTSW AX                           ; 005f0b46
    SAHF                                ; 005f0b48
    JNC 0x005f0b72                      ; 005f0b49
        ;   XREF to: 005f0b72 (CONDITIONAL_JUMP)  ; LAB_005f0b72
    MOV EDI,dword ptr [EBX + 0xbef8]    ; 005f0b4b
    INC EDI                             ; 005f0b51
    MOV dword ptr [EBX + 0xbef8],EDI    ; 005f0b52
    CMP EDI,0x3                         ; 005f0b58
    JLE 0x005f0b67                      ; 005f0b5b
        ;   XREF to: 005f0b67 (CONDITIONAL_JUMP)  ; LAB_005f0b67
    MOV dword ptr [EBX + 0xbef8],0x0    ; 005f0b5d
    MOV EAX,[0x00665768]                ; 005f0b67 | FLOAT_00665768
        ;   Label: LAB_005f0b67
    MOV dword ptr [EBX + 0xbefc],EAX    ; 005f0b6c
    MOV EAX,[0x0066575c]                ; 005f0b72 | FLOAT_0066575c
        ;   Label: LAB_005f0b72
    MOV dword ptr [EBP + 0x5a],EAX      ; 005f0b77
    LEA EAX,[EBX + 0x23ac]              ; 005f0b7a
    MOV dword ptr [EAX + 0x8],0x0       ; 005f0b80
    PUSH 0x3e32b8c2                     ; 005f0b87
    MOV EDX,dword ptr [EAX + 0x8]       ; 005f0b8c
    MOV dword ptr [EAX + 0x4],EDX       ; 005f0b8f
    MOV EDX,dword ptr [EAX + 0x4]       ; 005f0b92
    MOV dword ptr [EAX],EDX             ; 005f0b95
    MOV EAX,dword ptr [EBP + 0x5a]      ; 005f0b97
    PUSH 0x3f000000                     ; 005f0b9a
    MOV dword ptr [EBP + 0xfffffeaa],EAX ; 005f0b9f
    LEA EAX,[EBP + 0xfffffea2]          ; 005f0ba5
    XOR EDX,EDX                         ; 005f0bab
    PUSH EAX                            ; 005f0bad
    MOV dword ptr [EBP + 0xfffffea2],EDX ; 005f0bae
    MOV dword ptr [EBP + 0xfffffea6],EDX ; 005f0bb4
    PUSH ESI                            ; 005f0bba
    MOV EAX,dword ptr [ESI + 0x154]     ; 005f0bbb
    CALL dword ptr [EAX + 0xbc]         ; 005f0bc1
    ADD ESP,0x4                         ; 005f0bc7
    PUSH EAX                            ; 005f0bca
    ADD ESI,0x20                        ; 005f0bcb
    PUSH ESI                            ; 005f0bce
    PUSH EBX                            ; 005f0bcf
    CALL core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0 ; 005f0bd0
        ;   XREF to: 004286e0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_walkToPoint_FUN_004286e0(CCharacter * this_ptr, CVector3f * target_pos, CPathMap * path_map, CVector3f * direction, ...)
    ADD ESP,0x18                        ; 005f0bd5
    TEST EAX,EAX                        ; 005f0bd8
    JL 0x005f0dfb                       ; 005f0bda
        ;   XREF to: 005f0dfb (CONDITIONAL_JUMP)  ; LAB_005f0dfb
    JLE 0x005f0e27                      ; 005f0be0
        ;   XREF to: 005f0e27 (CONDITIONAL_JUMP)  ; LAB_005f0e27
    CMP dword ptr [EBX + 0xbebc],0x2    ; 005f0be6
    JNZ 0x005f0c07                      ; 005f0bed
        ;   XREF to: 005f0c07 (CONDITIONAL_JUMP)  ; LAB_005f0c07
    MOV ESI,dword ptr [EBX + 0xbef8]    ; 005f0bef
    CMP ESI,0x1                         ; 005f0bf5
    JZ 0x005f0010                       ; 005f0bf8
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    CMP ESI,0x3                         ; 005f0bfe
    JZ 0x005f0010                       ; 005f0c01
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    FLD float ptr [EBX + 0xbe38]        ; 005f0c07
        ;   Label: LAB_005f0c07
    FLDZ                                ; 005f0c0d
    FCOMPP                              ; 005f0c0f
    FNSTSW AX                           ; 005f0c11
    SAHF                                ; 005f0c13
    JC 0x005f0c92                       ; 005f0c14
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    PUSH 0x2                            ; 005f0c1a
    PUSH 0x0                            ; 005f0c1c
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005f0c1e
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005f0c23
    MOV ESI,EAX                         ; 005f0c26
    TEST EAX,EAX                        ; 005f0c28
    JNZ 0x005f0c3f                      ; 005f0c2a
        ;   XREF to: 005f0c3f (CONDITIONAL_JUMP)  ; LAB_005f0c3f
    PUSH 0x1                            ; 005f0c2c
    PUSH 0x2                            ; 005f0c2e
    LEA EAX,[EBX + 0x158]               ; 005f0c30
    PUSH EAX                            ; 005f0c36
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0c37
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0c3c
    CMP ESI,0x1                         ; 005f0c3f
        ;   Label: LAB_005f0c3f
    JNZ 0x005f0c56                      ; 005f0c42
        ;   XREF to: 005f0c56 (CONDITIONAL_JUMP)  ; LAB_005f0c56
    PUSH ESI                            ; 005f0c44
    PUSH 0x3                            ; 005f0c45
    LEA EAX,[EBX + 0x158]               ; 005f0c47
    PUSH EAX                            ; 005f0c4d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0c4e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0c53
    CMP ESI,0x2                         ; 005f0c56
        ;   Label: LAB_005f0c56
    JNZ 0x005f0c6e                      ; 005f0c59
        ;   XREF to: 005f0c6e (CONDITIONAL_JUMP)  ; LAB_005f0c6e
    PUSH 0x1                            ; 005f0c5b
    PUSH 0x4                            ; 005f0c5d
    LEA EAX,[EBX + 0x158]               ; 005f0c5f
    PUSH EAX                            ; 005f0c65
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0c66
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0c6b
    PUSH 0x3f19999a                     ; 005f0c6e
        ;   Label: LAB_005f0c6e
    MOV dword ptr [EBX + 0xbe38],0x3f800000 ; 005f0c73
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005f0c7d
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005f0c82
    TEST EAX,EAX                        ; 005f0c85
    JZ 0x005f0c92                       ; 005f0c87
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    PUSH EBX                            ; 005f0c89
    CALL core_werewolf.cpp_CWerewolf_FUN_005f11e0 ; 005f0c8a
        ;   XREF to: 005f11e0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f11e0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005f0c8f
    FLD float ptr [EBX + 0xbedc]        ; 005f0c92
        ;   Label: LAB_005f0c92
    FSUB float ptr [EBP + 0x92]         ; 005f0c98
    FST float ptr [EBX + 0xbedc]        ; 005f0c9e
    FLDZ                                ; 005f0ca4
    FCOMPP                              ; 005f0ca6
    FNSTSW AX                           ; 005f0ca8
    SAHF                                ; 005f0caa
    JBE 0x005f0010                      ; 005f0cab
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH EBX                            ; 005f0cb1
    CALL core_werewolf.cpp_CWerewolf_FUN_005f11e0 ; 005f0cb2
        ;   XREF to: 005f11e0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f11e0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005f0cb7
    JMP 0x005f0010                      ; 005f0cba
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    CMP dword ptr [EBX + 0xbef4],0x0    ; 005f0cbf
        ;   Label: LAB_005f0cbf
    JZ 0x005f0a62                       ; 005f0cc6
        ;   XREF to: 005f0a62 (CONDITIONAL_JUMP)  ; LAB_005f0a62
    JMP 0x005f0a84                      ; 005f0ccc
        ;   XREF to: 005f0a84 (UNCONDITIONAL_JUMP)  ; LAB_005f0a84
    CMP EAX,0x3                         ; 005f0cd1
        ;   Label: LAB_005f0cd1
    JZ 0x005f0aba                       ; 005f0cd4
        ;   XREF to: 005f0aba (CONDITIONAL_JUMP)  ; LAB_005f0aba
    JMP 0x005f0aed                      ; 005f0cda
        ;   XREF to: 005f0aed (UNCONDITIONAL_JUMP)  ; LAB_005f0aed
    MOV EAX,dword ptr [EBX + 0xbef4]    ; 005f0cdf
        ;   Label: LAB_005f0cdf
    ADD EAX,0x20                        ; 005f0ce5
    PUSH EAX                            ; 005f0ce8
    LEA EAX,[EBP + 0xffffff62]          ; 005f0ce9
    PUSH EAX                            ; 005f0cef
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005f0cf0
    PUSH ESI                            ; 005f0cf6
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10 ; 005f0cf7
        ;   XREF to: 00408f10 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_00408f10(CDemonActor * this_ptr, CVector3f * output_local_point, CVector3f * input_world_point)
    FLD float ptr [EAX + 0x8]           ; 005f0cfc
    FLDZ                                ; 005f0cff
    ADD ESP,0xc                         ; 005f0d01
    FCOMPP                              ; 005f0d04
    FNSTSW AX                           ; 005f0d06
    SAHF                                ; 005f0d08
    JBE 0x005f0d16                      ; 005f0d09
        ;   XREF to: 005f0d16 (CONDITIONAL_JUMP)  ; LAB_005f0d16
    MOV ESI,dword ptr [EBX + 0xbef4]    ; 005f0d0b
    JMP 0x005f0aed                      ; 005f0d11
        ;   XREF to: 005f0aed (UNCONDITIONAL_JUMP)  ; LAB_005f0aed
    MOV EAX,dword ptr [EBX + 0xbe3c]    ; 005f0d16
        ;   Label: LAB_005f0d16
    MOV ESI,dword ptr [EBX + 0xbef0]    ; 005f0d1c
    FLD float ptr [EAX + 0x20]          ; 005f0d22
    FSUB float ptr [ESI + 0x20]         ; 005f0d25
    FSTP float ptr [EBP + 0xfffffeae]   ; 005f0d28
    FLD float ptr [EAX + 0x24]          ; 005f0d2e
    FSUB float ptr [ESI + 0x24]         ; 005f0d31
    FST float ptr [EBP + 0xfffffeb2]    ; 005f0d34
    FMUL float ptr [EBP + 0xfffffeb2]   ; 005f0d3a
    FLD float ptr [EBP + 0xfffffeae]    ; 005f0d40
    FMUL ST0                            ; 005f0d46
    FLD float ptr [EAX + 0x28]          ; 005f0d48
    FSUB float ptr [ESI + 0x28]         ; 005f0d4b
    FXCH                                ; 005f0d4e
    FADDP ST2,ST0                       ; 005f0d50
    FST float ptr [EBP + 0xfffffeb6]    ; 005f0d52
    FMUL float ptr [EBP + 0xfffffeb6]   ; 005f0d58
    FADDP                               ; 005f0d5e
    FSQRT                               ; 005f0d60
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005f0d62
    MOV EAX,dword ptr [EBX + 0xbef4]    ; 005f0d68
    FLD float ptr [ESI + 0x20]          ; 005f0d6e
    FSUB float ptr [EAX + 0x20]         ; 005f0d71
    FSTP float ptr [EBP + 0xffffff7a]   ; 005f0d74
    FLD float ptr [ESI + 0x24]          ; 005f0d7a
    FSUB float ptr [EAX + 0x24]         ; 005f0d7d
    FST float ptr [EBP + 0xffffff7e]    ; 005f0d80
    FMUL float ptr [EBP + 0xffffff7e]   ; 005f0d86
    FLD float ptr [EBP + 0xffffff7a]    ; 005f0d8c
    FMUL ST0                            ; 005f0d92
    FLD float ptr [ESI + 0x28]          ; 005f0d94
    FSUB float ptr [EAX + 0x28]         ; 005f0d97
    FXCH                                ; 005f0d9a
    FADDP ST2,ST0                       ; 005f0d9c
    FST float ptr [EBP + -0x7e]         ; 005f0d9e
    FMUL float ptr [EBP + -0x7e]        ; 005f0da1
    FADDP                               ; 005f0da4
    FSQRT                               ; 005f0da6
    FCOMPP                              ; 005f0da8
    FNSTSW AX                           ; 005f0daa
    SAHF                                ; 005f0dac
    JC 0x005f0ae7                       ; 005f0dad
        ;   XREF to: 005f0ae7 (CONDITIONAL_JUMP)  ; LAB_005f0ae7
    MOV ESI,dword ptr [EBX + 0xbef4]    ; 005f0db3
    JMP 0x005f0aed                      ; 005f0db9
        ;   XREF to: 005f0aed (UNCONDITIONAL_JUMP)  ; LAB_005f0aed
    CMP EDI,0x3                         ; 005f0dbe
        ;   Label: LAB_005f0dbe
    JZ 0x005f0afc                       ; 005f0dc1
        ;   XREF to: 005f0afc (CONDITIONAL_JUMP)  ; LAB_005f0afc
    FLD float ptr [EBX + 0xbefc]        ; 005f0dc7
    FLDZ                                ; 005f0dcd
    FCOMPP                              ; 005f0dcf
    FNSTSW AX                           ; 005f0dd1
    SAHF                                ; 005f0dd3
    JC 0x005f0b72                       ; 005f0dd4
        ;   XREF to: 005f0b72 (CONDITIONAL_JUMP)  ; LAB_005f0b72
    LEA EDX,[EDI + 0x1]                 ; 005f0dda
    MOV dword ptr [EBX + 0xbef8],EDX    ; 005f0ddd
    CMP EDX,0x3                         ; 005f0de3
    JLE 0x005f0b72                      ; 005f0de6
        ;   XREF to: 005f0b72 (CONDITIONAL_JUMP)  ; LAB_005f0b72
    MOV dword ptr [EBX + 0xbef8],0x0    ; 005f0dec
    JMP 0x005f0b72                      ; 005f0df6
        ;   XREF to: 005f0b72 (UNCONDITIONAL_JUMP)  ; LAB_005f0b72
    PUSH EBX                            ; 005f0dfb
        ;   Label: LAB_005f0dfb
    PUSH 0x657d1a                       ; 005f0dfc | = "%s gave up chase - I'm confused\n"
    MOV EAX,[0x0066e8e0]                ; 005f0e01 | g_CConsolePtr
    PUSH EAX                            ; 005f0e06 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005f0e07
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0xc                         ; 005f0e0c
    PUSH 0x1                            ; 005f0e0f
    PUSH 0x0                            ; 005f0e11
    LEA EAX,[EBX + 0x158]               ; 005f0e13
    PUSH EAX                            ; 005f0e19
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0e1a
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0e1f
    JMP 0x005f0c92                      ; 005f0e22
        ;   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)  ; LAB_005f0c92
    MOV EDI,dword ptr [0x03f87418]      ; 005f0e27 | g_CTrapClassInfo.name_hash
        ;   Label: LAB_005f0e27
    PUSH EDI                            ; 005f0e2d
    MOV EAX,dword ptr [EBX + 0xbee8]    ; 005f0e2e
    PUSH EAX                            ; 005f0e34
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f0e35
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005f0e3a
    TEST EAX,EAX                        ; 005f0e3d
    JNZ 0x005f0c92                      ; 005f0e3f
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    LEA EAX,[EBX + 0x20]                ; 005f0e45
    FLD float ptr [ESI]                 ; 005f0e48
    FSUB float ptr [EAX]                ; 005f0e4a
    FSTP float ptr [EBP + 0xfffffef6]   ; 005f0e4c
    FLD float ptr [ESI + 0x4]           ; 005f0e52
    FSUB float ptr [EAX + 0x4]          ; 005f0e55
    LEA EDX,[EBP + -0x32]               ; 005f0e58
    FSTP float ptr [EBP + 0xfffffefa]   ; 005f0e5b
    FLD float ptr [ESI + 0x8]           ; 005f0e61
    FSUB float ptr [EAX + 0x8]          ; 005f0e64
    LEA EAX,[EBP + 0xfffffef6]          ; 005f0e67
    FSTP float ptr [EBP + 0xfffffefe]   ; 005f0e6d
    CMP EDX,EAX                         ; 005f0e73
    JZ 0x005f0e92                       ; 005f0e75
        ;   XREF to: 005f0e92 (CONDITIONAL_JUMP)  ; LAB_005f0e92
    MOV EAX,dword ptr [EBP + 0xfffffef6] ; 005f0e77
    MOV dword ptr [EBP + -0x32],EAX     ; 005f0e7d
    MOV EAX,dword ptr [EBP + 0xfffffefa] ; 005f0e80
    MOV dword ptr [EBP + -0x2e],EAX     ; 005f0e86
    MOV EAX,dword ptr [EBP + 0xfffffefe] ; 005f0e89
    MOV dword ptr [EBP + -0x2a],EAX     ; 005f0e8f
    FLD float ptr [EBP + -0x2e]         ; 005f0e92
        ;   Label: LAB_005f0e92
    FMUL ST0                            ; 005f0e95
    FLD float ptr [EBP + -0x32]         ; 005f0e97
    FMUL ST0                            ; 005f0e9a
    FADDP                               ; 005f0e9c
    FLD float ptr [EBP + -0x2a]         ; 005f0e9e
    FMUL ST0                            ; 005f0ea1
    FADDP                               ; 005f0ea3
    FSQRT                               ; 005f0ea5
    MOV EDX,0x41a00000                  ; 005f0ea7
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 005f0eac
    MOV dword ptr [EBP + 0x6e],EDX      ; 005f0eb2
    FSTP float ptr [EBP + 0x62]         ; 005f0eb5
    CMP ECX,0x1                         ; 005f0eb8
    JNZ 0x005f0ec4                      ; 005f0ebb
        ;   XREF to: 005f0ec4 (CONDITIONAL_JUMP)  ; LAB_005f0ec4
    MOV dword ptr [EBP + 0x6e],0x41200000 ; 005f0ebd
    CMP dword ptr [EBX + 0xbebc],0x2    ; 005f0ec4
        ;   Label: LAB_005f0ec4
    JNZ 0x005f0ed4                      ; 005f0ecb
        ;   XREF to: 005f0ed4 (CONDITIONAL_JUMP)  ; LAB_005f0ed4
    MOV dword ptr [EBP + 0x6e],0x41200000 ; 005f0ecd
    FLD float ptr [EBP + 0x62]          ; 005f0ed4
        ;   Label: LAB_005f0ed4
    LEA ESI,[EBX + 0x158]               ; 005f0ed7
    FCOMP float ptr [EBP + 0x6e]        ; 005f0edd
    FNSTSW AX                           ; 005f0ee0
    SAHF                                ; 005f0ee2
    JA 0x005f0f19                       ; 005f0ee3
        ;   XREF to: 005f0f19 (CONDITIONAL_JUMP)  ; LAB_005f0f19
    FLD float ptr [0x0066575c]          ; 005f0ee5 | FLOAT_0066575c
    FMUL float ptr [0x00657d6c]         ; 005f0eeb | FLOAT_00657d6c
    FCOMP float ptr [EBP + 0x62]        ; 005f0ef1
    FNSTSW AX                           ; 005f0ef4
    SAHF                                ; 005f0ef6
    JBE 0x005f0c92                      ; 005f0ef7
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    CMP dword ptr [EBP + 0x72],0xf      ; 005f0efd
    JNZ 0x005f0c92                      ; 005f0f01
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    PUSH 0x1                            ; 005f0f07
    PUSH 0x0                            ; 005f0f09
    PUSH ESI                            ; 005f0f0b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0f0c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0f11
    JMP 0x005f0c92                      ; 005f0f14
        ;   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)  ; LAB_005f0c92
    LEA EAX,[EBP + -0x32]               ; 005f0f19
        ;   Label: LAB_005f0f19
    PUSH EAX                            ; 005f0f1c
    LEA EAX,[EBP + 0xffffff1a]          ; 005f0f1d
    PUSH EAX                            ; 005f0f23
    CALL core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830 ; 005f0f24
        ;   XREF to: 005e7830 (UNCONDITIONAL_CALL)  ; CVector3f * core_vehicle.cpp_convertDirectionVectorToEulerAngles_FUN_005e7830(CVector3f * out_euler_angles, CVector3f * in_direction_vector)
    FLD float ptr [EBP + 0xffffff1e]    ; 005f0f29
    ADD ESP,0x8                         ; 005f0f2f
    FSUB float ptr [EBX + 0x34]         ; 005f0f32
    SUB ESP,0x4                         ; 005f0f35
    FSTP float ptr [ESP]                ; 005f0f38
    CALL core_actor.cpp_normalizeAngleToPi_FUN_0040cd70 ; 005f0f3b
        ;   XREF to: 0040cd70 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_normalizeAngleToPi_FUN_0040cd70(float angle_radians)
    MOV dword ptr [EBP + 0x76],EAX      ; 005f0f40
    FLD float ptr [EBP + 0x76]          ; 005f0f43
    FABS                                ; 005f0f46
    ADD ESP,0x4                         ; 005f0f48
    FCOMP double ptr [0x00657d74]       ; 005f0f4b | DOUBLE_00657d74
    FNSTSW AX                           ; 005f0f51
    SAHF                                ; 005f0f53
    JNC 0x005f0c92                      ; 005f0f54
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    PUSH 0x1                            ; 005f0f5a
    PUSH 0x8                            ; 005f0f5c
    PUSH ESI                            ; 005f0f5e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f0f5f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f0f64
    PUSH 0x3f59999a                     ; 005f0f67
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005f0f6c
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005f0f71
    TEST EAX,EAX                        ; 005f0f74
    JNZ 0x005f0fae                      ; 005f0f76
        ;   XREF to: 005f0fae (CONDITIONAL_JUMP)  ; LAB_005f0fae
    XOR ESI,ESI                         ; 005f0f78
        ;   Label: LAB_005f0f78
    XOR EDI,EDI                         ; 005f0f7a
    MOV EAX,[0x006810c8]                ; 005f0f7c | g_CDemonSetPtr | g_CDemonSetInstance
        ;   Label: LAB_005f0f7c
    CMP EDI,dword ptr [EAX + 0x150fdc]  ; 005f0f81 | g_CDemonSetInstance.enemy_count
    JGE 0x005f0c92                      ; 005f0f87
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    MOV ECX,dword ptr [0x03f96b94]      ; 005f0f8d | g_CWerewolfClassInfo.name_hash
    PUSH ECX                            ; 005f0f93
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x150fe0] ; 005f0f94 | DAT_03265258 | DAT_0326525c
    PUSH EDX                            ; 005f0f9b
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005f0f9c
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005f0fa1
    TEST EAX,EAX                        ; 005f0fa4
    JNZ 0x005f0fb9                      ; 005f0fa6
        ;   XREF to: 005f0fb9 (CONDITIONAL_JUMP)  ; LAB_005f0fb9
    INC EDI                             ; 005f0fa8
        ;   Label: LAB_005f0fa8
    ADD ESI,0x4                         ; 005f0fa9
    JMP 0x005f0f7c                      ; 005f0fac
        ;   XREF to: 005f0f7c (UNCONDITIONAL_JUMP)  ; LAB_005f0f7c
    PUSH EBX                            ; 005f0fae
        ;   Label: LAB_005f0fae
    CALL core_werewolf.cpp_CWerewolf_FUN_005f11e0 ; 005f0faf
        ;   XREF to: 005f11e0 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_FUN_005f11e0(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 005f0fb4
    JMP 0x005f0f78                      ; 005f0fb7
        ;   XREF to: 005f0f78 (UNCONDITIONAL_JUMP)  ; LAB_005f0f78
    CMP EAX,EBX                         ; 005f0fb9
        ;   Label: LAB_005f0fb9
    JZ 0x005f0fa8                       ; 005f0fbb
        ;   XREF to: 005f0fa8 (CONDITIONAL_JUMP)  ; LAB_005f0fa8
    ADD EAX,0x158                       ; 005f0fbd
    PUSH EAX                            ; 005f0fc2
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005f0fc3
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005f0fc8
    ADD ESP,0x4                         ; 005f0fcb
    CMP EAX,0x8                         ; 005f0fce
    JNZ 0x005f0fa8                      ; 005f0fd1
        ;   XREF to: 005f0fa8 (CONDITIONAL_JUMP)  ; LAB_005f0fa8
    PUSH 0x2                            ; 005f0fd3
    PUSH 0x0                            ; 005f0fd5
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 005f0fd7
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 005f0fdc
    MOV EDX,EAX                         ; 005f0fdf
    CMP EAX,0x1                         ; 005f0fe1
    JNZ 0x005f0ff2                      ; 005f0fe4
        ;   XREF to: 005f0ff2 (CONDITIONAL_JUMP)  ; LAB_005f0ff2
    FLD float ptr [EBX + 0x34]          ; 005f0fe6
    FADD float ptr [0x00657d84]         ; 005f0fe9 | FLOAT_00657d84
    FSTP float ptr [EBX + 0x34]         ; 005f0fef
    CMP EDX,0x2                         ; 005f0ff2
        ;   Label: LAB_005f0ff2
    JNZ 0x005f0c92                      ; 005f0ff5
        ;   XREF to: 005f0c92 (CONDITIONAL_JUMP)  ; LAB_005f0c92
    FLD float ptr [EBX + 0x34]          ; 005f0ffb
    FADD float ptr [0x00657d88]         ; 005f0ffe | FLOAT_00657d88
    FSTP float ptr [EBX + 0x34]         ; 005f1004
    JMP 0x005f0c92                      ; 005f1007
        ;   XREF to: 005f0c92 (UNCONDITIONAL_JUMP)  ; LAB_005f0c92
    LEA EDI,[EBX + 0x158]               ; 005f100c
        ;   Label: LAB_005f100c
    JBE 0x005f0704                      ; 005f1012
        ;   XREF to: 005f0704 (CONDITIONAL_JUMP)  ; LAB_005f0704
    CMP EDX,0xe                         ; 005f1018
    JNC 0x005f103a                      ; 005f101b
        ;   XREF to: 005f103a (CONDITIONAL_JUMP)  ; LAB_005f103a
    CMP EDX,0x8                         ; 005f101d
    JC 0x005f0010                       ; 005f1020
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    JBE 0x005f04bc                      ; 005f1026
        ;   XREF to: 005f04bc (CONDITIONAL_JUMP)  ; LAB_005f04bc
    CMP EDX,0xd                         ; 005f102c
    JZ 0x005f07c7                       ; 005f102f
        ;   XREF to: 005f07c7 (CONDITIONAL_JUMP)  ; LAB_005f07c7
    JMP 0x005f0010                      ; 005f1035
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    JBE 0x005f0481                      ; 005f103a
        ;   XREF to: 005f0481 (CONDITIONAL_JUMP)  ; LAB_005f0481
        ;   Label: LAB_005f103a
    CMP EDX,0xf                         ; 005f1040
    JBE 0x005f094d                      ; 005f1043
        ;   XREF to: 005f094d (CONDITIONAL_JUMP)  ; LAB_005f094d
    CMP EDX,0x13                        ; 005f1049
    JZ 0x005efff8                       ; 005f104c
        ;   XREF to: 005efff8 (CONDITIONAL_JUMP)  ; LAB_005efff8
    JMP 0x005f0010                      ; 005f1052
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    JBE 0x005f094d                      ; 005f1057
        ;   XREF to: 005f094d (CONDITIONAL_JUMP)  ; LAB_005f094d
        ;   Label: LAB_005f1057
    CMP EDX,0x2                         ; 005f105d
    JBE 0x005f04ff                      ; 005f1060
        ;   XREF to: 005f04ff (CONDITIONAL_JUMP)  ; LAB_005f04ff
    MOV ECX,dword ptr [EAX + 0x2db87c0] ; 005f1066 | g_HeroActors
    CMP ECX,dword ptr [EBX + 0xbe3c]    ; 005f106c
    JZ 0x005f10fe                       ; 005f1072
        ;   XREF to: 005f10fe (CONDITIONAL_JUMP)  ; LAB_005f10fe
    LEA EAX,[EBP + 0xfffffd6a]          ; 005f1078
    PUSH EAX                            ; 005f107e
    CALL core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0 ; 005f107f
        ;   XREF to: 00427db0 (UNCONDITIONAL_CALL)  ; SDamageInfo * core_charactr.cpp_SDamageInfo_ctor_FUN_00427db0(SDamageInfo * this_ptr)
    ADD ESP,0x4                         ; 005f1084
    PUSH 0x41700000                     ; 005f1087
    PUSH 0x40e00000                     ; 005f108c
    CALL core_actor.cpp_getRandomFloat_FUN_0040cc10 ; 005f1091
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloat_FUN_0040cc10(float min_value, float max_value)
    MOV ESI,dword ptr [EBX + 0xbe3c]    ; 005f10fe
        ;   Label: LAB_005f10fe
    TEST ESI,ESI                        ; 005f1104
    JZ 0x005f0010                       ; 005f1106
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH ESI                            ; 005f110c
    MOV EDX,dword ptr [ESI + 0x154]     ; 005f110d
    CALL dword ptr [EDX + 0x120]        ; 005f1113
    ADD ESP,0x4                         ; 005f1119
    TEST EAX,EAX                        ; 005f111c
    JZ 0x005f0010                       ; 005f111e
        ;   XREF to: 005f0010 (CONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x1                            ; 005f1124
    PUSH 0x7                            ; 005f1126
    LEA EAX,[EBX + 0x158]               ; 005f1128
    PUSH EAX                            ; 005f112e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005f112f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005f1134
    JMP 0x005f0010                      ; 005f1137
        ;   XREF to: 005f0010 (UNCONDITIONAL_JUMP)  ; LAB_005f0010
    PUSH 0x657d3b                       ; 005f113c | = "werewolf-eat.wav"
        ;   Label: LAB_005f113c
    MOV EAX,dword ptr [EBX + 0x154]     ; 005f1141
    PUSH EBX                            ; 005f1147
    CALL dword ptr [EAX + 0x24]         ; 005f1148
    ADD ESP,0x8                         ; 005f114b
    MOV dword ptr [EBX + 0xbee4],EAX    ; 005f114e
    JMP 0x005f003e                      ; 005f1154
        ;   XREF to: 005f003e (UNCONDITIONAL_JUMP)  ; LAB_005f003e
    MOV EDI,dword ptr [EBX + 0xbee4]    ; 005f1159
        ;   Label: LAB_005f1159
    PUSH EDI                            ; 005f115f
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005f1160
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 005f1165
    JMP 0x005f003e                      ; 005f1168
        ;   XREF to: 005f003e (UNCONDITIONAL_JUMP)  ; LAB_005f003e
    CMP EDI,0xf                         ; 005f116d
        ;   Label: LAB_005f116d
    JZ 0x005f0063                       ; 005f1170
        ;   XREF to: 005f0063 (CONDITIONAL_JUMP)  ; LAB_005f0063
    FLD float ptr [EBP + 0x6a]          ; 005f1176
    FMUL double ptr [0x00657d8c]        ; 005f1179 | DOUBLE_00657d8c
    JMP 0x005f006c                      ; 005f117f
        ;   XREF to: 005f006c (UNCONDITIONAL_JUMP)  ; LAB_005f006c
    CMP dword ptr [EBX + 0xdc],0x0      ; 005f1184
        ;   Label: LAB_005f1184
    JNZ 0x005f00c8                      ; 005f118b
        ;   XREF to: 005f00c8 (CONDITIONAL_JUMP)  ; LAB_005f00c8
    JMP 0x005f01c0                      ; 005f1191
        ;   XREF to: 005f01c0 (UNCONDITIONAL_JUMP)  ; LAB_005f01c0

