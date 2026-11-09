; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f0510(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f0850 at 004f0912
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f0510
        ;   Label: engine_mini3d.cpp_FUN_004f0510
    SUB ESP,0x4                         ; 004f0511
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f0514
    MOV ECX,dword ptr [ESP + 0x10]      ; 004f0518
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f051c
    FLD float ptr [ECX]                 ; 004f0520
    FADD float ptr [EAX + 0x8]          ; 004f0522
    FLD float ptr [EAX]                 ; 004f0525
    FADD float ptr [ECX + 0x8]          ; 004f0527
    FSUBP                               ; 004f052a
    FLD float ptr [EAX + 0x8]           ; 004f052c
    FSUB float ptr [EAX]                ; 004f052f
    FDIVRP                              ; 004f0531
    FLD float ptr [ECX + 0x8]           ; 004f0533
    FSUB float ptr [EAX + 0x8]          ; 004f0536
    FXCH                                ; 004f0539
    FSTP float ptr [ESP]                ; 004f053b
    FMUL float ptr [ESP]                ; 004f053e
    FADD float ptr [EAX + 0x8]          ; 004f0541
    FST float ptr [EDX + 0x8]           ; 004f0544
    FSTP float ptr [EDX]                ; 004f0547
    FLD float ptr [ECX + 0x4]           ; 004f0549
    FSUB float ptr [EAX + 0x4]          ; 004f054c
    FMUL float ptr [ESP]                ; 004f054f
    FADD float ptr [EAX + 0x4]          ; 004f0552
    MOV EBX,dword ptr [0x01d7a694]      ; 004f0555 | DAT_01d7a694
    FSTP float ptr [EDX + 0x4]          ; 004f055b
    TEST EBX,EBX                        ; 004f055e
    JZ 0x004f0567                       ; 004f0560
        ;   XREF to: 004f0567 (CONDITIONAL_JUMP)  ; LAB_004f0567
    ADD ESP,0x4                         ; 004f0562
    POP EBX                             ; 004f0565
    RET                                 ; 004f0566
    FLD float ptr [ECX + 0x2c]          ; 004f0567
        ;   Label: LAB_004f0567
    FSUB float ptr [EAX + 0x2c]         ; 004f056a
    FLD float ptr [ESP]                 ; 004f056d
    FXCH                                ; 004f0570
    FMUL ST1                            ; 004f0572
    FADD float ptr [EAX + 0x2c]         ; 004f0574
    FSTP float ptr [EDX + 0x2c]         ; 004f0577
    FLD float ptr [ECX + 0x28]          ; 004f057a
    FSUB float ptr [EAX + 0x28]         ; 004f057d
    FMUL ST1                            ; 004f0580
    FADD float ptr [EAX + 0x28]         ; 004f0582
    FSTP float ptr [EDX + 0x28]         ; 004f0585
    FLD float ptr [ECX + 0x24]          ; 004f0588
    FSUB float ptr [EAX + 0x24]         ; 004f058b
    FMUL ST1                            ; 004f058e
    FADD float ptr [EAX + 0x24]         ; 004f0590
    FSTP float ptr [EDX + 0x24]         ; 004f0593
    FLD float ptr [ECX + 0x1c]          ; 004f0596
    FSUB float ptr [EAX + 0x1c]         ; 004f0599
    FMUL ST1                            ; 004f059c
    FADD float ptr [EAX + 0x1c]         ; 004f059e
    FSTP float ptr [EDX + 0x1c]         ; 004f05a1
    FLD float ptr [ECX + 0x20]          ; 004f05a4
    FSUB float ptr [EAX + 0x20]         ; 004f05a7
    FMUL ST1                            ; 004f05aa
    FADD float ptr [EAX + 0x20]         ; 004f05ac
    FSTP float ptr [EDX + 0x20]         ; 004f05af
    FLD float ptr [ECX + 0x30]          ; 004f05b2
    FSUB float ptr [EAX + 0x30]         ; 004f05b5
    FMUL ST1                            ; 004f05b8
    FADD float ptr [EAX + 0x30]         ; 004f05ba
    FSTP float ptr [EDX + 0x30]         ; 004f05bd
    FLD float ptr [ECX + 0x34]          ; 004f05c0
    FSUB float ptr [EAX + 0x34]         ; 004f05c3
    FMULP                               ; 004f05c6
    FADD float ptr [EAX + 0x34]         ; 004f05c8
    FSTP float ptr [EDX + 0x34]         ; 004f05cb
    ADD ESP,0x4                         ; 004f05ce
    POP EBX                             ; 004f05d1
    RET                                 ; 004f05d2

