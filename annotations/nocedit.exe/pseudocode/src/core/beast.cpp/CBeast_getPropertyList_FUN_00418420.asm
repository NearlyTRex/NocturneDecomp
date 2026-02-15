; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_beast_cpp_CBeast_getPropertyList_FUN_00418420(CBeast *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBeast *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00615a95
;   TerminatedCString s_State_00615a9b
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418420
        ;   Label: core_beast.cpp_CBeast_getPropertyList_FUN_00418420
    PUSH ESI                            ; 00418421
    MOV EBX,dword ptr [ESP + 0xc]       ; 00418422
    MOV ESI,dword ptr [ESP + 0x10]      ; 00418426
    PUSH ESI                            ; 0041842a
    PUSH EBX                            ; 0041842b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 0041842c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00418431
    PUSH 0x0                            ; 00418434
    ADD EBX,0x158                       ; 00418436
    PUSH EBX                            ; 0041843c
    PUSH 0x615a95                       ; 0041843d | = "Model"
    PUSH ESI                            ; 00418442
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00418443
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00418448
    PUSH EBX                            ; 0041844b
    PUSH 0x615a9b                       ; 0041844c | = "State"
    PUSH ESI                            ; 00418451
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00418452
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00418457
    POP ESI                             ; 0041845a
    POP EBX                             ; 0041845b
    RET                                 ; 0041845c

