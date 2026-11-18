; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_resetRenderBuffer_FUN_00406ed0(void)
;
;
; Referenced Globals:
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;
; *****************************************************************************

section .text

    XOR ECX,ECX                         ; 00406ed0
        ;   Label: engine_3d.c_resetRenderBuffer_FUN_00406ed0
    MOV EDX,0x1                         ; 00406ed2
    MOV dword ptr [0x0073047c],ECX      ; 00406ed7 | g_RenderBufferCount
    MOV dword ptr [0x00730478],EDX      ; 00406edd | g_RenderBufferEnabled
    RET                                 ; 00406ee3

