; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_createActorByName_FUN_0040d540(undefined4 param_1)
;
;
; XREF[12]:
;   FUN_004d4650 at 004d4851
;   FUN_004fbe80 at 004fbea0
;   core_baron.cpp_CBaronWeapon_findOrCreateBaron_FUN_00411530 at 0041158c
;   core_game.cpp_CGame_processCheatCodes_FUN_004a0550 at 004a10f3
;   core_game.cpp_giveHeroWeapon_FUN_004a02e0 at 004a02e9
;   core_hero.cpp_CHeroPlaceholder_createHero_FUN_004b6080 at 004b60a6
;   core_hero.cpp_CHero_createDefaultWeapon_FUN_004b4dd0 at 004b4df1
;   core_inv.cpp_CInventory_addItem_FUN_004bf360 at 004bfafb
;   core_inv.cpp_CInventory_initialize_FUN_004bef10 at 004bef6a
;   core_inv.cpp_CInventory_load_FUN_004c1190 at 004c143c
;   ... and 2 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_00577f63
;   TerminatedCString s_Can_t_create_actor_of_un_00577f75
;   TerminatedCString s_core_actor_cpp_00577fa2
;   TerminatedCString s_Can_t_create_instance_of_00577fb4
;   TerminatedCString s_core_actor_cpp_00577fde
;   string s_Not_enough_memory_to_create_%s_00577ff0
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_getActorClassByName_FUN_0040d4d0
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040d540
        ;   Label: core_actor.cpp_createActorByName_FUN_0040d540
    PUSH ESI                            ; 0040d541
    PUSH EBP                            ; 0040d542
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040d543
    PUSH ESI                            ; 0040d547
    CALL core_actor.cpp_getActorClassByName_FUN_0040d4d0 ; 0040d548
        ;   XREF to: 0040d4d0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getActorClassByName_FUN_0040d4d0()
    ADD ESP,0x4                         ; 0040d54d
    MOV EBX,EAX                         ; 0040d550
    TEST EAX,EAX                        ; 0040d552
    JZ 0x0040d58e                       ; 0040d554
        ;   XREF to: 0040d58e (CONDITIONAL_JUMP)  ; LAB_0040d58e
    CMP dword ptr [EBX + 0x2c],0x0      ; 0040d556
        ;   Label: LAB_0040d556
    JNZ 0x0040d57f                      ; 0040d55a
        ;   XREF to: 0040d57f (CONDITIONAL_JUMP)  ; LAB_0040d57f
    PUSH ESI                            ; 0040d55c
    MOV EBP,0x577fa2                    ; 0040d55d | = "..\\core\\actor.cpp"
    MOV EAX,0xa50                       ; 0040d562
    PUSH 0x577fb4                       ; 0040d567 | = "Can't create instance of abstract typ..."
    MOV dword ptr [0x01cc4800],EBP      ; 0040d56c | DAT_01cc4800
    MOV [0x01cc4804],EAX                ; 0040d572 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040d577
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040d57c
    CALL dword ptr [EBX + 0x2c]         ; 0040d57f
        ;   Label: LAB_0040d57f
    MOV EBX,EAX                         ; 0040d582
    TEST EAX,EAX                        ; 0040d584
    JZ 0x0040d5b4                       ; 0040d586
        ;   XREF to: 0040d5b4 (CONDITIONAL_JUMP)  ; LAB_0040d5b4
    MOV EAX,EBX                         ; 0040d588
    POP EBP                             ; 0040d58a
    POP ESI                             ; 0040d58b
    POP EBX                             ; 0040d58c
    RET                                 ; 0040d58d
    PUSH ESI                            ; 0040d58e
        ;   Label: LAB_0040d58e
    MOV EDX,0x577f63                    ; 0040d58f | = "..\\core\\actor.cpp"
    MOV ECX,0xa4a                       ; 0040d594
    PUSH 0x577f75                       ; 0040d599 | = "Can't create actor of unknown class t..."
    MOV dword ptr [0x01cc4800],EDX      ; 0040d59e | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040d5a4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040d5aa
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040d5af
    JMP 0x0040d556                      ; 0040d5b2
        ;   XREF to: 0040d556 (UNCONDITIONAL_JUMP)  ; LAB_0040d556
    PUSH ESI                            ; 0040d5b4
        ;   Label: LAB_0040d5b4
    MOV EDX,0x577fde                    ; 0040d5b5 | = "..\\core\\actor.cpp"
    MOV ECX,0xa59                       ; 0040d5ba
    PUSH 0x577ff0                       ; 0040d5bf | = "Not enough memory to create %s"
    MOV dword ptr [0x01cc4800],EDX      ; 0040d5c4 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0040d5ca | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040d5d0
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x8                         ; 0040d5d5
    MOV EAX,EBX                         ; 0040d5d8
    POP EBP                             ; 0040d5da
    POP ESI                             ; 0040d5db
    POP EBX                             ; 0040d5dc
    RET                                 ; 0040d5dd

