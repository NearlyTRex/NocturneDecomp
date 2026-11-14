; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setExtraRenderFlags_FUN_00512310(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; Referenced Globals:
;   undefined4 DAT_01d224bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512310
        ;   Label: engine_mini3d.cpp_setExtraRenderFlags_FUN_00512310
    MOV [0x01d224bc],EAX                ; 00512314 | DAT_01d224bc
    RET                                 ; 00512319

