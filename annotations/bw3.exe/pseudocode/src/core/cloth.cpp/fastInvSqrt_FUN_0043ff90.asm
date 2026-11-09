; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; float __cdecl core_cloth_cpp_fastInvSqrt_FUN_0043ff90(float dist_sq)
;
; Parameters:
; float            Stack[0x4]:4   dist_sq
;
; Referenced Globals:
;   undefined4 DAT_01d1a0a8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0043ff90
        ;   Label: core_cloth.cpp_fastInvSqrt_FUN_0043ff90
    MOV EDX,dword ptr [0x01d1a0a8]      ; 0043ff94 | DAT_01d1a0a8
    SAR EAX,0x1                         ; 0043ff9a
    SUB EDX,EAX                         ; 0043ff9c
    MOV EAX,EDX                         ; 0043ff9e
    RET                                 ; 0043ffa0

