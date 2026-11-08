; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00514fa0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_00515410 at 005154d7
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514fa0
        ;   Label: FUN_00514fa0
    SUB ESP,0x8                         ; 00514fa1
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514fa4
    MOV EDX,dword ptr [ESP + 0x14]      ; 00514fa8
    MOV ECX,dword ptr [ESP + 0x18]      ; 00514fac
    FLD float ptr [EAX + 0x4]           ; 00514fb0
    FLD float ptr [EDX + 0x4]           ; 00514fb3
    FADD float ptr [EDX + 0x8]          ; 00514fb6
    FXCH                                ; 00514fb9
    FADD float ptr [EAX + 0x8]          ; 00514fbb
    FXCH                                ; 00514fbe
    FSUBR ST0,ST1                       ; 00514fc0
    FDIVP                               ; 00514fc2
    FLD float ptr [EDX + 0x8]           ; 00514fc4
    FSUB float ptr [EAX + 0x8]          ; 00514fc7
    FXCH                                ; 00514fca
    FSTP float ptr [ESP + 0x4]          ; 00514fcc
    FMUL float ptr [ESP + 0x4]          ; 00514fd0
    FADD float ptr [EAX + 0x8]          ; 00514fd4
    FST float ptr [ECX + 0x8]           ; 00514fd7
    FCHS                                ; 00514fda
    FSTP float ptr [ECX + 0x4]          ; 00514fdc
    FLD float ptr [EDX]                 ; 00514fdf
    FSUB float ptr [EAX]                ; 00514fe1
    FMUL float ptr [ESP + 0x4]          ; 00514fe3
    FADD float ptr [EAX]                ; 00514fe7
    MOV EBX,dword ptr [0x01d25f14]      ; 00514fe9 | DAT_01d25f14
    FSTP float ptr [ECX]                ; 00514fef
    TEST EBX,EBX                        ; 00514ff1
    JZ 0x00514ffa                       ; 00514ff3
        ;   XREF to: 00514ffa (CONDITIONAL_JUMP)  ; LAB_00514ffa
    ADD ESP,0x8                         ; 00514ff5
    POP EBX                             ; 00514ff8
    RET                                 ; 00514ff9
    FLD float ptr [EDX + 0x2c]          ; 00514ffa
        ;   Label: LAB_00514ffa
    FSUB float ptr [EAX + 0x2c]         ; 00514ffd
    FLD float ptr [ESP + 0x4]           ; 00515000
    FXCH                                ; 00515004
    FMUL ST1                            ; 00515006
    FADD float ptr [EAX + 0x2c]         ; 00515008
    FSTP float ptr [ECX + 0x2c]         ; 0051500b
    FLD float ptr [EDX + 0x28]          ; 0051500e
    FSUB float ptr [EAX + 0x28]         ; 00515011
    FMUL ST1                            ; 00515014
    FADD float ptr [EAX + 0x28]         ; 00515016
    FSTP float ptr [ECX + 0x28]         ; 00515019
    FLD float ptr [EDX + 0x24]          ; 0051501c
    FSUB float ptr [EAX + 0x24]         ; 0051501f
    FMUL ST1                            ; 00515022
    FADD float ptr [EAX + 0x24]         ; 00515024
    FSTP float ptr [ECX + 0x24]         ; 00515027
    FLD float ptr [EDX + 0x1c]          ; 0051502a
    FSUB float ptr [EAX + 0x1c]         ; 0051502d
    FMUL ST1                            ; 00515030
    FADD float ptr [EAX + 0x1c]         ; 00515032
    FSTP float ptr [ECX + 0x1c]         ; 00515035
    FLD float ptr [EDX + 0x20]          ; 00515038
    FSUB float ptr [EAX + 0x20]         ; 0051503b
    FMUL ST1                            ; 0051503e
    FADD float ptr [EAX + 0x20]         ; 00515040
    FSTP float ptr [ECX + 0x20]         ; 00515043
    FLD float ptr [EDX + 0x30]          ; 00515046
    FSUB float ptr [EAX + 0x30]         ; 00515049
    FMUL ST1                            ; 0051504c
    FADD float ptr [EAX + 0x30]         ; 0051504e
    FSTP float ptr [ECX + 0x30]         ; 00515051
    FLD float ptr [EDX + 0x34]          ; 00515054
    FSUB float ptr [EAX + 0x34]         ; 00515057
    FMULP                               ; 0051505a
    FADD float ptr [EAX + 0x34]         ; 0051505c
    FSTP float ptr [ECX + 0x34]         ; 0051505f
    ADD ESP,0x8                         ; 00515062
    POP EBX                             ; 00515065
    RET                                 ; 00515066

