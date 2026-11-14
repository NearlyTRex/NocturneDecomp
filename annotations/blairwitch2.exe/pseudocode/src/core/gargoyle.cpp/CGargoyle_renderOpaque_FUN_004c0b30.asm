; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_gargoyle_cpp_CGargoyle_renderOpaque_FUN_004c0b30(CGargoyle *this_ptr)
;
; Parameters:
; CGargoyle *      Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004c0b30
        ;   Label: core_gargoyle.cpp_CGargoyle_renderOpaque_FUN_004c0b30
    PUSH EDX                            ; 004c0b34
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0 ; 004c0b35
        ;   XREF to: 004254b0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_004254b0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004c0b3a
    RET                                 ; 004c0b3d

