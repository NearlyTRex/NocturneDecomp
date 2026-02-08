; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_vampboss_cpp_CVampireBoss_getPropertyList_FUN_005e7650 (CVampireBoss *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CVampireBoss *   Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_state_00656d4e
;   TerminatedCString s_CWayPoint_00656d5a
;   TerminatedCString s_Waypoint_0_00656d64
;   TerminatedCString s_CWayPoint_00656d6f
;   TerminatedCString s_Waypoint_1_00656d79
;   TerminatedCString s_CWayPoint_00656d84
;   TerminatedCString s_Waypoint_2_00656d8e
;   TerminatedCString s_CWayPoint_00656d99
;   TerminatedCString s_Waypoint_3_00656da3
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005e7650
        ;   Label: core_vampboss.cpp_CVampireBoss_getPropertyList_FUN_005e7650
    PUSH ESI                            ; 005e7651
    MOV EBX,dword ptr [ESP + 0xc]       ; 005e7652
    MOV ESI,dword ptr [ESP + 0x10]      ; 005e7656
    PUSH ESI                            ; 005e765a
    PUSH EBX                            ; 005e765b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005e765c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005e7661
    LEA EAX,[EBX + 0x158]               ; 005e7664
    PUSH EAX                            ; 005e766a
    PUSH 0x656d4e                       ; 005e766b | = "Model state"
    PUSH ESI                            ; 005e7670
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 005e7671
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 005e7676
    PUSH 0x0                            ; 005e7679
    PUSH 0x656d5a                       ; 005e767b | = "CWayPoint"
    PUSH 0x1                            ; 005e7680
    LEA EAX,[EBX + 0xce90c]             ; 005e7682
    PUSH EAX                            ; 005e7688
    PUSH 0x656d64                       ; 005e7689 | = "Waypoint 0"
    PUSH ESI                            ; 005e768e
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e768f
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e7694
    PUSH 0x0                            ; 005e7697
    PUSH 0x656d6f                       ; 005e7699 | = "CWayPoint"
    PUSH 0x1                            ; 005e769e
    LEA EAX,[EBX + 0xce910]             ; 005e76a0
    PUSH EAX                            ; 005e76a6
    PUSH 0x656d79                       ; 005e76a7 | = "Waypoint 1"
    PUSH ESI                            ; 005e76ac
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e76ad
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e76b2
    PUSH 0x0                            ; 005e76b5
    PUSH 0x656d84                       ; 005e76b7 | = "CWayPoint"
    PUSH 0x1                            ; 005e76bc
    LEA EAX,[EBX + 0xce914]             ; 005e76be
    PUSH EAX                            ; 005e76c4
    PUSH 0x656d8e                       ; 005e76c5 | = "Waypoint 2"
    PUSH ESI                            ; 005e76ca
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e76cb
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e76d0
    PUSH 0x0                            ; 005e76d3
    PUSH 0x656d99                       ; 005e76d5 | = "CWayPoint"
    PUSH 0x1                            ; 005e76da
    ADD EBX,0xce918                     ; 005e76dc
    PUSH EBX                            ; 005e76e2
    PUSH 0x656da3                       ; 005e76e3 | = "Waypoint 3"
    PUSH ESI                            ; 005e76e8
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005e76e9
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005e76ee
    POP ESI                             ; 005e76f1
    POP EBX                             ; 005e76f2
    RET                                 ; 005e76f3

