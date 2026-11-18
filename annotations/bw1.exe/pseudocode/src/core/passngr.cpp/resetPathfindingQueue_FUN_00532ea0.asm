; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00532ea0(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00532ea0
        ;   Label: core_passngr.cpp_resetPathfindingQueue_FUN_00532ea0
    MOV dword ptr [0x01e7abdc],EDX      ; 00532ea2 | g_PathfindingQueueHead
    MOV dword ptr [0x01e7abe0],EDX      ; 00532ea8 | g_PathfindingQueueTail
    MOV dword ptr [0x01e7d35c],EDX      ; 00532eae | g_PathfindingNodesExpanded
    RET                                 ; 00532eb4

