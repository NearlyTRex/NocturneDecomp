; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004d4680(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f89d0
;
; Called Functions:
;   FUN_00408930
;   FUN_0040f2b0
;   FUN_00544d50
;   FUN_0059df70
;   FUN_005b1480
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d4680
        ;   Label: FUN_004d4680
    MOV EBX,dword ptr [ESP + 0x8]       ; 004d4681
    TEST byte ptr [ESP + 0xc],0x4       ; 004d4685
    JNZ 0x004d46ed                      ; 004d468a
        ;   XREF to: 004d46ed (CONDITIONAL_JUMP)  ; LAB_004d46ed
    PUSH 0x0                            ; 004d468c
    ADD EBX,0x3a20                      ; 004d468e
    PUSH EBX                            ; 004d4694
    CALL FUN_0040f2b0                   ; 004d4695
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 004d469a
    PUSH 0x0                            ; 004d469d
    SUB EAX,0x9c8                       ; 004d469f
    PUSH EAX                            ; 004d46a4
    CALL FUN_0059df70                   ; 004d46a5
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 004d46aa
    PUSH 0x0                            ; 004d46ad
    SUB EAX,0x34c                       ; 004d46af
    PUSH EAX                            ; 004d46b4
    CALL FUN_005b1480                   ; 004d46b5
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 004d46ba
    PUSH 0x0                            ; 004d46bd
    SUB EAX,0x2a58                      ; 004d46bf
    PUSH EAX                            ; 004d46c4
    CALL FUN_00544d50                   ; 004d46c5
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 004d46ca
    PUSH 0x1                            ; 004d46cd
    LEA EBX,[EAX + 0xfffffd4c]          ; 004d46cf
    PUSH EBX                            ; 004d46d5
    CALL FUN_00408930                   ; 004d46d6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004d46db
    MOV DL,byte ptr [ESP + 0xc]         ; 004d46de
    MOV EBX,EAX                         ; 004d46e2
    TEST DL,0x2                         ; 004d46e4
    JNZ 0x004d4708                      ; 004d46e7
        ;   XREF to: 004d4708 (CONDITIONAL_JUMP)  ; LAB_004d4708
    MOV EAX,EBX                         ; 004d46e9
    POP EBX                             ; 004d46eb
    RET                                 ; 004d46ec
    PUSH 0x5f89d0                       ; 004d46ed | DAT_005f89d0
        ;   Label: LAB_004d46ed
    PUSH EBX                            ; 004d46f2
    CALL FUN_005b7fa7                   ; 004d46f3
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 004d46f8
    PUSH EAX                            ; 004d46fb
    CALL FUN_005b7fce                   ; 004d46fc
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004d4701
    MOV EAX,EBX                         ; 004d4704
    POP EBX                             ; 004d4706
    RET                                 ; 004d4707
    PUSH EAX                            ; 004d4708
        ;   Label: LAB_004d4708
    CALL FUN_005b7fdc                   ; 004d4709
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004d470e
    MOV EAX,EBX                         ; 004d4711
    POP EBX                             ; 004d4713
    RET                                 ; 004d4714

