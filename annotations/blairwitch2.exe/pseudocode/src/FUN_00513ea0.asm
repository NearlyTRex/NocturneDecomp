; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00513ea0(undefined4 param_1)
;
;
; XREF[11]:
;   FUN_00420000 at 0042015f
;   FUN_004203a0 at 004206cf
;   FUN_00423000 at 00423443
;   FUN_00435e30 at 00436332
;   FUN_004be8a0 at 004bf2ed
;   FUN_004c1980 at 004c1b20
;   FUN_004ccff0 at 004cd551
;   FUN_004d5950 at 004d5fbc
;   FUN_0051f490 at 0051f6d9
;   FUN_00570c80 at 005712ec
;   ... and 1 more
;
; Called Functions:
;   FUN_00513d30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00513ea0
        ;   Label: FUN_00513ea0
    PUSH EDX                            ; 00513ea4
    CALL FUN_00513d30                   ; 00513ea5
        ;   XREF to: 00513d30 (UNCONDITIONAL_CALL)  ; undefined FUN_00513d30()
    ADD ESP,0x4                         ; 00513eaa
    RET                                 ; 00513ead

