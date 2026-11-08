; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0048b690(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_0042f280
;   FUN_004a4130
;   FUN_004a41d0
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0048b690
        ;   Label: FUN_0048b690
    MOV EDX,dword ptr [ESP + 0x8]       ; 0048b691
    PUSH EDX                            ; 0048b695
    CALL FUN_0057af40                   ; 0048b696
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 0048b69b
    PUSH 0x5bdd9a                       ; 0048b69e
    CALL FUN_00556230                   ; 0048b6a3
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0048b6a8
    PUSH 0x5bdda8                       ; 0048b6ab
    CALL FUN_00556230                   ; 0048b6b0
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 0048b6b5
    PUSH 0x4                            ; 0048b6b8
    MOV ECX,dword ptr [0x005fc5a0]      ; 0048b6ba | DAT_005fc5a0
    PUSH ECX                            ; 0048b6c0
    CALL FUN_004a4130                   ; 0048b6c1
        ;   XREF to: 004a4130 (UNCONDITIONAL_CALL)  ; undefined FUN_004a4130()
    ADD ESP,0x8                         ; 0048b6c6
    PUSH 0x2                            ; 0048b6c9
    MOV EBX,dword ptr [0x005fc5a0]      ; 0048b6cb | DAT_005fc5a0
    PUSH EBX                            ; 0048b6d1
    CALL FUN_004a41d0                   ; 0048b6d2
        ;   XREF to: 004a41d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a41d0()
    ADD ESP,0x8                         ; 0048b6d7
    PUSH 0x2                            ; 0048b6da
    CALL FUN_0042f280                   ; 0048b6dc
        ;   XREF to: 0042f280 (UNCONDITIONAL_CALL)  ; undefined FUN_0042f280()
    ADD ESP,0x4                         ; 0048b6e1
    POP EBX                             ; 0048b6e4
    RET                                 ; 0048b6e5

