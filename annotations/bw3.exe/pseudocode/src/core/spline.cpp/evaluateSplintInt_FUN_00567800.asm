; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int __cdecl core_spline_cpp_evaluateSplintInt_FUN_00567800(float *basis,int v0,int v1,int v2,int v3)
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

    PUSH EBX                            ; 00567800
        ;   Label: core_spline.cpp_evaluateSplintInt_FUN_00567800
    PUSH ESI                            ; 00567801
    PUSH EDI                            ; 00567802
    PUSH EBP                            ; 00567803
    MOV EBP,ESP                         ; 00567804
    SUB ESP,0xc                         ; 00567806
    MOV EAX,dword ptr [EBP + 0x14]      ; 00567809
    MOV EDX,dword ptr [EBP + 0x1c]      ; 0056780c
    MOV dword ptr [EBP + -0x4],EDX      ; 0056780f
    FILD dword ptr [EBP + -0x4]         ; 00567812
    MOV EDX,dword ptr [EBP + 0x18]      ; 00567815
    FMUL float ptr [EAX + 0x4]          ; 00567818
    MOV dword ptr [EBP + -0x4],EDX      ; 0056781b
    FILD dword ptr [EBP + -0x4]         ; 0056781e
    FMUL float ptr [EAX]                ; 00567821
    MOV EDX,dword ptr [EBP + 0x20]      ; 00567823
    FADDP                               ; 00567826
    MOV dword ptr [EBP + -0x4],EDX      ; 00567828
    FILD dword ptr [EBP + -0x4]         ; 0056782b
    FMUL float ptr [EAX + 0x8]          ; 0056782e
    MOV EDX,dword ptr [EBP + 0x24]      ; 00567831
    FADDP                               ; 00567834
    MOV dword ptr [EBP + -0x4],EDX      ; 00567836
    FILD dword ptr [EBP + -0x4]         ; 00567839
    FMUL float ptr [EAX + 0xc]          ; 0056783c
    FADDP                               ; 0056783f
    FSTP float ptr [EBP + -0xc]         ; 00567841
    FLD float ptr [EBP + 0xfffffff4]    ; 00567844
    FISTP dword ptr [EBP + 0xfffffff8]  ; 0056784a
    MOV EAX,dword ptr [EBP + -0x8]      ; 00567850
    MOV ESP,EBP                         ; 00567853
    POP EBP                             ; 00567855
    POP EDI                             ; 00567856
    POP ESI                             ; 00567857
    POP EBX                             ; 00567858
    RET                                 ; 00567859

