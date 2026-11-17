; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00532ea0(void)
;
;
; Referenced Globals:
;   int g_INT_01e7abdc
;   int g_INT_01e7abe0
;   int g_INT_01e7d35c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00532ea0
        ;   Label: core_passngr.cpp_resetPathfindingQueue_FUN_00532ea0
    MOV dword ptr [0x01e7abdc],EDX      ; 00532ea2 | g_INT_01e7abdc
    MOV dword ptr [0x01e7abe0],EDX      ; 00532ea8 | g_INT_01e7abe0
    MOV dword ptr [0x01e7d35c],EDX      ; 00532eae | g_INT_01e7d35c
    RET                                 ; 00532eb4

