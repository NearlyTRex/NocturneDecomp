; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e7560(undefined4 param_1,int param_2)
;
;
; XREF[3]:
;   FUN_004e68c0 at 004e692f
;   FUN_004e6c40 at 004e6ed7
;   FUN_004e73c0 at 004e73e7
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7560
        ;   Label: FUN_004e7560
    INC EAX                             ; 004e7564
    CMP EAX,0xc                         ; 004e7565
    JL 0x004e756c                       ; 004e7568
        ;   XREF to: 004e756c (CONDITIONAL_JUMP)  ; LAB_004e756c
    XOR EAX,EAX                         ; 004e756a
    RET                                 ; 004e756c
        ;   Label: LAB_004e756c

