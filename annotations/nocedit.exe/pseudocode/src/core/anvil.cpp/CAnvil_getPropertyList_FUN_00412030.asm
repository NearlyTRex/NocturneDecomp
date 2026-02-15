; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_anvil_cpp_CAnvil_getPropertyList_FUN_00412030(CAnvil *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CAnvil *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00614d6d
;   TerminatedCString s_Drop_cond_00614d7f
;   TerminatedCString s_Drop_height_00614d89
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412030
        ;   Label: core_anvil.cpp_CAnvil_getPropertyList_FUN_00412030
    PUSH ESI                            ; 00412031
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412032
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412036
    PUSH ESI                            ; 0041203a
    PUSH EBX                            ; 0041203b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0041203c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00412041
    PUSH 0x0                            ; 00412044
    LEA EAX,[EBX + 0x158]               ; 00412046
    PUSH EAX                            ; 0041204c
    PUSH 0x614d6d                       ; 0041204d | = "Model file (.kfm)"
    PUSH ESI                            ; 00412052
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 00412053
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00412058
    LEA EAX,[EBX + 0x2d4]               ; 0041205b
    PUSH EAX                            ; 00412061
    PUSH 0x614d7f                       ; 00412062 | = "Drop cond"
    PUSH ESI                            ; 00412067
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00412068
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0041206d
    PUSH 0x0                            ; 00412070
    ADD EBX,0x338                       ; 00412072
    PUSH EBX                            ; 00412078
    PUSH 0x614d89                       ; 00412079 | = "Drop height"
    PUSH ESI                            ; 0041207e
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0041207f
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 00412084
    POP ESI                             ; 00412087
    POP EBX                             ; 00412088
    RET                                 ; 00412089

