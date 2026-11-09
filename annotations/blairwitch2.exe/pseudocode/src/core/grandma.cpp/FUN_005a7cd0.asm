; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_grandma_cpp_FUN_005a7cd0(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a7cd0
        ;   Label: core_grandma.cpp_FUN_005a7cd0
    PUSH EDX                            ; 005a7cd4
    CALL core_basicnpc.cpp_FUN_005a4920 ; 005a7cd5
        ;   XREF to: 005a4920 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4920()
    ADD ESP,0x4                         ; 005a7cda
    RET                                 ; 005a7cdd

