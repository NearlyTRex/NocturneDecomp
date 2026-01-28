; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_charactr_cpp_CCharacter_FUN_0042ca30(CCharacter *this_ptr)
;
; Parameters:
; CCharacter *     Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042ca30
        ;   Label: core_charactr.cpp_CCharacter_FUN_0042ca30
    CMP dword ptr [EAX + 0x25a0],0x0    ; 0042ca34
    JZ 0x004297fb                       ; 0042ca3b
        ;   XREF to: 004297fb (CONDITIONAL_JUMP)  ; LAB_004297fb
    CMP dword ptr [EAX + 0x25b0],0x0    ; 0042ca41
    JNZ 0x0042ca60                      ; 0042ca48
        ;   XREF to: 0042ca60 (CONDITIONAL_JUMP)
    CMP dword ptr [EAX + 0x25b4],0x0    ; 0042ca4a
    JZ 0x004297fb                       ; 0042ca51
        ;   XREF to: 004297fb (CONDITIONAL_JUMP)  ; LAB_004297fb
    LEA EAX,[EAX]                       ; 0042ca57
    LEA EDX,[EDX]                       ; 0042ca5d

