; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004e3a40(int param_1)
;
;
; XREF[9]:
;   FUN_00409f20 at 0040a4e1
;   FUN_00449a50 at 0044a04c
;   FUN_0049e1a0 at 0049e916
;   FUN_004e8630 at 004e8e05
;   FUN_00540080 at 00540725
;   FUN_0054fc20 at 0054ffed
;   FUN_00561760 at 00561ed9
;   FUN_00598420 at 00598c3a
;   FUN_005a3870 at 005a3da7
;
; Referenced Globals:
;   undefined4 DAT_0061b4d0
;
; Called Functions:
;   FUN_004a6c30
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004e3a40
        ;   Label: FUN_004e3a40
    ADD EAX,0x30c                       ; 004e3a44
    PUSH EAX                            ; 004e3a49
    MOV EDX,dword ptr [0x0061b4d0]      ; 004e3a4a | DAT_0061b4d0
    PUSH EDX                            ; 004e3a50
    CALL FUN_004a6c30                   ; 004e3a51
        ;   XREF to: 004a6c30 (UNCONDITIONAL_CALL)  ; undefined FUN_004a6c30()
    ADD ESP,0x8                         ; 004e3a56
    RET                                 ; 004e3a59

