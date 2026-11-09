; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_fastInvSqrt_FUN_00534c80(float dist_sq)
;
; Parameters:
; float            Stack[0x4]:4   dist_sq
;
; Referenced Globals:
;   undefined4 DAT_01caf5b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00534c80
        ;   Label: core_cloth.cpp_fastInvSqrt_FUN_00534c80
    MOV EDX,dword ptr [0x01caf5b8]      ; 00534c84 | DAT_01caf5b8
    SAR EAX,0x1                         ; 00534c8a
    SUB EDX,EAX                         ; 00534c8c
    MOV EAX,EDX                         ; 00534c8e
    RET                                 ; 00534c90

