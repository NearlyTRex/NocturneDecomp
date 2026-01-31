; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batcreat_cpp_CBatCreature_getPropertyList_FUN_004162b0 (CBatCreature *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBatCreature *   Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_006156b9
;   TerminatedCString s_State_006156bf
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004162b0
        ;   Label: core_batcreat.cpp_CBatCreature_getPropertyList_FUN_004162b0
    PUSH ESI                            ; 004162b1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004162b2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004162b6
    PUSH ESI                            ; 004162ba
    PUSH EBX                            ; 004162bb
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 004162bc
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004162c1
    PUSH 0x0                            ; 004162c4
    ADD EBX,0x158                       ; 004162c6
    PUSH EBX                            ; 004162cc
    PUSH 0x6156b9                       ; 004162cd | = "Model"
    PUSH ESI                            ; 004162d2
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 004162d3
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004162d8
    PUSH EBX                            ; 004162db
    PUSH 0x6156bf                       ; 004162dc | = "State"
    PUSH ESI                            ; 004162e1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 004162e2
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004162e7
    POP ESI                             ; 004162ea
    POP EBX                             ; 004162eb
    RET                                 ; 004162ec

