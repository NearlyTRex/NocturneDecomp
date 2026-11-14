; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setClipPlane_FUN_004f5ec0(float a,float b,float c,float d)
;
; Parameters:
; float            Stack[0x4]:4   a
; float            Stack[0x8]:4   b
; float            Stack[0xc]:4   c
; float            Stack[0x10]:4   d
;
; Referenced Globals:
;   undefined4 DAT_01d0d2bc
;   undefined4 DAT_01d0d2c0
;   undefined4 DAT_01d0d2c4
;   undefined4 DAT_01d0d2c8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f5ec0
        ;   Label: engine_mini3d.cpp_setClipPlane_FUN_004f5ec0
    MOV [0x01d0d2bc],EAX                ; 004f5ec4 | DAT_01d0d2bc
    MOV EAX,dword ptr [ESP + 0x8]       ; 004f5ec9
    MOV [0x01d0d2c0],EAX                ; 004f5ecd | DAT_01d0d2c0
    MOV EAX,dword ptr [ESP + 0xc]       ; 004f5ed2
    MOV [0x01d0d2c4],EAX                ; 004f5ed6 | DAT_01d0d2c4
    MOV EAX,dword ptr [ESP + 0x10]      ; 004f5edb
    MOV [0x01d0d2c8],EAX                ; 004f5edf | DAT_01d0d2c8
    RET                                 ; 004f5ee4

