; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int crt_unknown_c_FUN_005c4cc0(short *param_1)
;
;
; XREF[2]:
;   crt_unknown.c_FUN_005c2c60 at 005c2cf7
;   crt_unknown.c_FUN_005c2d60 at 005c2d67
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c4cc0
        ;   Label: crt_unknown.c_FUN_005c4cc0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005c4cc1
    MOV BX,word ptr [EDX]               ; 005c4cc5
    MOV EAX,EDX                         ; 005c4cc8
    TEST BX,BX                          ; 005c4cca
    JZ 0x005c4cdb                       ; 005c4ccd
        ;   XREF to: 005c4cdb (CONDITIONAL_JUMP)  ; LAB_005c4cdb
    MOV CX,word ptr [EAX + 0x2]         ; 005c4ccf
        ;   Label: LAB_005c4ccf
    ADD EAX,0x2                         ; 005c4cd3
    TEST CX,CX                          ; 005c4cd6
    JNZ 0x005c4ccf                      ; 005c4cd9
        ;   XREF to: 005c4ccf (CONDITIONAL_JUMP)  ; LAB_005c4ccf
    SUB EAX,EDX                         ; 005c4cdb
        ;   Label: LAB_005c4cdb
    SAR EAX,0x1                         ; 005c4cdd
    POP EBX                             ; 005c4cdf
    RET                                 ; 005c4ce0

