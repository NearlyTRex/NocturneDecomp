; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_batcreat_cpp_CBatCreature_processDamage_FUN_00413040(CBatCreature *param_1,SDamageInfo *param_2)
;
; Local Variables:
; undefined        Stack[-0x3c]:1  local_3c
; undefined        Stack[-0x30]:1  local_30
; undefined        Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_batman_die_wav_00578a67
;   TerminatedCString s_batman_hurt_wav_00578a76
;   double DOUBLE_00578a87 = 2
;   CFireEffect* g_CFireEffect_PTR_005b80f0 = 01c08d04
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240
;   core_actor.cpp_getRandomInt_FUN_0040de00
;   core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0
;   core_charactr.cpp_FUN_00427730
;   core_enemy.cpp_CEnemy_processDamage_FUN_00479f70
;   core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380
;   sound_sndmain.cpp_isSfxPlaying_FUN_00526c50
;   sound_sndmain.cpp_killSfx_FUN_00527230
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00413040
        ;   Label: core_batcreat.cpp_CBatCreature_processDamage_FUN_00413040
    PUSH ESI                            ; 00413041
    PUSH EDI                            ; 00413042
    PUSH EBP                            ; 00413043
    SUB ESP,0x2c                        ; 00413044
    MOV ESI,dword ptr [ESP + 0x40]      ; 00413047
    MOV EDI,dword ptr [ESP + 0x44]      ; 0041304b
    MOV EDX,dword ptr [ESI + 0xbd64]    ; 0041304f
    PUSH EDX                            ; 00413055
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00413056
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 0041305b
    MOV ECX,dword ptr [ESI + 0xbd5c]    ; 0041305e
    PUSH ECX                            ; 00413064
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 00413065
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    MOV EBX,dword ptr [EDI + 0x28]      ; 0041306a
    ADD ESP,0x4                         ; 0041306d
    CMP EBX,0x7                         ; 00413070
    JZ 0x00413167                       ; 00413073
        ;   XREF to: 00413167 (CONDITIONAL_JUMP)  ; LAB_00413167
    LEA EAX,[EAX]                       ; 00413079
    NOP                                 ; 0041307f
    CMP dword ptr [EDI + 0x30],0x6c     ; 00413080
        ;   Label: LAB_00413080
    JNZ 0x004130c4                      ; 00413084
        ;   XREF to: 004130c4 (CONDITIONAL_JUMP)  ; LAB_004130c4
    PUSH 0x0                            ; 00413086
    LEA EAX,[ESP + 0x4]                 ; 00413088
    PUSH EAX                            ; 0041308c
    LEA EAX,[ESI + 0x150]               ; 0041308d
    PUSH EAX                            ; 00413093
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380 ; 00413094
        ;   XREF to: 0051d380 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0051d380(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00413099
    PUSH EAX                            ; 0041309c
    LEA EAX,[ESP + 0x1c]                ; 0041309d
    PUSH EAX                            ; 004130a1
    PUSH ESI                            ; 004130a2
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 004130a3
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004130a8
    PUSH 0x0                            ; 004130ab
    PUSH 0x41200000                     ; 004130ad
    PUSH 0x0                            ; 004130b2
    PUSH 0x0                            ; 004130b4
    LEA EAX,[ESP + 0x28]                ; 004130b6
    PUSH EAX                            ; 004130ba
    PUSH ESI                            ; 004130bb
    CALL core_charactr.cpp_FUN_00427730 ; 004130bc
        ;   XREF to: 00427730 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_FUN_00427730(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 004130c1
    PUSH EDI                            ; 004130c4
        ;   Label: LAB_004130c4
    PUSH ESI                            ; 004130c5
    CALL core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0 ; 004130c6
        ;   XREF to: 00412de0 (UNCONDITIONAL_CALL)  ; void core_batcreat.cpp_CBatCreature_processDismemberment_FUN_00412de0(CBatCreature * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [EDI + 0x4]           ; 004130cb
    ADD ESP,0x8                         ; 004130ce
    FSUBR float ptr [ESI + 0x2434]      ; 004130d1
    LEA EBX,[ESI + 0x150]               ; 004130d7
    FST float ptr [ESI + 0x2434]        ; 004130dd
    FLDZ                                ; 004130e3
    FCOMPP                              ; 004130e5
    FNSTSW AX                           ; 004130e7
    SAHF                                ; 004130e9
    JNC 0x004131b9                      ; 004130ea
        ;   XREF to: 004131b9 (CONDITIONAL_JUMP)  ; LAB_004131b9
    PUSH 0x2                            ; 004130f0
    PUSH 0x0                            ; 004130f2
    CALL core_actor.cpp_getRandomInt_FUN_0040de00 ; 004130f4
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040de00(int min_value, int max_value)
    ADD ESP,0x8                         ; 004130f9
    MOV EBP,EAX                         ; 004130fc
    TEST EAX,EAX                        ; 004130fe
    JNZ 0x0041310f                      ; 00413100
        ;   XREF to: 0041310f (CONDITIONAL_JUMP)  ; LAB_0041310f
    PUSH 0x1                            ; 00413102
    PUSH 0x4                            ; 00413104
    PUSH EBX                            ; 00413106
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413107
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041310c
    CMP EBP,0x1                         ; 0041310f
        ;   Label: LAB_0041310f
    JNZ 0x00413126                      ; 00413112
        ;   XREF to: 00413126 (CONDITIONAL_JUMP)  ; LAB_00413126
    PUSH EBP                            ; 00413114
    PUSH 0x5                            ; 00413115
    LEA EAX,[ESI + 0x150]               ; 00413117
    PUSH EAX                            ; 0041311d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 0041311e
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00413123
    CMP EBP,0x2                         ; 00413126
        ;   Label: LAB_00413126
    JNZ 0x0041313e                      ; 00413129
        ;   XREF to: 0041313e (CONDITIONAL_JUMP)  ; LAB_0041313e
    PUSH 0x1                            ; 0041312b
    PUSH 0x6                            ; 0041312d
    LEA EAX,[ESI + 0x150]               ; 0041312f
    PUSH EAX                            ; 00413135
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 00413136
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0041313b
    MOV ECX,dword ptr [ESI + 0xbd60]    ; 0041313e
        ;   Label: LAB_0041313e
    PUSH ECX                            ; 00413144
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00526c50 ; 00413145
        ;   XREF to: 00526c50 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00526c50(uint sfx_handle)
    ADD ESP,0x4                         ; 0041314a
    TEST EAX,EAX                        ; 0041314d
    JZ 0x00413223                       ; 0041314f
        ;   XREF to: 00413223 (CONDITIONAL_JUMP)  ; LAB_00413223
    PUSH EDI                            ; 00413155
        ;   Label: LAB_00413155
    PUSH ESI                            ; 00413156
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00413157
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0041315c
    ADD ESP,0x2c                        ; 0041315f
    POP EBP                             ; 00413162
    POP EDI                             ; 00413163
    POP ESI                             ; 00413164
    POP EBX                             ; 00413165
    RET                                 ; 00413166
    FLD float ptr [EDI + 0x4]           ; 00413167
        ;   Label: LAB_00413167
    LEA EAX,[EDI + 0x1c]                ; 0041316a
    FLD ST0                             ; 0041316d
    FMUL double ptr [0x00578a87]        ; 0041316f | DOUBLE_00578a87
    PUSH EAX                            ; 00413175
    LEA EAX,[ESP + 0x10]                ; 00413176
    XOR EBX,EBX                         ; 0041317a
    PUSH EAX                            ; 0041317c
    FSTP ST1                            ; 0041317d
    PUSH ESI                            ; 0041317f
    FSTP float ptr [EDI + 0x4]          ; 00413180
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240 ; 00413183
        ;   XREF to: 0040a240 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_0040a240(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00413188
    MOV EBP,0x4000                      ; 0041318b
    PUSH 0xffff                         ; 00413190
        ;   Label: LAB_00413190
    PUSH 0x0                            ; 00413195
    PUSH EBP                            ; 00413197
    PUSH EBP                            ; 00413198
    PUSH 0x0                            ; 00413199
    LEA EAX,[ESP + 0x20]                ; 0041319b
    PUSH EAX                            ; 0041319f
    MOV EAX,[0x005b80f0]                ; 004131a0 | g_CFireEffect_PTR_005b80f0
    PUSH EAX                            ; 004131a5
    INC EBX                             ; 004131a6
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90 ; 004131a7
        ;   XREF to: 0048ae90 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0048ae90(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004131ac
    CMP EBX,0x5                         ; 004131af
    JL 0x00413190                       ; 004131b2
        ;   XREF to: 00413190 (CONDITIONAL_JUMP)  ; LAB_00413190
    JMP 0x00413080                      ; 004131b4
        ;   XREF to: 00413080 (UNCONDITIONAL_JUMP)  ; LAB_00413080
    PUSH EBX                            ; 004131b9
        ;   Label: LAB_004131b9
    MOV dword ptr [ESI + 0x2434],0x0    ; 004131ba
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660 ; 004131c4
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004e1660(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004131c9
    ADD ESP,0x4                         ; 004131cc
    CMP EAX,0x7                         ; 004131cf
    JZ 0x00413155                       ; 004131d2
        ;   XREF to: 00413155 (CONDITIONAL_JUMP)  ; LAB_00413155
    CMP EAX,0x8                         ; 004131d4
    JZ 0x00413155                       ; 004131d7
        ;   XREF to: 00413155 (CONDITIONAL_JUMP)  ; LAB_00413155
    PUSH 0x1                            ; 004131dd
    PUSH 0x7                            ; 004131df
    PUSH EBX                            ; 004131e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0 ; 004131e2
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004e16b0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004131e7
    MOV EBX,dword ptr [ESI + 0xbd60]    ; 004131ea
    PUSH EBX                            ; 004131f0
    CALL sound_sndmain.cpp_killSfx_FUN_00527230 ; 004131f1
        ;   XREF to: 00527230 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00527230(uint sfx_handle)
    ADD ESP,0x4                         ; 004131f6
    PUSH 0x578a67                       ; 004131f9 | = "batman-die.wav"
    MOV EAX,dword ptr [ESI + 0x14c]     ; 004131fe
    PUSH ESI                            ; 00413204
    CALL dword ptr [EAX + 0x24]         ; 00413205
    ADD ESP,0x8                         ; 00413208
    MOV dword ptr [ESI + 0xbd60],EAX    ; 0041320b
    PUSH EDI                            ; 00413211
    PUSH ESI                            ; 00413212
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 00413213
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00413218
    ADD ESP,0x2c                        ; 0041321b
    POP EBP                             ; 0041321e
    POP EDI                             ; 0041321f
    POP ESI                             ; 00413220
    POP EBX                             ; 00413221
    RET                                 ; 00413222
    PUSH 0x578a76                       ; 00413223 | = "batman-hurt?.wav"
        ;   Label: LAB_00413223
    MOV EAX,dword ptr [ESI + 0x14c]     ; 00413228
    PUSH ESI                            ; 0041322e
    CALL dword ptr [EAX + 0x24]         ; 0041322f
    ADD ESP,0x8                         ; 00413232
    MOV dword ptr [ESI + 0xbd60],EAX    ; 00413235
    PUSH EDI                            ; 0041323b
    PUSH ESI                            ; 0041323c
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00479f70 ; 0041323d
        ;   XREF to: 00479f70 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00479f70(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00413242
    ADD ESP,0x2c                        ; 00413245
    POP EBP                             ; 00413248
    POP EDI                             ; 00413249
    POP ESI                             ; 0041324a
    POP EBX                             ; 0041324b
    RET                                 ; 0041324c

