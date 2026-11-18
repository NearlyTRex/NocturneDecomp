; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; CMini3D * __cdecl engine_mini3d_cpp_CMini3D_ctor_FUN_00510f60(CMini3D *this_ptr)
;
; Parameters:
; CMini3D *        Stack[0x4]:4   this_ptr
;
; XREF[1]:
;   engine_mini3d.cpp_staticInit_FUN_00510f20 at 00510f25
;
; Referenced Globals:
;   int g_INT_01d224b8
;   int g_INT_01d224bc
;   float g_FLOAT_01d224c0
;   int g_INT_01d224c4
;   int g_INT_01d224c8
;   float g_FLOAT_01d2253c
;   int g_INT_01d22540
;   float g_FLOAT_01d22544
;   float g_FLOAT_01d22548
;   int g_INT_01d2254c
;   float g_FLOAT_01d22554
;   float g_FLOAT_01d22570
;   float g_FLOAT_01d22574
;   int g_INT_01d22578
;   void* g_PTR_01d2257c
;   ... and 10 more
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00510f60
        ;   Label: engine_mini3d.cpp_CMini3D_ctor_FUN_00510f60
    PUSH ESI                            ; 00510f61
    PUSH EBP                            ; 00510f62
    MOV EAX,dword ptr [ESP + 0x10]      ; 00510f63
    MOV ESI,0x3f800000                  ; 00510f67
    MOV EBP,0x3f000000                  ; 00510f6c
    MOV EBX,0x1d22584                   ; 00510f71
    XOR ECX,ECX                         ; 00510f76
    MOV EDX,0xc0                        ; 00510f78
    MOV dword ptr [0x01d224bc],ECX      ; 00510f7d | g_INT_01d224bc
    MOV dword ptr [0x01d22580],ECX      ; 00510f83 | g_PTR_01d22580
    MOV dword ptr [0x01d22548],ESI      ; 00510f89 | g_FLOAT_01d22548
    MOV dword ptr [0x01d2254c],ESI      ; 00510f8f | g_INT_01d2254c
    MOV dword ptr [0x01d22554],EBP      ; 00510f95 | g_FLOAT_01d22554
    MOV dword ptr [0x01d24ffc],ECX      ; 00510f9b | g_INT_01d24ffc
    MOV dword ptr [0x01d224c4],ECX      ; 00510fa1 | g_INT_01d224c4
    MOV dword ptr [0x01d224c8],ECX      ; 00510fa7 | g_INT_01d224c8
    MOV dword ptr [0x01d227e0],ECX      ; 00510fad | g_FLOAT_PTR_01d227e0
    MOV dword ptr [0x01d227e4],ECX      ; 00510fb3 | g_FLOAT_PTR_01d227e4
    MOV dword ptr [0x01d227dc],ECX      ; 00510fb9 | g_INT_01d227dc
    MOV dword ptr [0x01d224c0],ESI      ; 00510fbf | g_FLOAT_01d224c0
    MOV dword ptr [0x01d25f14],ECX      ; 00510fc5 | g_INT_01d25f14
    MOV dword ptr [0x01d25f2c],ECX      ; 00510fcb | g_PTR_01d25f2c
    MOV dword ptr [0x01d25f30],ECX      ; 00510fd1 | g_PTR_01d25f30
    MOV dword ptr [0x01d2253c],ESI      ; 00510fd7 | g_FLOAT_01d2253c
    MOV dword ptr [0x01d22570],ECX      ; 00510fdd | g_FLOAT_01d22570
    MOV dword ptr [0x01d2257c],EBX      ; 00510fe3 | g_PTR_01d2257c
    MOV dword ptr [0x01d2ad74],ECX      ; 00510fe9 | g_FLOAT_PTR_01d2ad74
    MOV dword ptr [0x01d25000],ECX      ; 00510fef | g_INT_01d25000
    MOV dword ptr [0x01d22578],ECX      ; 00510ff5 | g_INT_01d22578
    MOV dword ptr [0x01d22544],ESI      ; 00510ffb | g_FLOAT_01d22544
    MOV EBP,0x44c80000                  ; 00511001
    MOV dword ptr [0x01d224b8],EDX      ; 00511006 | g_INT_01d224b8
    MOV dword ptr [0x01d22540],EBP      ; 0051100c | g_INT_01d22540
    MOV dword ptr [0x01d22574],EBP      ; 00511012 | g_FLOAT_01d22574
    POP EBP                             ; 00511018
    POP ESI                             ; 00511019
    POP EBX                             ; 0051101a
    RET                                 ; 0051101b

