; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hotdemon_cpp_CHotDemon_getPropertyList_FUN_004f79d0 (CHotDemon *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CHotDemon *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_0062f528
;   TerminatedCString s_State_0062f52e
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f79d0
        ;   Label: core_hotdemon.cpp_CHotDemon_getPropertyList_FUN_004f79d0
    PUSH ESI                            ; 004f79d1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f79d2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f79d6
    PUSH ESI                            ; 004f79da
    PUSH EBX                            ; 004f79db
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 004f79dc
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f79e1
    PUSH 0x0                            ; 004f79e4
    ADD EBX,0x158                       ; 004f79e6
    PUSH EBX                            ; 004f79ec
    PUSH 0x62f528                       ; 004f79ed | = "Model"
    PUSH ESI                            ; 004f79f2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 004f79f3
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004f79f8
    PUSH EBX                            ; 004f79fb
    PUSH 0x62f52e                       ; 004f79fc | = "State"
    PUSH ESI                            ; 004f7a01
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004f7a02
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f7a07
    POP ESI                             ; 004f7a0a
    POP EBX                             ; 004f7a0b
    RET                                 ; 004f7a0c

