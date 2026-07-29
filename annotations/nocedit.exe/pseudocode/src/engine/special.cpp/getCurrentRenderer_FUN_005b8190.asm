; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_005b8190(int *renderer_handle)
;
; Parameters:
; int *            Stack[0x4]:4   renderer_handle
;
; Referenced Globals:
;   char[256] g_RendererDllPath
;   int g_RendererHandle
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8190
        ;   Label: engine_special.cpp_getCurrentRenderer_FUN_005b8190
    MOV EAX,[0x03f6b87c]                ; 005b8194 | g_RendererHandle
    MOV dword ptr [EDX],EAX             ; 005b8199
    MOV EAX,0x684010                    ; 005b819b | g_RendererDllPath
    RET                                 ; 005b81a0

