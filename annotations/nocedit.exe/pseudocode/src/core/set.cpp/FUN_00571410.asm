; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown undefined core_set.cpp_FUN_00571410()
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571410
        ;   Label: core_set.cpp_FUN_00571410
    MOV ECX,dword ptr [ESP + 0x8]       ; 00571414
    FLD float ptr [EDX]                 ; 00571418
    FCOMP float ptr [ECX]               ; 0057141a
    FNSTSW AX                           ; 0057141c
    SAHF                                ; 0057141e
    JZ 0x00571424                       ; 0057141f | LAB_00571424
        ;   XREF to: 00571424 (CONDITIONAL_JUMP)
    XOR EAX,EAX                         ; 00571421
        ;   Label: LAB_00571421
    RET                                 ; 00571423
    FLD float ptr [EDX + 0x4]           ; 00571424
        ;   Label: LAB_00571424
    FCOMP float ptr [ECX + 0x4]         ; 00571427
    FNSTSW AX                           ; 0057142a
    SAHF                                ; 0057142c
    JNZ 0x00571421                      ; 0057142d | LAB_00571421
        ;   XREF to: 00571421 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x8]           ; 0057142f
    FCOMP float ptr [ECX + 0x8]         ; 00571432
    FNSTSW AX                           ; 00571435
    SAHF                                ; 00571437
    JNZ 0x00571421                      ; 00571438 | LAB_00571421
        ;   XREF to: 00571421 (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 0057143a
    RET                                 ; 0057143f

