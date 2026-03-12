; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spline_cpp_evaluateSplintInt_FUN_005b9270(float *basis,int v0,int v1,int v2,int v3)
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

    PUSH EBX                            ; 005b9270
        ;   Label: core_spline.cpp_evaluateSplintInt_FUN_005b9270
    PUSH ESI                            ; 005b9271
    PUSH EDI                            ; 005b9272
    PUSH EBP                            ; 005b9273
    MOV EBP,ESP                         ; 005b9274
    SUB ESP,0xc                         ; 005b9276
    MOV EAX,dword ptr [EBP + 0x14]      ; 005b9279
    MOV EDX,dword ptr [EBP + 0x1c]      ; 005b927c
    MOV dword ptr [EBP + -0x4],EDX      ; 005b927f
    FILD dword ptr [EBP + -0x4]         ; 005b9282
    MOV EDX,dword ptr [EBP + 0x18]      ; 005b9285
    FMUL float ptr [EAX + 0x4]          ; 005b9288
    MOV dword ptr [EBP + -0x4],EDX      ; 005b928b
    FILD dword ptr [EBP + -0x4]         ; 005b928e
    FMUL float ptr [EAX]                ; 005b9291
    MOV EDX,dword ptr [EBP + 0x20]      ; 005b9293
    FADDP                               ; 005b9296
    MOV dword ptr [EBP + -0x4],EDX      ; 005b9298
    FILD dword ptr [EBP + -0x4]         ; 005b929b
    FMUL float ptr [EAX + 0x8]          ; 005b929e
    MOV EDX,dword ptr [EBP + 0x24]      ; 005b92a1
    FADDP                               ; 005b92a4
    MOV dword ptr [EBP + -0x4],EDX      ; 005b92a6
    FILD dword ptr [EBP + -0x4]         ; 005b92a9
    FMUL float ptr [EAX + 0xc]          ; 005b92ac
    FADDP                               ; 005b92af
    FSTP float ptr [EBP + -0xc]         ; 005b92b1
    FLD float ptr [EBP + 0xfffffff4]    ; 005b92b4
    FISTP dword ptr [EBP + 0xfffffff8]  ; 005b92ba
    MOV EAX,dword ptr [EBP + -0x8]      ; 005b92c0
    MOV ESP,EBP                         ; 005b92c3
    POP EBP                             ; 005b92c5
    POP EDI                             ; 005b92c6
    POP ESI                             ; 005b92c7
    POP EBX                             ; 005b92c8
    RET                                 ; 005b92c9

