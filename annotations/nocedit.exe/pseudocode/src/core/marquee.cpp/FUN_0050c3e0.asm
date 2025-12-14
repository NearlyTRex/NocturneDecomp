; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_marquee.cpp_FUN_0050c3e0()
;
;
; Referenced Globals:
;   TerminatedCString s_courseName_006359e7
;   TerminatedCString s_totalTime_006359f2
;   TerminatedCString s_Display_type_00635a09
;   TerminatedCString s_phase_00635a16
;   void* PTR_s_Ring_0067d13c = 006359fc
;
; Called Functions:
;   core_actor.cpp_CActorPropertyList_FUN_0040e160
;   core_actor.cpp_CActorPropertyList_FUN_0040e1e0
;   core_actor.cpp_CActorPropertyList_FUN_0040e290
;   core_actor.cpp_CActorPropertyList_FUN_0040e640
;   core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0050c3e0
        ;   Label: core_marquee.cpp_FUN_0050c3e0
    PUSH ESI                            ; 0050c3e1
    MOV EBX,dword ptr [ESP + 0xc]       ; 0050c3e2
    MOV ESI,dword ptr [ESP + 0x10]      ; 0050c3e6
    PUSH ESI                            ; 0050c3ea
    PUSH EBX                            ; 0050c3eb
    CALL core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290 ; 0050c3ec
        ;   XREF to: 0040d290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CDemonActor_getPropertyList_FUN_0040d290(CDemonActor * this_ptr, CActorPropertyList * property_list)
    ADD ESP,0x8                         ; 0050c3f1
    PUSH 0x0                            ; 0050c3f4
    PUSH 0x1f                           ; 0050c3f6
    LEA EAX,[EBX + 0x158]               ; 0050c3f8
    PUSH EAX                            ; 0050c3fe
    PUSH 0x6359e7                       ; 0050c3ff | = "courseName"
    PUSH ESI                            ; 0050c404
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e290 ; 0050c405
        ;   XREF to: 0040e290 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e290(CActorPropertyList * this_ptr)
    ADD ESP,0x14                        ; 0050c40a
    PUSH 0x0                            ; 0050c40d
    LEA EAX,[EBX + 0x178]               ; 0050c40f
    PUSH EAX                            ; 0050c415
    PUSH 0x6359f2                       ; 0050c416 | = "totalTime"
    PUSH ESI                            ; 0050c41b
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e160 ; 0050c41c
        ;   XREF to: 0040e160 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e160(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0050c421
    LEA EAX,[EBX + 0x1a0]               ; 0050c424
    PUSH EAX                            ; 0050c42a
    PUSH 0x67d13c                       ; 0050c42b | PTR_s_Ring_0067d13c
    PUSH 0x2                            ; 0050c430
    PUSH 0x635a09                       ; 0050c432 | = "Display type"
    PUSH ESI                            ; 0050c437
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e640 ; 0050c438
        ;   XREF to: 0040e640 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e640(CActorPropertyList * this_ptr)
    MOV EDX,dword ptr [EBX + 0x1a0]     ; 0050c43d
    ADD ESP,0x14                        ; 0050c443
    TEST EDX,EDX                        ; 0050c446
    JZ 0x0050c459                       ; 0050c448
        ;   XREF to: 0050c459 (CONDITIONAL_JUMP)  ; LAB_0050c459
    PUSH EBX                            ; 0050c44a
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050c44b
    CALL dword ptr [EAX]                ; 0050c451
    ADD ESP,0x4                         ; 0050c453
    POP ESI                             ; 0050c456
    POP EBX                             ; 0050c457
    RET                                 ; 0050c458
    PUSH EDX                            ; 0050c459
        ;   Label: LAB_0050c459
    LEA EAX,[EBX + 0x180]               ; 0050c45a
    PUSH EAX                            ; 0050c460
    PUSH 0x635a16                       ; 0050c461 | = "phase"
    PUSH ESI                            ; 0050c466
    CALL core_actor.cpp_CActorPropertyList_FUN_0040e1e0 ; 0050c467
        ;   XREF to: 0040e1e0 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_CActorPropertyList_FUN_0040e1e0(CActorPropertyList * this_ptr)
    ADD ESP,0x10                        ; 0050c46c
    PUSH EBX                            ; 0050c46f
    MOV EAX,dword ptr [EBX + 0x154]     ; 0050c470
    CALL dword ptr [EAX]                ; 0050c476
    ADD ESP,0x4                         ; 0050c478
    POP ESI                             ; 0050c47b
    POP EBX                             ; 0050c47c
    RET                                 ; 0050c47d

