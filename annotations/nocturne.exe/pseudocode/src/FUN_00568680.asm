; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00568680(void)
;
;
; XREF[1]:
;   FUN_005633fc at 00563404
;
; Referenced Globals:
;   void* PTR_GetCurrentProcessId_005754fc = 00175cd2
;
; Called Functions:
;   GetCurrentProcessId
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5754fc]        ; 00568680 | PTR_GetCurrentProcessId_005754fc
        ;   Label: FUN_00568680
    RET                                 ; 00568687

