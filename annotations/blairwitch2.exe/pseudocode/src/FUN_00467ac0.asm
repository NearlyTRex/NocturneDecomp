; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00467ac0(int *param_1)
;
;
; XREF[1]:
;   FUN_00521af0 at 00521b45
;
; Called Functions:
;   FUN_00467920
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 00467ac0
        ;   Label: FUN_00467ac0
    MOV EAX,dword ptr [EDX + 0x4]       ; 00467ac4
    DEC EAX                             ; 00467ac7
    PUSH EAX                            ; 00467ac8
    MOV EAX,dword ptr [EDX]             ; 00467ac9
    DEC EAX                             ; 00467acb
    PUSH EAX                            ; 00467acc
    PUSH 0x0                            ; 00467acd
    PUSH 0x0                            ; 00467acf
    PUSH EDX                            ; 00467ad1
    CALL FUN_00467920                   ; 00467ad2
        ;   XREF to: 00467920 (UNCONDITIONAL_CALL)  ; undefined FUN_00467920()
    ADD ESP,0x14                        ; 00467ad7
    RET                                 ; 00467ada

