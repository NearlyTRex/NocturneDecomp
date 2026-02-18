; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424830(CBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined1       Stack[-0x3c]:1  local_3c
; undefined1       Stack[-0x30]:1  local_30
; undefined1       Stack[-0x24]:1  local_24
;
; Referenced Globals:
;   TerminatedCString s_ub_die_wav_00616c95
;   TerminatedCString s_ub_hurt_wav_00616ca1
;   double DOUBLE_00616cb5 = 2
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_bride.cpp_CBride_FUN_00424600
;   core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424830
        ;   Label: core_bride.cpp_CBride_processDamage_FUN_00424830
    PUSH ESI                            ; 00424831
    PUSH EDI                            ; 00424832
    PUSH EBP                            ; 00424833
    MOV EBP,ESP                         ; 00424834
    SUB ESP,0x2c                        ; 00424836
    MOV ESI,dword ptr [EBP + 0x14]      ; 00424839
    MOV EDI,dword ptr [EBP + 0x18]      ; 0042483c
    MOV EDX,dword ptr [ESI + 0xbee8]    ; 0042483f
    PUSH EDX                            ; 00424845
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00424846
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV ECX,dword ptr [EDI + 0x28]      ; 0042484b
    ADD ESP,0x4                         ; 0042484e
    CMP ECX,0x7                         ; 00424851
    JZ 0x00424966                       ; 00424854
        ;   XREF to: 00424966 (CONDITIONAL_JUMP)  ; LAB_00424966
    LEA EAX,[EAX]                       ; 0042485a
    CMP dword ptr [EDI + 0x30],0x6c     ; 00424860
        ;   Label: LAB_00424860
    JNZ 0x004248a1                      ; 00424864
        ;   XREF to: 004248a1 (CONDITIONAL_JUMP)  ; LAB_004248a1
    PUSH 0x0                            ; 00424866
    LEA EAX,[EBP + -0x14]               ; 00424868
    PUSH EAX                            ; 0042486b
    LEA EAX,[ESI + 0x158]               ; 0042486c
    PUSH EAX                            ; 00424872
    CALL core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00 ; 00424873
        ;   XREF to: 0059fb00 (UNCONDITIONAL_CALL)  ; CVector3f * core_skeleton.cpp_CDeformableModelInstance_getBoneCachedWorldPosition_FUN_0059fb00(CDeformableModelInstance * this_ptr, CVector3f * out_position, int bone_index)
    ADD ESP,0xc                         ; 00424878
    PUSH EAX                            ; 0042487b
    LEA EAX,[EBP + -0x20]               ; 0042487c
    PUSH EAX                            ; 0042487f
    PUSH ESI                            ; 00424880
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00424881
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00424886
    PUSH 0x0                            ; 00424889
    PUSH 0x41200000                     ; 0042488b
    PUSH 0x0                            ; 00424890
    PUSH 0x0                            ; 00424892
    LEA EAX,[EBP + -0x20]               ; 00424894
    PUSH EAX                            ; 00424897
    PUSH ESI                            ; 00424898
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0 ; 00424899
        ;   XREF to: 0042b5b0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_0042b5b0(CCharacter * this_ptr, CVector3f * position, int fire_type, float spread_rate, ...)
    ADD ESP,0x18                        ; 0042489e
    PUSH EDI                            ; 004248a1
        ;   Label: LAB_004248a1
    PUSH ESI                            ; 004248a2
    CALL core_bride.cpp_CBride_FUN_00424600 ; 004248a3
        ;   XREF to: 00424600 (UNCONDITIONAL_CALL)  ; void core_bride.cpp_CBride_FUN_00424600(CBride * this_ptr)
    FLD float ptr [EDI + 0x4]           ; 004248a8
    FSUBR float ptr [ESI + 0x243c]      ; 004248ab
    MOV EAX,dword ptr [ESI + 0xbedc]    ; 004248b1
    FSTP float ptr [ESI + 0x243c]       ; 004248b7
    MOV ECX,dword ptr [ESI + EAX*0x4 + 0x2298] ; 004248bd
    ADD ESP,0x8                         ; 004248c4
    TEST ECX,ECX                        ; 004248c7
    JZ 0x004249b9                       ; 004248c9
        ;   XREF to: 004249b9 (CONDITIONAL_JUMP)  ; LAB_004249b9
    FLD float ptr [ESI + 0x243c]        ; 004248cf
        ;   Label: LAB_004248cf
    FLDZ                                ; 004248d5
    LEA EBX,[ESI + 0x158]               ; 004248d7
    FCOMPP                              ; 004248dd
    FNSTSW AX                           ; 004248df
    SAHF                                ; 004248e1
    JC 0x004249c4                       ; 004248e2
        ;   XREF to: 004249c4 (CONDITIONAL_JUMP)  ; LAB_004249c4
    PUSH EBX                            ; 004248e8
    MOV dword ptr [ESI + 0x243c],0x0    ; 004248e9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004248f3
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004248f8
    ADD ESP,0x4                         ; 004248fb
    CMP EAX,0xe                         ; 004248fe
    JZ 0x00424955                       ; 00424901
        ;   XREF to: 00424955 (CONDITIONAL_JUMP)  ; LAB_00424955
    CMP EAX,0xd                         ; 00424903
    JZ 0x00424955                       ; 00424906
        ;   XREF to: 00424955 (CONDITIONAL_JUMP)  ; LAB_00424955
    PUSH 0x1                            ; 00424908
    PUSH 0x3f000000                     ; 0042490a
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 0042490f
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 00424914
    TEST EAX,EAX                        ; 00424917
    SETZ AL                             ; 00424919
    AND EAX,0xff                        ; 0042491c
    ADD EAX,0xb                         ; 00424921
    PUSH EAX                            ; 00424924
    PUSH EBX                            ; 00424925
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00424926
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0042492b
    MOV EAX,dword ptr [ESI + 0xbee4]    ; 0042492e
    PUSH EAX                            ; 00424934
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00424935
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0042493a
    PUSH 0x616c95                       ; 0042493d | = "ub-die?.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 00424942
        ;   Label: LAB_00424942
    PUSH ESI                            ; 00424948
    CALL dword ptr [EAX + 0x24]         ; 00424949
    ADD ESP,0x8                         ; 0042494c
    MOV dword ptr [ESI + 0xbee4],EAX    ; 0042494f
    PUSH EDI                            ; 00424955
        ;   Label: LAB_00424955
    PUSH ESI                            ; 00424956
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00424957
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0042495c
    MOV ESP,EBP                         ; 0042495f
    POP EBP                             ; 00424961
    POP EDI                             ; 00424962
    POP ESI                             ; 00424963
    POP EBX                             ; 00424964
    RET                                 ; 00424965
    FLD float ptr [EDI + 0x4]           ; 00424966
        ;   Label: LAB_00424966
    LEA EAX,[EDI + 0x1c]                ; 00424969
    FLD ST0                             ; 0042496c
    FMUL double ptr [0x00616cb5]        ; 0042496e | DOUBLE_00616cb5
    PUSH EAX                            ; 00424974
    LEA EAX,[EBP + -0x2c]               ; 00424975
    XOR EBX,EBX                         ; 00424978
    PUSH EAX                            ; 0042497a
    FSTP ST1                            ; 0042497b
    PUSH ESI                            ; 0042497d
    FSTP float ptr [EDI + 0x4]          ; 0042497e
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 00424981
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 00424986
    PUSH 0xffff                         ; 00424989
        ;   Label: LAB_00424989
    PUSH 0x0                            ; 0042498e
    PUSH 0x4000                         ; 00424990
    PUSH 0x4000                         ; 00424995
    PUSH 0x0                            ; 0042499a
    LEA EAX,[EBP + -0x2c]               ; 0042499c
    PUSH EAX                            ; 0042499f
    MOV EAX,[0x0067a3d0]                ; 004249a0 | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EAX                            ; 004249a5 | g_CFireEffectInstance
    INC EBX                             ; 004249a6
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004249a7
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004249ac
    CMP EBX,0x5                         ; 004249af
    JL 0x00424989                       ; 004249b2
        ;   XREF to: 00424989 (CONDITIONAL_JUMP)  ; LAB_00424989
    JMP 0x00424860                      ; 004249b4
        ;   XREF to: 00424860 (UNCONDITIONAL_JUMP)  ; LAB_00424860
    MOV dword ptr [ESI + 0x243c],ECX    ; 004249b9
        ;   Label: LAB_004249b9
    JMP 0x004248cf                      ; 004249bf
        ;   XREF to: 004248cf (UNCONDITIONAL_JUMP)  ; LAB_004248cf
    PUSH 0x1                            ; 004249c4
        ;   Label: LAB_004249c4
    PUSH 0x3f000000                     ; 004249c6
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 004249cb
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 004249d0
    TEST EAX,EAX                        ; 004249d3
    SETZ AL                             ; 004249d5
    AND EAX,0xff                        ; 004249d8
    ADD EAX,0x7                         ; 004249dd
    PUSH EAX                            ; 004249e0
    PUSH EBX                            ; 004249e1
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004249e2
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004249e7
    MOV EBX,dword ptr [ESI + 0xbee4]    ; 004249ea
    PUSH EBX                            ; 004249f0
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004249f1
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004249f6
    TEST EAX,EAX                        ; 004249f9
    JNZ 0x00424955                      ; 004249fb
        ;   XREF to: 00424955 (CONDITIONAL_JUMP)  ; LAB_00424955
    PUSH 0x616ca1                       ; 00424a01 | = "ub-hurt?.wav"
    JMP 0x00424942                      ; 00424a06
        ;   XREF to: 00424942 (UNCONDITIONAL_JUMP)  ; LAB_00424942

