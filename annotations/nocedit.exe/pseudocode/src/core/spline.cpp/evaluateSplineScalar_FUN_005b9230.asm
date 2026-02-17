; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_spline_cpp_evaluateSplineScalar_FUN_005b9230(float *basis,float *p0,float *p1,float *p2,float *p3)
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

    SUB ESP,0x4                         ; 005b9230
        ;   Label: core_spline.cpp_evaluateSplineScalar_FUN_005b9230
    MOV EAX,dword ptr [ESP + 0x8]       ; 005b9233
    MOV EDX,dword ptr [ESP + 0x10]      ; 005b9237
    FLD float ptr [EDX]                 ; 005b923b
    FMUL float ptr [EAX + 0x4]          ; 005b923d
    MOV EDX,dword ptr [ESP + 0xc]       ; 005b9240
    FLD float ptr [EDX]                 ; 005b9244
    FMUL float ptr [EAX]                ; 005b9246
    FADDP                               ; 005b9248
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b924a
    FLD float ptr [EDX]                 ; 005b924e
    FMUL float ptr [EAX + 0x8]          ; 005b9250
    FADDP                               ; 005b9253
    MOV EDX,dword ptr [ESP + 0x18]      ; 005b9255
    FLD float ptr [EDX]                 ; 005b9259
    FMUL float ptr [EAX + 0xc]          ; 005b925b
    FADDP                               ; 005b925e
    FSTP float ptr [ESP]                ; 005b9260
    MOV EAX,dword ptr [ESP]             ; 005b9263
    ADD ESP,0x4                         ; 005b9266
    RET                                 ; 005b9269

