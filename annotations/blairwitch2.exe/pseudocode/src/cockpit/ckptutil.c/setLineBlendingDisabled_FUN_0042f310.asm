; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_setLineBlendingDisabled_FUN_0042f310(int disabled)
;
; Parameters:
; int              Stack[0x4]:4   disabled
;
; Referenced Globals:
;   int g_INT_007bee2c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0042f310
        ;   Label: cockpit_ckptutil.c_setLineBlendingDisabled_FUN_0042f310
    MOV [0x007bee2c],EAX                ; 0042f314 | g_INT_007bee2c
    RET                                 ; 0042f319

