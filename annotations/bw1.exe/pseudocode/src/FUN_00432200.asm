; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00432200(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00432200
        ;   Label: FUN_00432200
    CMP dword ptr [EAX + 0x2704],0x0    ; 00432204
    JZ 0x0042e13b                       ; 0043220b
        ;   XREF to: 0042e13b (CONDITIONAL_JUMP)  ; LAB_0042e13b
    CMP dword ptr [EAX + 0x273c],0x0    ; 00432211
    JNZ 0x00432230                      ; 00432218
        ;   XREF to: 00432230 (CONDITIONAL_JUMP)  ; LAB_00432230
    CMP dword ptr [EAX + 0x2740],0x0    ; 0043221a
    JZ 0x0042e13b                       ; 00432221
        ;   XREF to: 0042e13b (CONDITIONAL_JUMP)  ; LAB_0042e13b
    LEA EAX,[EAX]                       ; 00432227
    LEA EDX,[EDX]                       ; 0043222d
    XOR EAX,EAX                         ; 00432230
        ;   Label: LAB_00432230
    RET                                 ; 00432232

