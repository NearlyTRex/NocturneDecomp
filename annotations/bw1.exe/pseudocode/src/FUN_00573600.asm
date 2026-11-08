; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00573600(int param_1)
;
;
; XREF[4]:
;   FUN_004d1a80 at 004d1bd1
;   FUN_0050ba70 at 0050c322
;   FUN_0050cc90 at 0050cfc1
;   FUN_005760b0 at 005762c9
;
; Referenced Globals:
;   undefined4 DAT_02c8065c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00573600
        ;   Label: FUN_00573600
    MOV [0x02c8065c],EAX                ; 00573604 | DAT_02c8065c
    TEST EAX,EAX                        ; 00573609
    JNZ 0x005750e0                      ; 0057360b
        ;   XREF to: 005750e0 (CONDITIONAL_JUMP)
    RET                                 ; 00573611

