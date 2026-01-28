; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_colonel_cpp_FUN_004405f0(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_FUN_0042f8a0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x8]       ; 004405f0
        ;   Label: core_colonel.cpp_FUN_004405f0
    PUSH EDX                            ; 004405f4
    MOV ECX,dword ptr [ESP + 0x8]       ; 004405f5
    PUSH ECX                            ; 004405f9
    CALL core_charactr.cpp_CCharacter_FUN_0042f8a0 ; 004405fa
        ;   XREF to: 0042f8a0 (UNCONDITIONAL_CALL)  ; void core_charactr.cpp_CCharacter_FUN_0042f8a0(CCharacter * this_ptr)
    ADD ESP,0x8                         ; 004405ff
    RET                                 ; 00440602

