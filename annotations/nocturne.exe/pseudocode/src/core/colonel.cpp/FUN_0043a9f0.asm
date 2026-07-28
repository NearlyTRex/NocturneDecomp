; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_colonel_cpp_FUN_0043a9f0(CCharacter *param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0043a9f0
        ;   Label: core_colonel.cpp_FUN_0043a9f0
    PUSH EDX                            ; 0043a9f4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 0043a9f5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 0043a9fa
    RET                                 ; 0043a9fd

