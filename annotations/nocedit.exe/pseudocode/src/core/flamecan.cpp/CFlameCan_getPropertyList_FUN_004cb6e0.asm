; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_flamecan_cpp_CFlameCan_getPropertyList_FUN_004cb6e0(CFlameCan *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CFlameCan *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_0062a31f
;   TerminatedCString s_Time_to_explode_0062a331
;   TerminatedCString s_On_fire_0062a341
;   TerminatedCString s_Event_to_catch_on_fire_0062a349
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cb6e0
        ;   Label: core_flamecan.cpp_CFlameCan_getPropertyList_FUN_004cb6e0
    PUSH ESI                            ; 004cb6e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cb6e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cb6e6
    PUSH ESI                            ; 004cb6ea
    PUSH EBX                            ; 004cb6eb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004cb6ec
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004cb6f1
    PUSH 0x0                            ; 004cb6f4
    LEA EAX,[EBX + 0x158]               ; 004cb6f6
    PUSH EAX                            ; 004cb6fc
    PUSH 0x62a31f                       ; 004cb6fd | = "Model file (.kfm)"
    PUSH ESI                            ; 004cb702
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 004cb703
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 004cb708
    PUSH 0x0                            ; 004cb70b
    LEA EAX,[EBX + 0x2d8]               ; 004cb70d
    PUSH EAX                            ; 004cb713
    PUSH 0x62a331                       ; 004cb714 | = "Time to explode"
    PUSH ESI                            ; 004cb719
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 004cb71a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 004cb71f
    LEA EAX,[EBX + 0x2d4]               ; 004cb722
    PUSH EAX                            ; 004cb728
    PUSH 0x62a341                       ; 004cb729 | = "On fire"
    PUSH ESI                            ; 004cb72e
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 004cb72f
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 004cb734
    ADD EBX,0x2dc                       ; 004cb737
    PUSH EBX                            ; 004cb73d
    PUSH 0x62a349                       ; 004cb73e | = "Event to catch on fire"
    PUSH ESI                            ; 004cb743
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 004cb744
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 004cb749
    POP ESI                             ; 004cb74c
    POP EBX                             ; 004cb74d
    RET                                 ; 004cb74e

