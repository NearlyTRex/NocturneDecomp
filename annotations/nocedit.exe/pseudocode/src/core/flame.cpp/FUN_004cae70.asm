; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_flame.cpp_FUN_004cae70()
;
;
; Referenced Globals:
;   TerminatedCString s_Flame_type_0062a1f7
;   TerminatedCString s_Globe_scalar_0062a202
;   TerminatedCString s_On_event_0062a20f
;   TerminatedCString s_Off_event_0062a218
;   TerminatedCString s_Flame_state_0062a222
;   TerminatedCString s_Intensity_0062a22e
;   TerminatedCString s_Randomness_0062a238
;   TerminatedCString s_Catch_hero_on_fire_0062a243
;   TerminatedCString s_Catch_enemies_on_fire_0062a256
;   void* PTR_s_Torch_0067b0e0 = 0062a1d6
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cae70
        ;   Label: core_flame.cpp_FUN_004cae70
    PUSH ESI                            ; 004cae71
    MOV EBX,dword ptr [ESP + 0xc]       ; 004cae72
    MOV ESI,dword ptr [ESP + 0x10]      ; 004cae76
    PUSH ESI                            ; 004cae7a
    PUSH EBX                            ; 004cae7b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 004cae7c | void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)
    ADD ESP,0x8                         ; 004cae81
    LEA EAX,[EBX + 0x1a8]               ; 004cae84
    PUSH EAX                            ; 004cae8a
    PUSH 0x67b0e0                       ; 004cae8b | void * PTR_s_Torch_0067b0e0
    PUSH 0x4                            ; 004cae90
    PUSH 0x62a1f7                       ; 004cae92 | = "Flame type" | s_Flame_type_0062a1f7 = Flame type
    PUSH ESI                            ; 004cae97
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 004cae98 | void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)
    ADD ESP,0x14                        ; 004cae9d
    PUSH 0x0                            ; 004caea0
    LEA EAX,[EBX + 0x1ac]               ; 004caea2
    PUSH EAX                            ; 004caea8
    PUSH 0x62a202                       ; 004caea9 | = "Globe scalar" | s_Globe_scalar_0062a202 = Globe scalar
    PUSH ESI                            ; 004caeae
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004caeaf | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004caeb4
    LEA EAX,[EBX + 0x1b8]               ; 004caeb7
    PUSH EAX                            ; 004caebd
    PUSH 0x62a20f                       ; 004caebe | = "On event" | s_On_event_0062a20f = On event
    PUSH ESI                            ; 004caec3
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004caec4 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004caec9
    LEA EAX,[EBX + 0x21c]               ; 004caecc
    PUSH EAX                            ; 004caed2
    PUSH 0x62a218                       ; 004caed3 | = "Off event" | s_Off_event_0062a218 = Off event
    PUSH ESI                            ; 004caed8
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004caed9 | void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004caede
    LEA EAX,[EBX + 0x1b4]               ; 004caee1
    PUSH EAX                            ; 004caee7
    PUSH 0x62a222                       ; 004caee8 | = "Flame state" | s_Flame_state_0062a222 = Flame state
    PUSH ESI                            ; 004caeed
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004caeee | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004caef3
    PUSH 0x0                            ; 004caef6
    LEA EAX,[EBX + 0x280]               ; 004caef8
    PUSH EAX                            ; 004caefe
    PUSH 0x62a22e                       ; 004caeff | = "Intensity" | s_Intensity_0062a22e = Intensity
    PUSH ESI                            ; 004caf04
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004caf05 | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004caf0a
    PUSH 0x0                            ; 004caf0d
    LEA EAX,[EBX + 0x284]               ; 004caf0f
    PUSH EAX                            ; 004caf15
    PUSH 0x62a238                       ; 004caf16 | = "Randomness" | s_Randomness_0062a238 = Randomness
    PUSH ESI                            ; 004caf1b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004caf1c | void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)
    ADD ESP,0x10                        ; 004caf21
    LEA EAX,[EBX + 0x288]               ; 004caf24
    PUSH EAX                            ; 004caf2a
    PUSH 0x62a243                       ; 004caf2b | = "Catch hero on fire" | s_Catch_hero_on_fire_0062a243 = Catch hero on fire
    PUSH ESI                            ; 004caf30
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004caf31 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004caf36
    ADD EBX,0x28c                       ; 004caf39
    PUSH EBX                            ; 004caf3f
    PUSH 0x62a256                       ; 004caf40 | = "Catch enemies on fire" | s_Catch_enemies_on_fire_0062a256 = Catch enemies on fire
    PUSH ESI                            ; 004caf45
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004caf46 | void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)
    ADD ESP,0xc                         ; 004caf4b
    POP ESI                             ; 004caf4e
    POP EBX                             ; 004caf4f
    RET                                 ; 004caf50

