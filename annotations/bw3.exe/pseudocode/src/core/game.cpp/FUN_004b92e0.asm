; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b92e0(int param_1)
;
;
; XREF[1]:
;   FUN_004b7f90 at 004b8445
;
; Referenced Globals:
;   void* switchdataD_004b92d0 = 004b932f
;   TerminatedCString s_core_game_cpp_005c27c0
;   TerminatedCString s_CGame_playerControls_unk_005c27d1
;   undefined4 DAT_005fe4b0
;   undefined4 DAT_00603450
;   undefined4 DAT_00603b28
;   undefined4 DAT_007dffb4
;   undefined4 DAT_01c5fae4
;   undefined4 DAT_01c6cef0
;   undefined4 DAT_01c6cef4
;   undefined4 DAT_01d1a05c
;   undefined4 DAT_01d1a09c
;   undefined4 DAT_01d21fa0
;   undefined4 DAT_01d21fa4
;   undefined4 DAT_01d221f8
;   ... and 7 more
;
; Called Functions:
;   FUN_004b97b0
;   FUN_004b9960
;   FUN_004ba2e0
;   FUN_004ba490
;   FUN_004c07b0
;   FUN_004e4330
;   FUN_00507f10
;
; *****************************************************************************

section .text

    PUSH ESI                            ; 004b92e0
        ;   Label: FUN_004b92e0
    MOV ESI,dword ptr [ESP + 0x8]       ; 004b92e1
    CMP dword ptr [0x01d22200],0x0      ; 004b92e5 | DAT_01d22200
    JNZ 0x004b9324                      ; 004b92ec
        ;   XREF to: 004b9324 (CONDITIONAL_JUMP)  ; LAB_004b9324
    MOV EAX,[0x005fe4b0]                ; 004b92ee | DAT_005fe4b0 | DAT_01d1a05c
    CMP dword ptr [EAX + 0x40],0x0      ; 004b92f3 | DAT_01d1a09c
    JNZ 0x004b9324                      ; 004b92f7
        ;   XREF to: 004b9324 (CONDITIONAL_JUMP)  ; LAB_004b9324
    CMP dword ptr [0x007dffb4],0x0      ; 004b92f9 | DAT_007dffb4
    JNZ 0x004b9324                      ; 004b9300
        ;   XREF to: 004b9324 (CONDITIONAL_JUMP)  ; LAB_004b9324
    CMP dword ptr [ESI + 0x220],0x0     ; 004b9302
    JNZ 0x004b9322                      ; 004b9309
        ;   XREF to: 004b9322 (CONDITIONAL_JUMP)  ; LAB_004b9322
    CMP dword ptr [ESI + 0x25c],0x0     ; 004b930b
    JZ 0x004b93b6                       ; 004b9312
        ;   XREF to: 004b93b6 (CONDITIONAL_JUMP)  ; LAB_004b93b6
    MOV dword ptr [0x01d22b48],0xffffffff ; 004b9318 | DAT_01d22b48
    POP ESI                             ; 004b9322
        ;   Label: LAB_004b9322
    RET                                 ; 004b9323
    PUSH ESI                            ; 004b9324
        ;   Label: LAB_004b9324
    CALL FUN_004ba490                   ; 004b9325
        ;   XREF to: 004ba490 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba490()
    ADD ESP,0x4                         ; 004b932a
    POP ESI                             ; 004b932d
    RET                                 ; 004b932e
    PUSH EAX                            ; 004b932f
        ;   Label: caseD_0
    PUSH ESI                            ; 004b9330
    CALL FUN_004b9960                   ; 004b9331
        ;   XREF to: 004b9960 (UNCONDITIONAL_CALL)  ; undefined FUN_004b9960()
    ADD ESP,0x8                         ; 004b9336
        ;   Label: LAB_004b9336
    PUSH EDI                            ; 004b9339
        ;   Label: LAB_004b9339
    MOV ECX,0x258                       ; 004b933a
    MOV ESI,0x1c6cef0                   ; 004b933f
    MOV EDI,0x1d21fa0                   ; 004b9344
    PUSH EDI                            ; 004b9349 | DAT_01d21fa0
    MOV EAX,ECX                         ; 004b934a
    SHR ECX,0x2                         ; 004b934c
    MOVSD.REP ES:EDI,ESI                ; 004b934f | DAT_01c6cef0 | DAT_01d21fa0 | DAT_01c6cef4
    MOV CL,AL                           ; 004b9351
    AND CL,0x3                          ; 004b9353
    MOVSB.REP ES:EDI,ESI                ; 004b9356 | DAT_01c6cef4 | DAT_01d21fa4
    POP EDI                             ; 004b9358
    MOV EAX,[0x01c5fae4]                ; 004b9359 | DAT_01c5fae4
    MOV [0x01d221f8],EAX                ; 004b935e | DAT_01d221f8
    MOV EAX,[0x00603b28]                ; 004b9363 | DAT_00603b28
    MOV EAX,dword ptr [EAX + 0x15aeb8]  ; 004b9368 | DAT_02032780
    MOV [0x01d221fc],EAX                ; 004b936e | DAT_01d221fc
    POP EDI                             ; 004b9373
    POP ESI                             ; 004b9374
    RET                                 ; 004b9375
    PUSH EAX                            ; 004b9376
        ;   Label: caseD_2
    PUSH ESI                            ; 004b9377
    CALL FUN_004b97b0                   ; 004b9378
        ;   XREF to: 004b97b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b97b0()
    JMP 0x004b9336                      ; 004b937d
        ;   XREF to: 004b9336 (UNCONDITIONAL_JUMP)  ; LAB_004b9336
    PUSH EAX                            ; 004b937f
        ;   Label: caseD_1
    PUSH ESI                            ; 004b9380
    CALL FUN_004ba2e0                   ; 004b9381
        ;   XREF to: 004ba2e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ba2e0()
    JMP 0x004b9336                      ; 004b9386
        ;   XREF to: 004b9336 (UNCONDITIONAL_JUMP)  ; LAB_004b9336
    PUSH EAX                            ; 004b9388
        ;   Label: caseD_3
    PUSH ESI                            ; 004b9389
    CALL FUN_004c07b0                   ; 004b938a
        ;   XREF to: 004c07b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004c07b0()
    JMP 0x004b9336                      ; 004b938f
        ;   XREF to: 004b9336 (UNCONDITIONAL_JUMP)  ; LAB_004b9336
    MOV EDX,0x5c27c0                    ; 004b9391 | = "..\\core\\game.cpp"
        ;   Label: default
    MOV ECX,0x88c                       ; 004b9396
    PUSH 0x5c27d1                       ; 004b939b | = "CGame::playerControls - unknown contr..."
    MOV dword ptr [0x01d71de0],EDX      ; 004b93a0 | DAT_01d71de0
    MOV dword ptr [0x01d71de4],ECX      ; 004b93a6 | DAT_01d71de4
    CALL FUN_004e4330                   ; 004b93ac
        ;   XREF to: 004e4330 (UNCONDITIONAL_CALL)  ; undefined FUN_004e4330()
    ADD ESP,0x4                         ; 004b93b1
    JMP 0x004b9339                      ; 004b93b4
        ;   XREF to: 004b9339 (UNCONDITIONAL_JUMP)  ; LAB_004b9339
    MOV EAX,[0x00603450]                ; 004b93b6 | DAT_00603450
        ;   Label: LAB_004b93b6
    PUSH EAX                            ; 004b93bb | DAT_01da62f0
    CALL FUN_00507f10                   ; 004b93bc
        ;   XREF to: 00507f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00507f10()
    MOV EDX,dword ptr [ESI + 0xd4]      ; 004b93c1
    ADD ESP,0x4                         ; 004b93c7
    CMP EDX,0x3                         ; 004b93ca
    JA 0x004b9391                       ; 004b93cd
        ;   XREF to: 004b9391 (CONDITIONAL_JUMP)  ; default
    JMP dword ptr [EDX*0x4 + 0x4b92d0]  ; 004b93cf | caseD_0 | caseD_1 | caseD_2
        ;   Label: switchD

