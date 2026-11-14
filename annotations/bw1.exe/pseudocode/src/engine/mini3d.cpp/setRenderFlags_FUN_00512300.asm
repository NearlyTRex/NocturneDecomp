; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_mini3d_cpp_setRenderFlags_FUN_00512300(int flags)
;
; Parameters:
; int              Stack[0x4]:4   flags
;
; XREF[1]:
;   engine_font.cpp_FUN_004c2750 at 004c27ac
;
; Referenced Globals:
;   undefined4 DAT_01d224b8
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00512300
        ;   Label: engine_mini3d.cpp_setRenderFlags_FUN_00512300
    MOV [0x01d224b8],EAX                ; 00512304 | DAT_01d224b8
    RET                                 ; 00512309

