; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c862c(void)
;
;
; XREF[16]:
;   crt_io.c__chmod_FUN_005c1dc0 at 005c1dd3
;   crt_stdio.c_rename_FUN_005c30b0 at 005c30c6
;   crt_stdlib.c__fullpath_FUN_005c2500 at 005c25a7
;   crt_unknown.c_FUN_005c26c0 at 005c26ce
;   crt_unknown.c_FUN_005c65d0 at 005c6677
;   crt_unknown.c_FUN_005c6e80 at 005c6eff
;   crt_unknown.c_FUN_005c7280 at 005c7410
;   crt_unknown.c_FUN_005c7510 at 005c7566
;   crt_unknown.c_FUN_005c7dc0 at 005c7e2c
;   crt_unknown.c_FUN_005c8094 at 005c81c9
;   ... and 6 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005d05b0 = 001d0f00
;
; Called Functions:
;   crt_unknown.c_FUN_005c85c0
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5d05b0]        ; 005c862c | PTR_GetLastError_005d05b0
        ;   Label: crt_unknown.c_FUN_005c862c
    PUSH EAX                            ; 005c8633
    CALL crt_unknown.c_FUN_005c85c0     ; 005c8634
        ;   XREF to: 005c85c0 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c85c0()
    ADD ESP,0x4                         ; 005c8639
    RET                                 ; 005c863c

