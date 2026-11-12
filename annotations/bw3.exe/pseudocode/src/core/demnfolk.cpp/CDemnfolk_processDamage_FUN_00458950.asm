; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_demnfolk_cpp_CDemnfolk_processDamage_FUN_00458950(CDemnfolk *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CDemnfolk *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   undefined4 s_ShotInvulnerable_005ba909+1
;   TerminatedCString s_D_SHERIFF_dfm_005ba91b
;   TerminatedCString s_demn_die_wav_005ba929
;   TerminatedCString s_demn_die_wav_005ba93a
;   TerminatedCString s_demn_taunt_wav_005ba94b
;   TerminatedCString s_demn_taunt_wav_005ba95f
;   undefined4 DAT_005fba60
;
; Called Functions:
;   core_actor.cpp_getRandomInt_FUN_0040cea0
;   core_demnfolk.cpp_FUN_00458180
;   core_demnfolk.cpp_FUN_00458680
;   core_enemy.cpp_CEnemy_processDamage_FUN_00489b80
;   core_event.cpp_CEventList_executeCommands_FUN_0048c150
;   core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070
;   core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0
;   crt_string.c__stricmp_FUN_005a3260
;   sound_sndmain.cpp_FUN_00556700
;   sound_sndmain.cpp_killSfx_FUN_00556be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00458950
        ;   Label: core_demnfolk.cpp_CDemnfolk_processDamage_FUN_00458950
    PUSH ESI                            ; 00458951
    PUSH EDI                            ; 00458952
    PUSH EBP                            ; 00458953
    MOV EBP,ESP                         ; 00458954
    MOV EBX,dword ptr [EBP + 0x14]      ; 00458956
    MOV EDI,dword ptr [EBP + 0x18]      ; 00458959
    CMP dword ptr [EBX + 0x27b0],0x0    ; 0045895c
    JNZ 0x00458a88                      ; 00458963
        ;   XREF to: 00458a88 (CONDITIONAL_JUMP)  ; LAB_00458a88
    PUSH EDI                            ; 00458969
    PUSH EBX                            ; 0045896a
    CALL core_demnfolk.cpp_FUN_00458680 ; 0045896b
        ;   XREF to: 00458680 (UNCONDITIONAL_CALL)  ; void core_demnfolk.cpp_FUN_00458680(CZombie * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00458970
    MOV EAX,dword ptr [EBX + 0x154]     ; 00458973
    PUSH EBX                            ; 00458979
    CALL dword ptr [EAX + 0xf8]         ; 0045897a
    FLD float ptr [EDI + 0x4]           ; 00458980
    FSUBR float ptr [EBX + 0x2538]      ; 00458983
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00458989
    FSTP float ptr [EBX + 0x2538]       ; 0045898f
    MOV ECX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00458995
    ADD ESP,0x4                         ; 0045899c
    TEST ECX,ECX                        ; 0045899f
    JZ 0x00458a9b                       ; 004589a1
        ;   XREF to: 00458a9b (CONDITIONAL_JUMP)  ; LAB_00458a9b
    FLD float ptr [EBX + 0x2538]        ; 004589a7
        ;   Label: LAB_004589a7
    FLDZ                                ; 004589ad
    MOV dword ptr [EBX + 0xcde0],0x3f99999a ; 004589af
    FCOMPP                              ; 004589b9
    FNSTSW AX                           ; 004589bb
    SAHF                                ; 004589bd
    JC 0x00458acb                       ; 004589be
        ;   XREF to: 00458acb (CONDITIONAL_JUMP)  ; LAB_00458acb
    LEA EAX,[EBX + 0x158]               ; 004589c4
    PUSH EAX                            ; 004589ca
    MOV dword ptr [EBX + 0x2538],0x0    ; 004589cb
    CALL core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070 ; 004589d5
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; SMotion * core_motion.cpp_CMotionController_getCurrentMotion_FUN_004fc070(CMotionController * this_ptr)
    MOV EAX,dword ptr [EAX + 0x24]      ; 004589da
    ADD ESP,0x4                         ; 004589dd
    CMP EAX,0x19                        ; 004589e0
    JZ 0x00458a79                       ; 004589e3
        ;   XREF to: 00458a79 (CONDITIONAL_JUMP)  ; LAB_00458a79
    CMP EAX,0x18                        ; 004589e9
    JZ 0x00458a79                       ; 004589ec
        ;   XREF to: 00458a79 (CONDITIONAL_JUMP)  ; LAB_00458a79
    PUSH EBX                            ; 004589f2
    CALL core_demnfolk.cpp_FUN_00458180 ; 004589f3
        ;   XREF to: 00458180 (UNCONDITIONAL_CALL)  ; undefined core_demnfolk.cpp_FUN_00458180()
    ADD ESP,0x4                         ; 004589f8
    PUSH 0x4                            ; 004589fb
    PUSH 0x0                            ; 004589fd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 004589ff
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    LEA ESI,[EAX + 0x13]                ; 00458a04
    MOV EAX,dword ptr [EBX + 0xd12c]    ; 00458a07
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x2298] ; 00458a0d
    ADD ESP,0x8                         ; 00458a14
    TEST EDX,EDX                        ; 00458a17
    JZ 0x00458aa6                       ; 00458a19
        ;   XREF to: 00458aa6 (CONDITIONAL_JUMP)  ; LAB_00458aa6
    PUSH 0x5ba91b                       ; 00458a1f | = "D_SHERIFF.dfm"
        ;   Label: LAB_00458a1f
    LEA EAX,[EBX + 0x24a8]              ; 00458a24
    PUSH EAX                            ; 00458a2a
    CALL crt_string.c__stricmp_FUN_005a3260 ; 00458a2b
        ;   XREF to: 005a3260 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a3260(char * str1, char * str2)
    ADD ESP,0x8                         ; 00458a30
    TEST EAX,EAX                        ; 00458a33
    JNZ 0x00458a3c                      ; 00458a35
        ;   XREF to: 00458a3c (CONDITIONAL_JUMP)  ; LAB_00458a3c
    MOV ESI,0x17                        ; 00458a37
    PUSH 0x1                            ; 00458a3c
        ;   Label: LAB_00458a3c
    PUSH ESI                            ; 00458a3e
    LEA EAX,[EBX + 0x158]               ; 00458a3f
    PUSH EAX                            ; 00458a45
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00458a46
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 00458a4b
    MOV ESI,dword ptr [EBX + 0xd138]    ; 00458a4e
    PUSH ESI                            ; 00458a54
    CALL sound_sndmain.cpp_killSfx_FUN_00556be0 ; 00458a55
        ;   XREF to: 00556be0 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00556be0(uint sfx_handle)
    MOV EAX,dword ptr [EBX + 0xd0e4]    ; 00458a5a
    ADD ESP,0x4                         ; 00458a60
    TEST EAX,EAX                        ; 00458a63
    JZ 0x00458ac4                       ; 00458a65
        ;   XREF to: 00458ac4 (CONDITIONAL_JUMP)  ; LAB_00458ac4
    PUSH 0x5ba929                       ; 00458a67 | = "demn_die_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00458a6c
        ;   Label: LAB_00458a6c
    PUSH EBX                            ; 00458a72
    CALL dword ptr [EAX + 0x2c]         ; 00458a73
    ADD ESP,0x8                         ; 00458a76
    PUSH EDI                            ; 00458a79
        ;   Label: LAB_00458a79
    PUSH EBX                            ; 00458a7a
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00458a7b
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00458a80
        ;   Label: LAB_00458a80
    POP EBP                             ; 00458a83
    POP EDI                             ; 00458a84
    POP ESI                             ; 00458a85
    POP EBX                             ; 00458a86
    RET                                 ; 00458a87
    PUSH 0x5ba90a                       ; 00458a88 | s_ShotInvulnerable_005ba909+1
        ;   Label: LAB_00458a88
    MOV EDX,dword ptr [0x005fba60]      ; 00458a8d | DAT_005fba60
    PUSH EDX                            ; 00458a93
    CALL core_event.cpp_CEventList_executeCommands_FUN_0048c150 ; 00458a94
        ;   XREF to: 0048c150 (UNCONDITIONAL_CALL)  ; int core_event.cpp_CEventList_executeCommands_FUN_0048c150(CEventList * this_ptr, char * commands)
    JMP 0x00458a80                      ; 00458a99
        ;   XREF to: 00458a80 (UNCONDITIONAL_JUMP)  ; LAB_00458a80
    MOV dword ptr [EBX + 0x2538],ECX    ; 00458a9b
        ;   Label: LAB_00458a9b
    JMP 0x004589a7                      ; 00458aa1
        ;   XREF to: 004589a7 (UNCONDITIONAL_JUMP)  ; LAB_004589a7
    MOV EAX,dword ptr [EBX + 0xd128]    ; 00458aa6
        ;   Label: LAB_00458aa6
    CMP dword ptr [EBX + EAX*0x4 + 0x2298],0x0 ; 00458aac
    JZ 0x00458a1f                       ; 00458ab4
        ;   XREF to: 00458a1f (CONDITIONAL_JUMP)  ; LAB_00458a1f
    MOV ESI,0x1e                        ; 00458aba
    JMP 0x00458a1f                      ; 00458abf
        ;   XREF to: 00458a1f (UNCONDITIONAL_JUMP)  ; LAB_00458a1f
    PUSH 0x5ba93a                       ; 00458ac4 | = "demn_die_???.wav"
        ;   Label: LAB_00458ac4
    JMP 0x00458a6c                      ; 00458ac9
        ;   XREF to: 00458a6c (UNCONDITIONAL_JUMP)  ; LAB_00458a6c
    PUSH 0x3                            ; 00458acb
        ;   Label: LAB_00458acb
    PUSH 0x0                            ; 00458acd
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00458acf
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    LEA ESI,[EAX + 0xe]                 ; 00458ad4
    ADD ESP,0x8                         ; 00458ad7
    CMP ESI,0x11                        ; 00458ada
    JNZ 0x00458af5                      ; 00458add
        ;   XREF to: 00458af5 (CONDITIONAL_JUMP)  ; LAB_00458af5
    PUSH 0x4                            ; 00458adf
    PUSH 0x0                            ; 00458ae1
    CALL core_actor.cpp_getRandomInt_FUN_0040cea0 ; 00458ae3
        ;   XREF to: 0040cea0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_getRandomInt_FUN_0040cea0(int min_value, int max_value)
    ADD ESP,0x8                         ; 00458ae8
    CMP EAX,0x1                         ; 00458aeb
    JZ 0x00458af5                       ; 00458aee
        ;   XREF to: 00458af5 (CONDITIONAL_JUMP)  ; LAB_00458af5
    MOV ESI,0xe                         ; 00458af0
    PUSH 0x1                            ; 00458af5
        ;   Label: LAB_00458af5
    PUSH ESI                            ; 00458af7
    LEA EAX,[EBX + 0x158]               ; 00458af8
    PUSH EAX                            ; 00458afe
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0 ; 00458aff
        ;   XREF to: 004fc0d0 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_004fc0d0(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    FLD float ptr [EBX + 0xd130]        ; 00458b04
    FLDZ                                ; 00458b0a
    ADD ESP,0xc                         ; 00458b0c
    FCOMPP                              ; 00458b0f
    FNSTSW AX                           ; 00458b11
    SAHF                                ; 00458b13
    JC 0x00458a79                       ; 00458b14
        ;   XREF to: 00458a79 (CONDITIONAL_JUMP)  ; LAB_00458a79
    MOV ESI,dword ptr [EBX + 0xd138]    ; 00458b1a
    PUSH ESI                            ; 00458b20
    MOV dword ptr [EBX + 0xd130],0x40000000 ; 00458b21
    CALL sound_sndmain.cpp_FUN_00556700 ; 00458b2b
        ;   XREF to: 00556700 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00556700(uint sfx_handle)
    ADD ESP,0x4                         ; 00458b30
    TEST EAX,EAX                        ; 00458b33
    JNZ 0x00458a79                      ; 00458b35
        ;   XREF to: 00458a79 (CONDITIONAL_JUMP)  ; LAB_00458a79
    CMP dword ptr [EBX + 0xd0e4],0x0    ; 00458b3b
    JZ 0x00458b6b                       ; 00458b42
        ;   XREF to: 00458b6b (CONDITIONAL_JUMP)  ; LAB_00458b6b
    PUSH 0x5ba94b                       ; 00458b44 | = "demn_taunt?_???.wav"
    MOV EAX,dword ptr [EBX + 0x154]     ; 00458b49
    PUSH EBX                            ; 00458b4f
    CALL dword ptr [EAX + 0x2c]         ; 00458b50
    ADD ESP,0x8                         ; 00458b53
    MOV dword ptr [EBX + 0xd138],EAX    ; 00458b56
    PUSH EDI                            ; 00458b5c
    PUSH EBX                            ; 00458b5d
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00458b5e
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00458b63
    POP EBP                             ; 00458b66
    POP EDI                             ; 00458b67
    POP ESI                             ; 00458b68
    POP EBX                             ; 00458b69
    RET                                 ; 00458b6a
    PUSH 0x5ba95f                       ; 00458b6b | = "demn_taunt_???.wav"
        ;   Label: LAB_00458b6b
    MOV EAX,dword ptr [EBX + 0x154]     ; 00458b70
    PUSH EBX                            ; 00458b76
    CALL dword ptr [EAX + 0x2c]         ; 00458b77
    ADD ESP,0x8                         ; 00458b7a
    MOV dword ptr [EBX + 0xd138],EAX    ; 00458b7d
    PUSH EDI                            ; 00458b83
    PUSH EBX                            ; 00458b84
    CALL core_enemy.cpp_CEnemy_processDamage_FUN_00489b80 ; 00458b85
        ;   XREF to: 00489b80 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_processDamage_FUN_00489b80(CEnemy * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00458b8a
    POP EBP                             ; 00458b8d
    POP EDI                             ; 00458b8e
    POP ESI                             ; 00458b8f
    POP EBX                             ; 00458b90
    RET                                 ; 00458b91

