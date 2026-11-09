; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_searpart_cpp_FUN_005a8e70(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a8e70
        ;   Label: core_searpart.cpp_FUN_005a8e70
    PUSH EDX                            ; 005a8e74
    CALL core_basicnpc.cpp_FUN_005a4930 ; 005a8e75
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4930()
    ADD ESP,0x4                         ; 005a8e7a
    RET                                 ; 005a8e7d

