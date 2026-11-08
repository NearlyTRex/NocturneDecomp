; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_005064c0(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;
; Called Functions:
;   FUN_004087b0
;   FUN_004087f0
;   FUN_004688a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005064c0
        ;   Label: FUN_005064c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 005064c1
    PUSH EBX                            ; 005064c5
    CALL FUN_004087b0                   ; 005064c6
        ;   XREF to: 004087b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087b0()
    ADD ESP,0x4                         ; 005064cb
    MOV EAX,[0x0061d95c]                ; 005064ce | DAT_0061d95c
    PUSH -0x1                           ; 005064d3
    MOV dword ptr [EAX + 0x210],0x1     ; 005064d5
    LEA EAX,[EBX + 0x158]               ; 005064df
    PUSH 0x0                            ; 005064e5
    PUSH EAX                            ; 005064e7
    CALL FUN_004688a0                   ; 005064e8
        ;   XREF to: 004688a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004688a0()
    ADD ESP,0xc                         ; 005064ed
    MOV EAX,[0x0061d95c]                ; 005064f0 | DAT_0061d95c
    PUSH EBX                            ; 005064f5
    MOV dword ptr [EAX + 0x210],0x0     ; 005064f6
    CALL FUN_004087f0                   ; 00506500
        ;   XREF to: 004087f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004087f0()
    MOV EAX,0x1                         ; 00506505
    ADD ESP,0x4                         ; 0050650a
    POP EBX                             ; 0050650d
    RET                                 ; 0050650e

