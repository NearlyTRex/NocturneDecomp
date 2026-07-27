; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_errno_c___set_errno_FUN_0056c73c(void)
;
;
; XREF[18]:
;   FUN_005689c0 at 00568a3f
;   FUN_00568f70 at 00569017
;   FUN_00569fb0 at 0056a01c
;   FUN_0056b960 at 0056baf0
;   FUN_0056bbf0 at 0056bbfe
;   FUN_0056bc10 at 0056bc66
;   FUN_0056c5f0 at 0056c61c
;   FUN_0056c864 at 0056c999
;   FUN_0056cb60 at 0056cb8e
;   FUN_0056f170 at 0056f17f
;   ... and 8 more
;
; Referenced Globals:
;   void* PTR_GetLastError_0057551c = 00175d70
;
; Called Functions:
;   FUN_0056c6d0
;   GetLastError
;
; *****************************************************************************

section .text

    CALL dword ptr CS:[0x57551c]        ; 0056c73c | PTR_GetLastError_0057551c
        ;   Label: crt_errno.c___set_errno_FUN_0056c73c
    PUSH EAX                            ; 0056c743
    CALL FUN_0056c6d0                   ; 0056c744
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c6d0()
    ADD ESP,0x4                         ; 0056c749
    RET                                 ; 0056c74c

