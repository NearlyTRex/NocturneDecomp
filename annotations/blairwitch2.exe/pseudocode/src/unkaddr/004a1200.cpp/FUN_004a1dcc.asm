; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; void unkaddr_004a1200_cpp_FUN_004a1dcc(void)
;
;
; Referenced Globals:
;   undefined4 DAT_00616014
;   undefined4 DAT_01cab7f0
;   undefined4 DAT_01cab9f0
;
; Called Functions:
;   core_fldnotes.cpp_FUN_004a27e0
;   core_fldnotes.cpp_FUN_004a2890
;   core_fldnotes.cpp_FUN_004a3740
;
; *****************************************************************************

section .text

    LEA EDX,[EDX]                       ; 004a1dcc
        ;   Label: unkaddr_004a1200.cpp_FUN_004a1dcc
    PUSH EBX                            ; 004a1dd0
    PUSH ESI                            ; 004a1dd1
    PUSH EDI                            ; 004a1dd2
    PUSH EBP                            ; 004a1dd3
    CMP dword ptr [0x00616014],0x0      ; 004a1dd4 | DAT_00616014
    JNZ 0x004a1de2                      ; 004a1ddb
        ;   XREF to: 004a1de2 (CONDITIONAL_JUMP)  ; LAB_004a1de2
    POP EBP                             ; 004a1ddd
        ;   Label: LAB_004a1ddd
    POP EDI                             ; 004a1dde
    POP ESI                             ; 004a1ddf
    POP EBX                             ; 004a1de0
    RET                                 ; 004a1de1
    PUSH 0x1b8                          ; 004a1de2
        ;   Label: LAB_004a1de2
    PUSH 0x1eb                          ; 004a1de7
    PUSH 0x40                           ; 004a1dec
    PUSH 0x60                           ; 004a1dee
    PUSH 0x1caf240                      ; 004a1df0
    CALL core_fldnotes.cpp_FUN_004a2890 ; 004a1df5
        ;   XREF to: 004a2890 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a2890()
    ADD ESP,0x14                        ; 004a1dfa
    PUSH 0x1caf240                      ; 004a1dfd
    XOR ESI,ESI                         ; 004a1e02
    CALL core_fldnotes.cpp_FUN_004a27e0 ; 004a1e04
        ;   XREF to: 004a27e0 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a27e0()
    MOV ECX,dword ptr [0x01cab9f0]      ; 004a1e09 | DAT_01cab9f0
    XOR AH,AH                           ; 004a1e0f
    ADD ESP,0x4                         ; 004a1e11
    MOV byte ptr [0x01cab7f0],AH        ; 004a1e14 | DAT_01cab7f0
    TEST ECX,ECX                        ; 004a1e1a
    JLE 0x004a1e46                      ; 004a1e1c
        ;   XREF to: 004a1e46 (CONDITIONAL_JUMP)  ; LAB_004a1e46
    MOV EBX,0x1cab9f4                   ; 004a1e1e
    PUSH 0x1caf240                      ; 004a1e23
        ;   Label: LAB_004a1e23
    PUSH EBX                            ; 004a1e28
    CALL core_fldnotes.cpp_FUN_004a3740 ; 004a1e29
        ;   XREF to: 004a3740 (UNCONDITIONAL_CALL)  ; undefined core_fldnotes.cpp_FUN_004a3740()
    ADD ESP,0x8                         ; 004a1e2e
    TEST EAX,EAX                        ; 004a1e31
    JZ 0x004a1ddd                       ; 004a1e33
        ;   XREF to: 004a1ddd (CONDITIONAL_JUMP)  ; LAB_004a1ddd
    MOV EDI,dword ptr [0x01cab9f0]      ; 004a1e35 | DAT_01cab9f0
    INC ESI                             ; 004a1e3b
    ADD EBX,0x2e4                       ; 004a1e3c
    CMP ESI,EDI                         ; 004a1e42
    JL 0x004a1e23                       ; 004a1e44
        ;   XREF to: 004a1e23 (CONDITIONAL_JUMP)  ; LAB_004a1e23
    XOR EBP,EBP                         ; 004a1e46
        ;   Label: LAB_004a1e46
    MOV dword ptr [0x00616014],EBP      ; 004a1e48 | DAT_00616014
    POP EBP                             ; 004a1e4e
    POP EDI                             ; 004a1e4f
    POP ESI                             ; 004a1e50
    POP EBX                             ; 004a1e51
    RET                                 ; 004a1e52

