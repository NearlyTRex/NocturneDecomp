; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_process_FUN_00506b60(CMarquee *this_ptr,float delta_time)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 00506b60
        ;   Label: core_marquee.cpp_CMarquee_process_FUN_00506b60
    MOV EDX,dword ptr [ESP + 0x10]      ; 00506b63
    LEA EAX,[EDX + 0x1a4]               ; 00506b67
    MOV EAX,dword ptr [EAX]             ; 00506b6d
    MOV dword ptr [ESP + 0x8],EAX       ; 00506b6f
    MOV ECX,dword ptr [EDX + 0x1a0]     ; 00506b73
    FILD dword ptr [ESP + 0x8]          ; 00506b79
    FSTP float ptr [ESP + 0x4]          ; 00506b7d
    CMP ECX,0x1                         ; 00506b81
    JZ 0x00506bb9                       ; 00506b84
        ;   XREF to: 00506bb9 (CONDITIONAL_JUMP)  ; LAB_00506bb9
    TEST ECX,ECX                        ; 00506b86
    JNZ 0x00506bb5                      ; 00506b88
        ;   XREF to: 00506bb5 (CONDITIONAL_JUMP)  ; LAB_00506bb5
    FLD float ptr [ESP + 0x14]          ; 00506b8a
    FDIV float ptr [EDX + 0x178]        ; 00506b8e
    FILD dword ptr [EDX + 0x180]        ; 00506b94
    FXCH                                ; 00506b9a
    FADD float ptr [EDX + 0x17c]        ; 00506b9c
    FXCH                                ; 00506ba2
    FSTP float ptr [ESP]                ; 00506ba4
    FST float ptr [EDX + 0x17c]         ; 00506ba7
    FCOMP float ptr [ESP]               ; 00506bad
    FNSTSW AX                           ; 00506bb0
    SAHF                                ; 00506bb2
    JA 0x00506bf0                       ; 00506bb3
        ;   XREF to: 00506bf0 (CONDITIONAL_JUMP)  ; LAB_00506bf0
    ADD ESP,0xc                         ; 00506bb5
        ;   Label: LAB_00506bb5
    RET                                 ; 00506bb8
    FLD float ptr [ESP + 0x4]           ; 00506bb9
        ;   Label: LAB_00506bb9
    FLD float ptr [ESP + 0x14]          ; 00506bbd
    FMUL ST1                            ; 00506bc1
    FDIV float ptr [EDX + 0x178]        ; 00506bc3
    FADD float ptr [EDX + 0x17c]        ; 00506bc9
    FST float ptr [EDX + 0x17c]         ; 00506bcf
    FCOMPP                              ; 00506bd5
    FNSTSW AX                           ; 00506bd7
    SAHF                                ; 00506bd9
    JBE 0x00506bb5                      ; 00506bda
        ;   XREF to: 00506bb5 (CONDITIONAL_JUMP)  ; LAB_00506bb5
    FLD float ptr [EDX + 0x17c]         ; 00506bdc
    FSUB float ptr [ESP + 0x4]          ; 00506be2
    FSTP float ptr [EDX + 0x17c]        ; 00506be6
    ADD ESP,0xc                         ; 00506bec
    RET                                 ; 00506bef
    FLD float ptr [EDX + 0x17c]         ; 00506bf0
        ;   Label: LAB_00506bf0
    FSUB float ptr [ESP]                ; 00506bf6
    FSTP float ptr [EDX + 0x17c]        ; 00506bf9
    ADD ESP,0xc                         ; 00506bff
    RET                                 ; 00506c02

