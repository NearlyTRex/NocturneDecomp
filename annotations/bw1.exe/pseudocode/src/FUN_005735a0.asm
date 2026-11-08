; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005735a0(undefined4 param_1)
;
;
; XREF[76]:
;   FUN_00410d80 at 00410ef4
;   FUN_004115b0 at 00411ccb
;   FUN_004123d0 at 004124f9
;   FUN_00412ba0 at 00413391
;   FUN_00413f90 at 004140b9
;   FUN_00416790 at 00416c0b
;   FUN_0041bb40 at 0041c1b5
;   FUN_00423b70 at 00423c32
;   FUN_00424b10 at 00424d1f
;   FUN_00428ae0 at 00429c85
;   ... and 66 more
;
; Called Functions:
;   FUN_0056fa10
;   FUN_00573e70
;   FUN_00575560
;
; *****************************************************************************

section .text

    CALL FUN_00575560                   ; 005735a0
        ;   XREF to: 00575560 (UNCONDITIONAL_CALL)  ; undefined FUN_00575560()
        ;   Label: FUN_005735a0
    CMP EAX,0x1                         ; 005735a5
    JL 0x005735c9                       ; 005735a8
        ;   XREF to: 005735c9 (CONDITIONAL_JUMP)  ; LAB_005735c9
    PUSH 0x1                            ; 005735aa
    MOV ECX,dword ptr [ESP + 0x8]       ; 005735ac
    PUSH ECX                            ; 005735b0
    CALL FUN_0056fa10                   ; 005735b1
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 005735b6
    TEST EAX,EAX                        ; 005735b9
    JNZ 0x005735be                      ; 005735bb
        ;   XREF to: 005735be (CONDITIONAL_JUMP)  ; LAB_005735be
    RET                                 ; 005735bd
    CALL FUN_00573e70                   ; 005735be
        ;   XREF to: 00573e70 (UNCONDITIONAL_CALL)  ; undefined FUN_00573e70()
        ;   Label: LAB_005735be
    MOV EAX,0x1                         ; 005735c3
    RET                                 ; 005735c8
    PUSH 0x0                            ; 005735c9
        ;   Label: LAB_005735c9
    MOV EDX,dword ptr [ESP + 0x8]       ; 005735cb
    PUSH EDX                            ; 005735cf
    CALL FUN_0056fa10                   ; 005735d0
        ;   XREF to: 0056fa10 (UNCONDITIONAL_CALL)  ; undefined FUN_0056fa10()
    ADD ESP,0x8                         ; 005735d5
    TEST EAX,EAX                        ; 005735d8
    SETNZ AL                            ; 005735da
    AND EAX,0xff                        ; 005735dd
    RET                                 ; 005735e2

