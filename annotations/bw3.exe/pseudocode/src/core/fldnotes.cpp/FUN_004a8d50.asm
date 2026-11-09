; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int * core_fldnotes_cpp_FUN_004a8d50(int *param_1,int param_2,int param_3)
;
;
; XREF[2]:
;   core_fldnotes.cpp_FUN_004abe00 at 004ac048
;   core_fldnotes.cpp_FUN_004ac6b0 at 004ac87f
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004a8d50
        ;   Label: core_fldnotes.cpp_FUN_004a8d50
    PUSH ESI                            ; 004a8d51
    PUSH EDI                            ; 004a8d52
    PUSH EBP                            ; 004a8d53
    MOV EBP,dword ptr [ESP + 0x14]      ; 004a8d54
    MOV EDI,dword ptr [ESP + 0x18]      ; 004a8d58
    MOV ESI,dword ptr [ESP + 0x1c]      ; 004a8d5c
    MOV EDX,dword ptr [EBP]             ; 004a8d60
    XOR EBX,EBX                         ; 004a8d63
    TEST EDX,EDX                        ; 004a8d65
    JLE 0x004a8d94                      ; 004a8d67
        ;   XREF to: 004a8d94 (CONDITIONAL_JUMP)  ; LAB_004a8d94
    MOV ECX,EBP                         ; 004a8d69
    MOV EAX,dword ptr [ECX + 0x4]       ; 004a8d6b
        ;   Label: LAB_004a8d6b
    MOV EDX,dword ptr [EAX]             ; 004a8d6e
    CMP EDI,EDX                         ; 004a8d70
    JL 0x004a8d89                       ; 004a8d72
        ;   XREF to: 004a8d89 (CONDITIONAL_JUMP)  ; LAB_004a8d89
    ADD EDX,dword ptr [EAX + 0x8]       ; 004a8d74
    CMP EDI,EDX                         ; 004a8d77
    JGE 0x004a8d89                      ; 004a8d79
        ;   XREF to: 004a8d89 (CONDITIONAL_JUMP)  ; LAB_004a8d89
    MOV EDX,dword ptr [EAX + 0x4]       ; 004a8d7b
    CMP ESI,EDX                         ; 004a8d7e
    JL 0x004a8d89                       ; 004a8d80
        ;   XREF to: 004a8d89 (CONDITIONAL_JUMP)  ; LAB_004a8d89
    ADD EDX,dword ptr [EAX + 0xc]       ; 004a8d82
    CMP ESI,EDX                         ; 004a8d85
    JL 0x004a8d96                       ; 004a8d87
        ;   XREF to: 004a8d96 (CONDITIONAL_JUMP)  ; LAB_004a8d96
    INC EBX                             ; 004a8d89
        ;   Label: LAB_004a8d89
    MOV EAX,dword ptr [EBP]             ; 004a8d8a
    ADD ECX,0x4                         ; 004a8d8d
    CMP EBX,EAX                         ; 004a8d90
    JL 0x004a8d6b                       ; 004a8d92
        ;   XREF to: 004a8d6b (CONDITIONAL_JUMP)  ; LAB_004a8d6b
    XOR EAX,EAX                         ; 004a8d94
        ;   Label: LAB_004a8d94
    POP EBP                             ; 004a8d96
        ;   Label: LAB_004a8d96
    POP EDI                             ; 004a8d97
    POP ESI                             ; 004a8d98
    POP EBX                             ; 004a8d99
    RET                                 ; 004a8d9a

