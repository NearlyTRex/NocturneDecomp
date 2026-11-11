; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_svetlana_cpp_CSvetlana_processDamage_FUN_00571870(CSvetlana *this_ptr,SDamageInfo *damage_info)
;
; Parameters:
; CSvetlana *      Stack[0x4]:4   this_ptr
; SDamageInfo *    Stack[0x8]:4   damage_info
;
; Referenced Globals:
;   TerminatedCString s_svet_die_wav_005ec3b2
;   TerminatedCString s_svet_hurt_wav_005ec3bf
;   undefined4 DAT_005fc578
;   CGame* g_CGamePtr = 01cb6900
;   CGore* g_CGorePtr = 01cb8284
;   undefined4 g_CGameInstance.god_mode_enabled
;   undefined4 g_CGameInstance.allow_damage_flag
;
; Called Functions:
;   core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0
;   core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0
;   core_motion.cpp_CMotionController_setDesiredState_FUN_00503620
;   core_motion.cpp_FUN_005035c0
;   sound_sndmain.cpp_FUN_00550b70
;   sound_sndmain.cpp_killSfx_FUN_00551050
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00571870
        ;   Label: core_svetlana.cpp_CSvetlana_processDamage_FUN_00571870
    PUSH ESI                            ; 00571871
    PUSH EDI                            ; 00571872
    MOV EBX,dword ptr [ESP + 0x10]      ; 00571873
    MOV EDI,dword ptr [ESP + 0x14]      ; 00571877
    TEST dword ptr [EBX + 0x10a60],0x7fffffff ; 0057187b
    JNZ 0x00571927                      ; 00571885
        ;   XREF to: 00571927 (CONDITIONAL_JUMP)  ; LAB_00571927
    MOV EAX,[0x00616494]                ; 0057188b | g_CGamePtr
        ;   Label: LAB_0057188b
    CMP dword ptr [EAX + 0x1ec],0x0     ; 00571890 | g_CGameInstance.god_mode_enabled
    JZ 0x005718a0                       ; 00571897
        ;   XREF to: 005718a0 (CONDITIONAL_JUMP)  ; LAB_005718a0
    MOV dword ptr [EDI + 0x4],0x0       ; 00571899
    MOV EAX,[0x00616494]                ; 005718a0 | g_CGamePtr
        ;   Label: LAB_005718a0
    MOV ESI,dword ptr [EAX + 0x248]     ; 005718a5 | g_CGameInstance.allow_damage_flag
    TEST ESI,ESI                        ; 005718ab
    JZ 0x00571933                       ; 005718ad
        ;   XREF to: 00571933 (CONDITIONAL_JUMP)  ; LAB_00571933
    MOV EAX,[0x005fc578]                ; 005718b3 | DAT_005fc578
        ;   Label: LAB_005718b3
    MOV dword ptr [EBX + 0x10a60],EAX   ; 005718b8
    FLD float ptr [EDI + 0x4]           ; 005718be
    FSUBR float ptr [EBX + 0x25a8]      ; 005718c1
    LEA ESI,[EBX + 0x2b4]               ; 005718c7
    FST float ptr [EBX + 0x25a8]        ; 005718cd
    FLDZ                                ; 005718d3
    FCOMPP                              ; 005718d5
    FNSTSW AX                           ; 005718d7
    SAHF                                ; 005718d9
    JNC 0x0057193b                      ; 005718da
        ;   XREF to: 0057193b (CONDITIONAL_JUMP)  ; LAB_0057193b
    FLD float ptr [EDI + 0x4]           ; 005718dc
    FLDZ                                ; 005718df
    FCOMPP                              ; 005718e1
    FNSTSW AX                           ; 005718e3
    SAHF                                ; 005718e5
    JNC 0x00571919                      ; 005718e6
        ;   XREF to: 00571919 (CONDITIONAL_JUMP)  ; LAB_00571919
    CMP dword ptr [EBX + 0x25640],0x0   ; 005718e8
    JNZ 0x005719cc                      ; 005718ef
        ;   XREF to: 005719cc (CONDITIONAL_JUMP)  ; LAB_005719cc
    PUSH 0x1                            ; 005718f5
    PUSH 0x4                            ; 005718f7
    PUSH ESI                            ; 005718f9
        ;   Label: LAB_005718f9
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 005718fa
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 005718ff
    MOV EAX,dword ptr [EBX + 0x9aca8]   ; 00571902
    PUSH EAX                            ; 00571908
    CALL sound_sndmain.cpp_FUN_00550b70 ; 00571909
        ;   XREF to: 00550b70 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_FUN_00550b70(uint sfx_handle)
    ADD ESP,0x4                         ; 0057190e
    TEST EAX,EAX                        ; 00571911
    JZ 0x005719d5                       ; 00571913
        ;   XREF to: 005719d5 (CONDITIONAL_JUMP)  ; LAB_005719d5
    PUSH EDI                            ; 00571919
        ;   Label: LAB_00571919
    PUSH EBX                            ; 0057191a
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 0057191b
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 00571920
    POP EDI                             ; 00571923
    POP ESI                             ; 00571924
    POP EBX                             ; 00571925
    RET                                 ; 00571926
    MOV dword ptr [EDI + 0x4],0x0       ; 00571927
        ;   Label: LAB_00571927
    JMP 0x0057188b                      ; 0057192e
        ;   XREF to: 0057188b (UNCONDITIONAL_JUMP)  ; LAB_0057188b
    MOV dword ptr [EDI + 0x4],ESI       ; 00571933
        ;   Label: LAB_00571933
    JMP 0x005718b3                      ; 00571936
        ;   XREF to: 005718b3 (UNCONDITIONAL_JUMP)  ; LAB_005718b3
    PUSH ESI                            ; 0057193b
        ;   Label: LAB_0057193b
    MOV dword ptr [EBX + 0x25a8],0x0    ; 0057193c
    CALL core_motion.cpp_FUN_005035c0   ; 00571946
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057194b
    ADD ESP,0x4                         ; 0057194e
    CMP EAX,0x9                         ; 00571951
    JZ 0x00571919                       ; 00571954
        ;   XREF to: 00571919 (CONDITIONAL_JUMP)  ; LAB_00571919
    PUSH ESI                            ; 00571956
    CALL core_motion.cpp_FUN_005035c0   ; 00571957
        ;   XREF to: 005035c0 (UNCONDITIONAL_CALL)  ; undefined core_motion.cpp_FUN_005035c0()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0057195c
    ADD ESP,0x4                         ; 0057195f
    CMP EAX,0x8                         ; 00571962
    JZ 0x00571919                       ; 00571965
        ;   XREF to: 00571919 (CONDITIONAL_JUMP)  ; LAB_00571919
    PUSH 0x1                            ; 00571967
    PUSH 0x8                            ; 00571969
    PUSH ESI                            ; 0057196b
    MOV dword ptr [EBX + 0x276c],0x0    ; 0057196c
    CALL core_motion.cpp_CMotionController_setDesiredState_FUN_00503620 ; 00571976
        ;   XREF to: 00503620 (UNCONDITIONAL_CALL)  ; void core_motion.cpp_CMotionController_setDesiredState_FUN_00503620(CMotionController * this_ptr, int desired_state_index, int force_immediate)
    ADD ESP,0xc                         ; 0057197b
    PUSH 0x0                            ; 0057197e
    PUSH 0x42480000                     ; 00571980
    PUSH 0x32                           ; 00571985
    PUSH EBX                            ; 00571987
    MOV EDX,dword ptr [0x006167e0]      ; 00571988 | g_CGorePtr
    PUSH EDX                            ; 0057198e
    CALL core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0 ; 0057198f
        ;   XREF to: 004c9cc0 (UNCONDITIONAL_CALL)  ; void core_gore.cpp_CGore_spawnFliesOnActor_FUN_004c9cc0(CGore * this_ptr, CDemonActor * actor, int gather_count, float spawn_rate, ...)
    ADD ESP,0x14                        ; 00571994
    MOV ECX,dword ptr [EBX + 0x9aca8]   ; 00571997
    PUSH ECX                            ; 0057199d
    CALL sound_sndmain.cpp_killSfx_FUN_00551050 ; 0057199e
        ;   XREF to: 00551050 (UNCONDITIONAL_CALL)  ; int sound_sndmain.cpp_killSfx_FUN_00551050(uint sfx_handle)
    ADD ESP,0x4                         ; 005719a3
    PUSH 0x5ec3b2                       ; 005719a6 | = "svet-die.wav"
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005719ab
    PUSH EBX                            ; 005719b1
    CALL dword ptr [EAX + 0x34]         ; 005719b2
    ADD ESP,0x8                         ; 005719b5
    MOV dword ptr [EBX + 0x9aca8],EAX   ; 005719b8
    PUSH EDI                            ; 005719be
    PUSH EBX                            ; 005719bf
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 005719c0
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005719c5
    POP EDI                             ; 005719c8
    POP ESI                             ; 005719c9
    POP EBX                             ; 005719ca
    RET                                 ; 005719cb
    PUSH 0x1                            ; 005719cc
        ;   Label: LAB_005719cc
    PUSH 0xb                            ; 005719ce
    JMP 0x005718f9                      ; 005719d0
        ;   XREF to: 005718f9 (UNCONDITIONAL_JUMP)  ; LAB_005718f9
    PUSH 0x5ec3bf                       ; 005719d5 | = "svet-hurt?.wav"
        ;   Label: LAB_005719d5
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 005719da
    PUSH EBX                            ; 005719e0
    CALL dword ptr [EAX + 0x34]         ; 005719e1
    ADD ESP,0x8                         ; 005719e4
    MOV dword ptr [EBX + 0x9aca8],EAX   ; 005719e7
    PUSH EDI                            ; 005719ed
    PUSH EBX                            ; 005719ee
    CALL core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0 ; 005719ef
        ;   XREF to: 00427fb0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_processDamage_FUN_00427fb0(CCharacter * this_ptr, SDamageInfo * damage_info)
    ADD ESP,0x8                         ; 005719f4
    POP EDI                             ; 005719f7
    POP ESI                             ; 005719f8
    POP EBX                             ; 005719f9
    RET                                 ; 005719fa

