; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00560c00(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4)
;
;
; XREF[1]:
;   FUN_00560c30 at 00560c5a
;
; Referenced Globals:
;   undefined4 DAT_02cf56a4
;   undefined4 DAT_02cf56a8
;   undefined4 DAT_02cf56ac
;
; Called Functions:
;   FUN_00558860
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 00560c00
        ;   Label: FUN_00560c00
    MOV [0x02cf56a4],EAX                ; 00560c04 | DAT_02cf56a4
    MOV EAX,dword ptr [ESP + 0xc]       ; 00560c09
    MOV [0x02cf56a8],EAX                ; 00560c0d | DAT_02cf56a8
    MOV EAX,dword ptr [ESP + 0x10]      ; 00560c12
    PUSH EAX                            ; 00560c16
    PUSH dword ptr [ESP + 0x10]         ; 00560c17
    PUSH dword ptr [ESP + 0x10]         ; 00560c1b
    MOV [0x02cf56ac],EAX                ; 00560c1f | DAT_02cf56ac
    CALL FUN_00558860                   ; 00560c24
        ;   XREF to: 00558860 (UNCONDITIONAL_CALL)  ; undefined FUN_00558860()
    ADD ESP,0xc                         ; 00560c29
    RET                                 ; 00560c2c

