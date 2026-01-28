; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_backgnd_cpp_CBackgroundActor_FUN_00412a40(CBackgroundActor *this_ptr)
;
; Parameters:
; CBackgroundActor * Stack[0x4]:4   this_ptr
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00614e81
;   TerminatedCString s_Collision_enabled_00614e93
;   TerminatedCString s_ground_type_00614ea5
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e300
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00412a40
        ;   Label: core_backgnd.cpp_CBackgroundActor_FUN_00412a40
    PUSH ESI                            ; 00412a41
    MOV EBX,dword ptr [ESP + 0xc]       ; 00412a42
    MOV ESI,dword ptr [ESP + 0x10]      ; 00412a46
    PUSH ESI                            ; 00412a4a
    PUSH EBX                            ; 00412a4b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 00412a4c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00412a51
    PUSH 0x0                            ; 00412a54
    LEA EAX,[EBX + 0x158]               ; 00412a56
    PUSH EAX                            ; 00412a5c
    PUSH 0x614e81                       ; 00412a5d | = "Model file (.kfm)"
    PUSH ESI                            ; 00412a62
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00412a63
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00412a68
    LEA EAX,[EBX + 0x2d4]               ; 00412a6b
    PUSH EAX                            ; 00412a71
    PUSH 0x614e93                       ; 00412a72 | = "Collision enabled"
    PUSH ESI                            ; 00412a77
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00412a78
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x2d4]     ; 00412a7d
    ADD ESP,0xc                         ; 00412a83
    TEST EDX,EDX                        ; 00412a86
    JNZ 0x00412a8d                      ; 00412a88
        ;   XREF to: 00412a8d (CONDITIONAL_JUMP)  ; LAB_00412a8d
    POP ESI                             ; 00412a8a
    POP EBX                             ; 00412a8b
    RET                                 ; 00412a8c
    ADD EBX,0x2d8                       ; 00412a8d
        ;   Label: LAB_00412a8d
    PUSH EBX                            ; 00412a93
    PUSH 0x614ea5                       ; 00412a94 | = "ground type"
    PUSH ESI                            ; 00412a99
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e300 ; 00412a9a
        ;   XREF to: 0040e300 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e300(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00412a9f
    POP ESI                             ; 00412aa2
    POP EBX                             ; 00412aa3
    RET                                 ; 00412aa4

