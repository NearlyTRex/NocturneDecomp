; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004975a0(void)
;
;
; XREF[2]:
;   FUN_004a1ad0 at 004a1c02
;   FUN_004a1e90 at 004a1e9d
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_01bdd7e4
;   undefined4 DAT_01c73674
;   undefined4 DAT_01c73678
;   undefined4 DAT_01c7367c
;   undefined4 DAT_01c73680
;   undefined4 DAT_01c73684
;   undefined4 DAT_01c73688
;   undefined4 DAT_01c7368c
;   undefined4 DAT_01c73690
;   undefined4 DAT_01c73694
;
; Called Functions:
;   FUN_0046d4c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004975a0
        ;   Label: FUN_004975a0
    PUSH ESI                            ; 004975a1
    PUSH EDI                            ; 004975a2
    MOV EDX,0x4                         ; 004975a3
    MOV EBX,0x1                         ; 004975a8
    MOV ESI,0x2                         ; 004975ad
    MOV EDI,0x3                         ; 004975b2
    PUSH 0x8000                         ; 004975b7
    XOR ECX,ECX                         ; 004975bc
    MOV dword ptr [0x01c73674],EDX      ; 004975be | DAT_01c73674
    MOV dword ptr [0x01c73688],ECX      ; 004975c4 | DAT_01c73688
    MOV dword ptr [0x01c7368c],EBX      ; 004975ca | DAT_01c7368c
    MOV dword ptr [0x01c73690],ESI      ; 004975d0 | DAT_01c73690
    MOV dword ptr [0x01c73694],EDI      ; 004975d6 | DAT_01c73694
    MOV dword ptr [0x01c73678],ECX      ; 004975dc | DAT_01c73678
    MOV dword ptr [0x01c7367c],ECX      ; 004975e2 | DAT_01c7367c
    MOV EBX,dword ptr [0x005f2afc]      ; 004975e8 | DAT_005f2afc
    MOV EDX,0xffff                      ; 004975ee
    PUSH EBX                            ; 004975f3 | DAT_01bdd7e4
    MOV dword ptr [0x01c73684],ECX      ; 004975f4 | DAT_01c73684
    MOV dword ptr [0x01c73680],EDX      ; 004975fa | DAT_01c73680
    CALL FUN_0046d4c0                   ; 00497600
        ;   XREF to: 0046d4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046d4c0()
    ADD ESP,0x8                         ; 00497605
    POP EDI                             ; 00497608
    POP ESI                             ; 00497609
    POP EBX                             ; 0049760a
    RET                                 ; 0049760b

