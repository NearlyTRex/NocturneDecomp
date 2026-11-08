; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00553380(int param_1)
;
;
; Called Functions:
;   FUN_00553520
;   FUN_00573a40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00553380
        ;   Label: FUN_00553380
    MOV EBX,dword ptr [ESP + 0x8]       ; 00553381
    PUSH EBX                            ; 00553385
    CALL FUN_00553520                   ; 00553386
        ;   XREF to: 00553520 (UNCONDITIONAL_CALL)  ; undefined FUN_00553520()
    ADD ESP,0x4                         ; 0055338b
    PUSH 0x0                            ; 0055338e
    ADD EBX,0x17c                       ; 00553390
    PUSH EBX                            ; 00553396
    CALL FUN_00573a40                   ; 00553397
        ;   XREF to: 00573a40 (UNCONDITIONAL_CALL)  ; undefined FUN_00573a40()
    ADD ESP,0x8                         ; 0055339c
    SUB EAX,0x17c                       ; 0055339f
    POP EBX                             ; 005533a4
    RET                                 ; 005533a5

