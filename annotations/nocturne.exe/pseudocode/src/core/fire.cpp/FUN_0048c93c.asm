; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_fire_cpp_FUN_0048c93c(undefined4 *param_1)
;
;
; *****************************************************************************

section .text

    ADD byte ptr [EAX],AL               ; 0048c93c
        ;   Label: core_fire.cpp_FUN_0048c93c
    ADD byte ptr [EAX],AL               ; 0048c93e
    MOV EAX,dword ptr [ESP + 0x4]       ; 0048c940
    MOV dword ptr [EAX],0x0             ; 0048c944
    RET                                 ; 0048c94a

