; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char * __cdecl engine_special_cpp_getCurrentRenderer_FUN_00532fa0(int *card_index_out)
;
; Parameters:
; int *            Stack[0x4]:4   card_index_out
;
; Referenced Globals:
;   char[256] g_RendererDllPath
;   int g_RendererCardIndex
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00532fa0
        ;   Label: engine_special.cpp_getCurrentRenderer_FUN_00532fa0
    MOV EAX,[0x02dc9d64]                ; 00532fa4 | g_RendererCardIndex
    MOV dword ptr [EDX],EAX             ; 00532fa9
    MOV EAX,0x5c0e80                    ; 00532fab | g_RendererDllPath
    RET                                 ; 00532fb0

