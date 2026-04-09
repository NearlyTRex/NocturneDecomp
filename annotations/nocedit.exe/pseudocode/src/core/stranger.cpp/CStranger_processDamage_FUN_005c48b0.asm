; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_005c48b0(CStranger *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_CBugs_00653d1c
;   TerminatedCString s_Using_auto_health_00653d22
;   TerminatedCString s_hit_points_3_2f_00653d35
;   TerminatedCString s_stranger_die_wav_00653d48
;   TerminatedCString s_stranger_hit_wav_00653d5b
;   float FLOAT_00653d70 = 50
;   float FLOAT_00663738 = 2
;   CConsole* g_CConsolePtr = 0083b1a4
;   CGame* g_CGamePtr = 02d81a9c
;   CGore* g_CGorePtr = 02d83364
;   CConsole g_CConsoleInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.auto_use_health
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030
;   core_hero.cpp_CHero_stopNearbyInteraction_FUN_004f3580
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   engine_console.cpp_CConsole_printf_FUN_00441890
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c48b0
        ;   Label: core_stranger.cpp_CStranger_processDamage_FUN_005c48b0
    PUSH ESI                            ; 005c48b1
    PUSH EDI                            ; 005c48b2
    PUSH EBP                            ; 005c48b3
    MOV EBP,ESP                         ; 005c48b4
    SUB ESP,0x4                         ; 005c48b6
    MOV EBX,dword ptr [EBP + 0x14]      ; 005c48b9
    MOV ESI,dword ptr [EBP + 0x18]      ; 005c48bc
    MOV EAX,[0x0067b654]                ; 005c48bf | g_CGamePtr
    CMP dword ptr [EAX + 0x1d0],0x0     ; 005c48c4 | g_CGameInstance.god_mode_enabled
    JNZ 0x005c4b0c                      ; 005c48cb
        ;   XREF to: 005c4b0c (CONDITIONAL_JUMP)  ; LAB_005c4b0c
    MOV EAX,[0x0067b654]                ; 005c48d1 | g_CGamePtr | g_CGameInstance
        ;   Label: LAB_005c48d1
    MOV ECX,dword ptr [EAX + 0x22c]     ; 005c48d6 | g_CGameInstance.allow_damage_flag
    TEST ECX,ECX                        ; 005c48dc
    JNZ 0x005c48e3                      ; 005c48de
        ;   XREF to: 005c48e3 (CONDITIONAL_JUMP)  ; LAB_005c48e3
    MOV dword ptr [ESI + 0x4],ECX       ; 005c48e0
    PUSH EBX                            ; 005c48e3
        ;   Label: LAB_005c48e3
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004f3580 ; 005c48e4
        ;   XREF to: 004f3580 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004f3580(CHero * this_ptr)
    FLD float ptr [EBX + 0xbe24]        ; 005c48e9
    FLDZ                                ; 005c48ef
    ADD ESP,0x4                         ; 005c48f1
    FCOMPP                              ; 005c48f4
    FNSTSW AX                           ; 005c48f6
    SAHF                                ; 005c48f8
    JNC 0x005c4905                      ; 005c48f9
        ;   XREF to: 005c4905 (CONDITIONAL_JUMP)  ; LAB_005c4905
    CMP dword ptr [ESI + 0x30],0xb      ; 005c48fb
    JG 0x005c4b18                       ; 005c48ff
        ;   XREF to: 005c4b18 (CONDITIONAL_JUMP)  ; LAB_005c4b18
    FLD float ptr [0x00663738]          ; 005c4905 | FLOAT_00663738
        ;   Label: LAB_005c4905
    PUSH 0x653d1c                       ; 005c490b | = "CBugs"
    FSTP float ptr [EBX + 0xbe24]       ; 005c4910
    MOV EAX,dword ptr [ESI + 0x38]      ; 005c4916
    PUSH EAX                            ; 005c4919
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 005c491a
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 005c491f
    TEST EAX,EAX                        ; 005c4922
    JZ 0x005c4930                       ; 005c4924
        ;   XREF to: 005c4930 (CONDITIONAL_JUMP)  ; LAB_005c4930
    MOV dword ptr [EBX + 0xbe24],0x3e19999a ; 005c4926
    FLD float ptr [ESI + 0x4]           ; 005c4930
        ;   Label: LAB_005c4930
    FSUBR float ptr [EBX + 0x243c]      ; 005c4933
    MOV EAX,[0x0067b654]                ; 005c4939 | g_CGamePtr
    FSTP float ptr [EBX + 0x243c]       ; 005c493e
    CMP dword ptr [EAX + 0xc8],0x0      ; 005c4944 | g_CGameInstance.auto_use_health
    JZ 0x005c49ae                       ; 005c494b
        ;   XREF to: 005c49ae (CONDITIONAL_JUMP)  ; LAB_005c49ae
    CMP dword ptr [ESI + 0x30],0xb      ; 005c494d
    JLE 0x005c49ae                      ; 005c4951
        ;   XREF to: 005c49ae (CONDITIONAL_JUMP)  ; LAB_005c49ae
    FLD float ptr [EBX + 0x243c]        ; 005c4953
    FLDZ                                ; 005c4959
    FCOMPP                              ; 005c495b
    FNSTSW AX                           ; 005c495d
    SAHF                                ; 005c495f
    JC 0x005c49ae                       ; 005c4960
        ;   XREF to: 005c49ae (CONDITIONAL_JUMP)  ; LAB_005c49ae
    PUSH 0x653d22                       ; 005c4962 | = "Using auto health\n"
    MOV EDI,dword ptr [0x0066e8e0]      ; 005c4967 | g_CConsolePtr
    PUSH EDI                            ; 005c496d | g_CConsoleInstance
    MOV dword ptr [EBX + 0x243c],0x0    ; 005c496e
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c4978
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 005c497d
    LEA EAX,[EBX + 0x1f738]             ; 005c4980
    PUSH EAX                            ; 005c4986
    CALL core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570 ; 005c4987
        ;   XREF to: 00501570 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_autoUseHealthItem_FUN_00501570(CInventory * this_ptr)
    ADD ESP,0x4                         ; 005c498c
    SUB ESP,0x8                         ; 005c498f
    FLD float ptr [EBX + 0x243c]        ; 005c4992
    FSTP double ptr [ESP]               ; 005c4998
    PUSH 0x653d35                       ; 005c499b | = "hit points: %3.2f\n"
    MOV EAX,[0x0066e8e0]                ; 005c49a0 | g_CConsolePtr
    PUSH EAX                            ; 005c49a5 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00441890 ; 005c49a6
        ;   XREF to: 00441890 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00441890(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 005c49ab
    FLD float ptr [EBX + 0x243c]        ; 005c49ae
        ;   Label: LAB_005c49ae
    FLDZ                                ; 005c49b4
    LEA EDI,[EBX + 0x158]               ; 005c49b6
    FCOMPP                              ; 005c49bc
    FNSTSW AX                           ; 005c49be
    SAHF                                ; 005c49c0
    JC 0x005c4b7c                       ; 005c49c1
        ;   XREF to: 005c4b7c (CONDITIONAL_JUMP)  ; LAB_005c4b7c
    PUSH EBX                            ; 005c49c7
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c49c8
    MOV dword ptr [EBX + 0x243c],0x0    ; 005c49ce
    CALL dword ptr [EAX + 0x104]        ; 005c49d8
    ADD ESP,0x4                         ; 005c49de
    PUSH EDI                            ; 005c49e1
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c49e2
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005c49e7
    ADD ESP,0x4                         ; 005c49ea
    CMP EAX,0x29                        ; 005c49ed
    JZ 0x005c4a86                       ; 005c49f0
        ;   XREF to: 005c4a86 (CONDITIONAL_JUMP)  ; LAB_005c4a86
    PUSH EDI                            ; 005c49f6
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 005c49f7
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 005c49fc
    ADD ESP,0x4                         ; 005c49ff
    CMP EAX,0x28                        ; 005c4a02
    JZ 0x005c4a86                       ; 005c4a05
        ;   XREF to: 005c4a86 (CONDITIONAL_JUMP)  ; LAB_005c4a86
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 005c4a0b
    JZ 0x005c4b26                       ; 005c4a12
        ;   XREF to: 005c4b26 (CONDITIONAL_JUMP)  ; LAB_005c4b26
    PUSH 0x1                            ; 005c4a18
        ;   Label: LAB_005c4a18
    PUSH 0xf                            ; 005c4a1a
    LEA EAX,[EBX + 0x158]               ; 005c4a1c
    MOV dword ptr [EBX + 0x1fbac],0x0   ; 005c4a22
    PUSH EAX                            ; 005c4a2c
    MOV dword ptr [EBX + 0x1fc28],0x0   ; 005c4a2d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c4a37
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_005c4a37
    ADD ESP,0xc                         ; 005c4a3c
    MOV ECX,dword ptr [EBX + 0x1fe68]   ; 005c4a3f
    PUSH ECX                            ; 005c4a45
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 005c4a46
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    MOV EDI,dword ptr [ESI + 0x30]      ; 005c4a4b
    ADD ESP,0x4                         ; 005c4a4e
    CMP EDI,0x1                         ; 005c4a51
    JZ 0x005c4a6e                       ; 005c4a54
        ;   XREF to: 005c4a6e (CONDITIONAL_JUMP)  ; LAB_005c4a6e
    PUSH 0x653d48                       ; 005c4a56 | = "stranger_die??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c4a5b
    PUSH EBX                            ; 005c4a61
    CALL dword ptr [EAX + 0x24]         ; 005c4a62
    ADD ESP,0x8                         ; 005c4a65
    MOV dword ptr [EBX + 0x1fe68],EAX   ; 005c4a68
    PUSH 0x0                            ; 005c4a6e
        ;   Label: LAB_005c4a6e
    PUSH 0x42480000                     ; 005c4a70
    PUSH 0x32                           ; 005c4a75
    PUSH EBX                            ; 005c4a77
    MOV EAX,[0x0067b9a0]                ; 005c4a78 | g_CGorePtr | g_CGoreInstance
    PUSH EAX                            ; 005c4a7d | g_CGoreInstance
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030 ; 005c4a7e
        ;   XREF to: 004ee030 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004ee030(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 005c4a83
    MOV EDX,dword ptr [EBX + 0x1fc2c]   ; 005c4a86
        ;   Label: LAB_005c4a86
    CMP EDX,dword ptr [EBX + 0x24b4]    ; 005c4a8c
    JNZ 0x005c4a9e                      ; 005c4a92
        ;   XREF to: 005c4a9e (CONDITIONAL_JUMP)  ; LAB_005c4a9e
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c4a94
    PUSH 0x0                            ; 005c4a9e
        ;   Label: LAB_005c4a9e
    PUSH 0x0                            ; 005c4aa0
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c4aa2
    PUSH EBX                            ; 005c4aa8
    CALL dword ptr [EAX + 0x13c]        ; 005c4aa9
    MOV EAX,dword ptr [EBX + 0x24f8]    ; 005c4aaf
    MOV ECX,dword ptr [EBX + 0x1fc2c]   ; 005c4ab5
    ADD ESP,0xc                         ; 005c4abb
    CMP EAX,ECX                         ; 005c4abe
    JNZ 0x005c4acc                      ; 005c4ac0
        ;   XREF to: 005c4acc (CONDITIONAL_JUMP)  ; LAB_005c4acc
    MOV dword ptr [EBX + 0x1fc2c],0x0   ; 005c4ac2
    PUSH 0x0                            ; 005c4acc
        ;   Label: LAB_005c4acc
    PUSH 0x1                            ; 005c4ace
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c4ad0
    PUSH EBX                            ; 005c4ad6
    CALL dword ptr [EAX + 0x13c]        ; 005c4ad7
    ADD ESP,0xc                         ; 005c4add
    FLD float ptr [ESI + 0x4]           ; 005c4ae0
        ;   Label: LAB_005c4ae0
    FLDZ                                ; 005c4ae3
    FCOMPP                              ; 005c4ae5
    FNSTSW AX                           ; 005c4ae7
    SAHF                                ; 005c4ae9
    JNC 0x005c4afb                      ; 005c4aea
        ;   XREF to: 005c4afb (CONDITIONAL_JUMP)  ; LAB_005c4afb
    MOV EDI,dword ptr [0x0067b654]      ; 005c4aec | g_CGamePtr
    PUSH EDI                            ; 005c4af2 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0 ; 005c4af3
        ;   XREF to: 004e0bd0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004e0bd0(CGame * this_ptr)
    ADD ESP,0x4                         ; 005c4af8
    PUSH ESI                            ; 005c4afb
        ;   Label: LAB_005c4afb
    PUSH EBX                            ; 005c4afc
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0 ; 005c4afd
        ;   XREF to: 0042c3c0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_0042c3c0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005c4b02
    MOV ESP,EBP                         ; 005c4b05
    POP EBP                             ; 005c4b07
    POP EDI                             ; 005c4b08
    POP ESI                             ; 005c4b09
    POP EBX                             ; 005c4b0a
    RET                                 ; 005c4b0b
    MOV dword ptr [ESI + 0x4],0x0       ; 005c4b0c
        ;   Label: LAB_005c4b0c
    JMP 0x005c48d1                      ; 005c4b13
        ;   XREF to: 005c48d1 (UNCONDITIONAL_JUMP)  ; LAB_005c48d1
    MOV dword ptr [ESI + 0x4],0x0       ; 005c4b18
        ;   Label: LAB_005c4b18
    MOV ESP,EBP                         ; 005c4b1f
    POP EBP                             ; 005c4b21
    POP EDI                             ; 005c4b22
    POP ESI                             ; 005c4b23
    POP EBX                             ; 005c4b24
    RET                                 ; 005c4b25
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005c4b26
        ;   Label: LAB_005c4b26
    JNZ 0x005c4a18                      ; 005c4b2d
        ;   XREF to: 005c4a18 (CONDITIONAL_JUMP)  ; LAB_005c4a18
    MOV EDX,dword ptr [ESI + 0x30]      ; 005c4b33
    CMP EDX,0x1                         ; 005c4b36
    JNZ 0x005c4b44                      ; 005c4b39
        ;   XREF to: 005c4b44 (CONDITIONAL_JUMP)  ; LAB_005c4b44
    PUSH EDX                            ; 005c4b3b
    PUSH 0x27                           ; 005c4b3c
    PUSH EDI                            ; 005c4b3e
    JMP 0x005c4a37                      ; 005c4b3f
        ;   XREF to: 005c4a37 (UNCONDITIONAL_JUMP)  ; LAB_005c4a37
    PUSH 0x1                            ; 005c4b44
        ;   Label: LAB_005c4b44
    PUSH 0x42c80000                     ; 005c4b46
    PUSH 0x0                            ; 005c4b4b
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10 ; 005c4b4d
        ;   XREF to: 0040cc10 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cc10(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 005c4b52
    ADD ESP,0x8                         ; 005c4b55
    FLD float ptr [EBP + -0x4]          ; 005c4b58
    FCOMP float ptr [0x00653d70]        ; 005c4b5b | FLOAT_00653d70
    FNSTSW AX                           ; 005c4b61
    SAHF                                ; 005c4b63
    SETBE AL                            ; 005c4b64
    AND EAX,0xff                        ; 005c4b67
    ADD EAX,0x25                        ; 005c4b6c
    PUSH EAX                            ; 005c4b6f
    LEA EAX,[EBX + 0x158]               ; 005c4b70
    PUSH EAX                            ; 005c4b76
    JMP 0x005c4a37                      ; 005c4b77
        ;   XREF to: 005c4a37 (UNCONDITIONAL_JUMP)  ; LAB_005c4a37
    FLD float ptr [ESI + 0x4]           ; 005c4b7c
        ;   Label: LAB_005c4b7c
    FLDZ                                ; 005c4b7f
    FCOMPP                              ; 005c4b81
    FNSTSW AX                           ; 005c4b83
    SAHF                                ; 005c4b85
    JNC 0x005c4ae0                      ; 005c4b86
        ;   XREF to: 005c4ae0 (CONDITIONAL_JUMP)  ; LAB_005c4ae0
    CMP dword ptr [ESI + 0x30],0x69     ; 005c4b8c
    JZ 0x005c4be2                       ; 005c4b90
        ;   XREF to: 005c4be2 (CONDITIONAL_JUMP)  ; LAB_005c4be2
    CMP dword ptr [EBX + 0x1fbac],0x0   ; 005c4b92
    JNZ 0x005c4be2                      ; 005c4b99
        ;   XREF to: 005c4be2 (CONDITIONAL_JUMP)  ; LAB_005c4be2
    CMP dword ptr [EBX + 0x1fc28],0x0   ; 005c4b9b
    JNZ 0x005c4be2                      ; 005c4ba2
        ;   XREF to: 005c4be2 (CONDITIONAL_JUMP)  ; LAB_005c4be2
    CMP dword ptr [EBX + 0x1fc38],0x0   ; 005c4ba4
    JNZ 0x005c4be2                      ; 005c4bab
        ;   XREF to: 005c4be2 (CONDITIONAL_JUMP)  ; LAB_005c4be2
    MOV ECX,dword ptr [0x03f873dc]      ; 005c4bad | g_CTommyGunClassInfo.name_hash
    PUSH ECX                            ; 005c4bb3
    MOV EAX,dword ptr [ESI + 0x34]      ; 005c4bb4
    PUSH EAX                            ; 005c4bb7
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005c4bb8
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005c4bbd
    TEST EAX,EAX                        ; 005c4bc0
    JZ 0x005c4bd5                       ; 005c4bc2
        ;   XREF to: 005c4bd5 (CONDITIONAL_JUMP)  ; LAB_005c4bd5
    PUSH 0x3eaa7efa                     ; 005c4bc4
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005c4bc9
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005c4bce
    TEST EAX,EAX                        ; 005c4bd1
    JZ 0x005c4be2                       ; 005c4bd3
        ;   XREF to: 005c4be2 (CONDITIONAL_JUMP)  ; LAB_005c4be2
    PUSH 0x1                            ; 005c4bd5
        ;   Label: LAB_005c4bd5
    PUSH 0x24                           ; 005c4bd7
    PUSH EDI                            ; 005c4bd9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005c4bda
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005c4bdf
    MOV EDX,dword ptr [EBX + 0x1fe68]   ; 005c4be2
        ;   Label: LAB_005c4be2
    PUSH EDX                            ; 005c4be8
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005c4be9
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005c4bee
    TEST EAX,EAX                        ; 005c4bf1
    JNZ 0x005c4ae0                      ; 005c4bf3
        ;   XREF to: 005c4ae0 (CONDITIONAL_JUMP)  ; LAB_005c4ae0
    PUSH 0x653d5b                       ; 005c4bf9 | = "stranger_hit??.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 005c4bfe
    PUSH EBX                            ; 005c4c04
    CALL dword ptr [EAX + 0x24]         ; 005c4c05
    ADD ESP,0x8                         ; 005c4c08
    MOV dword ptr [EBX + 0x1fe68],EAX   ; 005c4c0b
    JMP 0x005c4ae0                      ; 005c4c11
        ;   XREF to: 005c4ae0 (UNCONDITIONAL_JUMP)  ; LAB_005c4ae0

