; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setExtraRenderFlags_FUN_004edae0(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_01d76c3c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edae0
        ;   Label: engine_mini3d.cpp_setExtraRenderFlags_FUN_004edae0
    MOV [0x01d76c3c],EAX                ; 004edae4 | DAT_01d76c3c
    RET                                 ; 004edae9

