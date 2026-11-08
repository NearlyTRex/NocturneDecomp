; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005b95a0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00608370
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

    PUSH EBX                            ; 005b95a0
        ;   Label: FUN_005b95a0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005b95a1
    TEST byte ptr [ESP + 0xc],0x4       ; 005b95a5
    JNZ 0x005b95fd                      ; 005b95aa
        ;   XREF to: 005b95fd (CONDITIONAL_JUMP)  ; LAB_005b95fd
    PUSH 0x0                            ; 005b95ac
    ADD EBX,0x35dc                      ; 005b95ae
    PUSH EBX                            ; 005b95b4
    CALL FUN_0040ee30                   ; 005b95b5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 005b95ba
    PUSH 0x0                            ; 005b95bd
    SUB EAX,0x93c                       ; 005b95bf
    PUSH EAX                            ; 005b95c4
    CALL FUN_00441ca0                   ; 005b95c5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 005b95ca
    PUSH 0x0                            ; 005b95cd
    SUB EAX,0x2b48                      ; 005b95cf
    PUSH EAX                            ; 005b95d4
    CALL FUN_005673f0                   ; 005b95d5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 005b95da
    PUSH 0x1                            ; 005b95dd
    LEA EBX,[EAX + 0xfffffea8]          ; 005b95df
    PUSH EBX                            ; 005b95e5
    CALL FUN_00408730                   ; 005b95e6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 005b95eb
    MOV DL,byte ptr [ESP + 0xc]         ; 005b95ee
    MOV EBX,EAX                         ; 005b95f2
    TEST DL,0x2                         ; 005b95f4
    JNZ 0x005b9618                      ; 005b95f7
        ;   XREF to: 005b9618 (CONDITIONAL_JUMP)  ; LAB_005b9618
    MOV EAX,EBX                         ; 005b95f9
    POP EBX                             ; 005b95fb
    RET                                 ; 005b95fc
    PUSH 0x608370                       ; 005b95fd | DAT_00608370
        ;   Label: LAB_005b95fd
    PUSH EBX                            ; 005b9602
    CALL FUN_005c030f                   ; 005b9603
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 005b9608
    PUSH EAX                            ; 005b960b
    CALL FUN_005c0336                   ; 005b960c
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 005b9611
    MOV EAX,EBX                         ; 005b9614
    POP EBX                             ; 005b9616
    RET                                 ; 005b9617
    PUSH EAX                            ; 005b9618
        ;   Label: LAB_005b9618
    CALL FUN_005c0344                   ; 005b9619
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 005b961e
    MOV EAX,EBX                         ; 005b9621
    POP EBX                             ; 005b9623
    RET                                 ; 005b9624

