; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int core_spline_cpp_evaluateSplintInt_FUN_005614e0(float *param_1,int param_2,int param_3,int param_4,int param_5)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005614e0
        ;   Label: core_spline.cpp_evaluateSplintInt_FUN_005614e0
    PUSH ESI                            ; 005614e1
    PUSH EDI                            ; 005614e2
    PUSH EBP                            ; 005614e3
    MOV EBP,ESP                         ; 005614e4
    SUB ESP,0xc                         ; 005614e6
    MOV EAX,dword ptr [EBP + 0x14]      ; 005614e9
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005614ec
    MOV dword ptr [EBP + -0x4],EDX      ; 005614ef
    FILD dword ptr [EBP + -0x4]         ; 005614f2
    MOV EDX,dword ptr [EBP + 0x18]      ; 005614f5
    FMUL float ptr [EAX + 0x4]          ; 005614f8
    MOV dword ptr [EBP + -0x4],EDX      ; 005614fb
    FILD dword ptr [EBP + -0x4]         ; 005614fe
    FMUL float ptr [EAX]                ; 00561501
    MOV EDX,dword ptr [EBP + 0x20]      ; 00561503
    FADDP                               ; 00561506
    MOV dword ptr [EBP + -0x4],EDX      ; 00561508
    FILD dword ptr [EBP + -0x4]         ; 0056150b
    FMUL float ptr [EAX + 0x8]          ; 0056150e
    MOV EDX,dword ptr [EBP + 0x24]      ; 00561511
    FADDP                               ; 00561514
    MOV dword ptr [EBP + -0x4],EDX      ; 00561516
    FILD dword ptr [EBP + -0x4]         ; 00561519
    FMUL float ptr [EAX + 0xc]          ; 0056151c
    FADDP                               ; 0056151f
    FSTP float ptr [EBP + -0xc]         ; 00561521
    FLD float ptr [EBP + 0xfffffff4]    ; 00561524
    FISTP dword ptr [EBP + 0xfffffff8]  ; 0056152a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00561530
    MOV ESP,EBP                         ; 00561533
    POP EBP                             ; 00561535
    POP EDI                             ; 00561536
    POP ESI                             ; 00561537
    POP EBX                             ; 00561538
    RET                                 ; 00561539

