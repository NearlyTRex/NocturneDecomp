; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004f2560(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f2560
        ;   Label: core_icepick.cpp_CIcePick_renderOpaque_FUN_004f2560
    PUSH EDX                            ; 004f2564
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240 ; 004f2565
        ;   XREF to: 0042f240 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042f240(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f256a
    RET                                 ; 004f256d

