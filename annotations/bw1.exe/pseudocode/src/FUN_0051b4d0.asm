; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0051b4d0(undefined4 param_1,int param_2,int param_3)
;
;
; XREF[5]:
;   FUN_0051b5a0 at 0051b5bb
;   FUN_0051b8d0 at 0051b900
;   FUN_0051bad0 at 0051bb92
;   FUN_0051c0a0 at 0051c188
;   FUN_0051c240 at 0051c37b
;
; Called Functions:
;   FUN_00408560
;   FUN_0051b1d0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051b4d0
        ;   Label: FUN_0051b4d0
    MOV EBX,dword ptr [ESP + 0xc]       ; 0051b4d1
    TEST EBX,EBX                        ; 0051b4d5
    JNZ 0x0051b4db                      ; 0051b4d7
        ;   XREF to: 0051b4db (CONDITIONAL_JUMP)  ; LAB_0051b4db
    POP EBX                             ; 0051b4d9
        ;   Label: LAB_0051b4d9
    RET                                 ; 0051b4da
    PUSH EBX                            ; 0051b4db
        ;   Label: LAB_0051b4db
    MOV EDX,dword ptr [ESP + 0xc]       ; 0051b4dc
    PUSH EDX                            ; 0051b4e0
    CALL FUN_0051b1d0                   ; 0051b4e1
        ;   XREF to: 0051b1d0 (UNCONDITIONAL_CALL)  ; undefined FUN_0051b1d0()
    ADD ESP,0x8                         ; 0051b4e6
    CMP dword ptr [ESP + 0x10],0x0      ; 0051b4e9
    JZ 0x0051b4d9                       ; 0051b4ee
        ;   XREF to: 0051b4d9 (CONDITIONAL_JUMP)  ; LAB_0051b4d9
    PUSH EBX                            ; 0051b4f0
    CALL FUN_00408560                   ; 0051b4f1
        ;   XREF to: 00408560 (UNCONDITIONAL_CALL)  ; undefined FUN_00408560()
    ADD ESP,0x4                         ; 0051b4f6
    POP EBX                             ; 0051b4f9
    RET                                 ; 0051b4fa

