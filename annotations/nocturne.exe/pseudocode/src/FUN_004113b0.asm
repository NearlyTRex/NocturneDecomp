; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004113b0(undefined4 param_1)
;
;
; Referenced Globals:
;   string s_baron.dfm_005786c8
;
; Called Functions:
;   FUN_0051f570
;   FUN_00553f10
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004113b0
        ;   Label: FUN_004113b0
    PUSH EDX                            ; 004113b4
    CALL FUN_00553f10                   ; 004113b5
        ;   XREF to: 00553f10 (UNCONDITIONAL_CALL)  ; undefined FUN_00553f10()
    ADD ESP,0x4                         ; 004113ba
    PUSH 0x5786c8                       ; 004113bd | = "baron.dfm"
    CALL FUN_0051f570                   ; 004113c2
        ;   XREF to: 0051f570 (UNCONDITIONAL_CALL)  ; undefined FUN_0051f570()
    ADD ESP,0x4                         ; 004113c7
    RET                                 ; 004113ca

