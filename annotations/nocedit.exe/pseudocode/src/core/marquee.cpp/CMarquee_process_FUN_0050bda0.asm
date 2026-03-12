; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl core_marquee_cpp_CMarquee_process_FUN_0050bda0(CMarquee *this_ptr,float delta_time)
;
; Parameters:
; CMarquee *       Stack[0x4]:4   this_ptr
; float            Stack[0x8]:4   delta_time
;
; *****************************************************************************

section .text

    SUB ESP,0xc                         ; 0050bda0
        ;   Label: core_marquee.cpp_CMarquee_process_FUN_0050bda0
    MOV EDX,dword ptr [ESP + 0x10]      ; 0050bda3
    LEA EAX,[EDX + 0x1a4]               ; 0050bda7
    MOV EAX,dword ptr [EAX]             ; 0050bdad
    MOV dword ptr [ESP + 0x8],EAX       ; 0050bdaf
    MOV ECX,dword ptr [EDX + 0x1a0]     ; 0050bdb3
    FILD dword ptr [ESP + 0x8]          ; 0050bdb9
    FSTP float ptr [ESP + 0x4]          ; 0050bdbd
    CMP ECX,0x1                         ; 0050bdc1
    JZ 0x0050bdf9                       ; 0050bdc4
        ;   XREF to: 0050bdf9 (CONDITIONAL_JUMP)  ; LAB_0050bdf9
    TEST ECX,ECX                        ; 0050bdc6
    JNZ 0x0050bdf5                      ; 0050bdc8
        ;   XREF to: 0050bdf5 (CONDITIONAL_JUMP)  ; LAB_0050bdf5
    FLD float ptr [ESP + 0x14]          ; 0050bdca
    FDIV float ptr [EDX + 0x178]        ; 0050bdce
    FILD dword ptr [EDX + 0x180]        ; 0050bdd4
    FXCH                                ; 0050bdda
    FADD float ptr [EDX + 0x17c]        ; 0050bddc
    FXCH                                ; 0050bde2
    FSTP float ptr [ESP]                ; 0050bde4
    FST float ptr [EDX + 0x17c]         ; 0050bde7
    FCOMP float ptr [ESP]               ; 0050bded
    FNSTSW AX                           ; 0050bdf0
    SAHF                                ; 0050bdf2
    JA 0x0050be30                       ; 0050bdf3
        ;   XREF to: 0050be30 (CONDITIONAL_JUMP)  ; LAB_0050be30
    ADD ESP,0xc                         ; 0050bdf5
        ;   Label: LAB_0050bdf5
    RET                                 ; 0050bdf8
    FLD float ptr [ESP + 0x4]           ; 0050bdf9
        ;   Label: LAB_0050bdf9
    FLD float ptr [ESP + 0x14]          ; 0050bdfd
    FMUL ST1                            ; 0050be01
    FDIV float ptr [EDX + 0x178]        ; 0050be03
    FADD float ptr [EDX + 0x17c]        ; 0050be09
    FST float ptr [EDX + 0x17c]         ; 0050be0f
    FCOMPP                              ; 0050be15
    FNSTSW AX                           ; 0050be17
    SAHF                                ; 0050be19
    JBE 0x0050bdf5                      ; 0050be1a
        ;   XREF to: 0050bdf5 (CONDITIONAL_JUMP)  ; LAB_0050bdf5
    FLD float ptr [EDX + 0x17c]         ; 0050be1c
    FSUB float ptr [ESP + 0x4]          ; 0050be22
    FSTP float ptr [EDX + 0x17c]        ; 0050be26
    ADD ESP,0xc                         ; 0050be2c
    RET                                 ; 0050be2f
    FLD float ptr [EDX + 0x17c]         ; 0050be30
        ;   Label: LAB_0050be30
    FSUB float ptr [ESP]                ; 0050be36
    FSTP float ptr [EDX + 0x17c]        ; 0050be39
    ADD ESP,0xc                         ; 0050be3f
    RET                                 ; 0050be42

