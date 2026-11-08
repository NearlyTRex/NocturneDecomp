; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00522490(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_005230c0 at 005230eb
;
; Called Functions:
;   FUN_00522340
;   FUN_00569890
;   FUN_00569eb0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00522490
        ;   Label: FUN_00522490
    PUSH ESI                            ; 00522491
    PUSH EDI                            ; 00522492
    PUSH EBP                            ; 00522493
    MOV EBX,dword ptr [ESP + 0x18]      ; 00522494
    PUSH 0x0                            ; 00522498
    PUSH EBX                            ; 0052249a
    CALL FUN_00569890                   ; 0052249b
        ;   XREF to: 00569890 (UNCONDITIONAL_CALL)  ; undefined FUN_00569890()
    ADD ESP,0x8                         ; 005224a0
    PUSH EBX                            ; 005224a3
    CALL FUN_00569eb0                   ; 005224a4
        ;   XREF to: 00569eb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00569eb0()
    MOV EDX,EAX                         ; 005224a9
    MOV EAX,dword ptr [EBX + 0x2320]    ; 005224ab
    SHL EAX,0x2                         ; 005224b1
    ADD EAX,EDX                         ; 005224b4
    ADD ESP,0x4                         ; 005224b6
    MOV ECX,dword ptr [EAX + 0x90]      ; 005224b9
    PUSH ECX                            ; 005224bf
    ADD EDX,0xc0                        ; 005224c0
    PUSH EDX                            ; 005224c6
    MOV ESI,dword ptr [EAX + 0x7c]      ; 005224c7
    PUSH ESI                            ; 005224ca
    MOV EDI,dword ptr [EAX + 0x54]      ; 005224cb
    PUSH EDI                            ; 005224ce
    MOV EBP,dword ptr [EBX + 0x2324]    ; 005224cf
    PUSH EBP                            ; 005224d5
    MOV EDX,dword ptr [EAX + 0x2c]      ; 005224d6
    PUSH EDX                            ; 005224d9
    MOV ECX,dword ptr [ESP + 0x2c]      ; 005224da
    PUSH ECX                            ; 005224de
    CALL FUN_00522340                   ; 005224df
        ;   XREF to: 00522340 (UNCONDITIONAL_CALL)  ; undefined FUN_00522340()
    ADD ESP,0x1c                        ; 005224e4
    POP EBP                             ; 005224e7
    POP EDI                             ; 005224e8
    POP ESI                             ; 005224e9
    POP EBX                             ; 005224ea
    RET                                 ; 005224eb

