; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_004a2780(int *param_1)
;
;
; XREF[1]:
;   FUN_004a3240 at 004a3269
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a2780
        ;   Label: FUN_004a2780
    PUSH EDI                            ; 004a2781
    MOV EDI,dword ptr [ESP + 0xc]       ; 004a2782
    MOV EDX,dword ptr [EDI]             ; 004a2786
    XOR EBX,EBX                         ; 004a2788
    TEST EDX,EDX                        ; 004a278a
    JLE 0x004a27a9                      ; 004a278c
        ;   XREF to: 004a27a9 (CONDITIONAL_JUMP)  ; LAB_004a27a9
    PUSH ESI                            ; 004a278e
    MOV ESI,EDI                         ; 004a278f
    MOV EAX,dword ptr [ESI + 0x4]       ; 004a2791
        ;   Label: LAB_004a2791
    PUSH EAX                            ; 004a2794
    MOV EDX,dword ptr [EAX + 0x14]      ; 004a2795
    ADD ESI,0x4                         ; 004a2798
    INC EBX                             ; 004a279b
    CALL dword ptr [EDX + 0x4]          ; 004a279c
    MOV ECX,dword ptr [EDI]             ; 004a279f
    ADD ESP,0x4                         ; 004a27a1
    CMP EBX,ECX                         ; 004a27a4
    JL 0x004a2791                       ; 004a27a6
        ;   XREF to: 004a2791 (CONDITIONAL_JUMP)  ; LAB_004a2791
    POP ESI                             ; 004a27a8
    POP EDI                             ; 004a27a9
        ;   Label: LAB_004a27a9
    POP EBX                             ; 004a27aa
    RET                                 ; 004a27ab

