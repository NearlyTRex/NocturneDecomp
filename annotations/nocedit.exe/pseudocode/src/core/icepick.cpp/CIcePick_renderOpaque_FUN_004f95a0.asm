; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004f95a0(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f95a0
        ;   Label: core_icepick.cpp_CIcePick_renderOpaque_FUN_004f95a0
    PUSH EDX                            ; 004f95a4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004f95a5
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f95aa
    RET                                 ; 004f95ad

