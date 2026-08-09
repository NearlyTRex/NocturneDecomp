; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_prim_c_setMaxViewportScanline_FUN_004f9440(int max)
;
; Parameters:
; int              Stack[0x4]:4   max
;
; Referenced Globals:
;   int INT_005be1e4 = 0x4b0
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f9440
        ;   Label: engine_prim.c_setMaxViewportScanline_FUN_004f9440
    MOV [0x005be1e4],EAX                ; 004f9444 | INT_005be1e4
    RET                                 ; 004f9449

