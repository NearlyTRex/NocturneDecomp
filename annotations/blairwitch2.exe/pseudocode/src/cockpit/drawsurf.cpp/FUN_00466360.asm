; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00466360(int param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   FUN_00466960 at 004669cc
;   FUN_00466a50 at 00466bd5
;
; Referenced Globals:
;   undefined4 DAT_006141c0
;   undefined4 DAT_01ba5c28
;   undefined4 DAT_01ba5c34
;   undefined4 DAT_01ba5c38
;   undefined4 DAT_01ba5c48
;   undefined4 DAT_01d046a0
;   undefined4 DAT_01d046a4
;
; Called Functions:
;   FUN_004e4500
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00466360
        ;   Label: FUN_00466360
    PUSH ESI                            ; 00466361
    PUSH EDI                            ; 00466362
    PUSH EBP                            ; 00466363
    MOV EDX,dword ptr [ESP + 0x14]      ; 00466364
    MOV EAX,dword ptr [ESP + 0x18]      ; 00466368
    MOV ECX,dword ptr [ESP + 0x1c]      ; 0046636c
    MOV EBX,dword ptr [EDX + 0x8]       ; 00466370
    MOV ESI,dword ptr [EDX + 0xc]       ; 00466373
    MOV EDI,dword ptr [EDX + 0x10]      ; 00466376
    ADD EAX,EBX                         ; 00466379
    ADD ECX,ESI                         ; 0046637b
    CMP EAX,EDI                         ; 0046637d
    JL 0x004663cb                       ; 0046637f
        ;   XREF to: 004663cb (CONDITIONAL_JUMP)  ; LAB_004663cb
    CMP EAX,dword ptr [EDX + 0x18]      ; 00466381
    JG 0x004663cb                       ; 00466384
        ;   XREF to: 004663cb (CONDITIONAL_JUMP)  ; LAB_004663cb
    CMP ECX,dword ptr [EDX + 0x14]      ; 00466386
    JL 0x004663cb                       ; 00466389
        ;   XREF to: 004663cb (CONDITIONAL_JUMP)  ; LAB_004663cb
    CMP ECX,dword ptr [EDX + 0x1c]      ; 0046638b
    JG 0x004663cb                       ; 0046638e
        ;   XREF to: 004663cb (CONDITIONAL_JUMP)  ; LAB_004663cb
    MOV EDI,dword ptr [0x01ba5c34]      ; 00466390 | DAT_01ba5c34
    LEA ESI,[EAX + EAX*0x1]             ; 00466396
    SHL ECX,0x2                         ; 00466399
    LEA EBX,[EAX*0x4 + 0x0]             ; 0046639c
    TEST EDI,EDI                        ; 004663a3
    JNZ 0x00466472                      ; 004663a5
        ;   XREF to: 00466472 (CONDITIONAL_JUMP)  ; LAB_00466472
    MOV EDX,dword ptr [0x006141c0]      ; 004663ab | DAT_006141c0
    CMP EDX,0x10                        ; 004663b1
    JNC 0x00466422                      ; 004663b4
        ;   XREF to: 00466422 (CONDITIONAL_JUMP)  ; LAB_00466422
    CMP EDX,0x8                         ; 004663b6
    JNZ 0x004663fa                      ; 004663b9
        ;   XREF to: 004663fa (CONDITIONAL_JUMP)  ; LAB_004663fa
    MOV EDX,dword ptr [ECX + 0x1c2a38c] ; 004663bb
    ADD EAX,EDX                         ; 004663c1
    MOV DL,byte ptr [0x01ba5c28]        ; 004663c3 | DAT_01ba5c28
    MOV byte ptr [EAX],DL               ; 004663c9
    POP EBP                             ; 004663cb
        ;   Label: LAB_004663cb
    POP EDI                             ; 004663cc
    POP ESI                             ; 004663cd
    POP EBX                             ; 004663ce
    RET                                 ; 004663cf
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 004663d0
        ;   Label: LAB_004663d0
    ADD ESI,EAX                         ; 004663d6
    MOV AX,[0x01ba5c28]                 ; 004663d8 | DAT_01ba5c28
    MOV word ptr [ESI],AX               ; 004663de
    POP EBP                             ; 004663e1
    POP EDI                             ; 004663e2
    POP ESI                             ; 004663e3
    POP EBX                             ; 004663e4
    RET                                 ; 004663e5
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 004663e6
        ;   Label: LAB_004663e6
    ADD EBX,EAX                         ; 004663ec
    MOV EAX,[0x01ba5c28]                ; 004663ee | DAT_01ba5c28
    MOV dword ptr [EBX],EAX             ; 004663f3
    POP EBP                             ; 004663f5
    POP EDI                             ; 004663f6
    POP ESI                             ; 004663f7
    POP EBX                             ; 004663f8
    RET                                 ; 004663f9
    MOV ECX,0x5d1282                    ; 004663fa
        ;   Label: LAB_004663fa
    MOV EBX,0x18d                       ; 004663ff
    PUSH 0x5d129a                       ; 00466404
    MOV dword ptr [0x01d046a0],ECX      ; 00466409 | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EBX      ; 0046640f | DAT_01d046a4
    CALL FUN_004e4500                   ; 00466415
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 0046641a
    POP EBP                             ; 0046641d
    POP EDI                             ; 0046641e
    POP ESI                             ; 0046641f
    POP EBX                             ; 00466420
    RET                                 ; 00466421
    JBE 0x004663d0                      ; 00466422
        ;   XREF to: 004663d0 (CONDITIONAL_JUMP)  ; LAB_004663d0
        ;   Label: LAB_00466422
    CMP EDX,0x20                        ; 00466424
    JZ 0x004663e6                       ; 00466427
        ;   XREF to: 004663e6 (CONDITIONAL_JUMP)  ; LAB_004663e6
    JMP 0x004663fa                      ; 00466429
        ;   XREF to: 004663fa (UNCONDITIONAL_JUMP)  ; LAB_004663fa
    MOV EAX,dword ptr [ECX + 0x1c2a38c] ; 0046642b
        ;   Label: LAB_0046642b
    XOR EDX,EDX                         ; 00466431
    MOV CL,byte ptr [0x01ba5c38]        ; 00466433 | DAT_01ba5c38
    MOV DX,word ptr [ESI + EAX*0x1]     ; 00466439
    MOV EBP,dword ptr [0x01ba5c48]      ; 0046643d | DAT_01ba5c48
    SHR EDX,CL                          ; 00466443
    AND EDX,EBP                         ; 00466445
    MOV word ptr [ESI + EAX*0x1],DX     ; 00466447
    POP EBP                             ; 0046644b
    POP EDI                             ; 0046644c
    POP ESI                             ; 0046644d
    POP EBX                             ; 0046644e
    RET                                 ; 0046644f
    MOV EDX,dword ptr [ECX + 0x1c2a38c] ; 00466450
        ;   Label: LAB_00466450
    MOV CL,byte ptr [0x01ba5c38]        ; 00466456 | DAT_01ba5c38
    MOV EAX,dword ptr [EDX + EBX*0x1]   ; 0046645c
    SHR EAX,CL                          ; 0046645f
    MOV ECX,EAX                         ; 00466461
    MOV EAX,[0x01ba5c48]                ; 00466463 | DAT_01ba5c48
    AND ECX,EAX                         ; 00466468
    MOV dword ptr [EDX + EBX*0x1],ECX   ; 0046646a
    POP EBP                             ; 0046646d
    POP EDI                             ; 0046646e
    POP ESI                             ; 0046646f
    POP EBX                             ; 00466470
    RET                                 ; 00466471
    MOV EAX,[0x006141c0]                ; 00466472 | DAT_006141c0
        ;   Label: LAB_00466472
    CMP EAX,0x10                        ; 00466477
    JNC 0x00466487                      ; 0046647a
        ;   XREF to: 00466487 (CONDITIONAL_JUMP)  ; LAB_00466487
    CMP EAX,0x8                         ; 0046647c
    JZ 0x004663cb                       ; 0046647f
        ;   XREF to: 004663cb (CONDITIONAL_JUMP)  ; LAB_004663cb
    JMP 0x0046648e                      ; 00466485
        ;   XREF to: 0046648e (UNCONDITIONAL_JUMP)  ; LAB_0046648e
    JBE 0x0046642b                      ; 00466487
        ;   XREF to: 0046642b (CONDITIONAL_JUMP)  ; LAB_0046642b
        ;   Label: LAB_00466487
    CMP EAX,0x20                        ; 00466489
    JZ 0x00466450                       ; 0046648c
        ;   XREF to: 00466450 (CONDITIONAL_JUMP)  ; LAB_00466450
    MOV EAX,0x5d12b0                    ; 0046648e
        ;   Label: LAB_0046648e
    MOV EDX,0x19e                       ; 00466493
    PUSH 0x5d12c8                       ; 00466498
    MOV [0x01d046a0],EAX                ; 0046649d | DAT_01d046a0
    MOV dword ptr [0x01d046a4],EDX      ; 004664a2 | DAT_01d046a4
    CALL FUN_004e4500                   ; 004664a8
        ;   XREF to: 004e4500 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4500()
    ADD ESP,0x4                         ; 004664ad
    POP EBP                             ; 004664b0
    POP EDI                             ; 004664b1
    POP ESI                             ; 004664b2
    POP EBX                             ; 004664b3
    RET                                 ; 004664b4

