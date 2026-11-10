; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * crt_unknown_c_FUN_005cc370(void)
;
;
; XREF[2]:
;   crt_startup.cpp_WinMainBootstrap_FUN_005ca370 at 005ca3c5
;   crt_unknown.c_FUN_005c871c at 005c8890
;
; Referenced Globals:
;   void* PTR_crt_unknown.c_FUN_005c50cc_006265fc = 005c50cc
;
; Called Functions:
;   crt_unknown.c_FUN_005c50cc
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005cc370
        ;   Label: crt_unknown.c_FUN_005cc370
    CALL dword ptr [0x006265fc]         ; 005cc371 | PTR_crt_unknown.c_FUN_005c50cc_006265fc
    MOV EBX,EAX                         ; 005cc377
    MOV EAX,ESP                         ; 005cc379
    SUB EAX,dword ptr [EBX]             ; 005cc37b
    POP EBX                             ; 005cc37d
    RET                                 ; 005cc37e

