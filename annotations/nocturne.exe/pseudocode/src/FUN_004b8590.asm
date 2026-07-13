; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b8590(int param_1,undefined4 param_2,int param_3)
;
;
; Referenced Globals:
;   undefined4 DAT_005b7650
;
; Called Functions:
;   FUN_0047ab70
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b8590
        ;   Label: FUN_004b8590
    MOV EBX,dword ptr [ESP + 0x8]       ; 004b8591
    MOV EAX,dword ptr [ESP + 0x10]      ; 004b8595
    MOV EDX,dword ptr [ESP + 0xc]       ; 004b8599
    MOV dword ptr [EBX + 0x2594],EAX    ; 004b859d
    MOV dword ptr [EBX + 0x2590],EDX    ; 004b85a3
    TEST EAX,EAX                        ; 004b85a9
    JZ 0x004b85c8                       ; 004b85ab
        ;   XREF to: 004b85c8 (CONDITIONAL_JUMP)  ; LAB_004b85c8
    MOV EAX,dword ptr [ESP + 0xc]       ; 004b85ad
        ;   Label: LAB_004b85ad
    MOV dword ptr [EBX + 0x1f954],0x40400000 ; 004b85b1
    MOV dword ptr [EBX + 0x1f950],EAX   ; 004b85bb
    MOV EAX,0x1                         ; 004b85c1
    POP EBX                             ; 004b85c6
    RET                                 ; 004b85c7
    PUSH 0x1                            ; 004b85c8
        ;   Label: LAB_004b85c8
    PUSH 0x4                            ; 004b85ca
    LEA EAX,[EBX + 0x150]               ; 004b85cc
    PUSH EAX                            ; 004b85d2
    CALL FUN_004e16b0                   ; 004b85d3
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004b85d8
    LEA EAX,[EBX + 0x1f724]             ; 004b85db
    PUSH EAX                            ; 004b85e1
    MOV EDX,dword ptr [0x005b7650]      ; 004b85e2 | DAT_005b7650
    PUSH EDX                            ; 004b85e8
    CALL FUN_0047ab70                   ; 004b85e9
        ;   XREF to: 0047ab70 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ab70()
    ADD ESP,0x8                         ; 004b85ee
    JMP 0x004b85ad                      ; 004b85f1
        ;   XREF to: 004b85ad (UNCONDITIONAL_JUMP)  ; LAB_004b85ad

