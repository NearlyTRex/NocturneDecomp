; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d7e0(int param_1,undefined4 param_2)
;
;
; XREF[51]:
;   FUN_0040b300 at 0040b533
;   FUN_00411860 at 0041188f
;   FUN_00413800 at 00414056
;   FUN_00414e10 at 00414e1a
;   FUN_004196b0 at 00419ac0
;   FUN_0041f0b0 at 0041f0d2
;   FUN_00427730 at 00427764
;   FUN_00429730 at 004299fa
;   FUN_0043b1a0 at 0043b2d2
;   FUN_0043c940 at 0043c94a
;   ... and 41 more
;
; Called Functions:
;   FUN_0040d840
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0040d7e0
        ;   Label: FUN_0040d7e0
    TEST EAX,EAX                        ; 0040d7e4
    JNZ 0x0040d7e9                      ; 0040d7e6
        ;   XREF to: 0040d7e9 (CONDITIONAL_JUMP)  ; LAB_0040d7e9
    RET                                 ; 0040d7e8
    MOV EDX,dword ptr [ESP + 0x8]       ; 0040d7e9
        ;   Label: LAB_0040d7e9
    PUSH EDX                            ; 0040d7ed
    PUSH EAX                            ; 0040d7ee
    MOV EDX,dword ptr [EAX + 0x14c]     ; 0040d7ef
    CALL dword ptr [EDX + 0xc4]         ; 0040d7f5
    ADD ESP,0x4                         ; 0040d7fb
    PUSH EAX                            ; 0040d7fe
    CALL FUN_0040d840                   ; 0040d7ff
        ;   XREF to: 0040d840 (UNCONDITIONAL_CALL)  ; undefined FUN_0040d840()
    ADD ESP,0x8                         ; 0040d804
    RET                                 ; 0040d807

