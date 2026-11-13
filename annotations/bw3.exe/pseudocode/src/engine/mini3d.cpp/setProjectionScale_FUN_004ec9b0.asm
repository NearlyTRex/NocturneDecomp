; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setProjectionScale_FUN_004ec9b0(float scale)
;
; Parameters:
; float            Stack[0x4]:4   scale
;
; Referenced Globals:
;   undefined4 DAT_01d76ca8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004ec9b0
        ;   Label: engine_mini3d.cpp_setProjectionScale_FUN_004ec9b0
    MOV [0x01d76ca8],EAX                ; 004ec9b4 | DAT_01d76ca8
    RET                                 ; 004ec9b9

