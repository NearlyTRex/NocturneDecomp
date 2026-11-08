; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0051f4b0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00603ec0
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

    PUSH EBX                            ; 0051f4b0
        ;   Label: FUN_0051f4b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0051f4b1
    TEST byte ptr [ESP + 0xc],0x4       ; 0051f4b5
    JNZ 0x0051f50d                      ; 0051f4ba
        ;   XREF to: 0051f50d (CONDITIONAL_JUMP)  ; LAB_0051f50d
    PUSH 0x0                            ; 0051f4bc
    ADD EBX,0x35dc                      ; 0051f4be
    PUSH EBX                            ; 0051f4c4
    CALL FUN_0040ee30                   ; 0051f4c5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0051f4ca
    PUSH 0x0                            ; 0051f4cd
    SUB EAX,0x93c                       ; 0051f4cf
    PUSH EAX                            ; 0051f4d4
    CALL FUN_00441ca0                   ; 0051f4d5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0051f4da
    PUSH 0x0                            ; 0051f4dd
    SUB EAX,0x2b48                      ; 0051f4df
    PUSH EAX                            ; 0051f4e4
    CALL FUN_005673f0                   ; 0051f4e5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0051f4ea
    PUSH 0x1                            ; 0051f4ed
    LEA EBX,[EAX + 0xfffffea8]          ; 0051f4ef
    PUSH EBX                            ; 0051f4f5
    CALL FUN_00408730                   ; 0051f4f6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0051f4fb
    MOV DL,byte ptr [ESP + 0xc]         ; 0051f4fe
    MOV EBX,EAX                         ; 0051f502
    TEST DL,0x2                         ; 0051f504
    JNZ 0x0051f528                      ; 0051f507
        ;   XREF to: 0051f528 (CONDITIONAL_JUMP)  ; LAB_0051f528
    MOV EAX,EBX                         ; 0051f509
    POP EBX                             ; 0051f50b
    RET                                 ; 0051f50c
    PUSH 0x603ec0                       ; 0051f50d | DAT_00603ec0
        ;   Label: LAB_0051f50d
    PUSH EBX                            ; 0051f512
    CALL FUN_005c030f                   ; 0051f513
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0051f518
    PUSH EAX                            ; 0051f51b
    CALL FUN_005c0336                   ; 0051f51c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0051f521
    MOV EAX,EBX                         ; 0051f524
    POP EBX                             ; 0051f526
    RET                                 ; 0051f527
    PUSH EAX                            ; 0051f528
        ;   Label: LAB_0051f528
    CALL FUN_005c0344                   ; 0051f529
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0051f52e
    MOV EAX,EBX                         ; 0051f531
    POP EBX                             ; 0051f533
    RET                                 ; 0051f534

