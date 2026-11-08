; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_005a678c(char *param_1,undefined4 param_2,int param_3)
;
;
; XREF[1]:
;   FUN_005a6a78 at 005a6cf9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 005a678c
        ;   Label: FUN_005a678c
    PUSH ESI                            ; 005a678d
    PUSH EDI                            ; 005a678e
    PUSH ES                             ; 005a678f
    MOV EDI,dword ptr [ESP + 0x18]      ; 005a6790
    MOV EDX,dword ptr [ESP + 0x14]      ; 005a6794
    MOV ESI,dword ptr [ESP + 0x1c]      ; 005a6798
    MOV ES,DI                           ; 005a679c
    XOR EAX,EAX                         ; 005a679e
    MOV EBX,EDX                         ; 005a67a0
        ;   Label: LAB_005a67a0
    MOV CL,byte ptr ES:[EBX]            ; 005a67a2
    INC EDX                             ; 005a67a5
    TEST CL,CL                          ; 005a67a6
    JZ 0x005a65b2                       ; 005a67a8
        ;   XREF to: 005a65b2 (CONDITIONAL_JUMP)  ; LAB_005a65b2
    CMP EAX,ESI                         ; 005a67ae
    JZ 0x005a65b2                       ; 005a67b0
        ;   XREF to: 005a65b2 (CONDITIONAL_JUMP)  ; LAB_005a65b2
    INC EAX                             ; 005a67b6
    JMP 0x005a67a0                      ; 005a67b7
        ;   XREF to: 005a67a0 (UNCONDITIONAL_JUMP)  ; LAB_005a67a0

