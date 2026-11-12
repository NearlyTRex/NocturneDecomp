; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e0b50(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_FUN_0046d100 at 0046d110
;   engine_drender.cpp_FUN_0046d120 at 0046d16a
;
; Referenced Globals:
;   undefined4 DAT_01c6e2f0
;   undefined4 DAT_01c6e2f4
;   undefined4 DAT_01c6e2f8
;   undefined4 DAT_01d70c38
;   undefined4 DAT_01d70c3c
;   undefined4 DAT_01d70c40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e0b50
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004e0b50
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e0b54
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e0b58
    MOV dword ptr [0x01c6e2f0],EDX      ; 004e0b5c | DAT_01c6e2f0
    MOV [0x01d70c3c],EAX                ; 004e0b62 | DAT_01d70c3c
    MOV [0x01c6e2f4],EAX                ; 004e0b67 | DAT_01c6e2f4
    MOV dword ptr [0x01d70c40],ECX      ; 004e0b6c | DAT_01d70c40
    MOV dword ptr [0x01c6e2f8],ECX      ; 004e0b72 | DAT_01c6e2f8
    MOV dword ptr [0x01d70c38],EDX      ; 004e0b78 | DAT_01d70c38
    RET                                 ; 004e0b7e

