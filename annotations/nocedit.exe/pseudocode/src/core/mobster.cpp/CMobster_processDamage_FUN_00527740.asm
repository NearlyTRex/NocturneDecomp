; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mobster_cpp_CMobster_processDamage_FUN_00527740(CMobster *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CMobster *       Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_mobster_die_wav_006399d6
;   TerminatedCString s_mobster_hit_wav_006399e8
;   undefined4 g_CTommyGunClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c790
;   core_actor.cpp_randomChance_FUN_0040cd10
;   core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10
;   core_mobster.cpp_CMobster_FUN_00527380
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00
;   sound_sndmain.cpp_isSfxPlaying_FUN_005a9660
;   sound_sndmain.cpp_killSfx_FUN_005a9c40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00527740
        ;   Label: core_mobster.cpp_CMobster_processDamage_FUN_00527740
    PUSH ESI                            ; 00527741
    PUSH EDI                            ; 00527742
    PUSH EBP                            ; 00527743
    MOV EBX,dword ptr [ESP + 0x14]      ; 00527744
    MOV EDI,dword ptr [ESP + 0x18]      ; 00527748
    MOV EDX,dword ptr [EBX + 0xbf5c]    ; 0052774c
    PUSH EDX                            ; 00527752
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00527753
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00527758
    MOV ECX,dword ptr [EBX + 0xbf54]    ; 0052775b
    PUSH ECX                            ; 00527761
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00527762
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 00527767
    PUSH EDI                            ; 0052776a
    PUSH EBX                            ; 0052776b
    CALL core_mobster.cpp_CMobster_FUN_00527380 ; 0052776c
        ;   XREF to: 00527380 (UNCONDITIONAL_CALL)  ; void core_mobster.cpp_CMobster_FUN_00527380(CMobster * this_ptr, SDamageInfo * damage_info)
    MOV EAX,dword ptr [EBX + 0xbf64]    ; 00527771
    MOV ESI,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00527777
    ADD ESP,0x8                         ; 0052777e
    TEST ESI,ESI                        ; 00527781
    JNZ 0x0052779c                      ; 00527783
        ;   XREF to: 0052779c (CONDITIONAL_JUMP)  ; LAB_0052779c
    MOV EAX,dword ptr [EBX + 0xbf6c]    ; 00527785
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 0052778b
    JNZ 0x0052779c                      ; 00527793
        ;   XREF to: 0052779c (CONDITIONAL_JUMP)  ; LAB_0052779c
    MOV dword ptr [EDI + 0x4],0x461c3f9a ; 00527795
    FLD float ptr [EDI + 0x4]           ; 0052779c
        ;   Label: LAB_0052779c
    FSUBR float ptr [EBX + 0x243c]      ; 0052779f
    LEA ESI,[EBX + 0x158]               ; 005277a5
    FST float ptr [EBX + 0x243c]        ; 005277ab
    FLDZ                                ; 005277b1
    FCOMPP                              ; 005277b3
    FNSTSW AX                           ; 005277b5
    SAHF                                ; 005277b7
    JNC 0x00527814                      ; 005277b8
        ;   XREF to: 00527814 (CONDITIONAL_JUMP)  ; LAB_00527814
    MOV EAX,[0x03f873dc]                ; 005277ba | g_CTommyGunClassInfo.name_hash
    PUSH EAX                            ; 005277bf
    MOV EDX,dword ptr [EDI + 0x34]      ; 005277c0
    PUSH EDX                            ; 005277c3
    CALL core_actor.cpp_castToClassHash_FUN_0040c790 ; 005277c4
        ;   XREF to: 0040c790 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c790(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 005277c9
    TEST EAX,EAX                        ; 005277cc
    JZ 0x005277e1                       ; 005277ce
        ;   XREF to: 005277e1 (CONDITIONAL_JUMP)  ; LAB_005277e1
    PUSH 0x3f000000                     ; 005277d0
    CALL core_actor.cpp_randomChance_FUN_0040cd10 ; 005277d5
        ;   XREF to: 0040cd10 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_randomChance_FUN_0040cd10(float probability_threshold)
    ADD ESP,0x4                         ; 005277da
    TEST EAX,EAX                        ; 005277dd
    JZ 0x005277ee                       ; 005277df
        ;   XREF to: 005277ee (CONDITIONAL_JUMP)  ; LAB_005277ee
    PUSH 0x1                            ; 005277e1
        ;   Label: LAB_005277e1
    PUSH 0x3                            ; 005277e3
    PUSH ESI                            ; 005277e5
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 005277e6
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005277eb
    MOV ECX,dword ptr [EBX + 0xbf50]    ; 005277ee
        ;   Label: LAB_005277ee
    PUSH ECX                            ; 005277f4
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_005a9660 ; 005277f5
        ;   XREF to: 005a9660 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_005a9660(uint sfx_handle)
    ADD ESP,0x4                         ; 005277fa
    TEST EAX,EAX                        ; 005277fd
    JZ 0x0052789f                       ; 005277ff
        ;   XREF to: 0052789f (CONDITIONAL_JUMP)  ; LAB_0052789f
    PUSH EDI                            ; 00527805
        ;   Label: LAB_00527805
    PUSH EBX                            ; 00527806
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00527807
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0052780c
    POP EBP                             ; 0052780f
    POP EDI                             ; 00527810
    POP ESI                             ; 00527811
    POP EBX                             ; 00527812
    RET                                 ; 00527813
    PUSH ESI                            ; 00527814
        ;   Label: LAB_00527814
    MOV dword ptr [EBX + 0x243c],0x0    ; 00527815
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0 ; 0052781f
        ;   XREF to: 0052dab0 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_0052dab0(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 00527824
    ADD ESP,0x4                         ; 00527827
    CMP EAX,0x5                         ; 0052782a
    JZ 0x00527805                       ; 0052782d
        ;   XREF to: 00527805 (CONDITIONAL_JUMP)  ; LAB_00527805
    CMP EAX,0x4                         ; 0052782f
    JZ 0x00527805                       ; 00527832
        ;   XREF to: 00527805 (CONDITIONAL_JUMP)  ; LAB_00527805
    PUSH 0x1                            ; 00527834
    PUSH 0x4                            ; 00527836
    PUSH ESI                            ; 00527838
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00 ; 00527839
        ;   XREF to: 0052db00 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_0052db00(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0052783e
    PUSH 0x0                            ; 00527841
    PUSH 0x1                            ; 00527843
    MOV EAX,dword ptr [EBX + 0x154]     ; 00527845
    PUSH EBX                            ; 0052784b
    CALL dword ptr [EAX + 0x13c]        ; 0052784c
    MOV ESI,dword ptr [EBX + 0xbf58]    ; 00527852
    ADD ESP,0xc                         ; 00527858
    TEST ESI,ESI                        ; 0052785b
    JNZ 0x00527805                      ; 0052785d
        ;   XREF to: 00527805 (CONDITIONAL_JUMP)  ; LAB_00527805
    MOV EBP,dword ptr [EBX + 0xbf50]    ; 0052785f
    PUSH EBP                            ; 00527865
    CALL sound_sndmain.cpp_killSfx_FUN_005a9c40 ; 00527866
        ;   XREF to: 005a9c40 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_005a9c40(uint sfx_handle)
    ADD ESP,0x4                         ; 0052786b
    PUSH 0x6399d6                       ; 0052786e | = "mobster-die-?.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00527873
    PUSH EBX                            ; 00527879
    CALL dword ptr [EAX + 0x24]         ; 0052787a
    MOV dword ptr [EBX + 0xbf58],0x1    ; 0052787d
    ADD ESP,0x8                         ; 00527887
    MOV dword ptr [EBX + 0xbf50],EAX    ; 0052788a
    PUSH EDI                            ; 00527890
    PUSH EBX                            ; 00527891
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 00527892
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00527897
    POP EBP                             ; 0052789a
    POP EDI                             ; 0052789b
    POP ESI                             ; 0052789c
    POP EBX                             ; 0052789d
    RET                                 ; 0052789e
    PUSH 0x6399e8                       ; 0052789f | = "mobster-hit-?.wav"
        ;   Label: LAB_0052789f
    MOV EAX,dword ptr [EBX + 0x154]     ; 005278a4
    PUSH EBX                            ; 005278aa
    CALL dword ptr [EAX + 0x24]         ; 005278ab
    ADD ESP,0x8                         ; 005278ae
    MOV dword ptr [EBX + 0xbf50],EAX    ; 005278b1
    PUSH EDI                            ; 005278b7
    PUSH EBX                            ; 005278b8
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10 ; 005278b9
        ;   XREF to: 004a9f10 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_004a9f10(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005278be
    POP EBP                             ; 005278c1
    POP EDI                             ; 005278c2
    POP ESI                             ; 005278c3
    POP EBX                             ; 005278c4
    RET                                 ; 005278c5

