; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setClipPlane_FUN_00514c40(float a,float b,float c,float d)
;
; Parameters:
; float            Stack[0x4]:4   a
; float            Stack[0x8]:4   b
; float            Stack[0xc]:4   c
; float            Stack[0x10]:4   d
;
; Referenced Globals:
;   undefined4 DAT_01d25f1c
;   undefined4 DAT_01d25f20
;   undefined4 DAT_01d25f24
;   undefined4 DAT_01d25f28
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00514c40
        ;   Label: engine_mini3d.cpp_setClipPlane_FUN_00514c40
    MOV [0x01d25f1c],EAX                ; 00514c44 | DAT_01d25f1c
    MOV EAX,dword ptr [ESP + 0x8]       ; 00514c49
    MOV [0x01d25f20],EAX                ; 00514c4d | DAT_01d25f20
    MOV EAX,dword ptr [ESP + 0xc]       ; 00514c52
    MOV [0x01d25f24],EAX                ; 00514c56 | DAT_01d25f24
    MOV EAX,dword ptr [ESP + 0x10]      ; 00514c5b
    MOV [0x01d25f28],EAX                ; 00514c5f | DAT_01d25f28
    RET                                 ; 00514c64

