; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_stranger_cpp_CStranger_processDamage_FUN_0056d060(CStranger *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CStranger *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005ebced
;   TerminatedCString s_Using_auto_health_005ebcf3
;   TerminatedCString s_hit_points_3_2f_005ebd06
;   TerminatedCString s_stranger_die_wav_005ebd19
;   TerminatedCString s_stranger_hit_wav_005ebd2c
;   undefined4 DAT_005ebd41
;   undefined4 DAT_005fc1c8
;   CConsole* g_CConsolePtr = 007c158c
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   CConsole g_CConsoleInstance
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.auto_use_health
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;   ... and 1 more
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c8f0
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60
;   core_actor.cpp_isOfClass_FUN_0040c840
;   core_actor.cpp_randomChance_FUN_0040d060
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;   core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0
;   core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   engine_console.cpp_CConsole_printf_FUN_00436710
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056d060
        ;   Label: core_stranger.cpp_CStranger_processDamage_FUN_0056d060
    PUSH ESI                            ; 0056d061
    PUSH EDI                            ; 0056d062
    PUSH EBP                            ; 0056d063
    MOV EBP,ESP                         ; 0056d064
    SUB ESP,0x4                         ; 0056d066
    MOV EBX,dword ptr [EBP + 0x14]      ; 0056d069
    MOV ESI,dword ptr [EBP + 0x18]      ; 0056d06c
    MOV EDX,dword ptr [EBX + 0x281c]    ; 0056d06f
    TEST EDX,EDX                        ; 0056d075
    JNZ 0x0056d2c3                      ; 0056d077
        ;   XREF to: 0056d2c3 (CONDITIONAL_JUMP)  ; LAB_0056d2c3
    MOV EAX,[0x00616494]                ; 0056d07d | g_CGamePtr
    CMP dword ptr [EAX + 0x1ec],0x0     ; 0056d082 | g_CGameInstance.god_mode_enabled
    JNZ 0x0056d2ca                      ; 0056d089
        ;   XREF to: 0056d2ca (CONDITIONAL_JUMP)  ; LAB_0056d2ca
    MOV EAX,[0x00616494]                ; 0056d08f | g_CGamePtr
        ;   Label: LAB_0056d08f
    MOV EDI,dword ptr [EAX + 0x248]     ; 0056d094 | g_CGameInstance.allow_damage_flag
    TEST EDI,EDI                        ; 0056d09a
    JNZ 0x0056d0a1                      ; 0056d09c
        ;   XREF to: 0056d0a1 (CONDITIONAL_JUMP)  ; LAB_0056d0a1
    MOV dword ptr [ESI + 0x4],EDI       ; 0056d09e
    PUSH EBX                            ; 0056d0a1
        ;   Label: LAB_0056d0a1
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0 ; 0056d0a2
        ;   XREF to: 004cfad0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004cfad0(CHero * this_ptr)
    FLD float ptr [EBX + 0x10a60]       ; 0056d0a7
    FLDZ                                ; 0056d0ad
    ADD ESP,0x4                         ; 0056d0af
    FCOMPP                              ; 0056d0b2
    FNSTSW AX                           ; 0056d0b4
    SAHF                                ; 0056d0b6
    JNC 0x0056d0c3                      ; 0056d0b7
        ;   XREF to: 0056d0c3 (CONDITIONAL_JUMP)  ; LAB_0056d0c3
    CMP dword ptr [ESI + 0x30],0xb      ; 0056d0b9
    JG 0x0056d2d2                       ; 0056d0bd
        ;   XREF to: 0056d2d2 (CONDITIONAL_JUMP)  ; LAB_0056d2d2
    FLD float ptr [0x005fc1c8]          ; 0056d0c3 | DAT_005fc1c8
        ;   Label: LAB_0056d0c3
    PUSH 0x5ebced                       ; 0056d0c9 | = "CBugs"
    FSTP float ptr [EBX + 0x10a60]      ; 0056d0ce
    MOV EDX,dword ptr [ESI + 0x38]      ; 0056d0d4
    PUSH EDX                            ; 0056d0d7
    CALL core_actor.cpp_isOfClass_FUN_0040c840 ; 0056d0d8
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c840(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 0056d0dd
    TEST EAX,EAX                        ; 0056d0e0
    JZ 0x0056d0ee                       ; 0056d0e2
        ;   XREF to: 0056d0ee (CONDITIONAL_JUMP)  ; LAB_0056d0ee
    MOV dword ptr [EBX + 0x10a60],0x3e19999a ; 0056d0e4
    FLD float ptr [ESI + 0x4]           ; 0056d0ee
        ;   Label: LAB_0056d0ee
    FSUBR float ptr [EBX + 0x25a8]      ; 0056d0f1
    MOV EAX,[0x00616494]                ; 0056d0f7 | g_CGamePtr
    FSTP float ptr [EBX + 0x25a8]       ; 0056d0fc
    CMP dword ptr [EAX + 0xdc],0x0      ; 0056d102 | g_CGameInstance.auto_use_health
    JZ 0x0056d16c                       ; 0056d109
        ;   XREF to: 0056d16c (CONDITIONAL_JUMP)  ; LAB_0056d16c
    CMP dword ptr [ESI + 0x30],0xb      ; 0056d10b
    JLE 0x0056d16c                      ; 0056d10f
        ;   XREF to: 0056d16c (CONDITIONAL_JUMP)  ; LAB_0056d16c
    FLD float ptr [EBX + 0x25a8]        ; 0056d111
    FLDZ                                ; 0056d117
    FCOMPP                              ; 0056d119
    FNSTSW AX                           ; 0056d11b
    SAHF                                ; 0056d11d
    JC 0x0056d16c                       ; 0056d11e
        ;   XREF to: 0056d16c (CONDITIONAL_JUMP)  ; LAB_0056d16c
    PUSH 0x5ebcf3                       ; 0056d120 | = "Using auto health\n"
    MOV EAX,[0x00609ed0]                ; 0056d125 | g_CConsolePtr
    PUSH EAX                            ; 0056d12a | g_CConsoleInstance
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0056d12b
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0056d135
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x8                         ; 0056d13a
    LEA EAX,[EBX + 0x2437c]             ; 0056d13d
    PUSH EAX                            ; 0056d143
    CALL core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010 ; 0056d144
        ;   XREF to: 004df010 (UNCONDITIONAL_CALL)  ; void core_inv.cpp_CInventory_autoUseHealthItem_FUN_004df010(CInventory * this_ptr)
    ADD ESP,0x4                         ; 0056d149
    SUB ESP,0x8                         ; 0056d14c
    FLD float ptr [EBX + 0x25a8]        ; 0056d14f
    FSTP double ptr [ESP]               ; 0056d155
    PUSH 0x5ebd06                       ; 0056d158 | = "hit points: %3.2f\n"
    MOV EDX,dword ptr [0x00609ed0]      ; 0056d15d | g_CConsolePtr
    PUSH EDX                            ; 0056d163 | g_CConsoleInstance
    CALL engine_console.cpp_CConsole_printf_FUN_00436710 ; 0056d164
        ;   XREF to: 00436710 (UNCONDITIONAL_CALL)  ; void engine_console.cpp_CConsole_printf_FUN_00436710(CConsole * this_ptr, char * format)
    ADD ESP,0x10                        ; 0056d169
    FLD float ptr [EBX + 0x25a8]        ; 0056d16c
        ;   Label: LAB_0056d16c
    FLDZ                                ; 0056d172
    LEA EDI,[EBX + 0x2b4]               ; 0056d174
    FCOMPP                              ; 0056d17a
    FNSTSW AX                           ; 0056d17c
    SAHF                                ; 0056d17e
    JC 0x0056d336                       ; 0056d17f
        ;   XREF to: 0056d336 (CONDITIONAL_JUMP)  ; LAB_0056d336
    PUSH EBX                            ; 0056d185
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d186
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0056d18c
    CALL dword ptr [EAX + 0xf8]         ; 0056d196
    ADD ESP,0x4                         ; 0056d19c
    PUSH EDI                            ; 0056d19f
    CALL core_motion.cpp_FUN_005035c0   ; 0056d1a0
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056d1a5
    ADD ESP,0x4                         ; 0056d1a8
    CMP EAX,0x29                        ; 0056d1ab
    JZ 0x0056d245                       ; 0056d1ae
        ;   XREF to: 0056d245 (CONDITIONAL_JUMP)  ; LAB_0056d245
    PUSH EDI                            ; 0056d1b4
    CALL core_motion.cpp_FUN_005035c0   ; 0056d1b5
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0056d1ba
    ADD ESP,0x4                         ; 0056d1bd
    CMP EAX,0x28                        ; 0056d1c0
    JZ 0x0056d245                       ; 0056d1c3
        ;   XREF to: 0056d245 (CONDITIONAL_JUMP)  ; LAB_0056d245
    CMP dword ptr [EBX + 0x25614],0x0   ; 0056d1c9
    JZ 0x0056d2e0                       ; 0056d1d0
        ;   XREF to: 0056d2e0 (CONDITIONAL_JUMP)  ; LAB_0056d2e0
    PUSH 0x1                            ; 0056d1d6
        ;   Label: LAB_0056d1d6
    PUSH 0xf                            ; 0056d1d8
    LEA EAX,[EBX + 0x2b4]               ; 0056d1da
    MOV dword ptr [EBX + 0x25614],0x0   ; 0056d1e0
    PUSH EAX                            ; 0056d1ea
    MOV dword ptr [EBX + 0x25694],0x0   ; 0056d1eb
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056d1f5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_0056d1f5
    ADD ESP,0xc                         ; 0056d1fa
    MOV EDI,dword ptr [EBX + 0x258d4]   ; 0056d1fd
    PUSH EDI                            ; 0056d203
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0056d204
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    MOV EAX,dword ptr [ESI + 0x30]      ; 0056d209
    ADD ESP,0x4                         ; 0056d20c
    CMP EAX,0x1                         ; 0056d20f
    JZ 0x0056d22c                       ; 0056d212
        ;   XREF to: 0056d22c (CONDITIONAL_JUMP)  ; LAB_0056d22c
    PUSH 0x5ebd19                       ; 0056d214 | = "stranger_die??.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d219
    PUSH EBX                            ; 0056d21f
    CALL dword ptr [EAX + 0x34]         ; 0056d220
    ADD ESP,0x8                         ; 0056d223
    MOV dword ptr [EBX + 0x258d4],EAX   ; 0056d226
    PUSH 0x0                            ; 0056d22c
        ;   Label: LAB_0056d22c
    PUSH 0x42480000                     ; 0056d22e
    PUSH 0x32                           ; 0056d233
    PUSH EBX                            ; 0056d235
    MOV EDX,dword ptr [0x006167e0]      ; 0056d236 | g_CGorePtr
    PUSH EDX                            ; 0056d23c
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 0056d23d
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 0056d242
    MOV ECX,dword ptr [EBX + 0x25698]   ; 0056d245
        ;   Label: LAB_0056d245
    CMP ECX,dword ptr [EBX + 0x2620]    ; 0056d24b
    JNZ 0x0056d25d                      ; 0056d251
        ;   XREF to: 0056d25d (CONDITIONAL_JUMP)  ; LAB_0056d25d
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056d253
    PUSH 0x0                            ; 0056d25d
        ;   Label: LAB_0056d25d
    PUSH 0x0                            ; 0056d25f
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d261
    PUSH EBX                            ; 0056d267
    CALL dword ptr [EAX + 0x130]        ; 0056d268
    MOV EAX,dword ptr [EBX + 0x2698]    ; 0056d26e
    MOV EDI,dword ptr [EBX + 0x25698]   ; 0056d274
    ADD ESP,0xc                         ; 0056d27a
    CMP EAX,EDI                         ; 0056d27d
    JNZ 0x0056d28b                      ; 0056d27f
        ;   XREF to: 0056d28b (CONDITIONAL_JUMP)  ; LAB_0056d28b
    MOV dword ptr [EBX + 0x25698],0x0   ; 0056d281
    PUSH 0x0                            ; 0056d28b
        ;   Label: LAB_0056d28b
    PUSH 0x1                            ; 0056d28d
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d28f
    PUSH EBX                            ; 0056d295
    CALL dword ptr [EAX + 0x130]        ; 0056d296
    ADD ESP,0xc                         ; 0056d29c
    FLD float ptr [ESI + 0x4]           ; 0056d29f
        ;   Label: LAB_0056d29f
    FLDZ                                ; 0056d2a2
    FCOMPP                              ; 0056d2a4
    FNSTSW AX                           ; 0056d2a6
    SAHF                                ; 0056d2a8
    JNC 0x0056d2b9                      ; 0056d2a9
        ;   XREF to: 0056d2b9 (CONDITIONAL_JUMP)  ; LAB_0056d2b9
    MOV EAX,[0x00616494]                ; 0056d2ab | g_CGamePtr
    PUSH EAX                            ; 0056d2b0 | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0 ; 0056d2b1
        ;   XREF to: 004bb8b0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bb8b0(CGame * this_ptr)
    ADD ESP,0x4                         ; 0056d2b6
    PUSH ESI                            ; 0056d2b9
        ;   Label: LAB_0056d2b9
    PUSH EBX                            ; 0056d2ba
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 0056d2bb
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0056d2c0
    MOV ESP,EBP                         ; 0056d2c3
        ;   Label: LAB_0056d2c3
    POP EBP                             ; 0056d2c5
    POP EDI                             ; 0056d2c6
    POP ESI                             ; 0056d2c7
    POP EBX                             ; 0056d2c8
    RET                                 ; 0056d2c9
    MOV dword ptr [ESI + 0x4],EDX       ; 0056d2ca
        ;   Label: LAB_0056d2ca
    JMP 0x0056d08f                      ; 0056d2cd
        ;   XREF to: 0056d08f (UNCONDITIONAL_JUMP)  ; LAB_0056d08f
    MOV dword ptr [ESI + 0x4],0x0       ; 0056d2d2
        ;   Label: LAB_0056d2d2
    MOV ESP,EBP                         ; 0056d2d9
    POP EBP                             ; 0056d2db
    POP EDI                             ; 0056d2dc
    POP ESI                             ; 0056d2dd
    POP EBX                             ; 0056d2de
    RET                                 ; 0056d2df
    CMP dword ptr [EBX + 0x25694],0x0   ; 0056d2e0
        ;   Label: LAB_0056d2e0
    JNZ 0x0056d1d6                      ; 0056d2e7
        ;   XREF to: 0056d1d6 (CONDITIONAL_JUMP)  ; LAB_0056d1d6
    MOV ECX,dword ptr [ESI + 0x30]      ; 0056d2ed
    CMP ECX,0x1                         ; 0056d2f0
    JNZ 0x0056d2fe                      ; 0056d2f3
        ;   XREF to: 0056d2fe (CONDITIONAL_JUMP)  ; LAB_0056d2fe
    PUSH ECX                            ; 0056d2f5
    PUSH 0x27                           ; 0056d2f6
    PUSH EDI                            ; 0056d2f8
    JMP 0x0056d1f5                      ; 0056d2f9
        ;   XREF to: 0056d1f5 (UNCONDITIONAL_JUMP)  ; LAB_0056d1f5
    PUSH 0x1                            ; 0056d2fe
        ;   Label: LAB_0056d2fe
    PUSH 0x42c80000                     ; 0056d300
    PUSH 0x0                            ; 0056d305
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60 ; 0056d307
        ;   XREF to: 0040cf60 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040cf60(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 0056d30c
    ADD ESP,0x8                         ; 0056d30f
    FLD float ptr [EBP + -0x4]          ; 0056d312
    FCOMP float ptr [0x005ebd41]        ; 0056d315 | DAT_005ebd41
    FNSTSW AX                           ; 0056d31b
    SAHF                                ; 0056d31d
    SETBE AL                            ; 0056d31e
    AND EAX,0xff                        ; 0056d321
    ADD EAX,0x25                        ; 0056d326
    PUSH EAX                            ; 0056d329
    LEA EAX,[EBX + 0x2b4]               ; 0056d32a
    PUSH EAX                            ; 0056d330
    JMP 0x0056d1f5                      ; 0056d331
        ;   XREF to: 0056d1f5 (UNCONDITIONAL_JUMP)  ; LAB_0056d1f5
    FLD float ptr [ESI + 0x4]           ; 0056d336
        ;   Label: LAB_0056d336
    FLDZ                                ; 0056d339
    FCOMPP                              ; 0056d33b
    FNSTSW AX                           ; 0056d33d
    SAHF                                ; 0056d33f
    JNC 0x0056d29f                      ; 0056d340
        ;   XREF to: 0056d29f (CONDITIONAL_JUMP)  ; LAB_0056d29f
    CMP dword ptr [ESI + 0x30],0x69     ; 0056d346
    JZ 0x0056d39b                       ; 0056d34a
        ;   XREF to: 0056d39b (CONDITIONAL_JUMP)  ; LAB_0056d39b
    CMP dword ptr [EBX + 0x25614],0x0   ; 0056d34c
    JNZ 0x0056d39b                      ; 0056d353
        ;   XREF to: 0056d39b (CONDITIONAL_JUMP)  ; LAB_0056d39b
    CMP dword ptr [EBX + 0x25694],0x0   ; 0056d355
    JNZ 0x0056d39b                      ; 0056d35c
        ;   XREF to: 0056d39b (CONDITIONAL_JUMP)  ; LAB_0056d39b
    CMP dword ptr [EBX + 0x256a4],0x0   ; 0056d35e
    JNZ 0x0056d39b                      ; 0056d365
        ;   XREF to: 0056d39b (CONDITIONAL_JUMP)  ; LAB_0056d39b
    MOV EAX,[0x02653574]                ; 0056d367 | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 0056d36c
    MOV EDX,dword ptr [ESI + 0x34]      ; 0056d36d
    PUSH EDX                            ; 0056d370
    CALL core_actor.cpp_castToClassHash_FUN_0040c8f0 ; 0056d371
        ;   XREF to: 0040c8f0 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c8f0(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0056d376
    TEST EAX,EAX                        ; 0056d379
    JZ 0x0056d38e                       ; 0056d37b
        ;   XREF to: 0056d38e (CONDITIONAL_JUMP)  ; LAB_0056d38e
    PUSH 0x3eaa7efa                     ; 0056d37d
    CALL core_actor.cpp_randomChance_FUN_0040d060 ; 0056d382
        ;   XREF to: 0040d060 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040d060(float probability_threshold)
    ADD ESP,0x4                         ; 0056d387
    TEST EAX,EAX                        ; 0056d38a
    JZ 0x0056d39b                       ; 0056d38c
        ;   XREF to: 0056d39b (CONDITIONAL_JUMP)  ; LAB_0056d39b
    PUSH 0x1                            ; 0056d38e
        ;   Label: LAB_0056d38e
    PUSH 0x24                           ; 0056d390
    PUSH EDI                            ; 0056d392
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0056d393
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0056d398
    MOV ECX,dword ptr [EBX + 0x258d4]   ; 0056d39b
        ;   Label: LAB_0056d39b
    PUSH ECX                            ; 0056d3a1
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 0056d3a2
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0056d3a7
    TEST EAX,EAX                        ; 0056d3aa
    JNZ 0x0056d29f                      ; 0056d3ac
        ;   XREF to: 0056d29f (CONDITIONAL_JUMP)  ; LAB_0056d29f
    PUSH 0x5ebd2c                       ; 0056d3b2 | = "stranger_hit??.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0056d3b7
    PUSH EBX                            ; 0056d3bd
    CALL dword ptr [EAX + 0x34]         ; 0056d3be
    ADD ESP,0x8                         ; 0056d3c1
    MOV dword ptr [EBX + 0x258d4],EAX   ; 0056d3c4
    JMP 0x0056d29f                      ; 0056d3ca
        ;   XREF to: 0056d29f (UNCONDITIONAL_JUMP)  ; LAB_0056d29f

