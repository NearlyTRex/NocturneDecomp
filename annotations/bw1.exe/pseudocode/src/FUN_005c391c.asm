; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005c391c(char *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005c3c08 at 005c3e89
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005c391c
        ;   Label: FUN_005c391c
    PUSH ESI                            ; 005c391d
    PUSH EDI                            ; 005c391e
    PUSH ES                             ; 005c391f
    MOV EDI,dword ptr [ESP + 0x18]      ; 005c3920
    MOV EDX,dword ptr [ESP + 0x14]      ; 005c3924
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005c3928
    MOV ES,DI                           ; 005c392c
    XOR EAX,EAX                         ; 005c392e
    MOV EBX,EDX                         ; 005c3930
        ;   Label: LAB_005c3930
    MOV CL,byte ptr ES:[EBX]            ; 005c3932
    INC EDX                             ; 005c3935
    TEST CL,CL                          ; 005c3936
    JZ 0x005c3742                       ; 005c3938
        ;   XREF to: 005c3742 (CONDITIONAL_JUMP)  ; LAB_005c3742
    CMP EAX,ESI                         ; 005c393e
    JZ 0x005c3742                       ; 005c3940
        ;   XREF to: 005c3742 (CONDITIONAL_JUMP)  ; LAB_005c3742
    INC EAX                             ; 005c3946
    JMP 0x005c3930                      ; 005c3947
        ;   XREF to: 005c3930 (UNCONDITIONAL_JUMP)  ; LAB_005c3930

