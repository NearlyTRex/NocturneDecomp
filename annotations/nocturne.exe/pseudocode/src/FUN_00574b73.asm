; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00574b73(LPCRITICAL_SECTION param_1)
;
;
; Referenced Globals:
;   void* PTR_LeaveCriticalSection_0057555c = 00175e92
;   void* PTR_TlsGetValue_005755c8 = 0017609c
;
; *****************************************************************************

section .text

    AND EAX,0x5755c8                    ; 00574b73 | PTR_TlsGetValue_005755c8
        ;   Label: FUN_00574b73
    JMP dword ptr [0x0057555c]          ; 00574b78 | PTR_LeaveCriticalSection_0057555c

