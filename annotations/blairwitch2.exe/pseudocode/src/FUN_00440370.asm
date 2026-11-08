; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00440370(int param_1,int param_2)
;
; Local Variables:
; undefined4       Stack[-0x34]:4  local_34
; undefined4       Stack[-0x30]:4  local_30
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined4       Stack[-0x20]:4  local_20
; undefined4       Stack[-0x1c]:4  local_1c
; undefined4       Stack[-0x18]:4  local_18
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0052f2a0 at 0052f36e
;
; Referenced Globals:
;   undefined4 DAT_0150f454
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00440370
        ;   Label: FUN_00440370
    PUSH ESI                            ; 00440371
    PUSH EDI                            ; 00440372
    PUSH EBP                            ; 00440373
    MOV EBP,ESP                         ; 00440374
    SUB ESP,0x24                        ; 00440376
    MOV EAX,dword ptr [EBP + 0x14]      ; 00440379
    XOR EDX,EDX                         ; 0044037c
    MOV ECX,dword ptr [EAX + 0x154]     ; 0044037e
    MOV dword ptr [EBP + -0xc],EDX      ; 00440384
    TEST ECX,ECX                        ; 00440387
    JLE 0x004403ef                      ; 00440389
        ;   XREF to: 004403ef (CONDITIONAL_JUMP)  ; LAB_004403ef
    MOV EBX,0xaf5218                    ; 0044038b
    MOV EAX,dword ptr [EBP + 0x18]      ; 00440390
    MOV dword ptr [EBP + -0x8],EDX      ; 00440393
    MOV dword ptr [EBP + -0x10],EBX     ; 00440396
    MOV dword ptr [EBP + -0x4],EAX      ; 00440399
    MOV EDX,dword ptr [EBP + -0x4]      ; 0044039c
        ;   Label: LAB_0044039c
    MOV EAX,dword ptr [EBP + -0x4]      ; 0044039f
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 004403a2
    MOV EAX,dword ptr [EAX + 0x1888]    ; 004403a8
    SUB EAX,EDI                         ; 004403ae
    INC EAX                             ; 004403b0
    MOV dword ptr [EBP + -0x14],EAX     ; 004403b1
    CMP dword ptr [EBP + -0x14],0x0     ; 004403b4
    JG 0x004403f6                       ; 004403b8
        ;   XREF to: 004403f6 (CONDITIONAL_JUMP)  ; LAB_004403f6
    MOV EBX,dword ptr [EBP + -0x4]      ; 004403ba
        ;   Label: LAB_004403ba
    MOV ESI,dword ptr [EBP + -0x10]     ; 004403bd
    MOV EDI,dword ptr [EBP + -0x8]      ; 004403c0
    MOV EAX,dword ptr [EBP + -0xc]      ; 004403c3
    MOV EDX,dword ptr [EBP + 0x14]      ; 004403c6
    ADD EBX,0x4                         ; 004403c9
    ADD ESI,0x140                       ; 004403cc
    ADD EDI,0x500                       ; 004403d2
    INC EAX                             ; 004403d8
    MOV ECX,dword ptr [EDX + 0x154]     ; 004403d9
    MOV dword ptr [EBP + -0x4],EBX      ; 004403df
    MOV dword ptr [EBP + -0x10],ESI     ; 004403e2
    MOV dword ptr [EBP + -0x8],EDI      ; 004403e5
    MOV dword ptr [EBP + -0xc],EAX      ; 004403e8
    CMP EAX,ECX                         ; 004403eb
    JL 0x0044039c                       ; 004403ed
        ;   XREF to: 0044039c (CONDITIONAL_JUMP)  ; LAB_0044039c
    MOV ESP,EBP                         ; 004403ef
        ;   Label: LAB_004403ef
    POP EBP                             ; 004403f1
    POP EDI                             ; 004403f2
    POP ESI                             ; 004403f3
    POP EBX                             ; 004403f4
    RET                                 ; 004403f5
    MOV EAX,dword ptr [EBP + 0x18]      ; 004403f6
        ;   Label: LAB_004403f6
    MOV ECX,dword ptr [EBP + -0x8]      ; 004403f9
    MOV EAX,dword ptr [EAX + 0x1c48]    ; 004403fc
    LEA EDX,[EDI*0x4 + 0x0]             ; 00440402
    ADD EAX,ECX                         ; 00440409
    ADD EAX,EDX                         ; 0044040b
    MOV dword ptr [EBP + -0x24],EAX     ; 0044040d
    MOV EAX,dword ptr [EBP + -0x4]      ; 00440410
    MOV EDX,dword ptr [EBP + 0x18]      ; 00440413
    MOV EAX,dword ptr [EAX + 0x14c8]    ; 00440416
    MOV EDX,dword ptr [EDX + 0x1c4c]    ; 0044041c
    SHL EAX,0x2                         ; 00440422
    ADD EDX,ECX                         ; 00440425
    ADD EDX,EAX                         ; 00440427
    MOV dword ptr [EBP + -0x20],EDX     ; 00440429
    MOV EDX,dword ptr [EBP + -0x4]      ; 0044042c
    MOV EAX,dword ptr [EBP + 0x18]      ; 0044042f
    MOV EDX,dword ptr [EDX + 0x14c8]    ; 00440432
    MOV EAX,dword ptr [EAX + 0x1c50]    ; 00440438
    SHL EDX,0x2                         ; 0044043e
    ADD EAX,ECX                         ; 00440441
    ADD EAX,EDX                         ; 00440443
    MOV dword ptr [EBP + -0x1c],EAX     ; 00440445
    MOV EDX,dword ptr [EBP + -0x4]      ; 00440448
    MOV EAX,dword ptr [EBP + -0x10]     ; 0044044b
    MOV EDI,dword ptr [EDX + 0x14c8]    ; 0044044e
    ADD EAX,EDI                         ; 00440454
    MOV dword ptr [EBP + -0x18],EAX     ; 00440456
    MOV EAX,dword ptr [EBP + 0x18]      ; 00440459
    MOV EAX,dword ptr [EAX + 0x1c54]    ; 0044045c
    MOV [0x0150f454],EAX                ; 00440462 | DAT_0150f454
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00440467
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 0044046d
    MOV EAX,dword ptr [EBX]             ; 00440473
        ;   Label: LAB_00440473
    ADD EBX,0x20                        ; 00440475
    SUB ECX,0x8                         ; 00440478
    JG 0x00440473                       ; 0044047b
        ;   XREF to: 00440473 (CONDITIONAL_JUMP)  ; LAB_00440473
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 0044047d
    MOV EBX,dword ptr [EBP + 0xffffffe0] ; 00440483
    MOV EAX,dword ptr [EBX]             ; 00440489
        ;   Label: LAB_00440489
    ADD EBX,0x20                        ; 0044048b
    SUB ECX,0x8                         ; 0044048e
    JG 0x00440489                       ; 00440491
        ;   XREF to: 00440489 (CONDITIONAL_JUMP)  ; LAB_00440489
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 00440493
    MOV EBX,dword ptr [EBP + 0xffffffe4] ; 00440499
    MOV EAX,dword ptr [EBX]             ; 0044049f
        ;   Label: LAB_0044049f
    ADD EBX,0x20                        ; 004404a1
    SUB ECX,0x8                         ; 004404a4
    JG 0x0044049f                       ; 004404a7
        ;   XREF to: 0044049f (CONDITIONAL_JUMP)  ; LAB_0044049f
    MOV ECX,dword ptr [EBP + 0xffffffec] ; 004404a9
    MOV EBX,dword ptr [EBP + 0xffffffdc] ; 004404af
    MOV ESI,dword ptr [EBP + 0xffffffe0] ; 004404b5
    MOV EDX,dword ptr [EBP + 0xffffffe4] ; 004404bb
    MOV EDI,dword ptr [EBP + 0xffffffe8] ; 004404c1
    PUSH EBP                            ; 004404c7
    MOV EAX,dword ptr [EBX]             ; 004404c8
        ;   Label: LAB_004404c8
    CMP EAX,0x0                         ; 004404ca
    JBE 0x004404e6                      ; 004404cd
        ;   XREF to: 004404e6 (CONDITIONAL_JUMP)  ; LAB_004404e6
    MOV EBP,dword ptr [ESI]             ; 004404cf
    MOVZX EAX,word ptr [EBP]            ; 004404d1
    CMP EAX,dword ptr [EBX]             ; 004404d5
    JC 0x004404e6                       ; 004404d7
        ;   XREF to: 004404e6 (CONDITIONAL_JUMP)  ; LAB_004404e6
    MOV EBP,dword ptr [0x0150f454]      ; 004404d9 | DAT_0150f454
    ADD EBP,dword ptr [EDX]             ; 004404df
    MOV AL,byte ptr [EBP]               ; 004404e1
    ADD byte ptr [EDI],AL               ; 004404e4
    ADD EBX,0x4                         ; 004404e6
        ;   Label: LAB_004404e6
    ADD ESI,0x4                         ; 004404e9
    ADD EDX,0x4                         ; 004404ec
    INC EDI                             ; 004404ef
    SUB ECX,0x1                         ; 004404f0
    JG 0x004404c8                       ; 004404f3
        ;   XREF to: 004404c8 (CONDITIONAL_JUMP)  ; LAB_004404c8
    POP EBP                             ; 004404f5
    JMP 0x004403ba                      ; 004404f6
        ;   XREF to: 004403ba (UNCONDITIONAL_JUMP)  ; LAB_004403ba

