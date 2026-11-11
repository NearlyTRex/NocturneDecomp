; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_prye_cpp_CPrye_processDamage_FUN_00523e50(CPrye *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CPrye *          Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_CBugs_005cd72f
;   TerminatedCString s_prye_death_wav_005cd735
;   TerminatedCString s_prye_pain_wav_005cd745
;   undefined4 DAT_005cd757
;   undefined4 DAT_005e34f8
;   CGame* g_CGamePtr = 01d2130c
;   CGore* g_CGorePtr = 01d22e44
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;   core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40
;   core_actor.cpp_isOfClass_FUN_0040c790
;   core_actor.cpp_randomChance_FUN_0040cf40
;   core_charactr.cpp_CCharacter_processDamage_FUN_00430d60
;   core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30
;   core_hero.cpp_CHero_stopNearbyInteraction_FUN_004d3af0
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00523e50
        ;   Label: core_prye.cpp_CPrye_processDamage_FUN_00523e50
    PUSH ESI                            ; 00523e51
    PUSH EDI                            ; 00523e52
    PUSH EBP                            ; 00523e53
    MOV EBP,ESP                         ; 00523e54
    SUB ESP,0x4                         ; 00523e56
    MOV EBX,dword ptr [EBP + 0x14]      ; 00523e59
    MOV ESI,dword ptr [EBP + 0x18]      ; 00523e5c
    MOV EDX,dword ptr [EBX + 0x27b0]    ; 00523e5f
    TEST EDX,EDX                        ; 00523e65
    JNZ 0x0052404f                      ; 00523e67
        ;   XREF to: 0052404f (CONDITIONAL_JUMP)  ; LAB_0052404f
    MOV EAX,[0x005fe9dc]                ; 00523e6d | g_CGamePtr
    CMP dword ptr [EAX + 0x1f4],0x0     ; 00523e72 | g_CGameInstance.god_mode_enabled
    JNZ 0x00524056                      ; 00523e79
        ;   XREF to: 00524056 (CONDITIONAL_JUMP)  ; LAB_00524056
    MOV EAX,[0x005fe9dc]                ; 00523e7f | g_CGamePtr
        ;   Label: LAB_00523e7f
    MOV EDI,dword ptr [EAX + 0x250]     ; 00523e84 | g_CGameInstance.allow_damage_flag
    TEST EDI,EDI                        ; 00523e8a
    JNZ 0x00523e91                      ; 00523e8c
        ;   XREF to: 00523e91 (CONDITIONAL_JUMP)  ; LAB_00523e91
    MOV dword ptr [ESI + 0x4],EDI       ; 00523e8e
    PUSH EBX                            ; 00523e91
        ;   Label: LAB_00523e91
    CALL core_hero.cpp_CHero_stopNearbyInteraction_FUN_004d3af0 ; 00523e92
        ;   XREF to: 004d3af0 (UNCONDITIONAL_CALL)  ; void core_hero.cpp_CHero_stopNearbyInteraction_FUN_004d3af0(CHero * this_ptr)
    FLD float ptr [EBX + 0xcdcc]        ; 00523e97
    FLDZ                                ; 00523e9d
    ADD ESP,0x4                         ; 00523e9f
    FCOMPP                              ; 00523ea2
    FNSTSW AX                           ; 00523ea4
    SAHF                                ; 00523ea6
    JNC 0x00523ec4                      ; 00523ea7
        ;   XREF to: 00523ec4 (CONDITIONAL_JUMP)  ; LAB_00523ec4
    MOV EAX,dword ptr [ESI + 0x30]      ; 00523ea9
    CMP EAX,0xb                         ; 00523eac
    JLE 0x00523ec4                      ; 00523eaf
        ;   XREF to: 00523ec4 (CONDITIONAL_JUMP)  ; LAB_00523ec4
    CMP EAX,0x66                        ; 00523eb1
    JZ 0x00523ec4                       ; 00523eb4
        ;   XREF to: 00523ec4 (CONDITIONAL_JUMP)  ; LAB_00523ec4
    CMP EAX,0x6f                        ; 00523eb6
    JZ 0x00523ec4                       ; 00523eb9
        ;   XREF to: 00523ec4 (CONDITIONAL_JUMP)  ; LAB_00523ec4
    CMP EAX,0x69                        ; 00523ebb
    JNZ 0x0052405e                      ; 00523ebe
        ;   XREF to: 0052405e (CONDITIONAL_JUMP)  ; LAB_0052405e
    FLD float ptr [0x005e34f8]          ; 00523ec4 | DAT_005e34f8
        ;   Label: LAB_00523ec4
    PUSH 0x5cd72f                       ; 00523eca | = "CBugs"
    FSTP float ptr [EBX + 0xcdcc]       ; 00523ecf
    MOV EAX,dword ptr [ESI + 0x38]      ; 00523ed5
    PUSH EAX                            ; 00523ed8
    CALL core_actor.cpp_isOfClass_FUN_0040c790 ; 00523ed9
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c790(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00523ede
    TEST EAX,EAX                        ; 00523ee1
    JZ 0x00523eef                       ; 00523ee3
        ;   XREF to: 00523eef (CONDITIONAL_JUMP)  ; LAB_00523eef
    MOV dword ptr [EBX + 0xcdcc],0x3e19999a ; 00523ee5
    FLD float ptr [ESI + 0x4]           ; 00523eef
        ;   Label: LAB_00523eef
    FSUBR float ptr [EBX + 0x2538]      ; 00523ef2
    LEA EDI,[EBX + 0x158]               ; 00523ef8
    FST float ptr [EBX + 0x2538]        ; 00523efe
    FLDZ                                ; 00523f04
    FCOMPP                              ; 00523f06
    FNSTSW AX                           ; 00523f08
    SAHF                                ; 00523f0a
    JC 0x005240c2                       ; 00523f0b
        ;   XREF to: 005240c2 (CONDITIONAL_JUMP)  ; LAB_005240c2
    PUSH EBX                            ; 00523f11
    MOV EAX,dword ptr [EBX + 0x154]     ; 00523f12
    MOV dword ptr [EBX + 0x2538],0x0    ; 00523f18
    CALL dword ptr [EAX + 0xf0]         ; 00523f22
    ADD ESP,0x4                         ; 00523f28
    PUSH EDI                            ; 00523f2b
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00523f2c
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00523f31
    ADD ESP,0x4                         ; 00523f34
    CMP EAX,0x36                        ; 00523f37
    JZ 0x00523fd1                       ; 00523f3a
        ;   XREF to: 00523fd1 (CONDITIONAL_JUMP)  ; LAB_00523fd1
    PUSH EDI                            ; 00523f40
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00523f41
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00523f46
    ADD ESP,0x4                         ; 00523f49
    CMP EAX,0x35                        ; 00523f4c
    JZ 0x00523fd1                       ; 00523f4f
        ;   XREF to: 00523fd1 (CONDITIONAL_JUMP)  ; LAB_00523fd1
    CMP dword ptr [EBX + 0x20ba4],0x0   ; 00523f55
    JZ 0x0052406c                       ; 00523f5c
        ;   XREF to: 0052406c (CONDITIONAL_JUMP)  ; LAB_0052406c
    PUSH 0x1                            ; 00523f62
        ;   Label: LAB_00523f62
    PUSH 0x1a                           ; 00523f64
    LEA EAX,[EBX + 0x158]               ; 00523f66
    MOV dword ptr [EBX + 0x20ba4],0x0   ; 00523f6c
    PUSH EAX                            ; 00523f76
    MOV dword ptr [EBX + 0x20c20],0x0   ; 00523f77
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00523f81
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
        ;   Label: LAB_00523f81
    ADD ESP,0xc                         ; 00523f86
    MOV EDI,dword ptr [EBX + 0x20cf4]   ; 00523f89
    PUSH EDI                            ; 00523f8f
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00523f90
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV EAX,dword ptr [ESI + 0x30]      ; 00523f95
    ADD ESP,0x4                         ; 00523f98
    CMP EAX,0x1                         ; 00523f9b
    JZ 0x00523fb8                       ; 00523f9e
        ;   XREF to: 00523fb8 (CONDITIONAL_JUMP)  ; LAB_00523fb8
    PUSH 0x5cd735                       ; 00523fa0 | = "prye-death?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00523fa5
    PUSH EBX                            ; 00523fab
    CALL dword ptr [EAX + 0x2c]         ; 00523fac
    ADD ESP,0x8                         ; 00523faf
    MOV dword ptr [EBX + 0x20cf4],EAX   ; 00523fb2
    PUSH 0x0                            ; 00523fb8
        ;   Label: LAB_00523fb8
    PUSH 0x42480000                     ; 00523fba
    PUSH 0x32                           ; 00523fbf
    PUSH EBX                            ; 00523fc1
    MOV EDX,dword ptr [0x005fed24]      ; 00523fc2 | g_CGorePtr
    PUSH EDX                            ; 00523fc8
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30 ; 00523fc9
        ;   XREF to: 004cee30 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004cee30(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00523fce
    MOV ECX,dword ptr [EBX + 0x20c24]   ; 00523fd1
        ;   Label: LAB_00523fd1
    CMP ECX,dword ptr [EBX + 0x25b0]    ; 00523fd7
    JNZ 0x00523fe9                      ; 00523fdd
        ;   XREF to: 00523fe9 (CONDITIONAL_JUMP)  ; LAB_00523fe9
    MOV dword ptr [EBX + 0x20c24],0x0   ; 00523fdf
    PUSH 0x0                            ; 00523fe9
        ;   Label: LAB_00523fe9
    PUSH 0x0                            ; 00523feb
    MOV EAX,dword ptr [EBX + 0x154]     ; 00523fed
    PUSH EBX                            ; 00523ff3
    CALL dword ptr [EAX + 0x128]        ; 00523ff4
    MOV EAX,dword ptr [EBX + 0x2628]    ; 00523ffa
    MOV EDI,dword ptr [EBX + 0x20c24]   ; 00524000
    ADD ESP,0xc                         ; 00524006
    CMP EAX,EDI                         ; 00524009
    JNZ 0x00524017                      ; 0052400b
        ;   XREF to: 00524017 (CONDITIONAL_JUMP)  ; LAB_00524017
    MOV dword ptr [EBX + 0x20c24],0x0   ; 0052400d
    PUSH 0x0                            ; 00524017
        ;   Label: LAB_00524017
    PUSH 0x1                            ; 00524019
    MOV EAX,dword ptr [EBX + 0x154]     ; 0052401b
    PUSH EBX                            ; 00524021
    CALL dword ptr [EAX + 0x128]        ; 00524022
    ADD ESP,0xc                         ; 00524028
    FLD float ptr [ESI + 0x4]           ; 0052402b
        ;   Label: LAB_0052402b
    FLDZ                                ; 0052402e
    FCOMPP                              ; 00524030
    FNSTSW AX                           ; 00524032
    SAHF                                ; 00524034
    JNC 0x00524045                      ; 00524035
        ;   XREF to: 00524045 (CONDITIONAL_JUMP)  ; LAB_00524045
    MOV EAX,[0x005fe9dc]                ; 00524037 | g_CGamePtr
    PUSH EAX                            ; 0052403c | g_CGameInstance
    CALL core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910 ; 0052403d
        ;   XREF to: 004bd910 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_resetInventoryDisplayTimer_FUN_004bd910(CGame * this_ptr)
    ADD ESP,0x4                         ; 00524042
    PUSH ESI                            ; 00524045
        ;   Label: LAB_00524045
    PUSH EBX                            ; 00524046
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00430d60 ; 00524047
        ;   XREF to: 00430d60 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00430d60(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0052404c
    MOV ESP,EBP                         ; 0052404f
        ;   Label: LAB_0052404f
    POP EBP                             ; 00524051
    POP EDI                             ; 00524052
    POP ESI                             ; 00524053
    POP EBX                             ; 00524054
    RET                                 ; 00524055
    MOV dword ptr [ESI + 0x4],EDX       ; 00524056
        ;   Label: LAB_00524056
    JMP 0x00523e7f                      ; 00524059
        ;   XREF to: 00523e7f (UNCONDITIONAL_JUMP)  ; LAB_00523e7f
    MOV dword ptr [ESI + 0x4],0x0       ; 0052405e
        ;   Label: LAB_0052405e
    MOV ESP,EBP                         ; 00524065
    POP EBP                             ; 00524067
    POP EDI                             ; 00524068
    POP ESI                             ; 00524069
    POP EBX                             ; 0052406a
    RET                                 ; 0052406b
    CMP dword ptr [EBX + 0x20c20],0x0   ; 0052406c
        ;   Label: LAB_0052406c
    JNZ 0x00523f62                      ; 00524073
        ;   XREF to: 00523f62 (CONDITIONAL_JUMP)  ; LAB_00523f62
    MOV ECX,dword ptr [ESI + 0x30]      ; 00524079
    CMP ECX,0x1                         ; 0052407c
    JNZ 0x0052408a                      ; 0052407f
        ;   XREF to: 0052408a (CONDITIONAL_JUMP)  ; LAB_0052408a
    PUSH ECX                            ; 00524081
    PUSH 0x34                           ; 00524082
    PUSH EDI                            ; 00524084
    JMP 0x00523f81                      ; 00524085
        ;   XREF to: 00523f81 (UNCONDITIONAL_JUMP)  ; LAB_00523f81
    PUSH 0x1                            ; 0052408a
        ;   Label: LAB_0052408a
    PUSH 0x42c80000                     ; 0052408c
    PUSH 0x0                            ; 00524091
    CALL core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40 ; 00524093
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; float core_actor.cpp_getRandomFloatFromRange_FUN_0040ce40(float min_value, float max_value)
    MOV dword ptr [EBP + -0x4],EAX      ; 00524098
    ADD ESP,0x8                         ; 0052409b
    FLD float ptr [EBP + -0x4]          ; 0052409e
    FCOMP float ptr [0x005cd757]        ; 005240a1 | DAT_005cd757
    FNSTSW AX                           ; 005240a7
    SAHF                                ; 005240a9
    SETBE AL                            ; 005240aa
    AND EAX,0xff                        ; 005240ad
    ADD EAX,0x32                        ; 005240b2
    PUSH EAX                            ; 005240b5
    LEA EAX,[EBX + 0x158]               ; 005240b6
    PUSH EAX                            ; 005240bc
    JMP 0x00523f81                      ; 005240bd
        ;   XREF to: 00523f81 (UNCONDITIONAL_JUMP)  ; LAB_00523f81
    FLD float ptr [ESI + 0x4]           ; 005240c2
        ;   Label: LAB_005240c2
    FLDZ                                ; 005240c5
    FCOMPP                              ; 005240c7
    FNSTSW AX                           ; 005240c9
    SAHF                                ; 005240cb
    JNC 0x0052402b                      ; 005240cc
        ;   XREF to: 0052402b (CONDITIONAL_JUMP)  ; LAB_0052402b
    MOV EDX,dword ptr [ESI + 0x30]      ; 005240d2
    CMP EDX,0x69                        ; 005240d5
    JZ 0x00524134                       ; 005240d8
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    CMP EDX,0x6f                        ; 005240da
    JZ 0x00524134                       ; 005240dd
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    CMP EDX,0x66                        ; 005240df
    JZ 0x00524134                       ; 005240e2
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    CMP dword ptr [EBX + 0x20ba4],0x0   ; 005240e4
    JNZ 0x00524134                      ; 005240eb
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    CMP dword ptr [EBX + 0x20c20],0x0   ; 005240ed
    JNZ 0x00524134                      ; 005240f4
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    CMP dword ptr [EBX + 0x20b64],0x0   ; 005240f6
    JNZ 0x00524134                      ; 005240fd
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    MOV EDX,dword ptr [0x02cfd794]      ; 005240ff | g_CTommyGunClassInfo.name_hash
    PUSH EDX                            ; 00524105
    MOV ECX,dword ptr [ESI + 0x34]      ; 00524106
    PUSH ECX                            ; 00524109
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0052410a
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c840()
    ADD ESP,0x8                         ; 0052410f
    TEST EAX,EAX                        ; 00524112
    JZ 0x00524127                       ; 00524114
        ;   XREF to: 00524127 (CONDITIONAL_JUMP)  ; LAB_00524127
    PUSH 0x3eaa7efa                     ; 00524116
    CALL core_actor.cpp_randomChance_FUN_0040cf40 ; 0052411b
        ;   XREF to: 0040cf40 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cf40(float probability_threshold)
    ADD ESP,0x4                         ; 00524120
    TEST EAX,EAX                        ; 00524123
    JZ 0x00524134                       ; 00524125
        ;   XREF to: 00524134 (CONDITIONAL_JUMP)  ; LAB_00524134
    PUSH 0x1                            ; 00524127
        ;   Label: LAB_00524127
    PUSH 0x31                           ; 00524129
    PUSH EDI                            ; 0052412b
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 0052412c
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00524131
    MOV EDI,dword ptr [EBX + 0x20cf4]   ; 00524134
        ;   Label: LAB_00524134
    PUSH EDI                            ; 0052413a
    CALL sound_sndmain.cpp_FUN_00556700 ; 0052413b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00524140
    TEST EAX,EAX                        ; 00524143
    JNZ 0x0052402b                      ; 00524145
        ;   XREF to: 0052402b (CONDITIONAL_JUMP)  ; LAB_0052402b
    PUSH 0x5cd745                       ; 0052414b | = "prye-pain?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00524150
    PUSH EBX                            ; 00524156
    CALL dword ptr [EAX + 0x2c]         ; 00524157
    ADD ESP,0x8                         ; 0052415a
    MOV dword ptr [EBX + 0x20cf4],EAX   ; 0052415d
    JMP 0x0052402b                      ; 00524163
        ;   XREF to: 0052402b (UNCONDITIONAL_JUMP)  ; LAB_0052402b

