; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_resetRenderBuffer_FUN_00407060(void)
;
;
; Referenced Globals:
;   int g_RenderBufferEnabled
;   int g_RenderBufferCount
;
; *****************************************************************************

section .text

    XOR ECX,ECX                         ; 00407060
        ;   Label: engine_3d.c_resetRenderBuffer_FUN_00407060
    MOV EDX,0x1                         ; 00407062
    MOV dword ptr [0x00772afc],ECX      ; 00407067 | g_RenderBufferCount
    MOV dword ptr [0x00772af8],EDX      ; 0040706d | g_RenderBufferEnabled
    RET                                 ; 00407073

