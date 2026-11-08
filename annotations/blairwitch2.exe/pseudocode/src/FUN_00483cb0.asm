; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00483cb0(int *param_1,int param_2,int param_3)
;
;
; Called Functions:
;   FUN_004810d0
;   FUN_004839d0
;   FUN_00483aa0
;   FUN_00483b00
;   FUN_00483bd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00483cb0
        ;   Label: FUN_00483cb0
    PUSH ESI                            ; 00483cb1
    PUSH EDI                            ; 00483cb2
    MOV ESI,dword ptr [ESP + 0x10]      ; 00483cb3
    MOV EBX,dword ptr [ESP + 0x18]      ; 00483cb7
    MOV EDI,dword ptr [ESP + 0x14]      ; 00483cbb
    INC EBX                             ; 00483cbf
    MOV EAX,dword ptr [ESI]             ; 00483cc0
        ;   Label: LAB_00483cc0
    CMP EBX,EAX                         ; 00483cc2
    JL 0x00483cdd                       ; 00483cc4
        ;   XREF to: 00483cdd (CONDITIONAL_JUMP)  ; LAB_00483cdd
    MOV EDX,dword ptr [ESP + 0x18]      ; 00483cc6
    PUSH EDX                            ; 00483cca
    MOV ECX,dword ptr [ESP + 0x18]      ; 00483ccb
    PUSH ECX                            ; 00483ccf
    PUSH ESI                            ; 00483cd0
    CALL FUN_004810d0                   ; 00483cd1
        ;   XREF to: 004810d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004810d0()
    ADD ESP,0xc                         ; 00483cd6
    POP EDI                             ; 00483cd9
    POP ESI                             ; 00483cda
    POP EBX                             ; 00483cdb
    RET                                 ; 00483cdc
    PUSH EBX                            ; 00483cdd
        ;   Label: LAB_00483cdd
    PUSH ESI                            ; 00483cde
    CALL FUN_00483aa0                   ; 00483cdf
        ;   XREF to: 00483aa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483aa0()
    ADD ESP,0x8                         ; 00483ce4
    PUSH EAX                            ; 00483ce7
    PUSH EDI                            ; 00483ce8
    PUSH ESI                            ; 00483ce9
    CALL FUN_004839d0                   ; 00483cea
        ;   XREF to: 004839d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004839d0()
    ADD ESP,0xc                         ; 00483cef
    PUSH EBX                            ; 00483cf2
    PUSH ESI                            ; 00483cf3
    CALL FUN_00483bd0                   ; 00483cf4
        ;   XREF to: 00483bd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00483bd0()
    ADD ESP,0x8                         ; 00483cf9
    PUSH EAX                            ; 00483cfc
    PUSH EDI                            ; 00483cfd
    PUSH ESI                            ; 00483cfe
    INC EBX                             ; 00483cff
    CALL FUN_00483b00                   ; 00483d00
        ;   XREF to: 00483b00 (UNCONDITIONAL_CALL)  ; undefined FUN_00483b00()
    INC EDI                             ; 00483d05
    ADD ESP,0xc                         ; 00483d06
    JMP 0x00483cc0                      ; 00483d09
        ;   XREF to: 00483cc0 (UNCONDITIONAL_JUMP)  ; LAB_00483cc0

