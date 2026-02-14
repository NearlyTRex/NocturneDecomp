; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_pendulum_cpp_CPendulum_getPropertyList_FUN_0054a5f0(CPendulum *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CPendulum *      Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_0063edc1
;   TerminatedCString s_Start_event_0063edd3
;   TerminatedCString s_Stop_event_0063eddf
;   TerminatedCString s_Moving_0063edea
;   TerminatedCString s_Parameter_0063edf1
;   TerminatedCString s_Max_angle_0063edfb
;   TerminatedCString s_SwooshSound_0063ee05
;   TerminatedCString s_SwooshPhaseBias_0063ee11
;   TerminatedCString s_creak1Sound_0063ee21
;   TerminatedCString s_creak2Sound_0063ee2d
;   TerminatedCString s_s_1_2_period_0063ee39
;   TerminatedCString s_Kill_hero_0063ee44
;   TerminatedCString s_Kill_enemies_0063ee4e
;   TerminatedCString s_Decay_of_exp_1_0_decay_d_0063ee5b
;   TerminatedCString s_Decay_timer_should_be_0__0063ee83
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054a5f0
        ;   Label: core_pendulum.cpp_CPendulum_getPropertyList_FUN_0054a5f0
    PUSH ESI                            ; 0054a5f1
    MOV ESI,dword ptr [ESP + 0xc]       ; 0054a5f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 0054a5f6
    PUSH EBX                            ; 0054a5fa
    PUSH ESI                            ; 0054a5fb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0054a5fc
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0054a601
    PUSH 0x0                            ; 0054a604
    LEA EAX,[ESI + 0x158]               ; 0054a606
    PUSH EAX                            ; 0054a60c
    PUSH 0x63edc1                       ; 0054a60d | = "Model file (.kfm)"
    PUSH EBX                            ; 0054a612
    CALL core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0 ; 0054a613
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addModelKFM_FUN_0040e3b0(CActorPropertyList * this_ptr, char * property_name, CKeyFramedModelInstance * data_ptr, int allow_none)
    ADD ESP,0x10                        ; 0054a618
    LEA EAX,[ESI + 0x2d4]               ; 0054a61b
    PUSH EAX                            ; 0054a621
    PUSH 0x63edd3                       ; 0054a622 | = "Start event"
    PUSH EBX                            ; 0054a627
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0054a628
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0054a62d
    LEA EAX,[ESI + 0x338]               ; 0054a630
    PUSH EAX                            ; 0054a636
    PUSH 0x63eddf                       ; 0054a637 | = "Stop event"
    PUSH EBX                            ; 0054a63c
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0054a63d
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0054a642
    LEA EAX,[ESI + 0x39c]               ; 0054a645
    PUSH EAX                            ; 0054a64b
    PUSH 0x63edea                       ; 0054a64c | = "Moving"
    PUSH EBX                            ; 0054a651
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054a652
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054a657
    PUSH 0x0                            ; 0054a65a
    LEA EAX,[ESI + 0x3a0]               ; 0054a65c
    PUSH EAX                            ; 0054a662
    PUSH 0x63edf1                       ; 0054a663 | = "Parameter"
    PUSH EBX                            ; 0054a668
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054a669
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054a66e
    PUSH 0x0                            ; 0054a671
    LEA EAX,[ESI + 0x3a8]               ; 0054a673
    PUSH EAX                            ; 0054a679
    PUSH 0x63edfb                       ; 0054a67a | = "Max angle"
    PUSH EBX                            ; 0054a67f
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054a680
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054a685
    LEA EAX,[ESI + 0x3ac]               ; 0054a688
    PUSH EAX                            ; 0054a68e
    PUSH 0x63ee05                       ; 0054a68f | = "SwooshSound"
    PUSH EBX                            ; 0054a694
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054a695
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054a69a
    PUSH 0x0                            ; 0054a69d
    LEA EAX,[ESI + 0x3cc]               ; 0054a69f
    PUSH EAX                            ; 0054a6a5
    PUSH 0x63ee11                       ; 0054a6a6 | = "SwooshPhaseBias"
    PUSH EBX                            ; 0054a6ab
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054a6ac
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054a6b1
    LEA EAX,[ESI + 0x3d0]               ; 0054a6b4
    PUSH EAX                            ; 0054a6ba
    PUSH 0x63ee21                       ; 0054a6bb | = "creak1Sound"
    PUSH EBX                            ; 0054a6c0
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054a6c1
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054a6c6
    LEA EAX,[ESI + 0x3f0]               ; 0054a6c9
    PUSH EAX                            ; 0054a6cf
    PUSH 0x63ee2d                       ; 0054a6d0 | = "creak2Sound"
    PUSH EBX                            ; 0054a6d5
    CALL core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0 ; 0054a6d6
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addSound_FUN_0040e2d0(CActorPropertyList * this_ptr, char * property_name, void * data_ptr)
    ADD ESP,0xc                         ; 0054a6db
    PUSH 0x54a5e0                       ; 0054a6de
    PUSH 0x54a5a0                       ; 0054a6e3
    PUSH 0x63ee39                       ; 0054a6e8 | = "1/2 period"
    PUSH EBX                            ; 0054a6ed
    CALL core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670 ; 0054a6ee
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addAction_FUN_0040e670(CActorPropertyList * this_ptr, char * property_name, CActorPropertyDisplayFunc * display_callback, CActorPropertyActionFunc * action_callback)
    ADD ESP,0x10                        ; 0054a6f3
    MOV dword ptr [EAX + 0x54],0x0      ; 0054a6f6
    LEA EAX,[ESI + 0x428]               ; 0054a6fd
    PUSH EAX                            ; 0054a703
    PUSH 0x63ee44                       ; 0054a704 | = "Kill hero"
    PUSH EBX                            ; 0054a709
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054a70a
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054a70f
    LEA EAX,[ESI + 0x42c]               ; 0054a712
    PUSH EAX                            ; 0054a718
    PUSH 0x63ee4e                       ; 0054a719 | = "Kill enemies"
    PUSH EBX                            ; 0054a71e
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054a71f
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054a724
    PUSH 0x0                            ; 0054a727
    LEA EAX,[ESI + 0x430]               ; 0054a729
    PUSH EAX                            ; 0054a72f
    PUSH 0x63ee5b                       ; 0054a730 | = "Decay of exp(-1.0 * decay * decayTimer)"
    PUSH EBX                            ; 0054a735
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054a736
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054a73b
    PUSH 0x0                            ; 0054a73e
    LEA EAX,[ESI + 0x434]               ; 0054a740
    PUSH EAX                            ; 0054a746
    PUSH 0x63ee83                       ; 0054a747 | = "Decay timer (should be 0.0)"
    PUSH EBX                            ; 0054a74c
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0054a74d
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0054a752
    LEA EAX,[ESI + 0x438]               ; 0054a755
    PUSH EAX                            ; 0054a75b
    PUSH 0x63ee9f                       ; 0054a75c | = "groundType"
    PUSH EBX                            ; 0054a761
    CALL core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300 ; 0054a762
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054a767
    ADD ESI,0x43c                       ; 0054a76a
    PUSH ESI                            ; 0054a770
    PUSH 0x63eeaa                       ; 0054a771 | = "Half movement"
    PUSH EBX                            ; 0054a776
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0054a777
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0054a77c
    POP ESI                             ; 0054a77f
    POP EBX                             ; 0054a780
    RET                                 ; 0054a781

