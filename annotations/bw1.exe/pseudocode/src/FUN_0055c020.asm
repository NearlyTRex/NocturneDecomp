; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0055c020(int param_1,int param_2)
;
;
; XREF[3]:
;   FUN_0055ba50 at 0055ba64
;   FUN_0055bf10 at 0055bf73
;   FUN_0055c060 at 0055c0a3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0055c020
        ;   Label: FUN_0055c020
    MOV EBX,dword ptr [ESP + 0x8]       ; 0055c021
    MOV ECX,dword ptr [ESP + 0xc]       ; 0055c025
    PUSH ESI                            ; 0055c029
    MOV EAX,ECX                         ; 0055c02a
    IMUL EDX,EAX,0x44                   ; 0055c02c
        ;   Label: LAB_0055c02c
    ADD EDX,EBX                         ; 0055c02f
    MOV ESI,dword ptr [EDX + 0x15b46c]  ; 0055c031
    TEST ESI,ESI                        ; 0055c037
    JL 0x0055c03f                       ; 0055c039
        ;   XREF to: 0055c03f (CONDITIONAL_JUMP)  ; LAB_0055c03f
    MOV EAX,ESI                         ; 0055c03b
    JMP 0x0055c02c                      ; 0055c03d
        ;   XREF to: 0055c02c (UNCONDITIONAL_JUMP)  ; LAB_0055c02c
    POP ESI                             ; 0055c03f
        ;   Label: LAB_0055c03f
    CMP ECX,EAX                         ; 0055c040
        ;   Label: LAB_0055c040
    JZ 0x0055bfb0                       ; 0055c042
        ;   XREF to: 0055bfb0 (CONDITIONAL_JUMP)  ; LAB_0055bfb0
    IMUL EDX,ECX,0x44                   ; 0055c048
    MOV ECX,dword ptr [EDX + EBX*0x1 + 0x15b46c] ; 0055c04b
    MOV dword ptr [EDX + EBX*0x1 + 0x15b46c],EAX ; 0055c052
    JMP 0x0055c040                      ; 0055c059
        ;   XREF to: 0055c040 (UNCONDITIONAL_JUMP)  ; LAB_0055c040

