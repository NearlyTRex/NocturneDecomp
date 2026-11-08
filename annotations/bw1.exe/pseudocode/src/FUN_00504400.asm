; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00504400(int param_1,undefined4 param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_0061d95c
;
; Called Functions:
;   FUN_0045f3e0
;   FUN_004cc9a0
;   FUN_004ea6f0
;   FUN_00504ee0
;   FUN_00505560
;   FUN_005058e0
;   FUN_00505bc0
;   FUN_00506220
;   FUN_005062a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00504400
        ;   Label: FUN_00504400
    MOV EBX,dword ptr [ESP + 0x8]       ; 00504401
    LEA EAX,[EBX + 0x20]                ; 00504405
    PUSH 0x41f00000                     ; 00504408
    PUSH EAX                            ; 0050440d
    CALL FUN_004ea6f0                   ; 0050440e
        ;   XREF to: 004ea6f0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ea6f0()
    ADD ESP,0x8                         ; 00504413
    TEST EAX,EAX                        ; 00504416
    JZ 0x0050450c                       ; 00504418
        ;   XREF to: 0050450c (CONDITIONAL_JUMP)  ; LAB_0050450c
    PUSH ESI                            ; 0050441e
    XOR ESI,ESI                         ; 0050441f
    PUSH dword ptr [ESP + 0x10]         ; 00504421
        ;   Label: LAB_00504421
    PUSH ESI                            ; 00504425
    PUSH EBX                            ; 00504426
    CALL FUN_00505560                   ; 00504427
        ;   XREF to: 00505560 (UNCONDITIONAL_CALL)  ; undefined FUN_00505560()
    INC ESI                             ; 0050442c
    ADD ESP,0xc                         ; 0050442d
    CMP ESI,0xc                         ; 00504430
    JL 0x00504421                       ; 00504433
        ;   XREF to: 00504421 (CONDITIONAL_JUMP)  ; LAB_00504421
    XOR ESI,ESI                         ; 00504435
    PUSH dword ptr [ESP + 0x10]         ; 00504437
        ;   Label: LAB_00504437
    PUSH ESI                            ; 0050443b
    PUSH EBX                            ; 0050443c
    CALL FUN_00506220                   ; 0050443d
        ;   XREF to: 00506220 (UNCONDITIONAL_CALL)  ; undefined FUN_00506220()
    INC ESI                             ; 00504442
    ADD ESP,0xc                         ; 00504443
    CMP ESI,0x2                         ; 00504446
    JL 0x00504437                       ; 00504449
        ;   XREF to: 00504437 (CONDITIONAL_JUMP)  ; LAB_00504437
    XOR ESI,ESI                         ; 0050444b
    PUSH dword ptr [ESP + 0x10]         ; 0050444d
        ;   Label: LAB_0050444d
    PUSH ESI                            ; 00504451
    PUSH EBX                            ; 00504452
    CALL FUN_00505bc0                   ; 00504453
        ;   XREF to: 00505bc0 (UNCONDITIONAL_CALL)  ; undefined FUN_00505bc0()
    INC ESI                             ; 00504458
    ADD ESP,0xc                         ; 00504459
    CMP ESI,0xc                         ; 0050445c
    JL 0x0050444d                       ; 0050445f
        ;   XREF to: 0050444d (CONDITIONAL_JUMP)  ; LAB_0050444d
    XOR ESI,ESI                         ; 00504461
    PUSH dword ptr [ESP + 0x10]         ; 00504463
        ;   Label: LAB_00504463
    PUSH ESI                            ; 00504467
    PUSH EBX                            ; 00504468
    CALL FUN_005058e0                   ; 00504469
        ;   XREF to: 005058e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005058e0()
    INC ESI                             ; 0050446e
    ADD ESP,0xc                         ; 0050446f
    CMP ESI,0xc                         ; 00504472
    JL 0x00504463                       ; 00504475
        ;   XREF to: 00504463 (CONDITIONAL_JUMP)  ; LAB_00504463
    XOR ESI,ESI                         ; 00504477
    PUSH ESI                            ; 00504479
        ;   Label: LAB_00504479
    PUSH EBX                            ; 0050447a
    CALL FUN_00504ee0                   ; 0050447b
        ;   XREF to: 00504ee0 (UNCONDITIONAL_CALL)  ; undefined FUN_00504ee0()
    INC ESI                             ; 00504480
    ADD ESP,0x8                         ; 00504481
    CMP ESI,0xc                         ; 00504484
    JL 0x00504479                       ; 00504487
        ;   XREF to: 00504479 (CONDITIONAL_JUMP)  ; LAB_00504479
    XOR ESI,ESI                         ; 00504489
    PUSH ESI                            ; 0050448b
        ;   Label: LAB_0050448b
    PUSH EBX                            ; 0050448c
    CALL FUN_005062a0                   ; 0050448d
        ;   XREF to: 005062a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005062a0()
    INC ESI                             ; 00504492
    ADD ESP,0x8                         ; 00504493
    CMP ESI,0x2                         ; 00504496
    JL 0x0050448b                       ; 00504499
        ;   XREF to: 0050448b (CONDITIONAL_JUMP)  ; LAB_0050448b
    LEA ESI,[EBX + 0x13c8]              ; 0050449b
    LEA EAX,[EBX + 0x1368]              ; 005044a1
    CMP ESI,EAX                         ; 005044a7
    JZ 0x005044bb                       ; 005044a9
        ;   XREF to: 005044bb (CONDITIONAL_JUMP)  ; LAB_005044bb
    MOV EDX,dword ptr [EAX]             ; 005044ab
    MOV dword ptr [ESI],EDX             ; 005044ad
    MOV EDX,dword ptr [EAX + 0x4]       ; 005044af
    MOV dword ptr [ESI + 0x4],EDX       ; 005044b2
    MOV EDX,dword ptr [EAX + 0x8]       ; 005044b5
    MOV dword ptr [ESI + 0x8],EDX       ; 005044b8
    MOV AH,byte ptr [EBX + 0x13cf]      ; 005044bb
        ;   Label: LAB_005044bb
    LEA ESI,[EBX + 0x1368]              ; 005044c1
    XOR AH,0x80                         ; 005044c7
    PUSH ESI                            ; 005044ca
    MOV byte ptr [EBX + 0x13cf],AH      ; 005044cb
    LEA EAX,[EBX + 0x1374]              ; 005044d1
    PUSH EAX                            ; 005044d7
    CALL FUN_0045f3e0                   ; 005044d8
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 005044dd
    LEA EAX,[EBX + 0x13c8]              ; 005044e0
    PUSH EAX                            ; 005044e6
    ADD EBX,0x13d4                      ; 005044e7
    PUSH EBX                            ; 005044ed
    CALL FUN_0045f3e0                   ; 005044ee
        ;   XREF to: 0045f3e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0045f3e0()
    ADD ESP,0x8                         ; 005044f3
    PUSH 0x3c8efa35                     ; 005044f6
    PUSH ESI                            ; 005044fb
    MOV EDX,dword ptr [0x0061d95c]      ; 005044fc | DAT_0061d95c
    PUSH EDX                            ; 00504502
    CALL FUN_004cc9a0                   ; 00504503
        ;   XREF to: 004cc9a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004cc9a0()
    ADD ESP,0xc                         ; 00504508
    POP ESI                             ; 0050450b
    POP EBX                             ; 0050450c
        ;   Label: LAB_0050450c
    RET                                 ; 0050450d

