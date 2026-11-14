; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005aefe0(void)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ad1e0 at 005ad235
;   crt_unknown.c_FUN_005ab55c at 005ab6d0
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005a7f3c_006079a0 = 005a7f3c
;
; Called Functions:
;   crt_unknown.c_FUN_005a7f3c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005aefe0
        ;   Label: crt_unknown.c_FUN_005aefe0
    CALL dword ptr [0x006079a0]         ; 005aefe1 | PTR_crt_unknown.c_FUN_005a7f3c_006079a0
    MOV EBX,EAX                         ; 005aefe7
    MOV EAX,ESP                         ; 005aefe9
    SUB EAX,dword ptr [EBX]             ; 005aefeb
    POP EBX                             ; 005aefed
    RET                                 ; 005aefee

