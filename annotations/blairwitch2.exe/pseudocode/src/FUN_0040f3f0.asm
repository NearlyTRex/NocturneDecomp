; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0040f3f0(int param_1,int param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0060b280
;   undefined4 DAT_01ba5c50
;
; Called Functions:
;   FUN_004089d0
;   FUN_00408a10
;   FUN_0041a840
;   FUN_0044fcc0
;   FUN_0046b960
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0040f3f0
        ;   Label: FUN_0040f3f0
    PUSH ESI                            ; 0040f3f1
    SUB ESP,0x30                        ; 0040f3f2
    MOV EBX,dword ptr [ESP + 0x3c]      ; 0040f3f5
    CMP dword ptr [ESP + 0x40],0x0      ; 0040f3f9
    JZ 0x0040f463                       ; 0040f3fe
        ;   XREF to: 0040f463 (CONDITIONAL_JUMP)  ; LAB_0040f463
    CMP dword ptr [EBX + 0x2b4],0x0     ; 0040f400
    JZ 0x0040f469                       ; 0040f407
        ;   XREF to: 0040f469 (CONDITIONAL_JUMP)  ; LAB_0040f469
    PUSH EDI                            ; 0040f409
        ;   Label: LAB_0040f409
    PUSH EBX                            ; 0040f40a
    CALL FUN_004089d0                   ; 0040f40b
        ;   XREF to: 004089d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004089d0()
    ADD ESP,0x4                         ; 0040f410
    PUSH 0x0                            ; 0040f413
    MOV EAX,dword ptr [EBX + 0x2b0]     ; 0040f415
    PUSH EBX                            ; 0040f41b
    LEA ESI,[ESP + 0x24]                ; 0040f41c
    LEA EDI,[ESP + 0xc]                 ; 0040f420
    CALL dword ptr [EAX + 0x24]         ; 0040f424
    MOV ECX,0x6                         ; 0040f427
    ADD ESP,0x4                         ; 0040f42c
    LEA EAX,[ESP + 0x8]                 ; 0040f42f
    LEA ESI,[ESP + 0x20]                ; 0040f433
    PUSH EAX                            ; 0040f437
    MOVSD.REP ES:EDI,ESI                ; 0040f438
    CALL FUN_0041a840                   ; 0040f43a
        ;   XREF to: 0041a840 (UNCONDITIONAL_CALL)  ; undefined FUN_0041a840()
    ADD ESP,0x8                         ; 0040f43f
    TEST EAX,EAX                        ; 0040f442
    JZ 0x0040f459                       ; 0040f444
        ;   XREF to: 0040f459 (CONDITIONAL_JUMP)  ; LAB_0040f459
    PUSH -0x1                           ; 0040f446
    LEA EAX,[EBX + 0x2b8]               ; 0040f448
    PUSH 0x0                            ; 0040f44e
    PUSH EAX                            ; 0040f450
    CALL FUN_0044fcc0                   ; 0040f451
        ;   XREF to: 0044fcc0 (UNCONDITIONAL_CALL)  ; undefined FUN_0044fcc0()
    ADD ESP,0xc                         ; 0040f456
    PUSH EBX                            ; 0040f459
        ;   Label: LAB_0040f459
    CALL FUN_00408a10                   ; 0040f45a
        ;   XREF to: 00408a10 (UNCONDITIONAL_CALL)  ; undefined FUN_00408a10()
    ADD ESP,0x4                         ; 0040f45f
    POP EDI                             ; 0040f462
    ADD ESP,0x30                        ; 0040f463
        ;   Label: LAB_0040f463
    POP ESI                             ; 0040f466
    POP EBX                             ; 0040f467
    RET                                 ; 0040f468
    MOV ESI,dword ptr [0x0060b280]      ; 0040f469 | DAT_0060b280
        ;   Label: LAB_0040f469
    PUSH ESI                            ; 0040f46f | DAT_01ba5c50
    CALL FUN_0046b960                   ; 0040f470
        ;   XREF to: 0046b960 (UNCONDITIONAL_CALL)  ; undefined FUN_0046b960()
    ADD ESP,0x4                         ; 0040f475
    TEST EAX,EAX                        ; 0040f478
    JNZ 0x0040f463                      ; 0040f47a
        ;   XREF to: 0040f463 (CONDITIONAL_JUMP)  ; LAB_0040f463
    JMP 0x0040f409                      ; 0040f47c
        ;   XREF to: 0040f409 (UNCONDITIONAL_JUMP)  ; LAB_0040f409

