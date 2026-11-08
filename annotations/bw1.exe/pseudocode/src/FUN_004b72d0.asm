; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b72d0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0049f310 at 0049fa41
;
; Referenced Globals:
;   undefined4 DAT_01cbc108
;   undefined4 DAT_01cbc148
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b72d0
        ;   Label: FUN_004b72d0
    PUSH ESI                            ; 004b72d1
    PUSH EBP                            ; 004b72d2
    MOV ECX,dword ptr [ESP + 0x18]      ; 004b72d3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004b72d7
    MOV EAX,[0x01cbc108]                ; 004b72db | DAT_01cbc108
    PUSH ECX                            ; 004b72e0
    SHL EAX,0x6                         ; 004b72e1
    PUSH EBX                            ; 004b72e4
    ADD EAX,0x1cbc10c                   ; 004b72e5
    PUSH EAX                            ; 004b72ea
    MOV EDX,dword ptr [EAX + 0x3c]      ; 004b72eb | DAT_01cbc148
    CALL dword ptr [EDX]                ; 004b72ee
    MOV ESI,dword ptr [0x01cbc108]      ; 004b72f0 | DAT_01cbc108
    INC ESI                             ; 004b72f6
    ADD ESP,0xc                         ; 004b72f7
    MOV dword ptr [0x01cbc108],ESI      ; 004b72fa | DAT_01cbc108
    CMP ESI,0x100                       ; 004b7300
    JGE 0x004b730c                      ; 004b7306
        ;   XREF to: 004b730c (CONDITIONAL_JUMP)  ; LAB_004b730c
    POP EBP                             ; 004b7308
    POP ESI                             ; 004b7309
    POP EBX                             ; 004b730a
    RET                                 ; 004b730b
    XOR EBP,EBP                         ; 004b730c
        ;   Label: LAB_004b730c
    MOV dword ptr [0x01cbc108],EBP      ; 004b730e | DAT_01cbc108
    POP EBP                             ; 004b7314
    POP ESI                             ; 004b7315
    POP EBX                             ; 004b7316
    RET                                 ; 004b7317

