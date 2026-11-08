; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0049ed90(undefined4 param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005ff9f0
;
; Called Functions:
;   FUN_005ad5d0
;   FUN_005c030f
;   FUN_005c0336
;   FUN_005c0344
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ed90
        ;   Label: FUN_0049ed90
    MOV EBX,dword ptr [ESP + 0x8]       ; 0049ed91
    TEST byte ptr [ESP + 0xc],0x4       ; 0049ed95
    JNZ 0x0049edb6                      ; 0049ed9a
        ;   XREF to: 0049edb6 (CONDITIONAL_JUMP)  ; LAB_0049edb6
    PUSH 0x1                            ; 0049ed9c
    PUSH EBX                            ; 0049ed9e
    CALL FUN_005ad5d0                   ; 0049ed9f
        ;   XREF to: 005ad5d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad5d0()
    ADD ESP,0x8                         ; 0049eda4
    MOV DL,byte ptr [ESP + 0xc]         ; 0049eda7
    MOV EBX,EAX                         ; 0049edab
    TEST DL,0x2                         ; 0049edad
    JNZ 0x0049edd1                      ; 0049edb0
        ;   XREF to: 0049edd1 (CONDITIONAL_JUMP)  ; LAB_0049edd1
    MOV EAX,EBX                         ; 0049edb2
    POP EBX                             ; 0049edb4
    RET                                 ; 0049edb5
    PUSH 0x5ff9f0                       ; 0049edb6 | DAT_005ff9f0
        ;   Label: LAB_0049edb6
    PUSH EBX                            ; 0049edbb
    CALL FUN_005c030f                   ; 0049edbc
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0049edc1
    PUSH EAX                            ; 0049edc4
    CALL FUN_005c0336                   ; 0049edc5
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0049edca
    MOV EAX,EBX                         ; 0049edcd
    POP EBX                             ; 0049edcf
    RET                                 ; 0049edd0
    PUSH EAX                            ; 0049edd1
        ;   Label: LAB_0049edd1
    CALL FUN_005c0344                   ; 0049edd2
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0049edd7
    MOV EAX,EBX                         ; 0049edda
    POP EBX                             ; 0049eddc
    RET                                 ; 0049eddd

