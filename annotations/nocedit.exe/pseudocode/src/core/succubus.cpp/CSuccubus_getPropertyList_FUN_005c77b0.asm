; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_succubus_cpp_CSuccubus_getPropertyList_FUN_005c77b0 (CSuccubus *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CSuccubus *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_006541d6
;   TerminatedCString s_State_006541dc
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c77b0
        ;   Label: core_succubus.cpp_CSuccubus_getPropertyList_FUN_005c77b0
    PUSH ESI                            ; 005c77b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 005c77b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 005c77b6
    PUSH ESI                            ; 005c77ba
    PUSH EBX                            ; 005c77bb
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005c77bc
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005c77c1
    PUSH 0x0                            ; 005c77c4
    ADD EBX,0x158                       ; 005c77c6
    PUSH EBX                            ; 005c77cc
    PUSH 0x6541d6                       ; 005c77cd | = "Model"
    PUSH ESI                            ; 005c77d2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 005c77d3
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 005c77d8
    PUSH EBX                            ; 005c77db
    PUSH 0x6541dc                       ; 005c77dc | = "State"
    PUSH ESI                            ; 005c77e1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 005c77e2
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005c77e7
    POP ESI                             ; 005c77ea
    POP EBX                             ; 005c77eb
    RET                                 ; 005c77ec

