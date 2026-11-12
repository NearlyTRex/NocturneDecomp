; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_construc_cpp_CConstruct_renderOpaque_FUN_00443c90(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00443c90
        ;   Label: core_construc.cpp_CConstruct_renderOpaque_FUN_00443c90
    PUSH EDX                            ; 00443c94
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220 ; 00443c95
        ;   XREF to: 0042e220 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042e220(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00443c9a
    RET                                 ; 00443c9d

