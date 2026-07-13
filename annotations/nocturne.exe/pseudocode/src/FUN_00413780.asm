; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00413780(int param_1)
;
;
; XREF[1]:
;   FUN_00413800 at 00413d54
;
; Called Functions:
;   FUN_0040dea0
;   FUN_004e16b0
;
; *****************************************************************************

section .text

    PUSH 0x3f000000                     ; 00413780
        ;   Label: FUN_00413780
    CALL FUN_0040dea0                   ; 00413785
        ;   XREF to: 0040dea0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040dea0()
    ADD ESP,0x4                         ; 0041378a
    MOV EDX,dword ptr [ESP + 0x4]       ; 0041378d
    ADD EDX,0x150                       ; 00413791
    TEST EAX,EAX                        ; 00413797
    JZ 0x004137a9                       ; 00413799
        ;   XREF to: 004137a9 (CONDITIONAL_JUMP)  ; LAB_004137a9
    PUSH 0x1                            ; 0041379b
    PUSH 0x1                            ; 0041379d
    PUSH EDX                            ; 0041379f
    CALL FUN_004e16b0                   ; 004137a0
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004137a5
    RET                                 ; 004137a8
    PUSH 0x1                            ; 004137a9
        ;   Label: LAB_004137a9
    PUSH 0x2                            ; 004137ab
    PUSH EDX                            ; 004137ad
    CALL FUN_004e16b0                   ; 004137ae
        ;   XREF to: 004e16b0 (UNCONDITIONAL_CALL)  ; undefined FUN_004e16b0()
    ADD ESP,0xc                         ; 004137b3
    RET                                 ; 004137b6

