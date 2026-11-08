; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c036c(void)
;
;
; XREF[15]:
;   FUN_005b99e0 at 005b99f3
;   FUN_005b9c20 at 005b9c30
;   FUN_005ba120 at 005ba1c7
;   FUN_005ba2e0 at 005ba2ee
;   FUN_005bacf0 at 005bad06
;   FUN_005be300 at 005be3a7
;   FUN_005bebb0 at 005bec2f
;   FUN_005befc0 at 005bf150
;   FUN_005bf250 at 005bf2a6
;   FUN_005bfb00 at 005bfb6c
;   ... and 5 more
;
; Referenced Globals:
;   void* PTR_GetLastError_005c85a0 = 001c8ed8
;
; Called Functions:
;   FUN_005c0300
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x5c85a0]        ; 005c036c | PTR_GetLastError_005c85a0
        ;   Label: FUN_005c036c
    PUSH EAX                            ; 005c0373
    CALL FUN_005c0300                   ; 005c0374
        ;   XREF to: 005c0300 (UNCONDITIONAL_CALL)  ; undefined FUN_005c0300()
    ADD ESP,0x4                         ; 005c0379
    RET                                 ; 005c037c

