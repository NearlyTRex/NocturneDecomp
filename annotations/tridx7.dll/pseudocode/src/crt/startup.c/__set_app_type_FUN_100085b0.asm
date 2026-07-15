; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl crt_startup_c___set_app_type_FUN_100085b0(int app_type)
;
; Parameters:
; int              Stack[0x4]:4   app_type
;
; XREF[1]:
;   crt_startup.c___CRTDLL_INIT_FUN_100056a0 at 100056ce
;
; Referenced Globals:
;   undefined4 DAT_10016c74
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 100085b0
        ;   Label: crt_startup.c___set_app_type_FUN_100085b0
    MOV [0x10016c74],EAX                ; 100085b4 | DAT_10016c74
    RET                                 ; 100085b9

