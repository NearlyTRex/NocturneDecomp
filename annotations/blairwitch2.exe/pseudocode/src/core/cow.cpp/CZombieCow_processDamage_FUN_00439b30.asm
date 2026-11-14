; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_cow_cpp_CZombieCow_processDamage_FUN_00439b30(CZombieCow *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_005ce1aa
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00439b30
        ;   Label: core_cow.cpp_CZombieCow_processDamage_FUN_00439b30
    PUSH ESI                            ; 00439b31
    PUSH EDI                            ; 00439b32
    MOV EBX,dword ptr [ESP + 0x10]      ; 00439b33
    MOV EDI,dword ptr [ESP + 0x14]      ; 00439b37
    PUSH EDI                            ; 00439b3b
    PUSH EBX                            ; 00439b3c
    CALL core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0 ; 00439b3d
        ;   XREF to: 004398b0 (UNCONDITIONAL_CALL)  ; void core_cow.cpp_CZombieCow_processDismemberment_FUN_004398b0(CZombieCow * this_ptr, SDamageInfo * damage_info)
    FLD float ptr [EDI + 0x4]           ; 00439b42
    ADD ESP,0x8                         ; 00439b45
    FSUBR float ptr [EBX + 0x25a8]      ; 00439b48
    LEA ESI,[EBX + 0x2b4]               ; 00439b4e
    FST float ptr [EBX + 0x25a8]        ; 00439b54
    FLDZ                                ; 00439b5a
    FCOMPP                              ; 00439b5c
    FNSTSW AX                           ; 00439b5e
    SAHF                                ; 00439b60
    JNC 0x00439b98                      ; 00439b61
        ;   XREF to: 00439b98 (CONDITIONAL_JUMP)  ; LAB_00439b98
    PUSH 0x1                            ; 00439b63
    PUSH 0x3                            ; 00439b65
    PUSH ESI                            ; 00439b67
        ;   Label: LAB_00439b67
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00439b68
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00439b6d
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 00439b70
        ;   Label: LAB_00439b70
    PUSH EDX                            ; 00439b76
    MOV ECX,dword ptr [0x0061c068]      ; 00439b77 | DAT_0061c068
    PUSH ECX                            ; 00439b7d
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70 ; 00439b7e
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00439b83
    TEST EAX,EAX                        ; 00439b86
    JZ 0x00439bbe                       ; 00439b88
        ;   XREF to: 00439bbe (CONDITIONAL_JUMP)  ; LAB_00439bbe
    PUSH EDI                            ; 00439b8a
    PUSH EBX                            ; 00439b8b
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00439b8c
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00439b91
    POP EDI                             ; 00439b94
    POP ESI                             ; 00439b95
    POP EBX                             ; 00439b96
    RET                                 ; 00439b97
    PUSH ESI                            ; 00439b98
        ;   Label: LAB_00439b98
    MOV dword ptr [EBX + 0x25a8],0x0    ; 00439b99
    CALL core_motion.cpp_FUN_005035c0   ; 00439ba3
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 00439ba8
    ADD ESP,0x4                         ; 00439bab
    CMP EAX,0x5                         ; 00439bae
    JZ 0x00439b70                       ; 00439bb1
        ;   XREF to: 00439b70 (CONDITIONAL_JUMP)  ; LAB_00439b70
    CMP EAX,0x4                         ; 00439bb3
    JZ 0x00439b70                       ; 00439bb6
        ;   XREF to: 00439b70 (CONDITIONAL_JUMP)  ; LAB_00439b70
    PUSH 0x1                            ; 00439bb8
    PUSH 0x4                            ; 00439bba
    JMP 0x00439b67                      ; 00439bbc
        ;   XREF to: 00439b67 (UNCONDITIONAL_JUMP)  ; LAB_00439b67
    PUSH 0x5ce1aa                       ; 00439bbe | = "cow?.wav"
        ;   Label: LAB_00439bbe
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00439bc3
    PUSH EBX                            ; 00439bc9
    CALL dword ptr [EAX + 0x34]         ; 00439bca
    ADD ESP,0x8                         ; 00439bcd
    MOV dword ptr [EBX + 0x10b00],EAX   ; 00439bd0
    PUSH EDI                            ; 00439bd6
    PUSH EBX                            ; 00439bd7
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 00439bd8
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00439bdd
    POP EDI                             ; 00439be0
    POP ESI                             ; 00439be1
    POP EBX                             ; 00439be2
    RET                                 ; 00439be3

