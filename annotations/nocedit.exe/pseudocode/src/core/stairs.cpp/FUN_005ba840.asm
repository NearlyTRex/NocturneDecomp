; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_stairs_cpp_FUN_005ba840(void)
;
;
; Referenced Globals:
;   TerminatedCString s_stair_count_00653092
;   TerminatedCString s_rise_0065309e
;   TerminatedCString s_run_006530a3
;   TerminatedCString s_width_006530a7
;   TerminatedCString s_bevelY_006530ad
;   TerminatedCString s_bevelZ_006530b4
;   TerminatedCString s_ground_type_006530bb
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ba840
        ;   Label: core_stairs.cpp_FUN_005ba840
    PUSH ESI                            ; 005ba841
    MOV EBX,dword ptr [ESP + 0xc]       ; 005ba842
    MOV ESI,dword ptr [ESP + 0x10]      ; 005ba846
    PUSH ESI                            ; 005ba84a
    PUSH EBX                            ; 005ba84b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 005ba84c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 005ba851
    PUSH 0x0                            ; 005ba854
    LEA EAX,[EBX + 0x16c]               ; 005ba856
    PUSH EAX                            ; 005ba85c
    PUSH 0x653092                       ; 005ba85d | = "stair count"
    PUSH ESI                            ; 005ba862
    CALL core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0 ; 005ba863
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addInt_FUN_0040e1e0(CActorPropertyList * this_ptr, char * property_name, int * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba868
    PUSH 0x0                            ; 005ba86b
    LEA EAX,[EBX + 0x158]               ; 005ba86d
    PUSH EAX                            ; 005ba873
    PUSH 0x65309e                       ; 005ba874 | = "rise"
    PUSH ESI                            ; 005ba879
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005ba87a
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba87f
    PUSH 0x0                            ; 005ba882
    LEA EAX,[EBX + 0x15c]               ; 005ba884
    PUSH EAX                            ; 005ba88a
    PUSH 0x6530a3                       ; 005ba88b | = "run"
    PUSH ESI                            ; 005ba890
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005ba891
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba896
    PUSH 0x0                            ; 005ba899
    LEA EAX,[EBX + 0x160]               ; 005ba89b
    PUSH EAX                            ; 005ba8a1
    PUSH 0x6530a7                       ; 005ba8a2 | = "width"
    PUSH ESI                            ; 005ba8a7
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005ba8a8
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba8ad
    PUSH 0x0                            ; 005ba8b0
    LEA EAX,[EBX + 0x164]               ; 005ba8b2
    PUSH EAX                            ; 005ba8b8
    PUSH 0x6530ad                       ; 005ba8b9 | = "bevelY"
    PUSH ESI                            ; 005ba8be
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005ba8bf
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba8c4
    PUSH 0x0                            ; 005ba8c7
    LEA EAX,[EBX + 0x168]               ; 005ba8c9
    PUSH EAX                            ; 005ba8cf
    PUSH 0x6530b4                       ; 005ba8d0 | = "bevelZ"
    PUSH ESI                            ; 005ba8d5
    CALL core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160 ; 005ba8d6
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addFloat_FUN_0040e160(CActorPropertyList * this_ptr, char * property_name, float * data_ptr, CDemonActor_CActorPropertyValidatorFunc * callback)
    ADD ESP,0x10                        ; 005ba8db
    ADD EBX,0xa30                       ; 005ba8de
    PUSH EBX                            ; 005ba8e4
    PUSH 0x6530bb                       ; 005ba8e5 | = "ground type"
    PUSH ESI                            ; 005ba8ea
    CALL core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300 ; 005ba8eb
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; CActorProperty * core_actor.cpp_CActorPropertyList_addGroundType_FUN_0040e300(CActorPropertyList * this_ptr, char * property_name, int * data_ptr)
    ADD ESP,0xc                         ; 005ba8f0
    POP ESI                             ; 005ba8f3
    POP EBX                             ; 005ba8f4
    RET                                 ; 005ba8f5

