; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; unknown void core_gore_cpp_FUN_004eb950(void)
;
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004eb950
        ;   Label: core_gore.cpp_FUN_004eb950
    MOV EAX,dword ptr [ESP + 0x8]       ; 004eb951
    MOV EDX,dword ptr [ESP + 0xc]       ; 004eb955
    MOV EBX,dword ptr [ESP + 0x10]      ; 004eb959
    MOV ECX,dword ptr [ESP + 0x14]      ; 004eb95d
    CMP EAX,0x1                         ; 004eb961
    JC 0x004eb981                       ; 004eb964
        ;   XREF to: 004eb981 (CONDITIONAL_JUMP)  ; LAB_004eb981
    JBE 0x004eb989                      ; 004eb966
        ;   XREF to: 004eb989 (CONDITIONAL_JUMP)  ; LAB_004eb989
    CMP EAX,0x2                         ; 004eb968
    JNZ 0x004eb981                      ; 004eb96b
        ;   XREF to: 004eb981 (CONDITIONAL_JUMP)  ; LAB_004eb981
    MOV dword ptr [EDX],0x0             ; 004eb96d
    MOV dword ptr [EBX],0x0             ; 004eb973
        ;   Label: LAB_004eb973
    MOV dword ptr [ECX],0x0             ; 004eb979
    POP EBX                             ; 004eb97f
    RET                                 ; 004eb980
    MOV dword ptr [EDX],0x2000          ; 004eb981
        ;   Label: LAB_004eb981
    JMP 0x004eb973                      ; 004eb987
        ;   XREF to: 004eb973 (UNCONDITIONAL_JUMP)  ; LAB_004eb973
    MOV dword ptr [EDX],0x0             ; 004eb989
        ;   Label: LAB_004eb989
    MOV dword ptr [EBX],0x7f80          ; 004eb98f
    MOV dword ptr [ECX],0x0             ; 004eb995
    POP EBX                             ; 004eb99b
    RET                                 ; 004eb99c

