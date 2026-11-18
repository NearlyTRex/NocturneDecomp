; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00511b70(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e5ec70]      ; 00511b70 | g_PathfindingQueueTail
        ;   Label: core_path.cpp_isPathfindingQueueEmpty_FUN_00511b70
    MOV EAX,[0x01e5ec6c]                ; 00511b76 | g_PathfindingQueueHead
    CMP EAX,EDX                         ; 00511b7b
    SETZ AL                             ; 00511b7d
    AND EAX,0xff                        ; 00511b80
    RET                                 ; 00511b85

