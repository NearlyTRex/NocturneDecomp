; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005c036c(void)
;
;
; XREF[16]:
;   crt_io.c__chmod_FUN_005b99e0 at 005b99f3
;   crt_stdio.c_rename_FUN_005bacf0 at 005bad06
;   crt_stdlib.c__fullpath_FUN_005ba120 at 005ba1c7
;   crt_unknown.c_FUN_005ba2e0 at 005ba2ee
;   crt_unknown.c_FUN_005be300 at 005be3a7
;   crt_unknown.c_FUN_005bebb0 at 005bec2f
;   crt_unknown.c_FUN_005befc0 at 005bf150
;   crt_unknown.c_FUN_005bf250 at 005bf2a6
;   crt_unknown.c_FUN_005bfb00 at 005bfb6c
;   crt_unknown.c_FUN_005bfdd4 at 005bff09
;   ... and 6 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005c85a0 = 001c8ed8
;
; Called Functions:
;   crt_unknown.c_FUN_005c0300
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5c85a0]        ; 005c036c | PTR_GetLastError_005c85a0
        ;   Label: crt_unknown.c_FUN_005c036c
    PUSH EAX                            ; 005c0373
    CALL crt_unknown.c_FUN_005c0300     ; 005c0374
        ;   XREF to: 005c0300 (UNCONDITIONAL_CALL)  ; undefined crt_unknown.c_FUN_005c0300()
    ADD ESP,0x4                         ; 005c0379
    RET                                 ; 005c037c

