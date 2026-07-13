; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00478520(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cae0e8
;
; Called Functions:
;   FUN_00409fc0
;   FUN_00454510
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00478520
        ;   Label: FUN_00478520
    MOV EBX,dword ptr [ESP + 0x8]       ; 00478521
    PUSH EBX                            ; 00478525
    CALL FUN_00409fc0                   ; 00478526
        ;   XREF to: 00409fc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409fc0()
    FLD float ptr [EBX + 0x22c]         ; 0047852b
    ADD ESP,0x4                         ; 00478531
    MOV EDX,dword ptr [EBX + 0x150]     ; 00478534
    FSTP float ptr [EBX + 0x440]        ; 0047853a
    CMP EDX,0x4                         ; 00478540
    JZ 0x00478570                       ; 00478543
        ;   XREF to: 00478570 (CONDITIONAL_JUMP)  ; LAB_00478570
    CMP dword ptr [EBX + 0x3c8],0x0     ; 00478545
        ;   Label: LAB_00478545
    JZ 0x00478581                       ; 0047854c
        ;   XREF to: 00478581 (CONDITIONAL_JUMP)  ; LAB_00478581
    MOV dword ptr [EBX + 0x430],0x0     ; 0047854e
        ;   Label: LAB_0047854e
    MOV EAX,dword ptr [EBX + 0x160]     ; 00478558
    MOV dword ptr [EBX + 0x484],0x0     ; 0047855e
    MOV dword ptr [EBX + 0x488],EAX     ; 00478568
    POP EBX                             ; 0047856e
    RET                                 ; 0047856f
    LEA EAX,[EBX + 0x240]               ; 00478570
        ;   Label: LAB_00478570
    PUSH EAX                            ; 00478576
    CALL FUN_00454510                   ; 00478577
        ;   XREF to: 00454510 (UNCONDITIONAL_CALL)  ; undefined FUN_00454510()
    ADD ESP,0x4                         ; 0047857c
    JMP 0x00478545                      ; 0047857f
        ;   XREF to: 00478545 (UNCONDITIONAL_JUMP)  ; LAB_00478545
    MOV EAX,[0x01cae0e8]                ; 00478581 | DAT_01cae0e8
        ;   Label: LAB_00478581
    MOV EAX,dword ptr [EAX*0x4 + 0x1cae0d8] ; 00478586
    MOV dword ptr [EBX + 0x3c8],EAX     ; 0047858d
    JMP 0x0047854e                      ; 00478593
        ;   XREF to: 0047854e (UNCONDITIONAL_JUMP)  ; LAB_0047854e

