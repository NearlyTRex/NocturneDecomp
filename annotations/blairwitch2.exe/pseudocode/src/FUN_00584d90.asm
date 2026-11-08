; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00584d90(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00583f20 at 00584413
;
; Referenced Globals:
;   undefined4 DAT_0061c068
;
; Called Functions:
;   FUN_00550170
;   FUN_00550210
;   FUN_00550450
;   FUN_005504d0
;   FUN_0055ae80
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00584d90
        ;   Label: FUN_00584d90
    PUSH ESI                            ; 00584d91
    MOV ESI,dword ptr [ESP + 0xc]       ; 00584d92
    LEA EBX,[ESI + 0x20]                ; 00584d96
    CALL FUN_00550450                   ; 00584d99
        ;   XREF to: 00550450 (UNCONDITIONAL_CALL)  ; undefined FUN_00550450()
    PUSH EBX                            ; 00584d9e
    CALL FUN_00550170                   ; 00584d9f
        ;   XREF to: 00550170 (UNCONDITIONAL_CALL)  ; undefined FUN_00550170()
    ADD ESP,0x4                         ; 00584da4
    LEA EAX,[ESI + 0x11bc]              ; 00584da7
    PUSH EAX                            ; 00584dad
    CALL FUN_00550210                   ; 00584dae
        ;   XREF to: 00550210 (UNCONDITIONAL_CALL)  ; undefined FUN_00550210()
    ADD ESP,0x4                         ; 00584db3
    PUSH EBX                            ; 00584db6
    MOV EDX,dword ptr [ESP + 0x14]      ; 00584db7
    PUSH EDX                            ; 00584dbb
    PUSH ESI                            ; 00584dbc
    MOV ECX,dword ptr [0x0061c068]      ; 00584dbd | DAT_0061c068
    PUSH ECX                            ; 00584dc3
    CALL FUN_0055ae80                   ; 00584dc4
        ;   XREF to: 0055ae80 (UNCONDITIONAL_CALL)  ; undefined FUN_0055ae80()
    ADD ESP,0x10                        ; 00584dc9
    MOV EBX,EAX                         ; 00584dcc
    CALL FUN_005504d0                   ; 00584dce
        ;   XREF to: 005504d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005504d0()
    MOV EAX,EBX                         ; 00584dd3
    POP ESI                             ; 00584dd5
    POP EBX                             ; 00584dd6
    RET                                 ; 00584dd7

