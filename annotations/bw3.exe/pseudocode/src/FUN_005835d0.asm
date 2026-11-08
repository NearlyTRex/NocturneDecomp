; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005835d0(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_0042ac20 at 0042ae4e
;   FUN_0042b450 at 0042b781
;   FUN_004f40b0 at 004f43e6
;   FUN_0051f490 at 00520c87
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 005835d0
        ;   Label: FUN_005835d0
    MOV dword ptr [EAX + 0x4],0x0       ; 005835d4
    MOV dword ptr [EAX + 0x8],0x0       ; 005835db
    MOV dword ptr [EAX + 0xc],0x0       ; 005835e2
    MOV dword ptr [EAX + 0x10],0x0      ; 005835e9
    MOV dword ptr [EAX + 0x14],0x3f800000 ; 005835f0
    MOV dword ptr [EAX + 0x18],0x0      ; 005835f7
    MOV dword ptr [EAX + 0x1c],0x0      ; 005835fe
    MOV dword ptr [EAX + 0x20],0x0      ; 00583605
    MOV dword ptr [EAX + 0x24],0x0      ; 0058360c
    MOV dword ptr [EAX + 0x28],0x3f800000 ; 00583613
    MOV dword ptr [EAX + 0x2c],0x0      ; 0058361a
    MOV dword ptr [EAX],0x3f800000      ; 00583621
    RET                                 ; 00583627

