; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_drawClippedEdges_FUN_0042e290(short *param_1,int param_2,int param_3,int param_4)
;
;
; Referenced Globals:
;   undefined4 DAT_01c35e48
;   undefined4 DAT_01c35e4c
;   undefined4 DAT_01c35e50
;   undefined4 DAT_01c35e54
;   undefined4 DAT_01c35e60
;
; Called Functions:
;   engine_2d.c_drawLine_FUN_004011a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e290
        ;   Label: cockpit_ckptutil.c_drawClippedEdges_FUN_0042e290
    PUSH ESI                            ; 0042e291
    PUSH EDI                            ; 0042e292
    PUSH EBP                            ; 0042e293
    SUB ESP,0x4                         ; 0042e294
    MOV EDX,0xfb                        ; 0042e297
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0042e29c
    XOR EDI,EDI                         ; 0042e2a0
    MOV dword ptr [0x01c35e60],EDX      ; 0042e2a2 | DAT_01c35e60
    TEST ECX,ECX                        ; 0042e2a8
    JLE 0x0042e36d                      ; 0042e2aa
        ;   XREF to: 0042e36d (CONDITIONAL_JUMP)  ; LAB_0042e36d
    MOV EBX,dword ptr [ESP + 0x18]      ; 0042e2b0
    MOV AX,word ptr [EBX]               ; 0042e2b4
        ;   Label: LAB_0042e2b4
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042e2b7
    MOVSX ECX,AX                        ; 0042e2bb
    MOV EAX,[0x01c35e48]                ; 0042e2be | DAT_01c35e48
    ADD ECX,EBP                         ; 0042e2c3
    CMP ECX,EAX                         ; 0042e2c5
    JGE 0x0042e2cb                      ; 0042e2c7
        ;   XREF to: 0042e2cb (CONDITIONAL_JUMP)  ; LAB_0042e2cb
    MOV ECX,EAX                         ; 0042e2c9
    MOV EDX,dword ptr [0x01c35e50]      ; 0042e2cb | DAT_01c35e50
        ;   Label: LAB_0042e2cb
    CMP ECX,EDX                         ; 0042e2d1
    JL 0x0042e2d7                       ; 0042e2d3
        ;   XREF to: 0042e2d7 (CONDITIONAL_JUMP)  ; LAB_0042e2d7
    MOV ECX,EDX                         ; 0042e2d5
    MOV AX,word ptr [EBX + 0x2]         ; 0042e2d7
        ;   Label: LAB_0042e2d7
    MOV ESI,dword ptr [ESP + 0x24]      ; 0042e2db
    MOVSX EDX,AX                        ; 0042e2df
    MOV EBP,dword ptr [0x01c35e4c]      ; 0042e2e2 | DAT_01c35e4c
    ADD EDX,ESI                         ; 0042e2e8
    CMP EDX,EBP                         ; 0042e2ea
    JGE 0x0042e2f0                      ; 0042e2ec
        ;   XREF to: 0042e2f0 (CONDITIONAL_JUMP)  ; LAB_0042e2f0
    MOV EDX,EBP                         ; 0042e2ee
    MOV EAX,[0x01c35e54]                ; 0042e2f0 | DAT_01c35e54
        ;   Label: LAB_0042e2f0
    CMP EDX,EAX                         ; 0042e2f5
    JL 0x0042e2fb                       ; 0042e2f7
        ;   XREF to: 0042e2fb (CONDITIONAL_JUMP)  ; LAB_0042e2fb
    MOV EDX,EAX                         ; 0042e2f9
    MOV AX,word ptr [EBX + 0x4]         ; 0042e2fb
        ;   Label: LAB_0042e2fb
    MOV EBP,dword ptr [ESP + 0x20]      ; 0042e2ff
    MOVSX ESI,AX                        ; 0042e303
    MOV EAX,[0x01c35e48]                ; 0042e306 | DAT_01c35e48
    ADD ESI,EBP                         ; 0042e30b
    CMP ESI,EAX                         ; 0042e30d
    JGE 0x0042e313                      ; 0042e30f
        ;   XREF to: 0042e313 (CONDITIONAL_JUMP)  ; LAB_0042e313
    MOV ESI,EAX                         ; 0042e311
    MOV EBP,dword ptr [0x01c35e50]      ; 0042e313 | DAT_01c35e50
        ;   Label: LAB_0042e313
    CMP ESI,EBP                         ; 0042e319
    JL 0x0042e31f                       ; 0042e31b
        ;   XREF to: 0042e31f (CONDITIONAL_JUMP)  ; LAB_0042e31f
    MOV ESI,EBP                         ; 0042e31d
    MOV AX,word ptr [EBX + 0x6]         ; 0042e31f
        ;   Label: LAB_0042e31f
    ADD EAX,EAX                         ; 0042e323
    SAR AX,0x1                          ; 0042e325
    MOV word ptr [ESP],AX               ; 0042e328
    MOV EAX,dword ptr [ESP + -0x2]      ; 0042e32c
    MOV EBP,dword ptr [ESP + 0x24]      ; 0042e330
    SAR EAX,0x10                        ; 0042e334
    ADD EAX,EBP                         ; 0042e337
    MOV EBP,dword ptr [0x01c35e4c]      ; 0042e339 | DAT_01c35e4c
    CMP EAX,EBP                         ; 0042e33f
    JGE 0x0042e345                      ; 0042e341
        ;   XREF to: 0042e345 (CONDITIONAL_JUMP)  ; LAB_0042e345
    MOV EAX,EBP                         ; 0042e343
    MOV EBP,dword ptr [0x01c35e54]      ; 0042e345 | DAT_01c35e54
        ;   Label: LAB_0042e345
    CMP EAX,EBP                         ; 0042e34b
    JL 0x0042e351                       ; 0042e34d
        ;   XREF to: 0042e351 (CONDITIONAL_JUMP)  ; LAB_0042e351
    MOV EAX,EBP                         ; 0042e34f
    PUSH EAX                            ; 0042e351
        ;   Label: LAB_0042e351
    PUSH ESI                            ; 0042e352
    PUSH EDX                            ; 0042e353
    PUSH ECX                            ; 0042e354
    CALL engine_2d.c_drawLine_FUN_004011a0 ; 0042e355
        ;   XREF to: 004011a0 (UNCONDITIONAL_CALL)  ; void engine_2d.c_drawLine_FUN_004011a0(int x1, int y1, int x2, int y2)
    ADD ESP,0x10                        ; 0042e35a
    INC EDI                             ; 0042e35d
    MOV ESI,dword ptr [ESP + 0x1c]      ; 0042e35e
    ADD EBX,0x8                         ; 0042e362
    CMP EDI,ESI                         ; 0042e365
    JL 0x0042e2b4                       ; 0042e367
        ;   XREF to: 0042e2b4 (CONDITIONAL_JUMP)  ; LAB_0042e2b4
    ADD ESP,0x4                         ; 0042e36d
        ;   Label: LAB_0042e36d
    POP EBP                             ; 0042e370
    POP EDI                             ; 0042e371
    POP ESI                             ; 0042e372
    POP EBX                             ; 0042e373
    RET                                 ; 0042e374

