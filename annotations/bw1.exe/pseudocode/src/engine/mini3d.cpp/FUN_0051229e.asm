; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_0051229e(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006258d0
;
; *****************************************************************************

section .text

    MOV ECX,ECX                         ; 0051229e
        ;   Label: engine_mini3d.cpp_FUN_0051229e
    MOV EAX,dword ptr [ESP + 0x4]       ; 005122a0
    MOV [0x006258d0],EAX                ; 005122a4 | DAT_006258d0
    RET                                 ; 005122a9

