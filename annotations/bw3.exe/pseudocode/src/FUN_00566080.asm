; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00566080(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_00560e37 at 00560e48
;
; Referenced Globals:
;   undefined4 DAT_0060683c
;   undefined4 DAT_01c6b5a8
;   undefined4 DAT_01c6b5ac
;   undefined4 DAT_01c6b5b0
;   undefined4 DAT_01c6b5b4
;   undefined4 DAT_01c6b5c0
;
; Called Functions:
;   FUN_00565c10
;   FUN_005a28f0
;
; *****************************************************************************

section .text

    SUB ESP,0xc0                        ; 00566080
        ;   Label: FUN_00566080
    PUSH 0xc0                           ; 00566086
    PUSH 0x0                            ; 0056608b
    LEA EAX,[ESP + 0x8]                 ; 0056608d
    PUSH EAX                            ; 00566091
    CALL FUN_005a28f0                   ; 00566092
        ;   XREF to: 005a28f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005a28f0()
    MOV EAX,[0x01c6b5a8]                ; 00566097 | DAT_01c6b5a8
    ADD ESP,0xc                         ; 0056609c
    SHL EAX,0x10                        ; 0056609f
    MOV dword ptr [ESP + 0x10],EAX      ; 005660a2
    MOV EAX,[0x01c6b5ac]                ; 005660a6 | DAT_01c6b5ac
    SHL EAX,0x10                        ; 005660ab
    MOV dword ptr [ESP + 0x14],EAX      ; 005660ae
    MOV EAX,[0x01c6b5b0]                ; 005660b2 | DAT_01c6b5b0
    SHL EAX,0x10                        ; 005660b7
    MOV dword ptr [ESP + 0x40],EAX      ; 005660ba
    MOV EAX,dword ptr [ESP + 0x14]      ; 005660be
    MOV dword ptr [ESP + 0x44],EAX      ; 005660c2
    MOV EAX,dword ptr [ESP + 0x40]      ; 005660c6
    MOV dword ptr [ESP + 0x70],EAX      ; 005660ca
    MOV EAX,[0x01c6b5b4]                ; 005660ce | DAT_01c6b5b4
    SHL EAX,0x10                        ; 005660d3
    MOV dword ptr [ESP + 0x74],EAX      ; 005660d6
    MOV EAX,dword ptr [ESP + 0x10]      ; 005660da
    MOV dword ptr [ESP + 0xa0],EAX      ; 005660de
    MOV EAX,dword ptr [ESP + 0x74]      ; 005660e5
    MOV dword ptr [ESP + 0xa4],EAX      ; 005660e9
    MOV EAX,[0x0060683c]                ; 005660f0 | DAT_0060683c
    PUSH 0x10                           ; 005660f5
    MOV dword ptr [ESP + 0xc],EAX       ; 005660f7
    MOV dword ptr [ESP + 0x3c],EAX      ; 005660fb
    MOV dword ptr [ESP + 0x6c],EAX      ; 005660ff
    MOV dword ptr [ESP + 0x9c],EAX      ; 00566103
    MOV EAX,dword ptr [ESP + 0xc8]      ; 0056610a
    PUSH 0x4                            ; 00566111
    MOV [0x01c6b5c0],EAX                ; 00566113 | DAT_01c6b5c0
    LEA EAX,[ESP + 0x8]                 ; 00566118
    PUSH EAX                            ; 0056611c
    CALL FUN_00565c10                   ; 0056611d
        ;   XREF to: 00565c10 (UNCONDITIONAL_CALL)  ; undefined FUN_00565c10()
    MOV EAX,0x1                         ; 00566122
    ADD ESP,0xc                         ; 00566127
    ADD ESP,0xc0                        ; 0056612a
    RET                                 ; 00566130

