; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_dog_cpp_CZombieDog_processDamage_FUN_004634d0(CZombieDog *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_dog2_wav_005bbc8f
;   undefined4 DAT_006045f8
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0
;   unkafter_enemy.cpp_FUN_0048a1b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004634d0
        ;   Label: core_dog.cpp_CZombieDog_processDamage_FUN_004634d0
    PUSH ESI                            ; 004634d1
    PUSH EDI                            ; 004634d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 004634d3
    MOV EDI,dword ptr [ESP + 0x14]      ; 004634d7
    FLD float ptr [EDI + 0x4]           ; 004634db
    FSUBR float ptr [EBX + 0x2538]      ; 004634de
    LEA ESI,[EBX + 0x158]               ; 004634e4
    FST float ptr [EBX + 0x2538]        ; 004634ea
    FLDZ                                ; 004634f0
    FCOMPP                              ; 004634f2
    FNSTSW AX                           ; 004634f4
    SAHF                                ; 004634f6
    JNC 0x00463557                      ; 004634f7
        ;   XREF to: 00463557 (CONDITIONAL_JUMP)  ; LAB_00463557
    PUSH dword ptr [EDI + 0x4]          ; 004634f9
    PUSH EBX                            ; 004634fc
    CALL unkafter_enemy.cpp_FUN_0048a1b0 ; 004634fd
        ;   XREF to: 0048a1b0 (UNCONDITIONAL_CALL)  ; undefined unkafter_enemy.cpp_FUN_0048a1b0()
    ADD ESP,0x8                         ; 00463502
    TEST EAX,EAX                        ; 00463505
    JZ 0x0046352b                       ; 00463507
        ;   XREF to: 0046352b (CONDITIONAL_JUMP)  ; LAB_0046352b
    PUSH 0x64                           ; 00463509
    PUSH 0x0                            ; 0046350b
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 0046350d
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00463512
    CMP EAX,0x21                        ; 00463515
    JGE 0x0046359a                      ; 00463518
        ;   XREF to: 0046359a (CONDITIONAL_JUMP)  ; LAB_0046359a
    PUSH 0x1                            ; 0046351e
    PUSH 0xd                            ; 00463520
    PUSH ESI                            ; 00463522
        ;   Label: LAB_00463522
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00463523
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00463528
    MOV EDX,dword ptr [EBX + 0xd05c]    ; 0046352b
        ;   Label: LAB_0046352b
    PUSH EDX                            ; 00463531
    MOV ECX,dword ptr [0x006045f8]      ; 00463532 | DAT_006045f8
    PUSH ECX                            ; 00463538
    CALL core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0 ; 00463539
        ;   XREF to: 00560af0 (UNCONDITIONAL_CALL)  ; int core_sound.cpp_CSound_isSoundPlaying_FUN_00560af0(CSound * this_ptr, uint sfx_handle)
    ADD ESP,0x8                         ; 0046353e
    TEST EAX,EAX                        ; 00463541
    JZ 0x004635b1                       ; 00463543
        ;   XREF to: 004635b1 (CONDITIONAL_JUMP)  ; LAB_004635b1
    PUSH EDI                            ; 00463549
    PUSH EBX                            ; 0046354a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 0046354b
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00463550
    POP EDI                             ; 00463553
    POP ESI                             ; 00463554
    POP EBX                             ; 00463555
    RET                                 ; 00463556
    PUSH ESI                            ; 00463557
        ;   Label: LAB_00463557
    MOV dword ptr [EBX + 0x2538],0x0    ; 00463558
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00463562
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00463567
    ADD ESP,0x4                         ; 0046356a
    CMP EAX,0x10                        ; 0046356d
    JGE 0x0046352b                      ; 00463570
        ;   XREF to: 0046352b (CONDITIONAL_JUMP)  ; LAB_0046352b
    PUSH 0x64                           ; 00463572
    PUSH 0x0                            ; 00463574
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00463576
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0046357b
    CMP EAX,0x21                        ; 0046357e
    JL 0x0046358e                       ; 00463581
        ;   XREF to: 0046358e (CONDITIONAL_JUMP)  ; LAB_0046358e
    CMP EAX,0x42                        ; 00463583
    JGE 0x00463594                      ; 00463586
        ;   XREF to: 00463594 (CONDITIONAL_JUMP)  ; LAB_00463594
    PUSH 0x1                            ; 00463588
    PUSH 0x11                           ; 0046358a
    JMP 0x00463522                      ; 0046358c
        ;   XREF to: 00463522 (UNCONDITIONAL_JUMP)  ; LAB_00463522
    PUSH 0x1                            ; 0046358e
        ;   Label: LAB_0046358e
    PUSH 0x10                           ; 00463590
    JMP 0x00463522                      ; 00463592
        ;   XREF to: 00463522 (UNCONDITIONAL_JUMP)  ; LAB_00463522
    PUSH 0x1                            ; 00463594
        ;   Label: LAB_00463594
    PUSH 0x12                           ; 00463596
    JMP 0x00463522                      ; 00463598
        ;   XREF to: 00463522 (UNCONDITIONAL_JUMP)  ; LAB_00463522
    CMP EAX,0x42                        ; 0046359a
        ;   Label: LAB_0046359a
    JGE 0x004635a8                      ; 0046359d
        ;   XREF to: 004635a8 (CONDITIONAL_JUMP)  ; LAB_004635a8
    PUSH 0x1                            ; 0046359f
    PUSH 0xe                            ; 004635a1
    JMP 0x00463522                      ; 004635a3
        ;   XREF to: 00463522 (UNCONDITIONAL_JUMP)  ; LAB_00463522
    PUSH 0x1                            ; 004635a8
        ;   Label: LAB_004635a8
    PUSH 0xf                            ; 004635aa
    JMP 0x00463522                      ; 004635ac
        ;   XREF to: 00463522 (UNCONDITIONAL_JUMP)  ; LAB_00463522
    PUSH 0x5bbc8f                       ; 004635b1 | = "dog2.wav"
        ;   Label: LAB_004635b1
    MOV EAX,dword ptr [EBX + 0x154]     ; 004635b6
    PUSH EBX                            ; 004635bc
    CALL dword ptr [EAX + 0x2c]         ; 004635bd
    ADD ESP,0x8                         ; 004635c0
    MOV dword ptr [EBX + 0xd05c],EAX    ; 004635c3
    PUSH EDI                            ; 004635c9
    PUSH EBX                            ; 004635ca
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 004635cb
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 004635d0
    POP EDI                             ; 004635d3
    POP ESI                             ; 004635d4
    POP EBX                             ; 004635d5
    RET                                 ; 004635d6

