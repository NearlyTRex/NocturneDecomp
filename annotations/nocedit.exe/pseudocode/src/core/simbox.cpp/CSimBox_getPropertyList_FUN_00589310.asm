; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_simbox_cpp_CSimBox_getPropertyList_FUN_00589310(CSimBox *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CSimBox *        Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00649c78
;   TerminatedCString s_Weight_lbs_00649c8a
;   TerminatedCString s_Type_00649c97
;   TerminatedCString s_Event_condition_00649c9c
;   TerminatedCString s_Initial_velocity_00649caf
;   TerminatedCString s_Initial_rotation_velocit_00649cc0
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00589310
        ;   Label: core_simbox.cpp_CSimBox_getPropertyList_FUN_00589310
    PUSH ESI                            ; 00589311
    MOV EBX,dword ptr [ESP + 0xc]       ; 00589312
    MOV ESI,dword ptr [ESP + 0x10]      ; 00589316
    PUSH ESI                            ; 0058931a
    PUSH EBX                            ; 0058931b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0058931c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00589321
    PUSH 0x0                            ; 00589324
    LEA EAX,[EBX + 0x158]               ; 00589326
    PUSH EAX                            ; 0058932c
    PUSH 0x649c78                       ; 0058932d | = "Model file (.kfm)"
    PUSH ESI                            ; 00589332
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 00589333
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 00589338
    PUSH 0x0                            ; 0058933b
    LEA EAX,[EBX + 0x2d8]               ; 0058933d
    PUSH EAX                            ; 00589343
    PUSH 0x649c8a                       ; 00589344 | = "Weight (lbs)"
    PUSH ESI                            ; 00589349
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0058934a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0058934f
    PUSH 0x5892d0                       ; 00589352
    PUSH 0x589270                       ; 00589357
    PUSH 0x649c97                       ; 0058935c | = "Type"
    PUSH ESI                            ; 00589361
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 00589362
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CActorPropertyDisplayFunc * display_callback, CActorPropertyActionFunc * action_callback)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00589367
    ADD ESP,0x10                        ; 0058936d
    CMP EDX,0x1                         ; 00589370
    JZ 0x00589378                       ; 00589373
        ;   XREF to: 00589378 (CONDITIONAL_JUMP)  ; LAB_00589378
    POP ESI                             ; 00589375
    POP EBX                             ; 00589376
    RET                                 ; 00589377
    LEA EAX,[EBX + 0x2dc]               ; 00589378
        ;   Label: LAB_00589378
    PUSH EAX                            ; 0058937e
    PUSH 0x649c9c                       ; 0058937f | = "Event condition : "
    PUSH ESI                            ; 00589384
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 00589385
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0058938a
    PUSH 0x0                            ; 0058938d
    LEA EAX,[EBX + 0x340]               ; 0058938f
    PUSH EAX                            ; 00589395
    PUSH 0x649caf                       ; 00589396 | = "Initial velocity"
    PUSH ESI                            ; 0058939b
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 0058939c
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005893a1
    PUSH 0x0                            ; 005893a4
    ADD EBX,0x34c                       ; 005893a6
    PUSH EBX                            ; 005893ac
    PUSH 0x649cc0                       ; 005893ad | = "Initial rotation velocity"
    PUSH ESI                            ; 005893b2
    CALL core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260 ; 005893b3
        ;   XREF to: 0040e260 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addVector_FUN_0040e260(CActorPropertyList * this_ptr, char * property_name, CVector3f * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005893b8
    POP ESI                             ; 005893bb
    POP EBX                             ; 005893bc
    RET                                 ; 005893bd

