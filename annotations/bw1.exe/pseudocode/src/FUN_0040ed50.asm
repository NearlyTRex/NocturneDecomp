; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_0040ed50(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb940
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

    PUSH EBX                            ; 0040ed50
        ;   Label: FUN_0040ed50
    MOV EBX,dword ptr [ESP + 0x8]       ; 0040ed51
    TEST byte ptr [ESP + 0xc],0x4       ; 0040ed55
    JNZ 0x0040edad                      ; 0040ed5a
        ;   XREF to: 0040edad (CONDITIONAL_JUMP)  ; LAB_0040edad
    PUSH 0x0                            ; 0040ed5c
    ADD EBX,0x35dc                      ; 0040ed5e
    PUSH EBX                            ; 0040ed64
    CALL FUN_0040ee30                   ; 0040ed65
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 0040ed6a
    PUSH 0x0                            ; 0040ed6d
    SUB EAX,0x93c                       ; 0040ed6f
    PUSH EAX                            ; 0040ed74
    CALL FUN_00441ca0                   ; 0040ed75
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 0040ed7a
    PUSH 0x0                            ; 0040ed7d
    SUB EAX,0x2b48                      ; 0040ed7f
    PUSH EAX                            ; 0040ed84
    CALL FUN_005673f0                   ; 0040ed85
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 0040ed8a
    PUSH 0x1                            ; 0040ed8d
    LEA EBX,[EAX + 0xfffffea8]          ; 0040ed8f
    PUSH EBX                            ; 0040ed95
    CALL FUN_00408730                   ; 0040ed96
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 0040ed9b
    MOV DL,byte ptr [ESP + 0xc]         ; 0040ed9e
    MOV EBX,EAX                         ; 0040eda2
    TEST DL,0x2                         ; 0040eda4
    JNZ 0x0040edc8                      ; 0040eda7
        ;   XREF to: 0040edc8 (CONDITIONAL_JUMP)  ; LAB_0040edc8
    MOV EAX,EBX                         ; 0040eda9
    POP EBX                             ; 0040edab
    RET                                 ; 0040edac
    PUSH 0x5fb940                       ; 0040edad | DAT_005fb940
        ;   Label: LAB_0040edad
    PUSH EBX                            ; 0040edb2
    CALL FUN_005c030f                   ; 0040edb3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 0040edb8
    PUSH EAX                            ; 0040edbb
    CALL FUN_005c0336                   ; 0040edbc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 0040edc1
    MOV EAX,EBX                         ; 0040edc4
    POP EBX                             ; 0040edc6
    RET                                 ; 0040edc7
    PUSH EAX                            ; 0040edc8
        ;   Label: LAB_0040edc8
    CALL FUN_005c0344                   ; 0040edc9
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 0040edce
    MOV EAX,EBX                         ; 0040edd1
    POP EBX                             ; 0040edd3
    RET                                 ; 0040edd4

