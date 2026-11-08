; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00468b30(void)
;
;
; XREF[1]:
;   FUN_00521af0 at 00521b67
;
; Referenced Globals:
;   undefined4 DAT_01ba5c30
;
; *****************************************************************************

section .text

    MOV EDX,dword ptr [0x01ba5c30]      ; 00468b30 | DAT_01ba5c30
        ;   Label: FUN_00468b30
    TEST EDX,EDX                        ; 00468b36
    JZ 0x00468b41                       ; 00468b38
        ;   XREF to: 00468b41 (CONDITIONAL_JUMP)  ; LAB_00468b41
    MOV EAX,dword ptr [EDX + 0x41f0]    ; 00468b3a
    RET                                 ; 00468b40
    MOV EAX,0xb                         ; 00468b41
        ;   Label: LAB_00468b41
    RET                                 ; 00468b46

