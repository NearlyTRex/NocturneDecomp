; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004e7570(undefined4 param_1,int param_2)
;
;
; XREF[4]:
;   FUN_004e6c40 at 004e6ebb
;   FUN_004e6f20 at 004e71ba
;   FUN_004e7220 at 004e7231
;   FUN_004e76f0 at 004e774b
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x8]       ; 004e7570
        ;   Label: FUN_004e7570
    DEC EAX                             ; 004e7574
    TEST EAX,EAX                        ; 004e7575
    JL 0x004e757a                       ; 004e7577
        ;   XREF to: 004e757a (CONDITIONAL_JUMP)  ; LAB_004e757a
    RET                                 ; 004e7579
    MOV EAX,0xb                         ; 004e757a
        ;   Label: LAB_004e757a
    RET                                 ; 004e757f

