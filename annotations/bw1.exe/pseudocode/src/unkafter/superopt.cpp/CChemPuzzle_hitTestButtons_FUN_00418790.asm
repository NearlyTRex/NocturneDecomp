; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkafter_superopt_cpp_CChemPuzzle_hitTestButtons_FUN_00418790(CChemPuzzle *this_ptr,int param_2,int param_3)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 00418790
        ;   Label: unkafter_superopt.cpp_CChemPuzzle_hitTestButtons_FUN_00418790
    PUSH ESI                            ; 00418791
    PUSH EDI                            ; 00418792
    PUSH EBP                            ; 00418793
    MOV EBP,dword ptr [ESP + 0x1c]      ; 00418794
    MOV EAX,dword ptr [ESP + 0x14]      ; 00418798
    XOR EDX,EDX                         ; 0041879c
    MOV ECX,dword ptr [ESP + 0x14]      ; 0041879e
        ;   Label: LAB_0041879e
    MOV ECX,dword ptr [ECX + 0x20]      ; 004187a2
    INC ECX                             ; 004187a5
    CMP EDX,ECX                         ; 004187a6
    JGE 0x004187fa                      ; 004187a8
        ;   XREF to: 004187fa (CONDITIONAL_JUMP)  ; LAB_004187fa
    CMP dword ptr [EAX + 0x98],0x1      ; 004187aa
    JZ 0x004187b9                       ; 004187b1
        ;   XREF to: 004187b9 (CONDITIONAL_JUMP)  ; LAB_004187b9
    INC EDX                             ; 004187b3
        ;   Label: LAB_004187b3
    ADD EAX,0x2c                        ; 004187b4
    JMP 0x0041879e                      ; 004187b7
        ;   XREF to: 0041879e (UNCONDITIONAL_JUMP)  ; LAB_0041879e
    MOV EDI,dword ptr [EAX + 0x90]      ; 004187b9
        ;   Label: LAB_004187b9
    MOV ECX,dword ptr [EAX + 0x88]      ; 004187bf
    MOV EBX,dword ptr [EAX + 0x8c]      ; 004187c5
    MOV ESI,dword ptr [EAX + 0x94]      ; 004187cb
    ADD EDI,ECX                         ; 004187d1
    ADD ESI,EBX                         ; 004187d3
    CMP ECX,dword ptr [ESP + 0x18]      ; 004187d5
    JG 0x004187b3                       ; 004187d9
        ;   XREF to: 004187b3 (CONDITIONAL_JUMP)  ; LAB_004187b3
    CMP EDI,dword ptr [ESP + 0x18]      ; 004187db
    JL 0x004187b3                       ; 004187df
        ;   XREF to: 004187b3 (CONDITIONAL_JUMP)  ; LAB_004187b3
    CMP EBP,EBX                         ; 004187e1
    JL 0x004187b3                       ; 004187e3
        ;   XREF to: 004187b3 (CONDITIONAL_JUMP)  ; LAB_004187b3
    CMP EBP,ESI                         ; 004187e5
    JG 0x004187b3                       ; 004187e7
        ;   XREF to: 004187b3 (CONDITIONAL_JUMP)  ; LAB_004187b3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004187e9
    MOV dword ptr [EAX + 0x24],EDX      ; 004187ed
    MOV EAX,0x1                         ; 004187f0
    POP EBP                             ; 004187f5
    POP EDI                             ; 004187f6
    POP ESI                             ; 004187f7
    POP EBX                             ; 004187f8
    RET                                 ; 004187f9
    XOR EAX,EAX                         ; 004187fa
        ;   Label: LAB_004187fa
    POP EBP                             ; 004187fc
    POP EDI                             ; 004187fd
    POP ESI                             ; 004187fe
    POP EBX                             ; 004187ff
    RET                                 ; 00418800

