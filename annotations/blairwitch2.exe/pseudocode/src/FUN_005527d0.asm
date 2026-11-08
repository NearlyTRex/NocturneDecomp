; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005527d0(void)
;
;
; XREF[3]:
;   FUN_004ed260 at 004ed799
;   FUN_00552850 at 0055285b
;   FUN_00552870 at 0055287b
;
; Referenced Globals:
;   undefined4 DAT_0061bc98
;
; Called Functions:
;   FUN_00552790
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 005527d0
        ;   Label: FUN_005527d0
    PUSH 0x0                            ; 005527d2
    PUSH 0x61bc98                       ; 005527d4 | DAT_0061bc98
    CALL FUN_00552790                   ; 005527d9
        ;   XREF to: 00552790 (UNCONDITIONAL_CALL)  ; undefined FUN_00552790()
    MOV EAX,[0x0061bc98]                ; 005527de | DAT_0061bc98
    ADD ESP,0xc                         ; 005527e3
    RET                                 ; 005527e6

