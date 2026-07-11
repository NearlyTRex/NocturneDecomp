; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040d7e0(int param_1,undefined4 param_2)
;
;
; XREF[28]:
;   FUN_004196b0 at 00419ac0
;   FUN_00427730 at 00427764
;   FUN_00429730 at 004299fa
;   FUN_0044bab0 at 0044bae9
;   FUN_0047e0d0 at 0047f536
;   FUN_00497900 at 00497b74
;   FUN_004980d0 at 0049824d
;   FUN_004a0550 at 004a2c75
;   FUN_004b5950 at 004b5995
;   FUN_004b5b00 at 004b5b22
;   ... and 18 more
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

