; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_10008580(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_10016c70
;
; *****************************************************************************

section .text

    MOV ECX,dword ptr [ESP + 0x4]       ; 10008580
        ;   Label: FUN_10008580
    TEST ECX,ECX                        ; 10008584
    JL 0x10008592                       ; 10008586
        ;   XREF to: 10008592 (CONDITIONAL_JUMP)  ; LAB_10008592
    CMP ECX,0x2                         ; 10008588
    JLE 0x10008598                      ; 1000858b
        ;   XREF to: 10008598 (CONDITIONAL_JUMP)  ; LAB_10008598
    CMP ECX,0x3                         ; 1000858d
    JZ 0x100085a4                       ; 10008590
        ;   XREF to: 100085a4 (CONDITIONAL_JUMP)  ; LAB_100085a4
    MOV EAX,0xffffffff                  ; 10008592
        ;   Label: LAB_10008592
    RET                                 ; 10008597
    MOV EAX,[0x10016c70]                ; 10008598 | DAT_10016c70
        ;   Label: LAB_10008598
    MOV dword ptr [0x10016c70],ECX      ; 1000859d | DAT_10016c70
    RET                                 ; 100085a3
    MOV EAX,[0x10016c70]                ; 100085a4 | DAT_10016c70
        ;   Label: LAB_100085a4
    RET                                 ; 100085a9

