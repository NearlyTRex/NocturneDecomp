; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004673b0(int *param_1)
;
;
; XREF[1]:
;   FUN_00521af0 at 00521c89
;
; Called Functions:
;   FUN_00467350
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [ESP + 0x4]       ; 004673b0
        ;   Label: FUN_004673b0
    MOV EAX,dword ptr [EDX + 0x4]       ; 004673b4
    DEC EAX                             ; 004673b7
    PUSH EAX                            ; 004673b8
    MOV EAX,dword ptr [EDX]             ; 004673b9
    DEC EAX                             ; 004673bb
    PUSH EAX                            ; 004673bc
    PUSH 0x0                            ; 004673bd
    PUSH 0x0                            ; 004673bf
    PUSH EDX                            ; 004673c1
    CALL FUN_00467350                   ; 004673c2
        ;   XREF to: 00467350 (UNCONDITIONAL_CALL)  ; undefined FUN_00467350()
    ADD ESP,0x14                        ; 004673c7
    RET                                 ; 004673ca

