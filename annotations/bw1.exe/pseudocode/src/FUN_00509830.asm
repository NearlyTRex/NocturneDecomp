; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00509830(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   TerminatedCString s_CHero_005e796b
;
; Called Functions:
;   FUN_0040c550
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00509830
        ;   Label: FUN_00509830
    CMP dword ptr [EAX + 0x588],0x0     ; 00509834
    JNZ 0x00509843                      ; 0050983b
        ;   XREF to: 00509843 (CONDITIONAL_JUMP)  ; LAB_00509843
    MOV EAX,0x3                         ; 0050983d
        ;   Label: LAB_0050983d
    RET                                 ; 00509842
    PUSH 0x5e796b                       ; 00509843 | = "CHero"
        ;   Label: LAB_00509843
    MOV ECX,dword ptr [ESP + 0xc]       ; 00509848
    PUSH ECX                            ; 0050984c
    CALL FUN_0040c550                   ; 0050984d
        ;   XREF to: 0040c550 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c550()
    ADD ESP,0x8                         ; 00509852
    TEST EAX,EAX                        ; 00509855
    JZ 0x0050983d                       ; 00509857
        ;   XREF to: 0050983d (CONDITIONAL_JUMP)  ; LAB_0050983d
    MOV EAX,0x2                         ; 00509859
    RET                                 ; 0050985e

