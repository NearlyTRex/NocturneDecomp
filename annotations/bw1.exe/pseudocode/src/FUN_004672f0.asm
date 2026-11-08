; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004672f0(int param_1,undefined4 param_2)
;
;
; XREF[1]:
;   FUN_00467270 at 0046728f
;
; Referenced Globals:
;   undefined4 DAT_00622c18
;   undefined4 DAT_01e82168
;
; Called Functions:
;   FUN_004672b0
;   FUN_00553140
;   FUN_00553440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004672f0
        ;   Label: FUN_004672f0
    PUSH ESI                            ; 004672f1
    PUSH EDI                            ; 004672f2
    PUSH EBP                            ; 004672f3
    MOV EBX,dword ptr [ESP + 0x14]      ; 004672f4
    CMP dword ptr [EBX + 0x110],0x1     ; 004672f8
    JGE 0x00467306                      ; 004672ff
        ;   XREF to: 00467306 (CONDITIONAL_JUMP)  ; LAB_00467306
    POP EBP                             ; 00467301
    POP EDI                             ; 00467302
    POP ESI                             ; 00467303
    POP EBX                             ; 00467304
    RET                                 ; 00467305
    MOV ECX,dword ptr [ESP + 0x18]      ; 00467306
        ;   Label: LAB_00467306
    PUSH ECX                            ; 0046730a
    PUSH EBX                            ; 0046730b
    CALL FUN_004672b0                   ; 0046730c
        ;   XREF to: 004672b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004672b0()
    ADD ESP,0x8                         ; 00467311
    PUSH EAX                            ; 00467314
    MOV EDI,dword ptr [EBX + 0x104]     ; 00467315
    PUSH EDI                            ; 0046731b
    MOV EBP,dword ptr [0x00622c18]      ; 0046731c | DAT_00622c18
    PUSH EBP                            ; 00467322 | DAT_01e82168
    MOV ESI,EAX                         ; 00467323
    CALL FUN_00553140                   ; 00467325
        ;   XREF to: 00553140 (UNCONDITIONAL_CALL)  ; undefined FUN_00553140()
    MOV EAX,dword ptr [EBX + 0x108]     ; 0046732a
    ADD ESP,0xc                         ; 00467330
    TEST EAX,EAX                        ; 00467333
    JZ 0x00467364                       ; 00467335
        ;   XREF to: 00467364 (CONDITIONAL_JUMP)  ; LAB_00467364
    PUSH EAX                            ; 00467337
    PUSH 0x4                            ; 00467338
    PUSH ESI                            ; 0046733a
    MOV EAX,dword ptr [EBX + 0x114]     ; 0046733b
    PUSH EAX                            ; 00467341
    MOV EDX,dword ptr [EBX + 0x110]     ; 00467342
    PUSH EDX                            ; 00467348
    MOV ECX,dword ptr [EBX + 0x104]     ; 00467349
    PUSH ECX                            ; 0046734f
    MOV EBX,dword ptr [0x00622c18]      ; 00467350 | DAT_00622c18
    PUSH EBX                            ; 00467356 | DAT_01e82168
    CALL FUN_00553440                   ; 00467357
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 0046735c
    POP EBP                             ; 0046735f
    POP EDI                             ; 00467360
    POP ESI                             ; 00467361
    POP EBX                             ; 00467362
    RET                                 ; 00467363
    PUSH EAX                            ; 00467364
        ;   Label: LAB_00467364
    PUSH 0x4                            ; 00467365
    PUSH ESI                            ; 00467367
    MOV EDX,dword ptr [EBX + 0x114]     ; 00467368
    PUSH EDX                            ; 0046736e
    MOV ECX,dword ptr [EBX + 0x110]     ; 0046736f
    PUSH ECX                            ; 00467375
    MOV ESI,dword ptr [EBX + 0x104]     ; 00467376
    PUSH ESI                            ; 0046737c
    MOV EDI,dword ptr [0x00622c18]      ; 0046737d | DAT_00622c18
    PUSH EDI                            ; 00467383 | DAT_01e82168
    CALL FUN_00553440                   ; 00467384
        ;   XREF to: 00553440 (UNCONDITIONAL_CALL)  ; undefined FUN_00553440()
    ADD ESP,0x1c                        ; 00467389
    POP EBP                             ; 0046738c
    POP EDI                             ; 0046738d
    POP ESI                             ; 0046738e
    POP EBX                             ; 0046738f
    RET                                 ; 00467390

