; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_0058cbb0(int param_1)
;
;
; Called Functions:
;   FUN_0040c7e0
;   FUN_004fc070
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 0058cbb0
        ;   Label: FUN_0058cbb0
    ADD EAX,0x158                       ; 0058cbb4
    PUSH EAX                            ; 0058cbb9
    CALL FUN_004fc070                   ; 0058cbba
        ;   XREF to: 004fc070 (UNCONDITIONAL_CALL)  ; undefined FUN_004fc070()
    MOV EAX,dword ptr [EAX + 0x24]      ; 0058cbbf
    ADD ESP,0x4                         ; 0058cbc2
    CMP EAX,0xf                         ; 0058cbc5
    JNZ 0x0058cbd0                      ; 0058cbc8
        ;   XREF to: 0058cbd0 (CONDITIONAL_JUMP)  ; LAB_0058cbd0
    MOV EAX,0x1                         ; 0058cbca
    RET                                 ; 0058cbcf
    MOV EDX,dword ptr [ESP + 0x4]       ; 0058cbd0
        ;   Label: LAB_0058cbd0
    PUSH EDX                            ; 0058cbd4
    CALL FUN_0040c7e0                   ; 0058cbd5
        ;   XREF to: 0040c7e0 (UNCONDITIONAL_CALL)  ; undefined FUN_0040c7e0()
    ADD ESP,0x4                         ; 0058cbda
    RET                                 ; 0058cbdd

