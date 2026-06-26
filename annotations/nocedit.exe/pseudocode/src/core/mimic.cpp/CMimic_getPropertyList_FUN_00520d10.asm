; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_mimic_cpp_CMimic_getPropertyList_FUN_00520d10(CMimic *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CMimic *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_mirrorCondition_0063890d
;   TerminatedCString s_attackCondition_0063891d
;   TerminatedCString s_attackMode_0063892d
;   TerminatedCString s_mirrorPlaneActor_00638938
;   TerminatedCString s_morphActorType_00638949
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00520d10
        ;   Label: core_mimic.cpp_CMimic_getPropertyList_FUN_00520d10
    PUSH ESI                            ; 00520d11
    MOV EBX,dword ptr [ESP + 0xc]       ; 00520d12
    MOV ESI,dword ptr [ESP + 0x10]      ; 00520d16
    PUSH ESI                            ; 00520d1a
    PUSH EBX                            ; 00520d1b
    CALL core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170 ; 00520d1c
        ;   XREF to: 004aa170 (UNCONDITIONAL_CALL)  ; void core_enemy.cpp_CEnemy_getPropertyList_FUN_004aa170(CEnemy * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00520d21
    LEA EAX,[EBX + 0xbebc]              ; 00520d24
    PUSH EAX                            ; 00520d2a
    PUSH 0x63890d                       ; 00520d2b | = "mirrorCondition"
    PUSH ESI                            ; 00520d30
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00520d31
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00520d36
    LEA EAX,[EBX + 0xbf20]              ; 00520d39
    PUSH EAX                            ; 00520d3f
    PUSH 0x63891d                       ; 00520d40 | = "attackCondition"
    PUSH ESI                            ; 00520d45
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00520d46
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00520d4b
    PUSH 0x0                            ; 00520d4e
    LEA EAX,[EBX + 0x4bdf4]             ; 00520d50
    PUSH EAX                            ; 00520d56
    PUSH 0x63892d                       ; 00520d57 | = "attackMode"
    PUSH ESI                            ; 00520d5c
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 00520d5d
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00520d62
    PUSH 0x0                            ; 00520d65
    PUSH 0x0                            ; 00520d67
    PUSH 0x0                            ; 00520d69
    LEA EAX,[EBX + 0x4bdf8]             ; 00520d6b
    PUSH EAX                            ; 00520d71
    PUSH 0x638938                       ; 00520d72 | = "mirrorPlaneActor"
    PUSH ESI                            ; 00520d77
    CALL core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350 ; 00520d78
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addChoice_FUN_0040e350(CActorPropertyList * this_ptr, char * property_name, CDemonActor * * data_ptr, int default_index, ...)
    ADD ESP,0x18                        ; 00520d7d
    PUSH 0x0                            ; 00520d80
    PUSH 0x28                           ; 00520d82
    ADD EBX,0x4bdfc                     ; 00520d84
    PUSH EBX                            ; 00520d8a
    PUSH 0x638949                       ; 00520d8b | = "morphActorType"
    PUSH ESI                            ; 00520d90
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 00520d91
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 00520d96
    POP ESI                             ; 00520d99
    POP EBX                             ; 00520d9a
    RET                                 ; 00520d9b

