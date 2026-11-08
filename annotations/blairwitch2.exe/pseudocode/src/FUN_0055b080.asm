; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055b080(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_0055b0b0 at 0055b0da
;
; Referenced Globals:
;   undefined4 DAT_0264b2b4
;   undefined4 DAT_0264b2b8
;   undefined4 DAT_0264b2bc
;
; Called Functions:
;   FUN_00552cc0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 0055b080
        ;   Label: FUN_0055b080
    MOV [0x0264b2b4],EAX                ; 0055b084 | DAT_0264b2b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055b089
    MOV [0x0264b2b8],EAX                ; 0055b08d | DAT_0264b2b8
    MOV EAX,dword ptr [ESP + 0x10]      ; 0055b092
    PUSH EAX                            ; 0055b096
    PUSH dword ptr [ESP + 0x10]         ; 0055b097
    PUSH dword ptr [ESP + 0x10]         ; 0055b09b
    MOV [0x0264b2bc],EAX                ; 0055b09f | DAT_0264b2bc
    CALL FUN_00552cc0                   ; 0055b0a4
        ;   XREF to: 00552cc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00552cc0()
    ADD ESP,0xc                         ; 0055b0a9
    RET                                 ; 0055b0ac

