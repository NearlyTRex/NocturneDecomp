; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004478b0(int param_1)
;
;
; XREF[2]:
;   FUN_00447840 at 00447846
;   FUN_00447860 at 00447866
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004478b0
        ;   Label: FUN_004478b0
    MOV EBX,dword ptr [ESP + 0x8]       ; 004478b1
    MOV EDX,dword ptr [EBX + 0x48]      ; 004478b5
    TEST EDX,EDX                        ; 004478b8
    JNZ 0x004478be                      ; 004478ba
        ;   XREF to: 004478be (CONDITIONAL_JUMP)  ; LAB_004478be
    POP EBX                             ; 004478bc
    RET                                 ; 004478bd
    PUSH EDX                            ; 004478be
        ;   Label: LAB_004478be
    CALL FUN_005b86a0                   ; 004478bf
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 004478c4
    MOV dword ptr [EBX + 0x48],0x0      ; 004478c7
    POP EBX                             ; 004478ce
    RET                                 ; 004478cf

