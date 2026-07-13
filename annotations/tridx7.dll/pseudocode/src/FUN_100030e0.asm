; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_100030e0(undefined4 param_1)
;
;
; XREF[2]:
;   FUN_10001090 at 10001143
;   FUN_10001180 at 100011ec
;
; Referenced Globals:
;   undefined4 DAT_10014138
;
; Called Functions:
;   FUN_10003a80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100030e0
        ;   Label: FUN_100030e0
    PUSH EAX                            ; 100030e4
    MOV [0x10014138],EAX                ; 100030e5 | DAT_10014138
    CALL FUN_10003a80                   ; 100030ea
        ;   XREF to: 10003a80 (UNCONDITIONAL_CALL)  ; undefined FUN_10003a80()
    ADD ESP,0x4                         ; 100030ef
    RET                                 ; 100030f2

