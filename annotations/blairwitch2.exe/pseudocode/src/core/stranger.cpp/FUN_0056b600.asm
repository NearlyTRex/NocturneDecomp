; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_stranger_cpp_FUN_0056b600(int param_1)
;
;
; Referenced Globals:
;   undefined4 s_objectToPickUp_005ebba4+1
;   TerminatedCString s_doorToOpen_005ebbb4
;   TerminatedCString s_leverToPull_005ebbbf
;   TerminatedCString s_ladderToClimb_005ebbcb
;   TerminatedCString s_lhCarryObject_005ebbd9
;   TerminatedCString s_rhCarryObject_005ebbe7
;   TerminatedCString s_ladderToDescend_005ebbf5
;   TerminatedCString s_gunsDrawn_005ebc05
;   TerminatedCString s_weapon_005ebc0f
;   TerminatedCString s_actionPending_005ebc16
;   TerminatedCString s_layerActionIndex_005ebc24
;   TerminatedCString s_layerActionT_005ebc35
;   int g_CStrangerClassVersion = 0x9
;
; Called Functions:
;   core_actor.cpp_archiveActor_FUN_0040b9e0
;   core_actor.cpp_archiveFloat_FUN_0040b8e0
;   core_actor.cpp_archiveInteger_FUN_0040b960
;   core_hero.cpp_FUN_004ce590
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0056b600
        ;   Label: core_stranger.cpp_FUN_0056b600
    MOV EBX,dword ptr [ESP + 0x8]       ; 0056b601
    PUSH EBX                            ; 0056b605
    CALL core_hero.cpp_FUN_004ce590     ; 0056b606
        ;   XREF to: 004ce590 (UNCONDITIONAL_CALL)  ; undefined core_hero.cpp_FUN_004ce590()
    MOV EDX,dword ptr [0x0061e2e0]      ; 0056b60b | g_CStrangerClassVersion
    ADD ESP,0x4                         ; 0056b611
    CMP EDX,0x2                         ; 0056b614
    JL 0x0056b66e                       ; 0056b617
        ;   XREF to: 0056b66e (CONDITIONAL_JUMP)  ; LAB_0056b66e
    CMP EDX,0x4                         ; 0056b619
    JG 0x0056b66e                       ; 0056b61c
        ;   XREF to: 0056b66e (CONDITIONAL_JUMP)  ; LAB_0056b66e
    PUSH 0x5ebba5                       ; 0056b61e | s_objectToPickUp_005ebba4+1
    LEA EAX,[EBX + 0x25608]             ; 0056b623
    PUSH EAX                            ; 0056b629
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b62a
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b62f
    PUSH 0x5ebbb4                       ; 0056b632 | = "doorToOpen"
    LEA EAX,[EBX + 0x25604]             ; 0056b637
    PUSH EAX                            ; 0056b63d
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b63e
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b643
    PUSH 0x5ebbbf                       ; 0056b646 | = "leverToPull"
    LEA EAX,[EBX + 0x25610]             ; 0056b64b
    PUSH EAX                            ; 0056b651
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b652
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b657
    PUSH 0x5ebbcb                       ; 0056b65a | = "ladderToClimb"
    LEA EAX,[EBX + 0x25614]             ; 0056b65f
    PUSH EAX                            ; 0056b665
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b666
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b66b
    CMP dword ptr [0x0061e2e0],0x2      ; 0056b66e | g_CStrangerClassVersion
        ;   Label: LAB_0056b66e
    JNZ 0x0056b69f                      ; 0056b675
        ;   XREF to: 0056b69f (CONDITIONAL_JUMP)  ; LAB_0056b69f
    PUSH 0x5ebbd9                       ; 0056b677 | = "lhCarryObject"
    LEA EAX,[EBX + 0x2620]              ; 0056b67c
    PUSH EAX                            ; 0056b682
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b683
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b688
    PUSH 0x5ebbe7                       ; 0056b68b | = "rhCarryObject"
    LEA EAX,[EBX + 0x2698]              ; 0056b690
    PUSH EAX                            ; 0056b696
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b697
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b69c
    CMP dword ptr [0x0061e2e0],0x4      ; 0056b69f | g_CStrangerClassVersion
        ;   Label: LAB_0056b69f
    JL 0x0056b6bc                       ; 0056b6a6
        ;   XREF to: 0056b6bc (CONDITIONAL_JUMP)  ; LAB_0056b6bc
    PUSH 0x5ebbf5                       ; 0056b6a8 | = "ladderToDescend"
    LEA EAX,[EBX + 0x25694]             ; 0056b6ad
    PUSH EAX                            ; 0056b6b3
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b6b4
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b6b9
    CMP dword ptr [0x0061e2e0],0x6      ; 0056b6bc | g_CStrangerClassVersion
        ;   Label: LAB_0056b6bc
    JL 0x0056b6d9                       ; 0056b6c3
        ;   XREF to: 0056b6d9 (CONDITIONAL_JUMP)  ; LAB_0056b6d9
    PUSH 0x5ebc05                       ; 0056b6c5 | = "gunsDrawn"
    LEA EAX,[EBX + 0x25640]             ; 0056b6ca
    PUSH EAX                            ; 0056b6d0
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0056b6d1
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056b6d6
    CMP dword ptr [0x0061e2e0],0x7      ; 0056b6d9 | g_CStrangerClassVersion
        ;   Label: LAB_0056b6d9
    JL 0x0056b6f6                       ; 0056b6e0
        ;   XREF to: 0056b6f6 (CONDITIONAL_JUMP)  ; LAB_0056b6f6
    PUSH 0x5ebc0f                       ; 0056b6e2 | = "weapon"
    LEA EAX,[EBX + 0x25698]             ; 0056b6e7
    PUSH EAX                            ; 0056b6ed
    CALL core_actor.cpp_archiveActor_FUN_0040b9e0 ; 0056b6ee
        ;   XREF to: 0040b9e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveActor_FUN_0040b9e0()
    ADD ESP,0x8                         ; 0056b6f3
    CMP dword ptr [0x0061e2e0],0x8      ; 0056b6f6 | g_CStrangerClassVersion
        ;   Label: LAB_0056b6f6
    JL 0x0056b713                       ; 0056b6fd
        ;   XREF to: 0056b713 (CONDITIONAL_JUMP)  ; LAB_0056b713
    PUSH 0x5ebc16                       ; 0056b6ff | = "actionPending"
    LEA EAX,[EBX + 0x256a4]             ; 0056b704
    PUSH EAX                            ; 0056b70a
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0056b70b
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056b710
    CMP dword ptr [0x0061e2e0],0x9      ; 0056b713 | g_CStrangerClassVersion
        ;   Label: LAB_0056b713
    JGE 0x0056b71e                      ; 0056b71a
        ;   XREF to: 0056b71e (CONDITIONAL_JUMP)  ; LAB_0056b71e
    POP EBX                             ; 0056b71c
    RET                                 ; 0056b71d
    PUSH 0x5ebc24                       ; 0056b71e | = "layerActionIndex"
        ;   Label: LAB_0056b71e
    LEA EAX,[EBX + 0x2d04]              ; 0056b723
    PUSH EAX                            ; 0056b729
    CALL core_actor.cpp_archiveInteger_FUN_0040b960 ; 0056b72a
        ;   XREF to: 0040b960 (UNCONDITIONAL_CALL)  ; void core_actor.cpp_archiveInteger_FUN_0040b960(int * int_ptr, char * property_name)
    ADD ESP,0x8                         ; 0056b72f
    PUSH 0x5ebc35                       ; 0056b732 | = "layerActionT"
    ADD EBX,0x2d08                      ; 0056b737
    PUSH EBX                            ; 0056b73d
    CALL core_actor.cpp_archiveFloat_FUN_0040b8e0 ; 0056b73e
        ;   XREF to: 0040b8e0 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_archiveFloat_FUN_0040b8e0()
    ADD ESP,0x8                         ; 0056b743
    POP EBX                             ; 0056b746
    RET                                 ; 0056b747

