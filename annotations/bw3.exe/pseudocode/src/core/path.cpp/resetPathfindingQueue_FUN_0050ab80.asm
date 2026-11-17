; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetPathfindingQueue_FUN_0050ab80(void)
;
;
; Referenced Globals:
;   int g_INT_01ed02ac
;   int g_INT_01ed02b0
;   int g_INT_01ed2a2c
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 0050ab80
        ;   Label: core_path.cpp_resetPathfindingQueue_FUN_0050ab80
    MOV dword ptr [0x01ed02ac],EDX      ; 0050ab82 | g_INT_01ed02ac
    MOV dword ptr [0x01ed02b0],EDX      ; 0050ab88 | g_INT_01ed02b0
    MOV dword ptr [0x01ed2a2c],EDX      ; 0050ab8e | g_INT_01ed2a2c
    RET                                 ; 0050ab94

