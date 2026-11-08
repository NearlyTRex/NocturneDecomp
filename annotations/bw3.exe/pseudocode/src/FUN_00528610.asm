; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 FUN_00528610(int param_1)
;
;
; Called Functions:
;   FUN_0040ce40
;
; *****************************************************************************

section .text

    SUB ESP,0x8                         ; 00528610
        ;   Label: FUN_00528610
    MOV EAX,dword ptr [ESP + 0xc]       ; 00528613
    CMP dword ptr [EAX + 0x56c],0x6     ; 00528617
    JNZ 0x0052862c                      ; 0052861e
        ;   XREF to: 0052862c (CONDITIONAL_JUMP)  ; LAB_0052862c
    XOR ECX,ECX                         ; 00528620
    MOV dword ptr [ESP],ECX             ; 00528622
    MOV EAX,dword ptr [ESP]             ; 00528625
    ADD ESP,0x8                         ; 00528628
    RET                                 ; 0052862b
    PUSH 0x425c0000                     ; 0052862c
        ;   Label: LAB_0052862c
    PUSH 0x41c80000                     ; 00528631
    CALL FUN_0040ce40                   ; 00528636
        ;   XREF to: 0040ce40 (UNCONDITIONAL_CALL)  ; undefined FUN_0040ce40()
    MOV dword ptr [ESP + 0xc],EAX       ; 0052863b
    FLD float ptr [ESP + 0xc]           ; 0052863f
    ADD ESP,0x8                         ; 00528643
    FSTP float ptr [ESP]                ; 00528646
    MOV EAX,dword ptr [ESP]             ; 00528649
    ADD ESP,0x8                         ; 0052864c
    RET                                 ; 0052864f

