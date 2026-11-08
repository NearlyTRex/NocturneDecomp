; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * FUN_0051c580(int param_1,int *param_2)
;
;
; XREF[2]:
;   FUN_0051cb20 at 0051cca9
;   FUN_0051d050 at 0051d241
;
; Referenced Globals:
;   undefined4 DAT_01e61648
;   undefined4 DAT_01e6164c
;   undefined4 DAT_01e6169c
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0051c580
        ;   Label: FUN_0051c580
    PUSH ESI                            ; 0051c581
    MOV EBX,dword ptr [0x01e61648]      ; 0051c582 | DAT_01e61648
    MOV ECX,dword ptr [ESP + 0xc]       ; 0051c588
    MOV ESI,dword ptr [ESP + 0x10]      ; 0051c58c
    MOV EAX,0x1e6164c                   ; 0051c590
    XOR EDX,EDX                         ; 0051c595
    TEST EBX,EBX                        ; 0051c597
    JLE 0x0051c5ab                      ; 0051c599
        ;   XREF to: 0051c5ab (CONDITIONAL_JUMP)  ; LAB_0051c5ab
    CMP ECX,dword ptr [EAX]             ; 0051c59b | DAT_01e6164c | DAT_01e6169c
        ;   Label: LAB_0051c59b
    JNZ 0x0051c5a3                      ; 0051c59d
        ;   XREF to: 0051c5a3 (CONDITIONAL_JUMP)  ; LAB_0051c5a3
    CMP EAX,ESI                         ; 0051c59f
    JNZ 0x0051c5ad                      ; 0051c5a1
        ;   XREF to: 0051c5ad (CONDITIONAL_JUMP)  ; LAB_0051c5ad
    INC EDX                             ; 0051c5a3
        ;   Label: LAB_0051c5a3
    ADD EAX,0x50                        ; 0051c5a4 | DAT_01e6169c
    CMP EDX,EBX                         ; 0051c5a7
    JL 0x0051c59b                       ; 0051c5a9
        ;   XREF to: 0051c59b (CONDITIONAL_JUMP)  ; LAB_0051c59b
    XOR EAX,EAX                         ; 0051c5ab
        ;   Label: LAB_0051c5ab
    MOV dword ptr [0x01e61648],EBX      ; 0051c5ad | DAT_01e61648
        ;   Label: LAB_0051c5ad
    POP ESI                             ; 0051c5b3
    POP EBX                             ; 0051c5b4
    RET                                 ; 0051c5b5

