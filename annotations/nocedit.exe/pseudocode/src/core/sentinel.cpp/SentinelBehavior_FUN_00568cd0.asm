; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_sentinel_cpp_SentinelBehavior_FUN_00568cd0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_sentinel_die_wav_006458b3
;   TerminatedCString s_sentinel_hurt_wav_006458c4
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cc70
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568cd0
        ;   Label: core_sentinel.cpp_SentinelBehavior_FUN_00568cd0
    PUSH ESI                            ; 00568cd1
    PUSH EDI                            ; 00568cd2
    MOV EBX,dword ptr [ESP + 0x10]      ; 00568cd3
    MOV EAX,dword ptr [ESP + 0x14]      ; 00568cd7
    FLD float ptr [EAX + 0x4]           ; 00568cdb
    FSUBR float ptr [EBX + 0x243c]      ; 00568cde
    LEA ESI,[EBX + 0x158]               ; 00568ce4
    FST float ptr [EBX + 0x243c]        ; 00568cea
    FLDZ                                ; 00568cf0
    FCOMPP                              ; 00568cf2
    FNSTSW AX                           ; 00568cf4
    SAHF                                ; 00568cf6
    JC 0x00568d5f                       ; 00568cf7
        ;   XREF to: 00568d5f (CONDITIONAL_JUMP)  ; LAB_00568d5f
    PUSH ESI                            ; 00568cf9
    MOV dword ptr [EBX + 0x243c],0x0    ; 00568cfa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00568d04
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00568d09
    ADD ESP,0x4                         ; 00568d0c
    CMP EAX,0x8                         ; 00568d0f
    JZ 0x00568d4d                       ; 00568d12
        ;   XREF to: 00568d4d (CONDITIONAL_JUMP)  ; LAB_00568d4d
    CMP EAX,0x9                         ; 00568d14
    JZ 0x00568d4d                       ; 00568d17
        ;   XREF to: 00568d4d (CONDITIONAL_JUMP)  ; LAB_00568d4d
    PUSH 0x1                            ; 00568d19
    PUSH 0x8                            ; 00568d1b
    PUSH ESI                            ; 00568d1d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568d1e
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568d23
    MOV ECX,dword ptr [EBX + 0xbebc]    ; 00568d26
    PUSH ECX                            ; 00568d2c
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00568d2d
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00568d32
    PUSH 0x6458b3                       ; 00568d35 | = "sentinel-die.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00568d3a
        ;   Label: LAB_00568d3a
    PUSH EBX                            ; 00568d40
    CALL dword ptr [EAX + 0x24]         ; 00568d41
    ADD ESP,0x8                         ; 00568d44
    MOV dword ptr [EBX + 0xbebc],EAX    ; 00568d47
    MOV ESI,dword ptr [ESP + 0x14]      ; 00568d4d
        ;   Label: LAB_00568d4d
    PUSH ESI                            ; 00568d51
    PUSH EBX                            ; 00568d52
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00568d53
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00568d58
    POP EDI                             ; 00568d5b
    POP ESI                             ; 00568d5c
    POP EBX                             ; 00568d5d
    RET                                 ; 00568d5e
    PUSH 0x2                            ; 00568d5f
        ;   Label: LAB_00568d5f
    PUSH 0x0                            ; 00568d61
    CALL core_actor.cpp_getRandomInt_FUN_0040cc70 ; 00568d63
        ;   XREF to: 0040cc70 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc70(int min_value, int max_value)
    ADD ESP,0x8                         ; 00568d68
    MOV EDI,EAX                         ; 00568d6b
    TEST EAX,EAX                        ; 00568d6d
    JNZ 0x00568d7e                      ; 00568d6f
        ;   XREF to: 00568d7e (CONDITIONAL_JUMP)  ; LAB_00568d7e
    PUSH 0x1                            ; 00568d71
    PUSH 0x5                            ; 00568d73
    PUSH ESI                            ; 00568d75
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568d76
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568d7b
    CMP EDI,0x1                         ; 00568d7e
        ;   Label: LAB_00568d7e
    JNZ 0x00568d95                      ; 00568d81
        ;   XREF to: 00568d95 (CONDITIONAL_JUMP)  ; LAB_00568d95
    PUSH EDI                            ; 00568d83
    PUSH 0x6                            ; 00568d84
    LEA EAX,[EBX + 0x158]               ; 00568d86
    PUSH EAX                            ; 00568d8c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568d8d
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568d92
    CMP EDI,0x2                         ; 00568d95
        ;   Label: LAB_00568d95
    JNZ 0x00568dad                      ; 00568d98
        ;   XREF to: 00568dad (CONDITIONAL_JUMP)  ; LAB_00568dad
    PUSH 0x1                            ; 00568d9a
    PUSH 0x7                            ; 00568d9c
    LEA EAX,[EBX + 0x158]               ; 00568d9e
    PUSH EAX                            ; 00568da4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00568da5
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00568daa
    MOV EDX,dword ptr [EBX + 0xbebc]    ; 00568dad
        ;   Label: LAB_00568dad
    PUSH EDX                            ; 00568db3
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 00568db4
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 00568db9
    TEST EAX,EAX                        ; 00568dbc
    JNZ 0x00568d4d                      ; 00568dbe
        ;   XREF to: 00568d4d (CONDITIONAL_JUMP)  ; LAB_00568d4d
    PUSH 0x6458c4                       ; 00568dc0 | = "sentinel-hurt?.wav"
    JMP 0x00568d3a                      ; 00568dc5
        ;   XREF to: 00568d3a (UNCONDITIONAL_JUMP)  ; LAB_00568d3a

