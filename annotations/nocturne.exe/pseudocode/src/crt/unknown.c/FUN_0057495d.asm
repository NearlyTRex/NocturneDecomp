; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_0057495d(HWND param_1)
;
;
; Referenced Globals:
;   void* PTR_BringWindowToTop_00575410 = 001758de
;   void* PTR_IsIconic_00575440 = 001759ba
;
; *****************************************************************************

section .text

    AND EAX,0x575440                    ; 0057495d | PTR_IsIconic_00575440
        ;   Label: crt_unknown.c_FUN_0057495d
    JMP dword ptr [0x00575410]          ; 00574962 | PTR_BringWindowToTop_00575410

