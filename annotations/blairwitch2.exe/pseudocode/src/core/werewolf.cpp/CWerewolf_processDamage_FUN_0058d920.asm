; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_werewolf_cpp_CWerewolf_processDamage_FUN_0058d920(CWerewolf *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CWerewolf *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_werewolf_die_wav_005ee7d5
;   TerminatedCString s_werewolf_hurt_wav_005ee7e7
;   undefined4 DAT_005ee7fa
;   undefined4 DAT_005ee802
;   undefined4 DAT_005ee80a
;   undefined4 DAT_00614d30
;   CDemonSet* g_CDemonSetPtr = 01e661b8
;   undefined4 g_CDemonSetInstance.last_switch_area_invalid
;
; Called Functions:
;   core_actor.cpp_FUN_00408d70
;   core_actor.cpp_getRandomInt_FUN_0040cfc0
;   core_enemy.cpp_CEnemy_processDamage_FUN_00488890
;   core_fire.cpp_CFireEffect_createSpark_FUN_0049d090
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060
;   sound_sndmain.cpp_isSfxPlaying_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0058d920
        ;   Label: core_werewolf.cpp_CWerewolf_processDamage_FUN_0058d920
    PUSH ESI                            ; 0058d921
    PUSH EDI                            ; 0058d922
    PUSH EBP                            ; 0058d923
    MOV EBP,ESP                         ; 0058d924
    SUB ESP,0x28                        ; 0058d926
    AND ESP,0xfffffff8                  ; 0058d929
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d92c
    MOV EDX,dword ptr [EAX + 0x10b14]   ; 0058d92f
    PUSH EDX                            ; 0058d935
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058d936
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0058d93b
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058d93e
    CMP dword ptr [EAX + 0x30],0x6c     ; 0058d941
    JZ 0x0058da5a                       ; 0058d945
        ;   XREF to: 0058da5a (CONDITIONAL_JUMP)  ; LAB_0058da5a
    CMP dword ptr [EAX + 0x28],0x3      ; 0058d94b
    JZ 0x0058da8d                       ; 0058d94f
        ;   XREF to: 0058da8d (CONDITIONAL_JUMP)  ; LAB_0058da8d
    LEA EAX,[EAX]                       ; 0058d955
    LEA EDX,[EDX]                       ; 0058d95b
    MOV EBX,EBX                         ; 0058d95e
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058d960
        ;   Label: LAB_0058d960
    FLD float ptr [EAX + 0x4]           ; 0058d963
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d966
    FSUBR float ptr [EAX + 0x25a8]      ; 0058d969
    LEA EBX,[EAX + 0x2b4]               ; 0058d96f
    FST float ptr [EAX + 0x25a8]        ; 0058d975
    FLDZ                                ; 0058d97b
    FCOMPP                              ; 0058d97d
    FNSTSW AX                           ; 0058d97f
    SAHF                                ; 0058d981
    JC 0x0058db0e                       ; 0058d982
        ;   XREF to: 0058db0e (CONDITIONAL_JUMP)  ; LAB_0058db0e
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d988
    PUSH EBX                            ; 0058d98b
    MOV dword ptr [EAX + 0x25a8],0x0    ; 0058d98c
    CALL core_motion.cpp_FUN_005035c0   ; 0058d996
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058d99b
    ADD ESP,0x4                         ; 0058d99e
    CMP EAX,0xd                         ; 0058d9a1
    JZ 0x0058da43                       ; 0058d9a4
        ;   XREF to: 0058da43 (CONDITIONAL_JUMP)  ; LAB_0058da43
    CMP EAX,0xc                         ; 0058d9aa
    JZ 0x0058da43                       ; 0058d9ad
        ;   XREF to: 0058da43 (CONDITIONAL_JUMP)  ; LAB_0058da43
    PUSH 0x1                            ; 0058d9b3
    PUSH 0xc                            ; 0058d9b5
    PUSH EBX                            ; 0058d9b7
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058d9b8
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058d9bd
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d9c0
    CMP dword ptr [EAX + 0x10af8],0x0   ; 0058d9c3
    JNZ 0x0058d9fc                      ; 0058d9ca
        ;   XREF to: 0058d9fc (CONDITIONAL_JUMP)  ; LAB_0058d9fc
    MOV EAX,[0x0061b5a8]                ; 0058d9cc | g_CDemonSetPtr
    CMP dword ptr [EAX + 0x15ae5c],0x0  ; 0058d9d1 | g_CDemonSetInstance.last_switch_area_invalid
    JZ 0x0058d9fc                       ; 0058d9d8
        ;   XREF to: 0058d9fc (CONDITIONAL_JUMP)  ; LAB_0058d9fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d9da
    FLD float ptr [EAX + 0x20]          ; 0058d9dd
    FST double ptr [ESP]                ; 0058d9e0
    FCOMP double ptr [0x005ee802]       ; 0058d9e3 | DAT_005ee802
    FNSTSW AX                           ; 0058d9e9
    SAHF                                ; 0058d9eb
    JBE 0x0058daed                      ; 0058d9ec
        ;   XREF to: 0058daed (CONDITIONAL_JUMP)  ; LAB_0058daed
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d9f2
    MOV dword ptr [EAX + 0x34],0xbfc90fdb ; 0058d9f5
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058d9fc
        ;   Label: LAB_0058d9fc
    MOV ESI,dword ptr [EAX + 0x10b1c]   ; 0058d9ff
    PUSH ESI                            ; 0058da05
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0058da06
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 0058da0b
    PUSH 0x5ee7d5                       ; 0058da0e | = "werewolf-die?.wav"
    MOV EDI,dword ptr [EBP + 0x14]      ; 0058da13
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058da16
    PUSH EDI                            ; 0058da19
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0058da1a
    CALL dword ptr [EAX + 0x34]         ; 0058da20
    ADD ESP,0x8                         ; 0058da23
    PUSH 0x41c80000                     ; 0058da26
    MOV dword ptr [EDI + 0x10b1c],EAX   ; 0058da2b
    PUSH 0x32                           ; 0058da31
    MOV EAX,dword ptr [EDI + 0x2b0]     ; 0058da33
    PUSH EDI                            ; 0058da39
    CALL dword ptr [EAX + 0xb0]         ; 0058da3a
    ADD ESP,0xc                         ; 0058da40
    MOV ECX,dword ptr [EBP + 0x18]      ; 0058da43
        ;   Label: LAB_0058da43
    PUSH ECX                            ; 0058da46
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058da47
    PUSH EBX                            ; 0058da4a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0058da4b
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0058da50
    MOV ESP,EBP                         ; 0058da53
    POP EBP                             ; 0058da55
    POP EDI                             ; 0058da56
    POP ESI                             ; 0058da57
    POP EBX                             ; 0058da58
    RET                                 ; 0058da59
    MOV EDI,dword ptr [EBP + 0x14]      ; 0058da5a
        ;   Label: LAB_0058da5a
    PUSH EDI                            ; 0058da5d
    CALL core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060 ; 0058da5e
        ;   XREF to: 0058d060 (UNCONDITIONAL_CALL)  ; void core_werewolf.cpp_CWerewolf_playHowl_FUN_0058d060(CWerewolf * this_ptr)
    ADD ESP,0x4                         ; 0058da63
    PUSH 0x1                            ; 0058da66
    PUSH 0x16                           ; 0058da68
    LEA EAX,[EDI + 0x2b4]               ; 0058da6a
    PUSH EAX                            ; 0058da70
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058da71
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058da76
    MOV EAX,dword ptr [EBP + 0x18]      ; 0058da79
    PUSH EAX                            ; 0058da7c
    PUSH EDI                            ; 0058da7d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00488890 ; 0058da7e
        ;   XREF to: 00488890 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00488890(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 0058da83
    MOV ESP,EBP                         ; 0058da86
    POP EBP                             ; 0058da88
    POP EDI                             ; 0058da89
    POP ESI                             ; 0058da8a
    POP EBX                             ; 0058da8b
    RET                                 ; 0058da8c
    FLD float ptr [EAX + 0x4]           ; 0058da8d
        ;   Label: LAB_0058da8d
    ADD EAX,0x1c                        ; 0058da90
    FLD ST0                             ; 0058da93
    FMUL double ptr [0x005ee7fa]        ; 0058da95 | DAT_005ee7fa
    PUSH EAX                            ; 0058da9b
    MOV ESI,dword ptr [EBP + 0x14]      ; 0058da9c
    LEA EDI,[ESP + 0x18]                ; 0058da9f
    PUSH ESI                            ; 0058daa3
    FSTP ST1                            ; 0058daa4
    LEA ESI,[ESP + 0x10]                ; 0058daa6
    FSTP float ptr [EAX + -0x18]        ; 0058daaa
    CALL core_actor.cpp_FUN_00408d70    ; 0058daad
        ;   XREF to: 00408d70 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_FUN_00408d70()
    LEA ESI,[ESP + 0x10]                ; 0058dab2
    ADD ESP,0x8                         ; 0058dab6
    XOR EBX,EBX                         ; 0058dab9
    MOVSD ES:EDI,ESI                    ; 0058dabb
    MOVSD ES:EDI,ESI                    ; 0058dabc
    MOVSD ES:EDI,ESI                    ; 0058dabd
    MOV ESI,0x4000                      ; 0058dabe
    PUSH 0xffff                         ; 0058dac3
        ;   Label: LAB_0058dac3
    PUSH 0x0                            ; 0058dac8
    PUSH ESI                            ; 0058daca
    PUSH ESI                            ; 0058dacb
    PUSH 0x0                            ; 0058dacc
    LEA EAX,[ESP + 0x28]                ; 0058dace
    PUSH EAX                            ; 0058dad2
    MOV ECX,dword ptr [0x00614d30]      ; 0058dad3 | DAT_00614d30
    PUSH ECX                            ; 0058dad9
    INC EBX                             ; 0058dada
    CALL core_fire.cpp_CFireEffect_createSpark_FUN_0049d090 ; 0058dadb
        ;   XREF to: 0049d090 (UNCONDITIONAL_CALL)  ; void core_fire.cpp_CFireEffect_createSpark_FUN_0049d090(CFireEffect * this_ptr, CVector3f * position, CVector3f * velocity, int intensity_target, ...)
    ADD ESP,0x1c                        ; 0058dae0
    CMP EBX,0x5                         ; 0058dae3
    JL 0x0058dac3                       ; 0058dae6
        ;   XREF to: 0058dac3 (CONDITIONAL_JUMP)  ; LAB_0058dac3
    JMP 0x0058d960                      ; 0058dae8
        ;   XREF to: 0058d960 (UNCONDITIONAL_JUMP)  ; LAB_0058d960
    FLD double ptr [ESP]                ; 0058daed
        ;   Label: LAB_0058daed
    FCOMP double ptr [0x005ee80a]       ; 0058daf0 | DAT_005ee80a
    FNSTSW AX                           ; 0058daf6
    SAHF                                ; 0058daf8
    JNC 0x0058d9fc                      ; 0058daf9
        ;   XREF to: 0058d9fc (CONDITIONAL_JUMP)  ; LAB_0058d9fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058daff
    MOV dword ptr [EAX + 0x34],0x3fc90fdb ; 0058db02
    JMP 0x0058d9fc                      ; 0058db09
        ;   XREF to: 0058d9fc (UNCONDITIONAL_JUMP)  ; LAB_0058d9fc
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db0e
        ;   Label: LAB_0058db0e
    CMP dword ptr [EAX + 0x10af8],0x2   ; 0058db11
    JZ 0x0058db89                       ; 0058db18
        ;   XREF to: 0058db89 (CONDITIONAL_JUMP)  ; LAB_0058db89
    PUSH EBX                            ; 0058db1a
    CALL core_motion.cpp_FUN_005035c0   ; 0058db1b
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058db20
    ADD ESP,0x4                         ; 0058db23
    CMP EAX,0xe                         ; 0058db26
    JNZ 0x0058dbc9                      ; 0058db29
        ;   XREF to: 0058dbc9 (CONDITIONAL_JUMP)  ; LAB_0058dbc9
    PUSH 0x2                            ; 0058db2f
        ;   Label: LAB_0058db2f
    PUSH 0x0                            ; 0058db31
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0058db33
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058db38
    MOV EBX,EAX                         ; 0058db3b
    TEST EAX,EAX                        ; 0058db3d
    JNZ 0x0058db56                      ; 0058db3f
        ;   XREF to: 0058db56 (CONDITIONAL_JUMP)  ; LAB_0058db56
    PUSH 0x1                            ; 0058db41
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db43
    PUSH 0x9                            ; 0058db46
    ADD EAX,0x2b4                       ; 0058db48
    PUSH EAX                            ; 0058db4d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058db4e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058db53
    CMP EBX,0x1                         ; 0058db56
        ;   Label: LAB_0058db56
    JNZ 0x0058db6f                      ; 0058db59
        ;   XREF to: 0058db6f (CONDITIONAL_JUMP)  ; LAB_0058db6f
    PUSH EBX                            ; 0058db5b
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db5c
    PUSH 0xa                            ; 0058db5f
    ADD EAX,0x2b4                       ; 0058db61
    PUSH EAX                            ; 0058db66
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058db67
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058db6c
    CMP EBX,0x2                         ; 0058db6f
        ;   Label: LAB_0058db6f
    JNZ 0x0058db89                      ; 0058db72
        ;   XREF to: 0058db89 (CONDITIONAL_JUMP)  ; LAB_0058db89
    PUSH 0x1                            ; 0058db74
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db76
    PUSH 0xb                            ; 0058db79
    ADD EAX,0x2b4                       ; 0058db7b
        ;   Label: LAB_0058db7b
    PUSH EAX                            ; 0058db80
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058db81
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058db86
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058db89
        ;   Label: LAB_0058db89
    MOV EDI,dword ptr [EAX + 0x10b1c]   ; 0058db8c
    PUSH EDI                            ; 0058db92
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00550b70 ; 0058db93
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0058db98
    TEST EAX,EAX                        ; 0058db9b
    JNZ 0x0058da43                      ; 0058db9d
        ;   XREF to: 0058da43 (CONDITIONAL_JUMP)  ; LAB_0058da43
    PUSH 0x5ee7e7                       ; 0058dba3 | = "werewolf-hurt?.wav"
    MOV EDX,dword ptr [EBP + 0x14]      ; 0058dba8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dbab
    PUSH EDX                            ; 0058dbae
    MOV EAX,dword ptr [EAX + 0x2b0]     ; 0058dbaf
    CALL dword ptr [EAX + 0x34]         ; 0058dbb5
    ADD ESP,0x8                         ; 0058dbb8
    MOV EBX,dword ptr [EBP + 0x14]      ; 0058dbbb
    MOV dword ptr [EBX + 0x10b1c],EAX   ; 0058dbbe
    JMP 0x0058da43                      ; 0058dbc4
        ;   XREF to: 0058da43 (UNCONDITIONAL_JUMP)  ; LAB_0058da43
    CMP EAX,0xf                         ; 0058dbc9
        ;   Label: LAB_0058dbc9
    JZ 0x0058db2f                       ; 0058dbcc
        ;   XREF to: 0058db2f (CONDITIONAL_JUMP)  ; LAB_0058db2f
    TEST EAX,EAX                        ; 0058dbd2
    JNZ 0x0058dc2b                      ; 0058dbd4
        ;   XREF to: 0058dc2b (CONDITIONAL_JUMP)  ; LAB_0058dc2b
    PUSH 0x2                            ; 0058dbd6
        ;   Label: LAB_0058dbd6
    PUSH 0x0                            ; 0058dbd8
    CALL core_actor.cpp_getRandomInt_FUN_0040cfc0 ; 0058dbda
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cfc0(int min_value, int max_value)
    ADD ESP,0x8                         ; 0058dbdf
    MOV EBX,EAX                         ; 0058dbe2
    TEST EAX,EAX                        ; 0058dbe4
    JNZ 0x0058dbfd                      ; 0058dbe6
        ;   XREF to: 0058dbfd (CONDITIONAL_JUMP)  ; LAB_0058dbfd
    PUSH 0x1                            ; 0058dbe8
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dbea
    PUSH 0x10                           ; 0058dbed
    ADD EAX,0x2b4                       ; 0058dbef
    PUSH EAX                            ; 0058dbf4
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058dbf5
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058dbfa
    CMP EBX,0x1                         ; 0058dbfd
        ;   Label: LAB_0058dbfd
    JNZ 0x0058dc16                      ; 0058dc00
        ;   XREF to: 0058dc16 (CONDITIONAL_JUMP)  ; LAB_0058dc16
    PUSH EBX                            ; 0058dc02
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dc03
    PUSH 0x11                           ; 0058dc06
    ADD EAX,0x2b4                       ; 0058dc08
    PUSH EAX                            ; 0058dc0d
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 0058dc0e
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0058dc13
    CMP EBX,0x2                         ; 0058dc16
        ;   Label: LAB_0058dc16
    JNZ 0x0058db89                      ; 0058dc19
        ;   XREF to: 0058db89 (CONDITIONAL_JUMP)  ; LAB_0058db89
    PUSH 0x1                            ; 0058dc1f
    MOV EAX,dword ptr [EBP + 0x14]      ; 0058dc21
    PUSH 0x12                           ; 0058dc24
    JMP 0x0058db7b                      ; 0058dc26
        ;   XREF to: 0058db7b (UNCONDITIONAL_JUMP)  ; LAB_0058db7b
    CMP EAX,0x1                         ; 0058dc2b
        ;   Label: LAB_0058dc2b
    JZ 0x0058dbd6                       ; 0058dc2e
        ;   XREF to: 0058dbd6 (CONDITIONAL_JUMP)  ; LAB_0058dbd6
    CMP EAX,0x2                         ; 0058dc30
    JZ 0x0058dbd6                       ; 0058dc33
        ;   XREF to: 0058dbd6 (CONDITIONAL_JUMP)  ; LAB_0058dbd6
    CMP EAX,0x13                        ; 0058dc35
    JZ 0x0058dbd6                       ; 0058dc38
        ;   XREF to: 0058dbd6 (CONDITIONAL_JUMP)  ; LAB_0058dbd6
    CMP EAX,0x3                         ; 0058dc3a
    JZ 0x0058dbd6                       ; 0058dc3d
        ;   XREF to: 0058dbd6 (CONDITIONAL_JUMP)  ; LAB_0058dbd6
    CMP EAX,0x4                         ; 0058dc3f
    JZ 0x0058dbd6                       ; 0058dc42
        ;   XREF to: 0058dbd6 (CONDITIONAL_JUMP)  ; LAB_0058dbd6
    JMP 0x0058db89                      ; 0058dc44
        ;   XREF to: 0058db89 (UNCONDITIONAL_JUMP)  ; LAB_0058db89

