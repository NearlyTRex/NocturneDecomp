; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_steuben_cpp_FUN_005a5d60(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4930
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5d60
        ;   Label: core_steuben.cpp_FUN_005a5d60
    PUSH EDX                            ; 005a5d64
    CALL core_basicnpc.cpp_FUN_005a4930 ; 005a5d65
        ;   XREF to: 005a4930 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4930()
    ADD ESP,0x4                         ; 005a5d6a
    RET                                 ; 005a5d6d

