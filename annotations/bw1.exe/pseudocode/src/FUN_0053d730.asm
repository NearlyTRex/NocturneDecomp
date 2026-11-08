; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0053d730(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_00604ac0
;
; Called Functions:
;   FUN_0053c5f0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053d730
        ;   Label: FUN_0053d730
    MOV EBX,dword ptr [ESP + 0x8]       ; 0053d731
    TEST byte ptr [ESP + 0xc],0x4       ; 0053d735
    JNZ 0x0053d756                      ; 0053d73a
        ;   XREF to: 0053d756 (CONDITIONAL_JUMP)  ; LAB_0053d756
    PUSH 0x1                            ; 0053d73c
    PUSH EBX                            ; 0053d73e
    CALL FUN_0053c5f0                   ; 0053d73f
        ;   XREF to: 0053c5f0 (UNCONDITIONAL_CALL)  ; undefined FUN_0053c5f0()
    ADD ESP,0x8                         ; 0053d744
    MOV DL,byte ptr [ESP + 0xc]         ; 0053d747
    MOV EBX,EAX                         ; 0053d74b
    TEST DL,0x2                         ; 0053d74d
    JNZ 0x0053d771                      ; 0053d750
        ;   XREF to: 0053d771 (CONDITIONAL_JUMP)  ; LAB_0053d771
    MOV EAX,EBX                         ; 0053d752
    POP EBX                             ; 0053d754
    RET                                 ; 0053d755
    PUSH 0x604ac0                       ; 0053d756 | DAT_00604ac0
        ;   Label: LAB_0053d756
    PUSH EBX                            ; 0053d75b
    CALL FUN_005c030f                   ; 0053d75c
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0053d761
    PUSH EAX                            ; 0053d764
    CALL FUN_005c0336                   ; 0053d765
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0053d76a
    MOV EAX,EBX                         ; 0053d76d
    POP EBX                             ; 0053d76f
    RET                                 ; 0053d770
    PUSH EAX                            ; 0053d771
        ;   Label: LAB_0053d771
    CALL FUN_005c0344                   ; 0053d772
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0053d777
    MOV EAX,EBX                         ; 0053d77a
    POP EBX                             ; 0053d77c
    RET                                 ; 0053d77d

