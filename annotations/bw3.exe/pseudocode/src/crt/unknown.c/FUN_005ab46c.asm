; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005ab46c(void)
;
;
; XREF[16]:
;   crt_io.c__chmod_FUN_005a4bd0 at 005a4be3
;   crt_stdio.c_rename_FUN_005a5f20 at 005a5f36
;   crt_stdlib.c__fullpath_FUN_005a53f0 at 005a5497
;   crt_unknown.c_FUN_005a55b0 at 005a55be
;   crt_unknown.c_FUN_005a9440 at 005a94e7
;   crt_unknown.c_FUN_005a9cf0 at 005a9d6f
;   crt_unknown.c_FUN_005aa0f0 at 005aa280
;   crt_unknown.c_FUN_005aa380 at 005aa3d6
;   crt_unknown.c_FUN_005aac30 at 005aac9c
;   crt_unknown.c_FUN_005aaed4 at 005ab009
;   ... and 6 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005b35b0 = 001b3f06
;
; Called Functions:
;   crt_unknown.c_FUN_005ab400
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5b35b0]        ; 005ab46c | PTR_GetLastError_005b35b0
        ;   Label: crt_unknown.c_FUN_005ab46c
    PUSH EAX                            ; 005ab473
    CALL crt_unknown.c_FUN_005ab400     ; 005ab474
        ;   XREF to: 005ab400 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005ab400()
    ADD ESP,0x4                         ; 005ab479
    RET                                 ; 005ab47c

