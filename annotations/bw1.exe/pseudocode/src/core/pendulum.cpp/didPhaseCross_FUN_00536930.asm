; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_pendulum_cpp_didPhaseCross_FUN_00536930(float threshold,float old_phase,float new_phase)
;
; Parameters:
; float            Stack[0x4]:4   threshold
; float            Stack[0x8]:4   old_phase
; float            Stack[0xc]:4   new_phase
;
; Referenced Globals:
;   undefined4 DAT_005ecc85
;   undefined4 DAT_005ecc8d
;   undefined4 DAT_005ecc95
;
; *****************************************************************************

section .text

    FLD float ptr [ESP + 0x4]           ; 00536930
        ;   Label: core_pendulum.cpp_didPhaseCross_FUN_00536930
    FADD double ptr [0x005ecc85]        ; 00536934 | DAT_005ecc85
    FLD float ptr [ESP + 0x8]           ; 0053693a
    FCOMPP                              ; 0053693e
    FNSTSW AX                           ; 00536940
    SAHF                                ; 00536942
    JC 0x00536a01                       ; 00536943
        ;   XREF to: 00536a01 (CONDITIONAL_JUMP)  ; LAB_00536a01
    FLD float ptr [ESP + 0x4]           ; 00536949
        ;   Label: LAB_00536949
    FADD double ptr [0x005ecc8d]        ; 0053694d | DAT_005ecc8d
    FLD float ptr [ESP + 0x8]           ; 00536953
    FCOMPP                              ; 00536957
    FNSTSW AX                           ; 00536959
    SAHF                                ; 0053695b
    JBE 0x0053696c                      ; 0053695c
        ;   XREF to: 0053696c (CONDITIONAL_JUMP)  ; LAB_0053696c
    FLD float ptr [ESP + 0x8]           ; 0053695e
    FADD float ptr [0x005ecc95]         ; 00536962 | DAT_005ecc95
    FSTP float ptr [ESP + 0x8]          ; 00536968
    FLD float ptr [ESP + 0x8]           ; 0053696c
        ;   Label: LAB_0053696c
    FCOMP float ptr [ESP + 0x4]         ; 00536970
    FNSTSW AX                           ; 00536974
    SAHF                                ; 00536976
    JA 0x00536a10                       ; 00536977
        ;   XREF to: 00536a10 (CONDITIONAL_JUMP)  ; LAB_00536a10
    FLD float ptr [ESP + 0xc]           ; 0053697d
    FCOMP float ptr [ESP + 0x8]         ; 00536981
    FNSTSW AX                           ; 00536985
    SAHF                                ; 00536987
    JNC 0x00536994                      ; 00536988
        ;   XREF to: 00536994 (CONDITIONAL_JUMP)  ; LAB_00536994
    FLD1                                ; 0053698a
    FADD float ptr [ESP + 0xc]          ; 0053698c
    FSTP float ptr [ESP + 0xc]          ; 00536990
    FLD float ptr [ESP + 0xc]           ; 00536994
        ;   Label: LAB_00536994
    FCOMP float ptr [ESP + 0x8]         ; 00536998
    FNSTSW AX                           ; 0053699c
    SAHF                                ; 0053699e
    JNC 0x005369ab                      ; 0053699f
        ;   XREF to: 005369ab (CONDITIONAL_JUMP)  ; LAB_005369ab
    FLD1                                ; 005369a1
    FADD float ptr [ESP + 0xc]          ; 005369a3
    FSTP float ptr [ESP + 0xc]          ; 005369a7
    FLD float ptr [ESP + 0x8]           ; 005369ab
        ;   Label: LAB_005369ab
    FLD1                                ; 005369af
    FADDP                               ; 005369b1
    FLD float ptr [ESP + 0xc]           ; 005369b3
    FCOMPP                              ; 005369b7
    FNSTSW AX                           ; 005369b9
    SAHF                                ; 005369bb
    JBE 0x005369cc                      ; 005369bc
        ;   XREF to: 005369cc (CONDITIONAL_JUMP)  ; LAB_005369cc
    FLD float ptr [ESP + 0xc]           ; 005369be
    FADD float ptr [0x005ecc95]         ; 005369c2 | DAT_005ecc95
    FSTP float ptr [ESP + 0xc]          ; 005369c8
    FLD float ptr [ESP + 0x8]           ; 005369cc
        ;   Label: LAB_005369cc
    FLD1                                ; 005369d0
    FADDP                               ; 005369d2
    FLD float ptr [ESP + 0xc]           ; 005369d4
    FCOMPP                              ; 005369d8
    FNSTSW AX                           ; 005369da
    SAHF                                ; 005369dc
    JBE 0x005369ed                      ; 005369dd
        ;   XREF to: 005369ed (CONDITIONAL_JUMP)  ; LAB_005369ed
    FLD float ptr [ESP + 0xc]           ; 005369df
    FADD float ptr [0x005ecc95]         ; 005369e3 | DAT_005ecc95
    FSTP float ptr [ESP + 0xc]          ; 005369e9
    FLD float ptr [ESP + 0xc]           ; 005369ed
        ;   Label: LAB_005369ed
    FCOMP float ptr [ESP + 0x4]         ; 005369f1
    FNSTSW AX                           ; 005369f5
    SAHF                                ; 005369f7
    SETA AL                             ; 005369f8
    AND EAX,0xff                        ; 005369fb
    RET                                 ; 00536a00
    FLD1                                ; 00536a01
        ;   Label: LAB_00536a01
    FADD float ptr [ESP + 0x8]          ; 00536a03
    FSTP float ptr [ESP + 0x8]          ; 00536a07
    JMP 0x00536949                      ; 00536a0b
        ;   XREF to: 00536949 (UNCONDITIONAL_JUMP)  ; LAB_00536949
    XOR EAX,EAX                         ; 00536a10
        ;   Label: LAB_00536a10
    RET                                 ; 00536a12

