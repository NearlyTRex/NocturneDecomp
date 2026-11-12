; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_construc_cpp_CConstruct_renderOpaque_FUN_00446e20(CConstruct *this_ptr)
;
; Parameters:
; CConstruct *     Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00446e20
        ;   Label: core_construc.cpp_CConstruct_renderOpaque_FUN_00446e20
    PUSH EDX                            ; 00446e24
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 00446e25
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 00446e2a
    RET                                 ; 00446e2d

