; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_grave.cpp_FUN_004ee9e0()
;
;
; Referenced Globals:
;   TerminatedCString s_Grave_model_KFM_0062e4e1
;   TerminatedCString s_Animation_FPS_0062e4f4
;   TerminatedCString s_Hide_on_first_frame_0062e502
;   TerminatedCString s_Start_condition_0062e516
;   TerminatedCString s_Start_sound_0062e526
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ee9e0
        ;   Label: core_grave.cpp_FUN_004ee9e0
    PUSH ESI                            ; 004ee9e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004ee9e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004ee9e6
    PUSH ESI                            ; 004ee9ea
    PUSH EBX                            ; 004ee9eb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004ee9ec
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004ee9f1
    PUSH 0x0                            ; 004ee9f4
    LEA EAX,[EBX + 0x158]               ; 004ee9f6
    PUSH EAX                            ; 004ee9fc
    PUSH 0x62e4e1                       ; 004ee9fd | = "Grave model (.KFM)"
    PUSH ESI                            ; 004eea02
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 004eea03
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004eea08
    PUSH 0x0                            ; 004eea0b
    PUSH 0x43480000                     ; 004eea0d
    LEA EAX,[EBX + 0x2d8]               ; 004eea12
    PUSH 0x0                            ; 004eea18
    PUSH EAX                            ; 004eea1a
    PUSH 0x62e4f4                       ; 004eea1b | = "Animation FPS"
    PUSH ESI                            ; 004eea20
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1a0 ; 004eea21
        ;   XREF to: 0040e1a0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1a0(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004eea26
    LEA EAX,[EBX + 0x2e4]               ; 004eea29
    PUSH EAX                            ; 004eea2f
    PUSH 0x62e502                       ; 004eea30 | = "Hide on first frame"
    PUSH ESI                            ; 004eea35
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004eea36
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004eea3b
    LEA EAX,[EBX + 0x2e8]               ; 004eea3e
    PUSH EAX                            ; 004eea44
    PUSH 0x62e516                       ; 004eea45 | = "Start condition"
    PUSH ESI                            ; 004eea4a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004eea4b
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004eea50
    ADD EBX,0x34c                       ; 004eea53
    PUSH EBX                            ; 004eea59
    PUSH 0x62e526                       ; 004eea5a | = "Start sound"
    PUSH ESI                            ; 004eea5f
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 004eea60
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004eea65
    POP ESI                             ; 004eea68
    POP EBX                             ; 004eea69
    RET                                 ; 004eea6a

