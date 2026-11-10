; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_process_FUN_004e7ec0(CMarquee *this_ptr,float delta_time)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 004e7ec0
        ;   Label: core_marquee.cpp_CMarquee_process_FUN_004e7ec0
    MOV EDX,dword ptr [ESP + 0x10]      ; 004e7ec3
    LEA EAX,[EDX + 0x300]               ; 004e7ec7
    MOV EAX,dword ptr [EAX]             ; 004e7ecd
    MOV dword ptr [ESP + 0x8],EAX       ; 004e7ecf
    MOV ECX,dword ptr [EDX + 0x2fc]     ; 004e7ed3
    FILD dword ptr [ESP + 0x8]          ; 004e7ed9
    FSTP float ptr [ESP + 0x4]          ; 004e7edd
    CMP ECX,0x1                         ; 004e7ee1
    JZ 0x004e7f19                       ; 004e7ee4
        ;   XREF to: 004e7f19 (CONDITIONAL_JUMP)  ; LAB_004e7f19
    TEST ECX,ECX                        ; 004e7ee6
    JNZ 0x004e7f15                      ; 004e7ee8
        ;   XREF to: 004e7f15 (CONDITIONAL_JUMP)  ; LAB_004e7f15
    FLD float ptr [ESP + 0x14]          ; 004e7eea
    FDIV float ptr [EDX + 0x2d4]        ; 004e7eee
    FILD dword ptr [EDX + 0x2dc]        ; 004e7ef4
    FXCH                                ; 004e7efa
    FADD float ptr [EDX + 0x2d8]        ; 004e7efc
    FXCH                                ; 004e7f02
    FSTP float ptr [ESP]                ; 004e7f04
    FST float ptr [EDX + 0x2d8]         ; 004e7f07
    FCOMP float ptr [ESP]               ; 004e7f0d
    FNSTSW AX                           ; 004e7f10
    SAHF                                ; 004e7f12
    JA 0x004e7f50                       ; 004e7f13
        ;   XREF to: 004e7f50 (CONDITIONAL_JUMP)  ; LAB_004e7f50
    ADD ESP,0xc                         ; 004e7f15
        ;   Label: LAB_004e7f15
    RET                                 ; 004e7f18
    FLD float ptr [ESP + 0x4]           ; 004e7f19
        ;   Label: LAB_004e7f19
    FLD float ptr [ESP + 0x14]          ; 004e7f1d
    FMUL ST1                            ; 004e7f21
    FDIV float ptr [EDX + 0x2d4]        ; 004e7f23
    FADD float ptr [EDX + 0x2d8]        ; 004e7f29
    FST float ptr [EDX + 0x2d8]         ; 004e7f2f
    FCOMPP                              ; 004e7f35
    FNSTSW AX                           ; 004e7f37
    SAHF                                ; 004e7f39
    JBE 0x004e7f15                      ; 004e7f3a
        ;   XREF to: 004e7f15 (CONDITIONAL_JUMP)  ; LAB_004e7f15
    FLD float ptr [EDX + 0x2d8]         ; 004e7f3c
    FSUB float ptr [ESP + 0x4]          ; 004e7f42
    FSTP float ptr [EDX + 0x2d8]        ; 004e7f46
    ADD ESP,0xc                         ; 004e7f4c
    RET                                 ; 004e7f4f
    FLD float ptr [EDX + 0x2d8]         ; 004e7f50
        ;   Label: LAB_004e7f50
    FSUB float ptr [ESP]                ; 004e7f56
    FSTP float ptr [EDX + 0x2d8]        ; 004e7f59
    ADD ESP,0xc                         ; 004e7f5f
    RET                                 ; 004e7f62

