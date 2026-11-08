; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00599d90(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00599d90
        ;   Label: FUN_00599d90
    CMP dword ptr [EAX + 0x2d8],0x0     ; 00599d94
    JZ 0x00599da3                       ; 00599d9b
        ;   XREF to: 00599da3 (CONDITIONAL_JUMP)  ; LAB_00599da3
    LEA EAX,[EAX]                       ; 00599d9d
    XOR EAX,EAX                         ; 00599da0
        ;   Label: LAB_00599da0
    RET                                 ; 00599da2
        ;   Label: LAB_00599da2
    PUSH 0x5f8005                       ; 00599da3
        ;   Label: LAB_00599da3
    MOV ECX,dword ptr [ESP + 0xc]       ; 00599da8
    PUSH ECX                            ; 00599dac
    CALL FUN_0040c550                   ; 00599dad
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 00599db2
    TEST EAX,EAX                        ; 00599db5
    JZ 0x00599da2                       ; 00599db7
        ;   XREF to: 00599da2 (CONDITIONAL_JUMP)  ; LAB_00599da2
    MOV EAX,0x2                         ; 00599db9
    RET                                 ; 00599dbe

