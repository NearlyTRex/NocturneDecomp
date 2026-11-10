; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_game_cpp_giveHeroWeapon_FUN_004d2540(char *class_name)
;
; Parameters:
; char *           Stack[0x4]:4   class_name
;
; XREF[2]:
;   core_game.cpp_CGame_processCheatCodes_FUN_004d27b0 at 004d3533
;   core_game.cpp_checkCheatAndGiveWeapon_FUN_004d2690 at 004d26fc
;
; Referenced Globals:
;   TerminatedCString s_core_game_cpp_005e1aec
;   TerminatedCString s_giveHeroWeapon_This_is_n_005e1afd
;   undefined4 DAT_0061f650
;   undefined4 DAT_01d06ab4
;   undefined4 DAT_01d1d400
;   undefined4 DAT_01d1d404
;   undefined4 DAT_01d2c900
;   undefined4 g_CWeaponClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c600
;   core_actor.cpp_createActorByName_FUN_0040c2b0
;   core_inv.cpp_FUN_004f7690
;   core_main.c_FUN_005030e0
;   core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d2540
        ;   Label: core_game.cpp_giveHeroWeapon_FUN_004d2540
    PUSH ESI                            ; 004d2541
    PUSH EDI                            ; 004d2542
    PUSH EBP                            ; 004d2543
    MOV EDX,dword ptr [ESP + 0x14]      ; 004d2544
    PUSH EDX                            ; 004d2548
    CALL core_actor.cpp_createActorByName_FUN_0040c2b0 ; 004d2549
        ;   XREF to: 0040c2b0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_createActorByName_FUN_0040c2b0()
    ADD ESP,0x4                         ; 004d254e
    PUSH EAX                            ; 004d2551
    MOV ECX,dword ptr [0x0061f650]      ; 004d2552 | DAT_0061f650
    PUSH ECX                            ; 004d2558 | DAT_01d2c900
    MOV EBX,EAX                         ; 004d2559
    MOV ESI,EAX                         ; 004d255b
    CALL core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60 ; 004d255d
        ;   XREF to: 0051bd60 (UNCONDITIONAL_CALL)  ; void core_mission.cpp_CDemonMission_generateActorName_FUN_0051bd60(CDemonMission * this_ptr, CDemonActor * actor)
    ADD ESP,0x8                         ; 004d2562
    MOV EAX,dword ptr [EBX + 0x154]     ; 004d2565
    PUSH EBX                            ; 004d256b
    CALL dword ptr [EAX]                ; 004d256c
    ADD ESP,0x4                         ; 004d256e
    MOV EDI,dword ptr [0x02c99770]      ; 004d2571 | g_CWeaponClassInfo.name_hash
    PUSH EDI                            ; 004d2577
    PUSH EBX                            ; 004d2578
    CALL core_actor.cpp_castToClassHash_FUN_0040c600 ; 004d2579
        ;   XREF to: 0040c600 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_castToClassHash_FUN_0040c600()
    ADD ESP,0x8                         ; 004d257e
    MOV EBX,EAX                         ; 004d2581
    TEST EAX,EAX                        ; 004d2583
    JZ 0x004d25d1                       ; 004d2585
        ;   XREF to: 004d25d1 (CONDITIONAL_JUMP)  ; LAB_004d25d1
    MOV dword ptr [EBX + 0x568],0x1f4   ; 004d2587
        ;   Label: LAB_004d2587
    MOV EBX,dword ptr [0x01d06ab4]      ; 004d2591 | DAT_01d06ab4
    MOV EDX,dword ptr [EBX*0x4 + 0x1d06aa4] ; 004d2597
    PUSH EDX                            ; 004d259e
    MOV EAX,dword ptr [ESI + 0x154]     ; 004d259f
    PUSH ESI                            ; 004d25a5
    CALL dword ptr [EAX + 0x88]         ; 004d25a6
    ADD ESP,0x8                         ; 004d25ac
    MOV EAX,[0x01d06ab4]                ; 004d25af | DAT_01d06ab4
    PUSH 0x1                            ; 004d25b4
    MOV EAX,dword ptr [EAX*0x4 + 0x1d06aa4] ; 004d25b6
    PUSH ESI                            ; 004d25bd
    ADD EAX,0x1fae8                     ; 004d25be
    PUSH EAX                            ; 004d25c3
    CALL core_inv.cpp_FUN_004f7690      ; 004d25c4
        ;   XREF to: 004f7690 (UNCONDITIONAL_CALL)  ; int core_inv.cpp_FUN_004f7690(CInventory * this_ptr, CDemonActor * item_actor, int show_tutorial_message)
    ADD ESP,0xc                         ; 004d25c9
    POP EBP                             ; 004d25cc
    POP EDI                             ; 004d25cd
    POP ESI                             ; 004d25ce
    POP EBX                             ; 004d25cf
    RET                                 ; 004d25d0
    MOV EBP,0x5e1aec                    ; 004d25d1 | = "..\\core\\game.cpp"
        ;   Label: LAB_004d25d1
    MOV EAX,0xbf9                       ; 004d25d6
    PUSH 0x5e1afd                       ; 004d25db | = "giveHeroWeapon - This is not a weapon"
    MOV dword ptr [0x01d1d400],EBP      ; 004d25e0 | DAT_01d1d400
    MOV [0x01d1d404],EAX                ; 004d25e6 | DAT_01d1d404
    CALL core_main.c_FUN_005030e0       ; 004d25eb
        ;   XREF to: 005030e0 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_005030e0()
    ADD ESP,0x4                         ; 004d25f0
    JMP 0x004d2587                      ; 004d25f3
        ;   XREF to: 004d2587 (UNCONDITIONAL_JUMP)  ; LAB_004d2587

