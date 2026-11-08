; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b2410(void)
;
;
; XREF[2]:
;   FUN_005030e0 at 0050315e
;   FUN_00503a30 at 00503a88
;
; Referenced Globals:
;   void* PTR_timeEndPeriod_005d0454 = 001d0924
;
; Called Functions:
;   timeEndPeriod
;
; *****************************************************************************

section .text

    PUSH 0x1                            ; 005b2410
        ;   Label: FUN_005b2410
    CALL dword ptr CS:[0x5d0454]        ; 005b2412 | PTR_timeEndPeriod_005d0454
    RET                                 ; 005b2419

