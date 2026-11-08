; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00448fa0(int param_1)
;
;
; XREF[1]:
;   FUN_00448f20 at 00448f26
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00448fa0
        ;   Label: FUN_00448fa0
    MOV EBX,dword ptr [ESP + 0x8]       ; 00448fa1
    MOV EDX,dword ptr [EBX + 0x300]     ; 00448fa5
    TEST EDX,EDX                        ; 00448fab
    JNZ 0x00448fb1                      ; 00448fad
        ;   XREF to: 00448fb1 (CONDITIONAL_JUMP)  ; LAB_00448fb1
    POP EBX                             ; 00448faf
    RET                                 ; 00448fb0
    PUSH EDX                            ; 00448fb1
        ;   Label: LAB_00448fb1
    CALL FUN_005b86a0                   ; 00448fb2
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 00448fb7
    MOV dword ptr [EBX + 0x300],0x0     ; 00448fba
    POP EBX                             ; 00448fc4
    RET                                 ; 00448fc5

