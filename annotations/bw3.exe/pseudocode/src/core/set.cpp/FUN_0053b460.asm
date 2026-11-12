; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_set_cpp_FUN_0053b460(int param_1)
;
;
; XREF[2]:
;   core_mission.cpp_CDemonMission_buildSetActorList_FUN_004f6bf0 at 004f6c42
;   core_mission.cpp_FUN_004f6f80 at 004f6fc6
;
; Referenced Globals:
;   undefined4 g_CBugsClassInfo.name_hash
;   undefined4 g_CCharacterClassInfo.name_hash
;   undefined4 g_CEnemyClassInfo.name_hash
;   undefined4 g_CTriggerClassInfo.name_hash
;   undefined4 g_CWayPointClassInfo.name_hash
;
; Called Functions:
;   core_actor.cpp_castToClassHash_FUN_0040c840
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053b460
        ;   Label: core_set.cpp_FUN_0053b460
    PUSH ESI                            ; 0053b461
    PUSH EDI                            ; 0053b462
    PUSH EBP                            ; 0053b463
    MOV EBX,dword ptr [ESP + 0x14]      ; 0053b464
    MOV dword ptr [EBX + 0x150fec],0x0  ; 0053b468
    MOV dword ptr [EBX + 0x152f30],0x0  ; 0053b472
    MOV dword ptr [EBX + 0x154e74],0x0  ; 0053b47c
    MOV dword ptr [EBX + 0x158cfc],0x0  ; 0053b486
    MOV EDX,dword ptr [EBX + 0x14d164]  ; 0053b490
    MOV dword ptr [EBX + 0x14f0a8],0x0  ; 0053b496
    XOR EDI,EDI                         ; 0053b4a0
    TEST EDX,EDX                        ; 0053b4a2
    JLE 0x0053b590                      ; 0053b4a4
        ;   XREF to: 0053b590 (CONDITIONAL_JUMP)  ; LAB_0053b590
    MOV EBP,EBX                         ; 0053b4aa
    MOV ESI,dword ptr [EBP + 0x14d168]  ; 0053b4ac
        ;   Label: LAB_0053b4ac
    CMP dword ptr [ESI + 0xfc],0x0      ; 0053b4b2
    JNZ 0x0053b4c4                      ; 0053b4b9
        ;   XREF to: 0053b4c4 (CONDITIONAL_JUMP)  ; LAB_0053b4c4
    CMP dword ptr [ESI + 0xf8],0x0      ; 0053b4bb
    JZ 0x0053b4d7                       ; 0053b4c2
        ;   XREF to: 0053b4d7 (CONDITIONAL_JUMP)  ; LAB_0053b4d7
    MOV EAX,dword ptr [EBX + 0x158cfc]  ; 0053b4c4
        ;   Label: LAB_0053b4c4
    MOV dword ptr [EBX + EAX*0x4 + 0x158d00],ESI ; 0053b4ca
    INC dword ptr [EBX + 0x158cfc]      ; 0053b4d1
    MOV EAX,[0x007e2cec]                ; 0053b4d7 | g_CCharacterClassInfo.name_hash
        ;   Label: LAB_0053b4d7
    PUSH EAX                            ; 0053b4dc
    PUSH ESI                            ; 0053b4dd
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053b4de
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 0053b4e3
    MOV dword ptr [EBX + EDX*0x4 + 0x14f0ac],EAX ; 0053b4e9
    MOV EAX,dword ptr [EBX + 0x14f0a8]  ; 0053b4f0
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x14f0ac] ; 0053b4f6
    ADD ESP,0x8                         ; 0053b4fd
    TEST EDX,EDX                        ; 0053b500
    JZ 0x0053b5de                       ; 0053b502
        ;   XREF to: 0053b5de (CONDITIONAL_JUMP)  ; LAB_0053b5de
    MOV EAX,[0x01c5bc48]                ; 0053b508 | g_CEnemyClassInfo.name_hash
    MOV EDX,dword ptr [EBX + 0x14f0a8]  ; 0053b50d
    PUSH EAX                            ; 0053b513
    INC EDX                             ; 0053b514
    PUSH ESI                            ; 0053b515
    MOV dword ptr [EBX + 0x14f0a8],EDX  ; 0053b516
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053b51c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x150fec]  ; 0053b521
    MOV dword ptr [EBX + EDX*0x4 + 0x150ff0],EAX ; 0053b527
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 0053b52e
    SHL EAX,0x2                         ; 0053b534
    ADD EAX,EBX                         ; 0053b537
    MOV ECX,dword ptr [EAX + 0x150ff0]  ; 0053b539
    ADD ESP,0x8                         ; 0053b53f
    TEST ECX,ECX                        ; 0053b542
    JZ 0x0053b57e                       ; 0053b544
        ;   XREF to: 0053b57e (CONDITIONAL_JUMP)  ; LAB_0053b57e
    PUSH ECX                            ; 0053b546
    MOV EDX,dword ptr [ECX + 0x154]     ; 0053b547
    CALL dword ptr [EDX + 0x10c]        ; 0053b54d
    ADD ESP,0x4                         ; 0053b553
    TEST EAX,EAX                        ; 0053b556
    JNZ 0x0053b578                      ; 0053b558
        ;   XREF to: 0053b578 (CONDITIONAL_JUMP)  ; LAB_0053b578
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 0053b55a
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x150ff0] ; 0053b560
    PUSH EAX                            ; 0053b567
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053b568
    CALL dword ptr [EDX + 0x70]         ; 0053b56e
    ADD ESP,0x4                         ; 0053b571
    TEST EAX,EAX                        ; 0053b574
    JZ 0x0053b595                       ; 0053b576
        ;   XREF to: 0053b595 (CONDITIONAL_JUMP)  ; LAB_0053b595
    INC dword ptr [EBX + 0x150fec]      ; 0053b578
        ;   Label: LAB_0053b578
    INC EDI                             ; 0053b57e
        ;   Label: LAB_0053b57e
    MOV ECX,dword ptr [EBX + 0x14d164]  ; 0053b57f
    ADD EBP,0x4                         ; 0053b585
    CMP EDI,ECX                         ; 0053b588
    JL 0x0053b4ac                       ; 0053b58a
        ;   XREF to: 0053b4ac (CONDITIONAL_JUMP)  ; LAB_0053b4ac
    POP EBP                             ; 0053b590
        ;   Label: LAB_0053b590
    POP EDI                             ; 0053b591
    POP ESI                             ; 0053b592
    POP EBX                             ; 0053b593
    RET                                 ; 0053b594
    MOV EAX,[0x007e2a14]                ; 0053b595 | g_CBugsClassInfo.name_hash
        ;   Label: LAB_0053b595
    PUSH EAX                            ; 0053b59a
    PUSH ESI                            ; 0053b59b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053b59c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053b5a1
    TEST EAX,EAX                        ; 0053b5a4
    JNZ 0x0053b578                      ; 0053b5a6
        ;   XREF to: 0053b578 (CONDITIONAL_JUMP)  ; LAB_0053b578
    MOV EAX,dword ptr [EBX + 0x150fec]  ; 0053b5a8
    MOV EAX,dword ptr [EBX + EAX*0x4 + 0x150ff0] ; 0053b5ae
    PUSH EAX                            ; 0053b5b5
    MOV EDX,dword ptr [EAX + 0x154]     ; 0053b5b6
    CALL dword ptr [EDX + 0xe0]         ; 0053b5bc
    ADD ESP,0x4                         ; 0053b5c2
    TEST EAX,EAX                        ; 0053b5c5
    JNZ 0x0053b578                      ; 0053b5c7
        ;   XREF to: 0053b578 (CONDITIONAL_JUMP)  ; LAB_0053b578
    MOV EAX,dword ptr [EBX + 0x152f30]  ; 0053b5c9
    MOV dword ptr [EBX + EAX*0x4 + 0x152f34],ESI ; 0053b5cf
    INC dword ptr [EBX + 0x152f30]      ; 0053b5d6
    JMP 0x0053b578                      ; 0053b5dc
        ;   XREF to: 0053b578 (UNCONDITIONAL_JUMP)  ; LAB_0053b578
    MOV ECX,dword ptr [0x02d0bcd8]      ; 0053b5de | g_CWayPointClassInfo.name_hash
        ;   Label: LAB_0053b5de
    PUSH ECX                            ; 0053b5e4
    PUSH ESI                            ; 0053b5e5
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053b5e6
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    MOV EDX,dword ptr [EBX + 0x154e74]  ; 0053b5eb
    MOV dword ptr [EBX + EDX*0x4 + 0x154e78],EAX ; 0053b5f1
    MOV EAX,dword ptr [EBX + 0x154e74]  ; 0053b5f8
    MOV EDX,dword ptr [EBX + EAX*0x4 + 0x154e78] ; 0053b5fe
    ADD ESP,0x8                         ; 0053b605
    TEST EDX,EDX                        ; 0053b608
    JZ 0x0053b615                       ; 0053b60a
        ;   XREF to: 0053b615 (CONDITIONAL_JUMP)  ; LAB_0053b615
    LEA ECX,[EAX + 0x1]                 ; 0053b60c
    MOV dword ptr [EBX + 0x154e74],ECX  ; 0053b60f
    MOV EAX,[0x02cfd894]                ; 0053b615 | g_CTriggerClassInfo.name_hash
        ;   Label: LAB_0053b615
    PUSH EAX                            ; 0053b61a
    PUSH ESI                            ; 0053b61b
    CALL core_actor.cpp_castToClassHash_FUN_0040c840 ; 0053b61c
        ;   XREF to: 0040c840 (UNCONDITIONAL_CALL)  ; CDemonActor * core_actor.cpp_castToClassHash_FUN_0040c840(CDemonActor * actor_ptr, uint class_name_hash)
    ADD ESP,0x8                         ; 0053b621
    TEST EAX,EAX                        ; 0053b624
    JZ 0x0053b57e                       ; 0053b626
        ;   XREF to: 0053b57e (CONDITIONAL_JUMP)  ; LAB_0053b57e
    CMP dword ptr [EAX + 0x174],0x4     ; 0053b62c
    JNZ 0x0053b57e                      ; 0053b633
        ;   XREF to: 0053b57e (CONDITIONAL_JUMP)  ; LAB_0053b57e
    CMP dword ptr [EAX + 0x304],0x0     ; 0053b639
    JZ 0x0053b57e                       ; 0053b640
        ;   XREF to: 0053b57e (CONDITIONAL_JUMP)  ; LAB_0053b57e
    MOV EAX,dword ptr [EBX + 0x152f30]  ; 0053b646
    MOV dword ptr [EBX + EAX*0x4 + 0x152f34],ESI ; 0053b64c
    INC dword ptr [EBX + 0x152f30]      ; 0053b653
    JMP 0x0053b57e                      ; 0053b659
        ;   XREF to: 0053b57e (UNCONDITIONAL_JUMP)  ; LAB_0053b57e

