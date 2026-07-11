; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056c73c(void)
;
;
; XREF[16]:
;   FUN_00565d00 at 00565da7
;   FUN_00565dd0 at 00565de3
;   FUN_00565e40 at 00565e50
;   FUN_00566570 at 0056657e
;   FUN_00566f00 at 00566f16
;   FUN_005689c0 at 00568a3f
;   FUN_00568f70 at 00569017
;   FUN_00569fb0 at 0056a01c
;   FUN_0056b960 at 0056baf0
;   FUN_0056bbf0 at 0056bbfe
;   ... and 6 more
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
        ;   Label: FUN_0056c73c
    PUSH EAX                            ; 0056c743
    CALL FUN_0056c6d0                   ; 0056c744
        ;   XREF to: 0056c6d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056c6d0()
    ADD ESP,0x4                         ; 0056c749
    RET                                 ; 0056c74c

