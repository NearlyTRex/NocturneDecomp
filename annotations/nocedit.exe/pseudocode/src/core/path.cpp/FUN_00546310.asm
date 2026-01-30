; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl core_path_cpp_FUN_00546310(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;   int g_PathfindingNodesExpanded
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 00546310
        ;   Label: core_path.cpp_FUN_00546310
    MOV dword ptr [0x030d284c],EDX      ; 00546312 | g_PathfindingQueueHead
    MOV dword ptr [0x030d2850],EDX      ; 00546318 | g_PathfindingQueueTail
    MOV dword ptr [0x030d4fcc],EDX      ; 0054631e | g_PathfindingNodesExpanded
    RET                                 ; 00546324

