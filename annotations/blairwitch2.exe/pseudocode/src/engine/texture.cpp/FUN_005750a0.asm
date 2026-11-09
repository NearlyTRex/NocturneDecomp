; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_texture_cpp_FUN_005750a0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006141c4
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005750a0
        ;   Label: engine_texture.cpp_FUN_005750a0
    MOV [0x006141c4],EAX                ; 005750a4 | DAT_006141c4
    RET                                 ; 005750a9

