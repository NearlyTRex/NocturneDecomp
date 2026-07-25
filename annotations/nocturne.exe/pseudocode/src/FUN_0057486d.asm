; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057486d(void)
;
;
; Referenced Globals:
;   void* PTR_GetCommandLineW_005754ec = 00175c82
;   void* PTR_GetCurrentProcessId_005754fc = 00175cd2
;
; *****************************************************************************

section .text

    AND EAX,0x5754fc                    ; 0057486d | PTR_GetCurrentProcessId_005754fc
        ;   Label: FUN_0057486d
    JMP dword ptr [0x005754ec]          ; 00574872 | PTR_GetCommandLineW_005754ec

