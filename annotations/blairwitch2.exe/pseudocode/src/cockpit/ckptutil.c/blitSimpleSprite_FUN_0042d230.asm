; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void __cdecl cockpit_ckptutil_c_blitSimpleSprite_FUN_0042d230(void *sprite_data,int dest_x,int dest_y,int width,int height)
;
; Parameters:
; void *           Stack[0x4]:4   sprite_data
; int              Stack[0x8]:4   dest_x
; int              Stack[0xc]:4   dest_y
; int              Stack[0x10]:4   width
; int              Stack[0x14]:4   height
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01c2a38c
;   undefined4 DAT_01c2a390
;
; Called Functions:
;   cockpit_ckptutil.c_FUN_0042c410
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042d230
        ;   Label: cockpit_ckptutil.c_blitSimpleSprite_FUN_0042d230
    PUSH ESI                            ; 0042d231
    PUSH EDI                            ; 0042d232
    PUSH EBP                            ; 0042d233
    SUB ESP,0x1c                        ; 0042d234
    MOV EBX,dword ptr [ESP + 0x30]      ; 0042d237
    MOV ESI,dword ptr [ESP + 0x3c]      ; 0042d23b
    MOV EDI,dword ptr [ESP + 0x40]      ; 0042d23f
    MOV EDX,dword ptr [0x01c2a38c]      ; 0042d243 | DAT_01c2a38c
    MOV EBP,dword ptr [0x01c2a390]      ; 0042d249 | DAT_01c2a390
    SUB EBP,EDX                         ; 0042d24f
    MOV dword ptr [ESP + 0x8],EBP       ; 0042d251
    TEST EBX,EBX                        ; 0042d255
    JNZ 0x0042d268                      ; 0042d257
        ;   XREF to: 0042d268 (CONDITIONAL_JUMP)  ; LAB_0042d268
    LEA EAX,[EAX]                       ; 0042d259
    NOP                                 ; 0042d25f
    ADD ESP,0x1c                        ; 0042d260
        ;   Label: LAB_0042d260
    POP EBP                             ; 0042d263
    POP EDI                             ; 0042d264
    POP ESI                             ; 0042d265
    POP EBX                             ; 0042d266
    RET                                 ; 0042d267
    CALL cockpit_ckptutil.c_FUN_0042c410 ; 0042d268
        ;   XREF to: 0042c410 (UNCONDITIONAL_CALL)  ; undefined cockpit_ckptutil.c_FUN_0042c410()
        ;   Label: LAB_0042d268
    MOV dword ptr [ESP + 0xc],EAX       ; 0042d26d
    MOV EAX,dword ptr [ESP + 0x38]      ; 0042d271
    MOV ECX,dword ptr [0x006141c0]      ; 0042d275 | DAT_006141c0
    SHL EAX,0x2                         ; 0042d27b
    CMP ECX,0x8                         ; 0042d27e
    JNZ 0x0042d2c0                      ; 0042d281
        ;   XREF to: 0042d2c0 (CONDITIONAL_JUMP)  ; LAB_0042d2c0
    MOV ECX,dword ptr [ESP + 0x34]      ; 0042d283
    MOV EBP,dword ptr [EAX + 0x1c2a38c] ; 0042d287
    XOR EAX,EAX                         ; 0042d28d
    ADD EBP,ECX                         ; 0042d28f
    MOV dword ptr [ESP + 0x14],EAX      ; 0042d291
    TEST EDI,EDI                        ; 0042d295
    JLE 0x0042d260                      ; 0042d297
        ;   XREF to: 0042d260 (CONDITIONAL_JUMP)  ; LAB_0042d260
    PUSH ESI                            ; 0042d299
        ;   Label: LAB_0042d299
    PUSH EBX                            ; 0042d29a
    PUSH EBP                            ; 0042d29b
    CALL dword ptr [ESP + 0x18]         ; 0042d29c
    ADD ESP,0xc                         ; 0042d2a0
    ADD EBX,ESI                         ; 0042d2a3
    MOV EDX,dword ptr [ESP + 0x14]      ; 0042d2a5
    MOV ECX,dword ptr [ESP + 0x8]       ; 0042d2a9
    INC EDX                             ; 0042d2ad
    ADD EBP,ECX                         ; 0042d2ae
    MOV dword ptr [ESP + 0x14],EDX      ; 0042d2b0
    CMP EDI,EDX                         ; 0042d2b4
    JG 0x0042d299                       ; 0042d2b6
        ;   XREF to: 0042d299 (CONDITIONAL_JUMP)  ; LAB_0042d299
    ADD ESP,0x1c                        ; 0042d2b8
    POP EBP                             ; 0042d2bb
    POP EDI                             ; 0042d2bc
    POP ESI                             ; 0042d2bd
    POP EBX                             ; 0042d2be
    RET                                 ; 0042d2bf
    CMP ECX,0x10                        ; 0042d2c0
        ;   Label: LAB_0042d2c0
    JNZ 0x0042d31d                      ; 0042d2c3
        ;   XREF to: 0042d31d (CONDITIONAL_JUMP)  ; LAB_0042d31d
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042d2c5
    MOV EBP,dword ptr [EAX + 0x1c2a38c] ; 0042d2c9
    ADD EDX,EDX                         ; 0042d2cf
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d2d1
    ADD EBP,EDX                         ; 0042d2d5
    MOV EDX,EAX                         ; 0042d2d7
    SAR EDX,0x1f                        ; 0042d2d9
    SUB EAX,EDX                         ; 0042d2dc
    SAR EAX,0x1                         ; 0042d2de
    XOR EDX,EDX                         ; 0042d2e0
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d2e2
    MOV dword ptr [ESP + 0x18],EDX      ; 0042d2e6
    TEST EDI,EDI                        ; 0042d2ea
    JLE 0x0042d260                      ; 0042d2ec
        ;   XREF to: 0042d260 (CONDITIONAL_JUMP)  ; LAB_0042d260
    ADD EAX,EAX                         ; 0042d2f2
    MOV dword ptr [ESP],EAX             ; 0042d2f4
    PUSH ESI                            ; 0042d2f7
        ;   Label: LAB_0042d2f7
    PUSH EBX                            ; 0042d2f8
    PUSH EBP                            ; 0042d2f9
    CALL dword ptr [ESP + 0x18]         ; 0042d2fa
    ADD ESP,0xc                         ; 0042d2fe
    ADD EBX,ESI                         ; 0042d301
    MOV EDX,dword ptr [ESP + 0x18]      ; 0042d303
    MOV ECX,dword ptr [ESP]             ; 0042d307
    INC EDX                             ; 0042d30a
    ADD EBP,ECX                         ; 0042d30b
    MOV dword ptr [ESP + 0x18],EDX      ; 0042d30d
    CMP EDI,EDX                         ; 0042d311
    JG 0x0042d2f7                       ; 0042d313
        ;   XREF to: 0042d2f7 (CONDITIONAL_JUMP)  ; LAB_0042d2f7
    ADD ESP,0x1c                        ; 0042d315
    POP EBP                             ; 0042d318
    POP EDI                             ; 0042d319
    POP ESI                             ; 0042d31a
    POP EBX                             ; 0042d31b
    RET                                 ; 0042d31c
    MOV EDX,dword ptr [ESP + 0x34]      ; 0042d31d
        ;   Label: LAB_0042d31d
    MOV EBP,dword ptr [EAX + 0x1c2a38c] ; 0042d321
    SHL EDX,0x2                         ; 0042d327
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d32a
    ADD EBP,EDX                         ; 0042d32e
    MOV EDX,EAX                         ; 0042d330
    SAR EDX,0x1f                        ; 0042d332
    SHL EDX,0x2                         ; 0042d335
    SBB EAX,EDX                         ; 0042d338
    SAR EAX,0x2                         ; 0042d33a
    MOV dword ptr [ESP + 0x8],EAX       ; 0042d33d
    XOR EAX,EAX                         ; 0042d341
    MOV dword ptr [ESP + 0x10],EAX      ; 0042d343
    TEST EDI,EDI                        ; 0042d347
    JLE 0x0042d260                      ; 0042d349
        ;   XREF to: 0042d260 (CONDITIONAL_JUMP)  ; LAB_0042d260
    MOV EAX,dword ptr [ESP + 0x8]       ; 0042d34f
    SHL EAX,0x2                         ; 0042d353
    MOV dword ptr [ESP + 0x4],EAX       ; 0042d356
    PUSH ESI                            ; 0042d35a
        ;   Label: LAB_0042d35a
    PUSH EBX                            ; 0042d35b
    PUSH EBP                            ; 0042d35c
    CALL dword ptr [ESP + 0x18]         ; 0042d35d
    ADD ESP,0xc                         ; 0042d361
    ADD EBX,ESI                         ; 0042d364
    MOV EDX,dword ptr [ESP + 0x10]      ; 0042d366
    MOV ECX,dword ptr [ESP + 0x4]       ; 0042d36a
    INC EDX                             ; 0042d36e
    ADD EBP,ECX                         ; 0042d36f
    MOV dword ptr [ESP + 0x10],EDX      ; 0042d371
    CMP EDI,EDX                         ; 0042d375
    JG 0x0042d35a                       ; 0042d377
        ;   XREF to: 0042d35a (CONDITIONAL_JUMP)  ; LAB_0042d35a
    ADD ESP,0x1c                        ; 0042d379
    POP EBP                             ; 0042d37c
    POP EDI                             ; 0042d37d
    POP ESI                             ; 0042d37e
    POP EBX                             ; 0042d37f
    RET                                 ; 0042d380

