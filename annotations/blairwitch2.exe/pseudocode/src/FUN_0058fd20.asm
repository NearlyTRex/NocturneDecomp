; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0058fd20(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)
;
;
; XREF[1]:
;   FUN_005531d0 at 00553215
;
; Referenced Globals:
;   void* PTR_CreateThread_005c8520 = 001c8c82
;
; Called Functions:
;   CreateThread
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 0058fd20
        ;   Label: FUN_0058fd20
    MOV EAX,ESP                         ; 0058fd23
    PUSH EAX                            ; 0058fd25
    PUSH 0x0                            ; 0058fd26
    MOV EDX,dword ptr [ESP + 0x14]      ; 0058fd28
    PUSH EDX                            ; 0058fd2c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0058fd2d
    PUSH ECX                            ; 0058fd31
    PUSH 0x0                            ; 0058fd32
    PUSH 0x0                            ; 0058fd34
    CALL dword ptr CS:[0x5c8520]        ; 0058fd36 | PTR_CreateThread_005c8520
    ADD ESP,0x4                         ; 0058fd3d
    RET                                 ; 0058fd40

