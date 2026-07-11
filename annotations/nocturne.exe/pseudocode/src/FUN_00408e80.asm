; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00408e80(int *param_1)
;
;
; Referenced Globals:
;   undefined1* PTR_LAB_005acab8 = 004044a0
;   undefined4 DAT_005b7644
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00408e80
        ;   Label: FUN_00408e80
    MOV EDX,EAX                         ; 00408e84
    TEST EAX,EAX                        ; 00408e86
    JZ 0x00408ea1                       ; 00408e88
        ;   XREF to: 00408ea1 (CONDITIONAL_JUMP)  ; LAB_00408ea1
    MOV EAX,dword ptr [EDX]             ; 00408e8a
        ;   Label: LAB_00408e8a
    TEST EAX,EAX                        ; 00408e8c
    JZ 0x00408e97                       ; 00408e8e
        ;   XREF to: 00408e97 (CONDITIONAL_JUMP)  ; LAB_00408e97
    JL 0x00408e97                       ; 00408e90
        ;   XREF to: 00408e97 (CONDITIONAL_JUMP)  ; LAB_00408e97
    CMP EAX,0x43                        ; 00408e92
    JL 0x00408ea2                       ; 00408e95
        ;   XREF to: 00408ea2 (CONDITIONAL_JUMP)  ; LAB_00408ea2
    MOV dword ptr [0x005b7644],0x1      ; 00408e97 | DAT_005b7644
        ;   Label: LAB_00408e97
    RET                                 ; 00408ea1
        ;   Label: LAB_00408ea1
    PUSH EDX                            ; 00408ea2
        ;   Label: LAB_00408ea2
    CALL dword ptr [EAX*0x4 + 0x5acab8] ; 00408ea3 | PTR_LAB_005acab8
    ADD ESP,0x4                         ; 00408eaa
    MOV EDX,EAX                         ; 00408ead
    JMP 0x00408e8a                      ; 00408eaf
        ;   XREF to: 00408e8a (UNCONDITIONAL_JUMP)  ; LAB_00408e8a

