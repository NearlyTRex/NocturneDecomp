; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00583f30(float *basis,int v0,int v1,int v2,int v3)
;
; Parameters:
; float *          Stack[0x4]:4   basis
; int              Stack[0x8]:4   v0
; int              Stack[0xc]:4   v1
; int              Stack[0x10]:4   v2
; int              Stack[0x14]:4   v3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00583f30
        ;   Label: core_spline.cpp_evaluateSplintInt_FUN_00583f30
    PUSH ESI                            ; 00583f31
    PUSH EDI                            ; 00583f32
    PUSH EBP                            ; 00583f33
    MOV EBP,ESP                         ; 00583f34
    SUB ESP,0xc                         ; 00583f36
    MOV EAX,dword ptr [EBP + 0x14]      ; 00583f39
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00583f3c
    MOV dword ptr [EBP + -0x4],EDX      ; 00583f3f
    FILD dword ptr [EBP + -0x4]         ; 00583f42
    MOV EDX,dword ptr [EBP + 0x18]      ; 00583f45
    FMUL float ptr [EAX + 0x4]          ; 00583f48
    MOV dword ptr [EBP + -0x4],EDX      ; 00583f4b
    FILD dword ptr [EBP + -0x4]         ; 00583f4e
    FMUL float ptr [EAX]                ; 00583f51
    MOV EDX,dword ptr [EBP + 0x20]      ; 00583f53
    FADDP                               ; 00583f56
    MOV dword ptr [EBP + -0x4],EDX      ; 00583f58
    FILD dword ptr [EBP + -0x4]         ; 00583f5b
    FMUL float ptr [EAX + 0x8]          ; 00583f5e
    MOV EDX,dword ptr [EBP + 0x24]      ; 00583f61
    FADDP                               ; 00583f64
    MOV dword ptr [EBP + -0x4],EDX      ; 00583f66
    FILD dword ptr [EBP + -0x4]         ; 00583f69
    FMUL float ptr [EAX + 0xc]          ; 00583f6c
    FADDP                               ; 00583f6f
    FSTP float ptr [EBP + -0xc]         ; 00583f71
    FLD float ptr [EBP + 0xfffffff4]    ; 00583f74
    FISTP dword ptr [EBP + 0xfffffff8]  ; 00583f7a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00583f80
    MOV ESP,EBP                         ; 00583f83
    POP EBP                             ; 00583f85
    POP EDI                             ; 00583f86
    POP ESI                             ; 00583f87
    POP EBX                             ; 00583f88
    RET                                 ; 00583f89

