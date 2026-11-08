; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined1 * FUN_00491b40(undefined4 param_1,char *param_2)
;
;
; XREF[2]:
;   FUN_004bb100 at 004bc167
;   FUN_00529a70 at 0052b2a4
;
; Referenced Globals:
;   undefined4 DAT_01c734ac
;   undefined4 DAT_01c734b0
;
; Called Functions:
;   FUN_0048c170
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00491b40
        ;   Label: FUN_00491b40
    MOV EAX,dword ptr [ESP + 0xc]       ; 00491b41
    CMP byte ptr [EAX],0x0              ; 00491b45
    JNZ 0x00491b4e                      ; 00491b48
        ;   XREF to: 00491b4e (CONDITIONAL_JUMP)  ; LAB_00491b4e
    XOR EAX,EAX                         ; 00491b4a
        ;   Label: LAB_00491b4a
    POP EBX                             ; 00491b4c
    RET                                 ; 00491b4d
    PUSH EAX                            ; 00491b4e
        ;   Label: LAB_00491b4e
    MOV ECX,dword ptr [ESP + 0xc]       ; 00491b4f
    MOV EDX,0x1                         ; 00491b53
    PUSH ECX                            ; 00491b58
    XOR EBX,EBX                         ; 00491b59
    MOV dword ptr [0x01c734ac],EDX      ; 00491b5b | DAT_01c734ac
    CALL FUN_0048c170                   ; 00491b61
        ;   XREF to: 0048c170 (UNCONDITIONAL_CALL)  ; undefined FUN_0048c170()
    ADD ESP,0x8                         ; 00491b66
    MOV dword ptr [0x01c734ac],EBX      ; 00491b69 | DAT_01c734ac
    TEST EAX,EAX                        ; 00491b6f
    JNZ 0x00491b4a                      ; 00491b71
        ;   XREF to: 00491b4a (CONDITIONAL_JUMP)  ; LAB_00491b4a
    MOV EAX,0x1c734b0                   ; 00491b73 | DAT_01c734b0
    POP EBX                             ; 00491b78
    RET                                 ; 00491b79

