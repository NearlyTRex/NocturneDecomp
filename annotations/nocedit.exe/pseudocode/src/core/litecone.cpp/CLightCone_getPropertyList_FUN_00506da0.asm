; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_litecone_cpp_CLightCone_getPropertyList_FUN_00506da0 (CLightCone *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CLightCone *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_fov_00631591
;   TerminatedCString s_falloff_00631595
;   TerminatedCString s_state_0063159d
;   TerminatedCString s_On_condition_006315a3
;   TerminatedCString s_Off_condition_006315b0
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00506da0
        ;   Label: core_litecone.cpp_CLightCone_getPropertyList_FUN_00506da0
    PUSH ESI                            ; 00506da1
    MOV EBX,dword ptr [ESP + 0xc]       ; 00506da2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00506da6
    PUSH ESI                            ; 00506daa
    PUSH EBX                            ; 00506dab
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00506dac
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00506db1
    PUSH 0x0                            ; 00506db4
    LEA EAX,[EBX + 0x158]               ; 00506db6
    PUSH EAX                            ; 00506dbc
    PUSH 0x631591                       ; 00506dbd | = "fov"
    PUSH ESI                            ; 00506dc2
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 00506dc3
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00506dc8
    PUSH 0x0                            ; 00506dcb
    LEA EAX,[EBX + 0x15c]               ; 00506dcd
    PUSH EAX                            ; 00506dd3
    PUSH 0x631595                       ; 00506dd4 | = "falloff"
    PUSH ESI                            ; 00506dd9
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 00506dda
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00506ddf
    LEA EAX,[EBX + 0x160]               ; 00506de2
    PUSH EAX                            ; 00506de8
    PUSH 0x63159d                       ; 00506de9 | = "state"
    PUSH ESI                            ; 00506dee
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 00506def
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 00506df4
    LEA EAX,[EBX + 0x164]               ; 00506df7
    PUSH EAX                            ; 00506dfd
    PUSH 0x6315a3                       ; 00506dfe | = "On condition"
    PUSH ESI                            ; 00506e03
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00506e04
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00506e09
    ADD EBX,0x1c8                       ; 00506e0c
    PUSH EBX                            ; 00506e12
    PUSH 0x6315b0                       ; 00506e13 | = "Off condition"
    PUSH ESI                            ; 00506e18
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00506e19
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 00506e1e
    POP ESI                             ; 00506e21
    POP EBX                             ; 00506e22
    RET                                 ; 00506e23

