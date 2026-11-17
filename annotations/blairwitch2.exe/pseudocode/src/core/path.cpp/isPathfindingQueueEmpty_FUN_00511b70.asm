; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_00511b70(void)
;
;
; Referenced Globals:
;   int g_INT_01e5ec6c
;   int g_INT_01e5ec70
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e5ec70]      ; 00511b70 | g_INT_01e5ec70
        ;   Label: core_path.cpp_isPathfindingQueueEmpty_FUN_00511b70
    MOV EAX,[0x01e5ec6c]                ; 00511b76 | g_INT_01e5ec6c
    CMP EAX,EDX                         ; 00511b7b
    SETZ AL                             ; 00511b7d
    AND EAX,0xff                        ; 00511b80
    RET                                 ; 00511b85

