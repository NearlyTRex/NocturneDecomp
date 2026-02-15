; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setRenderingQuality_FUN_00407880(int quality)
;
; Parameters:
; int              Stack[0x4]:4   quality
;
; Referenced Globals:
;   int g_RenderingQuality = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407880
        ;   Label: engine_3d.c_setRenderingQuality_FUN_00407880
    MOV [0x006793b8],EAX                ; 00407884 | g_RenderingQuality
    RET                                 ; 00407889

