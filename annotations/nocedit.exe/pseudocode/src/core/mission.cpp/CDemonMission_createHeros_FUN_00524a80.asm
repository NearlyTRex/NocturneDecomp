; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_mission.cpp_CDemonMission_createHeros_FUN_00524a80(CDemonMission * this_ptr, int creation_flags)
;
; Parameters:
; CDemonMission *  Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   creation_flags
;
; XREF[5]:
;   core_fileman.cpp_CDemonFileManager_createPodFromDirectory_FUN_004bda20 at 004bddd6
;   core_game.cpp_CGame_showChapterSelect_FUN_004e1cb0 at 004e2036
;   core_mission.cpp_CDemonMission_run_FUN_00524420 at 00524576
;   core_msnedit.cpp_WalkAroundOnSet_FUN_00538ba0 at 00538c05
;   core_netgame.cpp_FUN_00541390 at 005419bd
;
; Referenced Globals:
;   TerminatedCString s_core_mission_cpp_00639470
;   TerminatedCString s_CDemonMission_createHero_00639484
;   TerminatedCString s_CHeroPlaceholder_006394c7
;   CGame* g_CGamePtr = 02d81a9c
;   CNetGame* g_CNetGamePtr = 02f7c740
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 DAT_02d81b60
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   CNetGame g_CNetGameInstance
;   ... and 5 more
;
; Called Functions:
;   core_actor.cpp_isOfClass_FUN_0040c6d0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60
;   core_mission.cpp_CDemonMission_createOneHero_FUN_00524920
;   core_mission.cpp_CDemonMission_FUN_00523f20
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00524a80
        ;   Label: core_mission.cpp_CDemonMission_createHeros_FUN_00524a80
    PUSH ESI                            ; 00524a81
    PUSH EDI                            ; 00524a82
    PUSH EBP                            ; 00524a83
    MOV EBP,dword ptr [ESP + 0x14]      ; 00524a84
    XOR EBX,EBX                         ; 00524a88
    ADD EBX,0x4                         ; 00524a8a
        ;   Label: LAB_00524a8a
    XOR EDX,EDX                         ; 00524a8d
    MOV dword ptr [EBX + 0x2db87bc],EDX ; 00524a8f | g_HeroActors | DAT_02db87c4
    CMP EBX,0x10                        ; 00524a95
    JNZ 0x00524a8a                      ; 00524a98
        ;   XREF to: 00524a8a (CONDITIONAL_JUMP)  ; LAB_00524a8a
    MOV EAX,[0x00680a00]                ; 00524a9a | g_CNetGamePtr
    MOV ECX,dword ptr [EAX]             ; 00524a9f | g_CNetGameInstance
    TEST ECX,ECX                        ; 00524aa1
    JZ 0x00524b8d                       ; 00524aa3
        ;   XREF to: 00524b8d (CONDITIONAL_JUMP)  ; LAB_00524b8d
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00524aa9 | DAT_02f7c75c
    MOV [0x02db87bc],EAX                ; 00524aac | g_HeroCount
    CMP EAX,0x4                         ; 00524ab1
    JGE 0x00524be0                      ; 00524ab4
        ;   XREF to: 00524be0 (CONDITIONAL_JUMP)  ; LAB_00524be0
    MOV EAX,[0x02db87bc]                ; 00524aba | g_HeroCount
        ;   Label: LAB_00524aba
    XOR EDI,EDI                         ; 00524abf
    TEST EAX,EAX                        ; 00524ac1
    JLE 0x00524b1e                      ; 00524ac3
        ;   XREF to: 00524b1e (CONDITIONAL_JUMP)  ; LAB_00524b1e
    XOR EBX,EBX                         ; 00524ac5
    XOR ESI,ESI                         ; 00524ac7
    MOV EAX,[0x00680a00]                ; 00524ac9 | g_CNetGameInstance | g_CNetGamePtr
        ;   Label: LAB_00524ac9
    PUSH 0x0                            ; 00524ace
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 00524ad0 | DAT_02f7c774 | DAT_02f7c7ec
    PUSH EDX                            ; 00524ad4
    PUSH EDI                            ; 00524ad5
    PUSH EBP                            ; 00524ad6
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 ; 00524ad7
        ;   XREF to: 00524920 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission * this_ptr)
    ADD ESP,0x10                        ; 00524adc
    TEST EAX,EAX                        ; 00524adf
    JZ 0x00524b88                       ; 00524ae1
        ;   XREF to: 00524b88 (CONDITIONAL_JUMP)  ; LAB_00524b88
    MOV EAX,dword ptr [EBX + 0x2db87c0] ; 00524ae7 | g_HeroActors
    MOV dword ptr [EAX + 0xbe28],0x1    ; 00524aed
    MOV EAX,[0x00680a00]                ; 00524af7 | g_CNetGamePtr
    ADD EBX,0x4                         ; 00524afc
    LEA EDX,[EAX + ESI*0x1]             ; 00524aff | g_CNetGameInstance
    MOV EAX,dword ptr [EBX + 0x2db87bc] ; 00524b02 | g_HeroActors
    MOV EDX,dword ptr [EDX + 0x38]      ; 00524b08 | DAT_02f7c778
    INC EDI                             ; 00524b0b
    MOV dword ptr [EAX + 0x1f734],EDX   ; 00524b0c
    MOV EAX,[0x02db87bc]                ; 00524b12 | g_HeroCount
    ADD ESI,0x78                        ; 00524b17
    CMP EDI,EAX                         ; 00524b1a
    JL 0x00524ac9                       ; 00524b1c
        ;   XREF to: 00524ac9 (CONDITIONAL_JUMP)  ; LAB_00524ac9
    MOV EAX,[0x00680a00]                ; 00524b1e | g_CNetGamePtr
        ;   Label: LAB_00524b1e
    MOV EAX,dword ptr [EAX + 0x114]     ; 00524b23 | DAT_02f7c854
    MOV [0x02db87d0],EAX                ; 00524b29 | g_LocalHeroIndex
    MOV EAX,[0x02db87d0]                ; 00524b2e | g_LocalHeroIndex
        ;   Label: LAB_00524b2e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00524b33 | g_HeroActors
    MOV dword ptr [EAX + 0xbe28],0x0    ; 00524b3a
    MOV EBX,dword ptr [EBP + 0x548]     ; 00524b44
    TEST EBX,EBX                        ; 00524b4a
    JZ 0x00524b7a                       ; 00524b4c
        ;   XREF to: 00524b7a (CONDITIONAL_JUMP)  ; LAB_00524b7a
    PUSH 0x6394c7                       ; 00524b4e | = "CHeroPlaceholder"
        ;   Label: LAB_00524b4e
    PUSH EBX                            ; 00524b53
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524b54
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 00524b59
    TEST EAX,EAX                        ; 00524b5c
    JZ 0x00524c08                       ; 00524b5e
        ;   XREF to: 00524c08 (CONDITIONAL_JUMP)  ; LAB_00524c08
    PUSH 0x1                            ; 00524b64
    PUSH EBX                            ; 00524b66
    PUSH EBP                            ; 00524b67
    CALL core_mission.cpp_CDemonMission_FUN_00523f20 ; 00524b68
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
    ADD ESP,0xc                         ; 00524b6d
    MOV EBX,dword ptr [EBP + 0x548]     ; 00524b70
    TEST EBX,EBX                        ; 00524b76
        ;   Label: LAB_00524b76
    JNZ 0x00524b4e                      ; 00524b78
        ;   XREF to: 00524b4e (CONDITIONAL_JUMP)  ; LAB_00524b4e
    PUSH EBP                            ; 00524b7a
        ;   Label: LAB_00524b7a
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00524b7b
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
    MOV EAX,0x1                         ; 00524b80
    ADD ESP,0x4                         ; 00524b85
    POP EBP                             ; 00524b88
        ;   Label: LAB_00524b88
    POP EDI                             ; 00524b89
    POP ESI                             ; 00524b8a
    POP EBX                             ; 00524b8b
    RET                                 ; 00524b8c
    MOV EBX,dword ptr [ESP + 0x18]      ; 00524b8d
        ;   Label: LAB_00524b8d
    MOV EAX,[0x0067b654]                ; 00524b91 | g_CGameInstance | g_CGamePtr
    PUSH EBX                            ; 00524b96
    MOV ESI,dword ptr [EAX + 0xc0]      ; 00524b97 | g_CGameInstance.hero_number
    PUSH ESI                            ; 00524b9d
    PUSH ECX                            ; 00524b9e
    MOV EDX,0x1                         ; 00524b9f
    PUSH EBP                            ; 00524ba4
    MOV dword ptr [0x02db87d0],ECX      ; 00524ba5 | g_LocalHeroIndex
    MOV dword ptr [0x02db87bc],EDX      ; 00524bab | g_HeroCount
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 ; 00524bb1
        ;   XREF to: 00524920 (UNCONDITIONAL_CALL)  ; int core_mission.cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission * this_ptr)
    ADD ESP,0x10                        ; 00524bb6
    TEST EAX,EAX                        ; 00524bb9
    JZ 0x00524b88                       ; 00524bbb
        ;   XREF to: 00524b88 (CONDITIONAL_JUMP)  ; LAB_00524b88
    MOV EAX,[0x02db87d0]                ; 00524bbd | g_LocalHeroIndex
    MOV EDX,dword ptr [0x0067b654]      ; 00524bc2 | g_CGamePtr
    MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00524bc8 | g_HeroActors
    MOV EAX,dword ptr [EDX + 0xc4]      ; 00524bcf | DAT_02d81b60
    MOV dword ptr [EBX + 0x1f734],EAX   ; 00524bd5
    JMP 0x00524b2e                      ; 00524bdb
        ;   XREF to: 00524b2e (UNCONDITIONAL_JUMP)  ; LAB_00524b2e
    MOV ESI,0x639470                    ; 00524be0 | = "..\\core\\mission.cpp"
        ;   Label: LAB_00524be0
    MOV EDI,0x639                       ; 00524be5
    PUSH 0x639484                       ; 00524bea | = "CDemonMission::createHeros - too many..."
    MOV dword ptr [0x02f0ca48],ESI      ; 00524bef | g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00524bf5 | g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524bfb
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)  ; void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
    ADD ESP,0x4                         ; 00524c00
    JMP 0x00524aba                      ; 00524c03
        ;   XREF to: 00524aba (UNCONDITIONAL_JUMP)  ; LAB_00524aba
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524c08
        ;   Label: LAB_00524c08
    JMP 0x00524b76                      ; 00524c0e
        ;   XREF to: 00524b76 (UNCONDITIONAL_JUMP)  ; LAB_00524b76

