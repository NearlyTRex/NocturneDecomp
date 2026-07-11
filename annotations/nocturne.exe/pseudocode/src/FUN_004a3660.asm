; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a3660(void)
;
;
; XREF[1]:
;   FUN_0049da10 at 0049dd40
;
; Referenced Globals:
;   undefined4 DAT_005b80f0
;   undefined4 DAT_005b96c4
;   undefined4 DAT_005be368
;   undefined4 DAT_01e57284
;
; Called Functions:
;   FUN_0048af70
;   FUN_004b04b0
;   FUN_004befa0
;   FUN_0050d280
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a3660
        ;   Label: FUN_004a3660
    MOV EDX,dword ptr [0x005be368]      ; 004a3661 | DAT_005be368
    PUSH EDX                            ; 004a3667 | DAT_01e57284
    CALL FUN_0050d280                   ; 004a3668
        ;   XREF to: 0050d280 (UNCONDITIONAL_CALL)  ; undefined FUN_0050d280()
    ADD ESP,0x4                         ; 004a366d
    MOV ECX,dword ptr [0x005b80f0]      ; 004a3670 | DAT_005b80f0
    PUSH ECX                            ; 004a3676
    CALL FUN_0048af70                   ; 004a3677
        ;   XREF to: 0048af70 (UNCONDITIONAL_CALL)  ; undefined FUN_0048af70()
    ADD ESP,0x4                         ; 004a367c
    MOV EBX,dword ptr [0x005b96c4]      ; 004a367f | DAT_005b96c4
    PUSH EBX                            ; 004a3685
    CALL FUN_004b04b0                   ; 004a3686
        ;   XREF to: 004b04b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004b04b0()
    ADD ESP,0x4                         ; 004a368b
    CALL FUN_004befa0                   ; 004a368e
        ;   XREF to: 004befa0 (UNCONDITIONAL_CALL)  ; undefined FUN_004befa0()
    POP EBX                             ; 004a3693
    RET                                 ; 004a3694

