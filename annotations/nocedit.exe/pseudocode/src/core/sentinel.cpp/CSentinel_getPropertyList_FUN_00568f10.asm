; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_sentinel_cpp_CSentinel_getPropertyList_FUN_00568f10(CSentinel *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CSentinel *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_006458d7
;   TerminatedCString s_State_006458dd
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568f10
        ;   Label: core_sentinel.cpp_CSentinel_getPropertyList_FUN_00568f10
    PUSH ESI                            ; 00568f11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00568f12
    MOV ESI,dword ptr [ESP + 0x10]      ; 00568f16
    PUSH ESI                            ; 00568f1a
    PUSH EBX                            ; 00568f1b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00568f1c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00568f21
    PUSH 0x0                            ; 00568f24
    ADD EBX,0x158                       ; 00568f26
    PUSH EBX                            ; 00568f2c
    PUSH 0x6458d7                       ; 00568f2d | = "Model"
    PUSH ESI                            ; 00568f32
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00568f33
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00568f38
    PUSH EBX                            ; 00568f3b
    PUSH 0x6458dd                       ; 00568f3c | = "State"
    PUSH ESI                            ; 00568f41
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00568f42
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00568f47
    POP ESI                             ; 00568f4a
    POP EBX                             ; 00568f4b
    RET                                 ; 00568f4c

