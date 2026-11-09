; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_actor_cpp_createActorByName_FUN_0040c5a0(undefined4 param_1)
;
;
; XREF[11]:
;   core_baron.cpp_FUN_00410ac0 at 00410b1c
;   core_game.cpp_FUN_004b8e10 at 004b8e1c
;   core_game.cpp_FUN_004b90d0 at 004b9a9d
;   core_hero.cpp_FUN_004d0a40 at 004d0a55
;   core_inv.cpp_CInventory_initialize_FUN_004da900 at 004da95a
;   core_inv.cpp_CInventory_load_FUN_004dc4b0 at 004dc76a
;   core_inv.cpp_FUN_004dadb0 at 004db508
;   core_mimic.cpp_FUN_004f04f0 at 004f06f1
;   core_mission.cpp_CDemonMission_readMissionFile_FUN_004fb590 at 004fbb27
;   core_passngr.cpp_FUN_005115e0 at 005116a9
;   ... and 1 more
;
; Referenced Globals:
;   TerminatedCString s_core_actor_cpp_005cae28
;   TerminatedCString s_Can_t_create_actor_of_un_005cae3a
;   TerminatedCString s_core_actor_cpp_005cae67
;   TerminatedCString s_Can_t_create_instance_of_005cae79
;   TerminatedCString s_core_actor_cpp_005caea3
;   TerminatedCString s_Not_enough_memory_to_cre_005caeb5
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   core_actor.cpp_getActorClassByName_FUN_0040c530
;   core_main.c_FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040c5a0
        ;   Label: core_actor.cpp_createActorByName_FUN_0040c5a0
    PUSH ESI                            ; 0040c5a1
    PUSH EBP                            ; 0040c5a2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0040c5a3
    PUSH ESI                            ; 0040c5a7
    CALL core_actor.cpp_getActorClassByName_FUN_0040c530 ; 0040c5a8
        ;   XREF to: 0040c530 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_getActorClassByName_FUN_0040c530()
    ADD ESP,0x4                         ; 0040c5ad
    MOV EBX,EAX                         ; 0040c5b0
    TEST EAX,EAX                        ; 0040c5b2
    JZ 0x0040c5ee                       ; 0040c5b4
        ;   XREF to: 0040c5ee (CONDITIONAL_JUMP)  ; LAB_0040c5ee
    CMP dword ptr [EBX + 0x2c],0x0      ; 0040c5b6
        ;   Label: LAB_0040c5b6
    JNZ 0x0040c5df                      ; 0040c5ba
        ;   XREF to: 0040c5df (CONDITIONAL_JUMP)  ; LAB_0040c5df
    PUSH ESI                            ; 0040c5bc
    MOV EBP,0x5cae67                    ; 0040c5bd | = "..\\core\\actor.cpp"
    MOV EAX,0xab3                       ; 0040c5c2
    PUSH 0x5cae79                       ; 0040c5c7 | = "Can't create instance of abstract typ..."
    MOV dword ptr [0x01d046a0],EBP      ; 0040c5cc | DAT_01d046a0
    MOV [0x01d046a4],EAX                ; 0040c5d2 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040c5d7
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040c5dc
    CALL dword ptr [EBX + 0x2c]         ; 0040c5df
        ;   Label: LAB_0040c5df
    MOV EBX,EAX                         ; 0040c5e2
    TEST EAX,EAX                        ; 0040c5e4
    JZ 0x0040c614                       ; 0040c5e6
        ;   XREF to: 0040c614 (CONDITIONAL_JUMP)  ; LAB_0040c614
    MOV EAX,EBX                         ; 0040c5e8
    POP EBP                             ; 0040c5ea
    POP ESI                             ; 0040c5eb
    POP EBX                             ; 0040c5ec
    RET                                 ; 0040c5ed
    PUSH ESI                            ; 0040c5ee
        ;   Label: LAB_0040c5ee
    MOV EDX,0x5cae28                    ; 0040c5ef | = "..\\core\\actor.cpp"
    MOV ECX,0xaad                       ; 0040c5f4
    PUSH 0x5cae3a                       ; 0040c5f9 | = "Can't create actor of unknown class t..."
    MOV dword ptr [0x01d046a0],EDX      ; 0040c5fe | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040c604 | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040c60a
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040c60f
    JMP 0x0040c5b6                      ; 0040c612
        ;   XREF to: 0040c5b6 (UNCONDITIONAL_JUMP)  ; LAB_0040c5b6
    PUSH ESI                            ; 0040c614
        ;   Label: LAB_0040c614
    MOV EDX,0x5caea3                    ; 0040c615 | = "..\\core\\actor.cpp"
    MOV ECX,0xabc                       ; 0040c61a
    PUSH 0x5caeb5                       ; 0040c61f | = "Not enough memory to create %s"
    MOV dword ptr [0x01d046a0],EDX      ; 0040c624 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],ECX      ; 0040c62a | DAT_01d046a4
    CALL core_main.c_FUN_004e4500       ; 0040c630
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined core_main.c_FUN_004e4500()
    ADD ESP,0x8                         ; 0040c635
    MOV EAX,EBX                         ; 0040c638
    POP EBP                             ; 0040c63a
    POP ESI                             ; 0040c63b
    POP EBX                             ; 0040c63c
    RET                                 ; 0040c63d

