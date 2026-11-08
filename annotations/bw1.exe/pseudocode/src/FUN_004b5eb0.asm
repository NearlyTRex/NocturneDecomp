; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5eb0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[3]:
;   FUN_00485610 at 00485988
;   FUN_0049f310 at 0049f825
;   FUN_004b16d0 at 004b17fa
;
; Referenced Globals:
;   undefined4 DAT_01cac760
;
; Called Functions:
;   FUN_004aef90
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b5eb0
        ;   Label: FUN_004b5eb0
    PUSH EDI                            ; 004b5eb1
    PUSH EBP                            ; 004b5eb2
    MOV EDX,dword ptr [0x01cac760]      ; 004b5eb3 | DAT_01cac760
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b5eb9
    ADD EAX,EDX                         ; 004b5ec0
    SHL EAX,0x4                         ; 004b5ec2
    INC EDX                             ; 004b5ec5
    ADD EAX,0x1cac764                   ; 004b5ec6
    MOV dword ptr [0x01cac760],EDX      ; 004b5ecb | DAT_01cac760
    CMP EDX,0x40                        ; 004b5ed1
    JL 0x004b5ee0                       ; 004b5ed4
        ;   XREF to: 004b5ee0 (CONDITIONAL_JUMP)  ; LAB_004b5ee0
    PUSH EBX                            ; 004b5ed6
    XOR EBX,EBX                         ; 004b5ed7
    MOV dword ptr [0x01cac760],EBX      ; 004b5ed9 | DAT_01cac760
    POP EBX                             ; 004b5edf
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004b5ee0
        ;   Label: LAB_004b5ee0
    PUSH ESI                            ; 004b5ee4
    MOV EDI,dword ptr [ESP + 0x1c]      ; 004b5ee5
    PUSH EDI                            ; 004b5ee9
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004b5eea
    PUSH EBP                            ; 004b5eee
    PUSH EAX                            ; 004b5eef
    CALL FUN_004aef90                   ; 004b5ef0
        ;   XREF to: 004aef90 (UNCONDITIONAL_CALL)  ; undefined FUN_004aef90()
    ADD ESP,0x10                        ; 004b5ef5
    POP EBP                             ; 004b5ef8
    POP EDI                             ; 004b5ef9
    POP ESI                             ; 004b5efa
    RET                                 ; 004b5efb

