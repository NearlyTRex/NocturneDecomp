; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_00574a77(HGLOBAL param_1)
;
;
; Referenced Globals:
;   void* PTR_GlobalLock_0057554c = 00175e42
;   void* PTR_GlobalUnlock_00575554 = 00175e66
;
; *****************************************************************************

section .text

    AND EAX,0x575554                    ; 00574a77 | PTR_GlobalUnlock_00575554
        ;   Label: crt_unknown.c_FUN_00574a77
    JMP dword ptr [0x0057554c]          ; 00574a7c | PTR_GlobalLock_0057554c

