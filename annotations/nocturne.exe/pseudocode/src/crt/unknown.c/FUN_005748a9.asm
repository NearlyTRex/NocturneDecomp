; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005748a9(LPRECT param_1)
;
;
; Referenced Globals:
;   void* PTR_MoveWindow_00575450 = 001759ee
;   void* PTR_SetRectEmpty_00575478 = 00175a92
;
; *****************************************************************************

section .text

    AND EAX,0x575450                    ; 005748a9 | PTR_MoveWindow_00575450
        ;   Label: crt_unknown.c_FUN_005748a9
    JMP dword ptr [0x00575478]          ; 005748ae | PTR_SetRectEmpty_00575478

