; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004ca290(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_00618170
;   undefined4 DAT_01d192f8
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004ca290
        ;   Label: FUN_004ca290
    SUB ESP,0x30                        ; 004ca291
    MOV EBX,dword ptr [ESP + 0x38]      ; 004ca294
    CMP dword ptr [EBX + 0x438],0x0     ; 004ca298
    JNZ 0x004ca32e                      ; 004ca29f
        ;   XREF to: 004ca32e (CONDITIONAL_JUMP)  ; LAB_004ca32e
    MOV EAX,[0x00618170]                ; 004ca2a5 | DAT_00618170
    CMP dword ptr [EAX + 0x1008],0x0    ; 004ca2aa | DAT_01d192f8
    JNZ 0x004ca2c5                      ; 004ca2b1
        ;   XREF to: 004ca2c5 (CONDITIONAL_JUMP)  ; LAB_004ca2c5
    CMP dword ptr [EBX + 0x440],0x0     ; 004ca2b3
    JZ 0x004ca2c5                       ; 004ca2ba
        ;   XREF to: 004ca2c5 (CONDITIONAL_JUMP)  ; LAB_004ca2c5
    CMP dword ptr [EBX + 0x43c],0x0     ; 004ca2bc
    JZ 0x004ca32e                       ; 004ca2c3
        ;   XREF to: 004ca32e (CONDITIONAL_JUMP)  ; LAB_004ca32e
    PUSH EDI                            ; 004ca2c5
        ;   Label: LAB_004ca2c5
    PUSH ESI                            ; 004ca2c6
    PUSH EBX                            ; 004ca2c7
    CALL FUN_004089d0                   ; 004ca2c8
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 004ca2cd
    PUSH 0x0                            ; 004ca2d0
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 004ca2d2
    PUSH EBX                            ; 004ca2d8
    LEA ESI,[ESP + 0x10]                ; 004ca2d9
    LEA EDI,[ESP + 0x28]                ; 004ca2dd
    CALL dword ptr [EAX + 0x24]         ; 004ca2e1
    MOV ECX,0x6                         ; 004ca2e4
    ADD ESP,0x4                         ; 004ca2e9
    LEA EAX,[ESP + 0x24]                ; 004ca2ec
    LEA ESI,[ESP + 0xc]                 ; 004ca2f0
    PUSH EAX                            ; 004ca2f4
    MOVSD.REP ES:EDI,ESI                ; 004ca2f5
    CALL FUN_0041a840                   ; 004ca2f7
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 004ca2fc
    MOV ESI,EAX                         ; 004ca2ff
    TEST EAX,EAX                        ; 004ca301
    JZ 0x004ca31c                       ; 004ca303
        ;   XREF to: 004ca31c (CONDITIONAL_JUMP)  ; LAB_004ca31c
    PUSH -0x1                           ; 004ca305
    LEA EAX,[EBX + 0x2b4]               ; 004ca307
    PUSH dword ptr [EBX + 0x430]        ; 004ca30d
    PUSH EAX                            ; 004ca313
    CALL FUN_0044fcc0                   ; 004ca314
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 004ca319
    PUSH EBX                            ; 004ca31c
        ;   Label: LAB_004ca31c
    CALL FUN_00408a10                   ; 004ca31d
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 004ca322
    MOV EAX,ESI                         ; 004ca325
    POP ESI                             ; 004ca327
    POP EDI                             ; 004ca328
    ADD ESP,0x30                        ; 004ca329
    POP EBX                             ; 004ca32c
    RET                                 ; 004ca32d
    XOR EAX,EAX                         ; 004ca32e
        ;   Label: LAB_004ca32e
    ADD ESP,0x30                        ; 004ca330
    POP EBX                             ; 004ca333
    RET                                 ; 004ca334

