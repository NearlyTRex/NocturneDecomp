; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_charactr_cpp_CCharacter_isWalkComplete_FUN_00428bc0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00428bc0
        ;   Label: core_charactr.cpp_CCharacter_isWalkComplete_FUN_00428bc0
    CMP dword ptr [EAX + 0x2598],0x0    ; 00428bc4
    JZ 0x0042597b                       ; 00428bcb
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    CMP dword ptr [EAX + 0x25a8],0x0    ; 00428bd1
    JNZ 0x00428bf0                      ; 00428bd8
        ;   XREF to: 00428bf0 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25ac],0x0    ; 00428bda
    JZ 0x0042597b                       ; 00428be1
        ;   XREF to: 0042597b (CONDITIONAL_JUMP)  ; LAB_0042597b
    LEA EAX,[EAX]                       ; 00428be7
    LEA EDX,[EDX]                       ; 00428bed

