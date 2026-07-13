; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004b5270(int param_1)
;
;
; XREF[8]:
;   FUN_00439f50 at 0043a35a
;   FUN_00495a20 at 00496b85
;   FUN_00497410 at 004977dc
;   FUN_004b32d0 at 004b3727
;   FUN_004b9fe0 at 004ba54a
;   FUN_00537cd0 at 00538359
;   FUN_0053fc60 at 0053fde7
;   FUN_00541d00 at 00542232
;
; Called Functions:
;   FUN_00455270
;   FUN_00456650
;   FUN_004c31b0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5270
        ;   Label: FUN_004b5270
    PUSH ESI                            ; 004b5271
    PUSH EBP                            ; 004b5272
    MOV EBX,dword ptr [ESP + 0x10]      ; 004b5273
    MOV EDX,dword ptr [EBX + 0x1fa04]   ; 004b5277
    XOR ESI,ESI                         ; 004b527d
    TEST EDX,EDX                        ; 004b527f
    JNZ 0x004b5289                      ; 004b5281
        ;   XREF to: 004b5289 (CONDITIONAL_JUMP)  ; LAB_004b5289
    MOV EAX,ESI                         ; 004b5283
    POP EBP                             ; 004b5285
    POP ESI                             ; 004b5286
    POP EBX                             ; 004b5287
    RET                                 ; 004b5288
    PUSH 0x1                            ; 004b5289
        ;   Label: LAB_004b5289
    MOV ECX,dword ptr [EDX + 0x988]     ; 004b528b
    PUSH ECX                            ; 004b5291
    LEA EAX,[EBX + 0x1f5a0]             ; 004b5292
    PUSH EAX                            ; 004b5298
    CALL FUN_004c31b0                   ; 004b5299
        ;   XREF to: 004c31b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c31b0()
    ADD ESP,0xc                         ; 004b529e
    TEST EAX,EAX                        ; 004b52a1
    JZ 0x004b52c9                       ; 004b52a3
        ;   XREF to: 004b52c9 (CONDITIONAL_JUMP)  ; LAB_004b52c9
    MOV EBP,dword ptr [EBX + 0x1fa04]   ; 004b52a5
    PUSH EBP                            ; 004b52ab
    MOV ESI,0x1                         ; 004b52ac
    CALL FUN_00455270                   ; 004b52b1
        ;   XREF to: 00455270 (UNCONDITIONAL_CALL)  ; undefined FUN_00455270()
    ADD ESP,0x4                         ; 004b52b6
    MOV dword ptr [EBX + 0x1fa04],0x0   ; 004b52b9
    MOV EAX,ESI                         ; 004b52c3
    POP EBP                             ; 004b52c5
    POP ESI                             ; 004b52c6
    POP EBX                             ; 004b52c7
    RET                                 ; 004b52c8
    PUSH EDI                            ; 004b52c9
        ;   Label: LAB_004b52c9
    MOV EDI,dword ptr [EBX + 0x1fa04]   ; 004b52ca
    PUSH EDI                            ; 004b52d0
    CALL FUN_00456650                   ; 004b52d1
        ;   XREF to: 00456650 (UNCONDITIONAL_CALL)  ; undefined FUN_00456650()
    ADD ESP,0x4                         ; 004b52d6
    POP EDI                             ; 004b52d9
    MOV dword ptr [EBX + 0x1fa04],0x0   ; 004b52da
    MOV EAX,ESI                         ; 004b52e4
    POP EBP                             ; 004b52e6
    POP ESI                             ; 004b52e7
    POP EBX                             ; 004b52e8
    RET                                 ; 004b52e9

