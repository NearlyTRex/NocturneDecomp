; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00424e90(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005fd1f0
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

    PUSH EBX                            ; 00424e90
        ;   Label: FUN_00424e90
    MOV EBX,dword ptr [ESP + 0x8]       ; 00424e91
    TEST byte ptr [ESP + 0xc],0x4       ; 00424e95
    JNZ 0x00424eed                      ; 00424e9a
        ;   XREF to: 00424eed (CONDITIONAL_JUMP)  ; LAB_00424eed
    PUSH 0x0                            ; 00424e9c
    ADD EBX,0x35dc                      ; 00424e9e
    PUSH EBX                            ; 00424ea4
    CALL FUN_0040ee30                   ; 00424ea5
        ;   XREF to: 0040ee30 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ee30()
    ADD ESP,0x8                         ; 00424eaa
    PUSH 0x0                            ; 00424ead
    SUB EAX,0x93c                       ; 00424eaf
    PUSH EAX                            ; 00424eb4
    CALL FUN_00441ca0                   ; 00424eb5
        ;   XREF to: 00441ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00441ca0()
    ADD ESP,0x8                         ; 00424eba
    PUSH 0x0                            ; 00424ebd
    SUB EAX,0x2b48                      ; 00424ebf
    PUSH EAX                            ; 00424ec4
    CALL FUN_005673f0                   ; 00424ec5
        ;   XREF to: 005673f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005673f0()
    ADD ESP,0x8                         ; 00424eca
    PUSH 0x1                            ; 00424ecd
    LEA EBX,[EAX + 0xfffffea8]          ; 00424ecf
    PUSH EBX                            ; 00424ed5
    CALL FUN_00408730                   ; 00424ed6
        ;   XREF to: 00408730 (UNCONDITIONAL_CALL)  ; undefined FUN_00408730()
    ADD ESP,0x8                         ; 00424edb
    MOV DL,byte ptr [ESP + 0xc]         ; 00424ede
    MOV EBX,EAX                         ; 00424ee2
    TEST DL,0x2                         ; 00424ee4
    JNZ 0x00424f08                      ; 00424ee7
        ;   XREF to: 00424f08 (CONDITIONAL_JUMP)  ; LAB_00424f08
    MOV EAX,EBX                         ; 00424ee9
    POP EBX                             ; 00424eeb
    RET                                 ; 00424eec
    PUSH 0x5fd1f0                       ; 00424eed | DAT_005fd1f0
        ;   Label: LAB_00424eed
    PUSH EBX                            ; 00424ef2
    CALL FUN_005c030f                   ; 00424ef3
        ;   XREF to: 005c030f (UNCONDITIONAL_CALL)  ; undefined FUN_005c030f()
    ADD ESP,0x8                         ; 00424ef8
    PUSH EAX                            ; 00424efb
    CALL FUN_005c0336                   ; 00424efc
        ;   XREF to: 005c0336 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0336()
    ADD ESP,0x4                         ; 00424f01
    MOV EAX,EBX                         ; 00424f04
    POP EBX                             ; 00424f06
    RET                                 ; 00424f07
    PUSH EAX                            ; 00424f08
        ;   Label: LAB_00424f08
    CALL FUN_005c0344                   ; 00424f09
        ;   XREF to: 005c0344 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0344()
    ADD ESP,0x4                         ; 00424f0e
    MOV EAX,EBX                         ; 00424f11
    POP EBX                             ; 00424f13
    RET                                 ; 00424f14

