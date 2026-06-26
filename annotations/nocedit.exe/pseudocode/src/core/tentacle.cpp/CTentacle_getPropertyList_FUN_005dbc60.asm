; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_tentacle_cpp_CTentacle_getPropertyList_FUN_005dbc60(CTentacle *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CTentacle *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_00654e99
;   TerminatedCString s_State_00654e9f
;   TerminatedCString s_CGrave_00654ea5
;   TerminatedCString s_Grave_actor_00654eac
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005dbc60
        ;   Label: core_tentacle.cpp_CTentacle_getPropertyList_FUN_005dbc60
    PUSH ESI                            ; 005dbc61
    PUSH EDI                            ; 005dbc62
    MOV EDI,dword ptr [ESP + 0x10]      ; 005dbc63
    MOV ESI,dword ptr [ESP + 0x14]      ; 005dbc67
    PUSH ESI                            ; 005dbc6b
    PUSH EDI                            ; 005dbc6c
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 005dbc6d
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005dbc72
    PUSH 0x0                            ; 005dbc75
    LEA EBX,[EDI + 0x158]               ; 005dbc77
    PUSH EBX                            ; 005dbc7d
    PUSH 0x654e99                       ; 005dbc7e | = "Model"
    PUSH ESI                            ; 005dbc83
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 005dbc84
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 005dbc89
    PUSH EBX                            ; 005dbc8c
    PUSH 0x654e9f                       ; 005dbc8d | = "State"
    PUSH ESI                            ; 005dbc92
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 005dbc93
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 005dbc98
    PUSH 0x0                            ; 005dbc9b
    PUSH 0x654ea5                       ; 005dbc9d | = "CGrave"
    PUSH 0x0                            ; 005dbca2
    ADD EDI,0xbec4                      ; 005dbca4
    PUSH EDI                            ; 005dbcaa
    PUSH 0x654eac                       ; 005dbcab | = "Grave actor"
    PUSH ESI                            ; 005dbcb0
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 005dbcb1
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 005dbcb6
    POP EDI                             ; 005dbcb9
    POP ESI                             ; 005dbcba
    POP EBX                             ; 005dbcbb
    RET                                 ; 005dbcbc

