; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00487690(int param_1)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00487690
        ;   Label: FUN_00487690
    MOV EAX,dword ptr [ESP + 0xc]       ; 00487693
    CMP dword ptr [EAX + 0x56c],0x6     ; 00487697
    JNZ 0x004876ac                      ; 0048769e
        ;   XREF to: 004876ac (CONDITIONAL_JUMP)  ; LAB_004876ac
    XOR ECX,ECX                         ; 004876a0
    MOV dword ptr [ESP],ECX             ; 004876a2
    MOV EAX,dword ptr [ESP]             ; 004876a5
    ADD ESP,0x8                         ; 004876a8
    RET                                 ; 004876ab
    PUSH 0x44160000                     ; 004876ac
        ;   Label: LAB_004876ac
    PUSH 0x43e10000                     ; 004876b1
    CALL FUN_0040ce40                   ; 004876b6
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 004876bb
    FLD float ptr [ESP + 0xc]           ; 004876bf
    ADD ESP,0x8                         ; 004876c3
    FSTP float ptr [ESP]                ; 004876c6
    MOV EAX,dword ptr [ESP]             ; 004876c9
    ADD ESP,0x8                         ; 004876cc
    RET                                 ; 004876cf

