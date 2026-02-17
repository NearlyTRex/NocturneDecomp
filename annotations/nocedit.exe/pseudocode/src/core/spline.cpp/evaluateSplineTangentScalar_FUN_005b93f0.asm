; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineTangentScalar_FUN_005b93f0(float *basis,float *p0,float *p1,float *p2,float *p3)
;
; Parameters:
; float *          Stack[0x4]:4   basis
; float *          Stack[0x8]:4   p0
; float *          Stack[0xc]:4   p1
; float *          Stack[0x10]:4   p2
; float *          Stack[0x14]:4   p3
; Local Variables:
; undefined4       Stack[-0x4]:4  local_4
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b93f0
        ;   Label: core_spline.cpp_evaluateSplineTangentScalar_FUN_005b93f0
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b93f3
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b93f7
    FLD float ptr [EDX]                 ; 005b93fb
    FMUL float ptr [EAX + 0x10]         ; 005b93fd
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b9400
    FLD float ptr [EDX]                 ; 005b9404
    FMUL float ptr [EAX + 0x14]         ; 005b9406
    FADDP                               ; 005b9409
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b940b
    FLD float ptr [EDX]                 ; 005b940f
    FMUL float ptr [EAX + 0x18]         ; 005b9411
    FADDP                               ; 005b9414
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b9416
    FLD float ptr [EDX]                 ; 005b941a
    FMUL float ptr [EAX + 0x1c]         ; 005b941c
    FADDP                               ; 005b941f
    FSTP float ptr [ESP]                ; 005b9421
    MOV EAX,dword ptr [ESP]             ; 005b9424
    ADD ESP,0x4                         ; 005b9427
    RET                                 ; 005b942a

