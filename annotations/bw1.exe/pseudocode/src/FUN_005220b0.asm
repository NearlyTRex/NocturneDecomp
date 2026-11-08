; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005220b0(void)
;
;
; XREF[1]:
;   FUN_00509e20 at 00509eaa
;
; Referenced Globals:
;   undefined4 DAT_005ea46b
;   undefined4 DAT_01d33f6c
;
; *****************************************************************************

section .text

    FLD float ptr [0x01d33f6c]          ; 005220b0 | DAT_01d33f6c
        ;   Label: FUN_005220b0
    FCOMP double ptr [0x005ea46b]       ; 005220b6 | DAT_005ea46b
    FNSTSW AX                           ; 005220bc
    SAHF                                ; 005220be
    JC 0x005220c4                       ; 005220bf
        ;   XREF to: 005220c4 (CONDITIONAL_JUMP)  ; LAB_005220c4
    XOR EAX,EAX                         ; 005220c1
    RET                                 ; 005220c3
    MOV EAX,0x1                         ; 005220c4
        ;   Label: LAB_005220c4
    RET                                 ; 005220c9

