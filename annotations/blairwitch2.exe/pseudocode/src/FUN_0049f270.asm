; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049f270(int param_1)
;
;
; XREF[2]:
;   FUN_00417690 at 00417717
;   FUN_00585030 at 0058516c
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00615b00
;   undefined4 DAT_00615b18
;   undefined4 DAT_00615bc0
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_00408a80
;   FUN_0046ca00
;   FUN_005b849c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049f270
        ;   Label: FUN_0049f270
    PUSH ESI                            ; 0049f271
    PUSH EDI                            ; 0049f272
    PUSH EBP                            ; 0049f273
    MOV EDX,dword ptr [ESP + 0x14]      ; 0049f274
    PUSH EDX                            ; 0049f278
    MOV EBP,0x615b00                    ; 0049f279 | DAT_00615b00
    XOR EDI,EDI                         ; 0049f27e
    CALL FUN_00408a80                   ; 0049f280
        ;   XREF to: 00408a80 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a80()
    ADD EBP,0xc0                        ; 0049f285
    ADD ESP,0x4                         ; 0049f28b
    IMUL EBX,EDI,0xc0                   ; 0049f28e
        ;   Label: LAB_0049f28e
    MOV ESI,EBP                         ; 0049f294
    ADD EBX,0x615b00                    ; 0049f296 | DAT_00615b00
    PUSH EBX                            ; 0049f29c | DAT_00615b00 | DAT_00615b18 | DAT_00615bc0
        ;   Label: LAB_0049f29c
    MOV ECX,dword ptr [0x0060b280]      ; 0049f29d | DAT_0060b280
    PUSH ECX                            ; 0049f2a3 | DAT_01ba5c50
    CALL FUN_0046ca00                   ; 0049f2a4
        ;   XREF to: 0046ca00 (UNCONDITIONAL_CALL)  ; undefined FUN_0046ca00()
    ADD EBX,0x18                        ; 0049f2a9
    ADD ESP,0x8                         ; 0049f2ac
    CMP EBX,ESI                         ; 0049f2af
    JNZ 0x0049f29c                      ; 0049f2b1
        ;   XREF to: 0049f29c (CONDITIONAL_JUMP)  ; LAB_0049f29c
    INC EDI                             ; 0049f2b3
    ADD EBP,0xc0                        ; 0049f2b4
    CMP EDI,0x5                         ; 0049f2ba
    JL 0x0049f28e                       ; 0049f2bd
        ;   XREF to: 0049f28e (CONDITIONAL_JUMP)  ; LAB_0049f28e
    MOV EBX,dword ptr [ESP + 0x14]      ; 0049f2bf
    CALL FUN_005b849c                   ; 0049f2c3
        ;   XREF to: 005b849c (UNCONDITIONAL_CALL)  ; undefined FUN_005b849c()
    AND EAX,0x1                         ; 0049f2c8
    MOV dword ptr [EBX + 0x3f0],EAX     ; 0049f2cb
    POP EBP                             ; 0049f2d1
    POP EDI                             ; 0049f2d2
    POP ESI                             ; 0049f2d3
    POP EBX                             ; 0049f2d4
    RET                                 ; 0049f2d5

