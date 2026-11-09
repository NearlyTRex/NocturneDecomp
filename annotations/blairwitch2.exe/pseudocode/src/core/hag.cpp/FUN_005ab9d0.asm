; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hag_cpp_FUN_005ab9d0(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005ab9d0
        ;   Label: core_hag.cpp_FUN_005ab9d0
    PUSH EDX                            ; 005ab9d4
    CALL unkafter_basicene.cpp_FUN_0059fc10 ; 005ab9d5
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fc10()
    ADD ESP,0x4                         ; 005ab9da
    RET                                 ; 005ab9dd

