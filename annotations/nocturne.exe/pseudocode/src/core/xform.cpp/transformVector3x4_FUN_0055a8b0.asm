; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float * __cdecl core_xform_cpp_transformVector3x4_FUN_0055a8b0(float *param_1,float *param_2,float *param_3)
;
;
; XREF[52]:
;   FUN_00418a00 at 004190ee
;   FUN_004194b0 at 004195dc
;   FUN_0041fe40 at 0042036f
;   FUN_00420eb0 at 00420f02
;   FUN_00499b00 at 00499c15
;   FUN_00499ca0 at 00499dd2
;   FUN_004a9270 at 004aa9aa
;   FUN_004ab110 at 004ab162
;   FUN_004c9580 at 004c996e
;   FUN_004d4f30 at 004d520d
;   ... and 42 more
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 0055a8b0
        ;   Label: core_xform.cpp_transformVector3x4_FUN_0055a8b0
    MOV EDX,dword ptr [ESP + 0x8]       ; 0055a8b4
    MOV EAX,dword ptr [ESP + 0xc]       ; 0055a8b8
    FLD float ptr [EDX + 0x4]           ; 0055a8bc
    FMUL float ptr [EAX + 0x4]          ; 0055a8bf
    FLD float ptr [EDX]                 ; 0055a8c2
    FMUL float ptr [EAX]                ; 0055a8c4
    FADDP                               ; 0055a8c6
    FLD float ptr [EDX + 0x8]           ; 0055a8c8
    FMUL float ptr [EAX + 0x8]          ; 0055a8cb
    FADDP                               ; 0055a8ce
    FADD float ptr [EAX + 0xc]          ; 0055a8d0
    FSTP float ptr [ECX]                ; 0055a8d3
    FLD float ptr [EDX + 0x4]           ; 0055a8d5
    FMUL float ptr [EAX + 0x14]         ; 0055a8d8
    FLD float ptr [EDX]                 ; 0055a8db
    FMUL float ptr [EAX + 0x10]         ; 0055a8dd
    FADDP                               ; 0055a8e0
    FLD float ptr [EDX + 0x8]           ; 0055a8e2
    FMUL float ptr [EAX + 0x18]         ; 0055a8e5
    FADDP                               ; 0055a8e8
    FADD float ptr [EAX + 0x1c]         ; 0055a8ea
    FSTP float ptr [ECX + 0x4]          ; 0055a8ed
    FLD float ptr [EDX + 0x4]           ; 0055a8f0
    FMUL float ptr [EAX + 0x24]         ; 0055a8f3
    FLD float ptr [EDX]                 ; 0055a8f6
    FMUL float ptr [EAX + 0x20]         ; 0055a8f8
    FADDP                               ; 0055a8fb
    FLD float ptr [EDX + 0x8]           ; 0055a8fd
    FMUL float ptr [EAX + 0x28]         ; 0055a900
    FADDP                               ; 0055a903
    FADD float ptr [EAX + 0x2c]         ; 0055a905
    MOV EAX,ECX                         ; 0055a908
    FSTP float ptr [ECX + 0x8]          ; 0055a90a
    RET                                 ; 0055a90d

