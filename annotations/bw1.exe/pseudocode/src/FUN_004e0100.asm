; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e0100(int param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_004a0fb0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0100
        ;   Label: FUN_004e0100
    CMP dword ptr [EAX + 0xc288],0x0    ; 004e0104
    JNZ 0x004e0116                      ; 004e010b
        ;   XREF to: 004e0116 (CONDITIONAL_JUMP)  ; LAB_004e0116
    CMP dword ptr [EAX + 0xc284],0x0    ; 004e010d
    JLE 0x004e0117                      ; 004e0114
        ;   XREF to: 004e0117 (CONDITIONAL_JUMP)  ; LAB_004e0117
    RET                                 ; 004e0116
        ;   Label: LAB_004e0116
    PUSH EBX                            ; 004e0117
        ;   Label: LAB_004e0117
    MOV EBX,dword ptr [ESP + 0xc]       ; 004e0118
    PUSH EBX                            ; 004e011c
    PUSH EAX                            ; 004e011d
    CALL FUN_004a0fb0                   ; 004e011e
        ;   XREF to: 004a0fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a0fb0()
    ADD ESP,0x8                         ; 004e0123
    POP EBX                             ; 004e0126
    RET                                 ; 004e0127

