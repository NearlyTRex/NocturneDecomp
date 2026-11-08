; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0045d670(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fe930
;
; Called Functions:
;   FUN_00408730
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0045d670
        ;   Label: FUN_0045d670
    MOV EBX,dword ptr [ESP + 0x8]       ; 0045d671
    TEST byte ptr [ESP + 0xc],0x4       ; 0045d675
    JNZ 0x0045d696                      ; 0045d67a
        ;   XREF to: 0045d696 (CONDITIONAL_JUMP)  ; LAB_0045d696
    PUSH 0x1                            ; 0045d67c
    PUSH EBX                            ; 0045d67e
    CALL FUN_00408730                   ; 0045d67f
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0045d684
    MOV DL,byte ptr [ESP + 0xc]         ; 0045d687
    MOV EBX,EAX                         ; 0045d68b
    TEST DL,0x2                         ; 0045d68d
    JNZ 0x0045d6b1                      ; 0045d690
        ;   XREF to: 0045d6b1 (CONDITIONAL_JUMP)  ; LAB_0045d6b1
    MOV EAX,EBX                         ; 0045d692
    POP EBX                             ; 0045d694
    RET                                 ; 0045d695
    PUSH 0x5fe930                       ; 0045d696 | DAT_005fe930
        ;   Label: LAB_0045d696
    PUSH EBX                            ; 0045d69b
    CALL FUN_005c030f                   ; 0045d69c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0045d6a1
    PUSH EAX                            ; 0045d6a4
    CALL FUN_005c0336                   ; 0045d6a5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0045d6aa
    MOV EAX,EBX                         ; 0045d6ad
    POP EBX                             ; 0045d6af
    RET                                 ; 0045d6b0
    PUSH EAX                            ; 0045d6b1
        ;   Label: LAB_0045d6b1
    CALL FUN_005c0344                   ; 0045d6b2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0045d6b7
    MOV EAX,EBX                         ; 0045d6ba
    POP EBX                             ; 0045d6bc
    RET                                 ; 0045d6bd

