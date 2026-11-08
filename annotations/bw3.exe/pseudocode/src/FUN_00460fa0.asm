; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00460fa0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00460f20 at 00460f3f
;
; Referenced Globals:
;   undefined4 DAT_00603b28
;   undefined4 DAT_01ed78c8
;
; Called Functions:
;   FUN_00460f60
;   FUN_00538ad0
;   FUN_00538dd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00460fa0
        ;   Label: FUN_00460fa0
    PUSH ESI                            ; 00460fa1
    PUSH EDI                            ; 00460fa2
    PUSH EBP                            ; 00460fa3
    MOV EBX,dword ptr [ESP + 0x14]      ; 00460fa4
    CMP dword ptr [EBX + 0x110],0x1     ; 00460fa8
    JGE 0x00460fb6                      ; 00460faf
        ;   XREF to: 00460fb6 (CONDITIONAL_JUMP)  ; LAB_00460fb6
    POP EBP                             ; 00460fb1
    POP EDI                             ; 00460fb2
    POP ESI                             ; 00460fb3
    POP EBX                             ; 00460fb4
    RET                                 ; 00460fb5
    MOV ECX,dword ptr [ESP + 0x18]      ; 00460fb6
        ;   Label: LAB_00460fb6
    PUSH ECX                            ; 00460fba
    PUSH EBX                            ; 00460fbb
    CALL FUN_00460f60                   ; 00460fbc
        ;   XREF to: 00460f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00460f60()
    ADD ESP,0x8                         ; 00460fc1
    PUSH EAX                            ; 00460fc4
    MOV EDI,dword ptr [EBX + 0x104]     ; 00460fc5
    PUSH EDI                            ; 00460fcb
    MOV EBP,dword ptr [0x00603b28]      ; 00460fcc | DAT_00603b28
    PUSH EBP                            ; 00460fd2 | DAT_01ed78c8
    MOV ESI,EAX                         ; 00460fd3
    CALL FUN_00538ad0                   ; 00460fd5
        ;   XREF to: 00538ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538ad0()
    MOV EAX,dword ptr [EBX + 0x108]     ; 00460fda
    ADD ESP,0xc                         ; 00460fe0
    TEST EAX,EAX                        ; 00460fe3
    JZ 0x00461014                       ; 00460fe5
        ;   XREF to: 00461014 (CONDITIONAL_JUMP)  ; LAB_00461014
    PUSH EAX                            ; 00460fe7
    PUSH 0x4                            ; 00460fe8
    PUSH ESI                            ; 00460fea
    MOV EAX,dword ptr [EBX + 0x114]     ; 00460feb
    PUSH EAX                            ; 00460ff1
    MOV EDX,dword ptr [EBX + 0x110]     ; 00460ff2
    PUSH EDX                            ; 00460ff8
    MOV ECX,dword ptr [EBX + 0x104]     ; 00460ff9
    PUSH ECX                            ; 00460fff
    MOV EBX,dword ptr [0x00603b28]      ; 00461000 | DAT_00603b28
    PUSH EBX                            ; 00461006 | DAT_01ed78c8
    CALL FUN_00538dd0                   ; 00461007
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    ADD ESP,0x1c                        ; 0046100c
    POP EBP                             ; 0046100f
    POP EDI                             ; 00461010
    POP ESI                             ; 00461011
    POP EBX                             ; 00461012
    RET                                 ; 00461013
    PUSH EAX                            ; 00461014
        ;   Label: LAB_00461014
    PUSH 0x4                            ; 00461015
    PUSH ESI                            ; 00461017
    MOV EDX,dword ptr [EBX + 0x114]     ; 00461018
    PUSH EDX                            ; 0046101e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0046101f
    PUSH ECX                            ; 00461025
    MOV ESI,dword ptr [EBX + 0x104]     ; 00461026
    PUSH ESI                            ; 0046102c
    MOV EDI,dword ptr [0x00603b28]      ; 0046102d | DAT_00603b28
    PUSH EDI                            ; 00461033 | DAT_01ed78c8
    CALL FUN_00538dd0                   ; 00461034
        ;   XREF to: 00538dd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00538dd0()
    ADD ESP,0x1c                        ; 00461039
    POP EBP                             ; 0046103c
    POP EDI                             ; 0046103d
    POP ESI                             ; 0046103e
    POP EBX                             ; 0046103f
    RET                                 ; 00461040

