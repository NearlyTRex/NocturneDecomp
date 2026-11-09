; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f6090(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f6430 at 004f64f6
;
; Referenced Globals:
;   undefined4 DAT_01d0d2b4
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f6090
        ;   Label: engine_mini3d.cpp_FUN_004f6090
    SUB ESP,0x8                         ; 004f6091
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f6094
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f6098
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f609c
    FLD float ptr [EAX]                 ; 004f60a0
    FADD float ptr [EAX + 0x8]          ; 004f60a2
    FLD ST0                             ; 004f60a5
    FSUB float ptr [EDX]                ; 004f60a7
    FSUB float ptr [EDX + 0x8]          ; 004f60a9
    FDIVP                               ; 004f60ac
    FLD float ptr [EDX + 0x8]           ; 004f60ae
    FSUB float ptr [EAX + 0x8]          ; 004f60b1
    FXCH                                ; 004f60b4
    FSTP float ptr [ESP]                ; 004f60b6
    FMUL float ptr [ESP]                ; 004f60b9
    FADD float ptr [EAX + 0x8]          ; 004f60bc
    FST float ptr [ECX + 0x8]           ; 004f60bf
    FCHS                                ; 004f60c2
    FSTP float ptr [ECX]                ; 004f60c4
    FLD float ptr [EDX + 0x4]           ; 004f60c6
    FSUB float ptr [EAX + 0x4]          ; 004f60c9
    FMUL float ptr [ESP]                ; 004f60cc
    FADD float ptr [EAX + 0x4]          ; 004f60cf
    MOV EBX,dword ptr [0x01d0d2b4]      ; 004f60d2 | DAT_01d0d2b4
    FSTP float ptr [ECX + 0x4]          ; 004f60d8
    TEST EBX,EBX                        ; 004f60db
    JZ 0x004f60e4                       ; 004f60dd
        ;   XREF to: 004f60e4 (CONDITIONAL_JUMP)  ; LAB_004f60e4
    ADD ESP,0x8                         ; 004f60df
    POP EBX                             ; 004f60e2
    RET                                 ; 004f60e3
    FLD float ptr [EDX + 0x2c]          ; 004f60e4
        ;   Label: LAB_004f60e4
    FSUB float ptr [EAX + 0x2c]         ; 004f60e7
    FLD float ptr [ESP]                 ; 004f60ea
    FXCH                                ; 004f60ed
    FMUL ST1                            ; 004f60ef
    FADD float ptr [EAX + 0x2c]         ; 004f60f1
    FSTP float ptr [ECX + 0x2c]         ; 004f60f4
    FLD float ptr [EDX + 0x28]          ; 004f60f7
    FSUB float ptr [EAX + 0x28]         ; 004f60fa
    FMUL ST1                            ; 004f60fd
    FADD float ptr [EAX + 0x28]         ; 004f60ff
    FSTP float ptr [ECX + 0x28]         ; 004f6102
    FLD float ptr [EDX + 0x24]          ; 004f6105
    FSUB float ptr [EAX + 0x24]         ; 004f6108
    FMUL ST1                            ; 004f610b
    FADD float ptr [EAX + 0x24]         ; 004f610d
    FSTP float ptr [ECX + 0x24]         ; 004f6110
    FLD float ptr [EDX + 0x1c]          ; 004f6113
    FSUB float ptr [EAX + 0x1c]         ; 004f6116
    FMUL ST1                            ; 004f6119
    FADD float ptr [EAX + 0x1c]         ; 004f611b
    FSTP float ptr [ECX + 0x1c]         ; 004f611e
    FLD float ptr [EDX + 0x20]          ; 004f6121
    FSUB float ptr [EAX + 0x20]         ; 004f6124
    FMUL ST1                            ; 004f6127
    FADD float ptr [EAX + 0x20]         ; 004f6129
    FSTP float ptr [ECX + 0x20]         ; 004f612c
    FLD float ptr [EDX + 0x30]          ; 004f612f
    FSUB float ptr [EAX + 0x30]         ; 004f6132
    FMUL ST1                            ; 004f6135
    FADD float ptr [EAX + 0x30]         ; 004f6137
    FSTP float ptr [ECX + 0x30]         ; 004f613a
    FLD float ptr [EDX + 0x34]          ; 004f613d
    FSUB float ptr [EAX + 0x34]         ; 004f6140
    FMULP                               ; 004f6143
    FADD float ptr [EAX + 0x34]         ; 004f6145
    FSTP float ptr [ECX + 0x34]         ; 004f6148
    ADD ESP,0x8                         ; 004f614b
    POP EBX                             ; 004f614e
    RET                                 ; 004f614f

