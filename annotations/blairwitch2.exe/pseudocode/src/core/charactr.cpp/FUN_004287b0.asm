; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_004287b0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004287b0
        ;   Label: core_charactr.cpp_FUN_004287b0
    CMP dword ptr [EAX + 0x2774],0x0    ; 004287b4
    JZ 0x0042444b                       ; 004287bb
        ;   XREF to: 0042444b (CONDITIONAL_JUMP)  ; LAB_0042444b
    CMP dword ptr [EAX + 0x27ac],0x0    ; 004287c1
    JNZ 0x004287e0                      ; 004287c8
        ;   XREF to: 004287e0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x27b0],0x0    ; 004287ca
    JZ 0x0042444b                       ; 004287d1
        ;   XREF to: 0042444b (CONDITIONAL_JUMP)  ; LAB_0042444b
    LEA EAX,[EAX]                       ; 004287d7
    LEA EDX,[EDX]                       ; 004287dd

