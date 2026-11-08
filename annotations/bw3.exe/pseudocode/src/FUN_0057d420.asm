; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057d420(undefined4 param_1,int param_2)
;
;
; XREF[1]:
;   FUN_00568c10 at 00568c41
;
; Referenced Globals:
;   undefined4 DAT_005f2afc
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_0046e5e0
;   FUN_004a4130
;   FUN_00556230
;
; *****************************************************************************

section .text

    CMP dword ptr [ESP + 0x8],0x5       ; 0057d420
        ;   Label: FUN_0057d420
    JZ 0x0057d428                       ; 0057d425
        ;   XREF to: 0057d428 (CONDITIONAL_JUMP)  ; LAB_0057d428
    RET                                 ; 0057d427
    PUSH ESI                            ; 0057d428
        ;   Label: LAB_0057d428
    PUSH EBX                            ; 0057d429
    PUSH 0x6071f4                       ; 0057d42a
    MOV ECX,dword ptr [0x005f2afc]      ; 0057d42f | DAT_005f2afc
    PUSH ECX                            ; 0057d435
    CALL FUN_0046e5e0                   ; 0057d436
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0057d43b
    PUSH 0x60720c                       ; 0057d43e
    MOV EBX,dword ptr [0x005f2afc]      ; 0057d443 | DAT_005f2afc
    PUSH EBX                            ; 0057d449
    CALL FUN_0046e5e0                   ; 0057d44a
        ;   XREF to: 0046e5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0046e5e0()
    ADD ESP,0x8                         ; 0057d44f
    PUSH 0x5d79ab                       ; 0057d452
    CALL FUN_00556230                   ; 0057d457
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d45c
    PUSH 0x5d79b4                       ; 0057d45f
    CALL FUN_00556230                   ; 0057d464
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d469
    PUSH 0x5d79bf                       ; 0057d46c
    CALL FUN_00556230                   ; 0057d471
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d476
    PUSH 0x5d79ca                       ; 0057d479
    CALL FUN_00556230                   ; 0057d47e
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d483
    PUSH 0x5d79d5                       ; 0057d486
    CALL FUN_00556230                   ; 0057d48b
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d490
    PUSH 0x5d79e0                       ; 0057d493
    CALL FUN_00556230                   ; 0057d498
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0057d49d
    PUSH 0x1                            ; 0057d4a0
    MOV ESI,dword ptr [0x005fc5a0]      ; 0057d4a2 | DAT_005fc5a0
    PUSH ESI                            ; 0057d4a8
    CALL FUN_004a4130                   ; 0057d4a9
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; undefined FUN_004a4130()
    ADD ESP,0x8                         ; 0057d4ae
    POP EBX                             ; 0057d4b1
    POP ESI                             ; 0057d4b2
    RET                                 ; 0057d4b3

