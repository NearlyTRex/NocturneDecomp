; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_gabriela_cpp_CGabriella_archive_FUN_00498c10(int param_1)
;
;
; Referenced Globals:
;   TerminatedCString s_objectToPickUp_005821aa
;   TerminatedCString s_doorToOpen_005821b9
;   TerminatedCString s_leverToPull_005821c4
;   TerminatedCString s_ladderToClimb_005821d0
;   TerminatedCString s_lhCarryObject_005821de
;   TerminatedCString s_rhCarryObject_005821ec
;   int INT_005b92a8 = 0x3
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040c980
;   core_hero.cpp_FUN_004b49a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00498c10
        ;   Label: core_gabriela.cpp_CGabriella_archive_FUN_00498c10
    MOV EBX,dword ptr [ESP + 0x8]       ; 00498c11
    PUSH EBX                            ; 00498c15
    CALL core_hero.cpp_FUN_004b49a0     ; 00498c16
        ;   XREF to: 004b49a0 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004b49a0()
    MOV EDX,dword ptr [0x005b92a8]      ; 00498c1b | INT_005b92a8
    ADD ESP,0x4                         ; 00498c21
    CMP EDX,0x2                         ; 00498c24
    JL 0x00498c7e                       ; 00498c27
        ;   XREF to: 00498c7e (CONDITIONAL_JUMP)  ; LAB_00498c7e
    CMP EDX,0x3                         ; 00498c29
    JG 0x00498c7e                       ; 00498c2c
        ;   XREF to: 00498c7e (CONDITIONAL_JUMP)  ; LAB_00498c7e
    PUSH 0x5821aa                       ; 00498c2e | = "objectToPickUp"
    LEA EAX,[EBX + 0x1fa08]             ; 00498c33
    PUSH EAX                            ; 00498c39
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498c3a
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498c3f
    PUSH 0x5821b9                       ; 00498c42 | = "doorToOpen"
    LEA EAX,[EBX + 0x1fa04]             ; 00498c47
    PUSH EAX                            ; 00498c4d
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498c4e
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498c53
    PUSH 0x5821c4                       ; 00498c56 | = "leverToPull"
    LEA EAX,[EBX + 0x1fa10]             ; 00498c5b
    PUSH EAX                            ; 00498c61
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498c62
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498c67
    PUSH 0x5821d0                       ; 00498c6a | = "ladderToClimb"
    LEA EAX,[EBX + 0x1fa14]             ; 00498c6f
    PUSH EAX                            ; 00498c75
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498c76
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498c7b
    CMP dword ptr [0x005b92a8],0x2      ; 00498c7e | INT_005b92a8
        ;   Label: LAB_00498c7e
    JZ 0x00498c89                       ; 00498c85
        ;   XREF to: 00498c89 (CONDITIONAL_JUMP)  ; LAB_00498c89
    POP EBX                             ; 00498c87
    RET                                 ; 00498c88
    PUSH 0x5821de                       ; 00498c89 | = "lhCarryObject"
        ;   Label: LAB_00498c89
    LEA EAX,[EBX + 0x24ac]              ; 00498c8e
    PUSH EAX                            ; 00498c94
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498c95
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498c9a
    PUSH 0x5821ec                       ; 00498c9d | = "rhCarryObject"
    ADD EBX,0x24f0                      ; 00498ca2
    PUSH EBX                            ; 00498ca8
    CALL core_actor.cpp_archiveActor_FUN_0040c980 ; 00498ca9
        ;   XREF to: 0040c980 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040c980()
    ADD ESP,0x8                         ; 00498cae
    POP EBX                             ; 00498cb1
    RET                                 ; 00498cb2

