; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_004f1b40(int param_1)
;
;
; Called Functions:
;   FUN_004f1890
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 004f1b40
        ;   Label: FUN_004f1b40
    CMP dword ptr [EAX + 0xfc],0x0      ; 004f1b44
    JZ 0x004f1b50                       ; 004f1b4b
        ;   XREF to: 004f1b50 (CONDITIONAL_JUMP)  ; LAB_004f1b50
    XOR EAX,EAX                         ; 004f1b4d
    RET                                 ; 004f1b4f
    PUSH EAX                            ; 004f1b50
        ;   Label: LAB_004f1b50
    CALL FUN_004f1890                   ; 004f1b51
        ;   XREF to: 004f1890 (UNCONDITIONAL_CALL)  ; undefined FUN_004f1890()
    ADD ESP,0x4                         ; 004f1b56
    RET                                 ; 004f1b59

