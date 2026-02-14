; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_drone_cpp_CDrone_getPropertyList_FUN_0048f520(CDrone *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CDrone *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00622456
;   TerminatedCString s_State_0062245c
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048f520
        ;   Label: core_drone.cpp_CDrone_getPropertyList_FUN_0048f520
    PUSH ESI                            ; 0048f521
    MOV EBX,dword ptr [ESP + 0xc]       ; 0048f522
    MOV ESI,dword ptr [ESP + 0x10]      ; 0048f526
    PUSH ESI                            ; 0048f52a
    PUSH EBX                            ; 0048f52b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 0048f52c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0048f531
    PUSH 0x0                            ; 0048f534
    ADD EBX,0x158                       ; 0048f536
    PUSH EBX                            ; 0048f53c
    PUSH 0x622456                       ; 0048f53d | = "Model"
    PUSH ESI                            ; 0048f542
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 0048f543
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 0048f548
    PUSH EBX                            ; 0048f54b
    PUSH 0x62245c                       ; 0048f54c | = "State"
    PUSH ESI                            ; 0048f551
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 0048f552
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 0048f557
    POP ESI                             ; 0048f55a
    POP EBX                             ; 0048f55b
    RET                                 ; 0048f55c

