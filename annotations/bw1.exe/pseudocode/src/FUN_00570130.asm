; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00570130(int param_1)
;
;
; XREF[2]:
;   FUN_0056feb0 at 0056fecb
;   FUN_00570020 at 0057005d
;
; Called Functions:
;   FUN_005c09f0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00570130
        ;   Label: FUN_00570130
    MOV EBX,dword ptr [ESP + 0x8]       ; 00570131
    MOV EDX,dword ptr [EBX + 0x120]     ; 00570135
    TEST EDX,EDX                        ; 0057013b
    JNZ 0x00570141                      ; 0057013d
        ;   XREF to: 00570141 (CONDITIONAL_JUMP)  ; LAB_00570141
    POP EBX                             ; 0057013f
    RET                                 ; 00570140
    PUSH EDX                            ; 00570141
        ;   Label: LAB_00570141
    CALL FUN_005c09f0                   ; 00570142
        ;   XREF to: 005c09f0 (UNCONDITIONAL_CALL)  ; undefined FUN_005c09f0()
    ADD ESP,0x4                         ; 00570147
    MOV dword ptr [EBX + 0x120],0x0     ; 0057014a
    POP EBX                             ; 00570154
    RET                                 ; 00570155

