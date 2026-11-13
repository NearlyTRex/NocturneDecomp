; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRenderFlags_FUN_004edad0(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   engine_font.cpp_FUN_004b13a0 at 004b13fc
;
; Referenced Globals:
;   undefined4 DAT_01d76c38
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004edad0
        ;   Label: engine_mini3d.cpp_setRenderFlags_FUN_004edad0
    MOV [0x01d76c38],EAX                ; 004edad4 | DAT_01d76c38
    RET                                 ; 004edad9

