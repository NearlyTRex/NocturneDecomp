; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_haystack_cpp_FUN_004f1b60(void)
;
;
; Called Functions:
;   core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004f1b60
        ;   Label: core_haystack.cpp_FUN_004f1b60
    PUSH EDX                            ; 004f1b64
    CALL core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0 ; 004f1b65
        ;   XREF to: 0042a2c0 (UNCONDITIONAL_CALL)  ; int core_charactr.cpp_CCharacter_renderOpaque_FUN_0042a2c0(CCharacter * this_ptr)
    ADD ESP,0x4                         ; 004f1b6a
    RET                                 ; 004f1b6d

