; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void crt_unknown_c_FUN_005bb64c(char *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   crt_unknown.c_FUN_005bb938 at 005bbbb9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005bb64c
        ;   Label: crt_unknown.c_FUN_005bb64c
    PUSH ESI                            ; 005bb64d
    PUSH EDI                            ; 005bb64e
    PUSH ES                             ; 005bb64f
    MOV EDI,dword ptr [ESP + 0x18]      ; 005bb650
    MOV EDX,dword ptr [ESP + 0x14]      ; 005bb654
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005bb658
    MOV ES,DI                           ; 005bb65c
    XOR EAX,EAX                         ; 005bb65e
    MOV EBX,EDX                         ; 005bb660
        ;   Label: LAB_005bb660
    MOV CL,byte ptr ES:[EBX]            ; 005bb662
    INC EDX                             ; 005bb665
    TEST CL,CL                          ; 005bb666
    JZ 0x005bb472                       ; 005bb668
        ;   XREF to: 005bb472 (CONDITIONAL_JUMP)  ; LAB_005bb472
    CMP EAX,ESI                         ; 005bb66e
    JZ 0x005bb472                       ; 005bb670
        ;   XREF to: 005bb472 (CONDITIONAL_JUMP)  ; LAB_005bb472
    INC EAX                             ; 005bb676
    JMP 0x005bb660                      ; 005bb677
        ;   XREF to: 005bb660 (UNCONDITIONAL_JUMP)  ; LAB_005bb660

