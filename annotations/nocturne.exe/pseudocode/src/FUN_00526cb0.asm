; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00526cb0(int param_1)
;
;
; XREF[4]:
;   FUN_0049f930 at 0049fa90
;   FUN_004d12e0 at 004d1b6e
;   FUN_004d23d0 at 004d26bd
;   FUN_005289f0 at 00528b95
;
; Referenced Globals:
;   undefined4 DAT_02dc8324
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00526cb0
        ;   Label: FUN_00526cb0
    MOV [0x02dc8324],EAX                ; 00526cb4 | DAT_02dc8324
    TEST EAX,EAX                        ; 00526cb9
    JNZ 0x00528080                      ; 00526cbb
        ;   XREF to: 00528080 (CONDITIONAL_JUMP)
    RET                                 ; 00526cc1

