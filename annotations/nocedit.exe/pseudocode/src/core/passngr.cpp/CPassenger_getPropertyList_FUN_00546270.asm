; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_passngr_cpp_CPassenger_getPropertyList_FUN_00546270 (CPassenger *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CPassenger *     Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Wolf_model_name_0063e837
;   TerminatedCString s_Transform_condition_0063e847
;   TerminatedCString s_Wolf_size_scale_0063e85b
;   TerminatedCString s_Name_of_wolf_0063e86b
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00546270
        ;   Label: core_passngr.cpp_CPassenger_getPropertyList_FUN_00546270
    PUSH ESI                            ; 00546271
    MOV EBX,dword ptr [ESP + 0xc]       ; 00546272
    MOV ESI,dword ptr [ESP + 0x10]      ; 00546276
    PUSH ESI                            ; 0054627a
    PUSH EBX                            ; 0054627b
    CALL core_npc.cpp_CNPC_getPropertyList_FUN_00544e40 ; 0054627c
        ;   XREF to: 00544e40 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_getPropertyList_FUN_00544e40(CNPC * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00546281
    PUSH 0x0                            ; 00546284
    PUSH 0x1f                           ; 00546286
    LEA EAX,[EBX + 0x1f76c]             ; 00546288
    PUSH EAX                            ; 0054628e
    PUSH 0x63e837                       ; 0054628f | = "Wolf model name"
    PUSH ESI                            ; 00546294
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 00546295
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0054629a
    LEA EAX,[EBX + 0x1f708]             ; 0054629d
    PUSH EAX                            ; 005462a3
    PUSH 0x63e847                       ; 005462a4 | = "Transform condition"
    PUSH ESI                            ; 005462a9
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 005462aa
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 005462af
    PUSH 0x0                            ; 005462b2
    LEA EAX,[EBX + 0x20444]             ; 005462b4
    PUSH EAX                            ; 005462ba
    PUSH 0x63e85b                       ; 005462bb | = "Wolf size scale"
    PUSH ESI                            ; 005462c0
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005462c1
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005462c6
    PUSH 0x0                            ; 005462c9
    PUSH 0x1d                           ; 005462cb
    ADD EBX,0x1f78c                     ; 005462cd
    PUSH EBX                            ; 005462d3
    PUSH 0x63e86b                       ; 005462d4 | = "Name of wolf"
    PUSH ESI                            ; 005462d9
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 005462da
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 005462df
    POP ESI                             ; 005462e2
    POP EBX                             ; 005462e3
    RET                                 ; 005462e4

