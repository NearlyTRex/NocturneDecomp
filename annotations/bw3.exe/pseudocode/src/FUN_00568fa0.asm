; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568fa0(int param_1)
;
;
; Called Functions:
;   FUN_0040b400
;   FUN_0040b930
;   FUN_0040c280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00568fa0
        ;   Label: FUN_00568fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00568fa1
    PUSH EBX                            ; 00568fa5
    CALL FUN_0040c280                   ; 00568fa6
        ;   XREF to: 0040c280 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c280()
    ADD ESP,0x4                         ; 00568fab
    PUSH 0x0                            ; 00568fae
    LEA EAX,[EBX + 0x158]               ; 00568fb0
    PUSH EAX                            ; 00568fb6
    CALL FUN_0040b400                   ; 00568fb7
        ;   XREF to: 0040b400 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b400()
    ADD ESP,0x8                         ; 00568fbc
    PUSH 0x0                            ; 00568fbf
    LEA EAX,[EBX + 0x164]               ; 00568fc1
    PUSH EAX                            ; 00568fc7
    CALL FUN_0040b930                   ; 00568fc8
        ;   XREF to: 0040b930 (UNCONDITIONAL_CALL)  ; undefined FUN_0040b930()
    ADD ESP,0x8                         ; 00568fcd
    POP EBX                             ; 00568fd0
    RET                                 ; 00568fd1

