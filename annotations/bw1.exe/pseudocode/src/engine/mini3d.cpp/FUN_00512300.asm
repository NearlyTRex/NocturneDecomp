; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void engine_mini3d_cpp_FUN_00512300(undefined4 param_1)
;
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
        ;   Label: engine_mini3d.cpp_FUN_00512300
    MOV [0x01d224b8],EAX                ; 00512304 | DAT_01d224b8
    RET                                 ; 00512309

