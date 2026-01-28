; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_drip_cpp_FUN_0048e930(void)
;
;
; Referenced Globals:
;   TerminatedCString s_Type_006222d5
;   TerminatedCString s_Model_file_kfm_006222da
;   TerminatedCString s_Auto_drop_006222ec
;   TerminatedCString s_Auto_drop_min_time_006222f6
;   TerminatedCString s_Auto_drop_max_time_00622309
;   TerminatedCString s_Drip_radius_0062231c
;   TerminatedCString s_Damage_00622328
;   TerminatedCString s_Hit_sound_0062232f
;   TerminatedCString s_No_rocks_on_hitting_grou_00622339
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048e930
        ;   Label: core_drip.cpp_FUN_0048e930
    PUSH ESI                            ; 0048e931
    MOV ESI,dword ptr [ESP + 0xc]       ; 0048e932
    MOV EBX,dword ptr [ESP + 0x10]      ; 0048e936
    PUSH EBX                            ; 0048e93a
    PUSH ESI                            ; 0048e93b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0048e93c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0048e941
    PUSH 0x48e8d0                       ; 0048e944
    PUSH 0x48e830                       ; 0048e949
    PUSH 0x6222d5                       ; 0048e94e | = "Type"
    PUSH EBX                            ; 0048e953
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 0048e954
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [ESI + 0x2d4]     ; 0048e959
    ADD ESP,0x10                        ; 0048e95f
    CMP EDX,0x2                         ; 0048e962
    JZ 0x0048ea09                       ; 0048e965
        ;   XREF to: 0048ea09 (CONDITIONAL_JUMP)  ; LAB_0048ea09
    LEA EAX,[ESI + 0x2d8]               ; 0048e96b
        ;   Label: LAB_0048e96b
    PUSH EAX                            ; 0048e971
    PUSH 0x6222ec                       ; 0048e972 | = "Auto drop"
    PUSH EBX                            ; 0048e977
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0048e978
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 0048e97d
    PUSH 0x0                            ; 0048e980
    LEA EAX,[ESI + 0x2e0]               ; 0048e982
    PUSH EAX                            ; 0048e988
    PUSH 0x6222f6                       ; 0048e989 | = "Auto drop min time"
    PUSH EBX                            ; 0048e98e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0048e98f
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0048e994
    PUSH 0x0                            ; 0048e997
    LEA EAX,[ESI + 0x2e4]               ; 0048e999
    PUSH EAX                            ; 0048e99f
    PUSH 0x622309                       ; 0048e9a0 | = "Auto drop max time"
    PUSH EBX                            ; 0048e9a5
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0048e9a6
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0048e9ab
    PUSH 0x0                            ; 0048e9ae
    LEA EAX,[ESI + 0x2e8]               ; 0048e9b0
    PUSH EAX                            ; 0048e9b6
    PUSH 0x62231c                       ; 0048e9b7 | = "Drip radius"
    PUSH EBX                            ; 0048e9bc
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0048e9bd
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0048e9c2
    PUSH 0x0                            ; 0048e9c5
    LEA EAX,[ESI + 0x310]               ; 0048e9c7
    PUSH EAX                            ; 0048e9cd
    PUSH 0x622328                       ; 0048e9ce | = "Damage"
    PUSH EBX                            ; 0048e9d3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0048e9d4
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0048e9d9
    LEA EAX,[ESI + 0x314]               ; 0048e9dc
    PUSH EAX                            ; 0048e9e2
    PUSH 0x62232f                       ; 0048e9e3 | = "Hit sound"
    PUSH EBX                            ; 0048e9e8
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 0048e9e9
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 0048e9ee
    ADD ESI,0x334                       ; 0048e9f1
    PUSH ESI                            ; 0048e9f7
    PUSH 0x622339                       ; 0048e9f8 | = "No rocks on hitting ground"
    PUSH EBX                            ; 0048e9fd
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 0048e9fe
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 0048ea03
    POP ESI                             ; 0048ea06
    POP EBX                             ; 0048ea07
    RET                                 ; 0048ea08
    PUSH 0x0                            ; 0048ea09
        ;   Label: LAB_0048ea09
    LEA EAX,[ESI + 0x158]               ; 0048ea0b
    PUSH EAX                            ; 0048ea11
    PUSH 0x6222da                       ; 0048ea12 | = "Model file (.kfm)"
    PUSH EBX                            ; 0048ea17
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 0048ea18
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0048ea1d
    JMP 0x0048e96b                      ; 0048ea20
        ;   XREF to: 0048e96b (UNCONDITIONAL_JUMP)  ; LAB_0048e96b

