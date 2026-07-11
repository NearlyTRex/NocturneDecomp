; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048afe0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[5]:
;   FUN_0042abd0 at 0042adc3
;   FUN_00487a20 at 00487aa1
;   FUN_00488430 at 00488517
;   FUN_0048aae0 at 0048aaf8
;   FUN_0048d0c0 at 0048d1c9
;
; Referenced Globals:
;   undefined4 DAT_01c0a13c
;
; Called Functions:
;   FUN_00482780
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 0048afe0
        ;   Label: FUN_0048afe0
    PUSH EDI                            ; 0048afe1
    PUSH EBP                            ; 0048afe2
    MOV EDX,dword ptr [0x01c0a13c]      ; 0048afe3 | DAT_01c0a13c
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048afe9
    SUB EAX,EDX                         ; 0048aff0
    SHL EAX,0x2                         ; 0048aff2
    SUB EAX,EDX                         ; 0048aff5
    SHL EAX,0x2                         ; 0048aff7
    INC EDX                             ; 0048affa
    ADD EAX,0x1c0a140                   ; 0048affb
    MOV dword ptr [0x01c0a13c],EDX      ; 0048b000 | DAT_01c0a13c
    CMP EDX,0x800                       ; 0048b006
    JL 0x0048b018                       ; 0048b00c
        ;   XREF to: 0048b018 (CONDITIONAL_JUMP)  ; LAB_0048b018
    PUSH EBX                            ; 0048b00e
    XOR EBX,EBX                         ; 0048b00f
    MOV dword ptr [0x01c0a13c],EBX      ; 0048b011 | DAT_01c0a13c
    POP EBX                             ; 0048b017
    MOV ESI,dword ptr [ESP + 0x20]      ; 0048b018
        ;   Label: LAB_0048b018
    PUSH ESI                            ; 0048b01c
    MOV EDI,dword ptr [ESP + 0x20]      ; 0048b01d
    PUSH EDI                            ; 0048b021
    MOV EBP,dword ptr [ESP + 0x1c]      ; 0048b022
    PUSH dword ptr [ESP + 0x20]         ; 0048b026
    PUSH EBP                            ; 0048b02a
    PUSH EAX                            ; 0048b02b
    CALL FUN_00482780                   ; 0048b02c
        ;   XREF to: 00482780 (UNCONDITIONAL_CALL)  ; undefined FUN_00482780()
    ADD ESP,0x14                        ; 0048b031
    POP EBP                             ; 0048b034
    POP EDI                             ; 0048b035
    POP ESI                             ; 0048b036
    RET                                 ; 0048b037

