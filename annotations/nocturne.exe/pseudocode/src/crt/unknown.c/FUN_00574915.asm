; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574915(HWND param_1)
;
;
; Referenced Globals:
;   void* PTR_UpdateWindow_00575484 = 00175ac4
;   void* PTR_GlobalMemoryStatus_00575550 = 00175e50
;
; *****************************************************************************

section .text

    AND EAX,0x575550                    ; 00574915 | PTR_GlobalMemoryStatus_00575550
        ;   Label: crt_unknown.c_FUN_00574915
    JMP dword ptr [0x00575484]          ; 0057491a | PTR_UpdateWindow_00575484

