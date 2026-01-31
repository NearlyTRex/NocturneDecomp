; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_hostage_cpp_CHostage_getPropertyList_FUN_004f69c0 (CHostage *this_ptr,CActorPropertyList *property_list)
;
; Parameters:
; CHostage *       Stack[0x4]:4   this_ptr
; CActorPropertyList * Stack[0x8]:4   property_list
;
; Referenced Globals:
;   TerminatedCString s_CWayPoint_0062f22d
;   TerminatedCString s_goalWayPoint_0062f237
;   TerminatedCString s_CDemonActor_0062f244
;   TerminatedCString s_sitDownWayPoint_0062f250
;   TerminatedCString s_rescueDistance_0062f260
;   TerminatedCString s_rescueCondition_0062f26f
;   TerminatedCString s_heroFoundMeEvent_0062f27f
;   TerminatedCString s_heroLeftMeEvent_0062f290
;   TerminatedCString s_heroCameBackEvent_0062f2a0
;   TerminatedCString s_getEatenEvent_0062f2b2
;   TerminatedCString s_goingToSitDownEvent_0062f2c0
;   TerminatedCString s_sitDownEvent_0062f2d4
;   TerminatedCString s_rescueEventName_persiste_0062f2e1
;   TerminatedCString s_noShadowsWhenSaved_0062f2fe
;   TerminatedCString s_descriptiveName_0062f311
;   ... and 2 more
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e2d0
;   core_actor.cpp_CActorPropertyList_FUN_0040e330
;   core_actor.cpp_CActorPropertyList_FUN_0040e350
;   core_actor.cpp_CActorPropertyList_FUN_0040e460
;   core_actor.cpp_CActorPropertyList_FUN_0040e480
;   core_npc.cpp_CNPC_getPropertyList_FUN_00544e40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f69c0
        ;   Label: core_hostage.cpp_CHostage_getPropertyList_FUN_004f69c0
    PUSH ESI                            ; 004f69c1
    MOV EBX,dword ptr [ESP + 0xc]       ; 004f69c2
    MOV ESI,dword ptr [ESP + 0x10]      ; 004f69c6
    PUSH ESI                            ; 004f69ca
    PUSH EBX                            ; 004f69cb
    CALL core_npc.cpp_CNPC_getPropertyList_FUN_00544e40 ; 004f69cc
        ;   XREF to: 00544e40 (UNCONDITIONAL_CALL)  ; void core_npc.cpp_CNPC_getPropertyList_FUN_00544e40(CNPC * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 004f69d1
    PUSH 0x0                            ; 004f69d4
    PUSH 0x62f22d                       ; 004f69d6 | = "CWayPoint"
    PUSH 0x1                            ; 004f69db
    LEA EAX,[EBX + 0x1fac0]             ; 004f69dd
    PUSH EAX                            ; 004f69e3
    PUSH 0x62f237                       ; 004f69e4 | = "goalWayPoint"
    PUSH ESI                            ; 004f69e9
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 004f69ea
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004f69ef
    PUSH 0x0                            ; 004f69f2
    PUSH 0x62f244                       ; 004f69f4 | = "CDemonActor"
    PUSH 0x1                            ; 004f69f9
    LEA EAX,[EBX + 0x1fac4]             ; 004f69fb
    PUSH EAX                            ; 004f6a01
    PUSH 0x62f250                       ; 004f6a02 | = "sitDownWayPoint"
    PUSH ESI                            ; 004f6a07
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e350 ; 004f6a08
        ;   XREF to: 0040e350 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_CActorPropertyList_FUN_0040e350(CActorPropertyList * this_ptr)
    ADD ESP,0x18                        ; 004f6a0d
    PUSH 0x0                            ; 004f6a10
    LEA EAX,[EBX + 0x1f708]             ; 004f6a12
    PUSH EAX                            ; 004f6a18
    PUSH 0x62f260                       ; 004f6a19 | = "rescueDistance"
    PUSH ESI                            ; 004f6a1e
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 004f6a1f
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 004f6a24
    LEA EAX,[EBX + 0x1f70c]             ; 004f6a27
    PUSH EAX                            ; 004f6a2d
    PUSH 0x62f26f                       ; 004f6a2e | = "rescueCondition"
    PUSH ESI                            ; 004f6a33
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e460 ; 004f6a34
        ;   XREF to: 0040e460 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e460(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6a39
    LEA EAX,[EBX + 0x1f790]             ; 004f6a3c
    PUSH EAX                            ; 004f6a42
    PUSH 0x62f27f                       ; 004f6a43 | = "heroFoundMeEvent"
    PUSH ESI                            ; 004f6a48
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6a49
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6a4e
    LEA EAX,[EBX + 0x1f7f4]             ; 004f6a51
    PUSH EAX                            ; 004f6a57
    PUSH 0x62f290                       ; 004f6a58 | = "heroLeftMeEvent"
    PUSH ESI                            ; 004f6a5d
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6a5e
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6a63
    LEA EAX,[EBX + 0x1f858]             ; 004f6a66
    PUSH EAX                            ; 004f6a6c
    PUSH 0x62f2a0                       ; 004f6a6d | = "heroCameBackEvent"
    PUSH ESI                            ; 004f6a72
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6a73
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6a78
    LEA EAX,[EBX + 0x1f8bc]             ; 004f6a7b
    PUSH EAX                            ; 004f6a81
    PUSH 0x62f2b2                       ; 004f6a82 | = "getEatenEvent"
    PUSH ESI                            ; 004f6a87
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6a88
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6a8d
    LEA EAX,[EBX + 0x1f920]             ; 004f6a90
    PUSH EAX                            ; 004f6a96
    PUSH 0x62f2c0                       ; 004f6a97 | = "goingToSitDownEvent"
    PUSH ESI                            ; 004f6a9c
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6a9d
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6aa2
    LEA EAX,[EBX + 0x1f984]             ; 004f6aa5
    PUSH EAX                            ; 004f6aab
    PUSH 0x62f2d4                       ; 004f6aac | = "sitDownEvent"
    PUSH ESI                            ; 004f6ab1
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e480 ; 004f6ab2
        ;   XREF to: 0040e480 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e480(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6ab7
    PUSH 0x0                            ; 004f6aba
    PUSH 0x20                           ; 004f6abc
    LEA EAX,[EBX + 0x1f770]             ; 004f6abe
    PUSH EAX                            ; 004f6ac4
    PUSH 0x62f2e1                       ; 004f6ac5 | = "rescueEventName (persistent)"
    PUSH ESI                            ; 004f6aca
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 004f6acb
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 004f6ad0
    LEA EAX,[EBX + 0x1fadc]             ; 004f6ad3
    PUSH EAX                            ; 004f6ad9
    PUSH 0x62f2fe                       ; 004f6ada | = "noShadowsWhenSaved"
    PUSH ESI                            ; 004f6adf
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e330 ; 004f6ae0
        ;   XREF to: 0040e330 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e330(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6ae5
    PUSH 0x0                            ; 004f6ae8
    PUSH 0x64                           ; 004f6aea
    LEA EAX,[EBX + 0x2448]              ; 004f6aec
    PUSH EAX                            ; 004f6af2
    PUSH 0x62f311                       ; 004f6af3 | = "descriptiveName"
    PUSH ESI                            ; 004f6af8
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 004f6af9
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 004f6afe
    LEA EAX,[EBX + 0x1f9e8]             ; 004f6b01
    PUSH EAX                            ; 004f6b07
    PUSH 0x62f321                       ; 004f6b08 | = "Damage sound"
    PUSH ESI                            ; 004f6b0d
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 004f6b0e
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6b13
    ADD EBX,0x1fa4c                     ; 004f6b16
    PUSH EBX                            ; 004f6b1c
    PUSH 0x62f32e                       ; 004f6b1d | = "Die sound"
    PUSH ESI                            ; 004f6b22
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e2d0 ; 004f6b23
        ;   XREF to: 0040e2d0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e2d0(CActorPropertyList * this_ptr)
    ADD ESP,0xc                         ; 004f6b28
    POP ESI                             ; 004f6b2b
    POP EBX                             ; 004f6b2c
    RET                                 ; 004f6b2d

