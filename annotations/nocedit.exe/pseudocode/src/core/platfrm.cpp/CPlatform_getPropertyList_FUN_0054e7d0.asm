; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_platfrm_cpp_CPlatform_getPropertyList_FUN_0054e7d0 (CPlatform *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CPlatform *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_0063fab6
;   TerminatedCString s_Move_to_end_event_0063fac8
;   TerminatedCString s_Move_to_start_event_0063fada
;   TerminatedCString s_Stop_event_0063faee
;   TerminatedCString s_Start_sound_0063faf9
;   TerminatedCString s_Stop_sound_0063fb05
;   TerminatedCString s_Active_sound_0063fb10
;   TerminatedCString s_Travel_time_start_end_se_0063fb1d
;   TerminatedCString s_Travel_time_end_start_se_0063fb3a
;   TerminatedCString s_groundType_0063fb57
;   TerminatedCString s_course_0063fb62
;   TerminatedCString s_Editor_slew_mode_0063fb69
;   TerminatedCString s_state_0063fb7a
;   TerminatedCString s_Paramater_0_1_0063fb80
;   TerminatedCString s_One_shot_0_no_1_yes_2_do_0063fb91
;   ... and 7 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054e7d0
        ;   Label: core_platfrm.cpp_CPlatform_getPropertyList_FUN_0054e7d0
    PUSH ESI                            ; 0054e7d1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054e7d2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054e7d6
    PUSH EBX                            ; 0054e7da
    PUSH ESI                            ; 0054e7db
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0054e7dc
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0054e7e1
    PUSH 0x0                            ; 0054e7e4
    LEA EAX,[ESI + 0x158]               ; 0054e7e6
    PUSH EAX                            ; 0054e7ec
    PUSH 0x63fab6                       ; 0054e7ed | = "Model file (.kfm)"
    PUSH EBX                            ; 0054e7f2
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 0054e7f3
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 0054e7f8
    LEA EAX,[ESI + 0x3b8]               ; 0054e7fb
    PUSH EAX                            ; 0054e801
    PUSH 0x63fac8                       ; 0054e802 | = "Move to end event"
    PUSH EBX                            ; 0054e807
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0054e808
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0054e80d
    LEA EAX,[ESI + 0x354]               ; 0054e810
    PUSH EAX                            ; 0054e816
    PUSH 0x63fada                       ; 0054e817 | = "Move to start event"
    PUSH EBX                            ; 0054e81c
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0054e81d
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0054e822
    LEA EAX,[ESI + 0x41c]               ; 0054e825
    PUSH EAX                            ; 0054e82b
    PUSH 0x63faee                       ; 0054e82c | = "Stop event"
    PUSH EBX                            ; 0054e831
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0054e832
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0054e837
    LEA EAX,[ESI + 0x480]               ; 0054e83a
    PUSH EAX                            ; 0054e840
    PUSH 0x63faf9                       ; 0054e841 | = "Start sound"
    PUSH EBX                            ; 0054e846
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054e847
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054e84c
    LEA EAX,[ESI + 0x494]               ; 0054e84f
    PUSH EAX                            ; 0054e855
    PUSH 0x63fb05                       ; 0054e856 | = "Stop sound"
    PUSH EBX                            ; 0054e85b
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054e85c
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054e861
    LEA EAX,[ESI + 0x4a8]               ; 0054e864
    PUSH EAX                            ; 0054e86a
    PUSH 0x63fb10                       ; 0054e86b | = "Active sound"
    PUSH EBX                            ; 0054e870
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054e871
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054e876
    PUSH 0x0                            ; 0054e879
    LEA EAX,[ESI + 0x2e8]               ; 0054e87b
    PUSH EAX                            ; 0054e881
    PUSH 0x63fb1d                       ; 0054e882 | = "Travel time start->end (sec)"
    PUSH EBX                            ; 0054e887
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054e888
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054e88d
    PUSH 0x0                            ; 0054e890
    LEA EAX,[ESI + 0x2ec]               ; 0054e892
    PUSH EAX                            ; 0054e898
    PUSH 0x63fb3a                       ; 0054e899 | = "Travel time end->start (sec)"
    PUSH EBX                            ; 0054e89e
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054e89f
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054e8a4
    LEA EAX,[ESI + 0x2d8]               ; 0054e8a7
    PUSH EAX                            ; 0054e8ad
    PUSH 0x63fb57                       ; 0054e8ae | = "groundType"
    PUSH EBX                            ; 0054e8b3
    CALL core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300 ; 0054e8b4
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e8b9
    PUSH 0x54e530                       ; 0054e8bc
    PUSH 0x54e4e0                       ; 0054e8c1
    PUSH 0x63fb62                       ; 0054e8c6 | = "course"
    PUSH EBX                            ; 0054e8cb
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 0054e8cc
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CDemonActor_CActorPropertyDisplayFunc * display_callback, CDemonActor_CActorPropertyActionFunc * action_callback)
    MOV dword ptr [EAX + 0x58],0x1      ; 0054e8d1
    MOV AH,byte ptr [ESI + 0x2f0]       ; 0054e8d8
    ADD ESP,0x10                        ; 0054e8de
    TEST AH,AH                          ; 0054e8e1
    JNZ 0x0054e8fd                      ; 0054e8e3
        ;   XREF to: 0054e8fd (CONDITIONAL_JUMP)  ; LAB_0054e8fd
    PUSH 0x54e480                       ; 0054e8e5
    PUSH 0x54e400                       ; 0054e8ea
    PUSH 0x63fb69                       ; 0054e8ef | = "Editor slew mode"
    PUSH EBX                            ; 0054e8f4
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 0054e8f5
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CDemonActor_CActorPropertyDisplayFunc * display_callback, CDemonActor_CActorPropertyActionFunc * action_callback)
    ADD ESP,0x10                        ; 0054e8fa
    PUSH 0x54e760                       ; 0054e8fd
        ;   Label: LAB_0054e8fd
    PUSH 0x54e700                       ; 0054e902
    PUSH 0x63fb7a                       ; 0054e907 | = "state"
    PUSH EBX                            ; 0054e90c
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 0054e90d
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CDemonActor_CActorPropertyDisplayFunc * display_callback, CDemonActor_CActorPropertyActionFunc * action_callback)
    ADD ESP,0x10                        ; 0054e912
    PUSH 0x0                            ; 0054e915
    PUSH 0x3f800000                     ; 0054e917
    LEA EAX,[ESI + 0x2dc]               ; 0054e91c
    PUSH 0x0                            ; 0054e922
    PUSH EAX                            ; 0054e924
    PUSH 0x63fb80                       ; 0054e925 | = "Paramater (0..1)"
    PUSH EBX                            ; 0054e92a
    CALL core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0 ; 0054e92b
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloatRange_FUN_0040e1a0(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, float min_value, ...)
    ADD ESP,0x18                        ; 0054e930
    PUSH 0x0                            ; 0054e933
    LEA EAX,[ESI + 0x4c0]               ; 0054e935
    PUSH EAX                            ; 0054e93b
    PUSH 0x63fb91                       ; 0054e93c | = "One shot (0=no,1=yes,2=done)"
    PUSH EBX                            ; 0054e941
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 0054e942
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054e947
    LEA EAX,[ESI + 0x4c4]               ; 0054e94a
    PUSH EAX                            ; 0054e950
    PUSH 0x63fbae                       ; 0054e951 | = "Block virtual director"
    PUSH EBX                            ; 0054e956
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e957
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e95c
    LEA EAX,[ESI + 0x4c8]               ; 0054e95f
    PUSH EAX                            ; 0054e965
    PUSH 0x63fbc5                       ; 0054e966 | = "Render backgnd when not moving"
    PUSH EBX                            ; 0054e96b
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e96c
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    MOV EDX,dword ptr [ESI + 0x4c8]     ; 0054e971
    ADD ESP,0xc                         ; 0054e977
    TEST EDX,EDX                        ; 0054e97a
    JNZ 0x0054e9c0                      ; 0054e97c
        ;   XREF to: 0054e9c0 (CONDITIONAL_JUMP)  ; LAB_0054e9c0
    LEA EAX,[ESI + 0x50c]               ; 0054e97e
        ;   Label: LAB_0054e97e
    PUSH EAX                            ; 0054e984
    PUSH 0x63fc1a                       ; 0054e985 | = "Plot as a box in shadow"
    PUSH EBX                            ; 0054e98a
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e98b
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e990
    LEA EAX,[ESI + 0x510]               ; 0054e993
    PUSH EAX                            ; 0054e999
    PUSH 0x63fc32                       ; 0054e99a | = "Push actor instead of killing him"
    PUSH EBX                            ; 0054e99f
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e9a0
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e9a5
    ADD ESI,0x518                       ; 0054e9a8
    PUSH ESI                            ; 0054e9ae
    PUSH 0x63fc54                       ; 0054e9af | = "Plot in shadow flag"
    PUSH EBX                            ; 0054e9b4
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e9b5
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e9ba
    POP ESI                             ; 0054e9bd
    POP EBX                             ; 0054e9be
    RET                                 ; 0054e9bf
    PUSH 0x0                            ; 0054e9c0
        ;   Label: LAB_0054e9c0
    PUSH 0x3f                           ; 0054e9c2
    LEA EAX,[ESI + 0x4cc]               ; 0054e9c4
    PUSH EAX                            ; 0054e9ca
    PUSH 0x63fbe4                       ; 0054e9cb | = "Camera while moving : "
    PUSH EBX                            ; 0054e9d0
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0054e9d1
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0054e9d6
    LEA EAX,[ESI + 0x514]               ; 0054e9d9
    PUSH EAX                            ; 0054e9df
    PUSH 0x63fbfb                       ; 0054e9e0 | = "Recompute fog in background : "
    PUSH EBX                            ; 0054e9e5
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054e9e6
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054e9eb
    JMP 0x0054e97e                      ; 0054e9ee
        ;   XREF to: 0054e97e (UNCONDITIONAL_JUMP)  ; LAB_0054e97e

