; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005ab46c(void)
;
;
; XREF[15]:
;   FUN_005a4bd0 at 005a4be3
;   FUN_005a4e10 at 005a4e20
;   FUN_005a53f0 at 005a5497
;   FUN_005a55b0 at 005a55be
;   FUN_005a5f20 at 005a5f36
;   FUN_005a9440 at 005a94e7
;   FUN_005a9cf0 at 005a9d6f
;   FUN_005aa0f0 at 005aa280
;   FUN_005aa380 at 005aa3d6
;   FUN_005aac30 at 005aac9c
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005b35b0 = 001b3f06
;
; Called Functions:
;   FUN_005ab400
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5b35b0]        ; 005ab46c | PTR_GetLastError_005b35b0
        ;   Label: FUN_005ab46c
    PUSH EAX                            ; 005ab473
    CALL FUN_005ab400                   ; 005ab474
        ;   XREF to: 005ab400 (UNCONDITIONAL_CALL)  ; undefined FUN_005ab400()
    ADD ESP,0x4                         ; 005ab479
    RET                                 ; 005ab47c

