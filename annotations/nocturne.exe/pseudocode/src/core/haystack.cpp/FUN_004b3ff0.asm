; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_haystack_cpp_FUN_004b3ff0(undefined4 param_1)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004b3ff0
        ;   Label: core_haystack.cpp_FUN_004b3ff0
    PUSH EDX                            ; 004b3ff4
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440 ; 004b3ff5
        ;   XREF to: 00426440 (UNCONDITIONAL_CALL)  ; undefined core_charactr.cpp_CCharacter_renderOpaque_FUN_00426440()
    ADD ESP,0x4                         ; 004b3ffa
    RET                                 ; 004b3ffd

