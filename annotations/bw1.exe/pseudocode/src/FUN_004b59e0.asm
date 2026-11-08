; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b59e0(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[20]:
;   FUN_004123d0 at 0041256d
;   FUN_00413f90 at 0041412d
;   FUN_00424b10 at 00424cd2
;   FUN_0047d480 at 0047d60d
;   FUN_004926d0 at 004928b5
;   FUN_0049f310 at 0049f440
;   FUN_004ae300 at 004ae411
;   FUN_004aee60 at 004aeeb0
;   FUN_004b1d90 at 004b1ee0
;   FUN_004b56a0 at 004b58a1
;   ... and 10 more
;
; Referenced Globals:
;   undefined4 DAT_01c986b0
;
; Called Functions:
;   FUN_0040cc60
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b59e0
        ;   Label: FUN_004b59e0
    PUSH EDI                            ; 004b59e1
    PUSH EBP                            ; 004b59e2
    MOV EDX,dword ptr [0x01c986b0]      ; 004b59e3 | DAT_01c986b0
    LEA EAX,[EDX*0x4 + 0x0]             ; 004b59e9
    ADD EAX,EDX                         ; 004b59f0
    SHL EAX,0x2                         ; 004b59f2
    MOV EBX,0x1c986b4                   ; 004b59f5
    ADD EAX,EDX                         ; 004b59fa
    INC EDX                             ; 004b59fc
    SHL EAX,0x2                         ; 004b59fd
    MOV dword ptr [0x01c986b0],EDX      ; 004b5a00 | DAT_01c986b0
    ADD EBX,EAX                         ; 004b5a06
    CMP EDX,0x100                       ; 004b5a08
    JL 0x004b5a1a                       ; 004b5a0e
        ;   XREF to: 004b5a1a (CONDITIONAL_JUMP)  ; LAB_004b5a1a
    PUSH ESI                            ; 004b5a10
    XOR ESI,ESI                         ; 004b5a11
    MOV dword ptr [0x01c986b0],ESI      ; 004b5a13 | DAT_01c986b0
    POP ESI                             ; 004b5a19
    MOV EDI,dword ptr [ESP + 0x18]      ; 004b5a1a
        ;   Label: LAB_004b5a1a
    PUSH EDI                            ; 004b5a1e
    MOV EBP,dword ptr [ESP + 0x18]      ; 004b5a1f
    PUSH EBP                            ; 004b5a23
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004b5a24
    PUSH EBX                            ; 004b5a27
    CALL dword ptr [EAX]                ; 004b5a28
    ADD ESP,0xc                         ; 004b5a2a
    PUSH 0xffff                         ; 004b5a2d
    PUSH 0xc000                         ; 004b5a32
    CALL FUN_0040cc60                   ; 004b5a37
        ;   XREF to: 0040cc60 (UNCONDITIONAL_CALL)  ; undefined FUN_0040cc60()
    ADD ESP,0x8                         ; 004b5a3c
    MOV EDX,EAX                         ; 004b5a3f
    MOV EAX,dword ptr [ESP + 0x20]      ; 004b5a41
    IMUL EDX                            ; 004b5a45
    SHRD EAX,EDX,0x10                   ; 004b5a47
    MOV dword ptr [EBX + 0x48],0x0      ; 004b5a4b
    MOV dword ptr [EBX + 0x40],EAX      ; 004b5a52
    MOV EAX,dword ptr [ESP + 0x1c]      ; 004b5a55
    MOV dword ptr [EBX + 0x44],EAX      ; 004b5a59
    MOV EAX,dword ptr [ESP + 0x24]      ; 004b5a5c
    MOV dword ptr [EBX + 0x4c],EAX      ; 004b5a60
    MOV EAX,dword ptr [ESP + 0x28]      ; 004b5a63
    MOV dword ptr [EBX + 0x50],EAX      ; 004b5a67
    POP EBP                             ; 004b5a6a
    POP EDI                             ; 004b5a6b
    POP EBX                             ; 004b5a6c
    RET                                 ; 004b5a6d

