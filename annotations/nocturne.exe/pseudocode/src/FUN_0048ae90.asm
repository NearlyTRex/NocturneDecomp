; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048ae90(undefined4 param_1,undefined4 param_2,undefined4 param_3,undefined4 param_4,int param_5,undefined4 param_6,undefined4 param_7)
;
;
; XREF[4]:
;   FUN_004874d0 at 00487601
;   FUN_0048ab60 at 0048ad46
;   FUN_0048d0c0 at 0048d136
;   FUN_0048e550 at 0048e585
;
; Referenced Globals:
;   undefined4 DAT_01c49d50
;
; Called Functions:
;   FUN_0040de00
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048ae90
        ;   Label: FUN_0048ae90
    PUSH EDI                            ; 0048ae91
    PUSH EBP                            ; 0048ae92
    MOV EDX,dword ptr [0x01c49d50]      ; 0048ae93 | DAT_01c49d50
    LEA EAX,[EDX*0x4 + 0x0]             ; 0048ae99
    ADD EAX,EDX                         ; 0048aea0
    SHL EAX,0x2                         ; 0048aea2
    MOV EBX,0x1c49d54                   ; 0048aea5
    SUB EAX,EDX                         ; 0048aeaa
    INC EDX                             ; 0048aeac
    SHL EAX,0x2                         ; 0048aead
    MOV dword ptr [0x01c49d50],EDX      ; 0048aeb0 | DAT_01c49d50
    ADD EBX,EAX                         ; 0048aeb6
    CMP EDX,0x100                       ; 0048aeb8
    JL 0x0048aeca                       ; 0048aebe
        ;   XREF to: 0048aeca (CONDITIONAL_JUMP)  ; LAB_0048aeca
    PUSH ESI                            ; 0048aec0
    XOR ESI,ESI                         ; 0048aec1
    MOV dword ptr [0x01c49d50],ESI      ; 0048aec3 | DAT_01c49d50
    POP ESI                             ; 0048aec9
    MOV EDI,dword ptr [ESP + 0x18]      ; 0048aeca
        ;   Label: LAB_0048aeca
    PUSH EDI                            ; 0048aece
    MOV EBP,dword ptr [ESP + 0x18]      ; 0048aecf
    PUSH EBP                            ; 0048aed3
    MOV EAX,dword ptr [EBX + 0x34]      ; 0048aed4
    PUSH EBX                            ; 0048aed7
    CALL dword ptr [EAX]                ; 0048aed8
    ADD ESP,0xc                         ; 0048aeda
    PUSH 0xffff                         ; 0048aedd
    PUSH 0xc000                         ; 0048aee2
    CALL FUN_0040de00                   ; 0048aee7
        ;   XREF to: 0040de00 (UNCONDITIONAL_CALL)  ; undefined FUN_0040de00()
    ADD ESP,0x8                         ; 0048aeec
    MOV EDX,EAX                         ; 0048aeef
    MOV EAX,dword ptr [ESP + 0x20]      ; 0048aef1
    IMUL EDX                            ; 0048aef5
    SHRD EAX,EDX,0x10                   ; 0048aef7
    MOV dword ptr [EBX + 0x40],0x0      ; 0048aefb
    MOV dword ptr [EBX + 0x38],EAX      ; 0048af02
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0048af05
    MOV dword ptr [EBX + 0x3c],EAX      ; 0048af09
    MOV EAX,dword ptr [ESP + 0x24]      ; 0048af0c
    MOV dword ptr [EBX + 0x44],EAX      ; 0048af10
    MOV EAX,dword ptr [ESP + 0x28]      ; 0048af13
    MOV dword ptr [EBX + 0x48],EAX      ; 0048af17
    POP EBP                             ; 0048af1a
    POP EDI                             ; 0048af1b
    POP EBX                             ; 0048af1c
    RET                                 ; 0048af1d

