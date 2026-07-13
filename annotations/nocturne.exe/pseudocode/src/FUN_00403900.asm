; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; byte FUN_00403900(int param_1,int param_2,int param_3,int param_4,int param_5,int param_6)
;
;
; XREF[1]:
;   FUN_00403990 at 004039b5
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00403900
        ;   Label: FUN_00403900
    MOV ECX,dword ptr [ESP + 0x8]       ; 00403901
    MOV EDX,dword ptr [ESP + 0xc]       ; 00403905
    MOV EBX,dword ptr [ESP + 0x1c]      ; 00403909
    XOR EAX,EAX                         ; 0040390d
    CMP EDX,EBX                         ; 0040390f
    JLE 0x00403918                      ; 00403911
        ;   XREF to: 00403918 (CONDITIONAL_JUMP)  ; LAB_00403918
    MOV EAX,0x1                         ; 00403913
    CMP EDX,dword ptr [ESP + 0x14]      ; 00403918
        ;   Label: LAB_00403918
    JGE 0x00403920                      ; 0040391c
        ;   XREF to: 00403920 (CONDITIONAL_JUMP)  ; LAB_00403920
    OR AL,0x2                           ; 0040391e
    CMP ECX,dword ptr [ESP + 0x18]      ; 00403920
        ;   Label: LAB_00403920
    JLE 0x00403928                      ; 00403924
        ;   XREF to: 00403928 (CONDITIONAL_JUMP)  ; LAB_00403928
    OR AL,0x4                           ; 00403926
    CMP ECX,dword ptr [ESP + 0x10]      ; 00403928
        ;   Label: LAB_00403928
    JGE 0x00403930                      ; 0040392c
        ;   XREF to: 00403930 (CONDITIONAL_JUMP)  ; LAB_00403930
    OR AL,0x8                           ; 0040392e
    POP EBX                             ; 00403930
        ;   Label: LAB_00403930
    RET                                 ; 00403931

