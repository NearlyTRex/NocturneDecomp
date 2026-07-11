; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int FUN_005713e0(short *param_1)
;
;
; XREF[2]:
;   FUN_0056e890 at 0056e927
;   FUN_0056e990 at 0056e997
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005713e0
        ;   Label: FUN_005713e0
    MOV EDX,dword ptr [ESP + 0x8]       ; 005713e1
    MOV BX,word ptr [EDX]               ; 005713e5
    MOV EAX,EDX                         ; 005713e8
    TEST BX,BX                          ; 005713ea
    JZ 0x005713fb                       ; 005713ed
        ;   XREF to: 005713fb (CONDITIONAL_JUMP)  ; LAB_005713fb
    MOV CX,word ptr [EAX + 0x2]         ; 005713ef
        ;   Label: LAB_005713ef
    ADD EAX,0x2                         ; 005713f3
    TEST CX,CX                          ; 005713f6
    JNZ 0x005713ef                      ; 005713f9
        ;   XREF to: 005713ef (CONDITIONAL_JUMP)  ; LAB_005713ef
    SUB EAX,EDX                         ; 005713fb
        ;   Label: LAB_005713fb
    SAR EAX,0x1                         ; 005713fd
    POP EBX                             ; 005713ff
    RET                                 ; 00571400

