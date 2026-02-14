; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_larva_cpp_CLarva_getPropertyList_FUN_00503c50(CLarva *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CLarva *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_0063100b
;   TerminatedCString s_State_00631011
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00503c50
        ;   Label: core_larva.cpp_CLarva_getPropertyList_FUN_00503c50
    PUSH ESI                            ; 00503c51
    MOV EBX,dword ptr [ESP + 0xc]       ; 00503c52
    MOV ESI,dword ptr [ESP + 0x10]      ; 00503c56
    PUSH ESI                            ; 00503c5a
    PUSH EBX                            ; 00503c5b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00503c5c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00503c61
    PUSH 0x0                            ; 00503c64
    ADD EBX,0x158                       ; 00503c66
    PUSH EBX                            ; 00503c6c
    PUSH 0x63100b                       ; 00503c6d | = "Model"
    PUSH ESI                            ; 00503c72
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00503c73
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00503c78
    PUSH EBX                            ; 00503c7b
    PUSH 0x631011                       ; 00503c7c | = "State"
    PUSH ESI                            ; 00503c81
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00503c82
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00503c87
    POP ESI                             ; 00503c8a
    POP EBX                             ; 00503c8b
    RET                                 ; 00503c8c

