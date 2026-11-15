; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setRenderingQuality_FUN_004076d0(int quality)
;
; Parameters:
; int              Stack[0x4]:4   quality
;
; Referenced Globals:
;   undefined4 DAT_0061b4bc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004076d0
        ;   Label: engine_3d.c_setRenderingQuality_FUN_004076d0
    MOV [0x0061b4bc],EAX                ; 004076d4 | DAT_0061b4bc
    RET                                 ; 004076d9

