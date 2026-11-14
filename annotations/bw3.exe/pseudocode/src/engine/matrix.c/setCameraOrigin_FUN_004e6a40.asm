; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_matrix_c_setCameraOrigin_FUN_004e6a40(int x,int y,int z)
;
; Parameters:
; int              Stack[0x4]:4   x
; int              Stack[0x8]:4   y
; int              Stack[0xc]:4   z
;
; XREF[2]:
;   engine_drender.cpp_CDemonRenderer_setCameraOriginFromScaledPoint_FUN_0046cb90 at 0046cbda
;   engine_drender.cpp_CDemonRenderer_setCameraOrigin_FUN_0046cb70 at 0046cb80
;
; Referenced Globals:
;   undefined4 DAT_01c6e2d8
;   undefined4 DAT_01c6e2dc
;   undefined4 DAT_01c6e2e0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e6a40
        ;   Label: engine_matrix.c_setCameraOrigin_FUN_004e6a40
    MOV [0x01c6e2d8],EAX                ; 004e6a44 | DAT_01c6e2d8
    MOV EAX,dword ptr [ESP + 0x8]       ; 004e6a49
    MOV [0x01c6e2dc],EAX                ; 004e6a4d | DAT_01c6e2dc
    MOV EAX,dword ptr [ESP + 0xc]       ; 004e6a52
    MOV [0x01c6e2e0],EAX                ; 004e6a56 | DAT_01c6e2e0
    RET                                 ; 004e6a5b

