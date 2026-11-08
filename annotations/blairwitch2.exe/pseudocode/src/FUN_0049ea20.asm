; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0049ea20(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0058a660 at 0058a71c
;
; Referenced Globals:
;   undefined4 DAT_01ca7680
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0049ea20
        ;   Label: FUN_0049ea20
    PUSH ESI                            ; 0049ea21
    MOV EBX,dword ptr [0x01ca7680]      ; 0049ea22 | DAT_01ca7680
    MOV ECX,dword ptr [ESP + 0x14]      ; 0049ea28
    MOV ESI,dword ptr [ESP + 0x10]      ; 0049ea2c
    MOV EAX,EBX                         ; 0049ea30
    PUSH ECX                            ; 0049ea32
    SHL EAX,0x6                         ; 0049ea33
    PUSH ESI                            ; 0049ea36
    ADD EAX,0x1ca7684                   ; 0049ea37
    PUSH EAX                            ; 0049ea3c
    MOV EDX,dword ptr [EAX + 0x3c]      ; 0049ea3d
    CALL dword ptr [EDX]                ; 0049ea40
    MOV EBX,dword ptr [0x01ca7680]      ; 0049ea42 | DAT_01ca7680
    MOV EAX,EBX                         ; 0049ea48
    SHL EAX,0x6                         ; 0049ea4a
    ADD EAX,0x1ca7684                   ; 0049ea4d
    ADD ESP,0xc                         ; 0049ea52
    INC EBX                             ; 0049ea55
    MOV dword ptr [EAX + 0x24],0x3e800000 ; 0049ea56
    CMP EBX,0x100                       ; 0049ea5d
    JL 0x0049ea67                       ; 0049ea63
        ;   XREF to: 0049ea67 (CONDITIONAL_JUMP)  ; LAB_0049ea67
    XOR EBX,EBX                         ; 0049ea65
    MOV dword ptr [0x01ca7680],EBX      ; 0049ea67 | DAT_01ca7680
        ;   Label: LAB_0049ea67
    POP ESI                             ; 0049ea6d
    POP EBX                             ; 0049ea6e
    NOP                                 ; 0049ea6f
    RET                                 ; 0049ea70

