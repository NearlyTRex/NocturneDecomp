; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00557020(int param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; Called Functions:
;   FUN_00428ab0
;   FUN_004e1660
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00557020
        ;   Label: FUN_00557020
    ADD EAX,0x150                       ; 00557024
    PUSH EAX                            ; 00557029
    CALL FUN_004e1660                   ; 0055702a
        ;   XREF to: 004e1660 (UNCONDITIONAL_CALL)  ; undefined FUN_004e1660()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0055702f
    ADD ESP,0x4                         ; 00557032
    CMP EAX,0x13                        ; 00557035
    JNZ 0x0055703b                      ; 00557038
        ;   XREF to: 0055703b (CONDITIONAL_JUMP)  ; LAB_0055703b
    RET                                 ; 0055703a
    PUSH dword ptr [ESP + 0x10]         ; 0055703b
        ;   Label: LAB_0055703b
    MOV EDX,dword ptr [ESP + 0xc]       ; 0055703f
    PUSH dword ptr [ESP + 0x10]         ; 00557043
    PUSH EDX                            ; 00557047
    MOV ECX,dword ptr [ESP + 0x10]      ; 00557048
    PUSH ECX                            ; 0055704c
    CALL FUN_00428ab0                   ; 0055704d
        ;   XREF to: 00428ab0 (UNCONDITIONAL_CALL)  ; undefined FUN_00428ab0()
    ADD ESP,0x10                        ; 00557052
    RET                                 ; 00557055

