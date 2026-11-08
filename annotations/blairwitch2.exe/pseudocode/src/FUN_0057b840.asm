; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0057b840(void)
;
;
; XREF[2]:
;   FUN_0052c090 at 0052c0c8
;   FUN_0052c0e0 at 0052ce81
;
; Referenced Globals:
;   undefined4 DAT_00617a08
;   undefined4 DAT_02653650
;
; Called Functions:
;   FUN_004caa60
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x00617a08]      ; 0057b840 | DAT_00617a08
        ;   Label: FUN_0057b840
    PUSH EDX                            ; 0057b846
    CALL FUN_004caa60                   ; 0057b847
        ;   XREF to: 004caa60 (UNCONDITIONAL_CALL)  ; undefined FUN_004caa60()
    XOR ECX,ECX                         ; 0057b84c
    ADD ESP,0x4                         ; 0057b84e
    MOV dword ptr [0x02653650],ECX      ; 0057b851 | DAT_02653650
    RET                                 ; 0057b857

