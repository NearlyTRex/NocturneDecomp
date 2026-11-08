; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00441310(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_004486c0 at 004486e3
;   FUN_004bdfb0 at 004be2d7
;
; Referenced Globals:
;   undefined1* PTR_FUN_005dd494 = 00441e70
;
; Called Functions:
;   FUN_00440800
;   FUN_00440bd0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00441310
        ;   Label: FUN_00441310
    PUSH EAX                            ; 00441314
    CALL FUN_00440800                   ; 00441315
        ;   XREF to: 00440800 (UNCONDITIONAL_CALL)  ; undefined FUN_00440800()
    ADD ESP,0x4                         ; 0044131a
    ADD EAX,0x4                         ; 0044131d
    PUSH EAX                            ; 00441320
    CALL FUN_00440bd0                   ; 00441321
        ;   XREF to: 00440bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00440bd0()
    ADD ESP,0x4                         ; 00441326
    SUB EAX,0x4                         ; 00441329
    MOV EDX,dword ptr [ESP + 0x8]       ; 0044132c
    MOV dword ptr [EAX],0x5dd494        ; 00441330 | PTR_FUN_005dd494
    MOV dword ptr [EAX + 0x20],EDX      ; 00441336
    MOV EDX,dword ptr [ESP + 0xc]       ; 00441339
    MOV dword ptr [EAX + 0x24],EDX      ; 0044133d
    RET                                 ; 00441340

