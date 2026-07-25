; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0041a570(void)
;
;
; XREF[1]:
;   FUN_004dcee0 at 004dcefa
;
; Referenced Globals:
;   TerminatedCString s_engine_boss_c_005795cc
;   TerminatedCString s_modelStruct_not_supporte_005795dd
;   undefined4 DAT_01cc4800
;   undefined4 DAT_01cc4804
;
; Called Functions:
;   FUN_004c8440
;
; *****************************************************************************

section .text

    MOV EDX,0x5795cc                    ; 0041a570 | = "..\\engine\\boss.c"
        ;   Label: FUN_0041a570
    MOV ECX,0x3f                        ; 0041a575
    PUSH 0x5795dd                       ; 0041a57a | = "modelStruct not supported"
    MOV dword ptr [0x01cc4800],EDX      ; 0041a57f | DAT_01cc4800
    MOV dword ptr [0x01cc4804],ECX      ; 0041a585 | DAT_01cc4804
    CALL FUN_004c8440                   ; 0041a58b
        ;   XREF to: 004c8440 (UNCONDITIONAL_CALL)  ; undefined FUN_004c8440()
    ADD ESP,0x4                         ; 0041a590
    RET                                 ; 0041a593

