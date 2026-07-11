; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d8f90(undefined4 param_1,int param_2,int param_3)
;
;
; XREF[5]:
;   FUN_004d8fc0 at 004d8fdb
;   FUN_004d92a0 at 004d92cd
;   FUN_004d9440 at 004d9506
;   FUN_004d9a80 at 004d9b68
;   FUN_004d9c20 at 004d9d59
;
; Called Functions:
;   FUN_00409cd0
;   FUN_004d8cd0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004d8f90
        ;   Label: FUN_004d8f90
    MOV EBX,dword ptr [ESP + 0xc]       ; 004d8f91
    TEST EBX,EBX                        ; 004d8f95
    JNZ 0x004d8f9b                      ; 004d8f97
        ;   XREF to: 004d8f9b (CONDITIONAL_JUMP)  ; LAB_004d8f9b
    POP EBX                             ; 004d8f99
        ;   Label: LAB_004d8f99
    RET                                 ; 004d8f9a
    PUSH EBX                            ; 004d8f9b
        ;   Label: LAB_004d8f9b
    MOV EDX,dword ptr [ESP + 0xc]       ; 004d8f9c
    PUSH EDX                            ; 004d8fa0
    CALL FUN_004d8cd0                   ; 004d8fa1
        ;   XREF to: 004d8cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_004d8cd0()
    ADD ESP,0x8                         ; 004d8fa6
    CMP dword ptr [ESP + 0x10],0x0      ; 004d8fa9
    JZ 0x004d8f99                       ; 004d8fae
        ;   XREF to: 004d8f99 (CONDITIONAL_JUMP)  ; LAB_004d8f99
    PUSH EBX                            ; 004d8fb0
    CALL FUN_00409cd0                   ; 004d8fb1
        ;   XREF to: 00409cd0 (UNCONDITIONAL_CALL)  ; undefined FUN_00409cd0()
    ADD ESP,0x4                         ; 004d8fb6
    POP EBX                             ; 004d8fb9
    RET                                 ; 004d8fba

