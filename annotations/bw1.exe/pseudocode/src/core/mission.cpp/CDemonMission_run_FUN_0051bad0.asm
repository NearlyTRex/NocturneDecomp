; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_run_FUN_0051bad0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004d6990 at 004d71b3
;   core_game.cpp_FUN_004d7250 at 004d7544
;   core_game.cpp_joinNetworkGame_FUN_004d7e90 at 004d7f14
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005e98c1
;   TerminatedCString s_CDemonMission_run_hero_l_005e98d5
;   TerminatedCString s_core_mission_cpp_005e98fa
;   TerminatedCString s_CDemonMission_run_no_gLo_005e990e
;   TerminatedCString s_hq_geo_005e9931
;   CFieldNotes* g_CFieldNotesPtr = 01cc8004
;   CGame* g_CGamePtr = 01ccf390
;   undefined4 DAT_0061f2e0
;   CDemonSet* g_CDemonSetPtr = 01e82168
;   undefined4 g_CGameInstance.act_completion_state
;   undefined4 DAT_01d06aa0
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d33b20
;
; Called Functions:
;   core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0
;   core_game.cpp_CGame_displayActStats_FUN_004d8700
;   core_game.cpp_CGame_finishAct_FUN_004d8a90
;   core_game.cpp_CGame_runGameSession_FUN_004cf5e0
;   core_level.cpp_FUN_004fe840
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0
;   core_mission.cpp_CDemonMission_load_FUN_0051a3f0
;   core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0
;   core_mission.cpp_FUN_0051a3b0
;   core_mission.cpp_FUN_0051b1d0
;   core_mission.cpp_FUN_0051b610
;   core_mission.cpp_FUN_0051b7b0
;   core_mission.cpp_FUN_0051bdc0
;   crt_string.c__stricmp_FUN_005c3160
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051bad0
        ;   Label: core_mission.cpp_CDemonMission_run_FUN_0051bad0
    PUSH ESI                            ; 0051bad1
    PUSH EDI                            ; 0051bad2
    PUSH EBP                            ; 0051bad3
    MOV EBX,dword ptr [ESP + 0x14]      ; 0051bad4
    CMP dword ptr [0x01d06aa0],0x1      ; 0051bad8 | DAT_01d06aa0
        ;   Label: LAB_0051bad8
    JL 0x0051bbc0                       ; 0051badf
        ;   XREF to: 0051bbc0 (CONDITIONAL_JUMP)  ; LAB_0051bbc0
    MOV EAX,[0x01d06ab4]                ; 0051bae5 | DAT_01d06ab4
        ;   Label: LAB_0051bae5
    CMP dword ptr [EAX*0x4 + 0x1d06aa4],0x0 ; 0051baea
    JNZ 0x0051bb16                      ; 0051baf2
        ;   XREF to: 0051bb16 (CONDITIONAL_JUMP)  ; LAB_0051bb16
    MOV EBP,0x5e98fa                    ; 0051baf4 | = "..\\core\\mission.cpp"
    MOV EAX,0x521                       ; 0051baf9
    PUSH 0x5e990e                       ; 0051bafe | = "CDemonMission::run - no gLocalHero"
    MOV dword ptr [0x01d1d400],EBP      ; 0051bb03 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 0051bb09 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051bb0e
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051bb13
    MOV EAX,[0x01d06ab4]                ; 0051bb16 | DAT_01d06ab4
        ;   Label: LAB_0051bb16
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 0051bb1b
    MOV EDX,dword ptr [EAX + 0x2c]      ; 0051bb22
    PUSH EDX                            ; 0051bb25
    PUSH EBX                            ; 0051bb26
    CALL core_mission.cpp_FUN_0051b610  ; 0051bb27
        ;   XREF to: 0051b610 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b610()
    ADD ESP,0x8                         ; 0051bb2c
    XOR AH,AH                           ; 0051bb2f
    PUSH EBX                            ; 0051bb31
    MOV byte ptr [0x01d33b20],AH        ; 0051bb32 | DAT_01d33b20
    CALL core_mission.cpp_FUN_0051b7b0  ; 0051bb38
        ;   XREF to: 0051b7b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b7b0()
    ADD ESP,0x4                         ; 0051bb3d
    MOV ECX,dword ptr [0x0061d95c]      ; 0051bb40 | g_CGamePtr
    PUSH ECX                            ; 0051bb46
    CALL core_game.cpp_CGame_runGameSession_FUN_004cf5e0 ; 0051bb47
        ;   XREF to: 004cf5e0 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_runGameSession_FUN_004cf5e0(CGame * this_ptr)
    MOV ESI,dword ptr [0x01d06ab4]      ; 0051bb4c | DAT_01d06ab4
    ADD ESP,0x4                         ; 0051bb52
    MOV ESI,dword ptr [ESI*0x4 + 0x1d06aa4] ; 0051bb55
    PUSH ESI                            ; 0051bb5c
    PUSH EBX                            ; 0051bb5d
    MOV EDI,EAX                         ; 0051bb5e
    CALL core_mission.cpp_FUN_0051b1d0  ; 0051bb60
        ;   XREF to: 0051b1d0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051b1d0()
    ADD ESP,0x8                         ; 0051bb65
    MOV EAX,dword ptr [ESI + 0x154]     ; 0051bb68
    PUSH ESI                            ; 0051bb6e
    CALL dword ptr [EAX + 0x14c]        ; 0051bb6f
    ADD ESP,0x4                         ; 0051bb75
    PUSH EBX                            ; 0051bb78
    CALL core_mission.cpp_FUN_0051a3b0  ; 0051bb79
        ;   XREF to: 0051a3b0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_0051a3b0()
    ADD ESP,0x4                         ; 0051bb7e
    TEST EDI,EDI                        ; 0051bb81
    JZ 0x0051bb8e                       ; 0051bb83
        ;   XREF to: 0051bb8e (CONDITIONAL_JUMP)  ; LAB_0051bb8e
    CMP byte ptr [0x01d33b20],0x0       ; 0051bb85 | DAT_01d33b20
    JNZ 0x0051bbe8                      ; 0051bb8c
        ;   XREF to: 0051bbe8 (CONDITIONAL_JUMP)  ; LAB_0051bbe8
    PUSH 0x1                            ; 0051bb8e
        ;   Label: LAB_0051bb8e
    PUSH ESI                            ; 0051bb90
    PUSH EBX                            ; 0051bb91
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0 ; 0051bb92
        ;   XREF to: 0051b4d0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_0051b4d0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 0051bb97
    MOV EAX,[0x0061d95c]                ; 0051bb9a | g_CGamePtr
        ;   Label: LAB_0051bb9a
    CMP dword ptr [EAX + 0x27c],0x0     ; 0051bb9f | g_CGameInstance.act_completion_state
    JNZ 0x0051bc6d                      ; 0051bba6
        ;   XREF to: 0051bc6d (CONDITIONAL_JUMP)  ; LAB_0051bc6d
    MOV ECX,dword ptr [0x0061d418]      ; 0051bbac | g_CFieldNotesPtr
    PUSH ECX                            ; 0051bbb2
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 0051bbb3
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 0051bbb8
    POP EBP                             ; 0051bbbb
    POP EDI                             ; 0051bbbc
    POP ESI                             ; 0051bbbd
    POP EBX                             ; 0051bbbe
    RET                                 ; 0051bbbf
    MOV ECX,0x5e98c1                    ; 0051bbc0 | = "..\\core\\mission.cpp"
        ;   Label: LAB_0051bbc0
    MOV ESI,0x520                       ; 0051bbc5
    PUSH 0x5e98d5                       ; 0051bbca | = "CDemonMission::run - hero list empty"
    MOV dword ptr [0x01d1d400],ECX      ; 0051bbcf | DAT_01d1d400
    MOV dword ptr [0x01d1d404],ESI      ; 0051bbd5 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 0051bbdb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 0051bbe0
    JMP 0x0051bae5                      ; 0051bbe3
        ;   XREF to: 0051bae5 (UNCONDITIONAL_JUMP)  ; LAB_0051bae5
    MOV EAX,[0x00622c18]                ; 0051bbe8 | g_CDemonSetPtr
        ;   Label: LAB_0051bbe8
    PUSH 0x5e9931                       ; 0051bbed | = "hq.geo"
    ADD EAX,0x14d0f0                    ; 0051bbf2
    PUSH EAX                            ; 0051bbf7
    CALL crt_string.c__stricmp_FUN_005c3160 ; 0051bbf8
        ;   XREF to: 005c3160 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005c3160(char * str1, char * str2)
    ADD ESP,0x8                         ; 0051bbfd
    TEST EAX,EAX                        ; 0051bc00
    JNZ 0x0051bc4f                      ; 0051bc02
        ;   XREF to: 0051bc4f (CONDITIONAL_JUMP)  ; LAB_0051bc4f
    PUSH 0x1                            ; 0051bc04
    PUSH EAX                            ; 0051bc06
    PUSH 0x9                            ; 0051bc07
    MOV EAX,[0x0061f2e0]                ; 0051bc09 | DAT_0061f2e0
    PUSH EAX                            ; 0051bc0e
    CALL core_level.cpp_FUN_004fe840    ; 0051bc0f
        ;   XREF to: 004fe840 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004fe840()
        ;   Label: LAB_0051bc0f
    ADD ESP,0x10                        ; 0051bc14
    PUSH 0x0                            ; 0051bc17
    PUSH 0x1d33b20                      ; 0051bc19 | DAT_01d33b20
    PUSH EBX                            ; 0051bc1e
    CALL core_mission.cpp_CDemonMission_load_FUN_0051a3f0 ; 0051bc1f
        ;   XREF to: 0051a3f0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_0051a3f0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 0051bc24
    PUSH ESI                            ; 0051bc27
    PUSH EBX                            ; 0051bc28
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0 ; 0051bc29
        ;   XREF to: 0051c0a0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_0051c0a0(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 0051bc2e
    TEST EAX,EAX                        ; 0051bc31
    JZ 0x0051bb9a                       ; 0051bc33
        ;   XREF to: 0051bb9a (CONDITIONAL_JUMP)  ; LAB_0051bb9a
    PUSH EBX                            ; 0051bc39
    CALL core_mission.cpp_FUN_0051bdc0  ; 0051bc3a
        ;   XREF to: 0051bdc0 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_0051bdc0(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 0051bc3f
    TEST EAX,EAX                        ; 0051bc42
    JNZ 0x0051bad8                      ; 0051bc44
        ;   XREF to: 0051bad8 (CONDITIONAL_JUMP)  ; LAB_0051bad8
    JMP 0x0051bb9a                      ; 0051bc4a
        ;   XREF to: 0051bb9a (UNCONDITIONAL_JUMP)  ; LAB_0051bb9a
    MOV EDI,dword ptr [0x0061d95c]      ; 0051bc4f | g_CGamePtr
        ;   Label: LAB_0051bc4f
    PUSH EDI                            ; 0051bc55
    CALL core_game.cpp_CGame_displayActStats_FUN_004d8700 ; 0051bc56
        ;   XREF to: 004d8700 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayActStats_FUN_004d8700(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051bc5b
    PUSH -0x1                           ; 0051bc5e
    PUSH 0x1                            ; 0051bc60
    PUSH 0x9                            ; 0051bc62
    MOV EBP,dword ptr [0x0061f2e0]      ; 0051bc64 | DAT_0061f2e0
    PUSH EBP                            ; 0051bc6a
    JMP 0x0051bc0f                      ; 0051bc6b
        ;   XREF to: 0051bc0f (UNCONDITIONAL_JUMP)  ; LAB_0051bc0f
    PUSH EAX                            ; 0051bc6d
        ;   Label: LAB_0051bc6d
    CALL core_game.cpp_CGame_finishAct_FUN_004d8a90 ; 0051bc6e
        ;   XREF to: 004d8a90 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_finishAct_FUN_004d8a90(CGame * this_ptr)
    ADD ESP,0x4                         ; 0051bc73
    MOV ECX,dword ptr [0x0061d418]      ; 0051bc76 | g_CFieldNotesPtr
    PUSH ECX                            ; 0051bc7c
    CALL core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0 ; 0051bc7d
        ;   XREF to: 004bdaa0 (UNCONDITIONAL_CALL)  ; void core_fldnotes.cpp_CFieldNotes_clear_FUN_004bdaa0(CFieldNotes * this_ptr)
    ADD ESP,0x4                         ; 0051bc82
    POP EBP                             ; 0051bc85
    POP EDI                             ; 0051bc86
    POP ESI                             ; 0051bc87
    POP EBX                             ; 0051bc88
    RET                                 ; 0051bc89

