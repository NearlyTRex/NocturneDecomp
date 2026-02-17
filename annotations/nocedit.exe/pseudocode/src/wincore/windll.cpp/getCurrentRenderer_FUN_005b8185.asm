; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl wincore_windll_cpp_getCurrentRenderer_FUN_005b8185(int *renderer_handle)
;
; Parameters:
; int *            Stack[0x4]:4   renderer_handle
;
; Referenced Globals:
;   TerminatedCString g_RendererDllName
;   int g_RendererHandle
;
; *****************************************************************************

section .text

    LEA EAX,[EAX]                       ; 005b8185
        ;   Label: wincore_windll.cpp_getCurrentRenderer_FUN_005b8185
    LEA EDX,[EDX]                       ; 005b818b
    MOV EBX,EBX                         ; 005b818e
    MOV EDX,dword ptr [ESP + 0x4]       ; 005b8190
    MOV EAX,[0x03f6b87c]                ; 005b8194 | g_RendererHandle
    MOV dword ptr [EDX],EAX             ; 005b8199
    MOV EAX,0x684010                    ; 005b819b | = "trid3d.dll"
    RET                                 ; 005b81a0

