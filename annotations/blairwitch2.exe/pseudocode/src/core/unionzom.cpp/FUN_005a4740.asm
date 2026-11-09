; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_unionzom_cpp_FUN_005a4740(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a4740
        ;   Label: core_unionzom.cpp_FUN_005a4740
    PUSH EDX                            ; 005a4744
    CALL unkafter_basicene.cpp_FUN_0059fc10 ; 005a4745
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fc10()
    ADD ESP,0x4                         ; 005a474a
    RET                                 ; 005a474d

