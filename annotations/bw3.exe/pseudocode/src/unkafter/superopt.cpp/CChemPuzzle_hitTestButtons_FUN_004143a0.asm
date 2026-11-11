; *****************************************************************************
;                               FUNCTION
; *****************************************************************************
; undefined4 __cdecl unkafter_superopt_cpp_CChemPuzzle_hitTestButtons_FUN_004143a0(CChemPuzzle *this_ptr,int param_2,int param_3)
;
; Parameters:
; CChemPuzzle *    Stack[0x4]:4   this_ptr
; int              Stack[0x8]:4   param_2
; int              Stack[0xc]:4   param_3
;
; *****************************************************************************

section .text

    PUSH EBX                            ; 004143a0
        ;   Label: unkafter_superopt.cpp_CChemPuzzle_hitTestButtons_FUN_004143a0
    PUSH ESI                            ; 004143a1
    PUSH EDI                            ; 004143a2
    PUSH EBP                            ; 004143a3
    MOV EBP,dword ptr [ESP + 0x1c]      ; 004143a4
    MOV EAX,dword ptr [ESP + 0x14]      ; 004143a8
    XOR EDX,EDX                         ; 004143ac
    MOV ECX,dword ptr [ESP + 0x14]      ; 004143ae
        ;   Label: LAB_004143ae
    MOV ECX,dword ptr [ECX + 0x20]      ; 004143b2
    INC ECX                             ; 004143b5
    CMP EDX,ECX                         ; 004143b6
    JGE 0x0041440a                      ; 004143b8
        ;   XREF to: 0041440a (CONDITIONAL_JUMP)  ; LAB_0041440a
    CMP dword ptr [EAX + 0x98],0x1      ; 004143ba
    JZ 0x004143c9                       ; 004143c1
        ;   XREF to: 004143c9 (CONDITIONAL_JUMP)  ; LAB_004143c9
    INC EDX                             ; 004143c3
        ;   Label: LAB_004143c3
    ADD EAX,0x2c                        ; 004143c4
    JMP 0x004143ae                      ; 004143c7
        ;   XREF to: 004143ae (UNCONDITIONAL_JUMP)  ; LAB_004143ae
    MOV EDI,dword ptr [EAX + 0x90]      ; 004143c9
        ;   Label: LAB_004143c9
    MOV ECX,dword ptr [EAX + 0x88]      ; 004143cf
    MOV EBX,dword ptr [EAX + 0x8c]      ; 004143d5
    MOV ESI,dword ptr [EAX + 0x94]      ; 004143db
    ADD EDI,ECX                         ; 004143e1
    ADD ESI,EBX                         ; 004143e3
    CMP ECX,dword ptr [ESP + 0x18]      ; 004143e5
    JG 0x004143c3                       ; 004143e9
        ;   XREF to: 004143c3 (CONDITIONAL_JUMP)  ; LAB_004143c3
    CMP EDI,dword ptr [ESP + 0x18]      ; 004143eb
    JL 0x004143c3                       ; 004143ef
        ;   XREF to: 004143c3 (CONDITIONAL_JUMP)  ; LAB_004143c3
    CMP EBP,EBX                         ; 004143f1
    JL 0x004143c3                       ; 004143f3
        ;   XREF to: 004143c3 (CONDITIONAL_JUMP)  ; LAB_004143c3
    CMP EBP,ESI                         ; 004143f5
    JG 0x004143c3                       ; 004143f7
        ;   XREF to: 004143c3 (CONDITIONAL_JUMP)  ; LAB_004143c3
    MOV EAX,dword ptr [ESP + 0x14]      ; 004143f9
    MOV dword ptr [EAX + 0x24],EDX      ; 004143fd
    MOV EAX,0x1                         ; 00414400
    POP EBP                             ; 00414405
    POP EDI                             ; 00414406
    POP ESI                             ; 00414407
    POP EBX                             ; 00414408
    RET                                 ; 00414409
    XOR EAX,EAX                         ; 0041440a
        ;   Label: LAB_0041440a
    POP EBP                             ; 0041440c
    POP EDI                             ; 0041440d
    POP ESI                             ; 0041440e
    POP EBX                             ; 0041440f
    RET                                 ; 00414410

