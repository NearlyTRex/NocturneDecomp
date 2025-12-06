; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl CDemonActor * core_actor.cpp_createActorByName_FUN_0040c430(char * class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; XREF[15]:
;   core_baron.cpp_FUN_00413f20 at 00413f7c
;   core_game.cpp_CGame_processCheatCodes_FUN_004ddaf0 at 004de56e
;   core_game.cpp_giveHeroWeapon_FUN_004dd870 at 004dd879
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004f3d80 at 004f3da6
;   core_hero.cpp_CHero_FUN_004f2a30 at 004f2a51
;   core_inv.cpp_CInventory_addItem_FUN_004fd600 at 004fe5ac
;   core_inv.cpp_CInventory_initialize_FUN_004fd190 at 004fd1ea
;   core_inv.cpp_CInventory_load_FUN_004ff400 at 004ff6ac
;   core_mimic.cpp_CMimic_setup_FUN_0051f3e0 at 0051f5e1
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_00522eb0 at 00523446
;   ... and 5 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_0061420a
;   TerminatedCString s_Can_t_create_actor_of_un_0061421c
;   TerminatedCString s_core_actor_cpp_00614249
;   TerminatedCString s_Can_t_create_instance_of_0061425b
;   TerminatedCString s_core_actor_cpp_00614285
;   TerminatedCString s_Not_enough_memory_to_cre_00614297
;   char* g_CurrentFilename
;   int g_CurrentLineNumber
;
; Called Functions:
;   core_actor.cpp_getActorClassByName_FUN_0040c3c0
;   core_main.c_displayErrorAndQuit_FUN_00506f10
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c430
        ;   Label: core_actor.cpp_createActorByName_FUN_0040c430
    PUSH ESI                            ; 0040c431
    PUSH EBP                            ; 0040c432
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040c433
    PUSH ESI                            ; 0040c437
    CALL core_actor.cpp_getActorClassByName_FUN_0040c3c0 ; 0040c438 | CDemonActorType * core_actor.cpp_getActorClassByName_FUN_0040c3c0(char * className)
        ;   XREF to: 0040c3c0 (UNCONDITIONAL_CALL)
    ADD ESP,0x4                         ; 0040c43d
    MOV EBX,EAX                         ; 0040c440
    TEST EAX,EAX                        ; 0040c442
    JZ 0x0040c47e                       ; 0040c444 | LAB_0040c47e
        ;   XREF to: 0040c47e (CONDITIONAL_JUMP)
    CMP dword ptr [EBX + 0x2c],0x0      ; 0040c446
        ;   Label: LAB_0040c446
    JNZ 0x0040c46f                      ; 0040c44a | LAB_0040c46f
        ;   XREF to: 0040c46f (CONDITIONAL_JUMP)
    PUSH ESI                            ; 0040c44c
    MOV EBP,0x614249                    ; 0040c44d | = "..\\core\\actor.cpp" | s_core_actor_cpp_00614249 = ..\core\actor.cpp
    MOV EAX,0xa41                       ; 0040c452
    PUSH 0x61425b                       ; 0040c457 | = "Can't create instance of abstract typ..." | s_Can_t_create_instance_of_0061425b = Can't create instance of abstract type %s
    MOV dword ptr [0x02f0ca48],EBP      ; 0040c45c | char * g_CurrentFilename
    MOV [0x02f0ca4c],EAX                ; 0040c462 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040c467 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c46c
    CALL dword ptr [EBX + 0x2c]         ; 0040c46f
        ;   Label: LAB_0040c46f
    MOV EBX,EAX                         ; 0040c472
    TEST EAX,EAX                        ; 0040c474
    JZ 0x0040c4a4                       ; 0040c476 | LAB_0040c4a4
        ;   XREF to: 0040c4a4 (CONDITIONAL_JUMP)
    MOV EAX,EBX                         ; 0040c478
    POP EBP                             ; 0040c47a
    POP ESI                             ; 0040c47b
    POP EBX                             ; 0040c47c
    RET                                 ; 0040c47d
        ;   Label: LAB_0040c47d
    PUSH ESI                            ; 0040c47e
        ;   Label: LAB_0040c47e
    MOV EDX,0x61420a                    ; 0040c47f | = "..\\core\\actor.cpp" | s_core_actor_cpp_0061420a = ..\core\actor.cpp
    MOV ECX,0xa3b                       ; 0040c484
    PUSH 0x61421c                       ; 0040c489 | = "Can't create actor of unknown class t..." | s_Can_t_create_actor_of_un_0061421c = Can't create actor of unknown class type: %s
    MOV dword ptr [0x02f0ca48],EDX      ; 0040c48e | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040c494 | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040c49a | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c49f
    JMP 0x0040c446                      ; 0040c4a2 | LAB_0040c446
        ;   XREF to: 0040c446 (UNCONDITIONAL_JUMP)
    PUSH ESI                            ; 0040c4a4
        ;   Label: LAB_0040c4a4
    MOV EDX,0x614285                    ; 0040c4a5 | = "..\\core\\actor.cpp" | s_core_actor_cpp_00614285 = ..\core\actor.cpp
    MOV ECX,0xa4a                       ; 0040c4aa
    PUSH 0x614297                       ; 0040c4af | = "Not enough memory to create %s" | s_Not_enough_memory_to_cre_00614297 = Not enough memory to create %s
    MOV dword ptr [0x02f0ca48],EDX      ; 0040c4b4 | char * g_CurrentFilename
    MOV dword ptr [0x02f0ca4c],ECX      ; 0040c4ba | int g_CurrentLineNumber
    CALL core_main.c_displayErrorAndQuit_FUN_00506f10 ; 0040c4c0 | void core_main.c_displayErrorAndQuit_FUN_00506f10(char * format)
        ;   XREF to: 00506f10 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0040c4c5
    MOV EAX,EBX                         ; 0040c4c8
    POP EBP                             ; 0040c4ca
    POP ESI                             ; 0040c4cb
    POP EBX                             ; 0040c4cc
    RET                                 ; 0040c4cd

