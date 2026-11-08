; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00577480(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_00408d30
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b350
;   thunk_FUN_004e9810
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00577480
        ;   Label: FUN_00577480
    PUSH ESI                            ; 00577481
    PUSH EDI                            ; 00577482
    PUSH EBP                            ; 00577483
    SUB ESP,0x54                        ; 00577484
    MOV EBX,dword ptr [ESP + 0x68]      ; 00577487
    PUSH EBX                            ; 0057748b
    CALL FUN_004089d0                   ; 0057748c
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 00577491
    PUSH 0x0                            ; 00577494
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 00577496
    PUSH EBX                            ; 0057749c
    LEA ESI,[ESP + 0x8]                 ; 0057749d
    LEA EDI,[ESP + 0x20]                ; 005774a1
    CALL dword ptr [EAX + 0x24]         ; 005774a5
    MOV ECX,0x6                         ; 005774a8
    ADD ESP,0x4                         ; 005774ad
    LEA EAX,[ESP + 0x1c]                ; 005774b0
    LEA ESI,[ESP + 0x4]                 ; 005774b4
    PUSH EAX                            ; 005774b8
    MOVSD.REP ES:EDI,ESI                ; 005774b9
    CALL FUN_0041a840                   ; 005774bb
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 005774c0
    MOV EBP,EAX                         ; 005774c3
    TEST EAX,EAX                        ; 005774c5
    JNZ 0x005774dc                      ; 005774c7
        ;   XREF to: 005774dc (CONDITIONAL_JUMP)  ; LAB_005774dc
    PUSH EBX                            ; 005774c9
    CALL FUN_00408a10                   ; 005774ca
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 005774cf
    MOV EAX,EBP                         ; 005774d2
    ADD ESP,0x54                        ; 005774d4
    POP EBP                             ; 005774d7
    POP EDI                             ; 005774d8
    POP ESI                             ; 005774d9
    POP EBX                             ; 005774da
    RET                                 ; 005774db
    MOV EAX,dword ptr [EBX + 0x46c]     ; 005774dc
        ;   Label: LAB_005774dc
    MOV dword ptr [ESP + 0x34],EAX      ; 005774e2
    LEA EAX,[ESP + 0x30]                ; 005774e6
    LEA ESI,[ESP + 0x3c]                ; 005774ea
    PUSH EAX                            ; 005774ee
    LEA EDI,[ESP + 0x4c]                ; 005774ef
    XOR EDX,EDX                         ; 005774f3
    PUSH EBX                            ; 005774f5
    MOV dword ptr [ESP + 0x38],EDX      ; 005774f6
    MOV dword ptr [ESP + 0x40],EDX      ; 005774fa
    CALL FUN_00408d30                   ; 005774fe
        ;   XREF to: 00408d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00408d30()
    ADD ESP,0x8                         ; 00577503
    LEA EAX,[ESP + 0x48]                ; 00577506
    LEA ESI,[ESP + 0x3c]                ; 0057750a
    PUSH EAX                            ; 0057750e
    MOVSD ES:EDI,ESI                    ; 0057750f
    MOVSD ES:EDI,ESI                    ; 00577510
    MOVSD ES:EDI,ESI                    ; 00577511
    PUSH 0x265370c                      ; 00577512
    MOV ESI,dword ptr [0x0060b280]      ; 00577517 | DAT_0060b280
    PUSH ESI                            ; 0057751d
    CALL FUN_0046b350                   ; 0057751e
        ;   XREF to: 0046b350 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b350()
    ADD ESP,0xc                         ; 00577523
    PUSH -0x1                           ; 00577526
    LEA EAX,[EBX + 0x2b4]               ; 00577528
    PUSH 0x0                            ; 0057752e
    PUSH EAX                            ; 00577530
    CALL FUN_0044fcc0                   ; 00577531
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 00577536
    MOV EDI,dword ptr [0x0060b280]      ; 00577539 | DAT_0060b280
    PUSH EDI                            ; 0057753f
    CALL thunk_FUN_004e9810             ; 00577540
        ;   XREF to: 0046b4a0 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e9810()
    ADD ESP,0x4                         ; 00577545
    PUSH EBX                            ; 00577548
    CALL FUN_00408a10                   ; 00577549
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 0057754e
    MOV EAX,EBP                         ; 00577551
    ADD ESP,0x54                        ; 00577553
    POP EBP                             ; 00577556
    POP EDI                             ; 00577557
    POP ESI                             ; 00577558
    POP EBX                             ; 00577559
    RET                                 ; 0057755a

