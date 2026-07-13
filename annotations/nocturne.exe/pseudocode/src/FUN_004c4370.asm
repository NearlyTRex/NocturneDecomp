; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_004c4370(int param_1)
;
; Local Variables:
; undefined        Stack[-0x1c]:1  local_1c
;
; Called Functions:
;   FUN_00409f20
;   FUN_00409f60
;   FUN_0041ceb0
;   FUN_004544d0
;   FUN_00454530
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c4370
        ;   Label: FUN_004c4370
    SUB ESP,0x18                        ; 004c4371
    MOV EBX,dword ptr [ESP + 0x20]      ; 004c4374
    LEA EAX,[EBX + 0x150]               ; 004c4378
    PUSH EAX                            ; 004c437e
    CALL FUN_00454530                   ; 004c437f
        ;   XREF to: 00454530 (UNCONDITIONAL_CALL)  ; undefined FUN_00454530()
    MOV EDX,dword ptr [EAX + 0x110]     ; 004c4384
    ADD ESP,0x4                         ; 004c438a
    CMP EDX,0x1                         ; 004c438d
    JGE 0x004c4399                      ; 004c4390
        ;   XREF to: 004c4399 (CONDITIONAL_JUMP)  ; LAB_004c4399
    XOR EAX,EAX                         ; 004c4392
    ADD ESP,0x18                        ; 004c4394
    POP EBX                             ; 004c4397
    RET                                 ; 004c4398
    PUSH ESI                            ; 004c4399
        ;   Label: LAB_004c4399
    PUSH EBX                            ; 004c439a
    CALL FUN_00409f20                   ; 004c439b
        ;   XREF to: 00409f20 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f20()
    ADD ESP,0x4                         ; 004c43a0
    PUSH 0x0                            ; 004c43a3
    LEA ESI,[ESP + 0x8]                 ; 004c43a5
    PUSH ESI                            ; 004c43a9
    MOV EAX,dword ptr [EBX + 0x14c]     ; 004c43aa
    PUSH EBX                            ; 004c43b0
    CALL dword ptr [EAX + 0x14]         ; 004c43b1
    ADD ESP,0x8                         ; 004c43b4
    PUSH EAX                            ; 004c43b7
    CALL FUN_0041ceb0                   ; 004c43b8
        ;   XREF to: 0041ceb0 (UNCONDITIONAL_CALL)  ; undefined FUN_0041ceb0()
    ADD ESP,0x8                         ; 004c43bd
    MOV ESI,EAX                         ; 004c43c0
    TEST EAX,EAX                        ; 004c43c2
    JZ 0x004c43d9                       ; 004c43c4
        ;   XREF to: 004c43d9 (CONDITIONAL_JUMP)  ; LAB_004c43d9
    PUSH -0x1                           ; 004c43c6
    LEA EAX,[EBX + 0x150]               ; 004c43c8
    PUSH 0x0                            ; 004c43ce
    PUSH EAX                            ; 004c43d0
    CALL FUN_004544d0                   ; 004c43d1
        ;   XREF to: 004544d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004544d0()
    ADD ESP,0xc                         ; 004c43d6
    PUSH EBX                            ; 004c43d9
        ;   Label: LAB_004c43d9
    CALL FUN_00409f60                   ; 004c43da
        ;   XREF to: 00409f60 (UNCONDITIONAL_CALL)  ; undefined FUN_00409f60()
    ADD ESP,0x4                         ; 004c43df
    MOV EAX,ESI                         ; 004c43e2
    POP ESI                             ; 004c43e4
    ADD ESP,0x18                        ; 004c43e5
    POP EBX                             ; 004c43e8
    RET                                 ; 004c43e9

