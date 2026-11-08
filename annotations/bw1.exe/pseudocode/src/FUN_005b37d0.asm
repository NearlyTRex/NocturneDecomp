; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005b37d0(LPTHREAD_START_ROUTINE param_1,LPVOID param_2)
;
;
; XREF[1]:
;   FUN_00575c00 at 00575c45
;
; Referenced Globals:
;   void* PTR_CreateThread_005d0530 = 001d0caa
;
; Called Functions:
;   CreateThread
;
; *****************************************************************************

section .text

    SUB ESP,0x4                         ; 005b37d0
        ;   Label: FUN_005b37d0
    MOV EAX,ESP                         ; 005b37d3
    PUSH EAX                            ; 005b37d5
    PUSH 0x0                            ; 005b37d6
    MOV EDX,dword ptr [ESP + 0x14]      ; 005b37d8
    PUSH EDX                            ; 005b37dc
    MOV ECX,dword ptr [ESP + 0x14]      ; 005b37dd
    PUSH ECX                            ; 005b37e1
    PUSH 0x0                            ; 005b37e2
    PUSH 0x0                            ; 005b37e4
    CALL dword ptr CS:[0x5d0530]        ; 005b37e6 | PTR_CreateThread_005d0530
    ADD ESP,0x4                         ; 005b37ed
    RET                                 ; 005b37f0

