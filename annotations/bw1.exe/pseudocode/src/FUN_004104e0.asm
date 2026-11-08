; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004104e0(undefined4 param_1,undefined4 param_2)
;
;
; Called Functions:
;   FUN_00410640
;   FUN_005ad770
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004104e0
        ;   Label: FUN_004104e0
    PUSH EDX                            ; 004104e4
    CALL FUN_00410640                   ; 004104e5
        ;   XREF to: 00410640 (UNCONDITIONAL_CALL)  ; undefined FUN_00410640()
    ADD ESP,0x4                         ; 004104ea
    MOV ECX,dword ptr [ESP + 0x4]       ; 004104ed
    PUSH dword ptr [ESP + 0x8]          ; 004104f1
    PUSH ECX                            ; 004104f5
    CALL FUN_005ad770                   ; 004104f6
        ;   XREF to: 005ad770 (UNCONDITIONAL_CALL)  ; undefined FUN_005ad770()
    ADD ESP,0x8                         ; 004104fb
    RET                                 ; 004104fe

