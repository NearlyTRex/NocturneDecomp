; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_0045eb20(CZombieDog *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_dog2_wav_005d0947
;   undefined4 DAT_0061c068
;
; Called Functions:
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045eb20
        ;   Label: core_dog.cpp_CZombieDog_processDamage_FUN_0045eb20
    PUSH ESI                            ; 0045eb21
    MOV EBX,dword ptr [ESP + 0xc]       ; 0045eb22
    MOV EAX,dword ptr [ESP + 0x10]      ; 0045eb26
    FLD float ptr [EAX + 0x4]           ; 0045eb2a
    FSUBR float ptr [EBX + 0x25a8]      ; 0045eb2d
    LEA ESI,[EBX + 0x2b4]               ; 0045eb33
    FST float ptr [EBX + 0x25a8]        ; 0045eb39
    FLDZ                                ; 0045eb3f
    FCOMPP                              ; 0045eb41
    FNSTSW AX                           ; 0045eb43
    SAHF                                ; 0045eb45
    JNC 0x0045eb80                      ; 0045eb46
        ;   XREF to: 0045eb80 (CONDITIONAL_JUMP)  ; LAB_0045eb80
    PUSH 0x1                            ; 0045eb48
    PUSH 0x5                            ; 0045eb4a
    PUSH ESI                            ; 0045eb4c
        ;   Label: LAB_0045eb4c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0045eb4d
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0045eb52
    MOV EDX,dword ptr [EBX + 0x10b00]   ; 0045eb55
        ;   Label: LAB_0045eb55
    PUSH EDX                            ; 0045eb5b
    MOV ECX,dword ptr [0x0061c068]      ; 0045eb5c | DAT_0061c068
    PUSH ECX                            ; 0045eb62
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70 ; 0045eb63
        ;   XREF to: 0055af70 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_0055af70(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0045eb68
    TEST EAX,EAX                        ; 0045eb6b
    JZ 0x0045eba6                       ; 0045eb6d
        ;   XREF to: 0045eba6 (CONDITIONAL_JUMP)  ; LAB_0045eba6
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045eb6f
    PUSH ESI                            ; 0045eb73
    PUSH EBX                            ; 0045eb74
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0045eb75
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0045eb7a
    POP ESI                             ; 0045eb7d
    POP EBX                             ; 0045eb7e
    RET                                 ; 0045eb7f
    PUSH ESI                            ; 0045eb80
        ;   Label: LAB_0045eb80
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0045eb81
    CALL core_motion.cpp_FUN_005035c0   ; 0045eb8b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0045eb90
    ADD ESP,0x4                         ; 0045eb93
    CMP EAX,0x7                         ; 0045eb96
    JZ 0x0045eb55                       ; 0045eb99
        ;   XREF to: 0045eb55 (CONDITIONAL_JUMP)  ; LAB_0045eb55
    CMP EAX,0x6                         ; 0045eb9b
    JZ 0x0045eb55                       ; 0045eb9e
        ;   XREF to: 0045eb55 (CONDITIONAL_JUMP)  ; LAB_0045eb55
    PUSH 0x1                            ; 0045eba0
    PUSH 0x6                            ; 0045eba2
    JMP 0x0045eb4c                      ; 0045eba4
        ;   XREF to: 0045eb4c (UNCONDITIONAL_JUMP)  ; LAB_0045eb4c
    PUSH 0x5d0947                       ; 0045eba6 | = "dog2.wav"
        ;   Label: LAB_0045eba6
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0045ebab
    PUSH EBX                            ; 0045ebb1
    CALL dword ptr [EAX + 0x34]         ; 0045ebb2
    ADD ESP,0x8                         ; 0045ebb5
    MOV dword ptr [EBX + 0x10b00],EAX   ; 0045ebb8
    MOV ESI,dword ptr [ESP + 0x10]      ; 0045ebbe
    PUSH ESI                            ; 0045ebc2
    PUSH EBX                            ; 0045ebc3
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0045ebc4
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0045ebc9
    POP ESI                             ; 0045ebcc
    POP EBX                             ; 0045ebcd
    RET                                 ; 0045ebce

