; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049d5b0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_0046d110 at 0046d488
;   FUN_00486cb0 at 004871c5
;   FUN_00498d30 at 00498e5a
;
; Referenced Globals:
;   undefined4 DAT_01c93cd4
;
; Called Functions:
;   FUN_004965f0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0049d5b0
        ;   Label: FUN_0049d5b0
    PUSH EDI                            ; 0049d5b1
    PUSH EBP                            ; 0049d5b2
    MOV EDX,dword ptr [0x01c93cd4]      ; 0049d5b3 | DAT_01c93cd4
    LEA EAX,[EDX*0x4 + 0x0]             ; 0049d5b9
    ADD EAX,EDX                         ; 0049d5c0
    SHL EAX,0x4                         ; 0049d5c2
    INC EDX                             ; 0049d5c5
    ADD EAX,0x1c93cd8                   ; 0049d5c6
    MOV dword ptr [0x01c93cd4],EDX      ; 0049d5cb | DAT_01c93cd4
    CMP EDX,0x40                        ; 0049d5d1
    JL 0x0049d5e0                       ; 0049d5d4
        ;   XREF to: 0049d5e0 (CONDITIONAL_JUMP)  ; LAB_0049d5e0
    PUSH EBX                            ; 0049d5d6
    XOR EBX,EBX                         ; 0049d5d7
    MOV dword ptr [0x01c93cd4],EBX      ; 0049d5d9 | DAT_01c93cd4
    POP EBX                             ; 0049d5df
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0049d5e0
        ;   Label: LAB_0049d5e0
    PUSH ESI                            ; 0049d5e4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 0049d5e5
    PUSH EDI                            ; 0049d5e9
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0049d5ea
    PUSH EBP                            ; 0049d5ee
    PUSH EAX                            ; 0049d5ef
    CALL FUN_004965f0                   ; 0049d5f0
        ;   XREF to: 004965f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004965f0()
    ADD ESP,0x10                        ; 0049d5f5
    POP EBP                             ; 0049d5f8
    POP EDI                             ; 0049d5f9
    POP ESI                             ; 0049d5fa
    RET                                 ; 0049d5fb

