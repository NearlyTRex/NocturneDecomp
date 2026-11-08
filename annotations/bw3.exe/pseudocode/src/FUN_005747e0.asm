; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 * FUN_005747e0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[2]:
;   FUN_00440a70 at 00440aae
;   FUN_0044f750 at 0044f815
;
; Referenced Globals:
;   undefined1* PTR_FUN_005e5b24 = 00574850
;
; Called Functions:
;   FUN_005744a0
;   FUN_005749d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005747e0
        ;   Label: FUN_005747e0
    PUSH ESI                            ; 005747e1
    MOV EDX,dword ptr [ESP + 0xc]       ; 005747e2
    PUSH EDX                            ; 005747e6
    CALL FUN_005744a0                   ; 005747e7
        ;   XREF to: 005744a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005744a0()
    ADD ESP,0x4                         ; 005747ec
    MOV ECX,dword ptr [ESP + 0x14]      ; 005747ef
    PUSH ECX                            ; 005747f3
    MOV ESI,dword ptr [ESP + 0x14]      ; 005747f4
    PUSH ESI                            ; 005747f8
    MOV dword ptr [EAX],0x5e5b24        ; 005747f9 | PTR_FUN_005e5b24
    PUSH EAX                            ; 005747ff
    MOV EBX,EAX                         ; 00574800
    MOV dword ptr [EAX + 0x4],0x0       ; 00574802
    CALL FUN_005749d0                   ; 00574809
        ;   XREF to: 005749d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005749d0()
    ADD ESP,0xc                         ; 0057480e
    MOV EAX,EBX                         ; 00574811
    POP ESI                             ; 00574813
    POP EBX                             ; 00574814
    RET                                 ; 00574815

