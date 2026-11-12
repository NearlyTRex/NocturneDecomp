; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_light_cpp_setDirectionalLightVector_FUN_004e2600(int dir_x,int dir_y,int dir_z)
;
; Parameters:
; int              Stack[0x4]:4   dir_x
; int              Stack[0x8]:4   dir_y
; int              Stack[0xc]:4   dir_z
;
; XREF[2]:
;   engine_drender.cpp_FUN_0046b520 at 0046b530
;   engine_drender.cpp_FUN_0046b540 at 0046b58a
;
; Referenced Globals:
;   undefined4 DAT_01c38b90
;   undefined4 DAT_01c38b94
;   undefined4 DAT_01c38b98
;   undefined4 DAT_01d03504
;   undefined4 DAT_01d03508
;   undefined4 DAT_01d0350c
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004e2600
        ;   Label: engine_light.cpp_setDirectionalLightVector_FUN_004e2600
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e2604
    MOV ECX,dword ptr [ESP + 0xc]       ; 004e2608
    MOV dword ptr [0x01c38b90],EDX      ; 004e260c | DAT_01c38b90
    MOV [0x01d03508],EAX                ; 004e2612 | DAT_01d03508
    MOV [0x01c38b94],EAX                ; 004e2617 | DAT_01c38b94
    MOV dword ptr [0x01d0350c],ECX      ; 004e261c | DAT_01d0350c
    MOV dword ptr [0x01c38b98],ECX      ; 004e2622 | DAT_01c38b98
    MOV dword ptr [0x01d03504],EDX      ; 004e2628 | DAT_01d03504
    RET                                 ; 004e262e

