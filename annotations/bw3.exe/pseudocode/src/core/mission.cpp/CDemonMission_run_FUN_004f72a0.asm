; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mission_cpp_CDemonMission_run_FUN_004f72a0(CDemonMission *this_ptr)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
;
; XREF[3]:
;   core_game.cpp_FUN_004bdfb0 at 004be82b
;   core_game.cpp_FUN_004be8d0 at 004beaf1
;   core_game.cpp_joinNetworkGame_FUN_004bf2e0 at 004bf364
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_005c8bc3
;   TerminatedCString s_CDemonMission_run_hero_l_005c8bd7
;   TerminatedCString s_core_mission_cpp_005c8bfc
;   TerminatedCString s_CDemonMission_run_no_gLo_005c8c10
;   TerminatedCString s_hq_geo_005c8c33
;   CFieldNotes* g_CFieldNotesPtr = 01d1a05c
;   CGame* g_CGamePtr = 01d2130c
;   undefined4 DAT_006002ac
;   CDemonSet* g_CDemonSetPtr = 01ed78c8
;   CFieldNotes g_CFieldNotesInstance
;   undefined4 g_CGameInstance.field584_0x284
;   undefined4 DAT_01d5ba00
;   undefined4 DAT_01d5ba14
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;   ... and 1 more
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004ab7a0
;   core_game.cpp_CGame_displayActStats_FUN_004bfb50
;   core_game.cpp_CGame_finishAct_FUN_004bfee0
;   core_game.cpp_CGame_runGameSession_FUN_004b7f90
;   core_level.cpp_FUN_004dfc50
;   core_main.c_FUN_004e4330
;   core_mission.cpp_CDemonMission_createHeros_FUN_004f7880
;   core_mission.cpp_CDemonMission_load_FUN_004f5bc0
;   core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0
;   core_mission.cpp_FUN_004f5b80
;   core_mission.cpp_FUN_004f69a0
;   core_mission.cpp_FUN_004f6de0
;   core_mission.cpp_FUN_004f6f80
;   core_mission.cpp_FUN_004f7590
;   crt_string.c__stricmp_FUN_005a5fd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f72a0
        ;   Label: core_mission.cpp_CDemonMission_run_FUN_004f72a0
    PUSH ESI                            ; 004f72a1
    PUSH EDI                            ; 004f72a2
    PUSH EBP                            ; 004f72a3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004f72a4
    CMP dword ptr [0x01d5ba00],0x1      ; 004f72a8 | DAT_01d5ba00
        ;   Label: LAB_004f72a8
    JL 0x004f7390                       ; 004f72af
        ;   XREF to: 004f7390 (CONDITIONAL_JUMP)  ; LAB_004f7390
    MOV EAX,[0x01d5ba14]                ; 004f72b5 | DAT_01d5ba14
        ;   Label: LAB_004f72b5
    CMP dword ptr [EAX*0x4 + 0x1d5ba04],0x0 ; 004f72ba
    JNZ 0x004f72e6                      ; 004f72c2
        ;   XREF to: 004f72e6 (CONDITIONAL_JUMP)  ; LAB_004f72e6
    MOV EBP,0x5c8bfc                    ; 004f72c4 | = "..\\core\\mission.cpp"
    MOV EAX,0x521                       ; 004f72c9
    PUSH 0x5c8c10                       ; 004f72ce | = "CDemonMission::run - no gLocalHero"
    MOV dword ptr [0x01d71de0],EBP      ; 004f72d3 | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 004f72d9 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f72de
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f72e3
    MOV EAX,[0x01d5ba14]                ; 004f72e6 | DAT_01d5ba14
        ;   Label: LAB_004f72e6
    MOV EAX,dword ptr [EAX*0x4 + 0x1d5ba04] ; 004f72eb
    MOV EDX,dword ptr [EAX + 0x2c]      ; 004f72f2
    PUSH EDX                            ; 004f72f5
    PUSH EBX                            ; 004f72f6
    CALL core_mission.cpp_FUN_004f6de0  ; 004f72f7
        ;   XREF to: 004f6de0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6de0()
    ADD ESP,0x8                         ; 004f72fc
    XOR AH,AH                           ; 004f72ff
    PUSH EBX                            ; 004f7301
    MOV byte ptr [0x01d882a0],AH        ; 004f7302 | DAT_01d882a0
    CALL core_mission.cpp_FUN_004f6f80  ; 004f7308
        ;   XREF to: 004f6f80 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f6f80()
    ADD ESP,0x4                         ; 004f730d
    MOV ECX,dword ptr [0x005fe9dc]      ; 004f7310 | g_CGamePtr
    PUSH ECX                            ; 004f7316
    CALL core_game.cpp_CGame_runGameSession_FUN_004b7f90 ; 004f7317
        ;   XREF to: 004b7f90 (UNCONDITIONAL_CALL)  ; int core_game.cpp_CGame_runGameSession_FUN_004b7f90(CGame * this_ptr)
    MOV ESI,dword ptr [0x01d5ba14]      ; 004f731c | DAT_01d5ba14
    ADD ESP,0x4                         ; 004f7322
    MOV ESI,dword ptr [ESI*0x4 + 0x1d5ba04] ; 004f7325
    PUSH ESI                            ; 004f732c
    PUSH EBX                            ; 004f732d
    MOV EDI,EAX                         ; 004f732e
    CALL core_mission.cpp_FUN_004f69a0  ; 004f7330
        ;   XREF to: 004f69a0 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f69a0()
    ADD ESP,0x8                         ; 004f7335
    MOV EAX,dword ptr [ESI + 0x154]     ; 004f7338
    PUSH ESI                            ; 004f733e
    CALL dword ptr [EAX + 0x14c]        ; 004f733f
    ADD ESP,0x4                         ; 004f7345
    PUSH EBX                            ; 004f7348
    CALL core_mission.cpp_FUN_004f5b80  ; 004f7349
        ;   XREF to: 004f5b80 (UNCONDITIONAL_CALL)  ; undefined core_mission.cpp_FUN_004f5b80()
    ADD ESP,0x4                         ; 004f734e
    TEST EDI,EDI                        ; 004f7351
    JZ 0x004f735e                       ; 004f7353
        ;   XREF to: 004f735e (CONDITIONAL_JUMP)  ; LAB_004f735e
    CMP byte ptr [0x01d882a0],0x0       ; 004f7355 | DAT_01d882a0
    JNZ 0x004f73b8                      ; 004f735c
        ;   XREF to: 004f73b8 (CONDITIONAL_JUMP)  ; LAB_004f73b8
    PUSH 0x1                            ; 004f735e
        ;   Label: LAB_004f735e
    PUSH ESI                            ; 004f7360
    PUSH EBX                            ; 004f7361
    CALL core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0 ; 004f7362
        ;   XREF to: 004f6ca0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_removeActor_FUN_004f6ca0(CDemonMission * this_ptr, CDemonActor * actor, int should_delete)
    ADD ESP,0xc                         ; 004f7367
    MOV EAX,[0x005fe9dc]                ; 004f736a | g_CGamePtr
        ;   Label: LAB_004f736a
    CMP dword ptr [EAX + 0x284],0x0     ; 004f736f | g_CGameInstance.field584_0x284
    JNZ 0x004f743d                      ; 004f7376
        ;   XREF to: 004f743d (CONDITIONAL_JUMP)  ; LAB_004f743d
    MOV ECX,dword ptr [0x005fe4b0]      ; 004f737c | g_CFieldNotesPtr
    PUSH ECX                            ; 004f7382 | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004ab7a0 ; 004f7383
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ab7a0()
    ADD ESP,0x4                         ; 004f7388
    POP EBP                             ; 004f738b
    POP EDI                             ; 004f738c
    POP ESI                             ; 004f738d
    POP EBX                             ; 004f738e
    RET                                 ; 004f738f
    MOV ECX,0x5c8bc3                    ; 004f7390 | = "..\\core\\mission.cpp"
        ;   Label: LAB_004f7390
    MOV ESI,0x520                       ; 004f7395
    PUSH 0x5c8bd7                       ; 004f739a | = "CDemonMission::run - hero list empty"
    MOV dword ptr [0x01d71de0],ECX      ; 004f739f | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ESI      ; 004f73a5 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 004f73ab
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x4                         ; 004f73b0
    JMP 0x004f72b5                      ; 004f73b3
        ;   XREF to: 004f72b5 (UNCONDITIONAL_JUMP)  ; LAB_004f72b5
    MOV EAX,[0x00603b28]                ; 004f73b8 | g_CDemonSetPtr
        ;   Label: LAB_004f73b8
    PUSH 0x5c8c33                       ; 004f73bd | = "hq.geo"
    ADD EAX,0x14d0f0                    ; 004f73c2
    PUSH EAX                            ; 004f73c7
    CALL crt_string.c__stricmp_FUN_005a5fd0 ; 004f73c8
        ;   XREF to: 005a5fd0 (UNCONDITIONAL_CALL)  ; int crt_string.c__stricmp_FUN_005a5fd0(char * str1, char * str2)
    ADD ESP,0x8                         ; 004f73cd
    TEST EAX,EAX                        ; 004f73d0
    JNZ 0x004f741f                      ; 004f73d2
        ;   XREF to: 004f741f (CONDITIONAL_JUMP)  ; LAB_004f741f
    PUSH 0x1                            ; 004f73d4
    PUSH EAX                            ; 004f73d6
    PUSH 0x9                            ; 004f73d7
    MOV EAX,[0x006002ac]                ; 004f73d9 | DAT_006002ac
    PUSH EAX                            ; 004f73de
    CALL core_level.cpp_FUN_004dfc50    ; 004f73df
        ;   XREF to: 004dfc50 (UNCONDITIONAL_CALL)  ; undefined core_level.cpp_FUN_004dfc50()
        ;   Label: LAB_004f73df
    ADD ESP,0x10                        ; 004f73e4
    PUSH 0x0                            ; 004f73e7
    PUSH 0x1d882a0                      ; 004f73e9 | DAT_01d882a0
    PUSH EBX                            ; 004f73ee
    CALL core_mission.cpp_CDemonMission_load_FUN_004f5bc0 ; 004f73ef
        ;   XREF to: 004f5bc0 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_load_FUN_004f5bc0(CDemonMission * this_ptr, char * mission_filename, int load_flags)
    ADD ESP,0xc                         ; 004f73f4
    PUSH ESI                            ; 004f73f7
    PUSH EBX                            ; 004f73f8
    CALL core_mission.cpp_CDemonMission_createHeros_FUN_004f7880 ; 004f73f9
        ;   XREF to: 004f7880 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createHeros_FUN_004f7880(CDemonMission * this_ptr, CCharacter * existing_hero)
    ADD ESP,0x8                         ; 004f73fe
    TEST EAX,EAX                        ; 004f7401
    JZ 0x004f736a                       ; 004f7403
        ;   XREF to: 004f736a (CONDITIONAL_JUMP)  ; LAB_004f736a
    PUSH EBX                            ; 004f7409
    CALL core_mission.cpp_FUN_004f7590  ; 004f740a
        ;   XREF to: 004f7590 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_FUN_004f7590(CDemonMission * this_ptr)
    ADD ESP,0x4                         ; 004f740f
    TEST EAX,EAX                        ; 004f7412
    JNZ 0x004f72a8                      ; 004f7414
        ;   XREF to: 004f72a8 (CONDITIONAL_JUMP)  ; LAB_004f72a8
    JMP 0x004f736a                      ; 004f741a
        ;   XREF to: 004f736a (UNCONDITIONAL_JUMP)  ; LAB_004f736a
    MOV EDI,dword ptr [0x005fe9dc]      ; 004f741f | g_CGamePtr
        ;   Label: LAB_004f741f
    PUSH EDI                            ; 004f7425
    CALL core_game.cpp_CGame_displayActStats_FUN_004bfb50 ; 004f7426
        ;   XREF to: 004bfb50 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_displayActStats_FUN_004bfb50(CGame * this_ptr)
    ADD ESP,0x4                         ; 004f742b
    PUSH -0x1                           ; 004f742e
    PUSH 0x1                            ; 004f7430
    PUSH 0x9                            ; 004f7432
    MOV EBP,dword ptr [0x006002ac]      ; 004f7434 | DAT_006002ac
    PUSH EBP                            ; 004f743a
    JMP 0x004f73df                      ; 004f743b
        ;   XREF to: 004f73df (UNCONDITIONAL_JUMP)  ; LAB_004f73df
    PUSH EAX                            ; 004f743d
        ;   Label: LAB_004f743d
    CALL core_game.cpp_CGame_finishAct_FUN_004bfee0 ; 004f743e
        ;   XREF to: 004bfee0 (UNCONDITIONAL_CALL)  ; void core_game.cpp_CGame_finishAct_FUN_004bfee0(CGame * this_ptr)
    ADD ESP,0x4                         ; 004f7443
    MOV ECX,dword ptr [0x005fe4b0]      ; 004f7446 | g_CFieldNotesPtr
    PUSH ECX                            ; 004f744c | g_CFieldNotesInstance
    CALL core_fldnotes.cpp_FUN_004ab7a0 ; 004f744d
        ;   XREF to: 004ab7a0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004ab7a0()
    ADD ESP,0x4                         ; 004f7452
    POP EBP                             ; 004f7455
    POP EDI                             ; 004f7456
    POP ESI                             ; 004f7457
    POP EBX                             ; 004f7458
    RET                                 ; 004f7459

