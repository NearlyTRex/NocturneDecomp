; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b2b0(undefined4 *param_1)
;
; Local Variables:
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[2]:
;   FUN_0051b610 at 0051b68d
;   FUN_0051bdc0 at 0051be09
;
; Referenced Globals:
;   TerminatedCString s_Setting_up_actors_005e96af
;   TerminatedCString s_Setting_up_actors_005e96c1
;   TerminatedCString s_Setting_up_actors_005e96d3
;   TerminatedCString s_Setting_up_actors_005e96e5
;   undefined4 DAT_0061f2e0
;
; Called Functions:
;   FUN_004fe9c0
;   FUN_00531090
;   FUN_0056b830
;   FUN_0056b860
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b2b0
        ;   Label: FUN_0051b2b0
    PUSH ESI                            ; 0051b2b1
    PUSH EDI                            ; 0051b2b2
    PUSH EBP                            ; 0051b2b3
    SUB ESP,0x4                         ; 0051b2b4
    PUSH 0x0                            ; 0051b2b7
    PUSH 0x5e96af                       ; 0051b2b9 | = "Setting up actors"
    CALL FUN_00531090                   ; 0051b2be
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051b2c3
    PUSH EAX                            ; 0051b2c6
    MOV EDX,dword ptr [0x0061f2e0]      ; 0051b2c7 | DAT_0061f2e0
    PUSH EDX                            ; 0051b2cd
    CALL FUN_004fe9c0                   ; 0051b2ce
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051b2d3
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051b2d6
    CALL FUN_0056b830                   ; 0051b2da
        ;   XREF to: 0056b830 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b830()
    MOV EBX,dword ptr [EBX + 0x1118]    ; 0051b2df
    XOR EDI,EDI                         ; 0051b2e5
    TEST EBX,EBX                        ; 0051b2e7
    JZ 0x0051b310                       ; 0051b2e9
        ;   XREF to: 0051b310 (CONDITIONAL_JUMP)  ; LAB_0051b310
    PUSH EBX                            ; 0051b2eb
        ;   Label: LAB_0051b2eb
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051b2ec
    INC EDI                             ; 0051b2f2
    CALL dword ptr [EAX + 0x4]          ; 0051b2f3
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051b2f6
    ADD ESP,0x4                         ; 0051b2fc
    TEST EBX,EBX                        ; 0051b2ff
    JNZ 0x0051b2eb                      ; 0051b301
        ;   XREF to: 0051b2eb (CONDITIONAL_JUMP)  ; LAB_0051b2eb
    LEA EAX,[EAX]                       ; 0051b303
    LEA EDX,[EDX]                       ; 0051b309
    NOP                                 ; 0051b30f
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051b310
        ;   Label: LAB_0051b310
    CMP dword ptr [EAX + 0x1008],0x0    ; 0051b314
    JZ 0x0051b3e9                       ; 0051b31b
        ;   XREF to: 0051b3e9 (CONDITIONAL_JUMP)  ; LAB_0051b3e9
    MOV EBX,dword ptr [ESP + 0x18]      ; 0051b321
        ;   Label: LAB_0051b321
    MOV EBX,dword ptr [EBX + 0x1118]    ; 0051b325
    XOR ESI,ESI                         ; 0051b32b
    TEST EBX,EBX                        ; 0051b32d
    JZ 0x0051b3d1                       ; 0051b32f
        ;   XREF to: 0051b3d1 (CONDITIONAL_JUMP)  ; LAB_0051b3d1
    LEA EAX,[EDI*0x4 + 0x0]             ; 0051b335
    SUB EAX,EDI                         ; 0051b33c
    MOV EDX,EAX                         ; 0051b33e
    SAR EDX,0x1f                        ; 0051b340
    SHL EDX,0x2                         ; 0051b343
    SBB EAX,EDX                         ; 0051b346
    SAR EAX,0x2                         ; 0051b348
    MOV dword ptr [ESP],EAX             ; 0051b34b
    MOV EDX,EDI                         ; 0051b34e
    MOV EAX,EDI                         ; 0051b350
    SAR EDX,0x1f                        ; 0051b352
    SUB EAX,EDX                         ; 0051b355
    SAR EAX,0x1                         ; 0051b357
    MOV EBP,EAX                         ; 0051b359
    MOV EDX,EDI                         ; 0051b35b
    MOV EAX,EDI                         ; 0051b35d
    SAR EDX,0x1f                        ; 0051b35f
    SHL EDX,0x2                         ; 0051b362
    SBB EAX,EDX                         ; 0051b365
    SAR EAX,0x2                         ; 0051b367
    MOV EDI,EAX                         ; 0051b36a
    PUSH EBX                            ; 0051b36c
        ;   Label: LAB_0051b36c
    MOV EAX,dword ptr [EBX + 0x154]     ; 0051b36d
    INC ESI                             ; 0051b373
    CALL dword ptr [EAX]                ; 0051b374
    ADD ESP,0x4                         ; 0051b376
    CMP ESI,EDI                         ; 0051b379
    JZ 0x0051b3f3                       ; 0051b37b
        ;   XREF to: 0051b3f3 (CONDITIONAL_JUMP)  ; LAB_0051b3f3
    CMP ESI,EBP                         ; 0051b381
        ;   Label: LAB_0051b381
    JNZ 0x0051b3a4                      ; 0051b383
        ;   XREF to: 0051b3a4 (CONDITIONAL_JUMP)  ; LAB_0051b3a4
    PUSH 0x0                            ; 0051b385
    PUSH 0x5e96d3                       ; 0051b387 | = "Setting up actors"
    CALL FUN_00531090                   ; 0051b38c
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051b391
    PUSH EAX                            ; 0051b394
    MOV EDX,dword ptr [0x0061f2e0]      ; 0051b395 | DAT_0061f2e0
    PUSH EDX                            ; 0051b39b
    CALL FUN_004fe9c0                   ; 0051b39c
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051b3a1
    CMP ESI,dword ptr [ESP]             ; 0051b3a4
        ;   Label: LAB_0051b3a4
    JNZ 0x0051b3c7                      ; 0051b3a7
        ;   XREF to: 0051b3c7 (CONDITIONAL_JUMP)  ; LAB_0051b3c7
    PUSH 0x0                            ; 0051b3a9
    PUSH 0x5e96e5                       ; 0051b3ab | = "Setting up actors"
    CALL FUN_00531090                   ; 0051b3b0
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051b3b5
    PUSH EAX                            ; 0051b3b8
    MOV EAX,[0x0061f2e0]                ; 0051b3b9 | DAT_0061f2e0
    PUSH EAX                            ; 0051b3be
    CALL FUN_004fe9c0                   ; 0051b3bf
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051b3c4
    MOV EBX,dword ptr [EBX + 0x14c]     ; 0051b3c7
        ;   Label: LAB_0051b3c7
    TEST EBX,EBX                        ; 0051b3cd
    JNZ 0x0051b36c                      ; 0051b3cf
        ;   XREF to: 0051b36c (CONDITIONAL_JUMP)  ; LAB_0051b36c
    MOV EAX,dword ptr [ESP + 0x18]      ; 0051b3d1
        ;   Label: LAB_0051b3d1
    MOV EDX,dword ptr [ESP + 0x18]      ; 0051b3d5
    MOV EAX,dword ptr [EAX]             ; 0051b3d9
    MOV dword ptr [EDX + 0x1454],EAX    ; 0051b3db
    ADD ESP,0x4                         ; 0051b3e1
    POP EBP                             ; 0051b3e4
    POP EDI                             ; 0051b3e5
    POP ESI                             ; 0051b3e6
    POP EBX                             ; 0051b3e7
    RET                                 ; 0051b3e8
    CALL FUN_0056b860                   ; 0051b3e9
        ;   XREF to: 0056b860 (UNCONDITIONAL_CALL)  ; undefined FUN_0056b860()
        ;   Label: LAB_0051b3e9
    JMP 0x0051b321                      ; 0051b3ee
        ;   XREF to: 0051b321 (UNCONDITIONAL_JUMP)  ; LAB_0051b321
    PUSH 0x0                            ; 0051b3f3
        ;   Label: LAB_0051b3f3
    PUSH 0x5e96c1                       ; 0051b3f5 | = "Setting up actors"
    CALL FUN_00531090                   ; 0051b3fa
        ;   XREF to: 00531090 (UNCONDITIONAL_CALL)  ; undefined FUN_00531090()
    ADD ESP,0x4                         ; 0051b3ff
    PUSH EAX                            ; 0051b402
    MOV EAX,[0x0061f2e0]                ; 0051b403 | DAT_0061f2e0
    PUSH EAX                            ; 0051b408
    CALL FUN_004fe9c0                   ; 0051b409
        ;   XREF to: 004fe9c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004fe9c0()
    ADD ESP,0xc                         ; 0051b40e
    JMP 0x0051b381                      ; 0051b411
        ;   XREF to: 0051b381 (UNCONDITIONAL_JUMP)  ; LAB_0051b381

