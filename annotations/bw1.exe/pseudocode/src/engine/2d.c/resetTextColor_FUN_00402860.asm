; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_2d_c_resetTextColor_FUN_00402860(void)
;
;
; Referenced Globals:
;   int g_CurrentTextColor = 0xf8
;
; *****************************************************************************

section .text

    MOV dword ptr [0x006104a0],0xf8     ; 00402860 | g_CurrentTextColor
        ;   Label: engine_2d.c_resetTextColor_FUN_00402860
    LEA EAX,[EAX]                       ; 0040286a
    RET                                 ; 00402870

