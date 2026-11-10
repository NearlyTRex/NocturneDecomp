; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_drone_cpp_CDrone_processDamage_FUN_004864e0(CDrone *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_drone_die_wav_005db6cd
;   TerminatedCString s_drone_hurt_wav_005db6dc
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

    PUSH EBX                            ; 004864e0
        ;   Label: core_drone.cpp_CDrone_processDamage_FUN_004864e0
    PUSH ESI                            ; 004864e1
    PUSH EDI                            ; 004864e2
    PUSH EBP                            ; 004864e3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004864e4
    MOV EDX,dword ptr [EBX + 0xc27c]    ; 004864e8
    PUSH EDX                            ; 004864ee
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004864ef
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004864f4
    MOV ECX,dword ptr [EBX + 0xc278]    ; 004864f7
    PUSH ECX                            ; 004864fd
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004864fe
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00486503
    MOV EAX,dword ptr [ESP + 0x18]      ; 00486506
    FLD float ptr [EAX + 0x4]           ; 0048650a
    FSUBR float ptr [EBX + 0x2538]      ; 0048650d
    FST float ptr [EBX + 0x2538]        ; 00486513
    FLDZ                                ; 00486519
    FCOMPP                              ; 0048651b
    FNSTSW AX                           ; 0048651d
    SAHF                                ; 0048651f
    JC 0x004865a2                       ; 00486520
        ;   XREF to: 004865a2 (CONDITIONAL_JUMP)  ; LAB_004865a2
    LEA ESI,[EBX + 0x158]               ; 00486526
    PUSH ESI                            ; 0048652c
    MOV dword ptr [EBX + 0x2538],0x0    ; 0048652d
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 00486537
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0048653c
    ADD ESP,0x4                         ; 0048653f
    CMP EAX,0x8                         ; 00486542
    JZ 0x00486559                       ; 00486545
        ;   XREF to: 00486559 (CONDITIONAL_JUMP)  ; LAB_00486559
    CMP EAX,0x7                         ; 00486547
    JZ 0x00486559                       ; 0048654a
        ;   XREF to: 00486559 (CONDITIONAL_JUMP)  ; LAB_00486559
    PUSH 0x1                            ; 0048654c
    PUSH 0x7                            ; 0048654e
    PUSH ESI                            ; 00486550
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00486551
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00486556
    MOV EBP,dword ptr [EBX + 0xc274]    ; 00486559
        ;   Label: LAB_00486559
    PUSH EBP                            ; 0048655f
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 00486560
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00486565
    MOV EAX,dword ptr [EBX + 0xc278]    ; 00486568
    PUSH EAX                            ; 0048656e
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0048656f
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 00486574
    PUSH 0x5db6cd                       ; 00486577 | = "drone-die?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 0048657c
    PUSH EBX                            ; 00486582
    CALL dword ptr [EAX + 0x2c]         ; 00486583
    ADD ESP,0x8                         ; 00486586
    MOV dword ptr [EBX + 0xc274],EAX    ; 00486589
    MOV EDX,dword ptr [ESP + 0x18]      ; 0048658f
        ;   Label: LAB_0048658f
    PUSH EDX                            ; 00486593
    PUSH EBX                            ; 00486594
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 00486595
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0048659a
    POP EBP                             ; 0048659d
    POP EDI                             ; 0048659e
    POP ESI                             ; 0048659f
    POP EBX                             ; 004865a0
    RET                                 ; 004865a1
    MOV ESI,dword ptr [EBX + 0xc278]    ; 004865a2
        ;   Label: LAB_004865a2
    PUSH ESI                            ; 004865a8
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 004865a9
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 004865ae
    MOV EDI,dword ptr [EBX + 0xc274]    ; 004865b1
    PUSH EDI                            ; 004865b7
    CALL sound_sndmain.cpp_FUN_005735a0 ; 004865b8
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 004865bd
    TEST EAX,EAX                        ; 004865c0
    JZ 0x0048662b                       ; 004865c2
        ;   XREF to: 0048662b (CONDITIONAL_JUMP)  ; LAB_0048662b
    PUSH 0x2                            ; 004865c4
        ;   Label: LAB_004865c4
    PUSH 0x0                            ; 004865c6
    CALL core_actor.cpp_getRandomInt_FUN_0040cc60 ; 004865c8
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cc60(int min_value, int max_value)
    ADD ESP,0x8                         ; 004865cd
    MOV ESI,EAX                         ; 004865d0
    TEST EAX,EAX                        ; 004865d2
    JNZ 0x004865e9                      ; 004865d4
        ;   XREF to: 004865e9 (CONDITIONAL_JUMP)  ; LAB_004865e9
    PUSH 0x1                            ; 004865d6
    PUSH 0x3                            ; 004865d8
    LEA EAX,[EBX + 0x158]               ; 004865da
    PUSH EAX                            ; 004865e0
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004865e1
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004865e6
    CMP ESI,0x1                         ; 004865e9
        ;   Label: LAB_004865e9
    JNZ 0x00486600                      ; 004865ec
        ;   XREF to: 00486600 (CONDITIONAL_JUMP)  ; LAB_00486600
    PUSH ESI                            ; 004865ee
    PUSH 0x4                            ; 004865ef
    LEA EAX,[EBX + 0x158]               ; 004865f1
    PUSH EAX                            ; 004865f7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 004865f8
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 004865fd
    CMP ESI,0x2                         ; 00486600
        ;   Label: LAB_00486600
    JNZ 0x0048658f                      ; 00486603
        ;   XREF to: 0048658f (CONDITIONAL_JUMP)  ; LAB_0048658f
    PUSH 0x1                            ; 00486605
    PUSH 0x5                            ; 00486607
    LEA EAX,[EBX + 0x158]               ; 00486609
    PUSH EAX                            ; 0048660f
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 00486610
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00486615
    MOV EDX,dword ptr [ESP + 0x18]      ; 00486618
    PUSH EDX                            ; 0048661c
    PUSH EBX                            ; 0048661d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0048661e
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00486623
    POP EBP                             ; 00486626
    POP EDI                             ; 00486627
    POP ESI                             ; 00486628
    POP EBX                             ; 00486629
    RET                                 ; 0048662a
    PUSH 0x5db6dc                       ; 0048662b | = "drone-hurt?.wav"
        ;   Label: LAB_0048662b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00486630
    PUSH EBX                            ; 00486636
    CALL dword ptr [EAX + 0x2c]         ; 00486637
    ADD ESP,0x8                         ; 0048663a
    MOV dword ptr [EBX + 0xc274],EAX    ; 0048663d
    JMP 0x004865c4                      ; 00486643
        ;   XREF to: 004865c4 (UNCONDITIONAL_JUMP)  ; LAB_004865c4

