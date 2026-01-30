; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_dracbrid_cpp_FUN_00486070(void)
;
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_bride_launch_wav_00621bf6
;   TerminatedCString s_bride_die_wav_00621c07
;   TerminatedCString s_bride_hurt_wav_00621c16
;   double DOUBLE_00621c26 = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_FUN_0042b5b0
;   core_dracbrid.cpp_FUN_004864c0
;   core_dracbrid.cpp_ShotThruHeart_FUN_00486020
;   core_enemy.cpp_FUN_004a9f10
;   core_fire.cpp_CFireEffect_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00486070
        ;   Label: core_dracbrid.cpp_FUN_00486070
    PUSH ESI                            ; 00486071
    PUSH EDI                            ; 00486072
    PUSH EBP                            ; 00486073
    SUB ESP,0x2c                        ; 00486074
    MOV ESI,dword ptr [ESP + 0x40]      ; 00486077
    MOV EDI,dword ptr [ESP + 0x44]      ; 0048607b
    MOV EDX,dword ptr [EDI + 0x28]      ; 0048607f
    XOR EBP,EBP                         ; 00486082
    CMP EDX,0x7                         ; 00486084
    JZ 0x00486180                       ; 00486087
        ;   XREF to: 00486180 (CONDITIONAL_JUMP)  ; LAB_00486180
    CMP dword ptr [EDI + 0x30],0x68     ; 0048608d
        ;   Label: LAB_0048608d
    JNZ 0x00486098                      ; 00486091
        ;   XREF to: 00486098 (CONDITIONAL_JUMP)  ; LAB_00486098
    MOV EBP,0x1                         ; 00486093
    CMP dword ptr [EDI + 0x30],0x6c     ; 00486098
        ;   Label: LAB_00486098
    JNZ 0x004860dc                      ; 0048609c
        ;   XREF to: 004860dc (CONDITIONAL_JUMP)  ; LAB_004860dc
    PUSH 0x0                            ; 0048609e
    LEA EAX,[ESP + 0x4]                 ; 004860a0
    PUSH EAX                            ; 004860a4
    LEA EAX,[ESI + 0x158]               ; 004860a5
    PUSH EAX                            ; 004860ab
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 004860ac
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 004860b1
    PUSH EAX                            ; 004860b4
    LEA EAX,[ESP + 0x1c]                ; 004860b5
    PUSH EAX                            ; 004860b9
    PUSH ESI                            ; 004860ba
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004860bb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004860c0
    PUSH 0x0                            ; 004860c3
    PUSH 0x41200000                     ; 004860c5
    PUSH 0x0                            ; 004860ca
    PUSH 0x0                            ; 004860cc
    LEA EAX,[ESP + 0x28]                ; 004860ce
    PUSH EAX                            ; 004860d2
    PUSH ESI                            ; 004860d3
    CALL core_charactr.cpp_CCharacter_FUN_0042b5b0 ; 004860d4
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042b5b0(CCharacter * this_ptr)
    ADD ESP,0x18                        ; 004860d9
    PUSH EDI                            ; 004860dc
        ;   Label: LAB_004860dc
    PUSH ESI                            ; 004860dd
    CALL core_dracbrid.cpp_ShotThruHeart_FUN_00486020 ; 004860de
        ;   XREF to: 00486020 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_ShotThruHeart_FUN_00486020()
    FLD float ptr [EDI + 0x4]           ; 004860e3
    ADD ESP,0x8                         ; 004860e6
    FSUBR float ptr [ESI + 0x243c]      ; 004860e9
    LEA EBX,[ESI + 0x158]               ; 004860ef
    FST float ptr [ESI + 0x243c]        ; 004860f5
    FLDZ                                ; 004860fb
    FCOMPP                              ; 004860fd
    FNSTSW AX                           ; 004860ff
    SAHF                                ; 00486101
    JC 0x00486210                       ; 00486102
        ;   XREF to: 00486210 (CONDITIONAL_JUMP)  ; LAB_00486210
    PUSH EBX                            ; 00486108
    MOV dword ptr [ESI + 0x243c],0x0    ; 00486109
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00486113
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00486118
    ADD ESP,0x4                         ; 0048611b
    CMP EAX,0x11                        ; 0048611e
    JZ 0x00486159                       ; 00486121
        ;   XREF to: 00486159 (CONDITIONAL_JUMP)  ; LAB_00486159
    CMP EAX,0x10                        ; 00486123
    JZ 0x00486159                       ; 00486126
        ;   XREF to: 00486159 (CONDITIONAL_JUMP)  ; LAB_00486159
    CMP EAX,0xa                         ; 00486128
    JZ 0x00486159                       ; 0048612b
        ;   XREF to: 00486159 (CONDITIONAL_JUMP)  ; LAB_00486159
    CMP EAX,0x7                         ; 0048612d
    JZ 0x00486159                       ; 00486130
        ;   XREF to: 00486159 (CONDITIONAL_JUMP)  ; LAB_00486159
    TEST EBP,EBP                        ; 00486132
    JZ 0x004861d9                       ; 00486134
        ;   XREF to: 004861d9 (CONDITIONAL_JUMP)  ; LAB_004861d9
    PUSH 0x1                            ; 0048613a
    PUSH 0x7                            ; 0048613c
    PUSH EBX                            ; 0048613e
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048613f
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00486144
    PUSH 0x621bf6                       ; 00486147 | = "bride-launch.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 0048614c
    PUSH ESI                            ; 00486152
    CALL dword ptr [EAX + 0x28]         ; 00486153
    ADD ESP,0x8                         ; 00486156
    PUSH 0x3ecccccd                     ; 00486159
        ;   Label: LAB_00486159
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0048615e
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00486163
    TEST EAX,EAX                        ; 00486166
    JNZ 0x004861eb                      ; 00486168
        ;   XREF to: 004861eb (CONDITIONAL_JUMP)  ; LAB_004861eb
    PUSH EDI                            ; 0048616e
        ;   Label: LAB_0048616e
    PUSH ESI                            ; 0048616f
    CALL core_enemy.cpp_FUN_004a9f10    ; 00486170
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00486175
    ADD ESP,0x2c                        ; 00486178
    POP EBP                             ; 0048617b
    POP EDI                             ; 0048617c
    POP ESI                             ; 0048617d
    POP EBX                             ; 0048617e
    RET                                 ; 0048617f
    FLD float ptr [EDI + 0x4]           ; 00486180
        ;   Label: LAB_00486180
    LEA EAX,[EDI + 0x1c]                ; 00486183
    FLD ST0                             ; 00486186
    FMUL double ptr [0x00621c26]        ; 00486188 | DOUBLE_00621c26
    PUSH EAX                            ; 0048618e
    LEA EAX,[ESP + 0x10]                ; 0048618f
    XOR EBX,EBX                         ; 00486193
    PUSH EAX                            ; 00486195
    FSTP ST1                            ; 00486196
    PUSH ESI                            ; 00486198
    FSTP float ptr [EDI + 0x4]          ; 00486199
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 0048619c
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004861a1
    PUSH 0xffff                         ; 004861a4
        ;   Label: LAB_004861a4
    PUSH EBP                            ; 004861a9
    PUSH 0x4000                         ; 004861aa
    PUSH 0x4000                         ; 004861af
    PUSH EBP                            ; 004861b4
    LEA EAX,[ESP + 0x20]                ; 004861b5
    PUSH EAX                            ; 004861b9
    MOV ECX,dword ptr [0x0067a3d0]      ; 004861ba | g_CFireEffectPtr | g_CFireEffectInstance
    PUSH ECX                            ; 004861c0 | g_CFireEffectInstance
    INC EBX                             ; 004861c1
    CALL core_fire.cpp_CFireEffect_FUN_004c79d0 ; 004861c2
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_FUN_004c79d0(CFireEffect * this_ptr)
    ADD ESP,0x1c                        ; 004861c7
    CMP EBX,0x5                         ; 004861ca
    JL 0x004861a4                       ; 004861cd
        ;   XREF to: 004861a4 (CONDITIONAL_JUMP)  ; LAB_004861a4
    MOV EBP,0x1                         ; 004861cf
    JMP 0x0048608d                      ; 004861d4
        ;   XREF to: 0048608d (UNCONDITIONAL_JUMP)  ; LAB_0048608d
    PUSH 0x1                            ; 004861d9
        ;   Label: LAB_004861d9
    PUSH 0xa                            ; 004861db
    PUSH EBX                            ; 004861dd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004861de
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004861e3
    JMP 0x00486159                      ; 004861e6
        ;   XREF to: 00486159 (UNCONDITIONAL_JUMP)  ; LAB_00486159
    PUSH 0x40000000                     ; 004861eb
        ;   Label: LAB_004861eb
    PUSH 0x621c07                       ; 004861f0 | = "bride-die?.wav"
    PUSH ESI                            ; 004861f5
    CALL core_dracbrid.cpp_FUN_004864c0 ; 004861f6
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_004864c0()
    ADD ESP,0xc                         ; 004861fb
    PUSH EDI                            ; 004861fe
    PUSH ESI                            ; 004861ff
    CALL core_enemy.cpp_FUN_004a9f10    ; 00486200
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00486205
    ADD ESP,0x2c                        ; 00486208
    POP EBP                             ; 0048620b
    POP EDI                             ; 0048620c
    POP ESI                             ; 0048620d
    POP EBX                             ; 0048620e
    RET                                 ; 0048620f
    PUSH EBX                            ; 00486210
        ;   Label: LAB_00486210
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00486211
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00486216
    ADD ESP,0x4                         ; 00486219
    CMP EAX,0x8                         ; 0048621c
    JNZ 0x0048626e                      ; 0048621f
        ;   XREF to: 0048626e (CONDITIONAL_JUMP)  ; LAB_0048626e
    PUSH 0x1                            ; 00486221
        ;   Label: LAB_00486221
    PUSH 0x1                            ; 00486223
    LEA EAX,[ESI + 0x158]               ; 00486225
        ;   Label: LAB_00486225
    PUSH EAX                            ; 0048622b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048622c
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00486231
    PUSH 0x3ecccccd                     ; 00486234
        ;   Label: LAB_00486234
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 00486239
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 0048623e
    TEST EAX,EAX                        ; 00486241
    JZ 0x0048616e                       ; 00486243
        ;   XREF to: 0048616e (CONDITIONAL_JUMP)  ; LAB_0048616e
    PUSH 0x40000000                     ; 00486249
    PUSH 0x621c16                       ; 0048624e | = "bride-hurt?.wav"
    PUSH ESI                            ; 00486253
    CALL core_dracbrid.cpp_FUN_004864c0 ; 00486254
        ;   XREF to: 004864c0 (UNCONDITIONAL_CALL)  ; void core_dracbrid.cpp_FUN_004864c0()
    ADD ESP,0xc                         ; 00486259
    PUSH EDI                            ; 0048625c
    PUSH ESI                            ; 0048625d
    CALL core_enemy.cpp_FUN_004a9f10    ; 0048625e
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_FUN_004a9f10()
    ADD ESP,0x8                         ; 00486263
    ADD ESP,0x2c                        ; 00486266
    POP EBP                             ; 00486269
    POP EDI                             ; 0048626a
    POP ESI                             ; 0048626b
    POP EBX                             ; 0048626c
    RET                                 ; 0048626d
    CMP EAX,0x9                         ; 0048626e
        ;   Label: LAB_0048626e
    JZ 0x00486221                       ; 00486271
        ;   XREF to: 00486221 (CONDITIONAL_JUMP)  ; LAB_00486221
    CMP EAX,0x2                         ; 00486273
    JZ 0x00486221                       ; 00486276
        ;   XREF to: 00486221 (CONDITIONAL_JUMP)  ; LAB_00486221
    TEST EAX,EAX                        ; 00486278
    JZ 0x00486281                       ; 0048627a
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    CMP EAX,0xe                         ; 0048627c
    JNZ 0x004862cf                      ; 0048627f
        ;   XREF to: 004862cf (CONDITIONAL_JUMP)  ; LAB_004862cf
    PUSH 0x2                            ; 00486281
        ;   Label: LAB_00486281
    PUSH 0x0                            ; 00486283
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00486285
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 0048628a
    MOV EBX,EAX                         ; 0048628d
    TEST EAX,EAX                        ; 0048628f
    JNZ 0x004862a6                      ; 00486291
        ;   XREF to: 004862a6 (CONDITIONAL_JUMP)  ; LAB_004862a6
    PUSH 0x1                            ; 00486293
    PUSH 0x4                            ; 00486295
    LEA EAX,[ESI + 0x158]               ; 00486297
    PUSH EAX                            ; 0048629d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 0048629e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004862a3
    CMP EBX,0x1                         ; 004862a6
        ;   Label: LAB_004862a6
    JNZ 0x004862bd                      ; 004862a9
        ;   XREF to: 004862bd (CONDITIONAL_JUMP)  ; LAB_004862bd
    PUSH EBX                            ; 004862ab
    PUSH 0x5                            ; 004862ac
    LEA EAX,[ESI + 0x158]               ; 004862ae
    PUSH EAX                            ; 004862b4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004862b5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004862ba
    CMP EBX,0x2                         ; 004862bd
        ;   Label: LAB_004862bd
    JNZ 0x00486234                      ; 004862c0
        ;   XREF to: 00486234 (CONDITIONAL_JUMP)  ; LAB_00486234
    PUSH 0x1                            ; 004862c6
    PUSH 0x6                            ; 004862c8
    JMP 0x00486225                      ; 004862ca
        ;   XREF to: 00486225 (UNCONDITIONAL_JUMP)  ; LAB_00486225
    CMP EAX,0x13                        ; 004862cf
        ;   Label: LAB_004862cf
    JZ 0x00486281                       ; 004862d2
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    CMP EAX,0xc                         ; 004862d4
    JZ 0x00486281                       ; 004862d7
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    CMP EAX,0x12                        ; 004862d9
    JZ 0x00486281                       ; 004862dc
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    CMP EAX,0x14                        ; 004862de
    JZ 0x00486281                       ; 004862e1
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    CMP EAX,0x15                        ; 004862e3
    JZ 0x00486281                       ; 004862e6
        ;   XREF to: 00486281 (CONDITIONAL_JUMP)  ; LAB_00486281
    JMP 0x00486234                      ; 004862e8
        ;   XREF to: 00486234 (UNCONDITIONAL_JUMP)  ; LAB_00486234

