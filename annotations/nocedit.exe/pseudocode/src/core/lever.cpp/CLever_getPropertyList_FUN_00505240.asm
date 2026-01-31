; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_lever_cpp_CLever_getPropertyList_FUN_00505240 (CLever *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CLever *         Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_Model_file_kfm_00631188
;   TerminatedCString s_Lever_type_0063119a
;   TerminatedCString s_Lever_state_006311a5
;   TerminatedCString s_On_event_006311b1
;   TerminatedCString s_Off_event_006311ba
;   TerminatedCString s_Sound_006311c4
;   TerminatedCString s_Momentary_event_006311ca
;   TerminatedCString s_CLever_006311da
;   TerminatedCString s_Linked_lever_006311e1
;   TerminatedCString s_End_vertex_index_006311ee
;   TerminatedCString s_Rule_006311ff
;   TerminatedCString s_Open_from_side_0063121f
;   TerminatedCString s_Enable_collision_0063122e
;   void* PTR_s_Both_0067cf9c = 00631204
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e3b0
;   core_actor.cpp_CActorPropertyList_FUN_0040e480
;   core_actor.cpp_CActorPropertyList_FUN_0040e5a0
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CActorPropertyList_FUN_0040e670
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00505240
        ;   Label: core_lever.cpp_CLever_getPropertyList_FUN_00505240
    PUSH ESI                            ; 00505241
    MOV ESI,dword ptr [ESP + 0xc]       ; 00505242
    MOV EBX,dword ptr [ESP + 0x10]      ; 00505246
    PUSH EBX                            ; 0050524a
    PUSH ESI                            ; 0050524b
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0050524c
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 00505251
    PUSH 0x0                            ; 00505254
    LEA EAX,[ESI + 0x158]               ; 00505256
    PUSH EAX                            ; 0050525c
    PUSH 0x631188                       ; 0050525d | = "Model file (.kfm)"
    PUSH EBX                            ; 00505262
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e3b0 ; 00505263
        ;   XREF to: 0040e3b0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e3b0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00505268
    PUSH 0x505160                       ; 0050526b
    PUSH 0x505100                       ; 00505270
    PUSH 0x63119a                       ; 00505275 | = "Lever type"
    PUSH EBX                            ; 0050527a
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 0050527b
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00505280
    PUSH 0x505210                       ; 00505283
    PUSH 0x5051a0                       ; 00505288
    PUSH 0x6311a5                       ; 0050528d | = "Lever state"
    PUSH EBX                            ; 00505292
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e670 ; 00505293
        ;   XREF to: 0040e670 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e670(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00505298
    LEA EAX,[ESI + 0x2e0]               ; 0050529b
    PUSH EAX                            ; 005052a1
    PUSH 0x6311b1                       ; 005052a2 | = "On event"
    PUSH EBX                            ; 005052a7
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 005052a8
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005052ad
    LEA EAX,[ESI + 0x344]               ; 005052b0
    PUSH EAX                            ; 005052b6
    PUSH 0x6311ba                       ; 005052b7 | = "Off event"
    PUSH EBX                            ; 005052bc
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 005052bd
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005052c2
    LEA EAX,[ESI + 0x3a8]               ; 005052c5
    PUSH EAX                            ; 005052cb
    PUSH 0x6311c4                       ; 005052cc | = "Sound"
    PUSH EBX                            ; 005052d1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 005052d2
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005052d7
    LEA EAX,[ESI + 0x40c]               ; 005052da
    PUSH EAX                            ; 005052e0
    PUSH 0x6311ca                       ; 005052e1 | = "Momentary event"
    PUSH EBX                            ; 005052e6
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 005052e7
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 005052ec
    PUSH 0x0                            ; 005052ef
    PUSH 0x6311da                       ; 005052f1 | = "CLever"
    PUSH 0x1                            ; 005052f6
    LEA EAX,[ESI + 0x410]               ; 005052f8
    PUSH EAX                            ; 005052fe
    PUSH 0x6311e1                       ; 005052ff | = "Linked lever"
    PUSH EBX                            ; 00505304
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 00505305
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 0050530a
    PUSH 0x0                            ; 0050530d
    LEA EAX,[ESI + 0x414]               ; 0050530f
    PUSH EAX                            ; 00505315
    PUSH 0x6311ee                       ; 00505316 | = "End vertex index"
    PUSH EBX                            ; 0050531b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 0050531c
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00505321
    PUSH -0x1                           ; 00505324
    LEA EAX,[ESI + 0x420]               ; 00505326
    PUSH EAX                            ; 0050532c
    PUSH 0x6311ff                       ; 0050532d | = "Rule"
    PUSH EBX                            ; 00505332
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e5a0 ; 00505333
        ;   XREF to: 0040e5a0 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e5a0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 00505338
    LEA EAX,[ESI + 0x80c]               ; 0050533b
    PUSH EAX                            ; 00505341
    PUSH 0x67cf9c                       ; 00505342 | PTR_s_Both_0067cf9c
    PUSH 0x3                            ; 00505347
    PUSH 0x63121f                       ; 00505349 | = "Open from side"
    PUSH EBX                            ; 0050534e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 0050534f
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 00505354
    ADD ESI,0x810                       ; 00505357
    PUSH ESI                            ; 0050535d
    PUSH 0x63122e                       ; 0050535e | = "Enable collision"
    PUSH EBX                            ; 00505363
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 00505364
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 00505369
    POP ESI                             ; 0050536c
    POP EBX                             ; 0050536d
    RET                                 ; 0050536e

