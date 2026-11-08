; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0054dac0(int param_1)
;
;
; XREF[2]:
;   FUN_0054d840 at 0054d85b
;   FUN_0054d9b0 at 0054d9ed
;
; Called Functions:
;   FUN_005b86a0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0054dac0
        ;   Label: FUN_0054dac0
    MOV EBX,dword ptr [ESP + 0x8]       ; 0054dac1
    MOV EDX,dword ptr [EBX + 0x120]     ; 0054dac5
    TEST EDX,EDX                        ; 0054dacb
    JNZ 0x0054dad1                      ; 0054dacd
        ;   XREF to: 0054dad1 (CONDITIONAL_JUMP)  ; LAB_0054dad1
    POP EBX                             ; 0054dacf
    RET                                 ; 0054dad0
    PUSH EDX                            ; 0054dad1
        ;   Label: LAB_0054dad1
    CALL FUN_005b86a0                   ; 0054dad2
        ;   XREF to: 005b86a0 (UNCONDITIONAL_CALL)  ; undefined FUN_005b86a0()
    ADD ESP,0x4                         ; 0054dad7
    MOV dword ptr [EBX + 0x120],0x0     ; 0054dada
    POP EBX                             ; 0054dae4
    RET                                 ; 0054dae5

