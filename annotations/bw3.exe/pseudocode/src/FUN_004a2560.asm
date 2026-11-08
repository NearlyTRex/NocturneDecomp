; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2560(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[10]:
;   FUN_00410490 at 00410f33
;   FUN_00433c60 at 00433f6a
;   FUN_00442a20 at 00442cf5
;   FUN_0046ecf0 at 0046ef9e
;   FUN_00487eb0 at 004882f8
;   FUN_00499350 at 0049943f
;   FUN_0049d8b0 at 0049d931
;   FUN_0049e390 at 0049e4c4
;   FUN_004a2010 at 004a2028
;   FUN_004a5b10 at 004a5c21
;
; Referenced Globals:
;   undefined4 DAT_01c74e9c
;
; Called Functions:
;   FUN_00496d60
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004a2560
        ;   Label: FUN_004a2560
    PUSH EDI                            ; 004a2561
    PUSH EBP                            ; 004a2562
    MOV EDX,dword ptr [0x01c74e9c]      ; 004a2563 | DAT_01c74e9c
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2569
    SUB EAX,EDX                         ; 004a2570
    SHL EAX,0x2                         ; 004a2572
    SUB EAX,EDX                         ; 004a2575
    SHL EAX,0x2                         ; 004a2577
    INC EDX                             ; 004a257a
    ADD EAX,0x1c74ea0                   ; 004a257b
    MOV dword ptr [0x01c74e9c],EDX      ; 004a2580 | DAT_01c74e9c
    CMP EDX,0x800                       ; 004a2586
    JL 0x004a2598                       ; 004a258c
        ;   XREF to: 004a2598 (CONDITIONAL_JUMP)  ; LAB_004a2598
    PUSH EBX                            ; 004a258e
    XOR EBX,EBX                         ; 004a258f
    MOV dword ptr [0x01c74e9c],EBX      ; 004a2591 | DAT_01c74e9c
    POP EBX                             ; 004a2597
    MOV ESI,dword ptr [ESP + 0x20]      ; 004a2598
        ;   Label: LAB_004a2598
    PUSH ESI                            ; 004a259c
    MOV EDI,dword ptr [ESP + 0x20]      ; 004a259d
    PUSH EDI                            ; 004a25a1
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004a25a2
    PUSH dword ptr [ESP + 0x20]         ; 004a25a6
    PUSH EBP                            ; 004a25aa
    PUSH EAX                            ; 004a25ab
    CALL FUN_00496d60                   ; 004a25ac
        ;   XREF to: 00496d60 (UNCONDITIONAL_CALL)  ; undefined FUN_00496d60()
    ADD ESP,0x14                        ; 004a25b1
    POP EBP                             ; 004a25b4
    POP EDI                             ; 004a25b5
    POP ESI                             ; 004a25b6
    RET                                 ; 004a25b7

