; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005435f0(int param_1,int param_2)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 005435f0
        ;   Label: FUN_005435f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005435f4
    FLD float ptr [EAX + 0x4]           ; 005435f8
    FSUBR float ptr [EDX + 0x2434]      ; 005435fb
    FST float ptr [EDX + 0x2434]        ; 00543601
    FLDZ                                ; 00543607
    FCOMPP                              ; 00543609
    FNSTSW AX                           ; 0054360b
    SAHF                                ; 0054360d
    JNC 0x00543351                      ; 0054360e
        ;   XREF to: 00543351 (CONDITIONAL_JUMP)  ; LAB_00543351
    RET                                 ; 00543614

