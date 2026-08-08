; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_FUN_00532fa0(void)
;
;
; Referenced Globals:
;   TerminatedCString s_trid3d_dll_005c0e80
;   int g_RendererHandle
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00532fa0
        ;   Label: engine_special.cpp_FUN_00532fa0
    MOV EAX,[0x02dc9d64]                ; 00532fa4 | g_RendererHandle
    MOV dword ptr [EDX],EAX             ; 00532fa9
    MOV EAX,0x5c0e80                    ; 00532fab | = "trid3d.dll"
    RET                                 ; 00532fb0

