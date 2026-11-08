; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005202f0(undefined4 param_1)
;
;
; Called Functions:
;   FUN_004ea830
;   FUN_00522fa0
;   FUN_00567370
;   FUN_00569f50
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005202f0
        ;   Label: FUN_005202f0
    PUSH ESI                            ; 005202f1
    PUSH EDI                            ; 005202f2
    MOV EBX,dword ptr [ESP + 0x10]      ; 005202f3
    PUSH EBX                            ; 005202f7
    CALL FUN_004ea830                   ; 005202f8
        ;   XREF to: 004ea830 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea830()
    ADD ESP,0x4                         ; 005202fd
    ADD EAX,0x1ffac                     ; 00520300
    PUSH EAX                            ; 00520305
    CALL FUN_00567370                   ; 00520306
        ;   XREF to: 00567370 (UNCONDITIONAL_CALL)  ; undefined FUN_00567370()
    ADD ESP,0x4                         ; 0052030b
    ADD EAX,0x2478                      ; 0052030e
    PUSH EAX                            ; 00520313
    CALL FUN_00522fa0                   ; 00520314
        ;   XREF to: 00522fa0 (UNCONDITIONAL_CALL)  ; undefined FUN_00522fa0()
    ADD ESP,0x4                         ; 00520319
    LEA EBX,[EAX + 0xfffddbdc]          ; 0052031c
    PUSH 0x5ea1c6                       ; 00520322
    LEA EAX,[EBX + 0x158]               ; 00520327
    PUSH EAX                            ; 0052032d
    MOV dword ptr [EBX + 0x154],0x603f04 ; 0052032e
    CALL FUN_00569f50                   ; 00520338
        ;   XREF to: 00569f50 (UNCONDITIONAL_CALL)  ; undefined FUN_00569f50()
    ADD ESP,0x8                         ; 0052033d
    MOV ESI,0x5ea1d3                    ; 00520340
    LEA EDI,[EBX + 0x2235c]             ; 00520345
    PUSH EDI                            ; 0052034b
    MOV AL,byte ptr [ESI]               ; 0052034c
        ;   Label: LAB_0052034c
    MOV byte ptr [EDI],AL               ; 0052034e
    CMP AL,0x0                          ; 00520350
    JZ 0x00520364                       ; 00520352
        ;   XREF to: 00520364 (CONDITIONAL_JUMP)  ; LAB_00520364
    MOV AL,byte ptr [ESI + 0x1]         ; 00520354
    ADD ESI,0x2                         ; 00520357
    MOV byte ptr [EDI + 0x1],AL         ; 0052035a
    ADD EDI,0x2                         ; 0052035d
    CMP AL,0x0                          ; 00520360
    JNZ 0x0052034c                      ; 00520362
        ;   XREF to: 0052034c (CONDITIONAL_JUMP)  ; LAB_0052034c
    POP EDI                             ; 00520364
        ;   Label: LAB_00520364
    MOV ESI,0x5ea1e1                    ; 00520365
    LEA EDI,[EBX + 0x223c0]             ; 0052036a
    PUSH EDI                            ; 00520370
    MOV AL,byte ptr [ESI]               ; 00520371
        ;   Label: LAB_00520371
    MOV byte ptr [EDI],AL               ; 00520373
    CMP AL,0x0                          ; 00520375
    JZ 0x00520389                       ; 00520377
        ;   XREF to: 00520389 (CONDITIONAL_JUMP)  ; LAB_00520389
    MOV AL,byte ptr [ESI + 0x1]         ; 00520379
    ADD ESI,0x2                         ; 0052037c
    MOV byte ptr [EDI + 0x1],AL         ; 0052037f
    ADD EDI,0x2                         ; 00520382
    CMP AL,0x0                          ; 00520385
    JNZ 0x00520371                      ; 00520387
        ;   XREF to: 00520371 (CONDITIONAL_JUMP)  ; LAB_00520371
    POP EDI                             ; 00520389
        ;   Label: LAB_00520389
    MOV dword ptr [EBX + 0x22350],0x1   ; 0052038a
    MOV dword ptr [EBX + 0x22354],0x0   ; 00520394
    MOV EAX,EBX                         ; 0052039e
    MOV dword ptr [EBX + 0x22358],0x0   ; 005203a0
    POP EDI                             ; 005203aa
    POP ESI                             ; 005203ab
    POP EBX                             ; 005203ac
    RET                                 ; 005203ad

