; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_curtain_cpp_FUN_0044b610(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Texture_00619d27
;   TerminatedCString s_Opacity_00619d2f
;   TerminatedCString s_Weight_00619d37
;   TerminatedCString s_Dampen_00619d3e
;   TerminatedCString s_Spring_00619d45
;   TerminatedCString s_Friction_00619d4c
;   TerminatedCString s_Gravity_00619d55
;   TerminatedCString s_Simulated_00619d5d
;   TerminatedCString s_Hit_floor_00619d67
;   TerminatedCString s_cinchedTop_00619d71
;   TerminatedCString s_cinchedBottom_00619d7c
;   TerminatedCString s_cinchedLeft_00619d8a
;   TerminatedCString s_cinchedRight_00619d96
;   TerminatedCString s_falling_00619da3
;   TerminatedCString s_Let_go_condition_00619dab
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_addString_FUN_0040e290
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0044b610
        ;   Label: core_curtain.cpp_FUN_0044b610
    PUSH ESI                            ; 0044b611
    MOV EBX,dword ptr [ESP + 0xc]       ; 0044b612
    MOV ESI,dword ptr [ESP + 0x10]      ; 0044b616
    PUSH ESI                            ; 0044b61a
    PUSH EBX                            ; 0044b61b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0044b61c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0044b621
    PUSH 0x0                            ; 0044b624
    PUSH 0x10                           ; 0044b626
    LEA EAX,[EBX + 0x16c]               ; 0044b628
    PUSH EAX                            ; 0044b62e
    PUSH 0x619d27                       ; 0044b62f | = "Texture"
    PUSH ESI                            ; 0044b634
    CALL core_actor.cpp_CActorPropertyList_addString_FUN_0040e290 ; 0044b635
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addString_FUN_0040e290(CActorPropertyList * this_ptr, char * property_name, char * data_ptr, int max_length, ...)
    ADD ESP,0x14                        ; 0044b63a
    PUSH 0x0                            ; 0044b63d
    LEA EAX,[EBX + 0x17c]               ; 0044b63f
    PUSH EAX                            ; 0044b645
    PUSH 0x619d2f                       ; 0044b646 | = "Opacity"
    PUSH ESI                            ; 0044b64b
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 0044b64c
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b651
    PUSH 0x0                            ; 0044b654
    LEA EAX,[EBX + 0x65b14]             ; 0044b656
    PUSH EAX                            ; 0044b65c
    PUSH 0x619d37                       ; 0044b65d | = "Weight"
    PUSH ESI                            ; 0044b662
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b663
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b668
    PUSH 0x0                            ; 0044b66b
    LEA EAX,[EBX + 0x65b18]             ; 0044b66d
    PUSH EAX                            ; 0044b673
    PUSH 0x619d3e                       ; 0044b674 | = "Dampen"
    PUSH ESI                            ; 0044b679
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b67a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b67f
    PUSH 0x0                            ; 0044b682
    LEA EAX,[EBX + 0x65b1c]             ; 0044b684
    PUSH EAX                            ; 0044b68a
    PUSH 0x619d45                       ; 0044b68b | = "Spring"
    PUSH ESI                            ; 0044b690
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b691
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b696
    PUSH 0x0                            ; 0044b699
    LEA EAX,[EBX + 0x65b20]             ; 0044b69b
    PUSH EAX                            ; 0044b6a1
    PUSH 0x619d4c                       ; 0044b6a2 | = "Friction"
    PUSH ESI                            ; 0044b6a7
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b6a8
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b6ad
    PUSH 0x0                            ; 0044b6b0
    LEA EAX,[EBX + 0x65b24]             ; 0044b6b2
    PUSH EAX                            ; 0044b6b8
    PUSH 0x619d55                       ; 0044b6b9 | = "Gravity"
    PUSH ESI                            ; 0044b6be
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b6bf
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b6c4
    LEA EAX,[EBX + 0x1f8]               ; 0044b6c7
    PUSH EAX                            ; 0044b6cd
    PUSH 0x619d5d                       ; 0044b6ce | = "Simulated"
    PUSH ESI                            ; 0044b6d3
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b6d4
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b6d9
    LEA EAX,[EBX + 0x65b2c]             ; 0044b6dc
    PUSH EAX                            ; 0044b6e2
    PUSH 0x619d67                       ; 0044b6e3 | = "Hit floor"
    PUSH ESI                            ; 0044b6e8
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b6e9
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b6ee
    LEA EAX,[EBX + 0x180]               ; 0044b6f1
    PUSH EAX                            ; 0044b6f7
    PUSH 0x619d71                       ; 0044b6f8 | = "cinchedTop"
    PUSH ESI                            ; 0044b6fd
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b6fe
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b703
    LEA EAX,[EBX + 0x18c]               ; 0044b706
    PUSH EAX                            ; 0044b70c
    PUSH 0x619d7c                       ; 0044b70d | = "cinchedBottom"
    PUSH ESI                            ; 0044b712
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b713
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b718
    LEA EAX,[EBX + 0x184]               ; 0044b71b
    PUSH EAX                            ; 0044b721
    PUSH 0x619d8a                       ; 0044b722 | = "cinchedLeft"
    PUSH ESI                            ; 0044b727
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b728
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b72d
    LEA EAX,[EBX + 0x188]               ; 0044b730
    PUSH EAX                            ; 0044b736
    PUSH 0x619d96                       ; 0044b737 | = "cinchedRight"
    PUSH ESI                            ; 0044b73c
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b73d
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b742
    LEA EAX,[EBX + 0x190]               ; 0044b745
    PUSH EAX                            ; 0044b74b
    PUSH 0x619da3                       ; 0044b74c | = "falling"
    PUSH ESI                            ; 0044b751
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b752
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b757
    LEA EAX,[EBX + 0x194]               ; 0044b75a
    PUSH EAX                            ; 0044b760
    PUSH 0x619dab                       ; 0044b761 | = "Let go condition"
    PUSH ESI                            ; 0044b766
    CALL core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460 ; 0044b767
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addEvent_FUN_0040e460(CActorPropertyList * this_ptr, char * property_name, char * data_ptr)
    ADD ESP,0xc                         ; 0044b76c
    PUSH 0x0                            ; 0044b76f
    LEA EAX,[EBX + 0x1fc]               ; 0044b771
    PUSH EAX                            ; 0044b777
    PUSH 0x619dbc                       ; 0044b778 | = "Patch size"
    PUSH ESI                            ; 0044b77d
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 0044b77e
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 0044b783
    ADD EBX,0x200                       ; 0044b786
    PUSH EBX                            ; 0044b78c
    PUSH 0x619dc7                       ; 0044b78d | = "Block virtual director"
    PUSH ESI                            ; 0044b792
    CALL core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330 ; 0044b793
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addBool_FUN_0040e330(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 0044b798
    POP ESI                             ; 0044b79b
    POP EBX                             ; 0044b79c
    RET                                 ; 0044b79d

