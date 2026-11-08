; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00514ed0(float *param_1,float *param_2,float *param_3)
;
; Local Variables:
; undefined4       Stack[-0x8]:4  local_8
;
; XREF[1]:
;   FUN_005152e0 at 005153a3
;
; Referenced Globals:
;   undefined4 DAT_01d25f14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00514ed0
        ;   Label: FUN_00514ed0
    SUB ESP,0x4                         ; 00514ed1
    MOV EAX,dword ptr [ESP + 0xc]       ; 00514ed4
    MOV ECX,dword ptr [ESP + 0x10]      ; 00514ed8
    MOV EDX,dword ptr [ESP + 0x14]      ; 00514edc
    FLD float ptr [ECX + 0x4]           ; 00514ee0
    FADD float ptr [EAX + 0x8]          ; 00514ee3
    FLD float ptr [EAX + 0x4]           ; 00514ee6
    FADD float ptr [ECX + 0x8]          ; 00514ee9
    FSUBP                               ; 00514eec
    FLD float ptr [EAX + 0x8]           ; 00514eee
    FSUB float ptr [EAX + 0x4]          ; 00514ef1
    FDIVRP                              ; 00514ef4
    FLD float ptr [ECX + 0x8]           ; 00514ef6
    FSUB float ptr [EAX + 0x8]          ; 00514ef9
    FXCH                                ; 00514efc
    FSTP float ptr [ESP]                ; 00514efe
    FMUL float ptr [ESP]                ; 00514f01
    FADD float ptr [EAX + 0x8]          ; 00514f04
    FST float ptr [EDX + 0x8]           ; 00514f07
    FSTP float ptr [EDX + 0x4]          ; 00514f0a
    FLD float ptr [ECX]                 ; 00514f0d
    FSUB float ptr [EAX]                ; 00514f0f
    FMUL float ptr [ESP]                ; 00514f11
    FADD float ptr [EAX]                ; 00514f14
    MOV EBX,dword ptr [0x01d25f14]      ; 00514f16 | DAT_01d25f14
    FSTP float ptr [EDX]                ; 00514f1c
    TEST EBX,EBX                        ; 00514f1e
    JZ 0x00514f27                       ; 00514f20
        ;   XREF to: 00514f27 (CONDITIONAL_JUMP)  ; LAB_00514f27
    ADD ESP,0x4                         ; 00514f22
    POP EBX                             ; 00514f25
    RET                                 ; 00514f26
    FLD float ptr [ECX + 0x2c]          ; 00514f27
        ;   Label: LAB_00514f27
    FSUB float ptr [EAX + 0x2c]         ; 00514f2a
    FLD float ptr [ESP]                 ; 00514f2d
    FXCH                                ; 00514f30
    FMUL ST1                            ; 00514f32
    FADD float ptr [EAX + 0x2c]         ; 00514f34
    FSTP float ptr [EDX + 0x2c]         ; 00514f37
    FLD float ptr [ECX + 0x28]          ; 00514f3a
    FSUB float ptr [EAX + 0x28]         ; 00514f3d
    FMUL ST1                            ; 00514f40
    FADD float ptr [EAX + 0x28]         ; 00514f42
    FSTP float ptr [EDX + 0x28]         ; 00514f45
    FLD float ptr [ECX + 0x24]          ; 00514f48
    FSUB float ptr [EAX + 0x24]         ; 00514f4b
    FMUL ST1                            ; 00514f4e
    FADD float ptr [EAX + 0x24]         ; 00514f50
    FSTP float ptr [EDX + 0x24]         ; 00514f53
    FLD float ptr [ECX + 0x1c]          ; 00514f56
    FSUB float ptr [EAX + 0x1c]         ; 00514f59
    FMUL ST1                            ; 00514f5c
    FADD float ptr [EAX + 0x1c]         ; 00514f5e
    FSTP float ptr [EDX + 0x1c]         ; 00514f61
    FLD float ptr [ECX + 0x20]          ; 00514f64
    FSUB float ptr [EAX + 0x20]         ; 00514f67
    FMUL ST1                            ; 00514f6a
    FADD float ptr [EAX + 0x20]         ; 00514f6c
    FSTP float ptr [EDX + 0x20]         ; 00514f6f
    FLD float ptr [ECX + 0x30]          ; 00514f72
    FSUB float ptr [EAX + 0x30]         ; 00514f75
    FMUL ST1                            ; 00514f78
    FADD float ptr [EAX + 0x30]         ; 00514f7a
    FSTP float ptr [EDX + 0x30]         ; 00514f7d
    FLD float ptr [ECX + 0x34]          ; 00514f80
    FSUB float ptr [EAX + 0x34]         ; 00514f83
    FMULP                               ; 00514f86
    FADD float ptr [EAX + 0x34]         ; 00514f88
    FSTP float ptr [EDX + 0x34]         ; 00514f8b
    ADD ESP,0x4                         ; 00514f8e
    POP EBX                             ; 00514f91
    RET                                 ; 00514f92

