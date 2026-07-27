; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 core_set_cpp_FUN_0050ea10(void)
;
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0050ea10
        ;   Label: core_set.cpp_FUN_0050ea10
    MOV ECX,dword ptr [ESP + 0x8]       ; 0050ea14
    FLD float ptr [EDX]                 ; 0050ea18
    FCOMP float ptr [ECX]               ; 0050ea1a
    FNSTSW AX                           ; 0050ea1c
    SAHF                                ; 0050ea1e
    JZ 0x0050ea24                       ; 0050ea1f
        ;   XREF to: 0050ea24 (CONDITIONAL_JUMP)  ; LAB_0050ea24
    XOR EAX,EAX                         ; 0050ea21
        ;   Label: LAB_0050ea21
    RET                                 ; 0050ea23
    FLD float ptr [EDX + 0x4]           ; 0050ea24
        ;   Label: LAB_0050ea24
    FCOMP float ptr [ECX + 0x4]         ; 0050ea27
    FNSTSW AX                           ; 0050ea2a
    SAHF                                ; 0050ea2c
    JNZ 0x0050ea21                      ; 0050ea2d
        ;   XREF to: 0050ea21 (CONDITIONAL_JUMP)  ; LAB_0050ea21
    FLD float ptr [EDX + 0x8]           ; 0050ea2f
    FCOMP float ptr [ECX + 0x8]         ; 0050ea32
    FNSTSW AX                           ; 0050ea35
    SAHF                                ; 0050ea37
    JNZ 0x0050ea21                      ; 0050ea38
        ;   XREF to: 0050ea21 (CONDITIONAL_JUMP)  ; LAB_0050ea21
    MOV EAX,0x1                         ; 0050ea3a
    RET                                 ; 0050ea3f

