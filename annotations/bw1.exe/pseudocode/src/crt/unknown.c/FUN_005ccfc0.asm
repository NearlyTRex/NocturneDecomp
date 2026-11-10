; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005ccfc0(short *param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005caf60 at 005caff7
;   crt_unknown.c_FUN_005cb060 at 005cb067
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005ccfc0
        ;   Label: crt_unknown.c_FUN_005ccfc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005ccfc1
    MOV BX,word ptr [EDX]               ; 005ccfc5
    MOV EAX,EDX                         ; 005ccfc8
    TEST BX,BX                          ; 005ccfca
    JZ 0x005ccfdb                       ; 005ccfcd
        ;   XREF to: 005ccfdb (CONDITIONAL_JUMP)  ; LAB_005ccfdb
    MOV CX,word ptr [EAX + 0x2]         ; 005ccfcf
        ;   Label: LAB_005ccfcf
    ADD EAX,0x2                         ; 005ccfd3
    TEST CX,CX                          ; 005ccfd6
    JNZ 0x005ccfcf                      ; 005ccfd9
        ;   XREF to: 005ccfcf (CONDITIONAL_JUMP)  ; LAB_005ccfcf
    SUB EAX,EDX                         ; 005ccfdb
        ;   Label: LAB_005ccfdb
    SAR EAX,0x1                         ; 005ccfdd
    POP EBX                             ; 005ccfdf
    RET                                 ; 005ccfe0

