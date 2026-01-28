; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown bool core_path_cpp_FUN_00546330(void)
;
;
; Referenced Globals:
;   int g_PathfindingQueueHead
;   int g_PathfindingQueueTail
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x030d2850]      ; 00546330 | g_PathfindingQueueTail
        ;   Label: core_path.cpp_FUN_00546330
    MOV EAX,[0x030d284c]                ; 00546336 | g_PathfindingQueueHead
    CMP EAX,EDX                         ; 0054633b
    SETZ AL                             ; 0054633d
    AND EAX,0xff                        ; 00546340
    RET                                 ; 00546345

