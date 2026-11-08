; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ea3c0(int param_1)
;
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004207b0
;   FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ea3c0
        ;   Label: FUN_004ea3c0
    PUSH ESI                            ; 004ea3c1
    PUSH EDI                            ; 004ea3c2
    SUB ESP,0x30                        ; 004ea3c3
    MOV EBX,dword ptr [ESP + 0x40]      ; 004ea3c6
    PUSH EBX                            ; 004ea3ca
    CALL FUN_004087b0                   ; 004ea3cb
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 004ea3d0
    PUSH 0x0                            ; 004ea3d3
    MOV EAX,dword ptr [EBX + 0x154]     ; 004ea3d5
    PUSH EBX                            ; 004ea3db
    LEA ESI,[ESP + 0x8]                 ; 004ea3dc
    LEA EDI,[ESP + 0x20]                ; 004ea3e0
    CALL dword ptr [EAX + 0x1c]         ; 004ea3e4
    MOV ECX,0x6                         ; 004ea3e7
    ADD ESP,0x4                         ; 004ea3ec
    LEA EAX,[ESP + 0x1c]                ; 004ea3ef
    LEA ESI,[ESP + 0x4]                 ; 004ea3f3
    PUSH EAX                            ; 004ea3f7
    MOVSD.REP ES:EDI,ESI                ; 004ea3f8
    CALL FUN_004207b0                   ; 004ea3fa
        ;   XREF to: 004207b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004207b0()
    ADD ESP,0x8                         ; 004ea3ff
    MOV ESI,EAX                         ; 004ea402
    TEST EAX,EAX                        ; 004ea404
    JNZ 0x004ea41a                      ; 004ea406
        ;   XREF to: 004ea41a (CONDITIONAL_JUMP)  ; LAB_004ea41a
    PUSH EBX                            ; 004ea408
    CALL FUN_004087f0                   ; 004ea409
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004ea40e
    MOV EAX,ESI                         ; 004ea411
    ADD ESP,0x30                        ; 004ea413
    POP EDI                             ; 004ea416
    POP ESI                             ; 004ea417
    POP EBX                             ; 004ea418
    RET                                 ; 004ea419
    PUSH -0x1                           ; 004ea41a
        ;   Label: LAB_004ea41a
    LEA EAX,[EBX + 0x158]               ; 004ea41c
    PUSH 0x0                            ; 004ea422
    PUSH EAX                            ; 004ea424
    CALL FUN_004688a0                   ; 004ea425
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 004ea42a
    PUSH EBX                            ; 004ea42d
    CALL FUN_004087f0                   ; 004ea42e
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    ADD ESP,0x4                         ; 004ea433
    MOV EAX,ESI                         ; 004ea436
    ADD ESP,0x30                        ; 004ea438
    POP EDI                             ; 004ea43b
    POP ESI                             ; 004ea43c
    POP EBX                             ; 004ea43d
    RET                                 ; 004ea43e

