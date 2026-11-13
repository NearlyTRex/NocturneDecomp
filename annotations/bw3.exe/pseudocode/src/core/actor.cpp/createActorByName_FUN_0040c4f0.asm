; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CDemonActor * __cdecl core_actor_cpp_createActorByName_FUN_0040c4f0(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; XREF[21]:
;   core_asgaya.cpp_CAsgaya_process_FUN_005a0be0 at 005a0c97
;   core_darkwolf.cpp_CDarkwolf_setup_FUN_00598800 at 0059882d
;   core_enemy.cpp_FUN_00489c90 at 00489d24
;   core_fire.cpp_spawnDiseaseBugs_FUN_0049cca0 at 0049ccb4
;   core_game.cpp_CGame_processCheatCodes_FUN_004bb100 at 004bbb4f
;   core_game.cpp_giveHeroWeapon_FUN_004bafd0 at 004bafd9
;   core_hero.cpp_FUN_004d4be0 at 004d4bf5
;   core_inv.cpp_CInventory_initialize_FUN_004da4e0 at 004da53a
;   core_inv.cpp_CInventory_load_FUN_004dc750 at 004dc9ff
;   core_inv.cpp_FUN_004da880 at 004db222
;   ... and 11 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005b5dd7
;   TerminatedCString s_Can_t_create_actor_of_un_005b5de9
;   TerminatedCString s_core_actor_cpp_005b5e16
;   TerminatedCString s_Can_t_create_instance_of_005b5e28
;   TerminatedCString s_core_actor_cpp_005b5e52
;   TerminatedCString s_Not_enough_memory_to_cre_005b5e64
;   undefined4 DAT_01d71de0
;   undefined4 DAT_01d71de4
;
; Called Functions:
;   core_actor.cpp_getActorClassByName_FUN_0040c480
;   core_main.c_FUN_004e4330
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c4f0
        ;   Label: core_actor.cpp_createActorByName_FUN_0040c4f0
    PUSH ESI                            ; 0040c4f1
    PUSH EBP                            ; 0040c4f2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040c4f3
    PUSH ESI                            ; 0040c4f7
    CALL core_actor.cpp_getActorClassByName_FUN_0040c480 ; 0040c4f8
        ;   XREF to: 0040c480 (UNCONDITIONAL_CALL)  ; CDemonActorType * core_actor.cpp_getActorClassByName_FUN_0040c480(char * className)
    ADD ESP,0x4                         ; 0040c4fd
    MOV EBX,EAX                         ; 0040c500
    TEST EAX,EAX                        ; 0040c502
    JZ 0x0040c53e                       ; 0040c504
        ;   XREF to: 0040c53e (CONDITIONAL_JUMP)  ; LAB_0040c53e
    CMP dword ptr [EBX + 0x2c],0x0      ; 0040c506
        ;   Label: LAB_0040c506
    JNZ 0x0040c52f                      ; 0040c50a
        ;   XREF to: 0040c52f (CONDITIONAL_JUMP)  ; LAB_0040c52f
    PUSH ESI                            ; 0040c50c
    MOV EBP,0x5b5e16                    ; 0040c50d | = "..\\core\\actor.cpp"
    MOV EAX,0xab2                       ; 0040c512
    PUSH 0x5b5e28                       ; 0040c517 | = "Can't create instance of abstract typ..."
    MOV dword ptr [0x01d71de0],EBP      ; 0040c51c | DAT_01d71de0
    MOV [0x01d71de4],EAX                ; 0040c522 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040c527
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040c52c
    CALL dword ptr [EBX + 0x2c]         ; 0040c52f
        ;   Label: LAB_0040c52f
    MOV EBX,EAX                         ; 0040c532
    TEST EAX,EAX                        ; 0040c534
    JZ 0x0040c564                       ; 0040c536
        ;   XREF to: 0040c564 (CONDITIONAL_JUMP)  ; LAB_0040c564
    MOV EAX,EBX                         ; 0040c538
    POP EBP                             ; 0040c53a
    POP ESI                             ; 0040c53b
    POP EBX                             ; 0040c53c
    RET                                 ; 0040c53d
    PUSH ESI                            ; 0040c53e
        ;   Label: LAB_0040c53e
    MOV EDX,0x5b5dd7                    ; 0040c53f | = "..\\core\\actor.cpp"
    MOV ECX,0xaac                       ; 0040c544
    PUSH 0x5b5de9                       ; 0040c549 | = "Can't create actor of unknown class t..."
    MOV dword ptr [0x01d71de0],EDX      ; 0040c54e | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040c554 | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040c55a
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040c55f
    JMP 0x0040c506                      ; 0040c562
        ;   XREF to: 0040c506 (UNCONDITIONAL_JUMP)  ; LAB_0040c506
    PUSH ESI                            ; 0040c564
        ;   Label: LAB_0040c564
    MOV EDX,0x5b5e52                    ; 0040c565 | = "..\\core\\actor.cpp"
    MOV ECX,0xabb                       ; 0040c56a
    PUSH 0x5b5e64                       ; 0040c56f | = "Not enough memory to create %s"
    MOV dword ptr [0x01d71de0],EDX      ; 0040c574 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 0040c57a | DAT_01d71de4
    CALL core_main.c_FUN_004e4330       ; 0040c580
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4330()
    ADD ESP,0x8                         ; 0040c585
    MOV EAX,EBX                         ; 0040c588
    POP EBP                             ; 0040c58a
    POP ESI                             ; 0040c58b
    POP EBX                             ; 0040c58c
    RET                                 ; 0040c58d

