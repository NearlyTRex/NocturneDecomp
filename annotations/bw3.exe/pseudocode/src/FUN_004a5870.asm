; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a5870(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_004a42c0
;   FUN_004a5ad0
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004a5870
        ;   Label: FUN_004a5870
    PUSH EDX                            ; 004a5874
    CALL FUN_0057af40                   ; 004a5875
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 004a587a
    PUSH 0x5c0b5f                       ; 004a587d
    CALL FUN_00556230                   ; 004a5882
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a5887
    PUSH 0x5c0b6d                       ; 004a588a
    CALL FUN_00556230                   ; 004a588f
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a5894
    PUSH 0x5c0b7e                       ; 004a5897
    CALL FUN_00556230                   ; 004a589c
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004a58a1
    PUSH 0x0                            ; 004a58a4
    MOV ECX,dword ptr [0x005fc5a0]      ; 004a58a6 | DAT_005fc5a0
    PUSH ECX                            ; 004a58ac
    CALL FUN_004a42c0                   ; 004a58ad
        ;   XREF to: 004a42c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a42c0()
    ADD ESP,0x8                         ; 004a58b2
    PUSH 0x0                            ; 004a58b5
    CALL FUN_004a5ad0                   ; 004a58b7
        ;   XREF to: 004a5ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a5ad0()
    ADD ESP,0x4                         ; 004a58bc
    RET                                 ; 004a58bf

