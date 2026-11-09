; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_inv_cpp_FUN_004fa540(undefined4 param_1,CDemonActor *param_2,int param_3)
;
;
; XREF[2]:
;   core_inv.cpp_FUN_004f8dc0 at 004f8e5c
;   core_inv.cpp_FUN_004fae10 at 004fb0d8
;
; Referenced Globals:
;   undefined4 DAT_005e6818
;   TerminatedCString s_CShotgun_005e681d
;   TerminatedCString s_CCrossbow_005e6826
;   TerminatedCString s_CTommyGun_005e6830
;   TerminatedCString s_CElephantGun_005e683a
;   TerminatedCString s_CRifle_005e6847
;   TerminatedCString s_CFlameThrower_005e684e
;   TerminatedCString s_CLightGun_005e685c
;   TerminatedCString s_CLightpis_005e6866
;   TerminatedCString s_CMelee_005e6870
;   TerminatedCString s_CDynamite_005e6877
;   TerminatedCString s_CFlashlight_005e6881
;
; Called Functions:
;   core_actor.cpp_FUN_0040c550
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004fa540
        ;   Label: core_inv.cpp_FUN_004fa540
    PUSH ESI                            ; 004fa541
    MOV EBX,dword ptr [ESP + 0x10]      ; 004fa542
    MOV ESI,dword ptr [ESP + 0x14]      ; 004fa546
    CMP ESI,0x5                         ; 004fa54a
    JZ 0x004fa578                       ; 004fa54d
        ;   XREF to: 004fa578 (CONDITIONAL_JUMP)  ; LAB_004fa578
    TEST ESI,ESI                        ; 004fa54f
    JZ 0x004fa580                       ; 004fa551
        ;   XREF to: 004fa580 (CONDITIONAL_JUMP)  ; LAB_004fa580
    CMP ESI,0x1                         ; 004fa553
        ;   Label: LAB_004fa553
    JZ 0x004fa59a                       ; 004fa556
        ;   XREF to: 004fa59a (CONDITIONAL_JUMP)  ; LAB_004fa59a
    CMP ESI,0x2                         ; 004fa558
    JZ 0x004fa611                       ; 004fa55b
        ;   XREF to: 004fa611 (CONDITIONAL_JUMP)  ; LAB_004fa611
    CMP ESI,0x3                         ; 004fa561
        ;   Label: LAB_004fa561
    JZ 0x004fa663                       ; 004fa564
        ;   XREF to: 004fa663 (CONDITIONAL_JUMP)  ; LAB_004fa663
    CMP ESI,0x4                         ; 004fa56a
        ;   Label: LAB_004fa56a
    JZ 0x004fa681                       ; 004fa56d
        ;   XREF to: 004fa681 (CONDITIONAL_JUMP)  ; LAB_004fa681
    XOR EAX,EAX                         ; 004fa573
        ;   Label: LAB_004fa573
    POP ESI                             ; 004fa575
        ;   Label: LAB_004fa575
    POP EBX                             ; 004fa576
    RET                                 ; 004fa577
    MOV EAX,0x1                         ; 004fa578
        ;   Label: LAB_004fa578
    POP ESI                             ; 004fa57d
    POP EBX                             ; 004fa57e
    RET                                 ; 004fa57f
    PUSH 0x5e6818                       ; 004fa580 | DAT_005e6818
        ;   Label: LAB_004fa580
    PUSH EBX                            ; 004fa585
    CALL core_actor.cpp_FUN_0040c550    ; 004fa586
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa58b
    TEST EAX,EAX                        ; 004fa58e
    JZ 0x004fa553                       ; 004fa590
        ;   XREF to: 004fa553 (CONDITIONAL_JUMP)  ; LAB_004fa553
    MOV EAX,0x1                         ; 004fa592
    POP ESI                             ; 004fa597
    POP EBX                             ; 004fa598
    RET                                 ; 004fa599
    PUSH 0x5e681d                       ; 004fa59a | = "CShotgun"
        ;   Label: LAB_004fa59a
    PUSH EBX                            ; 004fa59f
    CALL core_actor.cpp_FUN_0040c550    ; 004fa5a0
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa5a5
    TEST EAX,EAX                        ; 004fa5a8
    JZ 0x004fa5b1                       ; 004fa5aa
        ;   XREF to: 004fa5b1 (CONDITIONAL_JUMP)  ; LAB_004fa5b1
    MOV EAX,ESI                         ; 004fa5ac
    POP ESI                             ; 004fa5ae
    POP EBX                             ; 004fa5af
    RET                                 ; 004fa5b0
    PUSH 0x5e6826                       ; 004fa5b1 | = "CCrossbow"
        ;   Label: LAB_004fa5b1
    PUSH EBX                            ; 004fa5b6
    CALL core_actor.cpp_FUN_0040c550    ; 004fa5b7
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa5bc
    TEST EAX,EAX                        ; 004fa5bf
    JZ 0x004fa5c8                       ; 004fa5c1
        ;   XREF to: 004fa5c8 (CONDITIONAL_JUMP)  ; LAB_004fa5c8
    MOV EAX,ESI                         ; 004fa5c3
    POP ESI                             ; 004fa5c5
    POP EBX                             ; 004fa5c6
    RET                                 ; 004fa5c7
    PUSH 0x5e6830                       ; 004fa5c8 | = "CTommyGun"
        ;   Label: LAB_004fa5c8
    PUSH EBX                            ; 004fa5cd
    CALL core_actor.cpp_FUN_0040c550    ; 004fa5ce
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa5d3
    TEST EAX,EAX                        ; 004fa5d6
    JZ 0x004fa5df                       ; 004fa5d8
        ;   XREF to: 004fa5df (CONDITIONAL_JUMP)  ; LAB_004fa5df
    MOV EAX,ESI                         ; 004fa5da
    POP ESI                             ; 004fa5dc
    POP EBX                             ; 004fa5dd
    RET                                 ; 004fa5de
    PUSH 0x5e683a                       ; 004fa5df | = "CElephantGun"
        ;   Label: LAB_004fa5df
    PUSH EBX                            ; 004fa5e4
    CALL core_actor.cpp_FUN_0040c550    ; 004fa5e5
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa5ea
    TEST EAX,EAX                        ; 004fa5ed
    JZ 0x004fa5f6                       ; 004fa5ef
        ;   XREF to: 004fa5f6 (CONDITIONAL_JUMP)  ; LAB_004fa5f6
    MOV EAX,ESI                         ; 004fa5f1
    POP ESI                             ; 004fa5f3
    POP EBX                             ; 004fa5f4
    RET                                 ; 004fa5f5
    PUSH 0x5e6847                       ; 004fa5f6 | = "CRifle"
        ;   Label: LAB_004fa5f6
    PUSH EBX                            ; 004fa5fb
    CALL core_actor.cpp_FUN_0040c550    ; 004fa5fc
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa601
    TEST EAX,EAX                        ; 004fa604
    JZ 0x004fa575                       ; 004fa606
        ;   XREF to: 004fa575 (CONDITIONAL_JUMP)  ; LAB_004fa575
    MOV EAX,ESI                         ; 004fa60c
    POP ESI                             ; 004fa60e
    POP EBX                             ; 004fa60f
    RET                                 ; 004fa610
    PUSH 0x5e684e                       ; 004fa611 | = "CFlameThrower"
        ;   Label: LAB_004fa611
    PUSH EBX                            ; 004fa616
    CALL core_actor.cpp_FUN_0040c550    ; 004fa617
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa61c
    TEST EAX,EAX                        ; 004fa61f
    JZ 0x004fa62b                       ; 004fa621
        ;   XREF to: 004fa62b (CONDITIONAL_JUMP)  ; LAB_004fa62b
    MOV EAX,0x1                         ; 004fa623
    POP ESI                             ; 004fa628
    POP EBX                             ; 004fa629
    RET                                 ; 004fa62a
    PUSH 0x5e685c                       ; 004fa62b | = "CLightGun"
        ;   Label: LAB_004fa62b
    PUSH EBX                            ; 004fa630
    CALL core_actor.cpp_FUN_0040c550    ; 004fa631
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa636
    TEST EAX,EAX                        ; 004fa639
    JZ 0x004fa645                       ; 004fa63b
        ;   XREF to: 004fa645 (CONDITIONAL_JUMP)  ; LAB_004fa645
    MOV EAX,0x1                         ; 004fa63d
    POP ESI                             ; 004fa642
    POP EBX                             ; 004fa643
    RET                                 ; 004fa644
    PUSH 0x5e6866                       ; 004fa645 | = "CLightpis"
        ;   Label: LAB_004fa645
    PUSH EBX                            ; 004fa64a
    CALL core_actor.cpp_FUN_0040c550    ; 004fa64b
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa650
    TEST EAX,EAX                        ; 004fa653
    JZ 0x004fa561                       ; 004fa655
        ;   XREF to: 004fa561 (CONDITIONAL_JUMP)  ; LAB_004fa561
    MOV EAX,0x1                         ; 004fa65b
    POP ESI                             ; 004fa660
    POP EBX                             ; 004fa661
    RET                                 ; 004fa662
    PUSH 0x5e6870                       ; 004fa663 | = "CMelee"
        ;   Label: LAB_004fa663
    PUSH EBX                            ; 004fa668
    CALL core_actor.cpp_FUN_0040c550    ; 004fa669
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa66e
    TEST EAX,EAX                        ; 004fa671
    JZ 0x004fa56a                       ; 004fa673
        ;   XREF to: 004fa56a (CONDITIONAL_JUMP)  ; LAB_004fa56a
    MOV EAX,0x1                         ; 004fa679
    POP ESI                             ; 004fa67e
    POP EBX                             ; 004fa67f
    RET                                 ; 004fa680
    PUSH 0x5e6877                       ; 004fa681 | = "CDynamite"
        ;   Label: LAB_004fa681
    PUSH EBX                            ; 004fa686
    CALL core_actor.cpp_FUN_0040c550    ; 004fa687
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa68c
    TEST EAX,EAX                        ; 004fa68f
    JZ 0x004fa69b                       ; 004fa691
        ;   XREF to: 004fa69b (CONDITIONAL_JUMP)  ; LAB_004fa69b
    MOV EAX,0x1                         ; 004fa693
    POP ESI                             ; 004fa698
    POP EBX                             ; 004fa699
    RET                                 ; 004fa69a
    PUSH 0x5e6881                       ; 004fa69b | = "CFlashlight"
        ;   Label: LAB_004fa69b
    PUSH EBX                            ; 004fa6a0
    CALL core_actor.cpp_FUN_0040c550    ; 004fa6a1
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; int core_actor.cpp_FUN_0040c550(CDemonActor * actor_ptr, char * class_name)
    ADD ESP,0x8                         ; 004fa6a6
    TEST EAX,EAX                        ; 004fa6a9
    JZ 0x004fa573                       ; 004fa6ab
        ;   XREF to: 004fa573 (CONDITIONAL_JUMP)  ; LAB_004fa573
    MOV EAX,0x1                         ; 004fa6b1
    POP ESI                             ; 004fa6b6
    POP EBX                             ; 004fa6b7
    RET                                 ; 004fa6b8

