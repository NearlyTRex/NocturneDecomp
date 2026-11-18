; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00532ec0(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e7abe0]      ; 00532ec0 | g_PathfindingQueueTail
        ;   Label: core_path.cpp_isPathfindingQueueEmpty_FUN_00532ec0
    MOV EAX,[0x01e7abdc]                ; 00532ec6 | g_PathfindingQueueHead
    CMP EAX,EDX                         ; 00532ecb
    SETZ AL                             ; 00532ecd
    AND EAX,0xff                        ; 00532ed0
    RET                                 ; 00532ed5

