; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00442330(float dist_sq)
;
; Parameters:
; float            Stack[0x4]:4   dist_sq
;
; Referenced Globals:
;   int g_FastInvSqrtMagic
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00442330
        ;   Label: core_cloth.cpp_fastInvSqrt_FUN_00442330
    MOV EDX,dword ptr [0x01cc8050]      ; 00442334 | g_FastInvSqrtMagic
    SAR EAX,0x1                         ; 0044233a
    SUB EDX,EAX                         ; 0044233c
    MOV EAX,EDX                         ; 0044233e
    RET                                 ; 00442340

