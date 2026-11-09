; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_light_cpp_FUN_004e0b80(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_006002c8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e0b80
        ;   Label: engine_light.cpp_FUN_004e0b80
    MOV [0x006002c8],EAX                ; 004e0b84 | DAT_006002c8
    RET                                 ; 004e0b89

