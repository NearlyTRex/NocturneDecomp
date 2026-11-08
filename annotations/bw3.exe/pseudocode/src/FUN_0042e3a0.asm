; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0042e3a0(int param_1)
;
; Local Variables:
; undefined        Stack[-0x98]:1  local_98
; undefined        Stack[-0x68]:1  local_68
; undefined4       Stack[-0x5c]:4  local_5c
; undefined4       Stack[-0x4c]:4  local_4c
; undefined4       Stack[-0x3c]:4  local_3c
; undefined        Stack[-0x38]:1  local_38
; undefined4       Stack[-0x2c]:4  local_2c
; undefined4       Stack[-0x28]:4  local_28
; undefined4       Stack[-0x24]:4  local_24
; undefined        Stack[-0x20]:1  local_20
; undefined4       Stack[-0x14]:4  local_14
;
; XREF[1]:
;   FUN_0042d8e0 at 0042d9ad
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_007e2b34
;   undefined4 DAT_01bdd7e4
;
; Called Functions:
;   FUN_00462540
;   FUN_0046cf30
;   FUN_005833e0
;   FUN_00583b10
;   thunk_FUN_004e5ef0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0042e3a0
        ;   Label: FUN_0042e3a0
    PUSH ESI                            ; 0042e3a1
    PUSH EDI                            ; 0042e3a2
    PUSH EBP                            ; 0042e3a3
    SUB ESP,0x88                        ; 0042e3a4
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042e3aa
    MOV EDX,dword ptr [EAX + 0x3284]    ; 0042e3b1
    XOR EBP,EBP                         ; 0042e3b7
    TEST EDX,EDX                        ; 0042e3b9
    JLE 0x0042e402                      ; 0042e3bb
        ;   XREF to: 0042e402 (CONDITIONAL_JUMP)  ; LAB_0042e402
    ADD EAX,0xfd8                       ; 0042e3bd
    MOV EBX,dword ptr [ESP + 0x9c]      ; 0042e3c2
    MOV dword ptr [ESP + 0x84],EAX      ; 0042e3c9
    ADD EBX,0x3288                      ; 0042e3d0
    MOV EAX,dword ptr [EBX]             ; 0042e3d6
        ;   Label: LAB_0042e3d6
    MOV ESI,dword ptr [ESP + 0x9c]      ; 0042e3d8
    SHL EAX,0x2                         ; 0042e3df
    ADD EAX,ESI                         ; 0042e3e2
    CMP dword ptr [EAX + 0x2298],0x0    ; 0042e3e4
    JNZ 0x0042e40d                      ; 0042e3eb
        ;   XREF to: 0042e40d (CONDITIONAL_JUMP)  ; LAB_0042e40d
    MOV EAX,dword ptr [ESP + 0x9c]      ; 0042e3ed
        ;   Label: LAB_0042e3ed
    INC EBP                             ; 0042e3f4
    MOV ECX,dword ptr [EAX + 0x3284]    ; 0042e3f5
    ADD EBX,0x38                        ; 0042e3fb
    CMP EBP,ECX                         ; 0042e3fe
    JL 0x0042e3d6                       ; 0042e400
        ;   XREF to: 0042e3d6 (CONDITIONAL_JUMP)  ; LAB_0042e3d6
    ADD ESP,0x88                        ; 0042e402
        ;   Label: LAB_0042e402
    POP EBP                             ; 0042e408
    POP EDI                             ; 0042e409
    POP ESI                             ; 0042e40a
    POP EBX                             ; 0042e40b
    RET                                 ; 0042e40c
    IMUL EAX,dword ptr [EBX + 0x4],0x30 ; 0042e40d
        ;   Label: LAB_0042e40d
    ADD EAX,dword ptr [ESP + 0x84]      ; 0042e411
    PUSH EAX                            ; 0042e418
    LEA EAX,[EBX + 0x8]                 ; 0042e419
    PUSH EAX                            ; 0042e41c
    LEA ESI,[ESP + 0x8]                 ; 0042e41d
    LEA EDI,[ESP + 0x38]                ; 0042e421
    CALL FUN_005833e0                   ; 0042e425
        ;   XREF to: 005833e0 (UNCONDITIONAL_CALL)  ; undefined FUN_005833e0()
    MOV ECX,0xc                         ; 0042e42a
    LEA ESI,[ESP + 0x8]                 ; 0042e42f
    ADD ESP,0x8                         ; 0042e433
    LEA EAX,[ESP + 0x30]                ; 0042e436
    MOVSD.REP ES:EDI,ESI                ; 0042e43a
    PUSH EAX                            ; 0042e43c
    LEA ESI,[ESP + 0x7c]                ; 0042e43d
    CALL FUN_00583b10                   ; 0042e441
        ;   XREF to: 00583b10 (UNCONDITIONAL_CALL)  ; undefined FUN_00583b10()
    ADD ESP,0x4                         ; 0042e446
    MOV EAX,dword ptr [ESP + 0x3c]      ; 0042e449
    MOV dword ptr [ESP + 0x6c],EAX      ; 0042e44d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0042e451
    MOV dword ptr [ESP + 0x70],EAX      ; 0042e455
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0042e459
    LEA EDI,[ESP + 0x60]                ; 0042e45d
    MOV dword ptr [ESP + 0x74],EAX      ; 0042e461
    LEA EAX,[ESP + 0x6c]                ; 0042e465
    LEA ESI,[ESP + 0x78]                ; 0042e469
    PUSH EAX                            ; 0042e46d
    LEA EAX,[ESP + 0x64]                ; 0042e46e
    MOVSD ES:EDI,ESI                    ; 0042e472
    MOVSD ES:EDI,ESI                    ; 0042e473
    MOVSD ES:EDI,ESI                    ; 0042e474
    PUSH EAX                            ; 0042e475
    MOV ESI,dword ptr [0x005f2afc]      ; 0042e476 | DAT_005f2afc
    PUSH ESI                            ; 0042e47c | DAT_01bdd7e4
    CALL FUN_0046cf30                   ; 0042e47d
        ;   XREF to: 0046cf30 (UNCONDITIONAL_CALL)  ; undefined FUN_0046cf30()
    ADD ESP,0xc                         ; 0042e482
    PUSH -0x1                           ; 0042e485
    PUSH 0x0                            ; 0042e487
    PUSH 0x7e2b34                       ; 0042e489 | DAT_007e2b34
    CALL FUN_00462540                   ; 0042e48e
        ;   XREF to: 00462540 (UNCONDITIONAL_CALL)  ; undefined FUN_00462540()
    ADD ESP,0xc                         ; 0042e493
    MOV EDI,dword ptr [0x005f2afc]      ; 0042e496 | DAT_005f2afc
    PUSH EDI                            ; 0042e49c | DAT_01bdd7e4
    CALL thunk_FUN_004e5ef0             ; 0042e49d
        ;   XREF to: 0046d080 (UNCONDITIONAL_CALL)  ; undefined thunk_FUN_004e5ef0()
    ADD ESP,0x4                         ; 0042e4a2
    JMP 0x0042e3ed                      ; 0042e4a5
        ;   XREF to: 0042e3ed (UNCONDITIONAL_JUMP)  ; LAB_0042e3ed

