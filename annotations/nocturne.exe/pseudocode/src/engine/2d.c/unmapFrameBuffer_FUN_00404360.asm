; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int engine_2d_c_unmapFrameBuffer_FUN_00404360(void)
;
;
; Referenced Globals:
;   string s_..\\engine\\2d.c_00577489
;   string s_unmapFrameBuffer_-_frame_buffer_w_00577498
;   undefined4 DAT_005b761c
;   undefined4 DAT_005b7620
;   undefined4 DAT_005b7624
;   undefined4 DAT_006b023c
;   undefined4 DAT_006b0240
;   undefined4 DAT_006b0244
;   undefined4 DAT_006b0248
;   undefined4 DAT_006b024c
;   undefined4 DAT_006b0250
;   undefined4 DAT_006b0254
;   undefined4 DAT_006b0258
;   undefined4 DAT_006b025c
;   undefined4 DAT_01bd2fa0
;   ... and 7 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00404360
        ;   Label: engine_2d.c_unmapFrameBuffer_FUN_00404360
    PUSH EDI                            ; 00404361
    PUSH EBP                            ; 00404362
    MOV EBX,dword ptr [0x006b025c]      ; 00404363 | DAT_006b025c
    CMP dword ptr [0x006b023c],0x0      ; 00404369 | DAT_006b023c
    JZ 0x00404402                       ; 00404370
        ;   XREF to: 00404402 (CONDITIONAL_JUMP)  ; LAB_00404402
    MOV EAX,[0x006b023c]                ; 00404376 | DAT_006b023c
        ;   Label: LAB_00404376
    MOV [0x005b761c],EAX                ; 0040437b | DAT_005b761c
    MOV EAX,[0x006b0240]                ; 00404380 | DAT_006b0240
    MOV [0x005b7620],EAX                ; 00404385 | DAT_005b7620
    MOV EAX,[0x006b0244]                ; 0040438a | DAT_006b0244
    MOV [0x01c00c58],EAX                ; 0040438f | DAT_01c00c58
    MOV EAX,[0x006b0248]                ; 00404394 | DAT_006b0248
    MOV [0x01c00c5c],EAX                ; 00404399 | DAT_01c00c5c
    MOV EAX,[0x006b024c]                ; 0040439e | DAT_006b024c
    MOV EDX,dword ptr [0x006b0258]      ; 004043a3 | DAT_006b0258
    MOV [0x01c00c60],EAX                ; 004043a9 | DAT_01c00c60
    MOV EAX,[0x006b0250]                ; 004043ae | DAT_006b0250
    MOV EBX,dword ptr [0x006b025c]      ; 004043b3 | DAT_006b025c
    MOV [0x01c00c64],EAX                ; 004043b9 | DAT_01c00c64
    MOV EAX,[0x006b0254]                ; 004043be | DAT_006b0254
    MOV EDI,dword ptr [0x005b7620]      ; 004043c3 | DAT_005b7620
    MOV [0x005b7624],EAX                ; 004043c9 | DAT_005b7624
    TEST EDI,EDI                        ; 004043ce
    JLE 0x004043f0                      ; 004043d0
        ;   XREF to: 004043f0 (CONDITIONAL_JUMP)  ; LAB_004043f0
    LEA ECX,[EDI*0x4 + 0x0]             ; 004043d2
    XOR EAX,EAX                         ; 004043d9
    MOV dword ptr [EAX + 0x1bd2fa0],EDX ; 004043db | DAT_01bd2fa0 | DAT_01bd2fa4
        ;   Label: LAB_004043db
    ADD EAX,0x4                         ; 004043e1
    ADD EDX,EBX                         ; 004043e4
    CMP EAX,ECX                         ; 004043e6
    JL 0x004043db                       ; 004043e8
        ;   XREF to: 004043db (CONDITIONAL_JUMP)  ; LAB_004043db
    LEA EAX,[EAX]                       ; 004043ea
    XOR EBP,EBP                         ; 004043f0
        ;   Label: LAB_004043f0
    MOV dword ptr [0x006b023c],EBP      ; 004043f2 | DAT_006b023c
    MOV dword ptr [0x006b025c],EBX      ; 004043f8 | DAT_006b025c
    POP EBP                             ; 004043fe
    POP EDI                             ; 004043ff
    POP EBX                             ; 00404400
    RET                                 ; 00404401
    PUSH ESI                            ; 00404402
        ;   Label: LAB_00404402
    MOV ECX,0x577489                    ; 00404403 | = "..\\engine\\2d.c"
    MOV ESI,0x9e8                       ; 00404408
    PUSH 0x577498                       ; 0040440d | = "unmapFrameBuffer - frame buffer was n..."
    MOV dword ptr [0x01cc4800],ECX      ; 00404412 | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 00404418 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0040441e
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 00404423
    POP ESI                             ; 00404426
    JMP 0x00404376                      ; 00404427
        ;   XREF to: 00404376 (UNCONDITIONAL_JUMP)  ; LAB_00404376

