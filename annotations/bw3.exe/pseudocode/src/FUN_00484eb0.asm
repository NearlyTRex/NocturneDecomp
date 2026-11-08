; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484eb0(int *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   FUN_004822d0
;   FUN_00484bd0
;   FUN_00484ca0
;   FUN_00484d00
;   FUN_00484dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00484eb0
        ;   Label: FUN_00484eb0
    PUSH ESI                            ; 00484eb1
    PUSH EDI                            ; 00484eb2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00484eb3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00484eb7
    MOV EDI,dword ptr [ESP + 0x14]      ; 00484ebb
    INC EBX                             ; 00484ebf
    MOV EAX,dword ptr [ESI]             ; 00484ec0
        ;   Label: LAB_00484ec0
    CMP EBX,EAX                         ; 00484ec2
    JL 0x00484edd                       ; 00484ec4
        ;   XREF to: 00484edd (CONDITIONAL_JUMP)  ; LAB_00484edd
    MOV EDX,dword ptr [ESP + 0x18]      ; 00484ec6
    PUSH EDX                            ; 00484eca
    MOV ECX,dword ptr [ESP + 0x18]      ; 00484ecb
    PUSH ECX                            ; 00484ecf
    PUSH ESI                            ; 00484ed0
    CALL FUN_004822d0                   ; 00484ed1
        ;   XREF to: 004822d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004822d0()
    ADD ESP,0xc                         ; 00484ed6
    POP EDI                             ; 00484ed9
    POP ESI                             ; 00484eda
    POP EBX                             ; 00484edb
    RET                                 ; 00484edc
    PUSH EBX                            ; 00484edd
        ;   Label: LAB_00484edd
    PUSH ESI                            ; 00484ede
    CALL FUN_00484ca0                   ; 00484edf
        ;   XREF to: 00484ca0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484ca0()
    ADD ESP,0x8                         ; 00484ee4
    PUSH EAX                            ; 00484ee7
    PUSH EDI                            ; 00484ee8
    PUSH ESI                            ; 00484ee9
    CALL FUN_00484bd0                   ; 00484eea
        ;   XREF to: 00484bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484bd0()
    ADD ESP,0xc                         ; 00484eef
    PUSH EBX                            ; 00484ef2
    PUSH ESI                            ; 00484ef3
    CALL FUN_00484dd0                   ; 00484ef4
        ;   XREF to: 00484dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00484dd0()
    ADD ESP,0x8                         ; 00484ef9
    PUSH EAX                            ; 00484efc
    PUSH EDI                            ; 00484efd
    PUSH ESI                            ; 00484efe
    INC EBX                             ; 00484eff
    CALL FUN_00484d00                   ; 00484f00
        ;   XREF to: 00484d00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484d00()
    INC EDI                             ; 00484f05
    ADD ESP,0xc                         ; 00484f06
    JMP 0x00484ec0                      ; 00484f09
        ;   XREF to: 00484ec0 (UNCONDITIONAL_JUMP)  ; LAB_00484ec0

