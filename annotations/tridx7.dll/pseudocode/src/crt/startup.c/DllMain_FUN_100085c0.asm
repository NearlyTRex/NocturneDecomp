; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; BOOL __cdecl crt_startup_c_DllMain_FUN_100085c0(HINSTANCE hinst_dll,DWORD reason,LPVOID reserved)
;
; Parameters:
; HINSTANCE        Stack[0x4]:4   hinst_dll
; DWORD            Stack[0x8]:4   reason
; LPVOID           Stack[0xc]:4   reserved
;
; XREF[1]:
;   crt_startup.c__DllMainCRTStartup_FUN_100057f0 at 1000586c
;
; *****************************************************************************

section .text

    MOV EAX,0x1                         ; 100085c0
        ;   Label: crt_startup.c_DllMain_FUN_100085c0
    RET 0xc                             ; 100085c5

