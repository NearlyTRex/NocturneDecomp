; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void FUN_0053dcb0(int param_1,int param_2)
;
;
; XREF[4]:
;   FUN_0053e120 at 0053e356
;   FUN_0053f080 at 0053f3b1
;   FUN_0053f720 at 0053f8fe
;   FUN_005bf640 at 005bf8f9
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 0053dcb0
        ;   Label: FUN_0053dcb0
    PUSH ESI                            ; 0053dcb1
    PUSH EDI                            ; 0053dcb2
    MOV EDI,dword ptr [ESP + 0x14]      ; 0053dcb3
    XOR ESI,ESI                         ; 0053dcb7
    TEST EDI,EDI                        ; 0053dcb9
    JLE 0x0053dd0c                      ; 0053dcbb
        ;   XREF to: 0053dd0c (CONDITIONAL_JUMP)  ; LAB_0053dd0c
    MOV ECX,dword ptr [ESP + 0x10]      ; 0053dcbd
    MOV EDX,dword ptr [ECX + 0x8]       ; 0053dcc1
        ;   Label: LAB_0053dcc1
    CMP EDX,0x100                       ; 0053dcc4
    JLE 0x0053dd10                      ; 0053dcca
        ;   XREF to: 0053dd10 (CONDITIONAL_JUMP)  ; LAB_0053dd10
    MOV EAX,0x7fffffff                  ; 0053dccc
    MOV EBX,EDX                         ; 0053dcd1
    MOV EDX,EAX                         ; 0053dcd3
    SAR EBX,0x4                         ; 0053dcd5
    SAR EDX,0x1f                        ; 0053dcd8
    IDIV EBX                            ; 0053dcdb
    MOV EBX,EAX                         ; 0053dcdd
    MOV EDX,dword ptr [ECX + 0x18]      ; 0053dcdf
        ;   Label: LAB_0053dcdf
    MOV EAX,EBX                         ; 0053dce2
    SAR EDX,0x8                         ; 0053dce4
    IMUL EDX                            ; 0053dce7
    SHRD EAX,EDX,0x10                   ; 0053dce9
    MOV EDX,dword ptr [ECX + 0x1c]      ; 0053dced
    MOV dword ptr [ECX + 0x18],EAX      ; 0053dcf0
    SAR EDX,0x8                         ; 0053dcf3
    MOV EAX,EBX                         ; 0053dcf6
    ADD ECX,0x30                        ; 0053dcf8
    IMUL EDX                            ; 0053dcfb
    SHRD EAX,EDX,0x10                   ; 0053dcfd
    MOV dword ptr [ECX + -0x14],EAX     ; 0053dd01
    INC ESI                             ; 0053dd04
    MOV dword ptr [ECX + -0x28],EBX     ; 0053dd05
    CMP ESI,EDI                         ; 0053dd08
    JL 0x0053dcc1                       ; 0053dd0a
        ;   XREF to: 0053dcc1 (CONDITIONAL_JUMP)  ; LAB_0053dcc1
    POP EDI                             ; 0053dd0c
        ;   Label: LAB_0053dd0c
    POP ESI                             ; 0053dd0d
    POP EBX                             ; 0053dd0e
    RET                                 ; 0053dd0f
    MOV EBX,0x7fffffff                  ; 0053dd10
        ;   Label: LAB_0053dd10
    JMP 0x0053dcdf                      ; 0053dd15
        ;   XREF to: 0053dcdf (UNCONDITIONAL_JUMP)  ; LAB_0053dcdf

