; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2bb0(int param_1,undefined4 param_2)
;
;
; XREF[3]:
;   FUN_004a2ad0 at 004a2b11
;   FUN_004a2b30 at 004a2b9e
;   FUN_004a2cc0 at 004a2e83
;
; Called Functions:
;   FUN_004a26e0
;   FUN_004a31c0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2bb0
        ;   Label: FUN_004a2bb0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004a2bb1
    PUSH EBX                            ; 004a2bb5
    CALL FUN_004a31c0                   ; 004a2bb6
        ;   XREF to: 004a31c0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a31c0()
    ADD ESP,0x4                         ; 004a2bbb
    MOV EDX,dword ptr [ESP + 0xc]       ; 004a2bbe
    PUSH EDX                            ; 004a2bc2
    MOV EDX,dword ptr [EBX + 0x10]      ; 004a2bc3
    LEA EAX,[EDX*0x4 + 0x0]             ; 004a2bc6
    ADD EAX,EDX                         ; 004a2bcd
    SHL EAX,0x4                         ; 004a2bcf
    ADD EAX,EDX                         ; 004a2bd2
    SHL EAX,0x2                         ; 004a2bd4
    MOV EDX,dword ptr [EBX + 0x3c]      ; 004a2bd7
    ADD EAX,EDX                         ; 004a2bda
    PUSH EAX                            ; 004a2bdc
    CALL FUN_004a26e0                   ; 004a2bdd
        ;   XREF to: 004a26e0 (UNCONDITIONAL_CALL)  ; undefined FUN_004a26e0()
    ADD ESP,0x8                         ; 004a2be2
    POP EBX                             ; 004a2be5
    RET                                 ; 004a2be6

