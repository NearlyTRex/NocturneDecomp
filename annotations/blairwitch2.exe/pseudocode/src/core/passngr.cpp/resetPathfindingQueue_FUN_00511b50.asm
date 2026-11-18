; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_passngr_cpp_resetPathfindingQueue_FUN_00511b50(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00511b50
        ;   Label: core_passngr.cpp_resetPathfindingQueue_FUN_00511b50
    MOV dword ptr [0x01e5ec6c],EDX      ; 00511b52 | g_PathfindingQueueHead
    MOV dword ptr [0x01e5ec70],EDX      ; 00511b58 | g_PathfindingQueueTail
    MOV dword ptr [0x01e613ec],EDX      ; 00511b5e | g_PathfindingNodesExpanded
    RET                                 ; 00511b64

