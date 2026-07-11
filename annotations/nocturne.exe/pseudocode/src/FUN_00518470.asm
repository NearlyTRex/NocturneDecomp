; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00518470(int param_1,int param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0051db20 at 0051db4a
;
; Referenced Globals:
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0050c2d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00518470
        ;   Label: FUN_00518470
    PUSH ESI                            ; 00518471
    PUSH EDI                            ; 00518472
    PUSH EBP                            ; 00518473
    PUSH 0x0                            ; 00518474
    MOV EAX,dword ptr [ESP + 0x1c]      ; 00518476
    MOV ECX,dword ptr [ESP + 0x18]      ; 0051847a
    PUSH -0x3                           ; 0051847e
    SHL EAX,0x2                         ; 00518480
    MOV EDX,dword ptr [ESP + 0x24]      ; 00518483
    ADD EAX,ECX                         ; 00518487
    PUSH EDX                            ; 00518489
    MOV EBX,dword ptr [EAX + 0x7c]      ; 0051848a
    PUSH EBX                            ; 0051848d
    MOV ESI,dword ptr [EAX + 0x54]      ; 0051848e
    PUSH ESI                            ; 00518491
    MOV EDI,dword ptr [EAX + 0x2c]      ; 00518492
    PUSH EDI                            ; 00518495
    MOV EBP,dword ptr [0x005be368]      ; 00518496 | DAT_005be368
    PUSH EBP                            ; 0051849c | DAT_01e57284
    CALL FUN_0050c2d0                   ; 0051849d
        ;   XREF to: 0050c2d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0050c2d0()
    ADD ESP,0x1c                        ; 005184a2
    POP EBP                             ; 005184a5
    POP EDI                             ; 005184a6
    POP ESI                             ; 005184a7
    POP EBX                             ; 005184a8
    RET                                 ; 005184a9

