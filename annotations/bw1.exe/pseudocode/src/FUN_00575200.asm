; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00575200(void)
;
;
; XREF[3]:
;   FUN_0050ba70 at 0050bf8b
;   FUN_00575280 at 0057528b
;   FUN_005752a0 at 005752ab
;
; Referenced Globals:
;   undefined4 DAT_006232e8
;
; Called Functions:
;   FUN_005751c0
;
; *****************************************************************************

section .text

    PUSH 0x0                            ; 00575200
        ;   Label: FUN_00575200
    PUSH 0x0                            ; 00575202
    PUSH 0x6232e8                       ; 00575204 | DAT_006232e8
    CALL FUN_005751c0                   ; 00575209
        ;   XREF to: 005751c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005751c0()
    MOV EAX,[0x006232e8]                ; 0057520e | DAT_006232e8
    ADD ESP,0xc                         ; 00575213
    RET                                 ; 00575216

