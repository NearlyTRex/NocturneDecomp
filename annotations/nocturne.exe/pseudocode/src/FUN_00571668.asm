; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; char FUN_00571668(void)
;
;
; XREF[1]:
;   FUN_00571718 at 00571793
;
; Referenced Globals:
;   undefined1 DAT_005c2140
;
; *****************************************************************************

section .text

    CMP byte ptr [0x005c2140],0x0       ; 00571668 | DAT_005c2140
        ;   Label: FUN_00571668
    JNZ 0x0057168a                      ; 0057166f
        ;   XREF to: 0057168a (CONDITIONAL_JUMP)  ; LAB_0057168a
    PUSH 0x1                            ; 00571671
    PUSH 0x5715d0                       ; 00571673
    CALL dword ptr CS:[0x575584]        ; 00571678
    TEST EAX,EAX                        ; 0057167f
    JZ 0x0057168a                       ; 00571681
        ;   XREF to: 0057168a (CONDITIONAL_JUMP)  ; LAB_0057168a
    MOV byte ptr [0x005c2140],0x1       ; 00571683 | DAT_005c2140
    XOR EAX,EAX                         ; 0057168a
        ;   Label: LAB_0057168a
    MOV AL,[0x005c2140]                 ; 0057168c | DAT_005c2140
    RET                                 ; 00571691

