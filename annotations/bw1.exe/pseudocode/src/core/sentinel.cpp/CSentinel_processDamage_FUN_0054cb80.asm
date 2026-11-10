; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_processDamage_FUN_0054cb80(CSentinel *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_sentinel_die_wav_005f0452
;   TerminatedCString s_sentinel_hurt_wav_005f0463
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc60
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054cb80
        ;   Label: core_sentinel.cpp_CSentinel_processDamage_FUN_0054cb80
    PUSH ESI                            ; 0054cb81
    PUSH EDI                            ; 0054cb82
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054cb83
    MOV EAX,dword ptr [ESP + 0x14]      ; 0054cb87
    FLD float ptr [EAX + 0x4]           ; 0054cb8b
    FSUBR float ptr [EBX + 0x2538]      ; 0054cb8e
    LEA ESI,[EBX + 0x158]               ; 0054cb94
    FST float ptr [EBX + 0x2538]        ; 0054cb9a
    FLDZ                                ; 0054cba0
    FCOMPP                              ; 0054cba2
    FNSTSW AX                           ; 0054cba4
    SAHF                                ; 0054cba6
    JC 0x0054cc0f                       ; 0054cba7
        ;   XREF to: 0054cc0f (CONDITIONAL_JUMP)  ; LAB_0054cc0f
    PUSH ESI                            ; 0054cba9
    MOV dword ptr [EBX + 0x2538],0x0    ; 0054cbaa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0054cbb4
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0054cbb9
    ADD ESP,0x4                         ; 0054cbbc
    CMP EAX,0x8                         ; 0054cbbf
    JZ 0x0054cbfd                       ; 0054cbc2
        ;   XREF to: 0054cbfd (CONDITIONAL_JUMP)  ; LAB_0054cbfd
    CMP EAX,0x9                         ; 0054cbc4
    JZ 0x0054cbfd                       ; 0054cbc7
        ;   XREF to: 0054cbfd (CONDITIONAL_JUMP)  ; LAB_0054cbfd
    PUSH 0x1                            ; 0054cbc9
    PUSH 0x8                            ; 0054cbcb
    PUSH ESI                            ; 0054cbcd
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054cbce
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054cbd3
    MOV ECX,dword ptr [EBX + 0xc268]    ; 0054cbd6
    PUSH ECX                            ; 0054cbdc
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0054cbdd
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0054cbe2
    PUSH 0x5f0452                       ; 0054cbe5 | = "sentinel-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0054cbea
        ;   Label: LAB_0054cbea
    PUSH EBX                            ; 0054cbf0
    CALL dword ptr [EAX + 0x2c]         ; 0054cbf1
    ADD ESP,0x8                         ; 0054cbf4
    MOV dword ptr [EBX + 0xc268],EAX    ; 0054cbf7
    MOV ESI,dword ptr [ESP + 0x14]      ; 0054cbfd
        ;   Label: LAB_0054cbfd
    PUSH ESI                            ; 0054cc01
    PUSH EBX                            ; 0054cc02
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0054cc03
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0054cc08
    POP EDI                             ; 0054cc0b
    POP ESI                             ; 0054cc0c
    POP EBX                             ; 0054cc0d
    RET                                 ; 0054cc0e
    PUSH 0x2                            ; 0054cc0f
        ;   Label: LAB_0054cc0f
    PUSH 0x0                            ; 0054cc11
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 0054cc13
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 0054cc18
    MOV EDI,EAX                         ; 0054cc1b
    TEST EAX,EAX                        ; 0054cc1d
    JNZ 0x0054cc2e                      ; 0054cc1f
        ;   XREF to: 0054cc2e (CONDITIONAL_JUMP)  ; LAB_0054cc2e
    PUSH 0x1                            ; 0054cc21
    PUSH 0x5                            ; 0054cc23
    PUSH ESI                            ; 0054cc25
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054cc26
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054cc2b
    CMP EDI,0x1                         ; 0054cc2e
        ;   Label: LAB_0054cc2e
    JNZ 0x0054cc45                      ; 0054cc31
        ;   XREF to: 0054cc45 (CONDITIONAL_JUMP)  ; LAB_0054cc45
    PUSH EDI                            ; 0054cc33
    PUSH 0x6                            ; 0054cc34
    LEA EAX,[EBX + 0x158]               ; 0054cc36
    PUSH EAX                            ; 0054cc3c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054cc3d
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054cc42
    CMP EDI,0x2                         ; 0054cc45
        ;   Label: LAB_0054cc45
    JNZ 0x0054cc5d                      ; 0054cc48
        ;   XREF to: 0054cc5d (CONDITIONAL_JUMP)  ; LAB_0054cc5d
    PUSH 0x1                            ; 0054cc4a
    PUSH 0x7                            ; 0054cc4c
    LEA EAX,[EBX + 0x158]               ; 0054cc4e
    PUSH EAX                            ; 0054cc54
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0054cc55
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0054cc5a
    MOV EDX,dword ptr [EBX + 0xc268]    ; 0054cc5d
        ;   Label: LAB_0054cc5d
    PUSH EDX                            ; 0054cc63
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0054cc64
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0054cc69
    TEST EAX,EAX                        ; 0054cc6c
    JNZ 0x0054cbfd                      ; 0054cc6e
        ;   XREF to: 0054cbfd (CONDITIONAL_JUMP)  ; LAB_0054cbfd
    PUSH 0x5f0463                       ; 0054cc70 | = "sentinel-hurt?.wav"
    JMP 0x0054cbea                      ; 0054cc75
        ;   XREF to: 0054cbea (UNCONDITIONAL_JUMP)  ; LAB_0054cbea

