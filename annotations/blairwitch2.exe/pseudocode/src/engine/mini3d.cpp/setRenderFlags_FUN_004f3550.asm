; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRenderFlags_FUN_004f3550(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a97fc
;
; Referenced Globals:
;   undefined4 DAT_01d09858
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3550
        ;   Label: engine_mini3d.cpp_setRenderFlags_FUN_004f3550
    MOV [0x01d09858],EAX                ; 004f3554 | DAT_01d09858
    RET                                 ; 004f3559

