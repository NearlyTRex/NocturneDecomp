; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0043b7c0(undefined4 *param_1)
;
;
; XREF[4]:
;   FUN_0043b5f0 at 0043b5f6
;   FUN_0043b610 at 0043b617
;   FUN_0043b690 at 0043b6a0
;   FUN_004dea60 at 004dea75
;
; Called Functions:
;   FUN_00564486
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0043b7c0
        ;   Label: FUN_0043b7c0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0043b7c1
    MOV EAX,dword ptr [EBX + 0x4]       ; 0043b7c5
    TEST EAX,EAX                        ; 0043b7c8
    JNZ 0x0043b7db                      ; 0043b7ca
        ;   XREF to: 0043b7db (CONDITIONAL_JUMP)  ; LAB_0043b7db
    MOV dword ptr [EBX],0x0             ; 0043b7cc
    MOV dword ptr [EBX + 0x4],0x0       ; 0043b7d2
    POP EBX                             ; 0043b7d9
    RET                                 ; 0043b7da
    SUB EAX,0x4                         ; 0043b7db
        ;   Label: LAB_0043b7db
    PUSH EAX                            ; 0043b7de
    CALL FUN_00564486                   ; 0043b7df
        ;   XREF to: 00564486 (UNCONDITIONAL_CALL)  ; undefined FUN_00564486()
    ADD ESP,0x4                         ; 0043b7e4
    MOV dword ptr [EBX],0x0             ; 0043b7e7
    MOV dword ptr [EBX + 0x4],0x0       ; 0043b7ed
    POP EBX                             ; 0043b7f4
    RET                                 ; 0043b7f5

