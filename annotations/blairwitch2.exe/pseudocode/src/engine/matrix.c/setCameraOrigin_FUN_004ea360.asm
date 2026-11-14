; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_setCameraOrigin_FUN_004ea360(int x,int y,int z)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046afb0 at 0046affa
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046af90 at 0046afa0
;
; Referenced Globals:
;   undefined4 DAT_01c38b78
;   undefined4 DAT_01c38b7c
;   undefined4 DAT_01c38b80
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ea360
        ;   Label: engine_matrix.c_setCameraOrigin_FUN_004ea360
    MOV [0x01c38b78],EAX                ; 004ea364 | DAT_01c38b78
    MOV EAX,dword ptr [ESP + 0x8]       ; 004ea369
    MOV [0x01c38b7c],EAX                ; 004ea36d | DAT_01c38b7c
    MOV EAX,dword ptr [ESP + 0xc]       ; 004ea372
    MOV [0x01c38b80],EAX                ; 004ea376 | DAT_01c38b80
    RET                                 ; 004ea37b

