; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a5e0(void)
;
;
; XREF[1]:
;   FUN_004dd690 at 004dd6ea
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_00579622
;   TerminatedCString s_modelStruct_not_supporte_00579633
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x579622                    ; 0041a5e0 | = "..\\engine\\boss.c"
        ;   Label: FUN_0041a5e0
    MOV ECX,0x49                        ; 0041a5e5
    PUSH 0x579633                       ; 0041a5ea | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a5ef | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041a5f5 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0041a5fb
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0041a600
    RET                                 ; 0041a603

