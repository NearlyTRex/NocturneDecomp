; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cow_cpp_FUN_00444b40(void)
;
;
; Referenced Globals:
;   TerminatedCString s_cow_wav_006195ad
;   CSound* g_CSoundPtr = 03f6af64
;   CSound g_CSoundInstance
;
; Called Functions:
;   core_cow.cpp_FUN_004448c0
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444b40
        ;   Label: core_cow.cpp_FUN_00444b40
    PUSH ESI                            ; 00444b41
    PUSH EDI                            ; 00444b42
    MOV EBX,dword ptr [ESP + 0x10]      ; 00444b43
    MOV EDI,dword ptr [ESP + 0x14]      ; 00444b47
    PUSH EDI                            ; 00444b4b
    PUSH EBX                            ; 00444b4c
    CALL core_cow.cpp_FUN_004448c0      ; 00444b4d
        ;   XREF to: 004448c0 (UNCONDITIONAL_CALL)  ; void core_cow.cpp_FUN_004448c0()
    FLD float ptr [EDI + 0x4]           ; 00444b52
    ADD ESP,0x8                         ; 00444b55
    FSUBR float ptr [EBX + 0x243c]      ; 00444b58
    LEA ESI,[EBX + 0x158]               ; 00444b5e
    FST float ptr [EBX + 0x243c]        ; 00444b64
    FLDZ                                ; 00444b6a
    FCOMPP                              ; 00444b6c
    FNSTSW AX                           ; 00444b6e
    SAHF                                ; 00444b70
    JNC 0x00444ba8                      ; 00444b71
        ;   XREF to: 00444ba8 (CONDITIONAL_JUMP)  ; LAB_00444ba8
    PUSH 0x1                            ; 00444b73
    PUSH 0x3                            ; 00444b75
    PUSH ESI                            ; 00444b77
        ;   Label: LAB_00444b77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00444b78
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00444b7d
    MOV EDX,dword ptr [EBX + 0xbec4]    ; 00444b80
        ;   Label: LAB_00444b80
    PUSH EDX                            ; 00444b86
    MOV ECX,dword ptr [0x00681ef8]      ; 00444b87 | g_CSoundInstance | g_CSoundPtr
    PUSH ECX                            ; 00444b8d | g_CSoundInstance
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80 ; 00444b8e
        ;   XREF to: 005b3b80 (UNCONDITIONAL_CALL)  ; void core_sound.cpp_CSound_isSoundPlaying_FUN_005b3b80(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 00444b93
    TEST EAX,EAX                        ; 00444b96
    JZ 0x00444bce                       ; 00444b98
        ;   XREF to: 00444bce (CONDITIONAL_JUMP)  ; LAB_00444bce
    PUSH EDI                            ; 00444b9a
    PUSH EBX                            ; 00444b9b
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00444b9c
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00444ba1
    POP EDI                             ; 00444ba4
    POP ESI                             ; 00444ba5
    POP EBX                             ; 00444ba6
    RET                                 ; 00444ba7
    PUSH ESI                            ; 00444ba8
        ;   Label: LAB_00444ba8
    MOV dword ptr [EBX + 0x243c],0x0    ; 00444ba9
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 00444bb3
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00444bb8
    ADD ESP,0x4                         ; 00444bbb
    CMP EAX,0x5                         ; 00444bbe
    JZ 0x00444b80                       ; 00444bc1
        ;   XREF to: 00444b80 (CONDITIONAL_JUMP)  ; LAB_00444b80
    CMP EAX,0x4                         ; 00444bc3
    JZ 0x00444b80                       ; 00444bc6
        ;   XREF to: 00444b80 (CONDITIONAL_JUMP)  ; LAB_00444b80
    PUSH 0x1                            ; 00444bc8
    PUSH 0x4                            ; 00444bca
    JMP 0x00444b77                      ; 00444bcc
        ;   XREF to: 00444b77 (UNCONDITIONAL_JUMP)  ; LAB_00444b77
    PUSH 0x6195ad                       ; 00444bce | = "cow?.wav"
        ;   Label: LAB_00444bce
    MOV EAX,dword ptr [EBX + 0x154]     ; 00444bd3
    PUSH EBX                            ; 00444bd9
    CALL dword ptr [EAX + 0x24]         ; 00444bda
    ADD ESP,0x8                         ; 00444bdd
    MOV dword ptr [EBX + 0xbec4],EAX    ; 00444be0
    PUSH EDI                            ; 00444be6
    PUSH EBX                            ; 00444be7
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00444be8
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00444bed
    POP EDI                             ; 00444bf0
    POP ESI                             ; 00444bf1
    POP EBX                             ; 00444bf2
    RET                                 ; 00444bf3

