; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004d5b00(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004d5b00
        ;   Label: FUN_004d5b00
    CMP dword ptr [EAX + 0xfc],0x0      ; 004d5b04
    JNZ 0x004d5af0                      ; 004d5b0b
        ;   XREF to: 004d5af0 (CONDITIONAL_JUMP)  ; LAB_004d5af0
    LEA EAX,[EAX]                       ; 004d5b0d

