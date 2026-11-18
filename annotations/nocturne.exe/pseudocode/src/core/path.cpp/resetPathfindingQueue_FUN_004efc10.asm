; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_path_cpp_resetPathfindingQueue_FUN_004efc10(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 004efc10
        ;   Label: core_path.cpp_resetPathfindingQueue_FUN_004efc10
    MOV dword ptr [0x01e4008c],EDX      ; 004efc12 | g_PathfindingQueueHead
    MOV dword ptr [0x01e40090],EDX      ; 004efc18 | g_PathfindingQueueTail
    MOV dword ptr [0x01e4280c],EDX      ; 004efc1e | g_PathfindingNodesExpanded
    RET                                 ; 004efc24

