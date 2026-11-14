; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_disableFog_FUN_005124c0(void)
;
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2750 at 004c27b9
;
; Referenced Globals:
;   undefined4 DAT_01d224c8
;
; *****************************************************************************

section .text

    XOR EDX,EDX                         ; 005124c0
        ;   Label: engine_mini3d.cpp_disableFog_FUN_005124c0
    MOV dword ptr [0x01d224c8],EDX      ; 005124c2 | DAT_01d224c8
    RET                                 ; 005124c8

