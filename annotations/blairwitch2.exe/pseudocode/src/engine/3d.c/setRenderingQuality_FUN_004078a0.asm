; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setRenderingQuality_FUN_004078a0(int quality)
;
; Parameters:
; int              Stack[0x4]:4   quality
;
; Referenced Globals:
;   undefined4 DAT_006141dc
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004078a0
        ;   Label: engine_3d.c_setRenderingQuality_FUN_004078a0
    MOV [0x006141dc],EAX                ; 004078a4 | DAT_006141dc
    RET                                 ; 004078a9

