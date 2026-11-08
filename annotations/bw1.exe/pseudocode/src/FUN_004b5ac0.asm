; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004b5ac0(void)
;
;
; XREF[1]:
;   FUN_004d5e40 at 004d5e57
;
; Referenced Globals:
;   undefined4 DAT_00612560
;   undefined4 DAT_0061c3d4
;   undefined4 DAT_0061c3ec
;   undefined4 DAT_0061c404
;   undefined4 DAT_01bc120c
;
; Called Functions:
;   FUN_00484f00
;   FUN_004acad0
;   FUN_004ae2a0
;   FUN_004aefb0
;   FUN_004af120
;   FUN_004af5e0
;   FUN_004b1630
;   FUN_004b1f80
;   FUN_004b2af0
;   FUN_004b3450
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004b5ac0
        ;   Label: FUN_004b5ac0
    PUSH 0x61c3d4                       ; 004b5ac1 | DAT_0061c3d4
    MOV EDX,dword ptr [0x00612560]      ; 004b5ac6 | DAT_00612560
    PUSH EDX                            ; 004b5acc | DAT_01bc120c
    CALL FUN_00484f00                   ; 004b5acd
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 004b5ad2
    PUSH 0x61c3ec                       ; 004b5ad5 | DAT_0061c3ec
    MOV ECX,dword ptr [0x00612560]      ; 004b5ada | DAT_00612560
    PUSH ECX                            ; 004b5ae0 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004b5ae1
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 004b5ae6
    PUSH 0x61c404                       ; 004b5ae9 | DAT_0061c404
    MOV EBX,dword ptr [0x00612560]      ; 004b5aee | DAT_00612560
    PUSH EBX                            ; 004b5af4 | DAT_01bc120c
    CALL FUN_00484f00                   ; 004b5af5
        ;   XREF to: 00484f00 (UNCONDITIONAL_CALL)  ; undefined FUN_00484f00()
    ADD ESP,0x8                         ; 004b5afa
    CALL FUN_004acad0                   ; 004b5afd
        ;   XREF to: 004acad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004acad0()
    CALL FUN_004ae2a0                   ; 004b5b02
        ;   XREF to: 004ae2a0 (UNCONDITIONAL_CALL)  ; undefined FUN_004ae2a0()
    CALL FUN_004aefb0                   ; 004b5b07
        ;   XREF to: 004aefb0 (UNCONDITIONAL_CALL)  ; undefined FUN_004aefb0()
    CALL FUN_004af120                   ; 004b5b0c
        ;   XREF to: 004af120 (UNCONDITIONAL_CALL)  ; undefined FUN_004af120()
    CALL FUN_004b1f80                   ; 004b5b11
        ;   XREF to: 004b1f80 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1f80()
    CALL FUN_004b2af0                   ; 004b5b16
        ;   XREF to: 004b2af0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b2af0()
    CALL FUN_004af5e0                   ; 004b5b1b
        ;   XREF to: 004af5e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004af5e0()
    CALL FUN_004b3450                   ; 004b5b20
        ;   XREF to: 004b3450 (UNCONDITIONAL_CALL)  ; undefined FUN_004b3450()
    CALL FUN_004b1630                   ; 004b5b25
        ;   XREF to: 004b1630 (UNCONDITIONAL_CALL)  ; undefined FUN_004b1630()
    POP EBX                             ; 004b5b2a
    RET                                 ; 004b5b2b

