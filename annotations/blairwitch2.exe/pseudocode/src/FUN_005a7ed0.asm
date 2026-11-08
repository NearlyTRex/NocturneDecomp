; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; bool FUN_005a7ed0(void)
;
;
; XREF[9]:
;   FUN_00450c60 at 00451695
;   FUN_005a0380 at 005a0470
;   FUN_005a0bd0 at 005a0cc2
;   FUN_005a61f0 at 005a6353
;   FUN_005a6ed0 at 005a7038
;   FUN_005aae80 at 005aaf77
;   FUN_005ab260 at 005ab4c4
;   FUN_005ac960 at 005aca3e
;   FUN_005ad530 at 005ad7c8
;
; Referenced Globals:
;   undefined4 DAT_0061ec60
;
; Called Functions:
;   FUN_0040cfc0
;
; *****************************************************************************

section .text

    PUSH 0xffff                         ; 005a7ed0
        ;   Label: FUN_005a7ed0
    PUSH 0x0                            ; 005a7ed5
    CALL FUN_0040cfc0                   ; 005a7ed7
        ;   XREF to: 0040cfc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cfc0()
    MOV EDX,dword ptr [0x0061ec60]      ; 005a7edc | DAT_0061ec60
    ADD ESP,0x8                         ; 005a7ee2
    CMP EAX,EDX                         ; 005a7ee5
    SETL AL                             ; 005a7ee7
    AND EAX,0xff                        ; 005a7eea
    RET                                 ; 005a7eef

