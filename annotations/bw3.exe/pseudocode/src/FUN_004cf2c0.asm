; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004cf2c0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_00408600
;   FUN_00462500
;   FUN_004625f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004cf2c0
        ;   Label: FUN_004cf2c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004cf2c1
    PUSH EBX                            ; 004cf2c5
    CALL FUN_00408600                   ; 004cf2c6
        ;   XREF to: 00408600 (UNCONDITIONAL_CALL)  ; undefined FUN_00408600()
    ADD ESP,0x4                         ; 004cf2cb
    ADD EAX,0x158                       ; 004cf2ce
    PUSH EAX                            ; 004cf2d3
    CALL FUN_00462500                   ; 004cf2d4
        ;   XREF to: 00462500 (UNCONDITIONAL_CALL)  ; undefined FUN_00462500()
    ADD ESP,0x4                         ; 004cf2d9
    LEA EBX,[EAX + 0xfffffea8]          ; 004cf2dc
    PUSH 0x5c47b6                       ; 004cf2e2
    LEA EAX,[EBX + 0x158]               ; 004cf2e7
    PUSH EAX                            ; 004cf2ed
    MOV dword ptr [EBX + 0x154],0x5e0f24 ; 004cf2ee
    CALL FUN_004625f0                   ; 004cf2f8
        ;   XREF to: 004625f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004625f0()
    MOV dword ptr [EBX + 0x2d4],0x0     ; 004cf2fd
    MOV dword ptr [EBX + 0x2d8],0x41f00000 ; 004cf307
    MOV dword ptr [EBX + 0x2dc],0x0     ; 004cf311
    MOV dword ptr [EBX + 0x2e0],0x0     ; 004cf31b
    MOV dword ptr [EBX + 0x2e4],0x1     ; 004cf325
    ADD ESP,0x8                         ; 004cf32f
    MOV byte ptr [EBX + 0x2e8],0x0      ; 004cf332
    MOV EAX,EBX                         ; 004cf339
    MOV byte ptr [EBX + 0x34c],0x0      ; 004cf33b
    POP EBX                             ; 004cf342
    RET                                 ; 004cf343

