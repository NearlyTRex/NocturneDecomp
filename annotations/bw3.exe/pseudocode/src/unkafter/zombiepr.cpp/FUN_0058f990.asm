; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkafter_zombiepr_cpp_FUN_0058f990(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 s_mobster_die_wav_005d8ccf+1
;   TerminatedCString s_mobster_hit_wav_005d8ce2
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_FUN_0040cf40
;   core_enemy.cpp_FUN_00489b80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;   unkafter_zombiepr.cpp_FUN_0058f630
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058f990
        ;   Label: unkafter_zombiepr.cpp_FUN_0058f990
    PUSH ESI                            ; 0058f991
    PUSH EDI                            ; 0058f992
    PUSH EBP                            ; 0058f993
    MOV EBX,dword ptr [ESP + 0x14]      ; 0058f994
    MOV EDI,dword ptr [ESP + 0x18]      ; 0058f998
    MOV EDX,dword ptr [EBX + 0xd0dc]    ; 0058f99c
    PUSH EDX                            ; 0058f9a2
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0058f9a3
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0058f9a8
    PUSH EDI                            ; 0058f9ab
    PUSH EBX                            ; 0058f9ac
    CALL unkafter_zombiepr.cpp_FUN_0058f630 ; 0058f9ad
        ;   XREF to: 0058f630 (UNCONDITIONAL_CALL)  ; undefined unkafter_zombiepr.cpp_FUN_0058f630()
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 0058f9b2
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0058f9b8
    ADD ESP,0x8                         ; 0058f9bf
    TEST ECX,ECX                        ; 0058f9c2
    JNZ 0x0058f9dd                      ; 0058f9c4
        ;   XREF to: 0058f9dd (CONDITIONAL_JUMP)  ; LAB_0058f9dd
    MOV EAX,dword ptr [EBX + 0xd0ec]    ; 0058f9c6
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0058f9cc
    JNZ 0x0058f9dd                      ; 0058f9d4
        ;   XREF to: 0058f9dd (CONDITIONAL_JUMP)  ; LAB_0058f9dd
    MOV dword ptr [EDI + 0x4],0x461c3f9a ; 0058f9d6
    FLD float ptr [EDI + 0x4]           ; 0058f9dd
        ;   Label: LAB_0058f9dd
    FSUBR float ptr [EBX + 0x2538]      ; 0058f9e0
    LEA ESI,[EBX + 0x158]               ; 0058f9e6
    FST float ptr [EBX + 0x2538]        ; 0058f9ec
    FLDZ                                ; 0058f9f2
    FCOMPP                              ; 0058f9f4
    FNSTSW AX                           ; 0058f9f6
    SAHF                                ; 0058f9f8
    JNC 0x0058fa56                      ; 0058f9f9
        ;   XREF to: 0058fa56 (CONDITIONAL_JUMP)  ; LAB_0058fa56
    MOV EBP,dword ptr [0x02cfd794]      ; 0058f9fb | g_CTommyGunClassInfo.name_hash
    PUSH EBP                            ; 0058fa01
    MOV EAX,dword ptr [EDI + 0x34]      ; 0058fa02
    PUSH EAX                            ; 0058fa05
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0058fa06
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0058fa0b
    TEST EAX,EAX                        ; 0058fa0e
    JZ 0x0058fa23                       ; 0058fa10
        ;   XREF to: 0058fa23 (CONDITIONAL_JUMP)  ; LAB_0058fa23
    PUSH 0x3f000000                     ; 0058fa12
    CALL core_actor.cpp_FUN_0040cf40    ; 0058fa17
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 0058fa1c
    TEST EAX,EAX                        ; 0058fa1f
    JZ 0x0058fa30                       ; 0058fa21
        ;   XREF to: 0058fa30 (CONDITIONAL_JUMP)  ; LAB_0058fa30
    PUSH 0x1                            ; 0058fa23
        ;   Label: LAB_0058fa23
    PUSH 0x3                            ; 0058fa25
    PUSH ESI                            ; 0058fa27
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058fa28
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058fa2d
    MOV EDX,dword ptr [EBX + 0xd0d4]    ; 0058fa30
        ;   Label: LAB_0058fa30
    PUSH EDX                            ; 0058fa36
    CALL sound_sndmain.cpp_FUN_00556700 ; 0058fa37
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 0058fa3c
    TEST EAX,EAX                        ; 0058fa3f
    JZ 0x0058faeb                       ; 0058fa41
        ;   XREF to: 0058faeb (CONDITIONAL_JUMP)  ; LAB_0058faeb
    PUSH EDI                            ; 0058fa47
        ;   Label: LAB_0058fa47
    PUSH EBX                            ; 0058fa48
    CALL core_enemy.cpp_FUN_00489b80    ; 0058fa49
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058fa4e
    POP EBP                             ; 0058fa51
    POP EDI                             ; 0058fa52
    POP ESI                             ; 0058fa53
    POP EBX                             ; 0058fa54
    RET                                 ; 0058fa55
    PUSH ESI                            ; 0058fa56
        ;   Label: LAB_0058fa56
    MOV dword ptr [EBX + 0x2538],0x0    ; 0058fa57
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 0058fa61
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058fa66
    ADD ESP,0x4                         ; 0058fa69
    CMP EAX,0x5                         ; 0058fa6c
    JZ 0x0058fa47                       ; 0058fa6f
        ;   XREF to: 0058fa47 (CONDITIONAL_JUMP)  ; LAB_0058fa47
    CMP EAX,0x4                         ; 0058fa71
    JZ 0x0058fa47                       ; 0058fa74
        ;   XREF to: 0058fa47 (CONDITIONAL_JUMP)  ; LAB_0058fa47
    PUSH 0x1                            ; 0058fa76
    PUSH 0x4                            ; 0058fa78
    PUSH ESI                            ; 0058fa7a
    MOV dword ptr [EBX + 0x2540],0x0    ; 0058fa7b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0058fa85
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058fa8a
    PUSH 0x0                            ; 0058fa8d
    PUSH 0x1                            ; 0058fa8f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058fa91
    PUSH EBX                            ; 0058fa97
    CALL dword ptr [EAX + 0x128]        ; 0058fa98
    MOV ECX,dword ptr [EBX + 0xd0d8]    ; 0058fa9e
    ADD ESP,0xc                         ; 0058faa4
    TEST ECX,ECX                        ; 0058faa7
    JNZ 0x0058fa47                      ; 0058faa9
        ;   XREF to: 0058fa47 (CONDITIONAL_JUMP)  ; LAB_0058fa47
    MOV ESI,dword ptr [EBX + 0xd0d4]    ; 0058faab
    PUSH ESI                            ; 0058fab1
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 0058fab2
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    ADD ESP,0x4                         ; 0058fab7
    PUSH 0x5d8cd0                       ; 0058faba | s_mobster_die_wav_005d8ccf+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058fabf
    PUSH EBX                            ; 0058fac5
    CALL dword ptr [EAX + 0x2c]         ; 0058fac6
    MOV dword ptr [EBX + 0xd0d8],0x1    ; 0058fac9
    ADD ESP,0x8                         ; 0058fad3
    MOV dword ptr [EBX + 0xd0d4],EAX    ; 0058fad6
    PUSH EDI                            ; 0058fadc
    PUSH EBX                            ; 0058fadd
    CALL core_enemy.cpp_FUN_00489b80    ; 0058fade
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058fae3
    POP EBP                             ; 0058fae6
    POP EDI                             ; 0058fae7
    POP ESI                             ; 0058fae8
    POP EBX                             ; 0058fae9
    RET                                 ; 0058faea
    PUSH 0x5d8ce2                       ; 0058faeb | = "mobster-hit-?.wav"
        ;   Label: LAB_0058faeb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0058faf0
    PUSH EBX                            ; 0058faf6
    CALL dword ptr [EAX + 0x2c]         ; 0058faf7
    ADD ESP,0x8                         ; 0058fafa
    MOV dword ptr [EBX + 0xd0d4],EAX    ; 0058fafd
    PUSH EDI                            ; 0058fb03
    PUSH EBX                            ; 0058fb04
    CALL core_enemy.cpp_FUN_00489b80    ; 0058fb05
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; undefined core_enemy.cpp_FUN_00489b80()
    ADD ESP,0x8                         ; 0058fb0a
    POP EBP                             ; 0058fb0d
    POP EDI                             ; 0058fb0e
    POP ESI                             ; 0058fb0f
    POP EBX                             ; 0058fb10
    RET                                 ; 0058fb11

