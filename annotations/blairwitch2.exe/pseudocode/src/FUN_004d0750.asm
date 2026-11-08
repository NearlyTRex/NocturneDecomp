; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004d0750(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616494
;   undefined4 DAT_01cb6900
;   undefined4 DAT_01cb6b5c
;   undefined4 DAT_01cb741c
;
; *****************************************************************************

section .text

    MOV EAX,[0x00616494]                ; 004d0750 | DAT_00616494
        ;   Label: FUN_004d0750
    CMP dword ptr [EAX + 0x25c],0x0     ; 004d0755 | DAT_01cb6b5c
    JNZ 0x004d076d                      ; 004d075c
        ;   XREF to: 004d076d (CONDITIONAL_JUMP)  ; LAB_004d076d
    PUSH 0x1                            ; 004d075e
    MOV EDX,dword ptr [EAX + 0xb1c]     ; 004d0760 | DAT_01cb741c
    PUSH EAX                            ; 004d0766 | DAT_01cb6900
    CALL dword ptr [EDX]                ; 004d0767
    ADD ESP,0x8                         ; 004d0769
    RET                                 ; 004d076c
    PUSH 0x0                            ; 004d076d
        ;   Label: LAB_004d076d
    MOV EDX,dword ptr [EAX + 0xb1c]     ; 004d076f | DAT_01cb741c
    PUSH EAX                            ; 004d0775 | DAT_01cb6900
    CALL dword ptr [EDX]                ; 004d0776
    ADD ESP,0x8                         ; 004d0778
    RET                                 ; 004d077b

