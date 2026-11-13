; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_carved_cpp_CCarved_processDamage_FUN_00428a80(CCarved *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005b7e3e+1
;   TerminatedCString s_demn_die_wav_005b7e50
;   TerminatedCString s_demn_die_wav_005b7e61
;   TerminatedCString s_demn_taunt_wav_005b7e72
;   TerminatedCString s_demn_taunt_wav_005b7e86
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_carved.cpp_FUN_00428600
;   core_carved.cpp_FUN_00428810
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   sound_sndmain.cpp_isSfxPlaying_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00428a80
        ;   Label: core_carved.cpp_CCarved_processDamage_FUN_00428a80
    PUSH EDI                            ; 00428a81
    MOV EBX,dword ptr [ESP + 0xc]       ; 00428a82
    MOV EDI,dword ptr [ESP + 0x10]      ; 00428a86
    CMP dword ptr [EBX + 0x27b0],0x0    ; 00428a8a
    JNZ 0x00428ba1                      ; 00428a91
        ;   XREF to: 00428ba1 (CONDITIONAL_JUMP)  ; LAB_00428ba1
    PUSH EDI                            ; 00428a97
    PUSH EBX                            ; 00428a98
    CALL core_carved.cpp_FUN_00428810   ; 00428a99
        ;   XREF to: 00428810 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428810()
    ADD ESP,0x8                         ; 00428a9e
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428aa1
    PUSH EBX                            ; 00428aa7
    CALL dword ptr [EAX + 0xf8]         ; 00428aa8
    FLD float ptr [EDI + 0x4]           ; 00428aae
    FSUBR float ptr [EBX + 0x2538]      ; 00428ab1
    MOV EAX,dword ptr [EBX + 0xd0bc]    ; 00428ab7
    FSTP float ptr [EBX + 0x2538]       ; 00428abd
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00428ac3
    ADD ESP,0x4                         ; 00428aca
    TEST ECX,ECX                        ; 00428acd
    JZ 0x00428bb8                       ; 00428acf
        ;   XREF to: 00428bb8 (CONDITIONAL_JUMP)  ; LAB_00428bb8
    PUSH ESI                            ; 00428ad5
        ;   Label: LAB_00428ad5
    FLD float ptr [EBX + 0x2538]        ; 00428ad6
    FLDZ                                ; 00428adc
    LEA ESI,[EBX + 0x158]               ; 00428ade
    MOV dword ptr [EBX + 0xcde0],0x3f99999a ; 00428ae4
    FCOMPP                              ; 00428aee
    FNSTSW AX                           ; 00428af0
    SAHF                                ; 00428af2
    JC 0x00428bf7                       ; 00428af3
        ;   XREF to: 00428bf7 (CONDITIONAL_JUMP)  ; LAB_00428bf7
    PUSH ESI                            ; 00428af9
    MOV dword ptr [EBX + 0x2538],0x0    ; 00428afa
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 00428b04
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EDX,dword ptr [EAX + 0x24]      ; 00428b09
    ADD ESP,0x4                         ; 00428b0c
    MOV EAX,EDX                         ; 00428b0f
    CMP EDX,0x16                        ; 00428b11
    JZ 0x00428bc3                       ; 00428b14
        ;   XREF to: 00428bc3 (CONDITIONAL_JUMP)  ; LAB_00428bc3
    CMP EDX,0x13                        ; 00428b1a
    JZ 0x00428bc3                       ; 00428b1d
        ;   XREF to: 00428bc3 (CONDITIONAL_JUMP)  ; LAB_00428bc3
    PUSH EBX                            ; 00428b23
        ;   Label: LAB_00428b23
    CALL core_carved.cpp_FUN_00428600   ; 00428b24
        ;   XREF to: 00428600 (UNCONDITIONAL_CALL)  ; undefined core_carved.cpp_FUN_00428600()
    ADD ESP,0x4                         ; 00428b29
    PUSH 0x2                            ; 00428b2c
    PUSH 0x0                            ; 00428b2e
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00428b30
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00428b35
    PUSH 0x1                            ; 00428b38
    ADD EAX,0x13                        ; 00428b3a
    PUSH EAX                            ; 00428b3d
    LEA EAX,[EBX + 0x158]               ; 00428b3e
    PUSH EAX                            ; 00428b44
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00428b45
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00428b4a
    MOV EAX,dword ptr [EBX + 0xd0c8]    ; 00428b4d
    PUSH EAX                            ; 00428b53
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00428b54
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV EDX,dword ptr [EBX + 0xd074]    ; 00428b59
    ADD ESP,0x4                         ; 00428b5f
    TEST EDX,EDX                        ; 00428b62
    JZ 0x00428bed                       ; 00428b64
        ;   XREF to: 00428bed (CONDITIONAL_JUMP)  ; LAB_00428bed
    PUSH 0x5b7e50                       ; 00428b6a | = "demn_die_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428b6f
        ;   Label: LAB_00428b6f
    PUSH EBX                            ; 00428b75
    CALL dword ptr [EAX + 0x2c]         ; 00428b76
    ADD ESP,0x8                         ; 00428b79
    PUSH 0x41c80000                     ; 00428b7c
    PUSH 0x32                           ; 00428b81
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428b83
    PUSH EBX                            ; 00428b89
    CALL dword ptr [EAX + 0xa8]         ; 00428b8a
    ADD ESP,0xc                         ; 00428b90
    PUSH EDI                            ; 00428b93
        ;   Label: LAB_00428b93
    PUSH EBX                            ; 00428b94
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00428b95
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00428b9a
    POP ESI                             ; 00428b9d
    POP EDI                             ; 00428b9e
    POP EBX                             ; 00428b9f
    RET                                 ; 00428ba0
    PUSH 0x5b7e3f                       ; 00428ba1 | s_ShotInvulnerable_005b7e3e+1
        ;   Label: LAB_00428ba1
    MOV ECX,dword ptr [0x005fba60]      ; 00428ba6 | DAT_005fba60
    PUSH ECX                            ; 00428bac
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00428bad
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    ADD ESP,0x8                         ; 00428bb2
    POP EDI                             ; 00428bb5
    POP EBX                             ; 00428bb6
    RET                                 ; 00428bb7
    MOV dword ptr [EBX + 0x2538],ECX    ; 00428bb8
        ;   Label: LAB_00428bb8
    JMP 0x00428ad5                      ; 00428bbe
        ;   XREF to: 00428ad5 (UNCONDITIONAL_JUMP)  ; LAB_00428ad5
    CMP EAX,0x17                        ; 00428bc3
        ;   Label: LAB_00428bc3
    JZ 0x00428bd1                       ; 00428bc6
        ;   XREF to: 00428bd1 (CONDITIONAL_JUMP)  ; LAB_00428bd1
    CMP EAX,0x14                        ; 00428bc8
    JNZ 0x00428b23                      ; 00428bcb
        ;   XREF to: 00428b23 (CONDITIONAL_JUMP)  ; LAB_00428b23
    CMP EAX,0x18                        ; 00428bd1
        ;   Label: LAB_00428bd1
    JZ 0x00428b93                       ; 00428bd4
        ;   XREF to: 00428b93 (CONDITIONAL_JUMP)  ; LAB_00428b93
    CMP EAX,0x15                        ; 00428bd6
    JNZ 0x00428b23                      ; 00428bd9
        ;   XREF to: 00428b23 (CONDITIONAL_JUMP)  ; LAB_00428b23
    PUSH EDI                            ; 00428bdf
    PUSH EBX                            ; 00428be0
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00428be1
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00428be6
    POP ESI                             ; 00428be9
    POP EDI                             ; 00428bea
    POP EBX                             ; 00428beb
    RET                                 ; 00428bec
    PUSH 0x5b7e61                       ; 00428bed | = "demn_die_???.wav"
        ;   Label: LAB_00428bed
    JMP 0x00428b6f                      ; 00428bf2
        ;   XREF to: 00428b6f (UNCONDITIONAL_JUMP)  ; LAB_00428b6f
    PUSH 0x5                            ; 00428bf7
        ;   Label: LAB_00428bf7
    PUSH 0x0                            ; 00428bf9
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00428bfb
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00428c00
    PUSH 0x1                            ; 00428c03
    ADD EAX,0xd                         ; 00428c05
    PUSH EAX                            ; 00428c08
    PUSH ESI                            ; 00428c09
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00428c0a
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0xd0c0]        ; 00428c0f
    FLDZ                                ; 00428c15
    ADD ESP,0xc                         ; 00428c17
    FCOMPP                              ; 00428c1a
    FNSTSW AX                           ; 00428c1c
    SAHF                                ; 00428c1e
    JC 0x00428b93                       ; 00428c1f
        ;   XREF to: 00428b93 (CONDITIONAL_JUMP)  ; LAB_00428b93
    MOV ESI,dword ptr [EBX + 0xd0c8]    ; 00428c25
    PUSH ESI                            ; 00428c2b
    MOV dword ptr [EBX + 0xd0c0],0x40000000 ; 00428c2c
    CALL sound_sndmain.cpp_isSfxPlaying_FUN_00556700 ; 00428c36
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_isSfxPlaying_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00428c3b
    TEST EAX,EAX                        ; 00428c3e
    JNZ 0x00428b93                      ; 00428c40
        ;   XREF to: 00428b93 (CONDITIONAL_JUMP)  ; LAB_00428b93
    CMP dword ptr [EBX + 0xd074],0x0    ; 00428c46
    JZ 0x00428c75                       ; 00428c4d
        ;   XREF to: 00428c75 (CONDITIONAL_JUMP)  ; LAB_00428c75
    PUSH 0x5b7e72                       ; 00428c4f | = "demn_taunt?_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428c54
    PUSH EBX                            ; 00428c5a
    CALL dword ptr [EAX + 0x2c]         ; 00428c5b
    ADD ESP,0x8                         ; 00428c5e
    MOV dword ptr [EBX + 0xd0c8],EAX    ; 00428c61
    PUSH EDI                            ; 00428c67
    PUSH EBX                            ; 00428c68
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00428c69
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00428c6e
    POP ESI                             ; 00428c71
    POP EDI                             ; 00428c72
    POP EBX                             ; 00428c73
    RET                                 ; 00428c74
    PUSH 0x5b7e86                       ; 00428c75 | = "demn_taunt_???.wav"
        ;   Label: LAB_00428c75
    MOV EAX,dword ptr [EBX + 0x154]     ; 00428c7a
    PUSH EBX                            ; 00428c80
    CALL dword ptr [EAX + 0x2c]         ; 00428c81
    ADD ESP,0x8                         ; 00428c84
    MOV dword ptr [EBX + 0xd0c8],EAX    ; 00428c87
    PUSH EDI                            ; 00428c8d
    PUSH EBX                            ; 00428c8e
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00428c8f
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00428c94
    POP ESI                             ; 00428c97
    POP EDI                             ; 00428c98
    POP EBX                             ; 00428c99
    RET                                 ; 00428c9a

