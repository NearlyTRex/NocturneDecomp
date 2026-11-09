; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_FUN_00431620(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00431620
        ;   Label: core_charactr.cpp_FUN_00431620
    CMP dword ptr [EAX + 0x2704],0x0    ; 00431624
    JZ 0x0042cd0b                       ; 0043162b
        ;   XREF to: 0042cd0b (CONDITIONAL_JUMP)  ; LAB_0042cd0b
    CMP dword ptr [EAX + 0x273c],0x0    ; 00431631
    JNZ 0x00431650                      ; 00431638
        ;   XREF to: 00431650 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x2740],0x0    ; 0043163a
    JZ 0x0042cd0b                       ; 00431641
        ;   XREF to: 0042cd0b (CONDITIONAL_JUMP)  ; LAB_0042cd0b
    LEA EAX,[EAX]                       ; 00431647
    LEA EDX,[EDX]                       ; 0043164d

