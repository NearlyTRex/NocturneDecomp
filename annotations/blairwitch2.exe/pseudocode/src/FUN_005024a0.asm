; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005024a0(undefined4 param_1,float param_2)
;
;
; XREF[5]:
;   FUN_004ebf10 at 004ec023
;   FUN_004ecc70 at 004ecd08
;   FUN_004ed260 at 004ed2fd
;   FUN_004ee1a0 at 004ee239
;   FUN_004ee3f0 at 004ee51d
;
; Referenced Globals:
;   undefined4 DAT_005df2dd
;   undefined4 DAT_005df2e5
;   undefined4 DAT_005df2ed
;   undefined4 DAT_01c2a370
;   undefined4 DAT_01d1cdbc
;   undefined4 DAT_01d1cdc0
;   undefined4 DAT_01d1cdc4
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 005024a0
        ;   Label: FUN_005024a0
    FLD float ptr [ESP + 0x10]          ; 005024a3
    FMUL double ptr [0x005df2dd]        ; 005024a7 | DAT_005df2dd
    FADD float ptr [0x01d1cdc4]         ; 005024ad | DAT_01d1cdc4
    FST float ptr [0x01d1cdc4]          ; 005024b3 | DAT_01d1cdc4
    FCOMP double ptr [0x005df2e5]       ; 005024b9 | DAT_005df2e5
    FNSTSW AX                           ; 005024bf
    SAHF                                ; 005024c1
    JNC 0x005024f4                      ; 005024c2
        ;   XREF to: 005024f4 (CONDITIONAL_JUMP)  ; LAB_005024f4
    MOV EAX,[0x01c2a370]                ; 005024c4 | DAT_01c2a370
        ;   Label: LAB_005024c4
    MOV EDX,dword ptr [0x01d1cdbc]      ; 005024c9 | DAT_01d1cdbc
    SHL EAX,0x5                         ; 005024cf
    ADD EDX,EAX                         ; 005024d2
    MOV EAX,[0x01c2a370]                ; 005024d4 | DAT_01c2a370
    MOV ECX,dword ptr [0x01d1cdc0]      ; 005024d9 | DAT_01d1cdc0
    SHL EAX,0x4                         ; 005024df
    ADD ECX,EAX                         ; 005024e2
    MOV dword ptr [0x01d1cdbc],EDX      ; 005024e4 | DAT_01d1cdbc
    MOV dword ptr [0x01d1cdc0],ECX      ; 005024ea | DAT_01d1cdc0
    ADD ESP,0x8                         ; 005024f0
    RET                                 ; 005024f3
    FLD float ptr [0x01d1cdc4]          ; 005024f4 | DAT_01d1cdc4
        ;   Label: LAB_005024f4
    FADD float ptr [0x005df2ed]         ; 005024fa | DAT_005df2ed
    FSTP float ptr [0x01d1cdc4]         ; 00502500 | DAT_01d1cdc4
    JMP 0x005024c4                      ; 00502506
        ;   XREF to: 005024c4 (UNCONDITIONAL_JUMP)  ; LAB_005024c4

