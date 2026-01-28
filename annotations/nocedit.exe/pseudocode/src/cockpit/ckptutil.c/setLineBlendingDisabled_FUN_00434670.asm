; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void __cdecl cockpit_ckptutil_c_setLineBlendingDisabled_FUN_00434670(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; Referenced Globals:
;   int g_LineBlendingDisabled
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00434670
        ;   Label: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_00434670
    MOV [0x00824e20],EAX                ; 00434674 | g_LineBlendingDisabled
    RET                                 ; 00434679

