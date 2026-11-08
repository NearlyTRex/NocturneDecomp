; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0041d3b0(int param_1,undefined4 *param_2)
;
;
; Referenced Globals:
;   undefined4 DAT_007c4ff0
;   undefined4 DAT_007c5004
;   undefined4 DAT_007c5008
;   undefined4 DAT_007c5014
;   undefined4 DAT_007c5018
;
; Called Functions:
;   FUN_00569130
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0041d3b0
        ;   Label: FUN_0041d3b0
    PUSH EBP                            ; 0041d3b1
    SUB ESP,0x78                        ; 0041d3b2
    MOV EBP,dword ptr [ESP + 0x84]      ; 0041d3b5
    MOV EBX,dword ptr [ESP + 0x88]      ; 0041d3bc
    CMP dword ptr [EBP + 0xc888],0x0    ; 0041d3c3
    JZ 0x0041d3d4                       ; 0041d3ca
        ;   XREF to: 0041d3d4 (CONDITIONAL_JUMP)  ; LAB_0041d3d4
    XOR EAX,EAX                         ; 0041d3cc
    ADD ESP,0x78                        ; 0041d3ce
    POP EBP                             ; 0041d3d1
    POP EBX                             ; 0041d3d2
    RET                                 ; 0041d3d3
    PUSH EDI                            ; 0041d3d4
        ;   Label: LAB_0041d3d4
    PUSH ESI                            ; 0041d3d5
    MOV ECX,dword ptr [0x007c4ff0]      ; 0041d3d6 | DAT_007c4ff0
    PUSH ECX                            ; 0041d3dc
    LEA EAX,[EBP + 0x158]               ; 0041d3dd
    PUSH EAX                            ; 0041d3e3
    LEA ESI,[ESP + 0x58]                ; 0041d3e4
    LEA EDI,[ESP + 0x4c]                ; 0041d3e8
    CALL FUN_00569130                   ; 0041d3ec
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x58]                ; 0041d3f1
    ADD ESP,0x8                         ; 0041d3f5
    LEA EAX,[ESP + 0x44]                ; 0041d3f8
    MOVSD ES:EDI,ESI                    ; 0041d3fc
    MOVSD ES:EDI,ESI                    ; 0041d3fd
    MOVSD ES:EDI,ESI                    ; 0041d3fe
    CMP EBX,EAX                         ; 0041d3ff
    JZ 0x0041d417                       ; 0041d401
        ;   XREF to: 0041d417 (CONDITIONAL_JUMP)  ; LAB_0041d417
    MOV EAX,dword ptr [ESP + 0x44]      ; 0041d403
    MOV dword ptr [EBX],EAX             ; 0041d407
    MOV EAX,dword ptr [ESP + 0x48]      ; 0041d409
    MOV dword ptr [EBX + 0x4],EAX       ; 0041d40d
    MOV EAX,dword ptr [ESP + 0x4c]      ; 0041d410
    MOV dword ptr [EBX + 0x8],EAX       ; 0041d414
    MOV ESI,dword ptr [0x007c5004]      ; 0041d417 | DAT_007c5004
        ;   Label: LAB_0041d417
    PUSH ESI                            ; 0041d41d
    LEA EAX,[EBP + 0x158]               ; 0041d41e
    PUSH EAX                            ; 0041d424
    LEA ESI,[ESP + 0x10]                ; 0041d425
    LEA EDI,[ESP + 0x1c]                ; 0041d429
    CALL FUN_00569130                   ; 0041d42d
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x10]                ; 0041d432
    LEA EAX,[ESP + 0x1c]                ; 0041d436
    ADD ESP,0x8                         ; 0041d43a
    LEA EDX,[EBX + 0xc]                 ; 0041d43d
    MOVSD ES:EDI,ESI                    ; 0041d440
    MOVSD ES:EDI,ESI                    ; 0041d441
    MOVSD ES:EDI,ESI                    ; 0041d442
    CMP EDX,EAX                         ; 0041d443
    JZ 0x0041d45b                       ; 0041d445
        ;   XREF to: 0041d45b (CONDITIONAL_JUMP)  ; LAB_0041d45b
    MOV EAX,dword ptr [ESP + 0x14]      ; 0041d447
    MOV dword ptr [EDX],EAX             ; 0041d44b
    MOV EAX,dword ptr [ESP + 0x18]      ; 0041d44d
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d451
    MOV EAX,dword ptr [ESP + 0x1c]      ; 0041d454
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d458
    MOV EDI,dword ptr [0x007c5008]      ; 0041d45b | DAT_007c5008
        ;   Label: LAB_0041d45b
    PUSH EDI                            ; 0041d461
    LEA EAX,[EBP + 0x158]               ; 0041d462
    PUSH EAX                            ; 0041d468
    LEA ESI,[ESP + 0x7c]                ; 0041d469
    LEA EDI,[ESP + 0x28]                ; 0041d46d
    CALL FUN_00569130                   ; 0041d471
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x7c]                ; 0041d476
    LEA EAX,[ESP + 0x28]                ; 0041d47a
    ADD ESP,0x8                         ; 0041d47e
    LEA EDX,[EBX + 0x18]                ; 0041d481
    MOVSD ES:EDI,ESI                    ; 0041d484
    MOVSD ES:EDI,ESI                    ; 0041d485
    MOVSD ES:EDI,ESI                    ; 0041d486
    CMP EDX,EAX                         ; 0041d487
    JZ 0x0041d49f                       ; 0041d489
        ;   XREF to: 0041d49f (CONDITIONAL_JUMP)  ; LAB_0041d49f
    MOV EAX,dword ptr [ESP + 0x20]      ; 0041d48b
    MOV dword ptr [EDX],EAX             ; 0041d48f
    MOV EAX,dword ptr [ESP + 0x24]      ; 0041d491
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d495
    MOV EAX,dword ptr [ESP + 0x28]      ; 0041d498
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d49c
    MOV EAX,[0x007c5014]                ; 0041d49f | DAT_007c5014
        ;   Label: LAB_0041d49f
    PUSH EAX                            ; 0041d4a4
    LEA EAX,[EBP + 0x158]               ; 0041d4a5
    PUSH EAX                            ; 0041d4ab
    LEA ESI,[ESP + 0x40]                ; 0041d4ac
    LEA EDI,[ESP + 0x64]                ; 0041d4b0
    CALL FUN_00569130                   ; 0041d4b4
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x40]                ; 0041d4b9
    LEA EAX,[ESP + 0x64]                ; 0041d4bd
    ADD ESP,0x8                         ; 0041d4c1
    LEA EDX,[EBX + 0x24]                ; 0041d4c4
    MOVSD ES:EDI,ESI                    ; 0041d4c7
    MOVSD ES:EDI,ESI                    ; 0041d4c8
    MOVSD ES:EDI,ESI                    ; 0041d4c9
    CMP EDX,EAX                         ; 0041d4ca
    JZ 0x0041d4e2                       ; 0041d4cc
        ;   XREF to: 0041d4e2 (CONDITIONAL_JUMP)  ; LAB_0041d4e2
    MOV EAX,dword ptr [ESP + 0x5c]      ; 0041d4ce
    MOV dword ptr [EDX],EAX             ; 0041d4d2
    MOV EAX,dword ptr [ESP + 0x60]      ; 0041d4d4
    MOV dword ptr [EDX + 0x4],EAX       ; 0041d4d8
    MOV EAX,dword ptr [ESP + 0x64]      ; 0041d4db
    MOV dword ptr [EDX + 0x8],EAX       ; 0041d4df
    MOV EDX,dword ptr [0x007c5018]      ; 0041d4e2 | DAT_007c5018
        ;   Label: LAB_0041d4e2
    PUSH EDX                            ; 0041d4e8
    ADD EBP,0x158                       ; 0041d4e9
    LEA ESI,[ESP + 0x6c]                ; 0041d4ef
    PUSH EBP                            ; 0041d4f3
    LEA EDI,[ESP + 0x34]                ; 0041d4f4
    ADD EBX,0x30                        ; 0041d4f8
    CALL FUN_00569130                   ; 0041d4fb
        ;   XREF to: 00569130 (UNCONDITIONAL_CALL)  ; undefined FUN_00569130()
    LEA ESI,[ESP + 0x70]                ; 0041d500
    ADD ESP,0x8                         ; 0041d504
    LEA EAX,[ESP + 0x2c]                ; 0041d507
    MOVSD ES:EDI,ESI                    ; 0041d50b
    MOVSD ES:EDI,ESI                    ; 0041d50c
    MOVSD ES:EDI,ESI                    ; 0041d50d
    CMP EBX,EAX                         ; 0041d50e
    JZ 0x0041d526                       ; 0041d510
        ;   XREF to: 0041d526 (CONDITIONAL_JUMP)  ; LAB_0041d526
    MOV EAX,dword ptr [ESP + 0x2c]      ; 0041d512
    MOV dword ptr [EBX],EAX             ; 0041d516
    MOV EAX,dword ptr [ESP + 0x30]      ; 0041d518
    MOV dword ptr [EBX + 0x4],EAX       ; 0041d51c
    MOV EAX,dword ptr [ESP + 0x34]      ; 0041d51f
    MOV dword ptr [EBX + 0x8],EAX       ; 0041d523
    MOV EAX,0x5                         ; 0041d526
        ;   Label: LAB_0041d526
    POP ESI                             ; 0041d52b
    POP EDI                             ; 0041d52c
    ADD ESP,0x78                        ; 0041d52d
    POP EBP                             ; 0041d530
    POP EBX                             ; 0041d531
    RET                                 ; 0041d532

