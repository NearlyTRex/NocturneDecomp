; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_cow_cpp_CZombieCow_getPropertyList_FUN_00444c50 (CZombieCow *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CZombieCow *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_006195b6
;   TerminatedCString s_State_006195bc
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00444c50
        ;   Label: core_cow.cpp_CZombieCow_getPropertyList_FUN_00444c50
    PUSH ESI                            ; 00444c51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00444c52
    MOV ESI,dword ptr [ESP + 0x10]      ; 00444c56
    PUSH ESI                            ; 00444c5a
    PUSH EBX                            ; 00444c5b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00444c5c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00444c61
    PUSH 0x0                            ; 00444c64
    ADD EBX,0x158                       ; 00444c66
    PUSH EBX                            ; 00444c6c
    PUSH 0x6195b6                       ; 00444c6d | = "Model"
    PUSH ESI                            ; 00444c72
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00444c73
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00444c78
    PUSH EBX                            ; 00444c7b
    PUSH 0x6195bc                       ; 00444c7c | = "State"
    PUSH ESI                            ; 00444c81
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00444c82
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00444c87
    POP ESI                             ; 00444c8a
    POP EBX                             ; 00444c8b
    RET                                 ; 00444c8c

