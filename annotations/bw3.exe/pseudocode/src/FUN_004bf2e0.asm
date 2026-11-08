; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004bf2e0(void)
;
;
; Referenced Globals:
;   undefined4 DAT_005fb140
;   undefined4 DAT_00600530
;   undefined4 DAT_00603450
;   undefined4 DAT_01d225c8
;
; Called Functions:
;   FUN_0047ecf0
;   FUN_004f72a0
;   FUN_00503fb0
;   FUN_005043b0
;   FUN_00505a30
;   FUN_0056f4c0
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004bf2e0
        ;   Label: FUN_004bf2e0
    PUSH EDI                            ; 004bf2e1
    PUSH EBP                            ; 004bf2e2
    SUB ESP,0x68                        ; 004bf2e3
    PUSH 0x1                            ; 004bf2e6
    PUSH 0x64                           ; 004bf2e8
    LEA EAX,[ESP + 0x8]                 ; 004bf2ea
    PUSH EAX                            ; 004bf2ee
    MOV ECX,0x19                        ; 004bf2ef
    LEA EDI,[ESP + 0xc]                 ; 004bf2f4
    PUSH 0x5c396e                       ; 004bf2f8
    MOV EDX,dword ptr [0x005fb140]      ; 004bf2fd | DAT_005fb140
    MOV ESI,0x5febf0                    ; 004bf303
    PUSH EDX                            ; 004bf308
    MOVSD.REP ES:EDI,ESI                ; 004bf309
    CALL FUN_0047ecf0                   ; 004bf30b
        ;   XREF to: 0047ecf0 (UNCONDITIONAL_CALL)  ; undefined FUN_0047ecf0()
    ADD ESP,0x14                        ; 004bf310
    TEST EAX,EAX                        ; 004bf313
    JNZ 0x004bf31e                      ; 004bf315
        ;   XREF to: 004bf31e (CONDITIONAL_JUMP)  ; LAB_004bf31e
    ADD ESP,0x68                        ; 004bf317
    POP EBP                             ; 004bf31a
    POP EDI                             ; 004bf31b
    POP ESI                             ; 004bf31c
    RET                                 ; 004bf31d
    MOV EAX,ESP                         ; 004bf31e
        ;   Label: LAB_004bf31e
    PUSH EAX                            ; 004bf320
    LEA EAX,[ESP + 0x68]                ; 004bf321
    PUSH EAX                            ; 004bf325
    CALL FUN_0056f4c0                   ; 004bf326
        ;   XREF to: 0056f4c0 (UNCONDITIONAL_CALL)  ; undefined FUN_0056f4c0()
    ADD ESP,0x8                         ; 004bf32b
    PUSH EAX                            ; 004bf32e
    MOV ECX,dword ptr [0x00603450]      ; 004bf32f | DAT_00603450
    PUSH ECX                            ; 004bf335
    CALL FUN_00503fb0                   ; 004bf336
        ;   XREF to: 00503fb0 (UNCONDITIONAL_CALL)  ; undefined FUN_00503fb0()
    ADD ESP,0x8                         ; 004bf33b
    TEST EAX,EAX                        ; 004bf33e
    JZ 0x004bf36e                       ; 004bf340
        ;   XREF to: 004bf36e (CONDITIONAL_JUMP)  ; LAB_004bf36e
    XOR AH,AH                           ; 004bf342
    MOV byte ptr [0x01d225c8],AH        ; 004bf344 | DAT_01d225c8
    MOV ESI,dword ptr [0x00603450]      ; 004bf34a | DAT_00603450
        ;   Label: LAB_004bf34a
    PUSH ESI                            ; 004bf350
    CALL FUN_00505a30                   ; 004bf351
        ;   XREF to: 00505a30 (UNCONDITIONAL_CALL)  ; undefined FUN_00505a30()
    ADD ESP,0x4                         ; 004bf356
    TEST EAX,EAX                        ; 004bf359
    JZ 0x004bf387                       ; 004bf35b
        ;   XREF to: 004bf387 (CONDITIONAL_JUMP)  ; LAB_004bf387
    MOV EBP,dword ptr [0x00600530]      ; 004bf35d | DAT_00600530
    PUSH EBP                            ; 004bf363
    CALL FUN_004f72a0                   ; 004bf364
        ;   XREF to: 004f72a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004f72a0()
    ADD ESP,0x4                         ; 004bf369
    JMP 0x004bf34a                      ; 004bf36c
        ;   XREF to: 004bf34a (UNCONDITIONAL_JUMP)  ; LAB_004bf34a
    PUSH EBX                            ; 004bf36e
        ;   Label: LAB_004bf36e
    PUSH EAX                            ; 004bf36f
    MOV EBX,dword ptr [0x00603450]      ; 004bf370 | DAT_00603450
    PUSH EBX                            ; 004bf376
    CALL FUN_005043b0                   ; 004bf377
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 004bf37c
    POP EBX                             ; 004bf37f
    ADD ESP,0x68                        ; 004bf380
    POP EBP                             ; 004bf383
    POP EDI                             ; 004bf384
    POP ESI                             ; 004bf385
    RET                                 ; 004bf386
    PUSH 0x1                            ; 004bf387
        ;   Label: LAB_004bf387
    MOV EDI,dword ptr [0x00603450]      ; 004bf389 | DAT_00603450
    PUSH EDI                            ; 004bf38f
    CALL FUN_005043b0                   ; 004bf390
        ;   XREF to: 005043b0 (UNCONDITIONAL_CALL)  ; undefined FUN_005043b0()
    ADD ESP,0x8                         ; 004bf395
    ADD ESP,0x68                        ; 004bf398
    POP EBP                             ; 004bf39b
    POP EDI                             ; 004bf39c
    POP ESI                             ; 004bf39d
    RET                                 ; 004bf39e

