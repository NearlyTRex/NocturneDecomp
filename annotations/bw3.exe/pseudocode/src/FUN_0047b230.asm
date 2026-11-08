; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0047b230(int param_1)
;
;
; XREF[1]:
;   FUN_00524940 at 00524a8c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0047b230
        ;   Label: FUN_0047b230
    FLD float ptr [EAX + 0x594]         ; 0047b234
    FLDZ                                ; 0047b23a
    FCOMPP                              ; 0047b23c
    FNSTSW AX                           ; 0047b23e
    SAHF                                ; 0047b240
    JNC 0x0047b249                      ; 0047b241
        ;   XREF to: 0047b249 (CONDITIONAL_JUMP)  ; LAB_0047b249
    MOV EAX,0x1                         ; 0047b243
    RET                                 ; 0047b248
    XOR EAX,EAX                         ; 0047b249
        ;   Label: LAB_0047b249
    RET                                 ; 0047b24b

