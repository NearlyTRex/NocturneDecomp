; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00560ab0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,undefined4 param_5)
;
;
; XREF[1]:
;   FUN_00408cd0 at 00408cea
;
; Called Functions:
;   FUN_00555ee0
;   FUN_00555fd0
;   FUN_00556050
;   FUN_0055f020
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00560ab0
        ;   Label: FUN_00560ab0
    CALL FUN_00555fd0                   ; 00560ab1
        ;   XREF to: 00555fd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555fd0()
    PUSH dword ptr [ESP + 0x18]         ; 00560ab6
    CALL FUN_00555ee0                   ; 00560aba
        ;   XREF to: 00555ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00555ee0()
    ADD ESP,0x4                         ; 00560abf
    PUSH 0x0                            ; 00560ac2
    MOV EDX,dword ptr [ESP + 0x18]      ; 00560ac4
    PUSH EDX                            ; 00560ac8
    PUSH 0x0                            ; 00560ac9
    PUSH 0x0                            ; 00560acb
    MOV ECX,dword ptr [ESP + 0x20]      ; 00560acd
    PUSH 0x0                            ; 00560ad1
    PUSH ECX                            ; 00560ad3
    MOV EBX,dword ptr [ESP + 0x24]      ; 00560ad4
    PUSH EBX                            ; 00560ad8
    CALL FUN_0055f020                   ; 00560ad9
        ;   XREF to: 0055f020 (UNCONDITIONAL_CALL)  ; undefined FUN_0055f020()
    ADD ESP,0x1c                        ; 00560ade
    MOV EBX,EAX                         ; 00560ae1
    CALL FUN_00556050                   ; 00560ae3
        ;   XREF to: 00556050 (UNCONDITIONAL_CALL)  ; undefined FUN_00556050()
    MOV EAX,EBX                         ; 00560ae8
    POP EBX                             ; 00560aea
    RET                                 ; 00560aeb

