; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_yow_cpp_FUN_00586eb0(CEnemy *param_1,SDamageInfo *param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_dog2_wav_005d831a
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00586eb0
        ;   Label: core_yow.cpp_FUN_00586eb0
    PUSH ESI                            ; 00586eb1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00586eb2
    MOV EAX,dword ptr [ESP + 0x10]      ; 00586eb6
    FLD float ptr [EAX + 0x4]           ; 00586eba
    FSUBR float ptr [EBX + 0x2538]      ; 00586ebd
    LEA ESI,[EBX + 0x158]               ; 00586ec3
    FST float ptr [EBX + 0x2538]        ; 00586ec9
    FLDZ                                ; 00586ecf
    FCOMPP                              ; 00586ed1
    FNSTSW AX                           ; 00586ed3
    SAHF                                ; 00586ed5
    JNC 0x00586f1e                      ; 00586ed6
        ;   XREF to: 00586f1e (CONDITIONAL_JUMP)  ; LAB_00586f1e
    PUSH 0x1                            ; 00586ed8
    PUSH 0x2                            ; 00586eda
    PUSH 0x0                            ; 00586edc
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586ede
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586ee3
    ADD EAX,0xd                         ; 00586ee6
    PUSH EAX                            ; 00586ee9
        ;   Label: LAB_00586ee9
    PUSH ESI                            ; 00586eea
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00586eeb
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00586ef0
    MOV EDX,dword ptr [EBX + 0xd070]    ; 00586ef3
        ;   Label: LAB_00586ef3
    PUSH EDX                            ; 00586ef9
    MOV ECX,dword ptr [0x006045f8]      ; 00586efa | DAT_006045f8
    PUSH ECX                            ; 00586f00
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00586f01
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00586f06
    TEST EAX,EAX                        ; 00586f09
    JZ 0x00586f65                       ; 00586f0b
        ;   XREF to: 00586f65 (CONDITIONAL_JUMP)  ; LAB_00586f65
    MOV ESI,dword ptr [ESP + 0x10]      ; 00586f0d
    PUSH ESI                            ; 00586f11
    PUSH EBX                            ; 00586f12
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00586f13
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00586f18
    POP ESI                             ; 00586f1b
    POP EBX                             ; 00586f1c
    RET                                 ; 00586f1d
    PUSH ESI                            ; 00586f1e
        ;   Label: LAB_00586f1e
    MOV dword ptr [EBX + 0x2538],0x0    ; 00586f1f
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00586f29
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00586f2e
    ADD ESP,0x4                         ; 00586f31
    CMP EAX,0x13                        ; 00586f34
    JZ 0x00586ef3                       ; 00586f37
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    CMP EAX,0x10                        ; 00586f39
    JZ 0x00586ef3                       ; 00586f3c
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    CMP EAX,0x14                        ; 00586f3e
    JZ 0x00586ef3                       ; 00586f41
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    CMP EAX,0x11                        ; 00586f43
    JZ 0x00586ef3                       ; 00586f46
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    CMP EAX,0x15                        ; 00586f48
    JZ 0x00586ef3                       ; 00586f4b
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    CMP EAX,0x12                        ; 00586f4d
    JZ 0x00586ef3                       ; 00586f50
        ;   XREF to: 00586ef3 (CONDITIONAL_JUMP)  ; LAB_00586ef3
    PUSH 0x1                            ; 00586f52
    PUSH 0x2                            ; 00586f54
    PUSH 0x0                            ; 00586f56
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00586f58
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00586f5d
    ADD EAX,0x10                        ; 00586f60
    JMP 0x00586ee9                      ; 00586f63
        ;   XREF to: 00586ee9 (UNCONDITIONAL_JUMP)  ; LAB_00586ee9
    PUSH 0x5d831a                       ; 00586f65 | = "dog2.wav"
        ;   Label: LAB_00586f65
    MOV EAX,dword ptr [EBX + 0x154]     ; 00586f6a
    PUSH EBX                            ; 00586f70
    CALL dword ptr [EAX + 0x2c]         ; 00586f71
    ADD ESP,0x8                         ; 00586f74
    MOV dword ptr [EBX + 0xd070],EAX    ; 00586f77
    MOV ESI,dword ptr [ESP + 0x10]      ; 00586f7d
    PUSH ESI                            ; 00586f81
    PUSH EBX                            ; 00586f82
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00586f83
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00586f88
    POP ESI                             ; 00586f8b
    POP EBX                             ; 00586f8c
    RET                                 ; 00586f8d

