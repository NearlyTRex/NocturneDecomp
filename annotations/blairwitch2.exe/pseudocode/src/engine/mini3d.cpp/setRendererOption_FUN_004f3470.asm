; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRendererOption_FUN_004f3470(int value)
;
; Parameters:
; int              Stack[0x4]:4   value
;
; XREF[1]:
;   engine_font.cpp_FUN_004a97a0 at 004a9806
;
; Referenced Globals:
;   undefined4 DAT_0061e280
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f3470
        ;   Label: engine_mini3d.cpp_setRendererOption_FUN_004f3470
    MOV [0x0061e280],EAX                ; 004f3474 | DAT_0061e280
    RET                                 ; 004f3479

