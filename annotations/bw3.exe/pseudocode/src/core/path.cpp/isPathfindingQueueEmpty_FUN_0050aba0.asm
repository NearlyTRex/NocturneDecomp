; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_0050aba0(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01ed02b0]      ; 0050aba0 | g_PathfindingQueueTail
        ;   Label: core_path.cpp_isPathfindingQueueEmpty_FUN_0050aba0
    MOV EAX,[0x01ed02ac]                ; 0050aba6 | g_PathfindingQueueHead
    CMP EAX,EDX                         ; 0050abab
    SETZ AL                             ; 0050abad
    AND EAX,0xff                        ; 0050abb0
    RET                                 ; 0050abb5

