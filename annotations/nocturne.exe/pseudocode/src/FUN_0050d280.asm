; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0050d280(void)
;
;
; XREF[1]:
;   FUN_004a3660 at 004a3668
;
; Referenced Globals:
;   undefined4 DAT_005c11ec
;   undefined4 DAT_02dd1210
;
; Called Functions:
;   FUN_004504e0
;   FUN_005507d0
;
; *****************************************************************************

section .text

    CALL FUN_004504e0                   ; 0050d280
        ;   XREF to: 004504e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004504e0()
        ;   Label: FUN_0050d280
    MOV EDX,dword ptr [0x005c11ec]      ; 0050d285 | DAT_005c11ec
    PUSH EDX                            ; 0050d28b | DAT_02dd1210
    CALL FUN_005507d0                   ; 0050d28c
        ;   XREF to: 005507d0 (UNCONDITIONAL_CALL)  ; undefined FUN_005507d0()
    ADD ESP,0x4                         ; 0050d291
    RET                                 ; 0050d294

