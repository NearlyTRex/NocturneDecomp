; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_gargoyle_cpp_CGargoyle_processDamage_FUN_004e57d0(CGargoyle *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
; Local Variables:
; undefined1       Stack[-0x1c]:1  local_1c
;
; Referenced Globals:
;   TerminatedCString s_gargoyle_shatter_wav_0062da1f
;   TerminatedCString s_gargoyle_hurt_wav_0062da34
;   CFireEffect* g_CFireEffectPtr = 02d12db0
;   CFireEffect g_CFireEffectInstance
;
; Called Functions:
;   core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0
;   core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0
;   core_gargoyle.cpp_CGargoyle_FUN_004e5530
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004e57d0
        ;   Label: core_gargoyle.cpp_CGargoyle_processDamage_FUN_004e57d0
    PUSH ESI                            ; 004e57d1
    PUSH EDI                            ; 004e57d2
    PUSH EBP                            ; 004e57d3
    SUB ESP,0xc                         ; 004e57d4
    MOV ESI,dword ptr [ESP + 0x20]      ; 004e57d7
    MOV EDI,dword ptr [ESP + 0x24]      ; 004e57db
    LEA EAX,[EDI + 0x1c]                ; 004e57df
    PUSH EAX                            ; 004e57e2
    LEA EAX,[ESP + 0x4]                 ; 004e57e3
    PUSH EAX                            ; 004e57e7
    PUSH ESI                            ; 004e57e8
    XOR EBX,EBX                         ; 004e57e9
    CALL core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0 ; 004e57eb
        ;   XREF to: 00408ec0 (UNCONDITIONAL_CALL)  ; CVector3f * core_actor.cpp_CDemonActor_localToWorldPoint_FUN_00408ec0(CDemonActor * this_ptr, CVector3f * output_world_point, CVector3f * input_local_point)
    ADD ESP,0xc                         ; 004e57f0
    PUSH 0xffff                         ; 004e57f3
        ;   Label: LAB_004e57f3
    PUSH 0x0                            ; 004e57f8
    PUSH 0x8000                         ; 004e57fa
    PUSH 0x10000                        ; 004e57ff
    PUSH 0x0                            ; 004e5804
    LEA EAX,[ESP + 0x14]                ; 004e5806
    PUSH EAX                            ; 004e580a
    MOV EDX,dword ptr [0x0067a3d0]      ; 004e580b | g_CFireEffectInstance | g_CFireEffectPtr
    PUSH EDX                            ; 004e5811 | g_CFireEffectInstance
    INC EBX                             ; 004e5812
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0 ; 004e5813
        ;   XREF to: 004c79d0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004c79d0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 004e5818
    CMP EBX,0x3                         ; 004e581b
    JL 0x004e57f3                       ; 004e581e
        ;   XREF to: 004e57f3 (CONDITIONAL_JUMP)  ; LAB_004e57f3
    LEA EBX,[ESI + 0x158]               ; 004e5820
    PUSH EBX                            ; 004e5826
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e5827
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e582c
    ADD ESP,0x4                         ; 004e582f
    CMP EAX,0x5                         ; 004e5832
    JZ 0x004e58ce                       ; 004e5835
        ;   XREF to: 004e58ce (CONDITIONAL_JUMP)  ; LAB_004e58ce
    PUSH EDI                            ; 004e583b
    PUSH ESI                            ; 004e583c
    CALL core_gargoyle.cpp_CGargoyle_FUN_004e5530 ; 004e583d
        ;   XREF to: 004e5530 (UNCONDITIONAL_CALL)  ; void core_gargoyle.cpp_CGargoyle_FUN_004e5530(CGargoyle * this_ptr)
    FLD float ptr [EDI + 0x4]           ; 004e5842
    FSUBR float ptr [ESI + 0x243c]      ; 004e5845
    ADD ESP,0x8                         ; 004e584b
    FST float ptr [ESI + 0x243c]        ; 004e584e
    FLDZ                                ; 004e5854
    FCOMPP                              ; 004e5856
    FNSTSW AX                           ; 004e5858
    SAHF                                ; 004e585a
    JC 0x004e58e7                       ; 004e585b
        ;   XREF to: 004e58e7 (CONDITIONAL_JUMP)  ; LAB_004e58e7
    MOV EBP,dword ptr [ESI + 0xbefc]    ; 004e5861
    PUSH EBP                            ; 004e5867
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 004e5868
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 004e586d
    PUSH EBX                            ; 004e5870
    MOV dword ptr [ESI + 0x243c],0x0    ; 004e5871
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 004e587b
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004e5880
    ADD ESP,0x4                         ; 004e5883
    CMP EAX,0x8                         ; 004e5886
    JZ 0x004e58bc                       ; 004e5889
        ;   XREF to: 004e58bc (CONDITIONAL_JUMP)  ; LAB_004e58bc
    PUSH 0x1                            ; 004e588b
    PUSH 0x8                            ; 004e588d
    PUSH EBX                            ; 004e588f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 004e5890
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004e5895
    PUSH 0x62da1f                       ; 004e5898 | = "gargoyle-shatter.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 004e589d
    PUSH ESI                            ; 004e58a3
    CALL dword ptr [EAX + 0x24]         ; 004e58a4
    ADD ESP,0x8                         ; 004e58a7
    PUSH 0x1                            ; 004e58aa
    PUSH 0xbf800000                     ; 004e58ac
    PUSH 0x0                            ; 004e58b1
    PUSH ESI                            ; 004e58b3
    CALL core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0 ; 004e58b4
        ;   XREF to: 0042b9e0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_dismember_FUN_0042b9e0(CCharacter * this_ptr, CVector3f * impact_point, float impact_force)
    ADD ESP,0x10                        ; 004e58b9
    PUSH EDI                            ; 004e58bc
        ;   Label: LAB_004e58bc
    PUSH ESI                            ; 004e58bd
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e58be
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e58c3
    ADD ESP,0xc                         ; 004e58c6
    POP EBP                             ; 004e58c9
    POP EDI                             ; 004e58ca
    POP ESI                             ; 004e58cb
    POP EBX                             ; 004e58cc
    RET                                 ; 004e58cd
    PUSH EDI                            ; 004e58ce
        ;   Label: LAB_004e58ce
    PUSH ESI                            ; 004e58cf
    MOV dword ptr [EDI + 0x4],0x0       ; 004e58d0
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e58d7
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e58dc
    ADD ESP,0xc                         ; 004e58df
    POP EBP                             ; 004e58e2
    POP EDI                             ; 004e58e3
    POP ESI                             ; 004e58e4
    POP EBX                             ; 004e58e5
    RET                                 ; 004e58e6
    MOV ECX,dword ptr [ESI + 0xbefc]    ; 004e58e7
        ;   Label: LAB_004e58e7
    PUSH ECX                            ; 004e58ed
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 004e58ee
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 004e58f3
    TEST EAX,EAX                        ; 004e58f6
    JNZ 0x004e58bc                      ; 004e58f8
        ;   XREF to: 004e58bc (CONDITIONAL_JUMP)  ; LAB_004e58bc
    PUSH 0x62da34                       ; 004e58fa | = "gargoyle-hurt?.wav"
    MOV EAX,dword ptr [ESI + 0x154]     ; 004e58ff
    PUSH ESI                            ; 004e5905
    CALL dword ptr [EAX + 0x24]         ; 004e5906
    ADD ESP,0x8                         ; 004e5909
    MOV dword ptr [ESI + 0xbefc],EAX    ; 004e590c
    PUSH EDI                            ; 004e5912
    PUSH ESI                            ; 004e5913
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 004e5914
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004e5919
    ADD ESP,0xc                         ; 004e591c
    POP EBP                             ; 004e591f
    POP EDI                             ; 004e5920
    POP ESI                             ; 004e5921
    POP EBX                             ; 004e5922
    RET                                 ; 004e5923

