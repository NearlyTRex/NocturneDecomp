; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl int core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0(CBoundingBox3D * this_ptr)
;
; Parameters:
; CBoundingBox3D * Stack[0x4]:4   this_ptr
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00420fe0
        ;   Label: core_box.cpp_CBoundingBox3D_isInverted_FUN_00420fe0
    FLD float ptr [EDX]                 ; 00420fe4
    FCOMP float ptr [EDX + 0xc]         ; 00420fe6
    FNSTSW AX                           ; 00420fe9
    SAHF                                ; 00420feb
    JA 0x00421004                       ; 00420fec | LAB_00421004
        ;   XREF to: 00421004 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x4]           ; 00420fee
    FCOMP float ptr [EDX + 0x10]        ; 00420ff1
    FNSTSW AX                           ; 00420ff4
    SAHF                                ; 00420ff6
    JA 0x00421004                       ; 00420ff7 | LAB_00421004
        ;   XREF to: 00421004 (CONDITIONAL_JUMP)
    FLD float ptr [EDX + 0x8]           ; 00420ff9
    FCOMP float ptr [EDX + 0x14]        ; 00420ffc
    FNSTSW AX                           ; 00420fff
    SAHF                                ; 00421001
    JBE 0x0042100a                      ; 00421002 | LAB_0042100a
        ;   XREF to: 0042100a (CONDITIONAL_JUMP)
    MOV EAX,0x1                         ; 00421004
        ;   Label: LAB_00421004
    RET                                 ; 00421009
    XOR EAX,EAX                         ; 0042100a
        ;   Label: LAB_0042100a
    RET                                 ; 0042100c

