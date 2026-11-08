; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00414620(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f3200
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

    PUSH EBX                            ; 00414620
        ;   Label: FUN_00414620
    MOV EBX,dword ptr [ESP + 0x8]       ; 00414621
    TEST byte ptr [ESP + 0xc],0x4       ; 00414625
    JNZ 0x0041468d                      ; 0041462a
        ;   XREF to: 0041468d (CONDITIONAL_JUMP)  ; LAB_0041468d
    PUSH 0x0                            ; 0041462c
    ADD EBX,0x3a20                      ; 0041462e
    PUSH EBX                            ; 00414634
    CALL FUN_0040f2b0                   ; 00414635
        ;   XREF to: 0040f2b0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040f2b0()
    ADD ESP,0x8                         ; 0041463a
    PUSH 0x0                            ; 0041463d
    SUB EAX,0x9c8                       ; 0041463f
    PUSH EAX                            ; 00414644
    CALL FUN_0059df70                   ; 00414645
        ;   XREF to: 0059df70 (UNCONDITIONAL_CALL)  ; undefined FUN_0059df70()
    ADD ESP,0x8                         ; 0041464a
    PUSH 0x0                            ; 0041464d
    SUB EAX,0x34c                       ; 0041464f
    PUSH EAX                            ; 00414654
    CALL FUN_005b1480                   ; 00414655
        ;   XREF to: 005b1480 (UNCONDITIONAL_CALL)  ; undefined FUN_005b1480()
    ADD ESP,0x8                         ; 0041465a
    PUSH 0x0                            ; 0041465d
    SUB EAX,0x2a58                      ; 0041465f
    PUSH EAX                            ; 00414664
    CALL FUN_00544d50                   ; 00414665
        ;   XREF to: 00544d50 (UNCONDITIONAL_CALL)  ; undefined FUN_00544d50()
    ADD ESP,0x8                         ; 0041466a
    PUSH 0x1                            ; 0041466d
    LEA EBX,[EAX + 0xfffffd4c]          ; 0041466f
    PUSH EBX                            ; 00414675
    CALL FUN_00408930                   ; 00414676
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 0041467b
    MOV DL,byte ptr [ESP + 0xc]         ; 0041467e
    MOV EBX,EAX                         ; 00414682
    TEST DL,0x2                         ; 00414684
    JNZ 0x004146a8                      ; 00414687
        ;   XREF to: 004146a8 (CONDITIONAL_JUMP)  ; LAB_004146a8
    MOV EAX,EBX                         ; 00414689
    POP EBX                             ; 0041468b
    RET                                 ; 0041468c
    PUSH 0x5f3200                       ; 0041468d | DAT_005f3200
        ;   Label: LAB_0041468d
    PUSH EBX                            ; 00414692
    CALL FUN_005b7fa7                   ; 00414693
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00414698
    PUSH EAX                            ; 0041469b
    CALL FUN_005b7fce                   ; 0041469c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 004146a1
    MOV EAX,EBX                         ; 004146a4
    POP EBX                             ; 004146a6
    RET                                 ; 004146a7
    PUSH EAX                            ; 004146a8
        ;   Label: LAB_004146a8
    CALL FUN_005b7fdc                   ; 004146a9
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 004146ae
    MOV EAX,EBX                         ; 004146b1
    POP EBX                             ; 004146b3
    RET                                 ; 004146b4

