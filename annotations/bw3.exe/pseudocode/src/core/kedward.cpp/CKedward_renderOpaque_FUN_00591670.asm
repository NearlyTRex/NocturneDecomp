; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_kedward_cpp_CKedward_renderOpaque_FUN_00591670(CKedward *this_ptr)
;
; Parameters:
; CKedward *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00591670
        ;   Label: core_kedward.cpp_CKedward_renderOpaque_FUN_00591670
    PUSH EDX                            ; 00591674
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00591675
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0059167a
    RET                                 ; 0059167d

