; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574999(HWND param_1,UINT param_2,WPARAM param_3,LPARAM param_4)
;
;
; Referenced Globals:
;   void* PTR_DefWindowProcA_00575420 = 00175928
;   void* PTR_GetCurrentProcess_005754f8 = 00175cbe
;
; *****************************************************************************

section .text

    AND EAX,0x5754f8                    ; 00574999 | PTR_GetCurrentProcess_005754f8
        ;   Label: FUN_00574999
    JMP dword ptr [0x00575420]          ; 0057499e | PTR_DefWindowProcA_00575420

