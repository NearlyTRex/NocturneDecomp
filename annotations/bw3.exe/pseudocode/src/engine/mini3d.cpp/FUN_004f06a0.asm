; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f06a0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f0ab0 at 004f0b73
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f06a0
        ;   Label: engine_mini3d.cpp_FUN_004f06a0
    SUB ESP,0x4                         ; 004f06a1
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f06a4
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f06a8
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f06ac
    FLD float ptr [ECX + 0x4]           ; 004f06b0
    FADD float ptr [EAX + 0x8]          ; 004f06b3
    FLD float ptr [EAX + 0x4]           ; 004f06b6
    FADD float ptr [ECX + 0x8]          ; 004f06b9
    FSUBP                               ; 004f06bc
    FLD float ptr [EAX + 0x8]           ; 004f06be
    FSUB float ptr [EAX + 0x4]          ; 004f06c1
    FDIVRP                              ; 004f06c4
    FLD float ptr [ECX + 0x8]           ; 004f06c6
    FSUB float ptr [EAX + 0x8]          ; 004f06c9
    FXCH                                ; 004f06cc
    FSTP float ptr [ESP]                ; 004f06ce
    FMUL float ptr [ESP]                ; 004f06d1
    FADD float ptr [EAX + 0x8]          ; 004f06d4
    FST float ptr [EDX + 0x8]           ; 004f06d7
    FSTP float ptr [EDX + 0x4]          ; 004f06da
    FLD float ptr [ECX]                 ; 004f06dd
    FSUB float ptr [EAX]                ; 004f06df
    FMUL float ptr [ESP]                ; 004f06e1
    FADD float ptr [EAX]                ; 004f06e4
    MOV EBX,dword ptr [0x01d7a694]      ; 004f06e6 | DAT_01d7a694
    FSTP float ptr [EDX]                ; 004f06ec
    TEST EBX,EBX                        ; 004f06ee
    JZ 0x004f06f7                       ; 004f06f0
        ;   XREF to: 004f06f7 (CONDITIONAL_JUMP)  ; LAB_004f06f7
    ADD ESP,0x4                         ; 004f06f2
    POP EBX                             ; 004f06f5
    RET                                 ; 004f06f6
    FLD float ptr [ECX + 0x2c]          ; 004f06f7
        ;   Label: LAB_004f06f7
    FSUB float ptr [EAX + 0x2c]         ; 004f06fa
    FLD float ptr [ESP]                 ; 004f06fd
    FXCH                                ; 004f0700
    FMUL ST1                            ; 004f0702
    FADD float ptr [EAX + 0x2c]         ; 004f0704
    FSTP float ptr [EDX + 0x2c]         ; 004f0707
    FLD float ptr [ECX + 0x28]          ; 004f070a
    FSUB float ptr [EAX + 0x28]         ; 004f070d
    FMUL ST1                            ; 004f0710
    FADD float ptr [EAX + 0x28]         ; 004f0712
    FSTP float ptr [EDX + 0x28]         ; 004f0715
    FLD float ptr [ECX + 0x24]          ; 004f0718
    FSUB float ptr [EAX + 0x24]         ; 004f071b
    FMUL ST1                            ; 004f071e
    FADD float ptr [EAX + 0x24]         ; 004f0720
    FSTP float ptr [EDX + 0x24]         ; 004f0723
    FLD float ptr [ECX + 0x1c]          ; 004f0726
    FSUB float ptr [EAX + 0x1c]         ; 004f0729
    FMUL ST1                            ; 004f072c
    FADD float ptr [EAX + 0x1c]         ; 004f072e
    FSTP float ptr [EDX + 0x1c]         ; 004f0731
    FLD float ptr [ECX + 0x20]          ; 004f0734
    FSUB float ptr [EAX + 0x20]         ; 004f0737
    FMUL ST1                            ; 004f073a
    FADD float ptr [EAX + 0x20]         ; 004f073c
    FSTP float ptr [EDX + 0x20]         ; 004f073f
    FLD float ptr [ECX + 0x30]          ; 004f0742
    FSUB float ptr [EAX + 0x30]         ; 004f0745
    FMUL ST1                            ; 004f0748
    FADD float ptr [EAX + 0x30]         ; 004f074a
    FSTP float ptr [EDX + 0x30]         ; 004f074d
    FLD float ptr [ECX + 0x34]          ; 004f0750
    FSUB float ptr [EAX + 0x34]         ; 004f0753
    FMULP                               ; 004f0756
    FADD float ptr [EAX + 0x34]         ; 004f0758
    FSTP float ptr [EDX + 0x34]         ; 004f075b
    ADD ESP,0x4                         ; 004f075e
    POP EBX                             ; 004f0761
    RET                                 ; 004f0762

