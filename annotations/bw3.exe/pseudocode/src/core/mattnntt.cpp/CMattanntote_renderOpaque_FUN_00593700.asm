; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_mattnntt_cpp_CMattanntote_renderOpaque_FUN_00593700(CMattanntote *this_ptr)
;
; Parameters:
; CMattanntote *   Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00593700
        ;   Label: core_mattnntt.cpp_CMattanntote_renderOpaque_FUN_00593700
    PUSH EDX                            ; 00593704
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00593705
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059370a
    RET                                 ; 0059370d

