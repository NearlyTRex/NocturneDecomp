; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confedrt_cpp_FUN_005a14d0(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a14d0
        ;   Label: core_confedrt.cpp_FUN_005a14d0
    PUSH EDX                            ; 005a14d4
    CALL unkafter_basicene.cpp_FUN_0059fc10 ; 005a14d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fc10()
    ADD ESP,0x4                         ; 005a14da
    RET                                 ; 005a14dd

