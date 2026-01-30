; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int __cdecl core_set_cpp_FUN_00571440(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00571440
        ;   Label: core_set.cpp_FUN_00571440
    MOV ECX,dword ptr [ESP + 0x8]       ; 00571444
    FLD float ptr [EDX]                 ; 00571448
    FCOMP float ptr [ECX]               ; 0057144a
    FNSTSW AX                           ; 0057144c
    SAHF                                ; 0057144e
    JZ 0x00571457                       ; 0057144f
        ;   XREF to: 00571457 (CONDITIONAL_JUMP)  ; LAB_00571457
    MOV EAX,0x1                         ; 00571451
        ;   Label: LAB_00571451
    RET                                 ; 00571456
    FLD float ptr [EDX + 0x4]           ; 00571457
        ;   Label: LAB_00571457
    FCOMP float ptr [ECX + 0x4]         ; 0057145a
    FNSTSW AX                           ; 0057145d
    SAHF                                ; 0057145f
    JNZ 0x00571451                      ; 00571460
        ;   XREF to: 00571451 (CONDITIONAL_JUMP)  ; LAB_00571451
    FLD float ptr [EDX + 0x8]           ; 00571462
    FCOMP float ptr [ECX + 0x8]         ; 00571465
    FNSTSW AX                           ; 00571468
    SAHF                                ; 0057146a
    JNZ 0x00571451                      ; 0057146b
        ;   XREF to: 00571451 (CONDITIONAL_JUMP)  ; LAB_00571451
    XOR EAX,EAX                         ; 0057146d
    RET                                 ; 0057146f

