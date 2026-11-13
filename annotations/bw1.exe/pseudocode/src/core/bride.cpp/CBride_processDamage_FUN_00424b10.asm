; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_bride_cpp_CBride_processDamage_FUN_00424b10(CBride *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CBride *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_ub_die_wav_005d4fc8
;   TerminatedCString s_ub_hurt_wav_005d4fd4
;   undefined4 DAT_005d4fe8
;   undefined4 DAT_0061c010
;
; Called Functions:
;   core_actor.cpp_FUN_00408b40
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_bride.cpp_CBride_processDismemberment_FUN_004248e0
;   core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   core_skeleton.cpp_FUN_00569130
;   sound_sndmain.cpp_isSfxPlaying_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00424b10
        ;   Label: core_bride.cpp_CBride_processDamage_FUN_00424b10
    PUSH ESI                            ; 00424b11
    PUSH EDI                            ; 00424b12
    PUSH EBP                            ; 00424b13
    MOV EBP,ESP                         ; 00424b14
    SUB ESP,0x50                        ; 00424b16
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424b19
    MOV EDX,dword ptr [EAX + 0xc298]    ; 00424b1c
    PUSH EDX                            ; 00424b22
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00424b23
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    MOV EAX,dword ptr [EBP + 0x18]      ; 00424b28
    MOV ECX,dword ptr [EAX + 0x28]      ; 00424b2b
    ADD ESP,0x4                         ; 00424b2e
    CMP ECX,0x7                         ; 00424b31
    JZ 0x00424c88                       ; 00424b34
        ;   XREF to: 00424c88 (CONDITIONAL_JUMP)  ; LAB_00424c88
    LEA EAX,[EAX]                       ; 00424b3a
    MOV EAX,dword ptr [EBP + 0x18]      ; 00424b40
        ;   Label: LAB_00424b40
    CMP dword ptr [EAX + 0x30],0x6c     ; 00424b43
    JNZ 0x00424b9f                      ; 00424b47
        ;   XREF to: 00424b9f (CONDITIONAL_JUMP)  ; LAB_00424b9f
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424b49
    PUSH 0x0                            ; 00424b4c
    ADD EAX,0x158                       ; 00424b4e
    PUSH EAX                            ; 00424b53
    LEA ESI,[EBP + -0x20]               ; 00424b54
    LEA EDI,[EBP + -0x38]               ; 00424b57
    CALL core_skeleton.cpp_FUN_00569130 ; 00424b5a
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined core_skeleton.cpp_FUN_00569130()
    LEA ESI,[EBP + -0x20]               ; 00424b5f
    ADD ESP,0x8                         ; 00424b62
    LEA EAX,[EBP + -0x38]               ; 00424b65
    MOV ECX,dword ptr [EBP + 0x14]      ; 00424b68
    PUSH EAX                            ; 00424b6b
    MOVSD ES:EDI,ESI                    ; 00424b6c
    MOVSD ES:EDI,ESI                    ; 00424b6d
    MOVSD ES:EDI,ESI                    ; 00424b6e
    PUSH ECX                            ; 00424b6f
    LEA ESI,[EBP + -0x2c]               ; 00424b70
    CALL core_actor.cpp_FUN_00408b40    ; 00424b73
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    ADD ESP,0x8                         ; 00424b78
    PUSH 0x0                            ; 00424b7b
    PUSH 0x41200000                     ; 00424b7d
    PUSH 0x0                            ; 00424b82
    PUSH 0x0                            ; 00424b84
    LEA EAX,[EBP + -0x44]               ; 00424b86
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424b89
    PUSH EAX                            ; 00424b8c
    LEA EDI,[EBP + -0x44]               ; 00424b8d
    LEA ESI,[EBP + -0x2c]               ; 00424b90
    PUSH EBX                            ; 00424b93
    MOVSD ES:EDI,ESI                    ; 00424b94
    MOVSD ES:EDI,ESI                    ; 00424b95
    MOVSD ES:EDI,ESI                    ; 00424b96
    CALL core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0 ; 00424b97
        ;   XREF to: 004308a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_igniteBone_FUN_004308a0(CCharacter * this_ptr, CVector3f * position, int fire_type, int flame_type, ...)
    ADD ESP,0x18                        ; 00424b9c
    MOV ESI,dword ptr [EBP + 0x18]      ; 00424b9f
        ;   Label: LAB_00424b9f
    PUSH ESI                            ; 00424ba2
    MOV EDI,dword ptr [EBP + 0x14]      ; 00424ba3
    PUSH EDI                            ; 00424ba6
    CALL core_bride.cpp_CBride_processDismemberment_FUN_004248e0 ; 00424ba7
        ;   XREF to: 004248e0 (UNCONDITIONAL_CALL)  ; void core_bride.cpp_CBride_processDismemberment_FUN_004248e0(CBride * this_ptr, SDamageInfo * damage_info)
    MOV EAX,ESI                         ; 00424bac
    FLD float ptr [EAX + 0x4]           ; 00424bae
    MOV EAX,dword ptr [EDI + 0xc288]    ; 00424bb1
    SHL EAX,0x2                         ; 00424bb7
    FSUBR float ptr [EDI + 0x2538]      ; 00424bba
    ADD EAX,EDI                         ; 00424bc0
    FSTP float ptr [EDI + 0x2538]       ; 00424bc2
    MOV ECX,dword ptr [EAX + 0x2298]    ; 00424bc8
    ADD ESP,0x8                         ; 00424bce
    TEST ECX,ECX                        ; 00424bd1
    JZ 0x00424ce4                       ; 00424bd3
        ;   XREF to: 00424ce4 (CONDITIONAL_JUMP)  ; LAB_00424ce4
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424bd9
        ;   Label: LAB_00424bd9
    FLD float ptr [EAX + 0x2538]        ; 00424bdc
    FLDZ                                ; 00424be2
    LEA EBX,[EAX + 0x158]               ; 00424be4
    FCOMPP                              ; 00424bea
    FNSTSW AX                           ; 00424bec
    SAHF                                ; 00424bee
    JC 0x00424cef                       ; 00424bef
        ;   XREF to: 00424cef (CONDITIONAL_JUMP)  ; LAB_00424cef
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424bf5
    PUSH EBX                            ; 00424bf8
    MOV dword ptr [EAX + 0x2538],0x0    ; 00424bf9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00424c03
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00424c08
    ADD ESP,0x4                         ; 00424c0b
    CMP EAX,0xe                         ; 00424c0e
    JZ 0x00424c71                       ; 00424c11
        ;   XREF to: 00424c71 (CONDITIONAL_JUMP)  ; LAB_00424c71
    CMP EAX,0xd                         ; 00424c13
    JZ 0x00424c71                       ; 00424c16
        ;   XREF to: 00424c71 (CONDITIONAL_JUMP)  ; LAB_00424c71
    PUSH 0x1                            ; 00424c18
    PUSH 0x3f000000                     ; 00424c1a
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00424c1f
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00424c24
    TEST EAX,EAX                        ; 00424c27
    SETZ AL                             ; 00424c29
    AND EAX,0xff                        ; 00424c2c
    ADD EAX,0xb                         ; 00424c31
    PUSH EAX                            ; 00424c34
    PUSH EBX                            ; 00424c35
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00424c36
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424c3b
    ADD ESP,0xc                         ; 00424c3e
    MOV EDI,dword ptr [EAX + 0xc294]    ; 00424c41
    PUSH EDI                            ; 00424c47
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00424c48
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00424c4d
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424c50
    PUSH 0x5d4fc8                       ; 00424c53 | = "ub-die?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 00424c58
    MOV EAX,dword ptr [EAX + 0x154]     ; 00424c5b
    PUSH EDX                            ; 00424c61
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424c62
    CALL dword ptr [EAX + 0x2c]         ; 00424c65
    ADD ESP,0x8                         ; 00424c68
    MOV dword ptr [EBX + 0xc294],EAX    ; 00424c6b
    MOV ECX,dword ptr [EBP + 0x18]      ; 00424c71
        ;   Label: LAB_00424c71
    PUSH ECX                            ; 00424c74
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424c75
    PUSH EBX                            ; 00424c78
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 00424c79
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00424c7e
    MOV ESP,EBP                         ; 00424c81
    POP EBP                             ; 00424c83
    POP EDI                             ; 00424c84
    POP ESI                             ; 00424c85
    POP EBX                             ; 00424c86
    RET                                 ; 00424c87
    FLD float ptr [EAX + 0x4]           ; 00424c88
        ;   Label: LAB_00424c88
    FLD ST0                             ; 00424c8b
    FMUL double ptr [0x005d4fe8]        ; 00424c8d | DAT_005d4fe8
    ADD EAX,0x1c                        ; 00424c93
    MOV EBX,dword ptr [EBP + 0x14]      ; 00424c96
    PUSH EAX                            ; 00424c99
    LEA ESI,[EBP + -0x50]               ; 00424c9a
    LEA EDI,[EBP + -0x14]               ; 00424c9d
    PUSH EBX                            ; 00424ca0
    FSTP ST1                            ; 00424ca1
    FSTP float ptr [EAX + -0x18]        ; 00424ca3
    CALL core_actor.cpp_FUN_00408b40    ; 00424ca6
        ;   XREF to: 00408b40 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408b40()
    LEA ESI,[EBP + -0x50]               ; 00424cab
    XOR EBX,EBX                         ; 00424cae
    MOVSD ES:EDI,ESI                    ; 00424cb0
    MOVSD ES:EDI,ESI                    ; 00424cb1
    MOVSD ES:EDI,ESI                    ; 00424cb2
    ADD ESP,0x8                         ; 00424cb3
    MOV ESI,0x4000                      ; 00424cb6
    PUSH 0xffff                         ; 00424cbb
        ;   Label: LAB_00424cbb
    PUSH 0x0                            ; 00424cc0
    PUSH ESI                            ; 00424cc2
    PUSH ESI                            ; 00424cc3
    PUSH 0x0                            ; 00424cc4
    LEA EAX,[EBP + -0x14]               ; 00424cc6
    PUSH EAX                            ; 00424cc9
    MOV EDI,dword ptr [0x0061c010]      ; 00424cca | DAT_0061c010
    PUSH EDI                            ; 00424cd0
    INC EBX                             ; 00424cd1
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0 ; 00424cd2
        ;   XREF to: 004b59e0 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_004b59e0(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 00424cd7
    CMP EBX,0x5                         ; 00424cda
    JL 0x00424cbb                       ; 00424cdd
        ;   XREF to: 00424cbb (CONDITIONAL_JUMP)  ; LAB_00424cbb
    JMP 0x00424b40                      ; 00424cdf
        ;   XREF to: 00424b40 (UNCONDITIONAL_JUMP)  ; LAB_00424b40
    MOV dword ptr [EDI + 0x2538],ECX    ; 00424ce4
        ;   Label: LAB_00424ce4
    JMP 0x00424bd9                      ; 00424cea
        ;   XREF to: 00424bd9 (UNCONDITIONAL_JUMP)  ; LAB_00424bd9
    PUSH 0x1                            ; 00424cef
        ;   Label: LAB_00424cef
    PUSH 0x3f000000                     ; 00424cf1
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 00424cf6
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 00424cfb
    TEST EAX,EAX                        ; 00424cfe
    SETZ AL                             ; 00424d00
    AND EAX,0xff                        ; 00424d03
    ADD EAX,0x7                         ; 00424d08
    PUSH EAX                            ; 00424d0b
    PUSH EBX                            ; 00424d0c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00424d0d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424d12
    ADD ESP,0xc                         ; 00424d15
    MOV EBX,dword ptr [EAX + 0xc294]    ; 00424d18
    PUSH EBX                            ; 00424d1e
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005735a0 ; 00424d1f
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 00424d24
    TEST EAX,EAX                        ; 00424d27
    JNZ 0x00424c71                      ; 00424d29
        ;   XREF to: 00424c71 (CONDITIONAL_JUMP)  ; LAB_00424c71
    PUSH 0x5d4fd4                       ; 00424d2f | = "ub-hurt?.wav"
    MOV ESI,dword ptr [EBP + 0x14]      ; 00424d34
    MOV EAX,dword ptr [EBP + 0x14]      ; 00424d37
    PUSH ESI                            ; 00424d3a
    MOV EAX,dword ptr [EAX + 0x154]     ; 00424d3b
    CALL dword ptr [EAX + 0x2c]         ; 00424d41
    ADD ESP,0x8                         ; 00424d44
    MOV dword ptr [ESI + 0xc294],EAX    ; 00424d47
    JMP 0x00424c71                      ; 00424d4d
        ;   XREF to: 00424c71 (UNCONDITIONAL_JUMP)  ; LAB_00424c71

