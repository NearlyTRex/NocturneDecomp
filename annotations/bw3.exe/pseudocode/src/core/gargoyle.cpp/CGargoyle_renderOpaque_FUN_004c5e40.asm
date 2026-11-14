; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004c5e40(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c5e40
        ;   Label: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004c5e40
    PUSH EDX                            ; 004c5e44
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 004c5e45
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c5e4a
    RET                                 ; 004c5e4d

