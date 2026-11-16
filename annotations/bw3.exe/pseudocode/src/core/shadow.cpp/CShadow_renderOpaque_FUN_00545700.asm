; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_shadow_cpp_CShadow_renderOpaque_FUN_00545700(CShadow *this_ptr)
;
; Parameters:
; CShadow *        Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00545700
        ;   Label: core_shadow.cpp_CShadow_renderOpaque_FUN_00545700
    PUSH EDX                            ; 00545704
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00545705
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0054570a
    RET                                 ; 0054570d

