; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_steuben_cpp_FUN_005a5c10(undefined4 param_1)
;
;
; Called Functions:
;   core_basicnpc.cpp_FUN_005a4870
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a5c10
        ;   Label: core_steuben.cpp_FUN_005a5c10
    PUSH EDX                            ; 005a5c14
    CALL core_basicnpc.cpp_FUN_005a4870 ; 005a5c15
        ;   XREF to: 005a4870 (UNCONDITIONAL_CALL)  ; undefined core_basicnpc.cpp_FUN_005a4870()
    ADD ESP,0x4                         ; 005a5c1a
    RET                                 ; 005a5c1d

