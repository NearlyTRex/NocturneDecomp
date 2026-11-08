; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_00415c80(void)
;
;
; XREF[1]:
;   FUN_004cf5e0 at 004cf7e8
;
; Referenced Globals:
;   undefined4 DAT_007c394c
;   undefined4 DAT_007c3950
;   undefined4 DAT_007c3954
;   undefined4 DAT_007c3978
;
; Called Functions:
;   FUN_00415be0
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00415c80
        ;   Label: FUN_00415c80
    PUSH ESI                            ; 00415c81
    MOV EDX,dword ptr [0x007c3978]      ; 00415c82 | DAT_007c3978
    TEST EDX,EDX                        ; 00415c88
    JNZ 0x00415cbc                      ; 00415c8a
        ;   XREF to: 00415cbc (CONDITIONAL_JUMP)  ; LAB_00415cbc
    MOV ESI,dword ptr [0x007c394c]      ; 00415c8c | DAT_007c394c
        ;   Label: LAB_00415c8c
    XOR EBX,EBX                         ; 00415c92
    TEST ESI,ESI                        ; 00415c94
    JLE 0x00415cb9                      ; 00415c96
        ;   XREF to: 00415cb9 (CONDITIONAL_JUMP)  ; LAB_00415cb9
    PUSH EDI                            ; 00415c98
    XOR ESI,ESI                         ; 00415c99
    MOV EAX,dword ptr [ESI + 0x7c3950]  ; 00415c9b | DAT_007c3950 | DAT_007c3954
        ;   Label: LAB_00415c9b
    PUSH EAX                            ; 00415ca1
    MOV EDX,dword ptr [EAX]             ; 00415ca2
    ADD ESI,0x4                         ; 00415ca4
    INC EBX                             ; 00415ca7
    CALL dword ptr [EDX + 0x10]         ; 00415ca8
    MOV EDI,dword ptr [0x007c394c]      ; 00415cab | DAT_007c394c
    ADD ESP,0x4                         ; 00415cb1
    CMP EBX,EDI                         ; 00415cb4
    JL 0x00415c9b                       ; 00415cb6
        ;   XREF to: 00415c9b (CONDITIONAL_JUMP)  ; LAB_00415c9b
    POP EDI                             ; 00415cb8
    POP ESI                             ; 00415cb9
        ;   Label: LAB_00415cb9
    POP EBX                             ; 00415cba
    RET                                 ; 00415cbb
    PUSH 0x0                            ; 00415cbc
        ;   Label: LAB_00415cbc
    PUSH EDX                            ; 00415cbe
    CALL FUN_00415be0                   ; 00415cbf
        ;   XREF to: 00415be0 (UNCONDITIONAL_CALL)  ; undefined FUN_00415be0()
    ADD ESP,0x8                         ; 00415cc4
    JMP 0x00415c8c                      ; 00415cc7
        ;   XREF to: 00415c8c (UNCONDITIONAL_JUMP)  ; LAB_00415c8c

