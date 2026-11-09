; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_confzomb_cpp_FUN_005a2660(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a2660
        ;   Label: core_confzomb.cpp_FUN_005a2660
    PUSH EDX                            ; 005a2664
    CALL unkafter_basicene.cpp_FUN_0059fc10 ; 005a2665
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fc10()
    ADD ESP,0x4                         ; 005a266a
    RET                                 ; 005a266d

