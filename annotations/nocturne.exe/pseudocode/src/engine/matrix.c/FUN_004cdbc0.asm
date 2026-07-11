; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004cdbc0(void)
;
;
; XREF[1]:
;   thunk_FUN_004cdbc0 at 00460bf0
;
; Referenced Globals:
;   string s_..\\engine\\matrix.c_00588233
;   string s_Matrix_unbalance2_00588246
;   undefined4 DAT_01c039b8
;   undefined4 DAT_01c039bc
;   undefined4 DAT_01c039c0
;   undefined4 DAT_01c039dc
;   undefined4 DAT_01c039e0
;   undefined4 DAT_01c039e4
;   undefined4 DAT_01c039e8
;   undefined4 DAT_01c039ec
;   undefined4 DAT_01c039f0
;   undefined4 DAT_01c039f4
;   undefined4 DAT_01c039f8
;   undefined4 DAT_01c039fc
;   undefined4 DAT_01c03a00
;   ... and 5 more
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01cc5174]      ; 004cdbc0 | DAT_01cc5174
        ;   Label: FUN_004cdbc0
    DEC EDX                             ; 004cdbc6
    MOV dword ptr [0x01cc5174],EDX      ; 004cdbc7 | DAT_01cc5174
    TEST EDX,EDX                        ; 004cdbcd
    JL 0x004cdc9d                       ; 004cdbcf
        ;   XREF to: 004cdc9d (CONDITIONAL_JUMP)  ; LAB_004cdc9d
    MOV EAX,[0x01cc5174]                ; 004cdbd5 | DAT_01cc5174
        ;   Label: LAB_004cdbd5
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5178] ; 004cdbda
    MOV dword ptr [0x01c039e8],EDX      ; 004cdbe1 | DAT_01c039e8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51a0] ; 004cdbe7
    MOV dword ptr [0x01c039ec],EDX      ; 004cdbee | DAT_01c039ec
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51c8] ; 004cdbf4
    MOV dword ptr [0x01c039f0],EDX      ; 004cdbfb | DAT_01c039f0
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc51f0] ; 004cdc01
    MOV dword ptr [0x01c039f4],EDX      ; 004cdc08 | DAT_01c039f4
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5218] ; 004cdc0e
    MOV dword ptr [0x01c039f8],EDX      ; 004cdc15 | DAT_01c039f8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5240] ; 004cdc1b
    MOV dword ptr [0x01c039fc],EDX      ; 004cdc22 | DAT_01c039fc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5268] ; 004cdc28
    MOV dword ptr [0x01c03a00],EDX      ; 004cdc2f | DAT_01c03a00
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5290] ; 004cdc35
    MOV dword ptr [0x01c03a04],EDX      ; 004cdc3c | DAT_01c03a04
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc52b8] ; 004cdc42
    MOV dword ptr [0x01c03a08],EDX      ; 004cdc49 | DAT_01c03a08
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc52e0] ; 004cdc4f
    MOV dword ptr [0x01c039b8],EDX      ; 004cdc56 | DAT_01c039b8
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5308] ; 004cdc5c
    MOV dword ptr [0x01c039bc],EDX      ; 004cdc63 | DAT_01c039bc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5330] ; 004cdc69
    MOV dword ptr [0x01c039c0],EDX      ; 004cdc70 | DAT_01c039c0
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5358] ; 004cdc76
    MOV dword ptr [0x01c039dc],EDX      ; 004cdc7d | DAT_01c039dc
    MOV EDX,dword ptr [EAX*0x4 + 0x1cc5380] ; 004cdc83
    MOV EAX,dword ptr [EAX*0x4 + 0x1cc53a8] ; 004cdc8a
    MOV dword ptr [0x01c039e0],EDX      ; 004cdc91 | DAT_01c039e0
    MOV [0x01c039e4],EAX                ; 004cdc97 | DAT_01c039e4
    RET                                 ; 004cdc9c
    PUSH ESI                            ; 004cdc9d
        ;   Label: LAB_004cdc9d
    PUSH EBX                            ; 004cdc9e
    MOV EBX,0x588233                    ; 004cdc9f | = "..\\engine\\matrix.c"
    MOV ESI,0x355                       ; 004cdca4
    PUSH 0x588246                       ; 004cdca9 | = "Matrix unbalance2"
    MOV dword ptr [0x01cc4800],EBX      ; 004cdcae | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ESI      ; 004cdcb4 | DAT_01cc4804
    CALL FUN_004c8440                   ; 004cdcba
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 004cdcbf
    POP EBX                             ; 004cdcc2
    POP ESI                             ; 004cdcc3
    JMP 0x004cdbd5                      ; 004cdcc4
        ;   XREF to: 004cdbd5 (UNCONDITIONAL_JUMP)  ; LAB_004cdbd5

