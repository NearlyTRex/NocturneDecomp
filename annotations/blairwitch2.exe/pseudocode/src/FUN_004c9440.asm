; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004c9440(void)
;
;
; XREF[4]:
;   FUN_0052ef80 at 0052f163
;   FUN_0052f2a0 at 0052f5cc
;   FUN_0052fad0 at 0052fce6
;   FUN_0052fea0 at 005300a7
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_00616494
;   undefined4 DAT_0061b5a8
;   undefined4 DAT_01ba5c50
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6914
;   undefined4 DAT_01cb8318
;   undefined4 DAT_01cb8330
;   undefined4 DAT_01cb8360
;   undefined4 DAT_01cb8378
;   undefined4 DAT_01e661b8
;
; Called Functions:
;   FUN_0046b960
;   FUN_004c7490
;   FUN_00530980
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004c9440
        ;   Label: FUN_004c9440
    PUSH ESI                            ; 004c9441
    PUSH EBP                            ; 004c9442
    MOV EBP,ESP                         ; 004c9443
    AND ESP,0xfffffff8                  ; 004c9445
    MOV EAX,[0x00616494]                ; 004c9448 | DAT_00616494 | DAT_01cb6900
    CMP dword ptr [EAX + 0x14],0x0      ; 004c944d | DAT_01cb6914
    JNZ 0x004c9459                      ; 004c9451
        ;   XREF to: 004c9459 (CONDITIONAL_JUMP)  ; LAB_004c9459
    MOV ESP,EBP                         ; 004c9453
        ;   Label: LAB_004c9453
    POP EBP                             ; 004c9455
    POP ESI                             ; 004c9456
    POP EBX                             ; 004c9457
    RET                                 ; 004c9458
    MOV ECX,dword ptr [0x0060b280]      ; 004c9459 | DAT_0060b280
        ;   Label: LAB_004c9459
    PUSH ECX                            ; 004c945f | DAT_01ba5c50
    CALL FUN_0046b960                   ; 004c9460
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 004c9465
    TEST EAX,EAX                        ; 004c9468
    JNZ 0x004c9453                      ; 004c946a
        ;   XREF to: 004c9453 (CONDITIONAL_JUMP)  ; LAB_004c9453
    PUSH EAX                            ; 004c946c
    PUSH EAX                            ; 004c946d
    PUSH EAX                            ; 004c946e
    PUSH EAX                            ; 004c946f
    PUSH EAX                            ; 004c9470
    MOV EBX,dword ptr [0x0061b5a8]      ; 004c9471 | DAT_0061b5a8
    PUSH EBX                            ; 004c9477 | DAT_01e661b8
    CALL FUN_00530980                   ; 004c9478
        ;   XREF to: 00530980 (UNCONDITIONAL_CALL)  ; undefined FUN_00530980()
    ADD ESP,0x18                        ; 004c947d
    PUSH 0x1cb82f4                      ; 004c9480
    MOV EBX,0x1cb82f4                   ; 004c9485
    CALL FUN_004c7490                   ; 004c948a
        ;   XREF to: 004c7490 (UNCONDITIONAL_CALL)  ; undefined FUN_004c7490()
    LEA ESI,[EBX + 0x4800]              ; 004c948f
    ADD ESP,0x4                         ; 004c9495
    FLD float ptr [EBX + 0x24]          ; 004c9498 | DAT_01cb8318 | DAT_01cb8360
        ;   Label: LAB_004c9498
    FLDZ                                ; 004c949b
    FCOMPP                              ; 004c949d
    FNSTSW AX                           ; 004c949f
    SAHF                                ; 004c94a1
    JNC 0x004c94ae                      ; 004c94a2
        ;   XREF to: 004c94ae (CONDITIONAL_JUMP)  ; LAB_004c94ae
    PUSH EBX                            ; 004c94a4
    MOV EAX,dword ptr [EBX + 0x3c]      ; 004c94a5 | DAT_01cb8330 | DAT_01cb8378
    CALL dword ptr [EAX + 0x8]          ; 004c94a8
    ADD ESP,0x4                         ; 004c94ab
    ADD EBX,0x48                        ; 004c94ae
        ;   Label: LAB_004c94ae
    CMP EBX,ESI                         ; 004c94b1
    JZ 0x004c9453                       ; 004c94b3
        ;   XREF to: 004c9453 (CONDITIONAL_JUMP)  ; LAB_004c9453
    JMP 0x004c9498                      ; 004c94b5
        ;   XREF to: 004c9498 (UNCONDITIONAL_JUMP)  ; LAB_004c9498

