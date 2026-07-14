; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_1000b330(char *param_1,int param_2)
;
;
; XREF[2]:
;   FUN_1000b060 at 1000b0a7
;   FUN_1000b480 at 1000b4be
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 1000b330
        ;   Label: FUN_1000b330
    XOR EDX,EDX                         ; 1000b331
    LEA EBX,[ESP + 0x10]                ; 1000b333
    PUSH ESI                            ; 1000b337
    CMP dword ptr [ESP + 0x10],EDX      ; 1000b338
    PUSH EDI                            ; 1000b33c
    PUSH EBP                            ; 1000b33d
    JLE 0x1000b379                      ; 1000b33e
        ;   XREF to: 1000b379 (CONDITIONAL_JUMP)  ; LAB_1000b379
    MOV EDI,dword ptr [EBX]             ; 1000b340
        ;   Label: LAB_1000b340
    ADD EBX,0x4                         ; 1000b342
    MOV ECX,0xffffffff                  ; 1000b345
    SUB EAX,EAX                         ; 1000b34a
    SCASB.REPNE ES:EDI                  ; 1000b34c
    NOT ECX                             ; 1000b34e
    SUB EDI,ECX                         ; 1000b350
    MOV EBP,ECX                         ; 1000b352
    MOV ESI,EDI                         ; 1000b354
    MOV ECX,0xffffffff                  ; 1000b356
    MOV EDI,dword ptr [ESP + 0x14]      ; 1000b35b
    SUB EAX,EAX                         ; 1000b35f
    SCASB.REPNE ES:EDI                  ; 1000b361
    DEC EDI                             ; 1000b363
    MOV ECX,EBP                         ; 1000b364
    SHR ECX,0x2                         ; 1000b366
    INC EDX                             ; 1000b369
    MOVSD.REP ES:EDI,ESI                ; 1000b36a
    MOV ECX,EBP                         ; 1000b36c
    AND ECX,0x3                         ; 1000b36e
    MOVSB.REP ES:EDI,ESI                ; 1000b371
    CMP EDX,dword ptr [ESP + 0x18]      ; 1000b373
    JL 0x1000b340                       ; 1000b377
        ;   XREF to: 1000b340 (CONDITIONAL_JUMP)  ; LAB_1000b340
    POP EBP                             ; 1000b379
        ;   Label: LAB_1000b379
    POP EDI                             ; 1000b37a
    POP ESI                             ; 1000b37b
    POP EBX                             ; 1000b37c
    RET                                 ; 1000b37d

