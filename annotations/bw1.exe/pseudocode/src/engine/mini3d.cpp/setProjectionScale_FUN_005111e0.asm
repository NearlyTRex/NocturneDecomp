; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setProjectionScale_FUN_005111e0(float scale)
;
; Parameters:
; float            Stack[0x4]:4   scale
;
; Referenced Globals:
;   undefined4 DAT_01d22528
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005111e0
        ;   Label: engine_mini3d.cpp_setProjectionScale_FUN_005111e0
    MOV [0x01d22528],EAX                ; 005111e4 | DAT_01d22528
    RET                                 ; 005111e9

