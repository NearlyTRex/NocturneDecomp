; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a26a0(int *param_1)
;
;
; XREF[1]:
;   FUN_004a27e0 at 004a2800
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a26a0
        ;   Label: FUN_004a26a0
    PUSH ESI                            ; 004a26a1
    PUSH EDI                            ; 004a26a2
    MOV EDI,dword ptr [ESP + 0x10]      ; 004a26a3
    MOV EDX,dword ptr [EDI]             ; 004a26a7
    XOR EBX,EBX                         ; 004a26a9
    TEST EDX,EDX                        ; 004a26ab
    JLE 0x004a26c2                      ; 004a26ad
        ;   XREF to: 004a26c2 (CONDITIONAL_JUMP)  ; LAB_004a26c2
    MOV ESI,EDI                         ; 004a26af
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a26b1
        ;   Label: LAB_004a26b1
    TEST EAX,EAX                        ; 004a26b4
    JNZ 0x004a26cc                      ; 004a26b6
        ;   XREF to: 004a26cc (CONDITIONAL_JUMP)  ; LAB_004a26cc
    INC EBX                             ; 004a26b8
        ;   Label: LAB_004a26b8
    MOV ECX,dword ptr [EDI]             ; 004a26b9
    ADD ESI,0x4                         ; 004a26bb
    CMP EBX,ECX                         ; 004a26be
    JL 0x004a26b1                       ; 004a26c0
        ;   XREF to: 004a26b1 (CONDITIONAL_JUMP)  ; LAB_004a26b1
    MOV dword ptr [EDI],0x0             ; 004a26c2
        ;   Label: LAB_004a26c2
    POP EDI                             ; 004a26c8
    POP ESI                             ; 004a26c9
    POP EBX                             ; 004a26ca
    RET                                 ; 004a26cb
    PUSH 0x2                            ; 004a26cc
        ;   Label: LAB_004a26cc
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a26ce
    PUSH EAX                            ; 004a26d1
    CALL dword ptr [EDX]                ; 004a26d2
    ADD ESP,0x8                         ; 004a26d4
    JMP 0x004a26b8                      ; 004a26d7
        ;   XREF to: 004a26b8 (UNCONDITIONAL_JUMP)  ; LAB_004a26b8

