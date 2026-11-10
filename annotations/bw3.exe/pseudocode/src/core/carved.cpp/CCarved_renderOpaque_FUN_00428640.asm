; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_renderOpaque_FUN_00428640(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00428640
        ;   Label: core_carved.cpp_CCarved_renderOpaque_FUN_00428640
    PUSH EDX                            ; 00428644
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00428645
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042864a
    RET                                 ; 0042864d

