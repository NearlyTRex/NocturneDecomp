; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00571440(short *param_1)
;
;
; XREF[1]:
;   FUN_0056fa80 at 0056fb0c
;
; *****************************************************************************

section .text

    MOV EAX,dword ptr [ESP + 0x4]       ; 00571440
        ;   Label: FUN_00571440
    CMP word ptr [EAX],0x1              ; 00571444
    JNZ 0x00571466                      ; 00571448
        ;   XREF to: 00571466 (CONDITIONAL_JUMP)  ; LAB_00571466
    CMP dword ptr [EAX + 0x4],0x0       ; 0057144a
    JZ 0x00571466                       ; 0057144e
        ;   XREF to: 00571466 (CONDITIONAL_JUMP)  ; LAB_00571466
    MOV AX,word ptr [EAX + 0xa]         ; 00571450
    CMP AX,0x10                         ; 00571454
    JC 0x00571460                       ; 00571458
        ;   XREF to: 00571460 (CONDITIONAL_JUMP)  ; LAB_00571460
    CMP AX,0x12                         ; 0057145a
    JBE 0x00571466                      ; 0057145e
        ;   XREF to: 00571466 (CONDITIONAL_JUMP)  ; LAB_00571466
    MOV EAX,0x1                         ; 00571460
        ;   Label: LAB_00571460
    RET                                 ; 00571465
    XOR EAX,EAX                         ; 00571466
        ;   Label: LAB_00571466
    RET                                 ; 00571468

