; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_waypoint_cpp_CWayPoint_archive_FUN_005525e0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x14]:1  local_14
;
; Referenced Globals:
;   TerminatedCString s_nextWayPoint_005977af
;   TerminatedCString s_adjCount_005977bc
;   undefined4 DAT_005c1578
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_actor.cpp_archiveInteger_FUN_0040c900
;   core_trigger.cpp_CTrigger_archive_FUN_00548170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005525e0
        ;   Label: core_waypoint.cpp_CWayPoint_archive_FUN_005525e0
    PUSH ESI                            ; 005525e1
    PUSH EDI                            ; 005525e2
    PUSH EBP                            ; 005525e3
    SUB ESP,0x4                         ; 005525e4
    MOV EDI,dword ptr [ESP + 0x18]      ; 005525e7
    PUSH EDI                            ; 005525eb
    CALL core_trigger.cpp_CTrigger_archive_FUN_00548170 ; 005525ec
        ;   XREF to: 00548170 (UNCONDITIONAL_CALL)  ; undefined core_trigger.cpp_CTrigger_archive_FUN_00548170()
    MOV EDX,dword ptr [0x005c1578]      ; 005525f1 | DAT_005c1578
    ADD ESP,0x4                         ; 005525f7
    CMP EDX,0x2                         ; 005525fa
    JL 0x00552618                       ; 005525fd
        ;   XREF to: 00552618 (CONDITIONAL_JUMP)  ; LAB_00552618
    CMP dword ptr [0x005c1578],0x2      ; 005525ff | DAT_005c1578
        ;   Label: LAB_005525ff
    JGE 0x0055262c                      ; 00552606
        ;   XREF to: 0055262c (CONDITIONAL_JUMP)  ; LAB_0055262c
    LEA EAX,[EAX]                       ; 00552608
    MOV EDX,EDX                         ; 0055260e
    ADD ESP,0x4                         ; 00552610
        ;   Label: LAB_00552610
    POP EBP                             ; 00552613
    POP EDI                             ; 00552614
    POP ESI                             ; 00552615
    POP EBX                             ; 00552616
    RET                                 ; 00552617
    PUSH 0x5977af                       ; 00552618 | = "nextWayPoint"
        ;   Label: LAB_00552618
    LEA EBX,[ESP + 0x4]                 ; 0055261d
    PUSH EBX                            ; 00552621
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00552622
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00552627
    JMP 0x005525ff                      ; 0055262a
        ;   XREF to: 005525ff (UNCONDITIONAL_JUMP)  ; LAB_005525ff
    PUSH 0x5977bc                       ; 0055262c | = "adjCount"
        ;   Label: LAB_0055262c
    LEA EBX,[EDI + 0x368]               ; 00552631
    PUSH EBX                            ; 00552637
    XOR ESI,ESI                         ; 00552638
    CALL core_actor.cpp_archiveInteger_FUN_0040c900 ; 0055263a
        ;   XREF to: 0040c900 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveInteger_FUN_0040c900()
    MOV EBX,dword ptr [EDI + 0x368]     ; 0055263f
    ADD ESP,0x8                         ; 00552645
    TEST EBX,EBX                        ; 00552648
    JLE 0x00552610                      ; 0055264a
        ;   XREF to: 00552610 (CONDITIONAL_JUMP)  ; LAB_00552610
    LEA EBX,[EDI + 0x36c]               ; 0055264c
    PUSH 0x0                            ; 00552652
        ;   Label: LAB_00552652
    PUSH EBX                            ; 00552654
    INC ESI                             ; 00552655
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00552656
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 0055265b
    MOV EBP,dword ptr [EDI + 0x368]     ; 0055265e
    ADD EBX,0x8                         ; 00552664
    CMP ESI,EBP                         ; 00552667
    JL 0x00552652                       ; 00552669
        ;   XREF to: 00552652 (CONDITIONAL_JUMP)  ; LAB_00552652
    ADD ESP,0x4                         ; 0055266b
    POP EBP                             ; 0055266e
    POP EDI                             ; 0055266f
    POP ESI                             ; 00552670
    POP EBX                             ; 00552671
    RET                                 ; 00552672

