; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl engine_3d_c_setRenderingQuality_FUN_00407710(int quality)
;
; Parameters:
; int              Stack[0x4]:4   quality
;
; Referenced Globals:
;   int g_INT_005fba3c = 0x1
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00407710
        ;   Label: engine_3d.c_setRenderingQuality_FUN_00407710
    MOV [0x005fba3c],EAX                ; 00407714 | g_INT_005fba3c
    RET                                 ; 00407719

