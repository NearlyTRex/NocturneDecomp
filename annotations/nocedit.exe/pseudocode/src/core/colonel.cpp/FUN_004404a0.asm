; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_colonel.cpp_FUN_004404a0()
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004404a0
        ;   Label: core_colonel.cpp_FUN_004404a0
    PUSH EDX                            ; 004404a4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004404a5
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004404aa
    RET                                 ; 004404ad

