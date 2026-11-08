; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005603b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00605300
;
; Called Functions:
;   FUN_00408730
;   FUN_0040ee30
;   FUN_00441ca0
;   FUN_005673f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005603b0
        ;   Label: FUN_005603b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005603b1
    TEST byte ptr [ESP + 0xc],0x4       ; 005603b5
    JNZ 0x0056040d                      ; 005603ba
        ;   XREF to: 0056040d (CONDITIONAL_JUMP)  ; LAB_0056040d
    PUSH 0x0                            ; 005603bc
    ADD EBX,0x35dc                      ; 005603be
    PUSH EBX                            ; 005603c4
    CALL FUN_0040ee30                   ; 005603c5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005603ca
    PUSH 0x0                            ; 005603cd
    SUB EAX,0x93c                       ; 005603cf
    PUSH EAX                            ; 005603d4
    CALL FUN_00441ca0                   ; 005603d5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005603da
    PUSH 0x0                            ; 005603dd
    SUB EAX,0x2b48                      ; 005603df
    PUSH EAX                            ; 005603e4
    CALL FUN_005673f0                   ; 005603e5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005603ea
    PUSH 0x1                            ; 005603ed
    LEA EBX,[EAX + 0xfffffea8]          ; 005603ef
    PUSH EBX                            ; 005603f5
    CALL FUN_00408730                   ; 005603f6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005603fb
    MOV DL,byte ptr [ESP + 0xc]         ; 005603fe
    MOV EBX,EAX                         ; 00560402
    TEST DL,0x2                         ; 00560404
    JNZ 0x00560428                      ; 00560407
        ;   XREF to: 00560428 (CONDITIONAL_JUMP)  ; LAB_00560428
    MOV EAX,EBX                         ; 00560409
    POP EBX                             ; 0056040b
    RET                                 ; 0056040c
    PUSH 0x605300                       ; 0056040d | DAT_00605300
        ;   Label: LAB_0056040d
    PUSH EBX                            ; 00560412
    CALL FUN_005c030f                   ; 00560413
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00560418
    PUSH EAX                            ; 0056041b
    CALL FUN_005c0336                   ; 0056041c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00560421
    MOV EAX,EBX                         ; 00560424
    POP EBX                             ; 00560426
    RET                                 ; 00560427
    PUSH EAX                            ; 00560428
        ;   Label: LAB_00560428
    CALL FUN_005c0344                   ; 00560429
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0056042e
    MOV EAX,EBX                         ; 00560431
    POP EBX                             ; 00560433
    RET                                 ; 00560434

