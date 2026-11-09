; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_004f05e0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0xc]:4  local_c
;
; XREF[1]:
;   engine_mini3d.cpp_FUN_004f0980 at 004f0a46
;
; Referenced Globals:
;   undefined4 DAT_01d7a694
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004f05e0
        ;   Label: engine_mini3d.cpp_FUN_004f05e0
    SUB ESP,0x8                         ; 004f05e1
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f05e4
    MOV EDX,dword ptr [ESP + 0x14]      ; 004f05e8
    MOV ECX,dword ptr [ESP + 0x18]      ; 004f05ec
    FLD float ptr [EAX]                 ; 004f05f0
    FADD float ptr [EAX + 0x8]          ; 004f05f2
    FLD ST0                             ; 004f05f5
    FSUB float ptr [EDX]                ; 004f05f7
    FSUB float ptr [EDX + 0x8]          ; 004f05f9
    FDIVP                               ; 004f05fc
    FLD float ptr [EDX + 0x8]           ; 004f05fe
    FSUB float ptr [EAX + 0x8]          ; 004f0601
    FXCH                                ; 004f0604
    FSTP float ptr [ESP]                ; 004f0606
    FMUL float ptr [ESP]                ; 004f0609
    FADD float ptr [EAX + 0x8]          ; 004f060c
    FST float ptr [ECX + 0x8]           ; 004f060f
    FCHS                                ; 004f0612
    FSTP float ptr [ECX]                ; 004f0614
    FLD float ptr [EDX + 0x4]           ; 004f0616
    FSUB float ptr [EAX + 0x4]          ; 004f0619
    FMUL float ptr [ESP]                ; 004f061c
    FADD float ptr [EAX + 0x4]          ; 004f061f
    MOV EBX,dword ptr [0x01d7a694]      ; 004f0622 | DAT_01d7a694
    FSTP float ptr [ECX + 0x4]          ; 004f0628
    TEST EBX,EBX                        ; 004f062b
    JZ 0x004f0634                       ; 004f062d
        ;   XREF to: 004f0634 (CONDITIONAL_JUMP)  ; LAB_004f0634
    ADD ESP,0x8                         ; 004f062f
    POP EBX                             ; 004f0632
    RET                                 ; 004f0633
    FLD float ptr [EDX + 0x2c]          ; 004f0634
        ;   Label: LAB_004f0634
    FSUB float ptr [EAX + 0x2c]         ; 004f0637
    FLD float ptr [ESP]                 ; 004f063a
    FXCH                                ; 004f063d
    FMUL ST1                            ; 004f063f
    FADD float ptr [EAX + 0x2c]         ; 004f0641
    FSTP float ptr [ECX + 0x2c]         ; 004f0644
    FLD float ptr [EDX + 0x28]          ; 004f0647
    FSUB float ptr [EAX + 0x28]         ; 004f064a
    FMUL ST1                            ; 004f064d
    FADD float ptr [EAX + 0x28]         ; 004f064f
    FSTP float ptr [ECX + 0x28]         ; 004f0652
    FLD float ptr [EDX + 0x24]          ; 004f0655
    FSUB float ptr [EAX + 0x24]         ; 004f0658
    FMUL ST1                            ; 004f065b
    FADD float ptr [EAX + 0x24]         ; 004f065d
    FSTP float ptr [ECX + 0x24]         ; 004f0660
    FLD float ptr [EDX + 0x1c]          ; 004f0663
    FSUB float ptr [EAX + 0x1c]         ; 004f0666
    FMUL ST1                            ; 004f0669
    FADD float ptr [EAX + 0x1c]         ; 004f066b
    FSTP float ptr [ECX + 0x1c]         ; 004f066e
    FLD float ptr [EDX + 0x20]          ; 004f0671
    FSUB float ptr [EAX + 0x20]         ; 004f0674
    FMUL ST1                            ; 004f0677
    FADD float ptr [EAX + 0x20]         ; 004f0679
    FSTP float ptr [ECX + 0x20]         ; 004f067c
    FLD float ptr [EDX + 0x30]          ; 004f067f
    FSUB float ptr [EAX + 0x30]         ; 004f0682
    FMUL ST1                            ; 004f0685
    FADD float ptr [EAX + 0x30]         ; 004f0687
    FSTP float ptr [ECX + 0x30]         ; 004f068a
    FLD float ptr [EDX + 0x34]          ; 004f068d
    FSUB float ptr [EAX + 0x34]         ; 004f0690
    FMULP                               ; 004f0693
    FADD float ptr [EAX + 0x34]         ; 004f0695
    FSTP float ptr [ECX + 0x34]         ; 004f0698
    ADD ESP,0x8                         ; 004f069b
    POP EBX                             ; 004f069e
    RET                                 ; 004f069f

