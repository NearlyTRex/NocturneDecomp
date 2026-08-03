; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_icepick_cpp_CIcePick_renderOpaque_FUN_004bb4d0(CIcePick *this_ptr)
;
; Parameters:
; CIcePick *       Stack[0x4]:4   this_ptr
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004bb4d0
        ;   Label: core_icepick.cpp_CIcePick_renderOpaque_FUN_004bb4d0
    PUSH EDX                            ; 004bb4d4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004bb4d5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004bb4da
    RET                                 ; 004bb4dd

