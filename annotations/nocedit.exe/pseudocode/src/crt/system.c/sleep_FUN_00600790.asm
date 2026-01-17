; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; __cdecl void crt_system.c_sleep_FUN_00600790(DWORD milliseconds)
;
; Parameters:
; typedef DWORD ulong Stack[0x4]:4   milliseconds
;
; XREF[1]:
;   shape_design.c_cramTextureList_FUN_0046bb80 at 0046d1e1
;
; Referenced Globals:
;   Sleep* g_SleepFunc = 00212228
;
; Called Functions:
;   Sleep
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00600790
        ;   Label: crt_system.c_sleep_FUN_00600790
    PUSH EDX                            ; 00600794
    CALL dword ptr CS:[0x611644]        ; 00600795 | g_SleepFunc
    RET                                 ; 0060079c

