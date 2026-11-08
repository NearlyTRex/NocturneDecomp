; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0056acc0(undefined4 param_1)
;
;
; XREF[1]:
;   FUN_004b6f30 at 004b76ec
;
; Referenced Globals:
;   undefined4 DAT_02cfd0d0
;
; Called Functions:
;   FUN_0056a700
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 0056acc0
        ;   Label: FUN_0056acc0
    PUSH EDX                            ; 0056acc4
    MOV ECX,dword ptr [0x02cfd0d0]      ; 0056acc5 | DAT_02cfd0d0
    PUSH ECX                            ; 0056accb
    CALL FUN_0056a700                   ; 0056accc
        ;   XREF to: 0056a700 (UNCONDITIONAL_CALL)  ; undefined FUN_0056a700()
    ADD ESP,0x8                         ; 0056acd1
    RET                                 ; 0056acd4

