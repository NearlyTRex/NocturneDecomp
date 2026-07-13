; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_00572338(int param_1,undefined4 param_2,uint param_3)
;
;
; Called Functions:
;   FUN_005689c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00572338
        ;   Label: FUN_00572338
    PUSH ESI                            ; 00572339
    PUSH EBP                            ; 0057233a
    MOV EBP,ESP                         ; 0057233b
    MOV EBX,dword ptr [EBP + 0x10]      ; 0057233d
    MOV ESI,dword ptr [EBP + 0x18]      ; 00572340
    MOV EAX,dword ptr [EBX + 0x2c]      ; 00572343
    CMP EAX,-0x1                        ; 00572346
    JZ 0x0057237a                       ; 00572349
        ;   XREF to: 0057237a (CONDITIONAL_JUMP)  ; LAB_0057237a
    MOV EAX,dword ptr [EBX + 0x20]      ; 0057234b
    SUB EAX,dword ptr [EBX + 0x18]      ; 0057234e
    JNZ 0x0057237e                      ; 00572351
        ;   XREF to: 0057237e (CONDITIONAL_JUMP)  ; LAB_0057237e
    MOV EAX,dword ptr [EBX + 0x10]      ; 00572353
    SUB EAX,dword ptr [EBX + 0x14]      ; 00572356
    JNZ 0x0057237e                      ; 00572359
        ;   XREF to: 0057237e (CONDITIONAL_JUMP)  ; LAB_0057237e
    CMP ESI,0x1                         ; 0057235b
        ;   Label: LAB_0057235b
    JNC 0x005723a5                      ; 0057235e
        ;   XREF to: 005723a5 (CONDITIONAL_JUMP)  ; LAB_005723a5
    TEST ESI,ESI                        ; 00572360
    JNZ 0x0057239c                      ; 00572362
        ;   XREF to: 0057239c (CONDITIONAL_JUMP)  ; LAB_0057239c
    XOR EAX,EAX                         ; 00572364
    PUSH EAX                            ; 00572366
        ;   Label: LAB_00572366
    MOV ESI,dword ptr [EBP + 0x14]      ; 00572367
    PUSH ESI                            ; 0057236a
    MOV EAX,dword ptr [EBX + 0x2c]      ; 0057236b
    PUSH EAX                            ; 0057236e
    CALL FUN_005689c0                   ; 0057236f
        ;   XREF to: 005689c0 (UNCONDITIONAL_CALL)  ; undefined FUN_005689c0()
    ADD ESP,0xc                         ; 00572374
    CMP EAX,-0x1                        ; 00572377
    POP EBP                             ; 0057237a
        ;   Label: LAB_0057237a
    POP ESI                             ; 0057237b
    POP EBX                             ; 0057237c
    RET                                 ; 0057237d
    PUSH EBX                            ; 0057237e
        ;   Label: LAB_0057237e
    MOV EAX,dword ptr [EBX + 0x28]      ; 0057237f
    CALL dword ptr [EAX + 0x20]         ; 00572382
    ADD ESP,0x4                         ; 00572385
    CMP EAX,-0x1                        ; 00572388
    JNZ 0x0057235b                      ; 0057238b
        ;   XREF to: 0057235b (CONDITIONAL_JUMP)  ; LAB_0057235b
    POP EBP                             ; 0057238d
    POP ESI                             ; 0057238e
    POP EBX                             ; 0057238f
    RET                                 ; 00572390
    MOV EAX,0x1                         ; 00572391
        ;   Label: LAB_00572391
    JMP 0x00572366                      ; 00572396
        ;   XREF to: 00572366 (UNCONDITIONAL_JUMP)  ; LAB_00572366
    MOV EAX,ESI                         ; 00572398
        ;   Label: LAB_00572398
    JMP 0x00572366                      ; 0057239a
        ;   XREF to: 00572366 (UNCONDITIONAL_JUMP)  ; LAB_00572366
    MOV EAX,0xffffffff                  ; 0057239c
        ;   Label: LAB_0057239c
    POP EBP                             ; 005723a1
    POP ESI                             ; 005723a2
    POP EBX                             ; 005723a3
    RET                                 ; 005723a4
    JBE 0x00572391                      ; 005723a5
        ;   XREF to: 00572391 (CONDITIONAL_JUMP)  ; LAB_00572391
        ;   Label: LAB_005723a5
    CMP ESI,0x2                         ; 005723a7
    JZ 0x00572398                       ; 005723aa
        ;   XREF to: 00572398 (CONDITIONAL_JUMP)  ; LAB_00572398
    JMP 0x0057239c                      ; 005723ac
        ;   XREF to: 0057239c (UNCONDITIONAL_JUMP)  ; LAB_0057239c

