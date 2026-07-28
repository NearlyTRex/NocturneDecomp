; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_spline_cpp_evaluateSplintInt_FUN_00533eb0(float *param_1,int param_2,int param_3,int param_4,int param_5)
;
; Local Variables:
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00533eb0
        ;   Label: core_spline.cpp_evaluateSplintInt_FUN_00533eb0
    PUSH ESI                            ; 00533eb1
    PUSH EDI                            ; 00533eb2
    PUSH EBP                            ; 00533eb3
    MOV EBP,ESP                         ; 00533eb4
    SUB ESP,0xc                         ; 00533eb6
    MOV EAX,dword ptr [EBP + 0x14]      ; 00533eb9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 00533ebc
    MOV dword ptr [EBP + -0x4],EDX      ; 00533ebf
    FILD dword ptr [EBP + -0x4]         ; 00533ec2
    MOV EDX,dword ptr [EBP + 0x18]      ; 00533ec5
    FMUL float ptr [EAX + 0x4]          ; 00533ec8
    MOV dword ptr [EBP + -0x4],EDX      ; 00533ecb
    FILD dword ptr [EBP + -0x4]         ; 00533ece
    FMUL float ptr [EAX]                ; 00533ed1
    MOV EDX,dword ptr [EBP + 0x20]      ; 00533ed3
    FADDP                               ; 00533ed6
    MOV dword ptr [EBP + -0x4],EDX      ; 00533ed8
    FILD dword ptr [EBP + -0x4]         ; 00533edb
    FMUL float ptr [EAX + 0x8]          ; 00533ede
    MOV EDX,dword ptr [EBP + 0x24]      ; 00533ee1
    FADDP                               ; 00533ee4
    MOV dword ptr [EBP + -0x4],EDX      ; 00533ee6
    FILD dword ptr [EBP + -0x4]         ; 00533ee9
    FMUL float ptr [EAX + 0xc]          ; 00533eec
    FADDP                               ; 00533eef
    FSTP float ptr [EBP + -0xc]         ; 00533ef1
    FLD float ptr [EBP + 0xfffffff4]    ; 00533ef4
    FISTP dword ptr [EBP + 0xfffffff8]  ; 00533efa
    MOV EAX,dword ptr [EBP + -0x8]      ; 00533f00
    MOV ESP,EBP                         ; 00533f03
    POP EBP                             ; 00533f05
    POP EDI                             ; 00533f06
    POP ESI                             ; 00533f07
    POP EBX                             ; 00533f08
    RET                                 ; 00533f09

