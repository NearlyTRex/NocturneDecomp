; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; int unkaddr_004a1200_cpp_FUN_004a1b5e(int param_1)
;
;
; Referenced Globals:
;   undefined4 DAT_01cab9f0
;
; *****************************************************************************

section .text

    MOV EDX,EDX                         ; 004a1b5e
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1b5e
    PUSH EBX                            ; 004a1b60
    PUSH ESI                            ; 004a1b61
    MOV ESI,dword ptr [0x01cab9f0]      ; 004a1b62 | DAT_01cab9f0
    MOV EBX,dword ptr [ESP + 0xc]       ; 004a1b68
    XOR ECX,ECX                         ; 004a1b6c
    TEST ESI,ESI                        ; 004a1b6e
    JLE 0x004a1b95                      ; 004a1b70
        ;   XREF to: 004a1b95 (CONDITIONAL_JUMP)  ; LAB_004a1b95
    MOV EAX,0x1cab9f4                   ; 004a1b72
    MOV EDX,dword ptr [EAX + 0x140]     ; 004a1b77
        ;   Label: LAB_004a1b77
    CMP EBX,EDX                         ; 004a1b7d
    JL 0x004a1b8b                       ; 004a1b7f
        ;   XREF to: 004a1b8b (CONDITIONAL_JUMP)  ; LAB_004a1b8b
    ADD EDX,dword ptr [EAX + 0x144]     ; 004a1b81
    CMP EDX,EBX                         ; 004a1b87
    JG 0x004a1ba3                       ; 004a1b89
        ;   XREF to: 004a1ba3 (CONDITIONAL_JUMP)  ; LAB_004a1ba3
    INC ECX                             ; 004a1b8b
        ;   Label: LAB_004a1b8b
    ADD EAX,0x2e4                       ; 004a1b8c
    CMP ECX,ESI                         ; 004a1b91
    JL 0x004a1b77                       ; 004a1b93
        ;   XREF to: 004a1b77 (CONDITIONAL_JUMP)  ; LAB_004a1b77
    MOV EAX,0xffffffff                  ; 004a1b95
        ;   Label: LAB_004a1b95
    MOV dword ptr [0x01cab9f0],ESI      ; 004a1b9a | DAT_01cab9f0
    POP ESI                             ; 004a1ba0
    POP EBX                             ; 004a1ba1
    RET                                 ; 004a1ba2
    MOV EAX,ECX                         ; 004a1ba3
        ;   Label: LAB_004a1ba3
    MOV dword ptr [0x01cab9f0],ESI      ; 004a1ba5 | DAT_01cab9f0
    POP ESI                             ; 004a1bab
    POP EBX                             ; 004a1bac
    RET                                 ; 004a1bad

