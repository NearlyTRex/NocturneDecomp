; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920(CZombieDog * this_ptr, CActorPropertyList * property_list)
;
; Parameters:
; CZombieDog *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_0062106d
;   TerminatedCString s_State_00621073
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0047f920
        ;   Label: core_dog.cpp_CZombieDog_getPropertyList_FUN_0047f920
    PUSH ESI                            ; 0047f921
    MOV EBX,dword ptr [ESP + 0xc]       ; 0047f922
    MOV ESI,dword ptr [ESP + 0x10]      ; 0047f926
    PUSH ESI                            ; 0047f92a
    PUSH EBX                            ; 0047f92b
    CALL core_enemy.cpp_CEnemy_FUN_004aa170 ; 0047f92c | int core_enemy.cpp_CEnemy_FUN_004aa170(CEnemy * this_ptr)
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 0047f931
    PUSH 0x0                            ; 0047f934
    ADD EBX,0x158                       ; 0047f936
    PUSH EBX                            ; 0047f93c
    PUSH 0x62106d                       ; 0047f93d | = "Model" | s_Model_0062106d = Model
    PUSH ESI                            ; 0047f942
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4a0 ; 0047f943 | void core_actor.cpp_CActorPropertyList_FUN_0040e4a0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 0047f948
    PUSH EBX                            ; 0047f94b
    PUSH 0x621073                       ; 0047f94c | = "State" | s_State_00621073 = State
    PUSH ESI                            ; 0047f951
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e4d0 ; 0047f952 | void core_actor.cpp_CActorPropertyList_FUN_0040e4d0(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 0047f957
    POP ESI                             ; 0047f95a
    POP EBX                             ; 0047f95b
    RET                                 ; 0047f95c

