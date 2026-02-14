; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_batman_cpp_CBatman_getPropertyList_FUN_00417cd0(CBatman *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CBatman *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_006159a5
;   TerminatedCString s_State_006159ab
;   TerminatedCString s_Fall_event_006159b1
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0
;   core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00417cd0
        ;   Label: core_batman.cpp_CBatman_getPropertyList_FUN_00417cd0
    PUSH ESI                            ; 00417cd1
    PUSH EDI                            ; 00417cd2
    MOV EDI,dword ptr [ESP + 0x10]      ; 00417cd3
    MOV ESI,dword ptr [ESP + 0x14]      ; 00417cd7
    PUSH ESI                            ; 00417cdb
    PUSH EDI                            ; 00417cdc
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00417cdd
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; int core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00417ce2
    PUSH 0x0                            ; 00417ce5
    LEA EBX,[EDI + 0x158]               ; 00417ce7
    PUSH EBX                            ; 00417ced
    PUSH 0x6159a5                       ; 00417cee | = "Model"
    PUSH ESI                            ; 00417cf3
    CALL core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0 ; 00417cf4
        ;   XREF to: 0040e4a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelDFM_FUN_0040e4a0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00417cf9
    PUSH EBX                            ; 00417cfc
    PUSH 0x6159ab                       ; 00417cfd | = "State"
    PUSH ESI                            ; 00417d02
    CALL core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0 ; 00417d03
        ;   XREF to: 0040e4d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addMotion_FUN_0040e4d0(CActorPropertyList * this_ptr, char * property_name, CDeformableModelInstance * data_ptr)
    ADD ESP,0xc                         ; 00417d08
    ADD EDI,0xbebc                      ; 00417d0b
    PUSH EDI                            ; 00417d11
    PUSH 0x6159b1                       ; 00417d12 | = "Fall event"
    PUSH ESI                            ; 00417d17
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00417d18
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00417d1d
    POP EDI                             ; 00417d20
    POP ESI                             ; 00417d21
    POP EBX                             ; 00417d22
    RET                                 ; 00417d23

