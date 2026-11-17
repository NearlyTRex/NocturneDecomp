; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_path_cpp_isPathfindingQueueEmpty_FUN_004efc30(void)
;
;
; Referenced Globals:
;   int g_INT_01e4008c
;   int g_INT_01e40090
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01e40090]      ; 004efc30 | g_INT_01e40090
        ;   Label: core_path.cpp_isPathfindingQueueEmpty_FUN_004efc30
    MOV EAX,[0x01e4008c]                ; 004efc36 | g_INT_01e4008c
    CMP EAX,EDX                         ; 004efc3b
    SETZ AL                             ; 004efc3d
    AND EAX,0xff                        ; 004efc40
    RET                                 ; 004efc45

