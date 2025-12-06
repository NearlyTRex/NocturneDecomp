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
;   CNetGame* g_CNetGameInstance = 02f7c740
;   CGame g_CGameInstance
;   undefined4 g_CGameInstance.hero_number
;   undefined4 DAT_02d81b60
;   int g_HeroCount
;   CHero*[4] g_HeroActors
;   undefined4 DAT_02db87c4
;   int g_LocalHeroIndex
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;   undefined4 DAT_02f7c740
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
    MOV dword ptr [EBX + 0x2db87bc],EDX ; 00524a8f | CHero *[4] g_HeroActors
    CMP EBX,0x10                        ; 00524a95
    JNZ 0x00524a8a                      ; 00524a98 | LAB_00524a8a
        ;   XREF to: 00524a8a (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 00524a9a | CNetGame * g_CNetGameInstance
    MOV ECX,dword ptr [EAX]             ; 00524a9f | undefined4 DAT_02f7c740
    TEST ECX,ECX                        ; 00524aa1
    JZ 0x00524b8d                       ; 00524aa3 | LAB_00524b8d
        ;   XREF to: 00524b8d (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EAX + 0x1c]      ; 00524aa9 | undefined4 DAT_02f7c75c
    MOV [0x02db87bc],EAX                ; 00524aac | int g_HeroCount
    CMP EAX,0x4                         ; 00524ab1
    JGE 0x00524be0                      ; 00524ab4 | LAB_00524be0
        ;   XREF to: 00524be0 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87bc]                ; 00524aba | int g_HeroCount
        ;   Label: LAB_00524aba
    XOR EDI,EDI                         ; 00524abf
    TEST EAX,EAX                        ; 00524ac1
    JLE 0x00524b1e                      ; 00524ac3 | LAB_00524b1e
        ;   XREF to: 00524b1e (CONDITIONAL_JUMP)
    XOR EBX,EBX                         ; 00524ac5
    XOR ESI,ESI                         ; 00524ac7
    MOV EAX,[0x00680a00]                ; 00524ac9 | undefined4 DAT_02f7c740 | CNetGame * g_CNetGameInstance
        ;   Label: LAB_00524ac9
    PUSH 0x0                            ; 00524ace
    MOV EDX,dword ptr [ESI + EAX*0x1 + 0x34] ; 00524ad0 | undefined4 DAT_02f7c774 | DAT_02f7c7ec
    PUSH EDX                            ; 00524ad4
    PUSH EDI                            ; 00524ad5
    PUSH EBP                            ; 00524ad6
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 ; 00524ad7 | int core_mission.cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission * this_ptr)
        ;   XREF to: 00524920 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00524adc
    TEST EAX,EAX                        ; 00524adf
    JZ 0x00524b88                       ; 00524ae1 | LAB_00524b88
        ;   XREF to: 00524b88 (CONDITIONAL_JUMP)
    MOV EAX,dword ptr [EBX + 0x2db87c0] ; 00524ae7 | CHero *[4] g_HeroActors
    MOV dword ptr [EAX + 0xbe28],0x1    ; 00524aed
    MOV EAX,[0x00680a00]                ; 00524af7 | CNetGame * g_CNetGameInstance
    ADD EBX,0x4                         ; 00524afc
    LEA EDX,[EAX + ESI*0x1]             ; 00524aff | undefined4 DAT_02f7c740
    MOV EAX,dword ptr [EBX + 0x2db87bc] ; 00524b02 | CHero *[4] g_HeroActors
    MOV EDX,dword ptr [EDX + 0x38]      ; 00524b08 | undefined4 DAT_02f7c778
    INC EDI                             ; 00524b0b
    MOV dword ptr [EAX + 0x1f734],EDX   ; 00524b0c
    MOV EAX,[0x02db87bc]                ; 00524b12 | int g_HeroCount
    ADD ESI,0x78                        ; 00524b17
    CMP EDI,EAX                         ; 00524b1a
    JL 0x00524ac9                       ; 00524b1c | LAB_00524ac9
        ;   XREF to: 00524ac9 (CONDITIONAL_JUMP)
    MOV EAX,[0x00680a00]                ; 00524b1e | CNetGame * g_CNetGameInstance
        ;   Label: LAB_00524b1e
    MOV EAX,dword ptr [EAX + 0x114]     ; 00524b23 | undefined4 DAT_02f7c854
    MOV [0x02db87d0],EAX                ; 00524b29 | int g_LocalHeroIndex
    MOV EAX,[0x02db87d0]                ; 00524b2e | int g_LocalHeroIndex
        ;   Label: LAB_00524b2e
    MOV EAX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00524b33 | CHero *[4] g_HeroActors
    MOV dword ptr [EAX + 0xbe28],0x0    ; 00524b3a
    MOV EBX,dword ptr [EBP + 0x548]     ; 00524b44
    TEST EBX,EBX                        ; 00524b4a
    JZ 0x00524b7a                       ; 00524b4c | LAB_00524b7a
        ;   XREF to: 00524b7a (CONDITIONAL_JUMP)
    PUSH 0x6394c7                       ; 00524b4e | = "CHeroPlaceholder" | s_CHeroPlaceholder_006394c7 = CHeroPlaceholder
        ;   Label: LAB_00524b4e
    PUSH EBX                            ; 00524b53
    CALL core_actor.cpp_isOfClass_FUN_0040c6d0 ; 00524b54 | int core_actor.cpp_isOfClass_FUN_0040c6d0(CDemonActor * actor_ptr, char * class_name)
        ;   XREF to: 0040c6d0 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 00524b59
    TEST EAX,EAX                        ; 00524b5c
    JZ 0x00524c08                       ; 00524b5e | LAB_00524c08
        ;   XREF to: 00524c08 (CONDITIONAL_JUMP)
    PUSH 0x1                            ; 00524b64
    PUSH EBX                            ; 00524b66
    PUSH EBP                            ; 00524b67
    CALL core_mission.cpp_CDemonMission_FUN_00523f20 ; 00524b68 | void core_mission.cpp_CDemonMission_FUN_00523f20(CDemonMission * this_ptr)
        ;   XREF to: 00523f20 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 00524b6d
    MOV EBX,dword ptr [EBP + 0x548]     ; 00524b70
    TEST EBX,EBX                        ; 00524b76
        ;   Label: LAB_00524b76
    JNZ 0x00524b4e                      ; 00524b78 | LAB_00524b4e
        ;   XREF to: 00524b4e (CONDITIONAL_JUMP)
    PUSH EBP                            ; 00524b7a
        ;   Label: LAB_00524b7a
    CALL core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60 ; 00524b7b | void core_mission.cpp_CDemonMission_buildSetActorList_FUN_00523e60(CDemonMission * this_ptr)
        ;   XREF to: 00523e60 (UNCONDITIONAL_CALL)
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
    MOV EAX,[0x0067b654]                ; 00524b91 | CGame g_CGameInstance | CGame * g_CGamePtr
    PUSH EBX                            ; 00524b96
    MOV ESI,dword ptr [EAX + 0xc0]      ; 00524b97 | g_CGameInstance.hero_number
    PUSH ESI                            ; 00524b9d
    PUSH ECX                            ; 00524b9e
    MOV EDX,0x1                         ; 00524b9f
    PUSH EBP                            ; 00524ba4
    MOV dword ptr [0x02db87d0],ECX      ; 00524ba5 | int g_LocalHeroIndex
    MOV dword ptr [0x02db87bc],EDX      ; 00524bab | int g_HeroCount
    CALL core_mission.cpp_CDemonMission_createOneHero_FUN_00524920 ; 00524bb1 | int core_mission.cpp_CDemonMission_createOneHero_FUN_00524920(CDemonMission * this_ptr)
        ;   XREF to: 00524920 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 00524bb6
    TEST EAX,EAX                        ; 00524bb9
    JZ 0x00524b88                       ; 00524bbb | LAB_00524b88
        ;   XREF to: 00524b88 (CONDITIONAL_JUMP)
    MOV EAX,[0x02db87d0]                ; 00524bbd | int g_LocalHeroIndex
    MOV EDX,dword ptr [0x0067b654]      ; 00524bc2 | CGame * g_CGamePtr
    MOV EBX,dword ptr [EAX*0x4 + 0x2db87c0] ; 00524bc8 | CHero *[4] g_HeroActors
    MOV EAX,dword ptr [EDX + 0xc4]      ; 00524bcf | DAT_02d81b60
    MOV dword ptr [EBX + 0x1f734],EAX   ; 00524bd5
    JMP 0x00524b2e                      ; 00524bdb | LAB_00524b2e
        ;   XREF to: 00524b2e (UNCONDITIONAL_JUMP)
    MOV ESI,0x639470                    ; 00524be0 | = "..\\core\\mission.cpp" | s_core_mission_cpp_00639470 = ..\core\mission.cpp
        ;   Label: LAB_00524be0
    MOV EDI,0x639                       ; 00524be5
    PUSH 0x639484                       ; 00524bea | = "CDemonMission::createHeros - too many..." | s_CDemonMission_createHero_00639484 = CDemonMission::createHeros - too many network players for MAX_HERO
    MOV dword ptr [0x02f0ca48],ESI      ; 00524bef | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],EDI      ; 00524bf5 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 00524bfb | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 00524c00
    JMP 0x00524aba                      ; 00524c03 | LAB_00524aba
        ;   XREF to: 00524aba (UNCONDITIONAL_JUMP)
    MOV EBX,dword ptr [EBX + 0x14c]     ; 00524c08
        ;   Label: LAB_00524c08
    JMP 0x00524b76                      ; 00524c0e | LAB_00524b76
        ;   XREF to: 00524b76 (UNCONDITIONAL_JUMP)

