; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004115c0(int param_1,byte param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_005f2ea0
;
; Called Functions:
;   FUN_00408930
;   FUN_00438a70
;   FUN_005b7fa7
;   FUN_005b7fce
;   FUN_005b7fdc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004115c0
        ;   Label: FUN_004115c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004115c1
    TEST byte ptr [ESP + 0xc],0x4       ; 004115c5
    JNZ 0x004115fd                      ; 004115ca
        ;   XREF to: 004115fd (CONDITIONAL_JUMP)  ; LAB_004115fd
    PUSH 0x0                            ; 004115cc
    ADD EBX,0x2d4                       ; 004115ce
    PUSH EBX                            ; 004115d4
    CALL FUN_00438a70                   ; 004115d5
        ;   XREF to: 00438a70 (UNCONDITIONAL_CALL)  ; undefined FUN_00438a70()
    ADD ESP,0x8                         ; 004115da
    PUSH 0x1                            ; 004115dd
    LEA EBX,[EAX + 0xfffffd2c]          ; 004115df
    PUSH EBX                            ; 004115e5
    CALL FUN_00408930                   ; 004115e6
        ;   XREF to: 00408930 (UNCONDITIONAL_CALL)  ; undefined FUN_00408930()
    ADD ESP,0x8                         ; 004115eb
    MOV DL,byte ptr [ESP + 0xc]         ; 004115ee
    MOV EBX,EAX                         ; 004115f2
    TEST DL,0x2                         ; 004115f4
    JNZ 0x00411618                      ; 004115f7
        ;   XREF to: 00411618 (CONDITIONAL_JUMP)  ; LAB_00411618
    MOV EAX,EBX                         ; 004115f9
    POP EBX                             ; 004115fb
    RET                                 ; 004115fc
    PUSH 0x5f2ea0                       ; 004115fd | DAT_005f2ea0
        ;   Label: LAB_004115fd
    PUSH EBX                            ; 00411602
    CALL FUN_005b7fa7                   ; 00411603
        ;   XREF to: 005b7fa7 (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fa7()
    ADD ESP,0x8                         ; 00411608
    PUSH EAX                            ; 0041160b
    CALL FUN_005b7fce                   ; 0041160c
        ;   XREF to: 005b7fce (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fce()
    ADD ESP,0x4                         ; 00411611
    MOV EAX,EBX                         ; 00411614
    POP EBX                             ; 00411616
    RET                                 ; 00411617
    PUSH EAX                            ; 00411618
        ;   Label: LAB_00411618
    CALL FUN_005b7fdc                   ; 00411619
        ;   XREF to: 005b7fdc (UNCONDITIONAL_CALL)  ; undefined FUN_005b7fdc()
    ADD ESP,0x4                         ; 0041161e
    MOV EAX,EBX                         ; 00411621
    POP EBX                             ; 00411623
    RET                                 ; 00411624

