; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl core_door_cpp_CDoor_getMoveType_FUN_004564b0(int param_1,int param_2)
;
; Local Variables:
; undefined        Stack[-0x18]:1  local_18
; undefined4       Stack[-0x10]:4  local_10
;
; XREF[1]:
;   FUN_004b5110 at 004b5220
;
; Referenced Globals:
;   void* switchdataD_00456498 = 00456566
;   TerminatedCString s_The_door_is_locked_from_0057d255
;   TerminatedCString s_core_door_cpp_0057d27d
;   TerminatedCString s_CDoor_getMoveType_invali_0057d28e
;   undefined4 DAT_005b9354
;   undefined4 DAT_01c775ec
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290
;   core_door.cpp_CDoor_onLocked_FUN_00456650
;   core_game.cpp_CGame_displayMessage_FUN_0049aa30
;   FUN_004c8440
;   support_newmsg.cpp_getLocalizedString_FUN_004ee370
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004564b0
        ;   Label: core_door.cpp_CDoor_getMoveType_FUN_004564b0
    PUSH ESI                            ; 004564b1
    PUSH EBP                            ; 004564b2
    MOV EBP,ESP                         ; 004564b3
    SUB ESP,0xc                         ; 004564b5
    AND ESP,0xfffffff8                  ; 004564b8
    MOV EBX,dword ptr [EBP + 0x10]      ; 004564bb
    MOV EAX,dword ptr [EBP + 0x14]      ; 004564be
    ADD EAX,0x20                        ; 004564c1
    PUSH EAX                            ; 004564c4
    LEA EAX,[ESP + 0x4]                 ; 004564c5
    PUSH EAX                            ; 004564c9
    PUSH EBX                            ; 004564ca
    CALL core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290 ; 004564cb
        ;   XREF to: 0040a290 (UNCONDITIONAL_CALL)  ; undefined core_actor.cpp_CDemonActor_worldToLocalPoint_FUN_0040a290()
    ADD ESP,0xc                         ; 004564d0
    PUSH 0x57d255                       ; 004564d3 | = "The door is locked from the other side."
    CALL support_newmsg.cpp_getLocalizedString_FUN_004ee370 ; 004564d8
        ;   XREF to: 004ee370 (UNCONDITIONAL_CALL)  ; undefined support_newmsg.cpp_getLocalizedString_FUN_004ee370()
    ADD ESP,0x4                         ; 004564dd
    MOV ESI,EAX                         ; 004564e0
    FLD float ptr [ESP + 0x8]           ; 004564e2
    FLDZ                                ; 004564e6
    FCOMPP                              ; 004564e8
    FNSTSW AX                           ; 004564ea
    SAHF                                ; 004564ec
    JNC 0x0045652a                      ; 004564ed
        ;   XREF to: 0045652a (CONDITIONAL_JUMP)  ; LAB_0045652a
    TEST byte ptr [EBX + 0x9d0],0x1     ; 004564ef
    JNZ 0x0045663d                      ; 004564f6
        ;   XREF to: 0045663d (CONDITIONAL_JUMP)  ; LAB_0045663d
    CMP dword ptr [EBX + 0x9d0],0x0     ; 004564fc
    JZ 0x00456522                       ; 00456503
        ;   XREF to: 00456522 (CONDITIONAL_JUMP)  ; LAB_00456522
    PUSH EBX                            ; 00456505
    CALL core_door.cpp_CDoor_onLocked_FUN_00456650 ; 00456506
        ;   XREF to: 00456650 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_onLocked_FUN_00456650()
    ADD ESP,0x4                         ; 0045650b
    PUSH 0x40a00000                     ; 0045650e
    PUSH ESI                            ; 00456513
    MOV EAX,[0x005b9354]                ; 00456514 | DAT_005b9354
    PUSH EAX                            ; 00456519 | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 0045651a
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    ADD ESP,0xc                         ; 0045651f
    XOR EAX,EAX                         ; 00456522
        ;   Label: LAB_00456522
    MOV ESP,EBP                         ; 00456524
    POP EBP                             ; 00456526
    POP ESI                             ; 00456527
    POP EBX                             ; 00456528
    RET                                 ; 00456529
    TEST byte ptr [EBX + 0x9d0],0x2     ; 0045652a
        ;   Label: LAB_0045652a
    JNZ 0x0045663d                      ; 00456531
        ;   XREF to: 0045663d (CONDITIONAL_JUMP)  ; LAB_0045663d
    CMP dword ptr [EBX + 0x9d0],0x0     ; 00456537
    JZ 0x00456522                       ; 0045653e
        ;   XREF to: 00456522 (CONDITIONAL_JUMP)  ; LAB_00456522
    PUSH EBX                            ; 00456540
    CALL core_door.cpp_CDoor_onLocked_FUN_00456650 ; 00456541
        ;   XREF to: 00456650 (UNCONDITIONAL_CALL)  ; undefined core_door.cpp_CDoor_onLocked_FUN_00456650()
    ADD ESP,0x4                         ; 00456546
    PUSH 0x40a00000                     ; 00456549
    PUSH ESI                            ; 0045654e
    MOV ECX,dword ptr [0x005b9354]      ; 0045654f | DAT_005b9354
    PUSH ECX                            ; 00456555 | DAT_01c775ec
    CALL core_game.cpp_CGame_displayMessage_FUN_0049aa30 ; 00456556
        ;   XREF to: 0049aa30 (UNCONDITIONAL_CALL)  ; undefined core_game.cpp_CGame_displayMessage_FUN_0049aa30()
    ADD ESP,0xc                         ; 0045655b
    XOR EAX,EAX                         ; 0045655e
    MOV ESP,EBP                         ; 00456560
    POP EBP                             ; 00456562
    POP ESI                             ; 00456563
    POP EBX                             ; 00456564
    RET                                 ; 00456565
    CMP dword ptr [EBX + 0x2dc],0x0     ; 00456566
        ;   Label: caseD_0
    JNZ 0x00456595                      ; 0045656d
        ;   XREF to: 00456595 (CONDITIONAL_JUMP)  ; LAB_00456595
    CMP dword ptr [EBX + 0x2d8],0x0     ; 0045656f
        ;   Label: LAB_0045656f
    JZ 0x0045657d                       ; 00456576
        ;   XREF to: 0045657d (CONDITIONAL_JUMP)  ; LAB_0045657d
    XOR byte ptr [ESP + 0xb],0x80       ; 00456578
    FLD float ptr [ESP + 0x8]           ; 0045657d
        ;   Label: LAB_0045657d
    FLDZ                                ; 00456581
    FCOMPP                              ; 00456583
    FNSTSW AX                           ; 00456585
    SAHF                                ; 00456587
    JBE 0x0045659c                      ; 00456588
        ;   XREF to: 0045659c (CONDITIONAL_JUMP)  ; LAB_0045659c
    MOV EAX,0x3                         ; 0045658a
    MOV ESP,EBP                         ; 0045658f
    POP EBP                             ; 00456591
    POP ESI                             ; 00456592
    POP EBX                             ; 00456593
    RET                                 ; 00456594
    XOR byte ptr [ESP + 0xb],0x80       ; 00456595
        ;   Label: LAB_00456595
    JMP 0x0045656f                      ; 0045659a
        ;   XREF to: 0045656f (UNCONDITIONAL_JUMP)  ; LAB_0045656f
    MOV EAX,0x2                         ; 0045659c
        ;   Label: LAB_0045659c
    MOV ESP,EBP                         ; 004565a1
    POP EBP                             ; 004565a3
    POP ESI                             ; 004565a4
    POP EBX                             ; 004565a5
    RET                                 ; 004565a6
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004565a7
        ;   Label: caseD_1
    JZ 0x004565bb                       ; 004565ae
        ;   XREF to: 004565bb (CONDITIONAL_JUMP)  ; LAB_004565bb
    MOV EAX,0x7                         ; 004565b0
    MOV ESP,EBP                         ; 004565b5
    POP EBP                             ; 004565b7
    POP ESI                             ; 004565b8
    POP EBX                             ; 004565b9
    RET                                 ; 004565ba
    MOV EAX,0x6                         ; 004565bb
        ;   Label: LAB_004565bb
    MOV ESP,EBP                         ; 004565c0
    POP EBP                             ; 004565c2
    POP ESI                             ; 004565c3
    POP EBX                             ; 004565c4
    RET                                 ; 004565c5
    CMP dword ptr [EBX + 0x2d4],0x1     ; 004565c6
        ;   Label: caseD_2
    JNZ 0x004565f5                      ; 004565cd
        ;   XREF to: 004565f5 (CONDITIONAL_JUMP)  ; LAB_004565f5
    CMP dword ptr [EBX + 0x2d8],0x0     ; 004565cf
        ;   Label: LAB_004565cf
    JZ 0x004565dd                       ; 004565d6
        ;   XREF to: 004565dd (CONDITIONAL_JUMP)  ; LAB_004565dd
    XOR byte ptr [ESP + 0xb],0x80       ; 004565d8
    FLD float ptr [ESP + 0x8]           ; 004565dd
        ;   Label: LAB_004565dd
    FLDZ                                ; 004565e1
    FCOMPP                              ; 004565e3
    FNSTSW AX                           ; 004565e5
    SAHF                                ; 004565e7
    JBE 0x004565fc                      ; 004565e8
        ;   XREF to: 004565fc (CONDITIONAL_JUMP)  ; LAB_004565fc
    MOV EAX,0x5                         ; 004565ea
    MOV ESP,EBP                         ; 004565ef
    POP EBP                             ; 004565f1
    POP ESI                             ; 004565f2
    POP EBX                             ; 004565f3
    RET                                 ; 004565f4
    XOR byte ptr [ESP + 0xb],0x80       ; 004565f5
        ;   Label: LAB_004565f5
    JMP 0x004565cf                      ; 004565fa
        ;   XREF to: 004565cf (UNCONDITIONAL_JUMP)  ; LAB_004565cf
    MOV EAX,0x4                         ; 004565fc
        ;   Label: LAB_004565fc
    MOV ESP,EBP                         ; 00456601
    POP EBP                             ; 00456603
    POP ESI                             ; 00456604
    POP EBX                             ; 00456605
    RET                                 ; 00456606
    MOV EAX,0x1                         ; 00456607
        ;   Label: caseD_3
    MOV ESP,EBP                         ; 0045660c
    POP EBP                             ; 0045660e
    POP ESI                             ; 0045660f
    POP EBX                             ; 00456610
    RET                                 ; 00456611
    MOV EBX,0x57d27d                    ; 00456612 | = "..\\core\\door.cpp"
        ;   Label: default
    MOV ESI,0x39e                       ; 00456617
    PUSH 0x57d28e                       ; 0045661c | = "CDoor::getMoveType - invalid door!"
    MOV dword ptr [0x01cc4800],EBX      ; 00456621 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00456627 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0045662d
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00456632
    XOR EAX,EAX                         ; 00456635
    MOV ESP,EBP                         ; 00456637
    POP EBP                             ; 00456639
    POP ESI                             ; 0045663a
    POP EBX                             ; 0045663b
    RET                                 ; 0045663c
    MOV EAX,dword ptr [EBX + 0x2d0]     ; 0045663d
        ;   Label: LAB_0045663d
    CMP EAX,0x3                         ; 00456643
    JA 0x00456612                       ; 00456646
        ;   XREF to: 00456612 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EAX*0x4 + 0x456498]  ; 00456648 | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

