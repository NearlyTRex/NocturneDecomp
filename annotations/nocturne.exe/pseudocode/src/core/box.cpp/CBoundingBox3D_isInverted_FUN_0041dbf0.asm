; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_box_cpp_CBoundingBox3D_isInverted_FUN_0041dbf0(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0041dbf0
        ;   Label: core_box.cpp_CBoundingBox3D_isInverted_FUN_0041dbf0
    FLD float ptr [EDX]                 ; 0041dbf4
    FCOMP float ptr [EDX + 0xc]         ; 0041dbf6
    FNSTSW AX                           ; 0041dbf9
    SAHF                                ; 0041dbfb
    JA 0x0041dc14                       ; 0041dbfc
        ;   XREF to: 0041dc14 (CONDITIONAL_JUMP)  ; LAB_0041dc14
    FLD float ptr [EDX + 0x4]           ; 0041dbfe
    FCOMP float ptr [EDX + 0x10]        ; 0041dc01
    FNSTSW AX                           ; 0041dc04
    SAHF                                ; 0041dc06
    JA 0x0041dc14                       ; 0041dc07
        ;   XREF to: 0041dc14 (CONDITIONAL_JUMP)  ; LAB_0041dc14
    FLD float ptr [EDX + 0x8]           ; 0041dc09
    FCOMP float ptr [EDX + 0x14]        ; 0041dc0c
    FNSTSW AX                           ; 0041dc0f
    SAHF                                ; 0041dc11
    JBE 0x0041dc1a                      ; 0041dc12
        ;   XREF to: 0041dc1a (CONDITIONAL_JUMP)  ; LAB_0041dc1a
    MOV EAX,0x1                         ; 0041dc14
        ;   Label: LAB_0041dc14
    RET                                 ; 0041dc19
    XOR EAX,EAX                         ; 0041dc1a
        ;   Label: LAB_0041dc1a
    RET                                 ; 0041dc1c

