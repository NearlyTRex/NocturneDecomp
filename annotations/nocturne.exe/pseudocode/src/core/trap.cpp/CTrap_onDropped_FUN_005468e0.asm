; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void core_trap_cpp_CTrap_onDropped_FUN_005468e0(int param_1)
;
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005468e0
        ;   Label: core_trap.cpp_CTrap_onDropped_FUN_005468e0
    MOV dword ptr [EAX + 0x2cc],0x0     ; 005468e4
    RET                                 ; 005468ee

