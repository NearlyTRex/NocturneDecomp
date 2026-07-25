; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574951(HWND param_1)
;
;
; Referenced Globals:
;   void* PTR_SetForegroundWindow_00575474 = 00175a7c
;   void* PTR_GetCommandLineA_005754e8 = 00175c70
;
; *****************************************************************************

section .text

    AND EAX,0x5754e8                    ; 00574951 | PTR_GetCommandLineA_005754e8
        ;   Label: FUN_00574951
    JMP dword ptr [0x00575474]          ; 00574956 | PTR_SetForegroundWindow_00575474

