; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_ghostchi_cpp_FUN_005a9b60(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fc10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005a9b60
        ;   Label: core_ghostchi.cpp_FUN_005a9b60
    PUSH EDX                            ; 005a9b64
    CALL unkafter_basicene.cpp_FUN_0059fc10 ; 005a9b65
        ;   XREF to: 0059fc10 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fc10()
    ADD ESP,0x4                         ; 005a9b6a
    RET                                 ; 005a9b6d

