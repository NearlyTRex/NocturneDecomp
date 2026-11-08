; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004253d0(undefined4 param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_005fc5a0
;
; Called Functions:
;   FUN_004a41d0
;   FUN_004a5ad0
;   FUN_00556230
;   FUN_0057af40
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004253d0
        ;   Label: FUN_004253d0
    PUSH EDX                            ; 004253d4
    CALL FUN_0057af40                   ; 004253d5
        ;   XREF to: 0057af40 (UNCONDITIONAL_CALL)  ; undefined FUN_0057af40()
    ADD ESP,0x4                         ; 004253da
    PUSH 0x5b793a                       ; 004253dd
    CALL FUN_00556230                   ; 004253e2
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004253e7
    PUSH 0x5b7948                       ; 004253ea
    CALL FUN_00556230                   ; 004253ef
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 004253f4
    PUSH 0x5b795c                       ; 004253f7
    CALL FUN_00556230                   ; 004253fc
        ;   XREF to: 00556230 (UNCONDITIONAL_CALL)  ; undefined FUN_00556230()
    ADD ESP,0x4                         ; 00425401
    PUSH 0x0                            ; 00425404
    MOV ECX,dword ptr [0x005fc5a0]      ; 00425406 | DAT_005fc5a0
    PUSH ECX                            ; 0042540c
    CALL FUN_004a41d0                   ; 0042540d
        ;   XREF to: 004a41d0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a41d0()
    ADD ESP,0x8                         ; 00425412
    PUSH 0x0                            ; 00425415
    CALL FUN_004a5ad0                   ; 00425417
        ;   XREF to: 004a5ad0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a5ad0()
    ADD ESP,0x4                         ; 0042541c
    RET                                 ; 0042541f

