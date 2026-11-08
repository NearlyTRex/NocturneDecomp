; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408730(int param_1)
;
;
; XREF[3]:
;   FUN_004dadb0 at 004db55e
;   FUN_004db8e0 at 004db9b8
;   FUN_004fc570 at 004fc591
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408730
        ;   Label: FUN_00408730
    TEST EAX,EAX                        ; 00408734
    JZ 0x0040873a                       ; 00408736
        ;   XREF to: 0040873a (CONDITIONAL_JUMP)  ; LAB_0040873a
    JNZ 0x0040873b                      ; 00408738
        ;   XREF to: 0040873b (CONDITIONAL_JUMP)  ; LAB_0040873b
    RET                                 ; 0040873a
        ;   Label: LAB_0040873a
    PUSH 0x2                            ; 0040873b
        ;   Label: LAB_0040873b
    MOV EDX,dword ptr [EAX + 0x2b0]     ; 0040873d
    PUSH EAX                            ; 00408743
    CALL dword ptr [EDX + 0xd8]         ; 00408744
    ADD ESP,0x8                         ; 0040874a
    RET                                 ; 0040874d

