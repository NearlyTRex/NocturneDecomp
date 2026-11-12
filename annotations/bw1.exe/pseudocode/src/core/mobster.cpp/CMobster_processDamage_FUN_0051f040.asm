; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_0051f040(CMobster *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_mobster_die_wav_005e9f41+1
;   TerminatedCString s_mobster_hit_wav_005e9f54
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_randomChance_FUN_0040cd00
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00
;   core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770
;   core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0
;   sound_sndmain.cpp_FUN_005735a0
;   sound_sndmain.cpp_killSfx_FUN_00573a80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051f040
        ;   Label: core_mobster.cpp_CMobster_processDamage_FUN_0051f040
    PUSH ESI                            ; 0051f041
    PUSH EDI                            ; 0051f042
    PUSH EBP                            ; 0051f043
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051f044
    MOV EDI,dword ptr [ESP + 0x18]      ; 0051f048
    MOV EDX,dword ptr [EBX + 0xc308]    ; 0051f04c
    PUSH EDX                            ; 0051f052
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0051f053
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f058
    MOV ECX,dword ptr [EBX + 0xc300]    ; 0051f05b
    PUSH ECX                            ; 0051f061
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0051f062
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f067
    PUSH EDI                            ; 0051f06a
    PUSH EBX                            ; 0051f06b
    CALL core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80 ; 0051f06c
        ;   XREF to: 0051ec80 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_processDismemberment_FUN_0051ec80(CMobster * this_ptr, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0xc310]    ; 0051f071
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 0051f077
    ADD ESP,0x8                         ; 0051f07e
    TEST ESI,ESI                        ; 0051f081
    JNZ 0x0051f09c                      ; 0051f083
        ;   XREF to: 0051f09c (CONDITIONAL_JUMP)  ; LAB_0051f09c
    MOV EAX,dword ptr [EBX + 0xc318]    ; 0051f085
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0051f08b
    JNZ 0x0051f09c                      ; 0051f093
        ;   XREF to: 0051f09c (CONDITIONAL_JUMP)  ; LAB_0051f09c
    MOV dword ptr [EDI + 0x4],0x461c3f9a ; 0051f095
    FLD float ptr [EDI + 0x4]           ; 0051f09c
        ;   Label: LAB_0051f09c
    FSUBR float ptr [EBX + 0x2538]      ; 0051f09f
    LEA ESI,[EBX + 0x158]               ; 0051f0a5
    FST float ptr [EBX + 0x2538]        ; 0051f0ab
    FLDZ                                ; 0051f0b1
    FCOMPP                              ; 0051f0b3
    FNSTSW AX                           ; 0051f0b5
    SAHF                                ; 0051f0b7
    JNC 0x0051f114                      ; 0051f0b8
        ;   XREF to: 0051f114 (CONDITIONAL_JUMP)  ; LAB_0051f114
    MOV EAX,[0x02c8ad44]                ; 0051f0ba | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 0051f0bf
    MOV EDX,dword ptr [EDI + 0x34]      ; 0051f0c0
    PUSH EDX                            ; 0051f0c3
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 0051f0c4
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c600(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0051f0c9
    TEST EAX,EAX                        ; 0051f0cc
    JZ 0x0051f0e1                       ; 0051f0ce
        ;   XREF to: 0051f0e1 (CONDITIONAL_JUMP)  ; LAB_0051f0e1
    PUSH 0x3f000000                     ; 0051f0d0
    CALL core_actor.cpp_randomChance_FUN_0040cd00 ; 0051f0d5
        ;   XREF to: 0040cd00 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd00(float probability_threshold)
    ADD ESP,0x4                         ; 0051f0da
    TEST EAX,EAX                        ; 0051f0dd
    JZ 0x0051f0ee                       ; 0051f0df
        ;   XREF to: 0051f0ee (CONDITIONAL_JUMP)  ; LAB_0051f0ee
    PUSH 0x1                            ; 0051f0e1
        ;   Label: LAB_0051f0e1
    PUSH 0x3                            ; 0051f0e3
    PUSH ESI                            ; 0051f0e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051f0e6
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051f0eb
    MOV ECX,dword ptr [EBX + 0xc2fc]    ; 0051f0ee
        ;   Label: LAB_0051f0ee
    PUSH ECX                            ; 0051f0f4
    CALL sound_sndmain.cpp_FUN_005735a0 ; 0051f0f5
        ;   XREF to: 005735a0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_005735a0(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f0fa
    TEST EAX,EAX                        ; 0051f0fd
    JZ 0x0051f19f                       ; 0051f0ff
        ;   XREF to: 0051f19f (CONDITIONAL_JUMP)  ; LAB_0051f19f
    PUSH EDI                            ; 0051f105
        ;   Label: LAB_0051f105
    PUSH EBX                            ; 0051f106
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0051f107
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051f10c
    POP EBP                             ; 0051f10f
    POP EDI                             ; 0051f110
    POP ESI                             ; 0051f111
    POP EBX                             ; 0051f112
    RET                                 ; 0051f113
    PUSH ESI                            ; 0051f114
        ;   Label: LAB_0051f114
    MOV dword ptr [EBX + 0x2538],0x0    ; 0051f115
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770 ; 0051f11f
        ;   XREF to: 00524770 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_00524770(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 0051f124
    ADD ESP,0x4                         ; 0051f127
    CMP EAX,0x5                         ; 0051f12a
    JZ 0x0051f105                       ; 0051f12d
        ;   XREF to: 0051f105 (CONDITIONAL_JUMP)  ; LAB_0051f105
    CMP EAX,0x4                         ; 0051f12f
    JZ 0x0051f105                       ; 0051f132
        ;   XREF to: 0051f105 (CONDITIONAL_JUMP)  ; LAB_0051f105
    PUSH 0x1                            ; 0051f134
    PUSH 0x4                            ; 0051f136
    PUSH ESI                            ; 0051f138
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0 ; 0051f139
        ;   XREF to: 005247c0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_005247c0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0051f13e
    PUSH 0x0                            ; 0051f141
    PUSH 0x1                            ; 0051f143
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051f145
    PUSH EBX                            ; 0051f14b
    CALL dword ptr [EAX + 0x128]        ; 0051f14c
    MOV ESI,dword ptr [EBX + 0xc304]    ; 0051f152
    ADD ESP,0xc                         ; 0051f158
    TEST ESI,ESI                        ; 0051f15b
    JNZ 0x0051f105                      ; 0051f15d
        ;   XREF to: 0051f105 (CONDITIONAL_JUMP)  ; LAB_0051f105
    MOV EBP,dword ptr [EBX + 0xc2fc]    ; 0051f15f
    PUSH EBP                            ; 0051f165
    CALL sound_sndmain.cpp_killSfx_FUN_00573a80 ; 0051f166
        ;   XREF to: 00573a80 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00573a80(uint sfx_handle)
    ADD ESP,0x4                         ; 0051f16b
    PUSH 0x5e9f42                       ; 0051f16e | s_mobster_die_wav_005e9f41+1
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051f173
    PUSH EBX                            ; 0051f179
    CALL dword ptr [EAX + 0x2c]         ; 0051f17a
    MOV dword ptr [EBX + 0xc304],0x1    ; 0051f17d
    ADD ESP,0x8                         ; 0051f187
    MOV dword ptr [EBX + 0xc2fc],EAX    ; 0051f18a
    PUSH EDI                            ; 0051f190
    PUSH EBX                            ; 0051f191
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0051f192
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051f197
    POP EBP                             ; 0051f19a
    POP EDI                             ; 0051f19b
    POP ESI                             ; 0051f19c
    POP EBX                             ; 0051f19d
    RET                                 ; 0051f19e
    PUSH 0x5e9f54                       ; 0051f19f | = "mobster-hit-?.wav"
        ;   Label: LAB_0051f19f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051f1a4
    PUSH EBX                            ; 0051f1aa
    CALL dword ptr [EAX + 0x2c]         ; 0051f1ab
    ADD ESP,0x8                         ; 0051f1ae
    MOV dword ptr [EBX + 0xc2fc],EAX    ; 0051f1b1
    PUSH EDI                            ; 0051f1b7
    PUSH EBX                            ; 0051f1b8
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00 ; 0051f1b9
        ;   XREF to: 004a0f00 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a0f00(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0051f1be
    POP EBP                             ; 0051f1c1
    POP EDI                             ; 0051f1c2
    POP ESI                             ; 0051f1c3
    POP EBX                             ; 0051f1c4
    RET                                 ; 0051f1c5

