; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_00597cc0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061b4a4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00597cc0
        ;   Label: engine_texture.cpp_FUN_00597cc0
    MOV [0x0061b4a4],EAX                ; 00597cc4 | DAT_0061b4a4
    RET                                 ; 00597cc9

