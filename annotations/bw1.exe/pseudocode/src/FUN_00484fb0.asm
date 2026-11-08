; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00484fb0(undefined4 param_1,undefined4 param_2,undefined4 param_3)
;
;
; XREF[1]:
;   FUN_0044fff0 at 004506ce
;
; Called Functions:
;   FUN_00597c90
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0xc]       ; 00484fb0
        ;   Label: FUN_00484fb0
    PUSH EDX                            ; 00484fb4
    MOV ECX,dword ptr [ESP + 0xc]       ; 00484fb5
    PUSH ECX                            ; 00484fb9
    CALL FUN_00597c90                   ; 00484fba
        ;   XREF to: 00597c90 (UNCONDITIONAL_CALL)  ; undefined FUN_00597c90()
    ADD ESP,0x8                         ; 00484fbf
    RET                                 ; 00484fc2

