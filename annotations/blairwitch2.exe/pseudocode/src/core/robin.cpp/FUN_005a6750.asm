; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_robin_cpp_FUN_005a6750(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a6750
        ;   Label: core_robin.cpp_FUN_005a6750
    PUSH EDX                            ; 005a6754
    CALL core_basicnpc.cpp_FUN_005a4930 ; 005a6755
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4930()
    ADD ESP,0x4                         ; 005a675a
    RET                                 ; 005a675d

