; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053cca0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_00489600 at 0048970a
;
; Referenced Globals:
;   undefined4 DAT_0203b37c
;
; Called Functions:
;   FUN_00477530
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 0053cca0
        ;   Label: FUN_0053cca0
    PUSH EDX                            ; 0053cca4
    MOV ECX,dword ptr [ESP + 0xc]       ; 0053cca5
    PUSH ECX                            ; 0053cca9
    PUSH 0x203b37c                      ; 0053ccaa | DAT_0203b37c
    CALL FUN_00477530                   ; 0053ccaf
        ;   XREF to: 00477530 (UNCONDITIONAL_CALL)  ; undefined FUN_00477530()
    ADD ESP,0xc                         ; 0053ccb4
    RET                                 ; 0053ccb7

