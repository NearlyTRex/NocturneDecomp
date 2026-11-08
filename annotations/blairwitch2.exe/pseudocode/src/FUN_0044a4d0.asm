; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0044a4d0(int param_1)
;
;
; XREF[1]:
;   FUN_0052ddf0 at 0052e708
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01b11db4
;   undefined4 DAT_01b11db8
;   undefined4 DAT_01b11dbc
;   undefined4 DAT_01b11dbd
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;   undefined4 DAT_01c2a391
;
; Called Functions:
;   FUN_0046b940
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01b11db4]      ; 0044a4d0 | DAT_01b11db4
        ;   Label: FUN_0044a4d0
    DEC EDX                             ; 0044a4d6
    MOV dword ptr [0x01b11db4],EDX      ; 0044a4d7 | DAT_01b11db4
    JZ 0x0044a4e0                       ; 0044a4dd
        ;   XREF to: 0044a4e0 (CONDITIONAL_JUMP)  ; LAB_0044a4e0
    RET                                 ; 0044a4df
    PUSH EDI                            ; 0044a4e0
        ;   Label: LAB_0044a4e0
    PUSH ESI                            ; 0044a4e1
    PUSH EBX                            ; 0044a4e2
    MOV ECX,dword ptr [ESP + 0x10]      ; 0044a4e3
    MOV ESI,0x1b11db8                   ; 0044a4e7
    MOV ECX,dword ptr [ECX + 0x1cc4]    ; 0044a4ec
    MOV EDI,0x1c2a38c                   ; 0044a4f2
    SHL ECX,0x2                         ; 0044a4f7
    PUSH EDI                            ; 0044a4fa | DAT_01c2a38c
    MOV EAX,ECX                         ; 0044a4fb
    SHR ECX,0x2                         ; 0044a4fd
    MOVSD.REP ES:EDI,ESI                ; 0044a500 | DAT_01b11db8 | DAT_01c2a38c | DAT_01b11dbc
    MOV CL,AL                           ; 0044a502
    AND CL,0x3                          ; 0044a504
    MOVSB.REP ES:EDI,ESI                ; 0044a507 | DAT_01b11dbc | DAT_01c2a390 | DAT_01b11dbd
    POP EDI                             ; 0044a509
    PUSH EDX                            ; 0044a50a
    MOV EBX,dword ptr [0x0060b280]      ; 0044a50b | DAT_0060b280
    PUSH EBX                            ; 0044a511 | DAT_01ba5c50
    CALL FUN_0046b940                   ; 0044a512
        ;   XREF to: 0046b940 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b940()
    ADD ESP,0x8                         ; 0044a517
    POP EBX                             ; 0044a51a
    POP ESI                             ; 0044a51b
    POP EDI                             ; 0044a51c
    RET                                 ; 0044a51d

