; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_carved_cpp_CCarved_renderOpaque_FUN_0042b3b0(CCarved *this_ptr)
;
; Parameters:
; CCarved *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0042b3b0
        ;   Label: core_carved.cpp_CCarved_renderOpaque_FUN_0042b3b0
    PUSH EDX                            ; 0042b3b4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 0042b3b5
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0042b3ba
    RET                                 ; 0042b3bd

