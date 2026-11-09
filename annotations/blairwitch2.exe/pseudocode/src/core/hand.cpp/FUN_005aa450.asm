; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_hand_cpp_FUN_005aa450(undefined4 param_1)
;
;
; Called Functions:
;   unkafter_basicene.cpp_FUN_0059fa20
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005aa450
        ;   Label: core_hand.cpp_FUN_005aa450
    PUSH EDX                            ; 005aa454
    CALL unkafter_basicene.cpp_FUN_0059fa20 ; 005aa455
        ;   XREF to: 0059fa20 (UNCONDITIONAL_CALL)  ; undefined unkafter_basicene.cpp_FUN_0059fa20()
    ADD ESP,0x4                         ; 005aa45a
    RET                                 ; 005aa45d

